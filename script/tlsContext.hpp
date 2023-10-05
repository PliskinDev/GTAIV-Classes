#pragma once

#include <cstdint>

namespace rage
{
    class tlsContext
    {
    public:
        uint32_t _0x0000;
        uint32_t* m_current_resource;
        uint32_t* m_current_allocator;
        uint32_t _0x000C;
        uint32_t _0x0010;
        uint32_t _0x0014;
        uint32_t* m_allocator2;
        uint32_t* m_miniheap_top;
        uint32_t _0x0020;
        uint32_t _0x0024;
        uint32_t _0x0028;
        uint32_t _0x002C;
        uint32_t _0x0030;
        uint32_t _0x0034;
        uint32_t miniheap_size;
        uint32_t _0x003C;
        uint32_t* m_miniheap_start;
        int32_t m_pool_locked;
        uint32_t _0x0048;
        uint32_t _0x004C;
        uint32_t* m_allocator_saved_by_miniheap;
        int32_t m_allocator_push_count;
        uint32_t* m_saved_allocator;
        uint32_t _0x005C;
        int32_t m_cache_lock_count;
        uint32_t _0x0064;
        uint32_t _0x0068;
        uint32_t _0x006C;
        uint32_t _0x0070;
        uint32_t _0x0074;
        uint32_t _0x0078;
        char pad_0x0079[4];
        char pad_0x0080[552];
        char pad_0x002A8[552];
        char pad_0x04D0[476]; 
        uint32_t _0x06AC;
        char _0x06B0[544];
        uint32_t _0x08D0;
        uint32_t _0x08D4;
    };
}