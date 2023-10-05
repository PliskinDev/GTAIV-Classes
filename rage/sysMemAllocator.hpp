#pragma once

#include <cstdint>
#include "sysArray.hpp"

namespace rage
{
    class sysMemAllocator
    {
    public:
        virtual ~sysMemAllocator() = default;
    };

    class sysMemSimpleAllocator
    {
    public:
        sysMemAllocator m_parent;
        uint32_t* m_aligned_pool;
        uint32_t* m_memory_pool;
        char pad_0x000C[16];
        uint32_t m_pool_size;
        uint32_t m_unaligned_pool_size;
        uint32_t _0x0054;
        char pad_0x0054[16];
        uint32_t _0x0098;
        uint32_t _0x009C;
        uint32_t _0x00A0;
        uint32_t _0x00A4;
        uint32_t _0x00A8;
        uint32_t _0x00AC;
        uint32_t _0x00B0;
        uint32_t _0x00B4;
        uint32_t _0x00B8;
        uint32_t _0x00BC;
        uint32_t _0x00C0;
        bool m_symbo_is_loaded;
        bool m_pool_allocated;
        uint8_t _0x00C3;
        uint32_t* m_log_file;
        uint32_t _0x00C8;
        sysArray _0x00CC;
        sysArray _0x00D4;
        sysArray _0x00DC;
        sysArray _0x00E4;
        uint32_t _0x00EC;
        char pad_0x00F0[2049];
        uint8_t _0x020F4;
        uint8_t _0x020F5;
        uint8_t _0x020F6;
        uint8_t _0x020F7;
    };

    class sysMemMultiAllocator
    {
    public:
        sysMemAllocator m_parent;
        uint32_t m_allocators[8];
        int32_t m_allocator_count;
    };

    class sysMemBuddyAllocatorPageEntry
    {
    public:
        uint16_t _0x0000;
        uint16_t _0x0002;
        uint16_t m_flags;
    };

    class sysMemBuddyAllocatorPageMap
    {
    public:
        uint32_t* m_page_map;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C[16];
        uint16_t _0x004C[16];
        uint16_t _0x006C[16];
        uint16_t _0x008C[16];
    };

    class sysMemBuddyAllocator
    {
    public:
        sysMemAllocator m_parent;
        uint32_t* m_memory_pool;
        uint32_t _0x0008;
        uint32_t m_pool_size;
        uint32_t m_page_size;
        sysMemBuddyAllocatorPageMap m_page_map;
    };
}




