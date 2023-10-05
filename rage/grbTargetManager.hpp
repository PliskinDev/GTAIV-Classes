#pragma once

#include <cstdint>
#include "sysArray.hpp"
#include "../base/datBase.hpp"

namespace rage
{
    class grbTargetManagerObj1
    {
    public:
        char pad_0x0000[136];
        sysArray _0x0088;
        uint32_t _0x0090;
    };

    class grbTargetManager : public datBase
    {
    public:
        sysArray m_0x0004;
        sysArray m_0x000C;
    };
}