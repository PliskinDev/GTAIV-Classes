#pragma once

#include <cstdint>
#include "../rage/vector.hpp"

class CEntityCoords
{
public:
    rage::fmatrix34 m_matr;
    uint32_t* m_owner;
    uint32_t* m_prev;
    uint32_t* m_next;
    uint32_t _0x004C;
};