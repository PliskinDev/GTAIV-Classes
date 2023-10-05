#pragma once

#include <cstdint>

namespace rage
{
    struct SMS
    {
        uint32_t _0x0000;
        uint32_t m_securom_wnd;
        uint32_t _0x0008;
        uint32_t _0x000C;
        uint32_t m_challenge_msg;
        uint32_t _0x0014;
        uint32_t m_register_msg;
        uint32_t _0x0012;
        uint32_t _0x0020;
        uint32_t m_response_msg;
        uint32_t _0x0028;
        uint32_t _0x002C;
        uint32_t _0x0030;
        uint32_t _0x0034;
        uint32_t _0x0038;
        uint32_t _0x003C;
        uint32_t _0x0040;
        uint32_t _0x0044;
        uint32_t _0x0048;
    };

    struct SMSData
    {
        uint32_t _0x000;
        uint32_t _0x004;
        uint32_t _0x008;
        uint32_t _0x00C;
        int32_t m_command;
        int32_t m_param2;
        int32_t m_param3;
        uint32_t _0x001C;
        uint32_t _0x0020;
        uint32_t _0x0024;
        uint32_t _0x0028;
        uint32_t _0x002C;
    };
}