#pragma once

#include <cstdint>
#include "../rage/vector.hpp"
#include "../player/CPlayer.hpp"
#include "../ped/CPed.hpp"

enum eWantedState
{
    WANTED_STATE_NONE,
    WANTED_STATE_ON_FOOT,
    WANTED_STATE_IN_VEHICLE,
    WANTED_STATE_HELI_CHASE,
    WANTED_STATE_BOAT_CHASE,
    WANTED_STATE_LOCKDOWN
};

enum eWantedStatus
{
    WANTED_STATUS_NO_STARS,
    WANTED_STATUS_ONE_STAR,
    WANTED_STATUS_TWO_STARS,
    WANTED_STATUS_THREE_STARS,
    WANTED_STATUS_FOUR_STARS,
    WANTED_STATUS_FIVE_STARS,
    WANTED_STATUS_SIX_STARS
};

enum ePoliceState
{
    POLICE_STATE_IDLE,
    POLICE_STATE_PATROL,
    POLICE_STATE_PURSUIT,
    POLICE_STATE_SEARCH,
    POLICE_STATE_COMBAT
};

enum ePoliceStatus
{
    POLICE_STATUS_CALM,
    POLICE_STATUS_SUSPICIOUS,
    POLICE_STATUS_ALERT,
    POLICE_STATUS_COMBAT
};

class CWanted
{
public:
    uint32_t _0x0000;
    uint32_t _0x0004;
    uint32_t m_dwFakeWantedLevel;
    uint32_t m_dwWantedLevelIncrement;
    uint32_t _0x0010;
    float _0x0014;
    uint32_t _0x0018;
    uint32_t m_wanted_multiplier;
    uint8_t _0x0020;
    char pad_0x0021[15];
    rage::fvector4 _0x0030;
    rage::fvector4 _0x0040;
    int32_t m_flashing_stars_time;
    uint32_t _0x0054;
    uint16_t _58;
    bool m_is_police_ignores_player;
    bool m_is_peds_ignore_player;
    bool m_all_random_peds_flee;
    bool m_ignore_low_priority_shocking_events;
    bool m_dont_dispatch_cops_for_player;
    uint8_t  m_maintain_flashing_stars_after_offence;
    float _0x005C;
    float _0x0060;
    uint8_t _0x0064;
    uint8_t _0x0065;
    char pad_0x0066[5];
    int32_t m_player_has_flashing_star_after_offense;
    CPlayerObj3 _0x0070[16];
    char pad_0370[16];
    uint8_t _0x00380;
    char pad_0381[3];
    uint32_t m_secbuff_wanted_level;
    uint32_t _0x0388;
    uint32_t _0x038C;
    char pad_038D[3];
    CPed* _0x00390;
    char pad_0394[12];
    uint32_t _0x03A0;
    uint32_t _0x03A4;
    uint32_t _0x03A8;
    uint32_t _0x03AC;
    uint32_t _0x03B0;
    float _0x03B4;
    uint32_t _0x003B8;
    uint8_t _0x003BC;
    char pad_03BD[3];
    uint32_t _0x03C0;
    uint32_t _0x03C4;
    float _0x03C8;
    uint32_t _0x03CC;
    uint32_t m_control_flags;
    uint32_t m_allow_to_carry_non_mission_objects;
    uint32_t m_player_rag_doll_control;
    uint32_t _0x03D4;
    uint32_t _0x03D8;
    uint8_t _0x03DC;
    uint8_t _0x03DD;
    uint8_t _0x03DE;
    uint8_t _0x03DF;
    float _0x03E0;
    uint32_t _3E4;
    uint32_t _0x03E8;
    float _0x03EC;
    float _0x03F0;
    float _0x03F4;
    uint32_t _0x03F8;
    uint32_t _0x03FC;
    rage::fvector4 _0x0400l;
    uint32_t _00410;
    bool m_disable_player_sprint;
    bool _0x0415;
    bool m_have_mobile_phone;
    bool m_force_interior_lighting;
    uint16_t _0x0418;
    uint16_t _0x041A;
    uint32_t _0x041C;
    uint32_t _0x0420;
    uint32_t _0x0424;
    uint32_t _0x0428;
    uint32_t _0x042C;
    uint32_t m_last_hit_vehicle_time;
    uint32_t m_last_hit_ped_time;
    uint32_t m_last_hit_building_time;
    uint32_t m_last_hit_object_time;
    uint32_t m_last_time_drove_on_pavement;
    uint32_t m_last_ran_light_time;
    uint32_t m_last_drove_against_traffic_time;
};






