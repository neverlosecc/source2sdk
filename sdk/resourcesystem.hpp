#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////
// Binary: resourcesystem.dll
// Classes count: 52
// Enums count: 2
// /////////////////////////////////////////

// Alignment: 1
// Size: 0x2
enum class FuseVariableAccess_t : uint8_t
{ 
	WRITABLE = 0x0,
	READ_ONLY = 0x1,
};

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

// Alignment: 1
// Size: 0x8
struct TestResource_t : public 
{ 
public:
	// MKV3TransferName "name"
	CUtlString m_name; 	// 0x0
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeTestResource_t : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeProceduralTestResource_t : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeManifestTestResource_t : public 
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0x10
struct ManifestTestResource_t : public 
{ 
public:
	// MKV3TransferName "name"
	CUtlString m_name; 	// 0x0
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; 	// 0x8
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVDataResource : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSystemDefinition : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSnapshot : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimationGroup : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSequenceGroupData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIMaterial2 : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCMorphSetData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCRenderMesh : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCModel : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCTextureBase : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIVectorGraphic : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundEventScriptList : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundStackScriptList : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVSound_t : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVMixListResource : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPhysAggregateData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVPhysXSurfacePropertiesList : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCEntityLump : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCWorldNode : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeWorld_t : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVoxelVisibility : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPostProcessingResource : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaStyle : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaLayout : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaDynamicImages : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDotaItemDefinitionResource : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaScript : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaTypeScript : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDOTAPatchNotesList : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIAnimGraphModelBinding : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCChoreoSceneFileData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDACGameDefsData : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCCompositeMaterialKit : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSmartProp : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCCSGOEconItem : public 
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCResponseRulesList : public 
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x2
struct FuseVariableIndex_t : public 
{ 
public:
	uint16_t m_Value; 	// 0x0
};

// Alignment: 1
// Size: 0x2
struct FuseFunctionIndex_t : public 
{ 
public:
	uint16_t m_Value; 	// 0x0
};

// Alignment: 3
// Size: 0x10
struct ConstantInfo_t : public 
{ 
public:
	CUtlString m_name; 	// 0x0
	CUtlStringToken m_nameToken; 	// 0x8
	float m_flValue; 	// 0xc
};

// Alignment: 6
// Size: 0x18
struct VariableInfo_t : public 
{ 
public:
	CUtlString m_name; 	// 0x0
	CUtlStringToken m_nameToken; 	// 0x8
	FuseVariableIndex_t m_nIndex; 	// 0xc
	uint8_t m_nNumComponents; 	// 0xe
	FuseVariableType_t m_eVarType; 	// 0xf
	FuseVariableAccess_t m_eAccess; 	// 0x10
};

// Alignment: 5
// Size: 0x20
struct FunctionInfo_t : public 
{ 
public:
	CUtlString m_name; 	// 0x8
	CUtlStringToken m_nameToken; 	// 0x10
	int32_t m_nParamCount; 	// 0x14
	FuseFunctionIndex_t m_nIndex; 	// 0x18
	bool m_bIsPure; 	// 0x1a
};

// Alignment: 4
// Size: 0x50
class CFuseProgram : public 
{ 
public:
	CUtlVector< uint8 > m_programBuffer; 	// 0x0
	CUtlVector< FuseVariableIndex_t > m_variablesRead; 	// 0x18
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; 	// 0x30
	int32_t m_nMaxTempVarsUsed; 	// 0x48
};

// Alignment: 3
// Size: 0x68
class CFuseSymbolTable : public 
{ 
public:
	CUtlHashtable< CUtlStringToken, ConstantInfo_t > m_constants; 	// 0x8
	CUtlHashtable< CUtlStringToken, VariableInfo_t > m_variables; 	// 0x28
	CUtlHashtable< CUtlStringToken, FunctionInfo_t > m_functions; 	// 0x48
};

// Alignment: 2
// Size: 0x18
struct AABB_t : public 
{ 
public:
	Vector m_vMinBounds; 	// 0x0
	Vector m_vMaxBounds; 	// 0xc
};

// Alignment: 2
// Size: 0x8
struct PackedAABB_t : public 
{ 
public:
	uint32_t m_nPackedMin; 	// 0x0
	uint32_t m_nPackedMax; 	// 0x4
};

// Alignment: 4
// Size: 0x40
class FourQuaternions : public 
{ 
public:
	fltx4 x; 	// 0x0
	fltx4 y; 	// 0x10
	fltx4 z; 	// 0x20
	fltx4 w; 	// 0x30
};

