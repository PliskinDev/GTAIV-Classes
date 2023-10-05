#pragma once

#include <cstdint>
#include "CNetworkObjectPlayerState.hpp"

namespace rage
{
    class CNetworkObject
    {
    public:
        void* m_vmt;
        uint32_t* m_wrapped_object;
        int32_t m_object_type;
        uint16_t m_network_id;
        bool m_remotely_owned;
        uint8_t m_owner_peer_id;
        uint8_t _0x00010;
        uint8_t m_local_flags;
        uint8_t m_global_flags;
        uint8_t _0x0013;
        uint16_t _0x0014;
        uint8_t _0x0016;
        uint8_t _0x0017;
        uint32_t* m_atd_node_network_object;
        uint32_t* m_net_blender;
        uint32_t _0x0020;
        uint8_t m_flags;
        uint8_t _0x0025;
        uint8_t _0x0026;
        uint8_t _0x0027;
        CNetworkObjectPlayerState m_player_ref[32];
        uint32_t _0x0088;
        uint32_t m_player_sync_data[32];
        uint32_t _0x010C;
        int32_t m_owner_ship_token;
    };
}