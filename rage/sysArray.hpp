#pragma once

#include <cstdint>

namespace rage
{
    class sysArray
    {
    public:
        uint32_t* m_data;
        uint16_t m_count;
        uint16_t m_size;
    };

    class sysArrayIterator
    {
    public:
        uint32_t m_index;
        uint32_t* m_item;
        uint32_t* m_array;
    };
}