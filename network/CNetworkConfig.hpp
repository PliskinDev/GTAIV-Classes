#pragma once

#include <cstdint>

namespace rage
{
    class CNetworkConfig
    {
    public:
        uint32_t m_game_mode;
        uint32_t m_game_ranked;
        uint32_t m_max_slots;
        uint32_t m_max_private_slots;
        uint32_t _0x0010;
        uint32_t m_network_team_option;
        uint32_t _0x0018;
        uint32_t _0x001C;
        uint32_t _0x0020;
        uint32_t _0x0024;
        uint32_t _0x0028;
        uint32_t _0x002C;
        uint32_t _0x0030;
        uint32_t _0x0034;
        uint32_t _0x0038;
        uint32_t _0x003C;
        uint32_t _0x0040;
        uint32_t _0x0044;
        uint32_t _0x0048;
        uint32_t m_friendly_fire_option;
        uint32_t _0x0050;
        uint32_t _0x0054;
        uint32_t _0x0058;
        uint32_t _0x005C;
        uint32_t _0x0060;
        uint32_t _0x0064;
        uint32_t _0x0068;
        uint32_t _0x006C;
        uint32_t _0x0070;
        uint32_t _0x0074;
    };
}