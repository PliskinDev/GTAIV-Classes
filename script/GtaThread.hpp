#pragma once

#include "scrThread.hpp"

class GtaThread : public rage::scrThread
{
public:
	char m_program_name[24];
	uint32_t _0x0088;                                                
	uint32_t _0x008C;                               
	uint32_t _0x0090;                                                      
	bool m_on_mission;                                                                      
	bool m_script_safe_for_net_game;                                                                      
	bool m_this_script_should_be_saved;
	bool m_player_control_on_in_mission_cleanup;
	bool m_clear_help_in_mission_cleanup;
	bool m_minigame_script;
	bool m_allow_non_minigame_text_messages;
	bool m_allow_one_time_only_command_to_run;
	bool m_paused;
	bool m_can_be_paused;
	uint8_t _0x009E;
	bool _0x009F;
	uint8_t m_pool_handle;
	bool m_can_remove_blips_created_by_any_script;
	bool _0x00A5;
	bool _0x00A6;
	bool _0x00A7;
	uint32_t _0x00A8;
	uint32_t m_flags;
    virtual ~GtaThread() = default;
	virtual rage::eThreadState Reset(uint32_t scriptHash, void* args, uint32_t argCount) = 0;
	virtual rage::eThreadState Run(uint32_t opsToExecute) = 0;
	virtual rage::eThreadState Tick(uint32_t opsToExecute) = 0;
	virtual void Kill() = 0;
};