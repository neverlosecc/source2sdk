#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: schemasystem.dll
// Classes count: 7
// Enums count: 2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Alignment: 1
// Size: 0x50
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0x0,
	FIELD_FLOAT32 = 0x1,
	FIELD_STRING = 0x2,
	FIELD_VECTOR = 0x3,
	FIELD_QUATERNION = 0x4,
	FIELD_INT32 = 0x5,
	FIELD_BOOLEAN = 0x6,
	FIELD_INT16 = 0x7,
	FIELD_CHARACTER = 0x8,
	FIELD_COLOR32 = 0x9,
	FIELD_EMBEDDED = 0xa,
	FIELD_CUSTOM = 0xb,
	FIELD_CLASSPTR = 0xc,
	FIELD_EHANDLE = 0xd,
	FIELD_POSITION_VECTOR = 0xe,
	FIELD_TIME = 0xf,
	FIELD_TICK = 0x10,
	FIELD_SOUNDNAME = 0x11,
	FIELD_INPUT = 0x12,
	FIELD_FUNCTION = 0x13,
	FIELD_VMATRIX = 0x14,
	FIELD_VMATRIX_WORLDSPACE = 0x15,
	FIELD_MATRIX3X4_WORLDSPACE = 0x16,
	FIELD_INTERVAL = 0x17,
	FIELD_UNUSED = 0x18,
	FIELD_VECTOR2D = 0x19,
	FIELD_INT64 = 0x1a,
	FIELD_VECTOR4D = 0x1b,
	FIELD_RESOURCE = 0x1c,
	FIELD_TYPEUNKNOWN = 0x1d,
	FIELD_CSTRING = 0x1e,
	FIELD_HSCRIPT = 0x1f,
	FIELD_VARIANT = 0x20,
	FIELD_UINT64 = 0x21,
	FIELD_FLOAT64 = 0x22,
	FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
	FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
	FIELD_UINT32 = 0x25,
	FIELD_UTLSTRINGTOKEN = 0x26,
	FIELD_QANGLE = 0x27,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
	FIELD_HMATERIAL = 0x29,
	FIELD_HMODEL = 0x2a,
	FIELD_NETWORK_QUANTIZED_VECTOR = 0x2b,
	FIELD_NETWORK_QUANTIZED_FLOAT = 0x2c,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2d,
	FIELD_QANGLE_WORLDSPACE = 0x2e,
	FIELD_QUATERNION_WORLDSPACE = 0x2f,
	FIELD_HSCRIPT_LIGHTBINDING = 0x30,
	FIELD_V8_VALUE = 0x31,
	FIELD_V8_OBJECT = 0x32,
	FIELD_V8_ARRAY = 0x33,
	FIELD_V8_CALLBACK_INFO = 0x34,
	FIELD_UTLSTRING = 0x35,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
	FIELD_HRENDERTEXTURE = 0x37,
	FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
	FIELD_UINT8 = 0x39,
	FIELD_UINT16 = 0x3a,
	FIELD_CTRANSFORM = 0x3b,
	FIELD_CTRANSFORM_WORLDSPACE = 0x3c,
	FIELD_HPOSTPROCESSING = 0x3d,
	FIELD_MATRIX3X4 = 0x3e,
	FIELD_SHIM = 0x3f,
	FIELD_CMOTIONTRANSFORM = 0x40,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
	FIELD_ATTACHMENT_HANDLE = 0x42,
	FIELD_AMMO_INDEX = 0x43,
	FIELD_CONDITION_ID = 0x44,
	FIELD_AI_SCHEDULE_BITS = 0x45,
	FIELD_MODIFIER_HANDLE = 0x46,
	FIELD_ROTATION_VECTOR = 0x47,
	FIELD_ROTATION_VECTOR_WORLDSPACE = 0x48,
	FIELD_HVDATA = 0x49,
	FIELD_SCALE32 = 0x4a,
	FIELD_STRING_AND_TOKEN = 0x4b,
	FIELD_ENGINE_TIME = 0x4c,
	FIELD_ENGINE_TICK = 0x4d,
	FIELD_WORLD_GROUP_ID = 0x4e,
	FIELD_TYPECOUNT = 0x4f,
};

// Alignment: 22
// Size: 0x180
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0	
	Vector m_Vector; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	VectorAligned m_VectorAligned; // 0x20	
	Quaternion m_Quaternion; // 0x30	
	QAngle m_QAngle; // 0x40	
	RotationVector m_RotationVector; // 0x4c	
	RadianEuler m_RadianEuler; // 0x58	
	DegreeEuler m_DegreeEuler; // 0x64	
	QuaternionStorage m_QuaternionStorage; // 0x70	
	matrix3x4_t m_matrix3x4_t; // 0x80	
	matrix3x4a_t m_matrix3x4a_t; // 0xb0	
	Color m_Color; // 0xe0	
	Vector4D m_Vector4D; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00f4[0xc]; // 0xf4
public:
	CTransform m_CTransform; // 0x100	
	KeyValues* m_pKeyValues; // 0x120	
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128	
	CUtlString m_CUtlString; // 0x140	
	CUtlSymbol m_CUtlSymbol; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014a[0x2]; // 0x14a
public:
	CUtlStringToken m_stringToken; // 0x14c	
	CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150	
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168	
	KeyValues3 m_KV3; // 0x170	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCResourceManifestInternal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x8
struct ResourceId_t
{
public:
	uint64_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("schemasystem.dll")->FindDeclaredClass("ResourceId_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x8
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0	
	int32_t m_nExample2; // 0x4	
};

// Alignment: 1
// Size: 0x10
class CExampleSchemaVData_PolymorphicBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nBase; // 0x8	
};

// Alignment: 1
// Size: 0x18
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10	
};

// Alignment: 1
// Size: 0x18
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10	
};

