#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: schemasystem.dll
// Class Count: 7
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 4
// Size: 3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Aligment: 1
// Size: 74
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0,
	FIELD_FLOAT32 = 1,
	FIELD_STRING = 2,
	FIELD_VECTOR = 3,
	FIELD_QUATERNION = 4,
	FIELD_INT32 = 5,
	FIELD_BOOLEAN = 6,
	FIELD_INT16 = 7,
	FIELD_CHARACTER = 8,
	FIELD_COLOR32 = 9,
	FIELD_EMBEDDED = 10,
	FIELD_CUSTOM = 11,
	FIELD_CLASSPTR = 12,
	FIELD_EHANDLE = 13,
	FIELD_POSITION_VECTOR = 14,
	FIELD_TIME = 15,
	FIELD_TICK = 16,
	FIELD_SOUNDNAME = 17,
	FIELD_INPUT = 18,
	FIELD_FUNCTION = 19,
	FIELD_VMATRIX = 20,
	FIELD_VMATRIX_WORLDSPACE = 21,
	FIELD_MATRIX3X4_WORLDSPACE = 22,
	FIELD_INTERVAL = 23,
	FIELD_UNUSED = 24,
	FIELD_VECTOR2D = 25,
	FIELD_INT64 = 26,
	FIELD_VECTOR4D = 27,
	FIELD_RESOURCE = 28,
	FIELD_TYPEUNKNOWN = 29,
	FIELD_CSTRING = 30,
	FIELD_HSCRIPT = 31,
	FIELD_VARIANT = 32,
	FIELD_UINT64 = 33,
	FIELD_FLOAT64 = 34,
	FIELD_POSITIVEINTEGER_OR_NULL = 35,
	FIELD_HSCRIPT_NEW_INSTANCE = 36,
	FIELD_UINT32 = 37,
	FIELD_UTLSTRINGTOKEN = 38,
	FIELD_QANGLE = 39,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
	FIELD_HMATERIAL = 41,
	FIELD_HMODEL = 42,
	FIELD_NETWORK_QUANTIZED_VECTOR = 43,
	FIELD_NETWORK_QUANTIZED_FLOAT = 44,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
	FIELD_QANGLE_WORLDSPACE = 46,
	FIELD_QUATERNION_WORLDSPACE = 47,
	FIELD_HSCRIPT_LIGHTBINDING = 48,
	FIELD_V8_VALUE = 49,
	FIELD_V8_OBJECT = 50,
	FIELD_V8_ARRAY = 51,
	FIELD_V8_CALLBACK_INFO = 52,
	FIELD_UTLSTRING = 53,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
	FIELD_HRENDERTEXTURE = 55,
	FIELD_HPARTICLESYSTEMDEFINITION = 56,
	FIELD_UINT8 = 57,
	FIELD_UINT16 = 58,
	FIELD_CTRANSFORM = 59,
	FIELD_CTRANSFORM_WORLDSPACE = 60,
	FIELD_HPOSTPROCESSING = 61,
	FIELD_MATRIX3X4 = 62,
	FIELD_SHIM = 63,
	FIELD_CMOTIONTRANSFORM = 64,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
	FIELD_ATTACHMENT_HANDLE = 66,
	FIELD_AMMO_INDEX = 67,
	FIELD_CONDITION_ID = 68,
	FIELD_AI_SCHEDULE_BITS = 69,
	FIELD_MODIFIER_HANDLE = 70,
	FIELD_ROTATION_VECTOR = 71,
	FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
	FIELD_TYPECOUNT = 73,
};

// Aligment: 22
// Size: 384
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0
	Vector m_Vector; // 0x8
	VectorAligned m_VectorAligned; // 0x20
	QuaternionAligned m_QuaternionAligned; // 0x30
	QAngle m_QAngle; // 0x40
	RotationVector m_RotationVector; // 0x4c
	RadianEuler m_RadianEuler; // 0x58
	DegreeEuler m_DegreeEuler; // 0x64
	Quaternion m_Quaternion; // 0x70
	matrix3x4_t m_matrix3x4_t; // 0x80
	matrix3x4a_t m_matrix3x4a_t; // 0xb0
	Color m_Color; // 0xe0
	Vector4D m_Vector4D; // 0xe4
	CTransform m_CTransform; // 0x100
	KeyValues* m_pKeyValues; // 0x120
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128
	CUtlString m_CUtlString; // 0x140
	CUtlSymbol m_CUtlSymbol; // 0x148
	CUtlStringToken m_stringToken; // 0x14c
	CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168
	KeyValues3 m_KV3; // 0x170
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResourceManifestInternal
{
public:
// <no members described>
};

// Aligment: 1
// Size: 8
struct ResourceId_t
{
public:
	uint64_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 2
// Size: 8
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0
	int32_t m_nExample2; // 0x4
};

// Aligment: 1
// Size: 16
class CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nBase; // 0x8
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10
};

