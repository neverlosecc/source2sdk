#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: resourcesystem.dll
// Class Count: 52
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 1
// Size: 2
enum class FuseVariableAccess_t : uint8_t
{
	WRITABLE = 0,
	READ_ONLY = 1,
};

// Aligment: 1
// Size: 9
enum class FuseVariableType_t : uint8_t
{
	INVALID = 0,
	BOOL = 1,
	INT8 = 2,
	INT16 = 3,
	INT32 = 4,
	UINT8 = 5,
	UINT16 = 6,
	UINT32 = 7,
	FLOAT32 = 8,
};

// Aligment: 1
// Size: 8
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeProceduralTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeManifestTestResource_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVDataResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSnapshot
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimationGroup
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCSequenceGroupData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIMaterial2
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCMorphSetData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCRenderMesh
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCModel
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCTextureBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIVectorGraphic
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVSound_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVMixListResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPhysAggregateData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCEntityLump
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCWorldNode
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorld_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVoxelVisibility
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPostProcessingResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaStyle
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaLayout
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaTypeScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIAnimGraphModelBinding
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDACGameDefsData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCCompositeMaterialKit
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCSmartProp
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCCSGOItem
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResponseRulesList
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2
struct FuseVariableIndex_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 1
// Size: 2
struct FuseFunctionIndex_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 3
// Size: 16
struct ConstantInfo_t
{
public:
	CUtlString m_name; // 0x0
	CUtlStringToken m_nameToken; // 0x8
	float m_flValue; // 0xc
};

// Aligment: 6
// Size: 24
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

// Aligment: 5
// Size: 32
struct FunctionInfo_t
{
public:
	CUtlString m_name; // 0x8
	CUtlStringToken m_nameToken; // 0x10
	int32_t m_nParamCount; // 0x14
	FuseFunctionIndex_t m_nIndex; // 0x18
	bool m_bIsPure; // 0x1a
};

// Aligment: 4
// Size: 80
class CFuseProgram
{
public:
	CUtlVector< uint8 > m_programBuffer; // 0x0
	CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30
	int32_t m_nMaxTempVarsUsed; // 0x48
};

// Aligment: 3
// Size: 104
class CFuseSymbolTable
{
public:
	CUtlHashtable< CUtlStringToken, ConstantInfo_t > m_constants; // 0x8
	CUtlHashtable< CUtlStringToken, VariableInfo_t > m_variables; // 0x28
	CUtlHashtable< CUtlStringToken, FunctionInfo_t > m_functions; // 0x48
};

// Aligment: 2
// Size: 24
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
};

// Aligment: 2
// Size: 8
struct PackedAABB_t
{
public:
	uint32_t m_nPackedMin; // 0x0
	uint32_t m_nPackedMax; // 0x4
};

// Aligment: 4
// Size: 64
class FourQuaternions
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
	fltx4 z; // 0x20
	fltx4 w; // 0x30
};

