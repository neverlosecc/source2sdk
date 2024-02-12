#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: resourcesystem.dll
// Classes count: 59
// Enums count: 2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 1
// Size: 0x2
enum class FuseVariableAccess_t : uint8_t
{
	WRITABLE = 0x0,
	READ_ONLY = 0x1,
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 1
// Size: 0x9
enum class FuseVariableType_t : uint8_t
{
	INVALID = 0x0,
	BOOL = 0x1,
	INT8 = 0x2,
	INT16 = 0x3,
	INT32 = 0x4,
	UINT8 = 0x5,
	UINT16 = 0x6,
	UINT32 = 0x7,
	FLOAT32 = 0x8,
};

struct FuseVariableIndex_t;
struct FuseFunctionIndex_t;

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x8
// 
// MGetKV3ClassDefaults
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
struct InfoForResourceTypeTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
struct InfoForResourceTypeProceduralTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
struct InfoForResourceTypeManifestTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8	
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVDataResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIPulseGraphDef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCTypeScriptResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCJavaScriptResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIParticleSnapshot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIMaterial2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCModel
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIVectorGraphic
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVSoundEventScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVSoundStackScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVoiceContainerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVMixListResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCPhysAggregateData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCEntityLump
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCWorldNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
struct InfoForResourceTypeWorld_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCPostProcessingResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCPanoramaStyle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCPanoramaLayout
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCPanoramaDynamicImages
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCDotaItemDefinitionResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCDOTAPatchNotesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCDOTANovelsList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeIAnimGraphModelBinding
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCChoreoSceneFileData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCDACGameDefsData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCCompositeMaterialKit
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCGcExportableExternalData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCSmartProp
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCCSGOEconItem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCResponseRulesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCNmSkeleton
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCNmClip
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCNmGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType
class InfoForResourceTypeCNmGraphDataSet
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct FuseVariableIndex_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("resourcesystem.dll")->FindDeclaredClass("FuseVariableIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct FuseFunctionIndex_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("resourcesystem.dll")->FindDeclaredClass("FuseFunctionIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct ConstantInfo_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlStringToken m_nameToken; // 0x8	
	float m_flValue; // 0xc	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct VariableInfo_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlStringToken m_nameToken; // 0x8	
	FuseVariableIndex_t m_nIndex; // 0xc	
	uint8_t m_nNumComponents; // 0xe	
	FuseVariableType_t m_eVarType; // 0xf	
	FuseVariableAccess_t m_eAccess; // 0x10	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct FunctionInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlStringToken m_nameToken; // 0x10	
	int32_t m_nParamCount; // 0x14	
	FuseFunctionIndex_t m_nIndex; // 0x18	
	bool m_bIsPure; // 0x1a	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CFuseProgram
{
public:
	CUtlVector< uint8 > m_programBuffer; // 0x0	
	CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18	
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30	
	int32_t m_nMaxTempVarsUsed; // 0x48	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0xb0
// 
// MGetKV3ClassDefaults
class CFuseSymbolTable
{
public:
	CUtlVector< ConstantInfo_t > m_constants; // 0x0	
	CUtlVector< VariableInfo_t > m_variables; // 0x18	
	CUtlVector< FunctionInfo_t > m_functions; // 0x30	
	CUtlHashtable< CUtlStringToken, int32 > m_constantMap; // 0x48	
	CUtlHashtable< CUtlStringToken, int32 > m_variableMap; // 0x68	
	CUtlHashtable< CUtlStringToken, int32 > m_functionMap; // 0x88	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct PackedAABB_t
{
public:
	uint32_t m_nPackedMin; // 0x0	
	uint32_t m_nPackedMax; // 0x4	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x40
// Has Trivial Constructor
// Has Trivial Destructor
class FourQuaternions
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
	fltx4 z; // 0x20	
	fltx4 w; // 0x30	
};

