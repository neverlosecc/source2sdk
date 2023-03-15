#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: resourcesystem.dll
// Class Count: 41
// Enum Count: 0
///////////////////////////////////////////

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

// Aligment: 2
// Size: 24
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
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

