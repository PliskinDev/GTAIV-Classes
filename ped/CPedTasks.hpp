#pragma once

#include <cstdint>

class CPedTasks
{
public:
    uint32_t m_primary_tasks[5];
    uint32_t m_secondary_tasks[6];
    uint32_t m_move_tasks[3];
    uint32_t* m_ped;
    int32_t m_priority_being_processed;
};