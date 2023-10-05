#pragma once

#include "datBase.hpp"
#include <cstdint>

namespace rage
{
    class pgBase : public datBase
    {
    public:
        virtual ~pgBase() = default;
    private:
        uint32_t* m_block_map;
    };
}