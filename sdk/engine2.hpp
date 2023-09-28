#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: engine2.dll
// Classes count: 49
// Enums count: 4
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x3
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class SpawnDebugRestrictionOverrideState_t : uint32_t
{
	SPAWN_DEBUG_RESTRICT_NONE = 0x0,
	SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
	SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
};

// Alignment: 4
// Size: 0x3
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class EntityIOTargetType_t : uint32_t
{
	ENTITY_IO_TARGET_INVALID = 0xffffffffffffffff,
	ENTITY_IO_TARGET_ENTITYNAME = 0x2,
	ENTITY_IO_TARGET_EHANDLE = 0x6,
	ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
};

struct EngineLoopState_t;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityComponentHelper;
struct EntComponentInfo_t;
struct CEntityIdentity;
struct CScriptComponent;

// Alignment: 4
// Size: 0x28
struct EngineLoopState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	int32_t m_nPlatWindowWidth; // 0x18	
	int32_t m_nPlatWindowHeight; // 0x1c	
	int32_t m_nRenderWidth; // 0x20	
	int32_t m_nRenderHeight; // 0x24	
};

// Alignment: 0
// Size: 0x1
struct EventModInitialized_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct EventProfileStorageAvailable_t
{
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x0	
};

// Alignment: 0
// Size: 0x1
struct EventSplitScreenStateChanged_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 8
// Size: 0x60
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	int32_t m_nClientOutputFrames; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	double m_flRealTime; // 0x30	
	double m_flRenderTime; // 0x38	
	double m_flRenderFrameTime; // 0x40	
	double m_flRenderFrameTimeUnbounded; // 0x48	
	double m_flRenderFrameTimeUnscaled; // 0x50	
	double m_flTickRemainder; // 0x58	
};

// Alignment: 2
// Size: 0x30
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
};

// Alignment: 2
// Size: 0x30
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
};

// Alignment: 3
// Size: 0x30
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 6
// Size: 0x48
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	double m_flRenderFrameTime; // 0x30	
	double m_flRenderFrameTimeUnbounded; // 0x38	
	float m_flRealTime; // 0x40	
	bool m_bRenderOnly; // 0x44	
};

// Alignment: 1
// Size: 0x1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0	
};

// Alignment: 5
// Size: 0x38
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRenderTime; // 0x28	
	float m_flRealTime; // 0x2c	
	float m_flRenderFrameTimeUnbounded; // 0x30	
	bool m_bRenderOnly; // 0x34	
};

// Alignment: 5
// Size: 0x40
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	float m_flRenderFrameTime; // 0x30	
	float m_flRenderFrameTimeUnbounded; // 0x34	
	bool m_bRenderOnly; // 0x38	
};

// Alignment: 3
// Size: 0x30
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 3
// Size: 0x30
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 3
// Size: 0x30
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	bool m_bFirstTick; // 0x28	
	bool m_bLastTick; // 0x29	
};

// Alignment: 4
// Size: 0x40
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nCurrentTickThisFrame; // 0x34	
	int32_t m_nTotalTicksThisFrame; // 0x38	
	int32_t m_nTotalTicks; // 0x3c	
};

// Alignment: 4
// Size: 0x40
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nCurrentTickThisFrame; // 0x34	
	int32_t m_nTotalTicksThisFrame; // 0x38	
	int32_t m_nTotalTicks; // 0x3c	
};

// Alignment: 0
// Size: 0x40
struct EventServerAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
struct EventClientAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8
struct EventClientSendInput_t
{
public:
	bool m_bFinalClientCommandTick; // 0x0	
	int32_t m_nAdditionalClientCommandsToCreate; // 0x4	
};

// Alignment: 0
// Size: 0x1
struct EventClientPredictionPostNetupdate_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0	
};

// Alignment: 0
// Size: 0x1
struct EventClientProcessNetworking_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0	
};

// Alignment: 1
// Size: 0x10
struct EventPreDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0	
};

// Alignment: 1
// Size: 0x28
class CNetworkVarChainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20	
};

// Alignment: 0
// Size: 0x1
class CVariantDefaultAllocator
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x10
struct EntOutput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No members available
};

// Alignment: 7
// Size: 0x68
struct EntComponentInfo_t
{
public:
	char* m_pName; // 0x0	
	char* m_pCPPClassname; // 0x8	
	char* m_pNetworkDataReferencedDescription; // 0x10	
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x18	
	int32_t m_nRuntimeIndex; // 0x20	
	uint32_t m_nFlags; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
public:
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60	
};

// Alignment: 0
// Size: 0x8
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EntInput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x28
class CEntityComponentHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint32_t m_flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	EntComponentInfo_t* m_pInfo; // 0x10	
	int32_t m_nPriority; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CEntityComponentHelper* m_pNext; // 0x20	
};

// Alignment: 11
// Size: 0x78
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x16]; // 0x42
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
};

// Alignment: 0
// Size: 0x8
class CEmptyEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 3
// Size: 0x30
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
};

// Alignment: 1
// Size: 0x28
class CEntityIOOutput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18	
};

// Alignment: 1
// Size: 0x38
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

