#pragma once

#include <cstdint>

namespace rage
{
    class scrProgram
    {
    public:
        const char* m_name;
        uint32_t m_hash;
        uint32_t* m_code_block;
        uint32_t* m_static_seg;
        uint32_t m_code_size;
        uint16_t m_static_size;
        uint16_t m_arg_count;
        uint16_t m_usage_count;
        uint16_t _0x001A;
    };
}