#pragma once

#include <cstdint>
#include "CPlayerPed.hpp"

enum ePlayerFlags : uint32_t
{
	PLAYER_FLAG_CAN_USE_COVER = 0,
	PLAYER_FLAG_UNK_1 = 1,
	PLAYER_FLAG_DAMAGED_AT_LEAST_ONE_PED = 2,
	PLAYER_FLAG_DAMAGED_AT_LEAST_ONE_VEHICLE = 3
};

class CPlayerObj1
{
public:
    char pad_0x0000[32];
    char pad_0x0020[6];
    char pad_0x0038[16];
    char pad_0x0048;
    const char* m_player_name;
    uint32_t m_flags;
    char pad_005D[3];
};

class CPlayerObj3
{
public:
    uint32_t _0x000;
    uint32_t _0x004;
    uint32_t _0x008;
    uint32_t _0x00C;
    uint32_t _0x0010;
    uint32_t _0x0014;
    uint32_t _0x0018;
    uint32_t _0x001C;
    uint32_t _0x0020;
    uint32_t _0x0024;
    uint32_t _0x0028;
    uint32_t _0x002C;
};

class CPlayer
{
public:
    CPlayerObj1 m_obj1;
    CWanted m_wanted;
    char pad_0x04AC[4];
    uint32_t _0x04B0;
    uint32_t _0x04B4;
    uint32_t m_collectable1_total;
    int32_t m_control_disabled_flags;
    char pad_0x04C0[4];
    int32_t m_time_of_death;
    uint32_t _0x04C8;
    float m_forced_drag_mult;
    uint32_t _0x04D0;
    uint32_t _0x04D4;
    uint8_t _0x04D8;
    uint8_t _0x04D9;
    bool m_player_id;
    bool _0x04DB;
    int32_t m_player_state;
    uint8_t _0x04E0;
    uint8_t _0x04E1;
    uint8_t _0x04E2;
    char pad_0x04E3[4];
    uint32_t _0x04E8;
    uint32_t _0x04EC;
    uint32_t _0x04F0;
    uint32_t _0x04F4;
    uint32_t _0x04F8;
    uint32_t _0x04FC;
    float _0x0500;
    uint32_t _0x0504;
    int32_t m_performing_wheelie;
    float _0x050C;
    int32_t m_performing_stoppie;
    float _0x0514;
    uint32_t _0x0518;
    uint32_t _0x051C;
    float _0x0520;
    uint32_t _0x0524;
    float _0x0528;
    uint32_t _0x052C;
    float _0x0530;
    uint16_t _0x0534;
    char pad_0x0536[2];
    uint32_t _0x0538;
    uint32_t _0x053C;
    uint32_t _0x0540;
    uint16_t _0x0544;
    bool m_never_tired;
    bool m_fast_reload;
    bool m_fire_proof;
    bool _0x0549;
    uint16_t m_max_health;
    uint16_t m_max_armor;
    bool _0x054E;
    bool m_free_health_care;
    bool m_can_drive_by;
    bool m_can_be_hassled_by_gangs;
    char pad_0x0552[2];
    ePlayerFlags m_player_flags;
    uint8_t _0x0558;
    uint8_t _0x0559;
    uint16_t _0x55A;
    int32_t m_nPlayerMood;
    uint8_t _0x0560;
    char pad_0x0561[10];
    uint32_t m_connection_manager;
    uint32_t m_player_color;
    int32_t m_player_team;
    uint32_t _0x0578;
    uint32_t _0x057C;
    bool m_died_recently;
    uint8_t _0x0581;
    char pad_0x0582[2];
    uint8_t _0x0584;
    char pad_0x0585[3];
    uint32_t _0x0588;
    uint32_t* m_ped;
    uint32_t _0x0590;
    uint32_t* m_only_onter_this_vehicle;
    float m_afmp_modifier[4];
    float _0x05A8;
    uint8_t _0x05AC;
    char pad_0x05AD[3];
    uint32_t _0x05B0;
    uint32_t _0x05B4;
    uint32_t m_secbuffscore;
    uint32_t m_secbuffer2;
};