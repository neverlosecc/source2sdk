#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: scenesystem.dll
// Class Count: 14
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 4
// Size: 48
struct CSceneObjectReference_t
{
public:
	VectorAligned m_vecAABBMins; // 0x0
	VectorAligned m_vecAABBMaxes; // 0x10
	uint64_t m_nRenderableFlags; // 0x20
	CSceneObject* m_pObject; // 0x28
};

// Aligment: 2
// Size: 8
struct CPVSData::pvsmask_t
{
public:
	uint32_t m_nOffset; // 0x0
	uint32_t m_nMask; // 0x4
};

// Aligment: 4
// Size: 72
class CPVSData
{
public:
	CPVSData* m_pNext; // 0x0
	uint16_t m_nPVSMasks; // 0x8
	uint16_t m_nPVSFlags; // 0xa
	CPVSData::pvsmask_t[7] m_masks; // 0xc
};

// Aligment: 9
// Size: 1136
struct CSceneObjectExtraData_t
{
public:
	uint64_t m_nCurrentMeshGroupMask; // 0x440
	CUtlStringToken m_nLayerForceID; // 0x450
	Vector m_vLightingOrigin; // 0x454
	float m_flDepthSortBias; // 0x460
	uint8[4] m_nVisibleToPlayer; // 0x464
	uint16_t m_nAlphaFade; // 0x468
	int16_t m_nViewProducerIndex; // 0x46a
	bool m_bLightingOriginIsInWorldSpace; // 0x46c
	int8_t m_nCurrentLOD; // 0x46d
};

// Aligment: 18
// Size: 176
class CSceneObject
{
public:
	ISceneObjectDesc* m_pDesc; // 0x10
	CSceneObjectReference_t* m_pRefData; // 0x18
	float m_flStartFadeDistanceSquared; // 0x20
	float m_flFarCullDistanceSquared; // 0x24
	uint16_t m_nObjectTypeFlags; // 0x28
	uint16_t m_nGameRenderCounter; // 0x2a
	uint8_t m_nMeshGroupMaskSmall; // 0x2f
	bitfield:2 m_nDebugLevel; // 0x0
	bitfield:2 m_nSizeCullBloat; // 0x0
	bitfield:1 m_nBoundsType; // 0x0
	uint8_t m_nID; // 0x31
	int8_t m_nBoundsGroupIndex; // 0x32
	uint8_t m_nObjectClass; // 0x33
	matrix3x4a_t m_transform; // 0x40
	CPVSData* m_pPVSData; // 0x70
	uint64_t m_nOriginalRenderableFlags; // 0x88
	uint64_t m_nRenderableFlags; // 0x90
	CUtlStringToken m_nLayerMatchID; // 0xa4
public:
	static float32[4] &Get_s_flSizeCullBloatScale() { return *reinterpret_cast<float32[4]*>(interfaces::g_schema->FindTypeScopeForModule("scenesystem.dll")->FindDeclaredClass("CSceneObject")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 16
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0
	CUtlString m_ViewName; // 0x8
};

// Aligment: 1
// Size: 24
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0
};

// Aligment: 2
// Size: 16
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0
	uint64_t m_nFrameCount; // 0x8
};

// Aligment: 2
// Size: 24
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
};

// Aligment: 6
// Size: 56
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	int32_t m_nLayerIndex; // 0x18
	uint64_t m_nLayerId; // 0x20
	CUtlString m_LayerName; // 0x28
	CUtlString m_displayText; // 0x30
};

// Aligment: 10
// Size: 48
class CSSDSMsg_ViewTarget
{
public:
	CUtlString m_Name; // 0x0
	uint64_t m_TextureId; // 0x8
	int32_t m_nWidth; // 0x10
	int32_t m_nHeight; // 0x14
	int32_t m_nRequestedWidth; // 0x18
	int32_t m_nRequestedHeight; // 0x1c
	int32_t m_nNumMipLevels; // 0x20
	int32_t m_nDepth; // 0x24
	int32_t m_nMultisampleNumSamples; // 0x28
	int32_t m_nFormat; // 0x2c
};

// Aligment: 3
// Size: 48
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

