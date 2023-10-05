#pragma once

#include <cstdint>

namespace rage
{
    enum class eThreadState
	{
		ThreadStateIdle,
		ThreadStateRunning,
		ThreadStateKilled,
		ThreadState3,
		ThreadState4,
	};

	class scrThreadContext
	{
	public:
		uint32_t m_thread_id;
		uint32_t m_script_hash;
		eThreadState m_state;
		uint32_t m_instruction_pointer;
		uint32_t m_frame_pointer;
		uint32_t m_stack_pointer;
		uint32_t m_timer_a;
		uint32_t m_timer_b;
		uint32_t m_timer_c;
		float m_wait_time;
		uint32_t _0x0028;
		uint32_t _0x002C;
		uint32_t _0x0030;
		uint32_t _0x0034;
		uint32_t _0x0038;
		uint32_t _0x003C;
		uint32_t _0x0040;
		uint32_t m_ex_instruction_pointer;
		uint32_t m_ex_frame_pointer;
		uint32_t m_ex_stack_pointer;
		uint32_t _0x0050;
	};
}