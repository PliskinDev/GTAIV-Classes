#pragma once

#include <cstdint>

class CPtrNodeDouble
{
public:
    uint32_t* m_ptr;
    uint32_t* m_next;
    uint32_t* m_prev;
};