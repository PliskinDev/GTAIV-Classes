#pragma once

#include <cstdint>
#include "vector.hpp"

namespace rage
{
    class fiBaseTokenizer
    {
    public:
        void* m_vmt;
        const char* m_mame;
        int32_t m_line;
        uint32_t* m_file;
        int32_t m_current_char;
        uint32_t _0x0014;
        int32_t m_buffer_left;
        uint8_t m_symbol_stack[512];
        uint32_t _0x021C;
    };

    class fiBaseTokenizertable
    {
    public:
        uint32_t m_dtor;
        bool m_is_binary;
        uint32_t m_get_token;
        uint8_t m_get_byte;
        uint16_t m_get_word;
        int32_t m_get_int;
        float m_get_float;
        fvector4 m_get_vector4;
        fvector3 m_get_vector3;
        fvector4 m_get_vector4_1;
        fvector3 m_get_vector3_1;
        fvector2 m_get_vector2;
        uint32_t m_skip_token;
        int32_t m_skip_token_get_int;
        float m_skip_token_get_float;
        fvector4 m_skip_token_get_vector4;
        fvector3 m_skip_token_get_vector3;
        fvector4 m_skip_token_get_vector4_1;
        fvector3 m_skip_token_get_vector3_1;
        fvector2 m_skip_token_get_vector2;
        int32_t m_match_token_get_int;
        float m_match_token_get_float;
        fvector4 m_match_token_get_vector4;
        fvector3 m_match_token_get_vector3;
        fvector4 m_match_token_get_vector4_1;
        fvector3 m_match_token_get_vector3_1;
        fvector2 m_match_token_get_vector2;
        uint32_t m_write_struct_start;
        uint32_t m_write_struct_end;
        uint32_t m_write_line_start;
        uint32_t m_write_line_end;
        uint32_t m_set_indent;
        fvector4 m_write_vector4;
        fvector3 m_write_vector3;
        fvector2 m_write_vector2;
        float m_write_float;
        int32_t m_write_int;
        uint32_t m_write_token;
        const char* m_write_string;
        uint8_t m_write_byte;
        uint16_t m_write_word;
    };

    class fiBinTokenizer : public fiBaseTokenizer
    {
    public:
    };
}

















