#pragma once

#include "CBlip.hpp"

namespace rage
{
    class CBlip2D : public CBlip
    {
    public:
        void* m_vmt;
        uint32_t _0x000C;
        uint32_t _0x0010;
        uint32_t _0x0014;
        uint32_t _0x0018;
        float m_x;
        float m_y;
    };
}