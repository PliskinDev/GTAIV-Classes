#pragma once

#include "datBitBuffer.hpp"

namespace rage
{
    class CMessageBuffer
    {
    public:
        void* m_vmt;
        datBitBuffer m_bit_buffer;
        uint8_t m_data[992];
    };
}