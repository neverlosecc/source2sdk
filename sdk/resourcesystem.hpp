#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: resourcesystem.dll
// Class Count: 28
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 4
// Size: 7
enum class LightType_t : uint32_t
{
	MATERIAL_LIGHT_DISABLE = 0x0,
	MATERIAL_LIGHT_POINT = 0x1,
	MATERIAL_LIGHT_DIRECTIONAL = 0x2,
	MATERIAL_LIGHT_SPOT = 0x3,
	MATERIAL_LIGHT_ORTHO = 0x4,
	MATERIAL_LIGHT_ENVIRONMENT_PROBE = 0x5,
	MATERIAL_LIGHT_AREA = 0x6,
};

// Aligment: 4
// Size: 1
enum class LightSourceShape_t : uint32_t
{
	LIGHT_SOURCE_SHAPE_SPHERE = 0x0,
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCGenericDataResource
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
class InfoForResourceTypeIAnimationGraph
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIAnimationSubGraph
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

// Aligment: 35
// Size: 264
struct LightDesc_t
{
public:
	LightType_t m_Type; // 0x0
	Vector m_Color; // 0x4
	Vector m_BounceColor; // 0x10
	float m_Range; // 0x1c
	float m_Falloff; // 0x20
	float m_Attenuation0; // 0x24
	float m_Attenuation1; // 0x28
	float m_Attenuation2; // 0x2c
	float m_Theta; // 0x30
	float m_Phi; // 0x34
	int32_t m_nLightGroupCount; // 0x40
	CUtlStringToken[1] m_lightGroups; // 0x44
	bool m_bCastShadows; // 0x48
	int32_t m_nShadowWidth; // 0x4c
	int32_t m_nShadowHeight; // 0x50
	int32_t m_nShadowCascadeCount; // 0x54
	float32[4] m_flShadowCascadeDistance; // 0x58
	int32[4] m_nShadowCascadeResolution; // 0x68
	bool m_bUsesIndexedBakedLighting; // 0x78
	int32_t m_nBakeLightIndex; // 0x7c
	float m_flBakeLightIndexScale; // 0x80
	int32_t m_nFogLightingMode; // 0x84
	bool m_bRenderDiffuse; // 0x88
	bool m_bRenderSpecular; // 0x89
	bool m_bRenderTransmissive; // 0x8a
	int32_t m_nPriority; // 0x8c
	LightSourceShape_t m_Shape; // 0x90
	float m_flLightSourceDim0; // 0x94
	float m_flLightSourceDim1; // 0x98
	float m_flLightSourceSize0; // 0x9c
	float m_flLightSourceSize1; // 0xa0
	float m_flPrecomputedMaxRange; // 0xa4
	float m_flFogContributionStength; // 0xa8
	float m_flNearClipPlane; // 0xac
	Vector m_vecUp; // 0xc8
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

