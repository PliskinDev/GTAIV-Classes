#pragma once

#include "../entities/CPhysical.hpp"
#include "CPedObj.hpp"

namespace rage
{
    class CPed : public CPhysical
    {
    public:
        uint8_t m_dead;
        uint8_t m_injured;
        uint8_t m_fatally_injured;
        uint8_t _0x0213;
        uint32_t _0x0214;
        uint8_t m_creation_flags1;
        uint8_t m_creation_flags2;
        uint8_t _0x021A;
        uint8_t _0x021B;
        uint32_t* m_ped_base;
        uint8_t _0x0220;
        uint8_t _0x0221;
        uint8_t _0x0222;
        uint8_t _0x0223;
        uint32_t* m_intelligence;
        uint32_t* m_player_info;
        uint32_t* m_ped_data;
        uint32_t _0x0230;
        uint32_t _0x0234;
    };
}