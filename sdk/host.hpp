#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: host.dll
// Classes count: 2
// Enums count: 0
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 1
// Size: 0x10
class CAnimScriptBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsValid; // 0x8	
};

// Alignment: 1
// Size: 0x20
class EmptyTestScript : public CAnimScriptBase
{
public:
	CAnimScriptParam< float32 > m_hTest; // 0x10	
};

