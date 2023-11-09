#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: host.dll
// Classes count: 2
// Enums count: 0
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: host.dll (project 'host')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class CAnimScriptBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsValid; // 0x8	
};

// Registered binary: host.dll (project 'host')
// Alignment: 8
// Size: 0x20
// Has VTable
class EmptyTestScript : public CAnimScriptBase
{
public:
	CAnimScriptParam< float32 > m_hTest; // 0x10	
};

