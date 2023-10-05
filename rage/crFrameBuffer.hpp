#pragma once

#include "sysArray.hpp"

namespace rage
{
    class crFrame
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        sysArray _0x000C;
        uint32_t* m_next;
    };

    class crFrameDof
    {
    public:
        void* m_vmt;
        uint8_t m_flags;
        uint8_t _0x0005;
        uint16_t _0x0006;
        uint16_t _0x0008;
        uint16_t _0x000A;
        uint32_t _0x000C;
    };

    class crFrameDofFloat
    {
    public:
        crFrameDof m_parent;
        float m_value;
        float _0x0014;
        float _0x0018;
        float _0x001C;
    };

    class crFrameDofInt
    {
    public:
       crFrame m_parent;
       uint32_t m_value;
       char pad_0014[3];
    };
}





