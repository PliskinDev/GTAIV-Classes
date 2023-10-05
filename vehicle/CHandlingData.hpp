#pragma once

#include <cstdint>


namespace rage
{
    class CHandlingData
    {
    public:
        char m_vehicle_identifier[24];
        float m_fMass;
        float m_fDragMult;
        int32_t m_nPercentSubmerged;
        float m_CentreOfMassX;
        float m_CentreOfMassY;
        float m_CentreOfMassZ;
        int32_t m_nDriveBias;
        int32_t m_nDriveGears;
        float m_fDriveForce;
        float m_fDriveInertia;
        float m_fV;
        float m_fBrakeForce;
        float m_fBrakeBias;
        float m_fSteeringLock;
        float m_fTractionCurveMax;
        float m_fTractionCurveMin;
        float m_fTractionCurveLateral;
        float m_fTractionCurveLongitudinal;
        float m_fTractionSpringDeltaMax;
        float m_fTractionBias;
        float m_fSuspensionForce;
        float m_fSuspensionCompDamp;
        float m_fSuspensionReboundDamp;
        float m_fSuspensionUpperLimit;
        float m_fSuspensionLowerLimit;
        float m_fSuspensionRaise;
        float m_fSuspensionBias;
        float m_fCollisionDamageMult;
        float m_fWeaponDamageMult;
        float m_fDeformationDamageMult;
        float m_fEngineDamageMult;
        float m_fSeatOffsetDist;
        int32_t m_nMonetaryValue;
        uint8_t m_flags;
        uint8_t m_hFlags;
        int32_t m_nAnimGroup;
    };
}