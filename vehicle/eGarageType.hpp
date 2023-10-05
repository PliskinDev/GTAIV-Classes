#pragma once

namespace rage
{
    enum class GTA4FullGarageType
    {
        GARAGE_TYPE_INVALID = -1,   // Invalid
        GARAGE_TYPE_NONE,           // No full garage
        GARAGE_TYPE_SAFEHOUSE,      // Safehouse garage
        GARAGE_TYPE_PARKING_LOT,    // Parking lot garage
        GARAGE_TYPE_UNDERGROUND,    // Underground garage
        GARAGE_TYPE_WAREHOUSE       // Warehouse garage
    };
}