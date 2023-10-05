#pragma once

#include <cstdint>

namespace rage
{
    constexpr char toLower(char c)
    {
        return (c >= 'A' && c <= 'Z') ? (c + ('a' - 'A')) : c;
    }

    constexpr uint32_t atStringHash(const char* str)
    {
        uint32_t hash = 0;
        while (*str)
        {
            hash += toLower(*str++);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    constexpr uint32_t atStringHash32(const char* str, uint32_t seed = 0)
    {
        uint32_t hash = seed;
        while (*str)
        {
            hash += toLower(*str++);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }
}

#define ATSTRINGHASH(str) rage::atStringHash(str)