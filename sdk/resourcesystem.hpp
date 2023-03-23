#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: resourcesystem.dll
// Classes count: 41
// Enums count: 0
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 1
// Size: 0x8
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeTestResource_t
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeProceduralTestResource_t
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeManifestTestResource_t
{
public:
	// no members available
};

// Alignment: 2
// Size: 0x10
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVDataResource
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSnapshot
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimationGroup
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSequenceGroupData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIMaterial2
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCMorphSetData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCRenderMesh
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCModel
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCTextureBase
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIVectorGraphic
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVSound_t
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVMixListResource
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPhysAggregateData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCEntityLump
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCWorldNode
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeWorld_t
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVoxelVisibility
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPostProcessingResource
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaStyle
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaLayout
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaScript
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIAnimGraphModelBinding
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDACGameDefsData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCCompositeMaterialKit
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSmartProp
{
public:
	// no members available
};

// Alignment: 2
// Size: 0x18
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
};

// Alignment: 4
// Size: 0x40
class FourQuaternions
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
	fltx4 z; // 0x20	
	fltx4 w; // 0x30	
};

