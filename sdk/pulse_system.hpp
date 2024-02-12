#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: pulse_system.dll
// Classes count: 85
// Enums count: 7
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 2
// Size: 0x3d
enum class PulseInstructionCode_t : uint16_t
{
	INVALID = 0x0,
	IMMEDIATE_HALT = 0x1,
	RETURN_VOID = 0x2,
	RETURN_VALUE = 0x3,
	NOP = 0x4,
	JUMP = 0x5,
	JUMP_COND = 0x6,
	CHUNK_LEAP = 0x7,
	CHUNK_LEAP_COND = 0x8,
	PULSE_CALL_SYNC = 0x9,
	PULSE_CALL_ASYNC_FIRE = 0xa,
	CELL_INVOKE = 0xb,
	LIBRARY_INVOKE = 0xc,
	SET_VAR = 0xd,
	GET_VAR = 0xe,
	GET_CONST = 0xf,
	SET_REGISTER_DOMAIN_VALUE = 0x10,
	COPY = 0x11,
	NOT = 0x12,
	NEGATE = 0x13,
	ADD = 0x14,
	SUB = 0x15,
	MUL = 0x16,
	DIV = 0x17,
	MOD = 0x18,
	LT = 0x19,
	LTE = 0x1a,
	EQ = 0x1b,
	NE = 0x1c,
	AND = 0x1d,
	OR = 0x1e,
	CONVERT_VALUE = 0x1f,
	LAST_SERIALIZED_CODE = 0x20,
	NEGATE_INT = 0x21,
	NEGATE_FLOAT = 0x22,
	ADD_INT = 0x23,
	ADD_FLOAT = 0x24,
	ADD_STRING = 0x25,
	SUB_INT = 0x26,
	SUB_FLOAT = 0x27,
	MUL_INT = 0x28,
	MUL_FLOAT = 0x29,
	DIV_INT = 0x2a,
	DIV_FLOAT = 0x2b,
	MOD_INT = 0x2c,
	MOD_FLOAT = 0x2d,
	LT_INT = 0x2e,
	LT_FLOAT = 0x2f,
	LTE_INT = 0x30,
	LTE_FLOAT = 0x31,
	EQ_BOOL = 0x32,
	EQ_INT = 0x33,
	EQ_FLOAT = 0x34,
	EQ_STRING = 0x35,
	EQ_ENTITY_NAME = 0x36,
	NE_BOOL = 0x37,
	NE_INT = 0x38,
	NE_FLOAT = 0x39,
	NE_STRING = 0x3a,
	NE_ENTITY_NAME = 0x3b,
	GET_CONST_INLINE_STORAGE = 0x3c,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x2
enum class PulseMethodCallMode_t : uint32_t
{
	// MPropertyFriendlyName "Wait For Completion"
	// MPropertyDescription "Synchronous - wait for the method to fully complete before returning"
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	// MPropertyFriendlyName "Fire And Forget"
	// MPropertyDescription "Asynchronous - returns and continues despite the called method yielding"
	ASYNC_FIRE_AND_FORGET = 0x1,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x3
enum class PulseCursorExecResult_t : uint32_t
{
	Succeeded = 0x0,
	Canceled = 0x1,
	Failed = 0x2,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
enum class PulseCursorCancelPriority_t : uint32_t
{
	// MPropertyFriendlyName "Keep running normally."
	None = 0x0,
	// MPropertyFriendlyName "Kill after current node."
	// MPropertyDescription "Do not stop the current yielding node, but do not continue to the next node afterwards."
	CancelOnSucceeded = 0x1,
	// MPropertyFriendlyName "Kill elegantly."
	// MPropertyDescription "Request elegant wind-down of any associated work (e.g. vcd interrupt)."
	SoftCancel = 0x2,
	// MPropertyFriendlyName "Kill immediately."
	// MPropertyDescription "Stop without any wind-down."
	HardCancel = 0x3,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x12
enum class PulseValueType_t : uint32_t
{
	PVAL_INVALID = 0xffffffffffffffff,
	// MPropertyFriendlyName "Boolean"
	PVAL_BOOL = 0x0,
	// MPropertyFriendlyName "Integer"
	PVAL_INT = 0x1,
	// MPropertyFriendlyName "Float"
	PVAL_FLOAT = 0x2,
	// MPropertyFriendlyName "String"
	PVAL_STRING = 0x3,
	// MPropertyFriendlyName "Vector3"
	PVAL_VEC3 = 0x4,
	// MPropertyFriendlyName "Transform"
	PVAL_TRANSFORM = 0x5,
	// MPropertyFriendlyName "Color"
	PVAL_COLOR_RGB = 0x6,
	// MPropertyFriendlyName "Entity Handle"
	PVAL_EHANDLE = 0x7,
	// MPropertyFriendlyName "Resource"
	PVAL_RESOURCE = 0x8,
	// MPropertyFriendlyName "SoundEvent Handle"
	PVAL_SNDEVT_GUID = 0x9,
	// MPropertyFriendlyName "Entity Name"
	PVAL_ENTITY_NAME = 0xa,
	PVAL_SCHEMA_PTR = 0xb,
	PVAL_TYPESAFE_INT = 0xc,
	PVAL_CURSOR_FLOW = 0xd,
	PVAL_ANY = 0xe,
	// MPropertyFriendlyName "Schema Enum"
	PVAL_SCHEMA_ENUM = 0xf,
	// MPropertySuppressEnumerator
	PVAL_COUNT = 0x10,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x5
enum class PulseTestEnumColor_t : uint32_t
{
	// MPropertyFriendlyName "Black"
	BLACK = 0x0,
	// MPropertyFriendlyName "White"
	WHITE = 0x1,
	// MPropertyFriendlyName "Red"
	RED = 0x2,
	// MPropertyFriendlyName "Green"
	GREEN = 0x3,
	// MPropertyFriendlyName "Blue"
	BLUE = 0x4,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x3
enum class PulseTestEnumShape_t : uint32_t
{
	// MPropertyFriendlyName "Circle"
	CIRCLE = 0x64,
	// MPropertyFriendlyName "Square"
	SQUARE = 0xc8,
	// MPropertyFriendlyName "Triangle"
	TRIANGLE = 0x12c,
};

struct PulseRuntimeRegisterIndex_t;
struct PulseRegisterMap_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeChunkIndex_t;
struct PulseDocNodeID_t;
struct PulseRuntimeVarIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseRuntimeConstantIndex_t;
struct PulseRuntimeOutputIndex_t;
struct CPulse_ResumePoint;
struct CPulse_OutflowConnection;
struct PulseTestEHandle_t;
struct CPulseGraphInstance_TestDomain;

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with pulse cursors."
class CPulseCursorFuncs
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x30
struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t
{
public:
	CUtlSymbolLarge m_TagName; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with a few global test values."
class CPulseTestFuncs_LibraryA
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class FakeEntity_tAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x168
// Has VTable
// 
// MPulseInternal_IsCursor
class CPulseExecCursor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x168]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeRegisterIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CPulse_Chunk
{
public:
	CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0	
	CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10	
	CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CPulse_Variable
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_Type; // 0x10	
	KeyValues3 m_DefaultValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
public:
	bool m_bIsPublic; // 0x32	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CPulse_Constant
{
public:
	CPulseValueFullType m_Type; // 0x0	
	KeyValues3 m_Value; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CPulse_PublicOutput
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_ParamType; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_OutputConnection
{
public:
	CUtlSymbolLarge m_SourceOutput; // 0x0	
	CUtlSymbolLarge m_TargetEntity; // 0x8	
	CUtlSymbolLarge m_TargetInput; // 0x10	
	CUtlSymbolLarge m_Param; // 0x18	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeChunkIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeChunkIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseDocNodeID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseDocNodeID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseGraphDef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_DomainIdentifier; // 0x8	
	CUtlSymbolLarge m_ParentMapName; // 0x10	
	CUtlVector< CPulse_Chunk* > m_Chunks; // 0x18	
	CUtlVector< CPulseCell_Base* > m_Cells; // 0x30	
	CUtlVector< CPulse_Variable > m_Vars; // 0x48	
	CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // 0x60	
	CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // 0x78	
	CUtlVector< CPulse_CallInfo* > m_CallInfos; // 0x90	
	CUtlVector< CPulse_Constant > m_Constants; // 0xa8	
	CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0xc0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHiddenInTool
class CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xd8]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Basic math support."
class CPulseMathlib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Testing script helpers."
class CPulseTestScriptLib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeCellIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeCellIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeCallInfoIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeCallInfoIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeVarIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeVarIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeOutputIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeOutputIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeStateOffset_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeStateOffset_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_RegisterInfo
{
public:
	PulseRuntimeRegisterIndex_t m_nReg; // 0x0	
	CPulseValueFullType m_Type; // 0x8	
	CKV3MemberNameWithStorage m_OriginName; // 0x18	
	int32_t m_nWrittenByInstruction; // 0x50	
	int32_t m_nLastReadByInstruction; // 0x54	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeConstantIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeConstantIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	KeyValues3 m_Outparams; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeInvokeIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeInvokeIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CPulse_CallInfo
{
public:
	CUtlSymbolLarge m_PortName; // 0x0	
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	PulseRegisterMap_t m_RegisterMap; // 0x10	
	PulseDocNodeID_t m_CallMethodID; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34	
	int32_t m_nSrcInstruction; // 0x38	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeEntrypointIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeEntrypointIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseGraphInstanceID_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseGraphInstanceID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseCursorID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseCursorID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseCursorYieldToken_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseCursorYieldToken_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// 
// MGetKV3ClassDefaults
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c	
	int32_t m_nSrcInstruction; // 0x30	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
struct PGDInstruction_t
{
public:
	PulseInstructionCode_t m_nCode; // 0x0	
	PulseRuntimeVarIndex_t m_nVar; // 0x4	
	PulseRuntimeRegisterIndex_t m_nReg0; // 0x8	
	PulseRuntimeRegisterIndex_t m_nReg1; // 0xa	
	PulseRuntimeRegisterIndex_t m_nReg2; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10	
	PulseRuntimeChunkIndex_t m_nChunk; // 0x14	
	int32_t m_nDestInstruction; // 0x18	
	PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c	
	PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0022[0x6]; // 0x22
public:
	CBufferString m_DomainValue; // 0x28	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// Static fields:
	static CPulse_ResumePoint &Get_Invalid(){return *reinterpret_cast<CPulse_ResumePoint*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulse_ResumePoint")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Base
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MFgdFromSchemaCompletelySkipField
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseFlow : public CPulseCell_Base
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	PulseRegisterMap_t m_RegisterMap; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CPulseRuntimeMethodArg
{
public:
	CKV3MemberNameWithStorage m_Name; // 0x0	
	CUtlString m_Description; // 0x38	
	CPulseValueFullType m_Type; // 0x40	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_MethodName; // 0x70	
	CUtlString m_Description; // 0x78	
	bool m_bIsPublic; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x7]; // 0x81
public:
	CPulseValueFullType m_ReturnType; // 0x88	
	CUtlVector< CPulseRuntimeMethodArg > m_Args; // 0x98	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_EventName; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_HookName; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_SourceEntity; // 0x70	
	CUtlSymbolLarge m_SourceOutput; // 0x78	
	CUtlSymbolLarge m_TargetInput; // 0x80	
	CPulseValueFullType m_ExpectedParamType; // 0x88	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseValue : public CPulseCell_Base
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Wait"
// MPropertyDescription "Causes each execution cursor to pause at this node for a fixed period of time. Each cursor will wake up and resume execution when the time expires, unless aborted or early-woken."
// MPulseEditorHeaderIcon
class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_StringSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_Outflow_CycleOrdered__InstanceState_t
{
public:
	int32_t m_nNextIndex; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
{
public:
	CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0	
	int32_t m_nNextShuffle; // 0x20	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "[Test] Random Yes/No Outflow"
// MPropertyDescription "Test node that randomly picks between two outflows."
class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_No; // 0x58	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "[Test] Explicit Yes/No Outflow"
// MPropertyDescription "Test node that picks between two outflows as specified in the test domain."
class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	CPulse_OutflowConnection m_No; // 0x58	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "[Test] Int Value 50"
// MPropertyDescription "Test node that just generates the integer 50. Nothing to see here!"
class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Random Integer"
// MPropertyDescription "Generate a random integer between min and max (inclusive)"
// MPulseEditorHeaderIcon
class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x50	
	PulseMethodCallMode_t m_nAsyncCallMode; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	CPulse_ResumePoint m_OnFinished; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Timeline : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents; // 0x48	
	bool m_bWaitForChildOutflows; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x7]; // 0x61
public:
	CPulse_ResumePoint m_OnFinished; // 0x68	
	CPulse_ResumePoint m_OnCanceled; // 0x78	
	
	// Static fields:
	static char* &Get_m_pTagName(){return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseCell_Timeline")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_Timeline__TimelineEvent_t
{
public:
	float m_flTimeFromPrevious; // 0x0	
	bool m_bPauseForPreviousEvents; // 0x4	
	bool m_bCallModeSync; // 0x5	
private:
	[[maybe_unused]] uint8_t __pad0006[0x2]; // 0x6
public:
	CPulse_OutflowConnection m_EventOutflow; // 0x8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseTestEHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseTestEHandle_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
struct FakeEntity_t
{
public:
	PulseTestEHandle_t m_nHandle; // 0x0	
	CUtlString m_Name; // 0x8	
	CUtlString m_Class; // 0x10	
	bool m_bDestroyed; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	CPulseGraphInstance_TestDomain* m_pAssociatedGraphInstance; // 0x20	
	bool m_bFuncWasCalled; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	float m_fValue; // 0x2c	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xd8	
	bool m_bExplicitTimeStepping; // 0xd9	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xda	
private:
	[[maybe_unused]] uint8_t __pad00db[0x1]; // 0xdb
public:
	int32_t m_nNextValidateIndex; // 0xdc	
	CUtlVector< CUtlString > m_Tracepoints; // 0xe0	
	bool m_bTestYesOrNoPath; // 0xf8	
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Tracepoint"
class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Spawn Fake Entity"
class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Destroy Fake Entity"
class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Fake Ent-Fire"
// MPulseEditorHeaderText
class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Get Fake Entity Name"
class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Find Fake Entity"
class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	CPulse_ResumePoint m_WakeResume; // 0x48	
	CPulse_ResumePoint m_WakeCancel; // 0x58	
	CPulse_ResumePoint m_WakeFail; // 0x68	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_TestWaitWithCursorState__CursorState_t
{
public:
	float flWaitValue; // 0x0	
	bool bFailOnCancel; // 0x4	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CTestDomainDerived_Cursor : public CPulseExecCursor
{
public:
	int32_t m_nCursorValueA; // 0x168	
	int32_t m_nCursorValueB; // 0x16c	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	int32_t m_nInstanceValueX; // 0x100	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Test functions for the derived test domain."
class CPulseTestFuncs_DerivedDomain
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
class CPulseCell_Test_MultiInflow_WithDefault : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x180
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0x168	
	Vector2D m_vPos; // 0x16c	
	float m_flHeadingDeg; // 0x174	
	bool m_bPenUp; // 0x178	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow
{
public:
	// MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
	int32_t m_nCursorsAllowedToWait; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CPulse_ResumePoint m_WaitComplete; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Wait For Cursors With Tag"
// MPropertyDescription "Causes each execution cursor to wait for the completion of cursors with a given tag. Use this to manage exclusive zones with remote control."
// MPulseEditorHeaderIcon
class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
	bool m_bTagSelfWhenComplete; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	// MPropertyDescription "When we start waiting, how should we handle existing cursors?"
	PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x64	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Cursor Queue"
// MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
// MPulseEditorHeaderIcon
class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Any cursors above this count will wait, up to the limit."
	int32_t m_nCursorsAllowedToRunParallel; // 0x60	
};

