#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: engine2.dll
// Class Count: 50
// Enum Count: 3
///////////////////////////////////////////

// Aligment: 4
// Size: 8
enum class SignonState_t : uint32_t
{
	SIGNONSTATE_NONE = 0x0,
	SIGNONSTATE_CHALLENGE = 0x1,
	SIGNONSTATE_CONNECTED = 0x2,
	SIGNONSTATE_NEW = 0x3,
	SIGNONSTATE_PRESPAWN = 0x4,
	SIGNONSTATE_SPAWN = 0x5,
	SIGNONSTATE_FULL = 0x6,
	SIGNONSTATE_CHANGELEVEL = 0x7,
};

// Aligment: 4
// Size: 3
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Aligment: 4
// Size: 9
enum class EntityIOTargetType_t : uint32_t
{
	ENTITY_IO_TARGET_INVALID = 0xffffffffffffffff,
	ENTITY_IO_TARGET_CLASSNAME = 0x0,
	ENTITY_IO_TARGET_CLASSNAME_DERIVES_FROM = 0x1,
	ENTITY_IO_TARGET_ENTITYNAME = 0x2,
	ENTITY_IO_TARGET_CONTAINS_COMPONENT = 0x3,
	ENTITY_IO_TARGET_SPECIAL_ACTIVATOR = 0x4,
	ENTITY_IO_TARGET_SPECIAL_CALLER = 0x5,
	ENTITY_IO_TARGET_EHANDLE = 0x6,
	ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
};

// Aligment: 4
// Size: 40
struct EngineLoopState_t
{
public:
	int32_t m_nPlatWindowWidth; // 0x18
	int32_t m_nPlatWindowHeight; // 0x1c
	int32_t m_nRenderWidth; // 0x20
	int32_t m_nRenderHeight; // 0x24
};

// Aligment: 0
// Size: 1
struct EventModInitialized_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0
};

// Aligment: 1
// Size: 4
struct EventProfileStorageAvailable_t
{
public:
	int32_t m_nSplitScreenSlot; // 0x0
};

// Aligment: 0
// Size: 1
struct EventSplitScreenStateChanged_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 96
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	int32_t m_nClientOutputFrames; // 0x28
	double m_flRealTime; // 0x30
	double m_flRenderTime; // 0x38
	double m_flRenderFrameTime; // 0x40
	double m_flRenderFrameTimeUnbounded; // 0x48
	double m_flRenderFrameTimeUnscaled; // 0x50
	double m_flTickRemainder; // 0x58
};

// Aligment: 3
// Size: 48
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	uint32_t m_nVRDisplayID; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 4
// Size: 64
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	double m_flRenderFrameTime; // 0x30
	double m_flRenderFrameTimeUnbounded; // 0x38
};

// Aligment: 1
// Size: 1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0
};

// Aligment: 4
// Size: 56
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRenderTime; // 0x28
	float m_flRealTime; // 0x2c
	float m_flRenderFrameTimeUnbounded; // 0x30
};

// Aligment: 4
// Size: 56
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	float m_flRenderFrameTime; // 0x30
	float m_flRenderFrameTimeUnbounded; // 0x34
};

// Aligment: 3
// Size: 48
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	bool m_bFirstTick; // 0x28
	bool m_bLastTick; // 0x29
};

// Aligment: 3
// Size: 64
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nTotalTicksThisFrame; // 0x34
	int32_t m_nTotalTicks; // 0x38
};

// Aligment: 3
// Size: 64
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nTotalTicksThisFrame; // 0x34
	int32_t m_nTotalTicks; // 0x38
};

// Aligment: 0
// Size: 64
struct EventServerAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct EventClientSendInput_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0
};

// Aligment: 0
// Size: 1
struct EventClientProcessNetworking_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 1
// Size: 8
struct EventPreDataUpdate_t
{
public:
	int32_t m_nEntityIndex; // 0x0
};

// Aligment: 1
// Size: 4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0
};

// Aligment: 0
// Size: 8
class IRecipientFilter
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CNetworkVarChainer
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x8
};

// Aligment: 0
// Size: 1
class CVariantDefaultAllocator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 16
struct EntOutput_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 120
struct EntComponentInfo_t
{
public:
	V_uuid_t m_id; // 0x0
	char* m_pName; // 0x10
	char* m_pCPPClassname; // 0x18
	char* m_pNetworkDataReferencedDescription; // 0x20
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x28
	int32_t m_nRuntimeIndex; // 0x30
	uint32_t m_nFlags; // 0x34
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70
};

// Aligment: 0
// Size: 8
class CEntityComponent
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EntInput_t
{
public:
// <no members described>
};

// Aligment: 4
// Size: 40
class CEntityComponentHelper
{
public:
	uint32_t m_flags; // 0x8
	EntComponentInfo_t* m_pInfo; // 0x10
	int32_t m_nPriority; // 0x18
	CEntityComponentHelper* m_pNext; // 0x20
};

// Aligment: 11
// Size: 120
class CEntityIdentity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14
	CUtlSymbolLarge m_name; // 0x18
	CUtlSymbolLarge m_designerName; // 0x20
	uint32_t m_flags; // 0x30
	uint32_t m_fDataObjectTypes; // 0x38
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x3c
	CEntityIdentity* m_pPrev; // 0x50
	CEntityIdentity* m_pNext; // 0x58
	CEntityIdentity* m_pPrevByClass; // 0x60
	CEntityIdentity* m_pNextByClass; // 0x68
	V_uuid_t* m_pId; // 0x70
};

// Aligment: 0
// Size: 8
class CEmptyEntityInstance
{
public:
// <no members described>
};

// Aligment: 4
// Size: 56
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// MNetworkEnable
	// MNetworkPriority "112"
	CEntityIdentity* m_pEntity; // 0x10
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x20
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x30
};

// Aligment: 1
// Size: 40
class CEntityIOOutput
{
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18
};

// Aligment: 1
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

