#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: schemasystem.dll
// Class Count: 2
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 18
// Size: 336
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0
	Vector m_Vector; // 0x8
	VectorAligned m_VectorAligned; // 0x20
	QAngle m_QAngle; // 0x30
	RadianEuler m_RadianEuler; // 0x3c
	DegreeEuler m_DegreeEuler; // 0x48
	Quaternion m_Quaternion; // 0x54
	matrix3x4_t m_matrix3x4_t; // 0x64
	matrix3x4a_t m_matrix3x4a_t; // 0xa0
	Color m_Color; // 0xd0
	Vector4D m_Vector4D; // 0xd4
	CTransform m_CTransform; // 0xf0
	KeyValues* m_pKeyValues; // 0x110
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x118
	CUtlString m_CUtlString; // 0x130
	CUtlSymbol m_CUtlSymbol; // 0x138
	CUtlStringToken m_stringToken; // 0x13c
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x140
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResourceManifestInternal
{
public:
// <no members described>
};

