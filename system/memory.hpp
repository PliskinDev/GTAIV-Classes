#pragma once

#include <cstdint>

namespace rage
{
    struct Block {
        size_t size;
        bool isFree;
        Block* next;
    };

    Block* g_memoryStart = nullptr;

    void* atMalloc(size_t size) {
        if (size == 0) {
            return nullptr;
        }

        size_t blockSize = sizeof(Block) + ((size + sizeof(Block) - 1) / sizeof(Block)) * sizeof(Block);

        if (g_memoryStart == nullptr || blockSize > g_memoryStart->size) {
            return nullptr;
        }

        Block* allocatedBlock = g_memoryStart;
        Block* freeBlock = nullptr;

        while (allocatedBlock != nullptr) {
            if (allocatedBlock->isFree && allocatedBlock->size >= blockSize) {
                freeBlock = allocatedBlock;
                break;
            }
            allocatedBlock = allocatedBlock->next;
        }

        if (freeBlock == nullptr) {
            return nullptr;
        }

        if (freeBlock->size >= blockSize + sizeof(Block) + sizeof(Block)) {
            Block* newFreeBlock = reinterpret_cast<Block*>(reinterpret_cast<char*>(freeBlock) + blockSize);

            newFreeBlock->size = freeBlock->size - blockSize - sizeof(Block);
            newFreeBlock->isFree = true;
            newFreeBlock->next = freeBlock->next;

            freeBlock->size = blockSize;
            freeBlock->isFree = false;
            freeBlock->next = newFreeBlock;
        } else {
            freeBlock->isFree = false;
        }

        return reinterpret_cast<void*>(reinterpret_cast<char*>(freeBlock) + sizeof(Block));
    }

    void atFree(void* ptr) {
        if (ptr == nullptr) {
            return;
        }

        Block* block = reinterpret_cast<Block*>(reinterpret_cast<char*>(ptr) - sizeof(Block));

        block->isFree = true;

        Block* currentBlock = g_memoryStart;
        while (currentBlock != nullptr && currentBlock->next != nullptr) {
            if (currentBlock->isFree && currentBlock->next->isFree) {
                currentBlock->size += currentBlock->next->size + sizeof(Block);
                currentBlock->next = currentBlock->next->next;
            }
            currentBlock = currentBlock->next;
        }
    }

    void atInit(void* memory, size_t size) {
        if (memory == nullptr || size < sizeof(Block)) {
            return;
        }

        Block* initialBlock = reinterpret_cast<Block*>(memory);
        initialBlock->size = size - sizeof(Block);
        initialBlock->isFree = true;
        initialBlock->next = nullptr;
        g_memoryStart = initialBlock;
    }  
    
    template <typename T>
    class CMemoryPool 
    {
    public:
        CMemoryPool(size_t blockSize, size_t numBlocks)
            : m_blockSize(blockSize), m_numBlocks(numBlocks), m_memory(nullptr), m_freeList(nullptr) 
            {

            m_memory = static_cast<T*>(atMalloc(m_blockSize * m_numBlocks));

            m_freeList = reinterpret_cast<T*>(m_memory);
            T* currentBlock = m_freeList;

            for (size_t i = 0; i < m_numBlocks - 1; ++i) {
                T* nextBlock = reinterpret_cast<T*>(reinterpret_cast<char*>(currentBlock) + m_blockSize);
                currentBlock->next = nextBlock;
                currentBlock = nextBlock;
            }

            currentBlock->next = nullptr;
        }

        ~CMemoryPool() {
            atFree(m_memory);
        }

        T* Allocate() {
            if (m_freeList == nullptr) {
                return nullptr;
            }

            T* block = m_freeList;
            m_freeList = m_freeList->next;
            return block;
        }

        void Deallocate(T* block) {
            block->next = m_freeList;
            m_freeList = block;
        }

    private:
        struct Block {
            T* next;
        };

        size_t m_blockSize;
        size_t m_numBlocks;
        T* m_memory;
        T* m_freeList;
    };
}