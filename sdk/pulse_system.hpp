#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: pulse_system.dll
// Classes count: 71
// Enums count: 3
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 2
// Size: 0x41
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
	TARGET_INVOKE = 0xd,
	SET_VAR = 0xe,
	GET_VAR = 0xf,
	SET_REGISTER_LIT_BOOL = 0x10,
	SET_REGISTER_LIT_INT = 0x11,
	SET_REGISTER_LIT_FLOAT = 0x12,
	SET_REGISTER_LIT_STR = 0x13,
	SET_REGISTER_LIT_INVAL_EHANDLE = 0x14,
	SET_REGISTER_LIT_INVAL_SNDEVT_GUID = 0x15,
	SET_REGISTER_LIT_VEC3 = 0x16,
	SET_REGISTER_DOMAIN_VALUE = 0x17,
	COPY = 0x18,
	NOT = 0x19,
	NEGATE = 0x1a,
	ADD = 0x1b,
	SUB = 0x1c,
	MUL = 0x1d,
	DIV = 0x1e,
	MOD = 0x1f,
	LT = 0x20,
	LTE = 0x21,
	EQ = 0x22,
	NE = 0x23,
	AND = 0x24,
	OR = 0x25,
	CONVERT_VALUE = 0x26,
	LAST_SERIALIZED_CODE = 0x27,
	NEGATE_INT = 0x28,
	NEGATE_FLOAT = 0x29,
	ADD_INT = 0x2a,
	ADD_FLOAT = 0x2b,
	ADD_STRING = 0x2c,
	SUB_INT = 0x2d,
	SUB_FLOAT = 0x2e,
	MUL_INT = 0x2f,
	MUL_FLOAT = 0x30,
	DIV_INT = 0x31,
	DIV_FLOAT = 0x32,
	MOD_INT = 0x33,
	MOD_FLOAT = 0x34,
	LT_INT = 0x35,
	LT_FLOAT = 0x36,
	LTE_INT = 0x37,
	LTE_FLOAT = 0x38,
	EQ_BOOL = 0x39,
	EQ_INT = 0x3a,
	EQ_FLOAT = 0x3b,
	EQ_STRING = 0x3c,
	NE_BOOL = 0x3d,
	NE_INT = 0x3e,
	NE_FLOAT = 0x3f,
	NE_STRING = 0x40,
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
// Size: 0xe
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
	// MPropertyFriendlyName "Entity Handle"
	PVAL_EHANDLE = 0x6,
	// MPropertyFriendlyName "Resource"
	PVAL_RESOURCE = 0x7,
	// MPropertyFriendlyName "SoundEvent Handle"
	PVAL_SNDEVT_GUID = 0x8,
	PVAL_SCHEMA_PTR = 0x9,
	PVAL_CURSOR_FLOW = 0xa,
	PVAL_ANY = 0xb,
	// MPropertySuppressEnumerator
	PVAL_COUNT = 0xc,
};

struct PulseRuntimeRegisterIndex_t;
struct PulseRegisterMap_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeChunkIndex_t;
struct PulseDocNodeID_t;
struct PulseRuntimeVarIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseRuntimeOutputIndex_t;
struct CPulse_ResumePoint;
struct CPulse_OutflowConnection;
struct PulseTestEHandle_t;
struct CPulseGraphInstance_TestDomain;

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 1
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
// Size: 0x188
// Has VTable
// 
// MPulseInternal_IsCursor
class CPulseExecCursor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x188]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 2
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
// Alignment: 4
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
// Alignment: 4
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
// Size: 0xf8
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
	CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0xa8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHiddenInTool
class CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xd0]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 1
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
// Alignment: 1
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
// Alignment: 4
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
// Alignment: 4
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
// Alignment: 4
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
// Alignment: 4
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
// Alignment: 2
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
// Alignment: 4
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
// Alignment: 4
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
// Size: 0x48
// 
// MGetKV3ClassDefaults
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CPulseValueFullType m_InstanceType; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x40	
	int32_t m_nSrcInstruction; // 0x44	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x68
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
	CUtlSymbolLarge m_Arg0Name; // 0x20	
	CUtlSymbolLarge m_Arg1Name; // 0x28	
	bool m_bLiteralBool; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	int32_t m_nLiteralInt; // 0x34	
	float m_flLiteralFloat; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	CBufferString m_LiteralString; // 0x40	
	Vector m_vLiteralVec3; // 0x50	
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
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_SimultaneousParallel : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
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
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseFlow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseTestEHandle_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseTestEHandle_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
// 
// MPulseRegisterTypeInfo
// MPulseBindableTarget
// MPulseLibraryBindings
// MPulseProvideFeatureTag
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
// Size: 0xf8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xd0	
	bool m_bExplicitTimeStepping; // 0xd1	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xd2	
private:
	[[maybe_unused]] uint8_t __pad00d3[0x1]; // 0xd3
public:
	int32_t m_nNextValidateIndex; // 0xd4	
	CUtlVector< CUtlString > m_Tracepoints; // 0xd8	
	bool m_bTestYesOrNoPath; // 0xf0	
	
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
// Size: 0x190
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CTestDomainDerived_Cursor : public CPulseExecCursor
{
public:
	int32_t m_nCursorValueA; // 0x188	
	int32_t m_nCursorValueB; // 0x18c	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	int32_t m_nInstanceValueX; // 0xf8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 1
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
// Size: 0x1a0
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0x188	
	Vector2D m_vPos; // 0x18c	
	float m_flHeadingDeg; // 0x194	
	bool m_bPenUp; // 0x198	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
};

