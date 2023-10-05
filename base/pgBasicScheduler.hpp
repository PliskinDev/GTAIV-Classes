#pragma once

#include "blockInfo.hpp"

namespace rage
{
    class pgBasicScheduler
    {
    public:
        void* m_vmt; // 0x0000
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        uint32_t _0x0010;
        uint32_t _0x0014;
        uint32_t _0x0018;
        uint32_t _0x001C;
        uint32_t _0x0020;
        uint32_t _0x0024;
        BlockMap m_block_maps[2];
        uint32_t _0x0C30;
        uint32_t _0x0C34;
        uint8_t N00000C38;  
    };
}