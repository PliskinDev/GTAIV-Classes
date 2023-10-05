#pragma once

#include <cstdint>

namespace rage
{
    class CBlip
    {
    public:
        uint16_t m_blip_index;
        uint16_t _0x0002;
        uint32_t _0x0004;
        bool m_is_blip_3d;
        uint8_t _0x0009;
        uint8_t _0x000A;
        uint8_t _0x000B;
    };
}