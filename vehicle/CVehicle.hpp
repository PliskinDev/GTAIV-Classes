#pragma once

#include "../ped/CPed.hpp"

namespace rage
{
    class CVehicle : public CPhysical
    {
    public:
        char pad_0x0120[2896];
        uint8_t m_radio_station;
        char pad_0x0D61[55];
        uint8_t m_siren_with_no_driver;
        char pad_0x0D99[123];
        uint32_t m_vehicle_physics;
        char pad_0x0E18[332];
        uint8_t m_handbrake;
        uint8_t m_lights;
        uint8_t m_takes_less_damage;
        bool m_is_drowning;
        bool m_can_be_targeted;
        uint8_t m_headlights;
        char pad_0x0F6C;
        uint8_t m_pretend_occupants;
        char pad_0x0F6E;
        char pad_0x0F70;
        char pad_0x0F71;
        bool m_is_police_vehicle;
        bool m_can_be_visibly_damaged;
        char pad_0x0F74[2];
        uint32_t m_time_of_creation2;
        char pad_0x0F78[32];
        uint16_t m_alarm;
        char pad_0x0F9A[6];
        CPed* m_driver;
        CPed* m_passengers[8];
        uint8_t m_bone_count;
        char pad_0x0FC4[32];
        uint8_t m_colors[4];
        char pad_0x0FE8[216];
        uint8_t m_max_passengers;
        char pad_0x10C1[7];
        float m_gas_pedal;
        float m_brake_pedal;
        char pad_0x10D0[7];
        float m_steer_bias;
        float m_steering;
        char pad_0x10DC[32];
        float m_engine_health;
        char pad_1100[8];
        uint8_t m_created_by;
        char pad_1109[9];
        uint8_t m_light_state;
        char pad_0x1113[5];
        float m_dirt_level;
        char pad_0x111C[4];
        uint8_t m_siren_health[8];
        float m_petrol_tank_health;
        char pad_0x112C[184];
        uint8_t m_indicators[4];
        char pad_0x11E8[8];
        uint8_t m_siren_on[8];
        char pad_0x11F8[236];
        uint32_t m_time_of_creation;
        char pad_0x12E8[56];
        uint32_t m_door_lock_state;
        char pad_0x1324[24];
        uint32_t m_horn;
        char pad_0x1340[3472];
        
    };
}

