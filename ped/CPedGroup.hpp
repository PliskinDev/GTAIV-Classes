#pragma once

#include <cstdint>

class CPedGroupMembers
{
public:
    struct PedGroupMember
    {
        uint32_t _0x0000;
        uint32_t m_hPed;
    };
   PedGroupMember _0x0000;
   PedGroupMember m_leader;
   PedGroupMember _0x0040;
};

class CPedGroup
{
public:
    uint32_t _0x0000;
    uint32_t _0x0004;
    CPedGroupMembers m_members;
    uint32_t* m_formation;
    uint16_t _0x0054;
    uint16_t m_flags;
    uint32_t m_threadId;
};