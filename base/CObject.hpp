#pragma once

#include "../entities/CPhysical.hpp"
#include "../aud/audObjectAudioentity.hpp"

enum eObjectState {
  OBJECT_STATE_DEFAULT = 0,
  OBJECT_STATE_ACTIVE,
  OBJECT_STATE_IDLE,
  OBJECT_STATE_DAMAGED,
  OBJECT_STATE_DESTROYED
};

enum eObjectStatus {
  OBJECT_STATUS_OK = 0,
  OBJECT_STATUS_DAMAGED,
  OBJECT_STATUS_MISSING,
  OBJECT_STATUS_UNKNOWN
};

enum eObjectFlags {
  OBJECT_FLAG_NONE = 0,
  OBJECT_FLAG_SELECTED,
  OBJECT_FLAG_HIGHLIGHTED,
  OBJECT_FLAG_DISABLED,
  OBJECT_FLAG_INVINCIBLE
};

class CObject : public rage::CPhysical
{
public:
    eObjectState m_state;
    eObjectStatus m_status;
    int32_t m_object_flags;
    uint32_t _0x0214;
    char pad_0x0218[8];
    uint16_t _0x0220;
    char pad_0x0221[2];
    uint32_t _0x0224;
    uint16_t m_object_script_id;
    uint8_t _0x022A;
    uint8_t _0x022B;
    char pad_0x022C[20];
    float m_door_state;
    uint32_t _0x0244;
    uint32_t _0x0248;
    char pad_0x024C[4];
    float m_scale;
    uint32_t _0x0254;
    uint32_t _0x0258;
    uint32_t* m_used_as_weapon_data;
    uint32_t _0x0260;
    uint32_t m_aud_tracker;
    audObjectAudioEntity m_aud_object_audio_entity[12];
    uint32_t _0x027C;
    uint32_t _0x0280;
    uint32_t _0x0284;
    uint32_t _0x0288;
    uint32_t _0x028C;
};

class CDummyObject : public rage::CEntity
{
public:
    uint32_t _0x0070;
    uint8_t _0x0074;
    char pad_0x0075[4];
};

