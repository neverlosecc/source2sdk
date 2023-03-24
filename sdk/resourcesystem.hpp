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
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeProceduralTestResource_t
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeManifestTestResource_t
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
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
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSnapshot
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimationGroup
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSequenceGroupData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIMaterial2
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCMorphSetData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCRenderMesh
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCModel
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCTextureBase
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIVectorGraphic
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVSound_t
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVMixListResource
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPhysAggregateData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCEntityLump
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCWorldNode
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeWorld_t
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVoxelVisibility
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPostProcessingResource
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaStyle
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaLayout
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaScript
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIAnimGraphModelBinding
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDACGameDefsData
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCCompositeMaterialKit
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSmartProp
{
public:
	uint8_t __pad0000[0x1]; // Autoaligned
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

