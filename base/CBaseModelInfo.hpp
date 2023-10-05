#pragma once

#include <cstdint>

#include "CVirtualBase.hpp"
#include "../rage/vector.hpp"

class CBaseModelInfo : public CVirtualBase
{
public:
    uint32_t* m_arche_type;
    uint32_t* m_frag_type;
    uint32_t* m_drawable_ref;
    rage::fvector3 m_center;
    float m_radius;
    rage::fvector3 m_min;
    float m_draw_distance;
    rage::fvector3 m_max;
    uint32_t m_model;
    uint32_t m_flags[4];           
    uint32_t m_ref_count;
    uint16_t m_txd_id;
    uint16_t m_first_2d_fx_ref;
    uint16_t m_amat_count;
    uint16_t m_first_amat_id;
    uint16_t _0x0050;
    uint16_t m_bound_id;
    uint16_t m_lod_id;
    uint16_t m_animation_id;
    uint16_t m_blendshape_id;
    bool m_2d_effect_count;
    uint8_t _0x005B;
    uint32_t _0x005C;
};

class CBaseModelInfoTable
{
public:
    uint32_t m_dtor;
    uint32_t m_initialize;
    uint32_t m_terminate;
    uint32_t m_get_type;
    uint32_t m_set_physics;
    uint32_t m_get_time_info;
    uint32_t m_set_drawable;
    uint32_t _0x001C;
    uint32_t m_release_drawable;
    uint32_t m_set_frag_type;
    uint32_t _0x0028;
    uint32_t m_release_frag_type;
    uint32_t m_get_props_id;
    uint32_t _0x0034;
    uint32_t m_get_bone_index;
};