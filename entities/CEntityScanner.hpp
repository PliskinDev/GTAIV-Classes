#pragma once

#include <cstdint>

class CEntityScannerObj
{
public:
    uint32_t _0x0000;
    uint32_t* m_scanner;
    uint32_t _0x0008;
};

class CEntityScanner
{
public:
    void* m_vmt;
    CEntityScannerObj m_entity_scan;
    uint32_t _0x0010;
    uint32_t _0x0014;
    char pad_0018[16];
    uint32_t _0x0058;
};