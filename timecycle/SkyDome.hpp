#pragma once

#include <cstdint>
#include "../base/datBase.hpp"

namespace rage
{
    class SkyDome : public datBase
    {
    public:
        int32_t _0x0000;
        int8_t pad708[704];
        int32_t _0x0708;
        int8_t pad716[4];
        int32_t _0x0716;
        int8_t pad724[4];
        int32_t _0x0724;
        int32_t _0x0728;
        int32_t _0x0732;
        int32_t _0x0736;
        int32_t _0x0740;
        int32_t _0x0744;
        int8_t pad760[12];
        int32_t _0x0760;
        int32_t _0x0764;
        int32_t _0x0768;
        int32_t _0x0772;
        int32_t _0x0776;
        int8_t pad788[8];
        int8_t _0x0788;
        int8_t pad808[19];
        int8_t _0x0808;
        int8_t _0x0809;
        int8_t pad812[2];
        int32_t _0x0812;
    };

    class SkyDomeProceduralControl_SkyStruct
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        uint32_t m_night_sky_color[4];
        uint32_t m_day_sky_color[4];
        uint32_t m_sun_set_color[4];
        float m_azimuth_height;
        float m_sun_centre_start;
        float m_sun_centre_end;
        float m_sun_centre_intensity;
        float m_sun_outer_size;
        uint32_t _0x0054;
        uint32_t _0x0058;
        uint32_t _0x005C;
    };

    class SkyDomeProceduralControl_TopStruct
    {
    public:
        void* m_vmt;
        float m_top_cloud_bias;
        float m_top_cloud_detail;
        float m_top_cloud_threshold;
        float m_top_cloud_height;
    };

    class SkyDomeProceduralControl_CloudStruct
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        uint32_t m_cloud_color[4];
        uint32_t m_night_bounce_color[4];
        float m_cloud_shadow_strength;
        float m_cloud_threshold;
        float m_cloud_bias;
        float m_cloud_shadow_offset;
        float m_cloud_inscattering_range;
        float m_cloud_edge_smooth;
        float m_cloud_thickness;
        float m_cloud_speed;
        float m_detail_scale;
        float m_detail_strength;
        float m_cloud_warp;
        float m_cloud_fade_out;
        SkyDomeProceduralControl_TopStruct m_top;
        uint32_t _0x0074;
        uint32_t _0x0078;
        uint32_t _0x007C;
    };

    class SkyDomeProceduralControl_NightStruct
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        float m_star_blink_frequency;
        float m_star_blink_intensity;
        float m_star_intensity;
        float m_star_field_threshold;
        uint32_t _0x0020;
        float m_moon_brightness;
        uint32_t _0x0028;
        uint32_t _0x002C;
        uint32_t _0x0030;
        uint32_t _0x0034;
        uint32_t _0x0038;
        uint32_t _0x003C;
        uint32_t m_moon_color[4];
        float m_moon_glow;
        float m_moon_visiblity;
        uint32_t _0x0058;
        uint32_t _0x005C;
    };

    class SkyDomeProceduralControl_LightStruct
    {
    public:
        void* m_vmt;
        float m_lightning_pulse_frequency;
        float m_lightning_pulse_intensity;
    };

    class SkyDomeProceduralControl
    {
    public:
        void* m_vmt;
        uint32_t _0x0004;
        uint32_t _0x0008;
        uint32_t _0x000C;
        SkyDomeProceduralControl_SkyStruct m_sky;
        SkyDomeProceduralControl_CloudStruct m_cloud;
        SkyDomeProceduralControl_LightStruct m_lightning;
        uint32_t _0x00FC;
        SkyDomeProceduralControl_NightStruct m_night;
    };
}