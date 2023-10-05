#pragma once

enum class eVehicleExtras
{
    EXTRAS_NONE = 0,
    EXTRAS_1 = 1 << 0,
    EXTRAS_2 = 1 << 1,
    EXTRAS_3 = 1 << 2, 
    EXTRAS_4 = 1 << 3,
    EXTRAS_5 = 1 << 4,
    // todo
    MAX_EXTRAS,
};