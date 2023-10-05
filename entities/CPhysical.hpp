#pragma once

#include <cstdint>
#include "CEntity.hpp"
#include "../rage/vector.hpp"

namespace rage
{
    class CPhysicalObj
    {
    public:
        float _0x0000;
        uint32_t* _0x0004;
        uint16_t _0x0008;
        uint16_t _0x000A;
        float _0x000C;
        float _0x0010;
        float _0x0014;
        float _0x0018;
        float _0x001C;
        uint32_t _0x0020;
        uint8_t _0x0024;
        char pad_0x0025[3];
    };

    class CPhysical
    {
    public:
        char pad_0x010C[4];
        float _0x0110;
        char pad_0x0114[4];
        uint32_t m_physical_flags;
        uint16_t m_relationship_group;
        char pad_0x011E[2];
        float _0x0120;
        CPhysicalObj _0x0124;
        char pad_014C[4];
        bool m_collided;
        char pad_0151[3];
        uint32_t _0x0154;
        uint32_t _0x0158;
        uint32_t _0x015C;
        uint32_t _0x0160;
        uint32_t _0x0164;
        uint32_t _0x0168;
        CEntity* _0x016C;
        float _0x0170;                    
        float _0x0174;                    
        char pad_0178[8];
        float _0x0180;                   
        float _0x0184;                   
        float _0x0188;                   
        uint32_t _0x018C;
        float _0x0190;                   
        float _0x0194;                   
        float _0x0198;                 
        char pad_019C[4];
        uint32_t _0x01A0;
        uint32_t _0x01A4;
        uint32_t _0x01A8;
        uint32_t _0x01AC;
        uint32_t _0x01B0;
        uint32_t _0x01B4;
        uint32_t _0x01B8;
        CEntity* m_attached_entity;         
        fvector4 m_attach_offset;
        fvector4 m_quat_attach;
        int16_t m_attach_bone;
        int16_t m_attach_flags;                  
        CEntity* m_damaged_by_entity;            
        uint32_t _0x01E8;
        bool m_weapon_damage_type;
        char pad_01ED[3];
        float m_fHealth;                    
        uint8_t _0x01F4;
        char pad_01F5[3];
        CEntity* _0x01F8;                    
        uint32_t _0x01FC;
        fvector4 m_position_copy;
    };
}