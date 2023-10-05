#pragma once

#include "../ped/CPed.hpp"
#include "../police/CWanted.hpp"

class CPlayerPed : public CPed
{
public:
    char pad_0x0E6C[38];
    bool m_is_player_cop;
    char pad_0x00EA8[68];
    uint32_t _0x0EEC;
    char pad_0x0EF0[4];
    uint32_t m_menu_control;
};