#pragma once

#include "scrThreadContext.hpp"

namespace rage
{
    class scrThread
	{
	public:
		virtual ~scrThread() = default;
		virtual eThreadState Reset(uint32_t scriptHash, void* pArgs, uint32_t argCount) = 0;
		virtual eThreadState Run(uint32_t opsToExecute) = 0;
		virtual eThreadState Tick(uint32_t opsToExecute) = 0;
		virtual void Kill() = 0;
		scrThreadContext m_context;
		void* m_stack;
		uint32_t _0x005C;
		void* m_xlive_buffer;
		uint32_t _0x0064;
		void* _0x0068;
		const char* m_exit_message;
	};
}