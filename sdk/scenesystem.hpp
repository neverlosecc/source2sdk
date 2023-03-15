#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: scenesystem.dll
// Class Count: 9
// Enum Count: 1
///////////////////////////////////////////

// Aligment: 1
// Size: 4
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0,
	kDisableShadows_All = 1,
	kDisableShadows_Baked = 2,
	kDisableShadows_Realtime = 3,
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

