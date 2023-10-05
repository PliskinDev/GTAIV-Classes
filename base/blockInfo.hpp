#pragma once

#include <cstdint>

namespace rage
{
    class BlockInfo
    {
    public:
        uint32_t m_offset;
        uint32_t* m_data;
        uint32_t m_size;
    };
    
    class BlockMap
    {
    public:
        uint16_t virtual_count;
        uint16_t physical_count;
        BlockInfo m_blocks[128];
    };
}