#pragma once

#include "CMessageBuffer.hpp"

namespace rage
{
    class CNetworkArrayMgr
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        uint32_t _0x0010;
        uint32_t _0x0014;
        uint32_t _0x0018;
        uint32_t _0x001C;
        uint32_t _0x0020;
        uint32_t _0x0024;
        uint32_t _0x0028;
        uint32_t _0x002C;
        uint32_t _0x0030;
        CMessageBuffer m_msg[32];
        uint32_t _0x8034;
        uint32_t _0x8038;
        uint32_t _0x803C;
        uint32_t _0x8040;
        uint32_t _0x8044;
        char pad_0x8048[63];
        uint32_t _0x8144;
        uint8_t _0x8148;
        uint8_t _0x8149;
        uint8_t _0x814A;
        uint8_t _0x814B;
    };
}