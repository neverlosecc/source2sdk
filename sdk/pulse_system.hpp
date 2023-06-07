#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: pulse_system.dll
// Classes count: 66
// Enums count: 3
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 2
// Size: 0x24
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
	SET_VAR_REG_BOOL = 0xd,
	SET_VAR_REG_INT = 0xe,
	SET_VAR_REG_FLOAT = 0xf,
	SET_VAR_REG_STR = 0x10,
	SET_VAR_REG_EHANDLE = 0x11,
	SET_VAR_REG_SNDEVT_GUID = 0x12,
	SET_VAR_REG_VEC3 = 0x13,
	GET_VAR_REG_BOOL = 0x14,
	GET_VAR_REG_INT = 0x15,
	GET_VAR_REG_FLOAT = 0x16,
	GET_VAR_REG_STR = 0x17,
	GET_VAR_REG_EHANDLE = 0x18,
	GET_VAR_REG_SNDEVT_GUID = 0x19,
	GET_VAR_REG_VEC3 = 0x1a,
	SET_REGISTER_LIT_BOOL = 0x1b,
	SET_REGISTER_LIT_INT = 0x1c,
	SET_REGISTER_LIT_FLOAT = 0x1d,
	SET_REGISTER_LIT_STR = 0x1e,
	SET_REGISTER_LIT_INVAL_EHANDLE = 0x1f,
	SET_REGISTER_LIT_INVAL_SNDEVT_GUID = 0x20,
	SET_REGISTER_LIT_VEC3 = 0x21,
	SET_REGISTER_DOMAIN_VALUE = 0x22,
	COUNT = 0x23,
};

// Alignment: 4
// Size: 0x2
enum class PulseMethodCallMode_t : uint32_t
{
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	ASYNC_FIRE_AND_FORGET = 0x1,
};

// Alignment: 4
// Size: 0xd
enum class PulseValueType_t : uint32_t
{
	PVAL_INVALID = 0xffffffffffffffff,
	PVAL_BOOL = 0x0,
	PVAL_INT = 0x1,
	PVAL_FLOAT = 0x2,
	PVAL_STRING = 0x3,
	PVAL_VEC3 = 0x4,
	PVAL_TRANSFORM = 0x5,
	PVAL_EHANDLE = 0x6,
	PVAL_RESOURCE = 0x7,
	PVAL_SNDEVT_GUID = 0x8,
	PVAL_CURSOR_FLOW = 0x9,
	PVAL_ANY = 0xa,
	PVAL_COUNT = 0xb,
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

// Alignment: 0
// Size: 0x1
class CPulseTestFuncs_LibraryA
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
};

// Alignment: 3
// Size: 0x60
class CPulse_Chunk
{
public:
	CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0	
	CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10	
	CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20	
};

// Alignment: 5
// Size: 0x38
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

// Alignment: 2
// Size: 0x10
class CPulse_PublicOutput
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
};

// Alignment: 4
// Size: 0x20
class CPulse_OutputConnection
{
public:
	CUtlSymbolLarge m_SourceOutput; // 0x0	
	CUtlSymbolLarge m_TargetEntity; // 0x8	
	CUtlSymbolLarge m_TargetInput; // 0x10	
	CUtlSymbolLarge m_Param; // 0x18	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeChunkIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseDocNodeID_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 9
// Size: 0xf8
class CPulseGraphDef
{
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

// Alignment: 0
// Size: 0xd0
class CBasePulseGraphInstance
{
public:
	uint8_t __pad0000[0xd0]; // Autoaligned
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCellIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCallInfoIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeVarIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeOutputIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeStateOffset_t
{
public:
	uint16_t m_Value; // 0x0	
};

// Alignment: 5
// Size: 0x58
class CPulse_RegisterInfo
{
public:
	PulseRuntimeRegisterIndex_t m_nReg; // 0x0	
	CPulseValueFullType m_Type; // 0x8	
	CKV3MemberNameWithStorage m_OriginName; // 0x18	
	int32_t m_nWrittenByInstruction; // 0x50	
	int32_t m_nLastReadByInstruction; // 0x54	
};

// Alignment: 2
// Size: 0x20
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	KeyValues3 m_Outparams; // 0x10	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeInvokeIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 6
// Size: 0x40
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

// Alignment: 1
// Size: 0x4
struct PulseRuntimeEntrypointIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 5
// Size: 0x38
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c	
	int32_t m_nSrcInstruction; // 0x30	
};

// Alignment: 16
// Size: 0x68
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

// Alignment: 3
// Size: 0x10
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
};

// Alignment: 0
// Size: 0x10
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x48
class CPulseCell_Base
{
public:
	// MFgdFromSchemaCompletelySkipField
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseFlow : public CPulseCell_Base
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	PulseRegisterMap_t m_RegisterMap; // 0x50	
};

// Alignment: 3
// Size: 0x50
class CPulseRuntimeMethodArg
{
public:
	CKV3MemberNameWithStorage m_Name; // 0x0	
	CUtlString m_Description; // 0x38	
	CPulseValueFullType m_Type; // 0x40	
};

// Alignment: 5
// Size: 0xb0
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

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_EventName; // 0x70	
};

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_HookName; // 0x70	
};

// Alignment: 4
// Size: 0x98
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_SourceEntity; // 0x70	
	CUtlSymbolLarge m_SourceOutput; // 0x78	
	CUtlSymbolLarge m_TargetInput; // 0x80	
	CPulseValueFullType m_ExpectedParamType; // 0x88	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseValue : public CPulseCell_Base
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x68
class CPulseCell_Value_Expression : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48	
};

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_StringSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 1
// Size: 0x4
struct CPulseCell_Outflow_CycleOrdered__InstanceState_t
{
public:
	int32_t m_nNextIndex; // 0x0	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 2
// Size: 0x28
struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
{
public:
	CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0	
	int32_t m_nNextShuffle; // 0x20	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_SimultaneousParallel : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 2
// Size: 0x68
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

// Alignment: 0
// Size: 0x48
class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x68
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseFlow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x50	
};

// Alignment: 1
// Size: 0x4
struct PulseTestEHandle_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 5
// Size: 0x108
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
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x108
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CPulseTestFuncs_DerivedDomain
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_MultiInflow_WithDefault : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xf0
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CPulseTurtleGraphicsLib
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

