#pragma once

#include <cstdint>
#include "../rage/vector.hpp"

class CPortalTracker
{
public:
    void* m_vmt;
    uint32_t _0x0004;
    uint32_t _0x0008;
    uint32_t _0x000C;
    rage::fvector4 m_entity_position;
    rage::fvector4 m_entity_position2;
    uint32_t* m_dynamic_entity;
    uint32_t* m_dynamic_entity2;
    int32_t m_room_id;
    uint8_t _0x003C;
    uint8_t _0x003D;
    uint8_t _0x003E;
    uint8_t _0x003F;
    uint32_t _0x0040;
    uint8_t _0x0044;
    bool m_loads_collisions;
    uint8_t _0x0046;
    uint8_t _0x0047;
    uint8_t _0x0048;
    uint8_t _0x0049;
    uint8_t _0x004A;
    uint8_t _0x004B;
};