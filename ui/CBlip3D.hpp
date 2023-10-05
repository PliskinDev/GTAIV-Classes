#pragma once

#include "CBlip.hpp"

namespace rage
{
    class CBlip3D : public CBlip
    {
    public:
        void* m_vmt;
        uint32_t _0x000C;
        uint32_t _0x0010;
        uint32_t _0x0014;
        uint32_t _0x0018;
        uint16_t m_flags;
        uint16_t _0x001E;
        int32_t m_pickup_index;
        uint32_t _0x0024;
        uint32_t _0x0028;
        uint32_t _0x002C;
        float m_coords[4];
        uint32_t _0x0040;
        uint32_t _0x0048;
        uint16_t m_blip_type;
        uint16_t m_blip_display;
        uint32_t _0x0050;
        uint32_t _0x0054;
        bool m_alpha;
        char pad_0059[3];
        uint32_t* m_sprite_info;
        const char* m_blip_name;
        uint16_t N000007E;
    };
}