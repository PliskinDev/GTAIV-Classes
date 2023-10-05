#pragma once

#include "../base/CBaseModelInfo.hpp"

class CPedModelBase
{
public:
    uint8_t _0x0000;
    uint8_t _0x0001;
    uint8_t _0x0002;
    uint8_t _0x0003;
    uint8_t _0x0004;
    uint8_t _0x0005;
    uint8_t _0x0006;
    uint8_t _0x0007;
    uint32_t m_model_hash;
};

class CPedModelInfo : public CBaseModelInfo
{
public:
    uint32_t field_60;
    uint32_t field_64;
    uint32_t m_bone_present_mask_l;
    uint32_t m_bone_present_mask_h;
    uint32_t m_props_id;
    uint32_t m_model_name_hash;
    uint32_t m_model_drawable_id;
    uint32_t _0x007C;
    uint32_t m_gesture_group;
    uint32_t m_facial_group;
    uint32_t m_viseme_group;
    bool m_is_player;
    char pad_0x008D[3];
    uint32_t m_ped_type;
    uint32_t _0x0094;
    uint16_t _0x0098;
    uint16_t m_ped_flags;
    uint32_t _0x009C;
    uint32_t _0x00A0;
    uint32_t _0x00A4;
    uint32_t _0x00A8;
    uint32_t _0x00AC;
    bool m_radio1;
    bool m_radio2;
    uint8_t _0x00B2;
    uint8_t _0x00B3;
    uint16_t _0x00B4;
    uint16_t _0x00B6;
    uint16_t _0x00B8;
    uint16_t _0x00BA;
    uint32_t m_first_voice_key;
    char pad_0x00C0[40];
    uint32_t m_agrp_count;
    bool m_age;
    bool m_sexiness;
    bool m_bravery;
    bool m_agility;
    bool m_e1st_language;
    bool m_e2nd_language;
    char pad_0x00F2[2];
    float m_attack;
    float m_defend;
    float m_melee_martial_level_percent;
    uint32_t m_melee_anims[8];       
    uint32_t m_personality_flags_l;        
    uint32_t m_personality_flags_h;
    uint32_t _0x00128;
    uint32_t _0x012C;
    uint32_t _0x0130;
    uint8_t m_anb_bone_indices[36];
    uint8_t _0x00158;
    uint8_t _0x00159;
    uint16_t _0x015A;
    uint16_t _0x015C;
};