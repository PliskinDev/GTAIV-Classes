#pragma onc


#include "../base/CVirtualBase.hpp"
#include "../data/CPtrNode.hpp"
#include "../data/CPortalTracker.hpp"
#include "../rage/grbTargetManager.hpp"

namespace rage
{
    class CEntity : public CVirtualBase
    {
    public:
        uint32_t _0x0004;
        uint32_t _0x0008;
        fvector3 m_position;
        float m_heading;
        fmatrix34* m_matrix;
        uint32_t m_flags1;
        uint32_t m_flags2;
        uint16_t _0x002C;
        uint16_t m_model_index;
        CEntity* m_references;
        uint32_t m_livery;
        uint32_t m_physics;
        uint32_t _0x003C;
        uint8_t _0x0040;
        uint8_t _0x0041;
        uint16_t _0x0042;
        uint16_t _0x0044;
        uint8_t _0x0046;
        uint8_t _0x0047;
        uint32_t m_interior_handle;
        uint32_t _0x004C;
        uint32_t _0x0050;
        uint32_t _0x0054;
        uint32_t _0x0058;
        uint16_t _0x005C;
        uint16_t _0x005E;
        uint8_t _0x0060;
        uint8_t _0x0061;
        uint8_t _0x0062;
        uint8_t m_alpha;
        uint32_t _0x0064;
        uint32_t _0x0068;
        uint32_t m_network_object;
        uint32_t m_entry_info_node;  
    };


    class CDynamicEntity : public CEntity
    {
    public:
        CPtrNodeDouble* m_ptr_node_dbl;
        uint32_t* m_anim;
        uint32_t _0x007C;
        CPortalTracker m_portal_tracker;
        uint32_t _0x00CC;
        uint32_t _0x00D0;
        rage::grbTargetManager* m_blend_shape;
        uint32_t _0x00D8;
        uint32_t _0x00DC;
        rage::fvector4 _0x00E0;
        uint32_t _0x00F0;
        bool does_have_anim;
        char pad_00F5[3];
        uint32_t _0x00F8;
        uint32_t _0x00FC;
        uint32_t _0x0100;
        uint32_t _0x0104;
        uint32_t _0x0108;
    };
}



