#pragma once

#include <cstdint>

namespace rage
{
    class CParseNetworkObject
    {
    public:
        void* m_vmt;
        uint32_t m_flags;
        uint32_t m_net_object_type;
    };
}