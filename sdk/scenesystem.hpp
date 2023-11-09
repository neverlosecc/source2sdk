#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: scenesystem.dll
// Classes count: 9
// Enums count: 1
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 1
// Size: 0x4
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0x0,
	kDisableShadows_All = 0x1,
	kDisableShadows_Baked = 0x2,
	kDisableShadows_Realtime = 0x3,
};

struct SceneViewId_t;

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0	
	CUtlString m_ViewName; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0	
	uint64_t m_nFrameCount; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	int32_t m_nLayerIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	uint64_t m_nLayerId; // 0x20	
	CUtlString m_LayerName; // 0x28	
	CUtlString m_displayText; // 0x30	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
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

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
};

