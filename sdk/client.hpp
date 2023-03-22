#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////
// Binary: client.dll
// Classes count: 402
// Enums count: 8
// /////////////////////////////////////////

// Alignment: 4
// Size: 0x5
enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t
{ 
	WATER_WAKE_NONE = 0x0,
	WATER_WAKE_IDLE = 0x1,
	WATER_WAKE_WALKING = 0x2,
	WATER_WAKE_RUNNING = 0x3,
	WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Alignment: 4
// Size: 0x6
enum class CompositeMaterialMatchFilterType_t : uint32_t
{ 
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
	MATCH_FILTER_MATERIAL_SHADER = 0x1,
	MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
	MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
	MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
};

// Alignment: 4
// Size: 0x2
enum class CompositeMaterialVarSystemVar_t : uint32_t
{ 
	COMPMATSYSVAR_COMPOSITETIME = 0x0,
	COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1,
};

// Alignment: 4
// Size: 0xe
enum class CompositeMaterialInputLooseVariableType_t : uint32_t
{ 
	LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
	LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
	LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
	LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
	LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
	LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
	LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
	LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
	LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
	LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
	LOOSE_VARIABLE_TYPE_STRING = 0xa,
	LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
	LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
	LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
};

// Alignment: 4
// Size: 0x2
enum class CompositeMaterialInputTextureType_t : uint32_t
{ 
	INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
	INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
};

// Alignment: 4
// Size: 0xa
enum class CompMatPropertyMutatorType_t : uint32_t
{ 
	COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
	COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
	COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
	COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
	COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
	COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
	COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
	COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
	COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
	COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
};

// Alignment: 4
// Size: 0x3
enum class CompMatPropertyMutatorConditionType_t : uint32_t
{ 
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
};

// Alignment: 4
// Size: 0x6
enum class CompositeMaterialInputContainerSourceType_t : uint32_t
{ 
	CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
	CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
	CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
	CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
	CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
	CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
};

// Alignment: 11
// Size: 0x78
class CEntityIdentity : public 
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; 	// 0x14
	CUtlSymbolLarge m_name; 	// 0x18
	CUtlSymbolLarge m_designerName; 	// 0x20
	uint32_t m_flags; 	// 0x30
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; 	// 0x38
	uint32_t m_fDataObjectTypes; 	// 0x3c
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; 	// 0x40
	CEntityIdentity* m_pPrev; 	// 0x58
	CEntityIdentity* m_pNext; 	// 0x60
	CEntityIdentity* m_pPrevByClass; 	// 0x68
	CEntityIdentity* m_pNextByClass; 	// 0x70
};

// Alignment: 3
// Size: 0x30
class CEntityInstance : public IHandleEntity
{ 
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; 	// 0x8
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; 	// 0x10
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; 	// 0x28
};

// Alignment: 1
// Size: 0x38
class CScriptComponent : public CEntityComponent
{ 
public:
	CUtlSymbolLarge m_scriptClassName; 	// 0x30
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x50
class CBodyComponent : public CEntityComponent
{ 
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; 	// 0x8
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x20
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x1d0
class CBodyComponentPoint : public CBodyComponent, CEntityComponent
{ 
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; 	// 0x50
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x1a0
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x470
class CBodyComponentSkeletonInstance : public CBodyComponent, CEntityComponent
{ 
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; 	// 0x50
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x440
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x28
class CHitboxComponent : public CEntityComponent
{ 
public:
	// MNetworkEnable
	uint32[1] m_bvDisabledHitGroups; 	// 0x24
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 67
// Size: 0x1c8
class CLightComponent : public CEntityComponent
{ 
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x48
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; 	// 0x85
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_SecondaryColor; 	// 0x89
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; 	// 0x90
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessScale; 	// 0x94
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; 	// 0x98
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; 	// 0x9c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; 	// 0xa0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; 	// 0xa4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; 	// 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; 	// 0xac
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; 	// 0xb0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; 	// 0xb4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; 	// 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; 	// 0xc0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; 	// 0xc4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; 	// 0xc8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; 	// 0xcc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; 	// 0xd0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; 	// 0xd4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; 	// 0xd8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; 	// 0xdc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; 	// 0xe0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; 	// 0xe4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; 	// 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; 	// 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; 	// 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; 	// 0xf8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; 	// 0xfc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; 	// 0x100
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; 	// 0x104
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; 	// 0x108
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; 	// 0x10c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; 	// 0x110
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; 	// 0x114
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; 	// 0x118
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesBakedShadowing; 	// 0x11c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; 	// 0x120
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; 	// 0x124
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; 	// 0x128
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; 	// 0x130
	// MNetworkEnable
	int32_t m_nDirectLight; 	// 0x138
	// MNetworkEnable
	int32_t m_nIndirectLight; 	// 0x13c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; 	// 0x140
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; 	// 0x144
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; 	// 0x148
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; 	// 0x14c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; 	// 0x150
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; 	// 0x151
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; 	// 0x152
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; 	// 0x154
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; 	// 0x160
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; 	// 0x16c
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; 	// 0x178
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; 	// 0x184
	// MNetworkEnable
	float m_flPrecomputedMaxRange; 	// 0x190
	// MNetworkEnable
	int32_t m_nFogLightingMode; 	// 0x194
	// MNetworkEnable
	float m_flFogContributionStength; 	// 0x198
	// MNetworkEnable
	float m_flNearClipPlane; 	// 0x19c
	// MNetworkEnable
	Color m_SkyColor; 	// 0x1a0
	// MNetworkEnable
	float m_flSkyIntensity; 	// 0x1a4
	// MNetworkEnable
	Color m_SkyAmbientBounce; 	// 0x1a8
	// MNetworkEnable
	bool m_bUseSecondaryColor; 	// 0x1ac
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; 	// 0x1ad
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; 	// 0x1b0
	// MNetworkEnable
	float m_flCapsuleLength; 	// 0x1b4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; 	// 0x1b8
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 5
// Size: 0xd8
class CRenderComponent : public CEntityComponent
{ 
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x10
	bool m_bIsRenderingWithViewModels; 	// 0x50
	uint32_t m_nSplitscreenFlags; 	// 0x54
	bool m_bEnableRendering; 	// 0x60
	bool m_bInterpolationReadyToDraw; 	// 0xb0
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x20
class CBuoyancyHelper : public 
{ 
public:
	float m_flFluidDensity; 	// 0x18
};

// Alignment: 2
// Size: 0x80
class C_CommandContext : public 
{ 
public:
	bool needsprocessing; 	// 0x0
	int32_t command_number; 	// 0x78
};

// Alignment: 0
// Size: 0x40
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0x78
struct audioparams_t : public 
{ 
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector[8] localSound; 	// 0x8
	// MNetworkEnable
	int32_t soundscapeIndex; 	// 0x68
	// MNetworkEnable
	uint8_t localBits; 	// 0x6c
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; 	// 0x70
	// MNetworkEnable
	uint32_t soundEventHash; 	// 0x74
};

// Alignment: 26
// Size: 0x248
class CPlayer_CameraServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	uint32_t m_iFOV; 	// 0x40
	// MNetworkEnable
	uint32_t m_iFOVStart; 	// 0x44
	// MNetworkEnable
	GameTime_t m_flFOVTime; 	// 0x48
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; 	// 0x4c
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkBitCount "32"
	// MNetworkChangeCallback "OnPunchChanged"
	QAngle m_vecPunchAngle; 	// 0x50
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; 	// 0x68
	GameTick_t m_nPunchAngleJoltTickClientSide; 	// 0x80
	// MNetworkEnable
	// MNetworkChangeCallback "OnPunchJoltChanged"
	GameTick_t m_nPunchAngleJoltTick; 	// 0x84
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; 	// 0x88
	// MNetworkEnable
	C_fogplayerparams_t m_PlayerFog; 	// 0x90
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; 	// 0xd0
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; 	// 0xd4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; 	// 0xd8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; 	// 0xe0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; 	// 0x158
	float m_flOldPlayerZ; 	// 0x170
	float m_flOldPlayerViewOffsetZ; 	// 0x174
	fogparams_t m_CurrentFog; 	// 0x178
	CHandle< C_FogController > m_hOldFogController; 	// 0x1e0
	bool[5] m_bOverrideFogColor; 	// 0x1e4
	Color[5] m_OverrideFogColor; 	// 0x1e9
	bool[5] m_bOverrideFogStartEnd; 	// 0x1fd
	float32[5] m_fOverrideFogStart; 	// 0x204
	float32[5] m_fOverrideFogEnd; 	// 0x218
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; 	// 0x22c
	QAngle m_angDemoViewAngles; 	// 0x230
};

// Alignment: 0
// Size: 0x40
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x40
class CPlayer_ItemServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 14
// Size: 0x1b8
class CPlayer_MovementServices : public CPlayerPawnComponent
{ 
public:
	int32_t m_nImpulse; 	// 0x40
	CInButtonState m_nButtons; 	// 0x48
	uint64_t m_nQueuedButtonDownMask; 	// 0x68
	uint64_t m_nQueuedButtonChangeMask; 	// 0x70
	uint64_t m_nButtonDoublePressed; 	// 0x78
	uint32[64] m_pButtonPressedCmdNumber; 	// 0x80
	uint32_t m_nLastCommandNumberProcessed; 	// 0x180
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nToggleButtonDownMask; 	// 0x188
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2048"
	// MNetworkEncodeFlags
	float m_flMaxspeed; 	// 0x190
	// MNetworkEnable
	float m_flForceSubtickMoveWhen; 	// 0x194
	float m_flForwardMove; 	// 0x198
	float m_flLeftMove; 	// 0x19c
	float m_flUpMove; 	// 0x1a0
	QAngle m_vecOldViewAngles; 	// 0x1a4
};

// Alignment: 12
// Size: 0x1f8
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices, CPlayerPawnComponent
{ 
public:
	float m_flStepSoundTime; 	// 0x1b8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	float m_flFallVelocity; 	// 0x1bc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; 	// 0x1c0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; 	// 0x1c4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; 	// 0x1c8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; 	// 0x1cc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; 	// 0x1cd
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; 	// 0x1ce
	Vector m_groundNormal; 	// 0x1d0
	float m_flSurfaceFriction; 	// 0x1dc
	CUtlStringToken m_surfaceProps; 	// 0x1e0
	int32_t m_nStepside; 	// 0x1f0
};

// Alignment: 5
// Size: 0x58
class CPlayer_ObserverServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; 	// 0x40
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; 	// 0x44
	ObserverMode_t m_iObserverLastMode; 	// 0x48
	bool m_bForcedObserverMode; 	// 0x4c
	float m_flObserverChaseDistance; 	// 0x50
};

// Alignment: 0
// Size: 0x40
class CPlayer_UseServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x40
class CPlayer_WaterServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0xa8
class CPlayer_WeaponServices : public CPlayerPawnComponent
{ 
public:
	bool m_bAllowSwitchToNoWeapon; 	// 0x40
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; 	// 0x48
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hActiveWeapon; 	// 0x60
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BasePlayerWeapon > m_hLastWeapon; 	// 0x64
	// MNetworkEnable
	uint16[32] m_iAmmo; 	// 0x68
};

// Alignment: 2
// Size: 0x1730
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{ 
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; 	// 0x470
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x1708
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x48
struct EntityRenderAttribute_t : public 
{ 
public:
	// MNetworkEnable
	CUtlStringToken m_ID; 	// 0x30
	// MNetworkEnable
	Vector4D m_Values; 	// 0x34
};

// Alignment: 4
// Size: 0x68
struct ActiveModelConfig_t : public 
{ 
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; 	// 0x28
	// MNetworkEnable
	CUtlSymbolLarge m_Name; 	// 0x30
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; 	// 0x38
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; 	// 0x50
};

// Alignment: 1
// Size: 0x4a0
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{ 
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x470
	static EntComponentInfo_t &Get_s_EntComponentInfo(){ return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x10
class CGameSceneNodeHandle : public 
{ 
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; 	// 0x8
	// MNetworkEnable
	CUtlStringToken m_name; 	// 0xc
};

// Alignment: 33
// Size: 0x150
class CGameSceneNode : public 
{ 
public:
	// MNetworkDisable
	CTransform m_nodeToWorld; 	// 0x10
	// MNetworkDisable
	CEntityInstance* m_pOwner; 	// 0x30
	// MNetworkDisable
	CGameSceneNode* m_pParent; 	// 0x38
	// MNetworkDisable
	CGameSceneNode* m_pChild; 	// 0x40
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; 	// 0x48
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; 	// 0x70
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; 	// 0x80
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; 	// 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; 	// 0xc4
	// MNetworkDisable
	Vector m_vecAbsOrigin; 	// 0xc8
	// MNetworkDisable
	QAngle m_angAbsRotation; 	// 0xd4
	// MNetworkDisable
	float m_flAbsScale; 	// 0xe0
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; 	// 0xe4
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; 	// 0xe6
	// MNetworkDisable
	bool m_bDormant; 	// 0xe7
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; 	// 0xe8
	// MNetworkDisable
	uint8_t m_bDirtyHierarchy:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bDirtyBoneMergeInfo:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bNetworkedPositionChanged:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bNetworkedAnglesChanged:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bNetworkedScaleChanged:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bWillBeCallingPostDataUpdate:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bNotifyBoneTransformsChanged:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bBoneMergeFlex:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_nLatchAbsOrigin:2; 	// 0x0
	// MNetworkDisable
	uint8_t m_bDirtyBoneMergeBoneToRoot:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; 	// 0xeb
	// MNetworkDisable
	uint8_t m_nHierarchyType; 	// 0xec
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; 	// 0xed
	// MNetworkEnable
	CUtlStringToken m_name; 	// 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; 	// 0x130
	// MNetworkDisable
	float m_flZOffset; 	// 0x134
	// MNetworkDisable
	Vector m_vRenderOrigin; 	// 0x138
};

// Alignment: 8
// Size: 0x28
class CNetworkedSequenceOperation : public 
{ 
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; 	// 0x8
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; 	// 0xc
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	// MNetworkChangeCallback "sequenceOpCycleChanged"
	float m_flCycle; 	// 0x10
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CNetworkedQuantizedFloat m_flWeight; 	// 0x14
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; 	// 0x1c
	// MNetworkDisable
	bool m_bDiscontinuity; 	// 0x1d
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; 	// 0x20
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; 	// 0x24
};

// Alignment: 7
// Size: 0x230
class CModelState : public 
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; 	// 0xa0
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; 	// 0xa8
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; 	// 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; 	// 0x180
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; 	// 0x222
	// MNetworkDisable
	int8_t m_nForceLOD; 	// 0x223
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; 	// 0x224
};

// Alignment: 8
// Size: 0x3f0
class CSkeletonInstance : public CGameSceneNode
{ 
public:
	// MNetworkEnable
	CModelState m_modelState; 	// 0x160
	// MNetworkEnable
	bool m_bIsAnimationEnabled; 	// 0x390
	// MNetworkEnable
	bool m_bUseParentRenderBounds; 	// 0x391
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; 	// 0x392
	// MNetworkDisable
	uint8_t m_bDirtyMotionType:1; 	// 0x0
	// MNetworkDisable
	uint8_t m_bIsGeneratingLatchedParentSpaceState:1; 	// 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; 	// 0x394
	// MNetworkEnable
	uint8_t m_nHitboxSet; 	// 0x398
};

// Alignment: 2
// Size: 0x10
class IntervalTimer : public 
{ 
public:
	// MNetworkEnable
	GameTime_t m_timestamp; 	// 0x8
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; 	// 0xc
};

// Alignment: 4
// Size: 0x18
class CountdownTimer : public 
{ 
public:
	// MNetworkEnable
	float m_duration; 	// 0x8
	// MNetworkEnable
	GameTime_t m_timestamp; 	// 0xc
	// MNetworkEnable
	float m_timescale; 	// 0x10
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; 	// 0x14
};

// Alignment: 3
// Size: 0x18
class EngineCountdownTimer : public 
{ 
public:
	// MNetworkEnable
	float m_duration; 	// 0x8
	// MNetworkEnable
	float m_timestamp; 	// 0xc
	// MNetworkEnable
	float m_timescale; 	// 0x10
};

// Alignment: 7
// Size: 0x228
class CTimeline : public IntervalTimer
{ 
public:
	// MNetworkEnable
	float32[64] m_flValues; 	// 0x10
	// MNetworkEnable
	int32[64] m_nValueCounts; 	// 0x110
	// MNetworkEnable
	int32_t m_nBucketCount; 	// 0x210
	// MNetworkEnable
	float m_flInterval; 	// 0x214
	// MNetworkEnable
	float m_flFinalValue; 	// 0x218
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; 	// 0x21c
	// MNetworkEnable
	bool m_bStopped; 	// 0x220
};

// Alignment: 20
// Size: 0x1138
class CAnimGraphNetworkedVariables : public 
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetBoolVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; 	// 0x8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; 	// 0x20
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; 	// 0x38
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; 	// 0x50
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; 	// 0x68
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; 	// 0x80
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; 	// 0x98
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; 	// 0xb0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; 	// 0xc8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; 	// 0xe0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; 	// 0xf8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; 	// 0x110
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; 	// 0x128
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; 	// 0x140
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; 	// 0x158
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; 	// 0x170
	// MNetworkEnable
	int32_t m_nBoolVariablesCount; 	// 0x188
	// MNetworkEnable
	int32_t m_nOwnerOnlyBoolVariablesCount; 	// 0x18c
	// MNetworkEnable
	int32_t m_nRandomSeedOffset; 	// 0x190
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; 	// 0x1120
};

// Alignment: 82
// Size: 0x538
class C_BaseEntity : public CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; 	// 0x30
	CNetworkTransmitComponent m_NetworkTransmitComponent; 	// 0x38
	GameTick_t m_nLastThinkTick; 	// 0x2f8
	CGameSceneNode* m_pGameSceneNode; 	// 0x300
	CRenderComponent* m_pRenderComponent; 	// 0x308
	CCollisionProperty* m_pCollision; 	// 0x310
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; 	// 0x318
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; 	// 0x31c
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; 	// 0x320
	// MNetworkEnable
	bool m_bTakesDamage; 	// 0x321
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; 	// 0x324
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; 	// 0x328
	CHandle< C_BaseEntity > m_hSceneObjectController; 	// 0x32c
	int32_t m_nNoInterpolationTick; 	// 0x330
	int32_t m_nVisibilityNoInterpolationTick; 	// 0x334
	float m_flProxyRandomValue; 	// 0x338
	int32_t m_iEFlags; 	// 0x33c
	uint8_t m_nWaterType; 	// 0x340
	bool m_bInterpolateEvenWithNoModel; 	// 0x341
	bool m_bPredictionEligible; 	// 0x342
	bool m_bApplyLayerMatchIDToModel; 	// 0x343
	CUtlStringToken m_tokLayerMatchID; 	// 0x344
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; 	// 0x348
	int32_t m_nSimulationTick; 	// 0x358
	int32_t m_iCurrentThinkContext; 	// 0x35c
	CUtlVector< thinkfunc_t > m_aThinkFunctions; 	// 0x360
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; 	// 0x378
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; 	// 0x37c
	uint8_t m_nSceneObjectOverrideFlags; 	// 0x380
	bool m_bHasSuccessfullyInterpolated; 	// 0x381
	bool m_bHasAddedVarsToInterpolation; 	// 0x382
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; 	// 0x383
	int32[2] m_nInterpolationLatchDirtyFlags; 	// 0x384
	uint16[11] m_ListEntry; 	// 0x38c
	// MNetworkEnable
	GameTime_t m_flCreateTime; 	// 0x3a4
	float m_flSpeed; 	// 0x3a8
	uint16_t m_EntClientFlags; 	// 0x3ac
	// MNetworkEnable
	bool m_bClientSideRagdoll; 	// 0x3ae
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; 	// 0x3af
	// MNetworkEnable
	uint32_t m_spawnflags; 	// 0x3b0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; 	// 0x3b4
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; 	// 0x3b8
	Vector m_vecAbsVelocity; 	// 0x3bc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; 	// 0x3c8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; 	// 0x3f8
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; 	// 0x404
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; 	// 0x408
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; 	// 0x40c
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; 	// 0x40d
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	float m_flWaterLevel; 	// 0x410
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; 	// 0x414
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; 	// 0x418
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "4"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; 	// 0x41c
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; 	// 0x420
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; 	// 0x424
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; 	// 0x428
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; 	// 0x42c
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; 	// 0x42d
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinCPULevel; 	// 0x42e
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxCPULevel; 	// 0x42f
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinGPULevel; 	// 0x430
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxGPULevel; 	// 0x431
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; 	// 0x434
	uint16_t m_hThink; 	// 0x438
	uint8_t m_fBBoxVisFlags; 	// 0x448
	bool m_bPredictable; 	// 0x449
	bool m_bRenderWithViewModels; 	// 0x44a
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; 	// 0x44c
	int32_t m_nFirstPredictableCommand; 	// 0x450
	int32_t m_nLastPredictableCommand; 	// 0x454
	CHandle< C_BaseEntity > m_hOldMoveParent; 	// 0x458
	CParticleProperty m_Particles; 	// 0x460
	CUtlVector< float32 > m_vecPredictedScriptFloats; 	// 0x488
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; 	// 0x4a0
	int32_t m_nNextScriptVarRecordID; 	// 0x4d0
	QAngle m_vecAngVelocity; 	// 0x4e0
	int32_t m_DataChangeEventRef; 	// 0x4ec
	CUtlVector< CEntityHandle > m_dependencies; 	// 0x4f0
	int32_t m_nCreationTick; 	// 0x508
	bool m_bAnimTimeChanged; 	// 0x521
	bool m_bSimulationTimeChanged; 	// 0x522
	CUtlString m_sUniqueHammerID; 	// 0x530
	static bool &Get_sm_bDatadescValidating(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){ return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){ return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){ return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
};

// Alignment: 0
// Size: 0x538
class CLogicalEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0x20
class C_BaseFlex::Emphasized_Phoneme : public 
{ 
public:
	CUtlString m_sClassName; 	// 0x0
	float m_flAmount; 	// 0x18
	bool m_bRequired; 	// 0x1c
	bool m_bBasechecked; 	// 0x1d
	bool m_bValid; 	// 0x1e
};

// Alignment: 18
// Size: 0x780
class C_ColorCorrection : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_vecOrigin; 	// 0x538
	// MNetworkEnable
	float m_MinFalloff; 	// 0x544
	// MNetworkEnable
	float m_MaxFalloff; 	// 0x548
	// MNetworkEnable
	float m_flFadeInDuration; 	// 0x54c
	// MNetworkEnable
	float m_flFadeOutDuration; 	// 0x550
	// MNetworkEnable
	float m_flMaxWeight; 	// 0x554
	// MNetworkEnable
	float m_flCurWeight; 	// 0x558
	// MNetworkEnable
	char[512] m_netlookupFilename; 	// 0x55c
	// MNetworkEnable
	bool m_bEnabled; 	// 0x75c
	// MNetworkEnable
	bool m_bMaster; 	// 0x75d
	// MNetworkEnable
	bool m_bClientSide; 	// 0x75e
	// MNetworkEnable
	bool m_bExclusive; 	// 0x75f
	bool[1] m_bEnabledOnClient; 	// 0x760
	float32[1] m_flCurWeightOnClient; 	// 0x764
	bool[1] m_bFadingIn; 	// 0x768
	float32[1] m_flFadeStartWeight; 	// 0x76c
	float32[1] m_flFadeStartTime; 	// 0x770
	float32[1] m_flFadeDuration; 	// 0x774
};

// Alignment: 1
// Size: 0x740
class C_EnvWindClientside : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkDisable
	C_EnvWindShared m_EnvWindShared; 	// 0x538
};

// Alignment: 3
// Size: 0x570
class C_EntityFlame : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; 	// 0x538
	CHandle< C_BaseEntity > m_hOldAttached; 	// 0x560
	// MNetworkEnable
	bool m_bCheapEffect; 	// 0x564
};

// Alignment: 30
// Size: 0x2e0
class CProjectedTextureBase : public 
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; 	// 0xc
	// MNetworkEnable
	bool m_bState; 	// 0x10
	// MNetworkEnable
	bool m_bAlwaysUpdate; 	// 0x11
	// MNetworkEnable
	float m_flLightFOV; 	// 0x14
	// MNetworkEnable
	bool m_bEnableShadows; 	// 0x18
	// MNetworkEnable
	bool m_bSimpleProjection; 	// 0x19
	// MNetworkEnable
	bool m_bLightOnlyTarget; 	// 0x1a
	// MNetworkEnable
	bool m_bLightWorld; 	// 0x1b
	// MNetworkEnable
	bool m_bCameraSpace; 	// 0x1c
	// MNetworkEnable
	float m_flBrightnessScale; 	// 0x20
	// MNetworkEnable
	Color m_LightColor; 	// 0x24
	// MNetworkEnable
	float m_flIntensity; 	// 0x28
	// MNetworkEnable
	float m_flLinearAttenuation; 	// 0x2c
	// MNetworkEnable
	float m_flQuadraticAttenuation; 	// 0x30
	// MNetworkEnable
	bool m_bVolumetric; 	// 0x34
	// MNetworkEnable
	float m_flVolumetricIntensity; 	// 0x38
	// MNetworkEnable
	float m_flNoiseStrength; 	// 0x3c
	// MNetworkEnable
	float m_flFlashlightTime; 	// 0x40
	// MNetworkEnable
	uint32_t m_nNumPlanes; 	// 0x44
	// MNetworkEnable
	float m_flPlaneOffset; 	// 0x48
	// MNetworkEnable
	float m_flColorTransitionTime; 	// 0x4c
	// MNetworkEnable
	float m_flAmbient; 	// 0x50
	// MNetworkEnable
	char[512] m_SpotlightTextureName; 	// 0x54
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; 	// 0x254
	// MNetworkEnable
	uint32_t m_nShadowQuality; 	// 0x258
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; 	// 0x25c
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; 	// 0x260
	// MNetworkEnable
	float m_flProjectionSize; 	// 0x264
	// MNetworkEnable
	float m_flRotation; 	// 0x268
	// MNetworkEnable
	bool m_bFlipHorizontal; 	// 0x26c
	static float &Get_m_flVisibleBBoxMinHeight(){ return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Alignment: 4
// Size: 0x548
class C_BaseFire : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flScale; 	// 0x538
	// MNetworkEnable
	float m_flStartScale; 	// 0x53c
	// MNetworkEnable
	float m_flScaleTime; 	// 0x540
	// MNetworkEnable
	uint32_t m_nFlags; 	// 0x544
};

// Alignment: 13
// Size: 0x5b0
class C_FireSmoke : public C_BaseFire, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; 	// 0x548
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; 	// 0x54c
	float m_flScaleRegister; 	// 0x550
	float m_flScaleStart; 	// 0x554
	float m_flScaleEnd; 	// 0x558
	GameTime_t m_flScaleTimeStart; 	// 0x55c
	GameTime_t m_flScaleTimeEnd; 	// 0x560
	float m_flChildFlameSpread; 	// 0x564
	float m_flClipPerc; 	// 0x578
	bool m_bClipTested; 	// 0x57c
	bool m_bFadingOut; 	// 0x57d
	TimedEvent m_tParticleSpawn; 	// 0x580
	CFireOverlay* m_pFireOverlay; 	// 0x588
};

// Alignment: 1
// Size: 0x10
class C_RopeKeyframe::CPhysicsDelegate : public 
{ 
public:
	C_RopeKeyframe* m_pKeyframe; 	// 0x8
};

// Alignment: 1
// Size: 0x18
struct C_SceneEntity__QueuedEvents_t : public 
{ 
public:
	float starttime; 	// 0x0
};

// Alignment: 0
// Size: 0x550
class C_TintController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x538
class C_TriggerCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 13
// Size: 0x2e0
class CFlashlightEffect : public 
{ 
public:
	bool m_bIsOn; 	// 0x10
	bool m_bMuzzleFlashEnabled; 	// 0x20
	float m_flMuzzleFlashBrightness; 	// 0x24
	Quaternion m_quatMuzzleFlashOrientation; 	// 0x30
	Vector m_vecMuzzleFlashOrigin; 	// 0x40
	float m_flFov; 	// 0x4c
	float m_flFarZ; 	// 0x50
	float m_flLinearAtten; 	// 0x54
	bool m_bCastsShadows; 	// 0x58
	float m_flCurrentPullBackDist; 	// 0x5c
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; 	// 0x60
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; 	// 0x68
	char[64] m_textureName; 	// 0x70
};

// Alignment: 5
// Size: 0x14
class CInterpolatedValue : public 
{ 
public:
	float m_flStartTime; 	// 0x0
	float m_flEndTime; 	// 0x4
	float m_flStartValue; 	// 0x8
	float m_flEndValue; 	// 0xc
	int32_t m_nInterpType; 	// 0x10
};

// Alignment: 4
// Size: 0x20
class CGlowSprite : public 
{ 
public:
	Vector m_vColor; 	// 0x0
	float m_flHorzSize; 	// 0xc
	float m_flVertSize; 	// 0x10
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; 	// 0x18
};

// Alignment: 15
// Size: 0xd0
class CGlowOverlay : public 
{ 
public:
	Vector m_vPos; 	// 0x8
	bool m_bDirectional; 	// 0x14
	Vector m_vDirection; 	// 0x18
	bool m_bInSky; 	// 0x24
	float m_skyObstructionScale; 	// 0x28
	CGlowSprite[4] m_Sprites; 	// 0x30
	int32_t m_nSprites; 	// 0xb0
	float m_flProxyRadius; 	// 0xb4
	float m_flHDRColorScale; 	// 0xb8
	float m_flGlowObstructionScale; 	// 0xbc
	bool m_bCacheGlowObstruction; 	// 0xc0
	bool m_bCacheSkyObstruction; 	// 0xc1
	int16_t m_bActivated; 	// 0xc2
	uint16_t m_ListIndex; 	// 0xc4
	int32_t m_queryHandle; 	// 0xc8
};

// Alignment: 0
// Size: 0x8
class IClientAlphaProperty : public 
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0x540
class CSkyboxReference : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	WorldGroupId_t m_worldGroupId; 	// 0x538
	CHandle< C_SkyCamera > m_hSkyCamera; 	// 0x53c
};

// Alignment: 4
// Size: 0x5d8
class C_SkyCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; 	// 0x538
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; 	// 0x5c8
	bool m_bUseAngles; 	// 0x5cc
	C_SkyCamera* m_pNext; 	// 0x5d0
};

// Alignment: 2
// Size: 0x8
class TimedEvent : public 
{ 
public:
	float m_TimeBetweenEvents; 	// 0x0
	float m_fNextEvent; 	// 0x4
};

// Alignment: 8
// Size: 0x30
struct VPhysicsCollisionAttribute_t : public 
{ 
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; 	// 0x8
	// MNetworkEnable
	uint64_t m_nInteractsWith; 	// 0x10
	// MNetworkEnable
	uint64_t m_nInteractsExclude; 	// 0x18
	// MNetworkEnable
	uint32_t m_nEntityId; 	// 0x20
	// MNetworkEnable
	uint32_t m_nOwnerId; 	// 0x24
	// MNetworkEnable
	uint16_t m_nHierarchyId; 	// 0x28
	// MNetworkEnable
	uint8_t m_nCollisionGroup; 	// 0x2a
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; 	// 0x2b
};

// Alignment: 17
// Size: 0xb0
class CCollisionProperty : public 
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; 	// 0x10
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; 	// 0x40
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; 	// 0x4c
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; 	// 0x5a
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; 	// 0x5b
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; 	// 0x5c
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; 	// 0x5d
	// MNetworkEnable
	uint8_t m_CollisionGroup; 	// 0x5e
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateEnablePhysics"
	uint8_t m_nEnablePhysics; 	// 0x5f
	float m_flBoundingRadius; 	// 0x60
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; 	// 0x64
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; 	// 0x70
	Vector m_vecSurroundingMaxs; 	// 0x7c
	Vector m_vecSurroundingMins; 	// 0x88
	// MNetworkEnable
	Vector m_vCapsuleCenter1; 	// 0x94
	// MNetworkEnable
	Vector m_vCapsuleCenter2; 	// 0xa0
	// MNetworkEnable
	float m_flCapsuleRadius; 	// 0xac
};

// Alignment: 10
// Size: 0x98
class CDecalInfo : public 
{ 
public:
	float m_flAnimationScale; 	// 0x0
	float m_flAnimationLifeSpan; 	// 0x4
	float m_flPlaceTime; 	// 0x8
	float m_flFadeStartTime; 	// 0xc
	float m_flFadeDuration; 	// 0x10
	int32_t m_nVBSlot; 	// 0x14
	int32_t m_nBoneIndex; 	// 0x18
	CDecalInfo* m_pNext; 	// 0x28
	CDecalInfo* m_pPrev; 	// 0x30
	int32_t m_nDecalMaterialIndex; 	// 0x90
};

// Alignment: 21
// Size: 0x70
class CEffectData : public 
{ 
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vOrigin; 	// 0x8
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vStart; 	// 0x14
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vNormal; 	// 0x20
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vAngles; 	// 0x2c
	// MNetworkEnable
	CEntityHandle m_hEntity; 	// 0x38
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; 	// 0x3c
	// MNetworkEnable
	float m_flScale; 	// 0x40
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flMagnitude; 	// 0x44
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flRadius; 	// 0x48
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; 	// 0x4c
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; 	// 0x50
	// MNetworkEnable
	uint32_t m_nDamageType; 	// 0x58
	// MNetworkEnable
	uint8_t m_nPenetrate; 	// 0x5c
	// MNetworkEnable
	uint16_t m_nMaterial; 	// 0x5e
	// MNetworkEnable
	uint16_t m_nHitBox; 	// 0x60
	// MNetworkEnable
	uint8_t m_nColor; 	// 0x62
	// MNetworkEnable
	uint8_t m_fFlags; 	// 0x63
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; 	// 0x64
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; 	// 0x68
	// MNetworkEnable
	uint16_t m_iEffectName; 	// 0x6c
	// MNetworkEnable
	uint8_t m_nExplosionType; 	// 0x6e
};

// Alignment: 2
// Size: 0x540
class C_EnvDetailController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flFadeStartDist; 	// 0x538
	// MNetworkEnable
	float m_flFadeEndDist; 	// 0x53c
};

// Alignment: 29
// Size: 0x208
class C_EnvWindShared : public 
{ 
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0x8
	// MNetworkEnable
	uint32_t m_iWindSeed; 	// 0xc
	// MNetworkEnable
	uint16_t m_iMinWind; 	// 0x10
	// MNetworkEnable
	uint16_t m_iMaxWind; 	// 0x12
	// MNetworkEnable
	int32_t m_windRadius; 	// 0x14
	// MNetworkEnable
	uint16_t m_iMinGust; 	// 0x18
	// MNetworkEnable
	uint16_t m_iMaxGust; 	// 0x1a
	// MNetworkEnable
	float m_flMinGustDelay; 	// 0x1c
	// MNetworkEnable
	float m_flMaxGustDelay; 	// 0x20
	// MNetworkEnable
	float m_flGustDuration; 	// 0x24
	// MNetworkEnable
	uint16_t m_iGustDirChange; 	// 0x28
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_location; 	// 0x2c
	int32_t m_iszGustSound; 	// 0x38
	int32_t m_iWindDir; 	// 0x3c
	float m_flWindSpeed; 	// 0x40
	Vector m_currentWindVector; 	// 0x44
	Vector m_CurrentSwayVector; 	// 0x50
	Vector m_PrevSwayVector; 	// 0x5c
	// MNetworkEnable
	uint16_t m_iInitialWindDir; 	// 0x68
	// MNetworkEnable
	float m_flInitialWindSpeed; 	// 0x6c
	GameTime_t m_flVariationTime; 	// 0x70
	GameTime_t m_flSwayTime; 	// 0x74
	GameTime_t m_flSimTime; 	// 0x78
	GameTime_t m_flSwitchTime; 	// 0x7c
	float m_flAveWindSpeed; 	// 0x80
	bool m_bGusting; 	// 0x84
	float m_flWindAngleVariation; 	// 0x88
	float m_flWindSpeedVariation; 	// 0x8c
	CEntityIndex m_iEntIndex; 	// 0x90
};

// Alignment: 2
// Size: 0x8
struct C_EnvWindShared__WindAveEvent_t : public 
{ 
public:
	float m_flStartWindSpeed; 	// 0x0
	float m_flAveWindSpeed; 	// 0x4
};

// Alignment: 2
// Size: 0x8
struct C_EnvWindShared__WindVariationEvent_t : public 
{ 
public:
	float m_flWindAngleVariation; 	// 0x0
	float m_flWindSpeedVariation; 	// 0x4
};

// Alignment: 0
// Size: 0x538
class C_InfoLadderDismount : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 13
// Size: 0x60
struct shard_model_desc_t : public 
{ 
public:
	// MNetworkEnable
	int32_t m_nModelID; 	// 0x8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; 	// 0x10
	// MNetworkEnable
	ShardSolid_t m_solid; 	// 0x18
	// MNetworkEnable
	ShatterPanelMode m_ShatterPanelMode; 	// 0x19
	// MNetworkEnable
	Vector2D m_vecPanelSize; 	// 0x1c
	// MNetworkEnable
	Vector2D m_vecStressPositionA; 	// 0x24
	// MNetworkEnable
	Vector2D m_vecStressPositionB; 	// 0x2c
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; 	// 0x38
	// MNetworkEnable
	float m_flGlassHalfThickness; 	// 0x50
	// MNetworkEnable
	bool m_bHasParent; 	// 0x54
	// MNetworkEnable
	bool m_bParentFrozen; 	// 0x55
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; 	// 0x58
	// MNetworkEnable
	CUtlStringToken m_LightGroup; 	// 0x5c
};

// Alignment: 0
// Size: 0x538
class C_GameRulesProxy : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x8
class C_GameRules : public 
{ 
public:
	// no members available
};

// Alignment: 11
// Size: 0x58
class CGlowProperty : public 
{ 
public:
	Vector m_fGlowColor; 	// 0x8
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; 	// 0x30
	// MNetworkEnable
	int32_t m_iGlowTeam; 	// 0x34
	// MNetworkEnable
	int32_t m_nGlowRange; 	// 0x38
	// MNetworkEnable
	int32_t m_nGlowRangeMin; 	// 0x3c
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; 	// 0x40
	// MNetworkEnable
	bool m_bFlashing; 	// 0x44
	// MNetworkEnable
	float m_flGlowTime; 	// 0x48
	// MNetworkEnable
	float m_flGlowStartTime; 	// 0x4c
	// MNetworkEnable
	bool m_bEligibleForScreenHighlight; 	// 0x50
	bool m_bGlowing; 	// 0x51
};

// Alignment: 0
// Size: 0x8
class C_MultiplayRules : public C_GameRules
{ 
public:
	// no members available
};

// Alignment: 25
// Size: 0x68
struct fogparams_t : public 
{ 
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; 	// 0x8
	// MNetworkEnable
	Color colorPrimary; 	// 0x14
	// MNetworkEnable
	Color colorSecondary; 	// 0x18
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; 	// 0x1c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; 	// 0x20
	// MNetworkEnable
	float start; 	// 0x24
	// MNetworkEnable
	float end; 	// 0x28
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; 	// 0x2c
	// MNetworkEnable
	float maxdensity; 	// 0x30
	// MNetworkEnable
	float exponent; 	// 0x34
	// MNetworkEnable
	float HDRColorScale; 	// 0x38
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; 	// 0x3c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; 	// 0x40
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; 	// 0x44
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; 	// 0x48
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; 	// 0x4c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	GameTime_t lerptime; 	// 0x50
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; 	// 0x54
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; 	// 0x58
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; 	// 0x5c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float locallightscale; 	// 0x60
	// MNetworkEnable
	bool enable; 	// 0x64
	// MNetworkEnable
	bool blend; 	// 0x65
	// MNetworkEnable
	bool m_bNoReflectionFog; 	// 0x66
	bool m_bPadding; 	// 0x67
};

// Alignment: 14
// Size: 0x40
struct C_fogplayerparams_t : public 
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; 	// 0x8
	float m_flTransitionTime; 	// 0xc
	Color m_OldColor; 	// 0x10
	float m_flOldStart; 	// 0x14
	float m_flOldEnd; 	// 0x18
	float m_flOldMaxDensity; 	// 0x1c
	float m_flOldHDRColorScale; 	// 0x20
	float m_flOldFarZ; 	// 0x24
	Color m_NewColor; 	// 0x28
	float m_flNewStart; 	// 0x2c
	float m_flNewEnd; 	// 0x30
	float m_flNewMaxDensity; 	// 0x34
	float m_flNewHDRColorScale; 	// 0x38
	float m_flNewFarZ; 	// 0x3c
};

// Alignment: 6
// Size: 0x90
struct sky3dparams_t : public 
{ 
public:
	// MNetworkEnable
	int16_t scale; 	// 0x8
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; 	// 0xc
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; 	// 0x18
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; 	// 0x1c
	// MNetworkEnable
	fogparams_t fog; 	// 0x20
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupID; 	// 0x88
};

// Alignment: 3
// Size: 0x50
struct PhysicsRagdollPose_t : public 
{ 
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x8
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	C_NetworkUtlVectorBase< CTransform > m_Transforms; 	// 0x30
	bool m_bDirty; 	// 0x48
};

// Alignment: 0
// Size: 0x8
class C_SingleplayRules : public C_GameRules
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0x558
class C_SoundOpvarSetPointBase : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; 	// 0x538
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; 	// 0x540
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; 	// 0x548
	// MNetworkEnable
	int32_t m_iOpvarIndex; 	// 0x550
	// MNetworkEnable
	bool m_bUseAutoCompare; 	// 0x554
};

// Alignment: 0
// Size: 0x558
class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x558
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x558
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity, C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x558
class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x558
class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x8
class C_TeamplayRules : public C_MultiplayRules, C_GameRules
{ 
public:
	// no members available
};

// Alignment: 30
// Size: 0x580
class C_TeamRoundTimer : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; 	// 0x538
	// MNetworkEnable
	float m_flTimeRemaining; 	// 0x53c
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; 	// 0x540
	// MNetworkEnable
	bool m_bIsDisabled; 	// 0x544
	// MNetworkEnable
	bool m_bShowInHUD; 	// 0x545
	// MNetworkEnable
	int32_t m_nTimerLength; 	// 0x548
	// MNetworkEnable
	int32_t m_nTimerInitialLength; 	// 0x54c
	// MNetworkEnable
	int32_t m_nTimerMaxLength; 	// 0x550
	// MNetworkEnable
	bool m_bAutoCountdown; 	// 0x554
	// MNetworkEnable
	int32_t m_nSetupTimeLength; 	// 0x558
	// MNetworkEnable
	int32_t m_nState; 	// 0x55c
	// MNetworkEnable
	bool m_bStartPaused; 	// 0x560
	// MNetworkEnable
	bool m_bInCaptureWatchState; 	// 0x561
	// MNetworkEnable
	float m_flTotalTime; 	// 0x564
	// MNetworkEnable
	bool m_bStopWatchTimer; 	// 0x568
	bool m_bFireFinished; 	// 0x569
	bool m_bFire5MinRemain; 	// 0x56a
	bool m_bFire4MinRemain; 	// 0x56b
	bool m_bFire3MinRemain; 	// 0x56c
	bool m_bFire2MinRemain; 	// 0x56d
	bool m_bFire1MinRemain; 	// 0x56e
	bool m_bFire30SecRemain; 	// 0x56f
	bool m_bFire10SecRemain; 	// 0x570
	bool m_bFire5SecRemain; 	// 0x571
	bool m_bFire4SecRemain; 	// 0x572
	bool m_bFire3SecRemain; 	// 0x573
	bool m_bFire2SecRemain; 	// 0x574
	bool m_bFire1SecRemain; 	// 0x575
	int32_t m_nOldTimerLength; 	// 0x578
	int32_t m_nOldTimerState; 	// 0x57c
};

// Alignment: 2
// Size: 0x60
class CAttributeList : public 
{ 
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; 	// 0x8
	CAttributeManager* m_pManager; 	// 0x58
};

// Alignment: 5
// Size: 0x48
class CEconItemAttribute : public 
{ 
public:
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; 	// 0x30
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; 	// 0x34
	// MNetworkEnable
	float m_flInitialValue; 	// 0x38
	// MNetworkEnable
	int32_t m_nRefundableCurrency; 	// 0x3c
	// MNetworkEnable
	bool m_bSetBonus; 	// 0x40
};

// Alignment: 6
// Size: 0x50
class CAttributeManager : public 
{ 
public:
	CUtlVector< CHandle< C_BaseEntity > > m_Providers; 	// 0x8
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; 	// 0x20
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOuter; 	// 0x24
	bool m_bPreventLoopback; 	// 0x28
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; 	// 0x2c
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; 	// 0x30
};

// Alignment: 3
// Size: 0x18
struct CAttributeManager__cached_attribute_float_t : public 
{ 
public:
	float flIn; 	// 0x0
	CUtlSymbolLarge iAttribHook; 	// 0x8
	float flOut; 	// 0x10
};

// Alignment: 3
// Size: 0x4a8
class C_AttributeContainer : public CAttributeManager
{ 
public:
	// MNetworkEnable
	C_EconItemView m_Item; 	// 0x50
	int32_t m_iExternalItemProviderRegisteredToken; 	// 0x498
	uint64_t m_ullRegisteredAsItemID; 	// 0x4a0
};

// Alignment: 1
// Size: 0x4
struct C_EconEntity__AttachedModelData_t : public 
{ 
public:
	int32_t m_iModelDisplayFlags; 	// 0x0
};

// Alignment: 2
// Size: 0x18
struct EntitySpottedState_t : public 
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	bool m_bSpotted; 	// 0x8
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	uint32[2] m_bSpottedByMask; 	// 0xc
};

// Alignment: 1
// Size: 0x540
class C_CSGameRulesProxy : public C_GameRulesProxy, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	C_CSGameRules* m_pGameRules; 	// 0x538
};

// Alignment: 100
// Size: 0x18f8
class C_CSGameRules : public C_TeamplayRules, C_MultiplayRules, C_GameRules
{ 
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x8
	// MNetworkEnable
	bool m_bFreezePeriod; 	// 0x30
	// MNetworkEnable
	bool m_bWarmupPeriod; 	// 0x31
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; 	// 0x34
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; 	// 0x38
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; 	// 0x3c
	// MNetworkEnable
	bool m_bCTTimeOutActive; 	// 0x3d
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; 	// 0x40
	// MNetworkEnable
	float m_flCTTimeOutRemaining; 	// 0x44
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; 	// 0x48
	// MNetworkEnable
	int32_t m_nCTTimeOuts; 	// 0x4c
	// MNetworkEnable
	bool m_bTechnicalTimeOut; 	// 0x50
	// MNetworkEnable
	bool m_bMatchWaitingForResume; 	// 0x51
	// MNetworkEnable
	int32_t m_iRoundTime; 	// 0x54
	// MNetworkEnable
	float m_fMatchStartTime; 	// 0x58
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; 	// 0x5c
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; 	// 0x60
	// MNetworkEnable
	bool m_bGameRestart; 	// 0x64
	// MNetworkEnable
	float m_flGameStartTime; 	// 0x68
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; 	// 0x6c
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; 	// 0x70
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; 	// 0x74
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; 	// 0x78
	// MNetworkEnable
	int32_t m_nOvertimePlaying; 	// 0x7c
	// MNetworkEnable
	int32_t m_iHostagesRemaining; 	// 0x80
	// MNetworkEnable
	bool m_bAnyHostageReached; 	// 0x84
	// MNetworkEnable
	bool m_bMapHasBombTarget; 	// 0x85
	// MNetworkEnable
	bool m_bMapHasRescueZone; 	// 0x86
	// MNetworkEnable
	bool m_bMapHasBuyZone; 	// 0x87
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; 	// 0x88
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; 	// 0x8c
	// MNetworkEnable
	bool m_bIsValveDS; 	// 0x90
	// MNetworkEnable
	bool m_bLogoMap; 	// 0x91
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; 	// 0x92
	// MNetworkEnable
	int32_t m_iNumGunGameProgressiveWeaponsCT; 	// 0x94
	// MNetworkEnable
	int32_t m_iNumGunGameProgressiveWeaponsT; 	// 0x98
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; 	// 0x9c
	// MNetworkEnable
	int32[60] m_GGProgressiveWeaponOrderCT; 	// 0xa0
	// MNetworkEnable
	int32[60] m_GGProgressiveWeaponOrderT; 	// 0x190
	// MNetworkEnable
	int32[60] m_GGProgressiveWeaponKillUpgradeOrderCT; 	// 0x280
	// MNetworkEnable
	int32[60] m_GGProgressiveWeaponKillUpgradeOrderT; 	// 0x370
	// MNetworkEnable
	int32_t m_MatchDevice; 	// 0x460
	// MNetworkEnable
	bool m_bHasMatchStarted; 	// 0x464
	// MNetworkEnable
	float m_flDMBonusStartTime; 	// 0x468
	// MNetworkEnable
	float m_flDMBonusTimeLength; 	// 0x46c
	// MNetworkEnable
	uint16_t m_unDMBonusWeaponLoadoutSlot; 	// 0x470
	// MNetworkEnable
	bool m_bDMBonusActive; 	// 0x472
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; 	// 0x474
	// MNetworkEnable
	char[512] m_szTournamentEventName; 	// 0x478
	// MNetworkEnable
	char[512] m_szTournamentEventStage; 	// 0x678
	// MNetworkEnable
	char[512] m_szMatchStatTxt; 	// 0x878
	// MNetworkEnable
	char[512] m_szTournamentPredictionsTxt; 	// 0xa78
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; 	// 0xc78
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; 	// 0xc7c
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; 	// 0xc80
	// MNetworkEnable
	bool m_bIsDroppingItems; 	// 0xc84
	// MNetworkEnable
	bool m_bIsQuestEligible; 	// 0xc85
	// MNetworkEnable
	int32_t m_nGuardianModeWaveNumber; 	// 0xc88
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialKillsRemaining; 	// 0xc8c
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialWeaponNeeded; 	// 0xc90
	int32_t m_nGuardianGrenadesToGiveBots; 	// 0xc94
	int32_t m_nNumHeaviesToSpawn; 	// 0xc98
	// MNetworkEnable
	uint32_t m_numGlobalGiftsGiven; 	// 0xc9c
	// MNetworkEnable
	uint32_t m_numGlobalGifters; 	// 0xca0
	// MNetworkEnable
	uint32_t m_numGlobalGiftsPeriodSeconds; 	// 0xca4
	// MNetworkEnable
	uint32[4] m_arrFeaturedGiftersAccounts; 	// 0xca8
	// MNetworkEnable
	uint32[4] m_arrFeaturedGiftersGifts; 	// 0xcb8
	// MNetworkEnable
	uint16[100] m_arrProhibitedItemIndices; 	// 0xcc8
	// MNetworkEnable
	uint32[4] m_arrTournamentActiveCasterAccounts; 	// 0xd90
	// MNetworkEnable
	int32_t m_numBestOfMaps; 	// 0xda0
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; 	// 0xda4
	// MNetworkEnable
	bool m_bBombDropped; 	// 0xda8
	// MNetworkEnable
	bool m_bBombPlanted; 	// 0xda9
	// MNetworkEnable
	int32_t m_iRoundWinStatus; 	// 0xdac
	// MNetworkEnable
	int32_t m_eRoundWinReason; 	// 0xdb0
	// MNetworkEnable
	bool m_bTCantBuy; 	// 0xdb4
	// MNetworkEnable
	bool m_bCTCantBuy; 	// 0xdb5
	// MNetworkEnable
	GameTime_t m_flGuardianBuyUntilTime; 	// 0xdb8
	// MNetworkEnable
	int32[30] m_iMatchStats_RoundResults; 	// 0xdbc
	// MNetworkEnable
	int32[30] m_iMatchStats_PlayersAlive_CT; 	// 0xe34
	// MNetworkEnable
	int32[30] m_iMatchStats_PlayersAlive_T; 	// 0xeac
	// MNetworkEnable
	float32[32] m_TeamRespawnWaveTimes; 	// 0xf24
	// MNetworkEnable
	GameTime_t[32] m_flNextRespawnWave; 	// 0xfa4
	// MNetworkEnable
	int32_t m_nServerQuestID; 	// 0x1024
	bool m_bDontIncrementCoopWave; 	// 0x1028
	bool m_bSpawnedTerrorHuntHeavy; 	// 0x1029
	// MNetworkEnable
	int32[10] m_nEndMatchMapGroupVoteTypes; 	// 0x102c
	// MNetworkEnable
	int32[10] m_nEndMatchMapGroupVoteOptions; 	// 0x1054
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; 	// 0x107c
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; 	// 0x1080
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; 	// 0x1084
	bool m_bMarkClientStopRecordAtRoundEnd; 	// 0x10a0
	bool m_bHasTriggeredRoundStartMusic; 	// 0x10f8
	bool m_bHasTriggeredCoopSpawnReset; 	// 0x10f9
	bool m_bSwitchingTeamsAtRoundReset; 	// 0x10fa
	int32_t m_iMaxGunGameProgressiveWeaponIndex; 	// 0x10fc
	// MNetworkEnable
	C_SurvivalGameRules m_SurvivalRules; 	// 0x1118
	// MNetworkEnable
	C_RetakeGameRules m_RetakeRules; 	// 0x17d8
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; 	// 0x18f0
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; 	// 0x18f1
};

// Alignment: 5
// Size: 0x118
class C_RetakeGameRules : public 
{ 
public:
	// MNetworkEnable
	int32_t m_nMatchSeed; 	// 0xf8
	// MNetworkEnable
	bool m_bBlockersPresent; 	// 0xfc
	// MNetworkEnable
	bool m_bRoundInProgress; 	// 0xfd
	// MNetworkEnable
	int32_t m_iFirstSecondHalfRound; 	// 0x100
	// MNetworkEnable
	int32_t m_iBombSite; 	// 0x104
};

// Alignment: 13
// Size: 0x68
struct CSPerRoundStats_t : public 
{ 
public:
	// MNetworkEnable
	int32_t m_iKills; 	// 0x30
	// MNetworkEnable
	int32_t m_iDeaths; 	// 0x34
	// MNetworkEnable
	int32_t m_iAssists; 	// 0x38
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iDamage; 	// 0x3c
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iEquipmentValue; 	// 0x40
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iMoneySaved; 	// 0x44
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iKillReward; 	// 0x48
	// MNetworkEnable
	int32_t m_iLiveTime; 	// 0x4c
	// MNetworkEnable
	int32_t m_iHeadShotKills; 	// 0x50
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iObjective; 	// 0x54
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iCashEarned; 	// 0x58
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iUtilityDamage; 	// 0x5c
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iEnemiesFlashed; 	// 0x60
};

// Alignment: 3
// Size: 0x78
struct CSMatchStats_t : public CSPerRoundStats_t
{ 
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; 	// 0x68
	// MNetworkEnable
	int32_t m_iEnemy4Ks; 	// 0x6c
	// MNetworkEnable
	int32_t m_iEnemy3Ks; 	// 0x70
};

// Alignment: 4
// Size: 0x9d0
class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nOrdinal; 	// 0x538
	// MNetworkEnable
	CUtlString m_sWeaponName; 	// 0x540
	// MNetworkEnable
	uint64_t m_xuid; 	// 0x548
	// MNetworkEnable
	C_EconItemView m_weaponItem; 	// 0x550
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition, C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition, C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition, C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition, C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x848
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	bool m_bIsRescuing; 	// 0x40
	// MNetworkEnable
	int32[256] m_iWeaponPurchasesThisMatch; 	// 0x44
	// MNetworkEnable
	int32[256] m_iWeaponPurchasesThisRound; 	// 0x444
};

// Alignment: 5
// Size: 0x588
class C_PlayerPing : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPlayer; 	// 0x568
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPingedEntity; 	// 0x56c
	// MNetworkEnable
	int32_t m_iType; 	// 0x570
	// MNetworkEnable
	bool m_bUrgent; 	// 0x574
	// MNetworkEnable
	char[18] m_szPlaceName; 	// 0x575
};

// Alignment: 1
// Size: 0x48
class CCSPlayer_PingServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPlayerPing; 	// 0x40
};

// Alignment: 10
// Size: 0x5d0
class C_CSPlayerResource : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool[12] m_bHostageAlive; 	// 0x538
	// MNetworkEnable
	bool[12] m_isHostageFollowingSomeone; 	// 0x544
	// MNetworkEnable
	CEntityIndex[12] m_iHostageEntityIDs; 	// 0x550
	// MNetworkEnable
	Vector m_bombsiteCenterA; 	// 0x580
	// MNetworkEnable
	Vector m_bombsiteCenterB; 	// 0x58c
	// MNetworkEnable
	int32[4] m_hostageRescueX; 	// 0x598
	// MNetworkEnable
	int32[4] m_hostageRescueY; 	// 0x5a8
	// MNetworkEnable
	int32[4] m_hostageRescueZ; 	// 0x5b8
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; 	// 0x5c8
	bool m_foundGoalPositions; 	// 0x5c9
};

// Alignment: 1
// Size: 0x80
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; 	// 0x40
};

// Alignment: 2
// Size: 0x250
class CCSPlayer_CameraServices : public CPlayer_CameraServices, CPlayerPawnComponent
{ 
public:
	float m_flLastShotFOV; 	// 0x248
	float m_flDeathCamTilt; 	// 0x24c
};

// Alignment: 2
// Size: 0x48
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCarriedHostage; 	// 0x40
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCarriedHostageProp; 	// 0x44
};

// Alignment: 3
// Size: 0x48
class CCSPlayer_ItemServices : public CPlayer_ItemServices, CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	bool m_bHasDefuser; 	// 0x40
	// MNetworkEnable
	bool m_bHasHelmet; 	// 0x41
	// MNetworkEnable
	bool m_bHasHeavyArmor; 	// 0x42
};

// Alignment: 33
// Size: 0x13a8
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid, CPlayer_MovementServices, CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; 	// 0x1f8
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; 	// 0x1fc
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; 	// 0x208
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAllowAutoMovement; 	// 0x20c
	// MNetworkEnable
	float m_flDuckAmount; 	// 0x210
	// MNetworkEnable
	float m_flDuckSpeed; 	// 0x214
	// MNetworkEnable
	bool m_bDuckOverride; 	// 0x218
	float m_flDuckOffset; 	// 0x21c
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; 	// 0x220
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; 	// 0x224
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; 	// 0x228
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; 	// 0x22c
	Vector2D m_vecLastPositionAtFullCrouchSpeed; 	// 0x238
	bool m_duckUntilOnGround; 	// 0x240
	bool m_bHasWalkMovedSinceLastJump; 	// 0x241
	bool m_bInStuckTest; 	// 0x242
	uint64[64][3] m_CachedGetPointContents; 	// 0x248
	Vector[64][3] m_CachedGetPointContentsPoint; 	// 0x848
	float32[64][2] m_flStuckCheckTime; 	// 0x1150
	int32_t m_nTraceCount; 	// 0x1350
	int32_t m_StuckLast; 	// 0x1354
	bool m_bSpeedCropped; 	// 0x1358
	int32_t m_nOldWaterLevel; 	// 0x135c
	float m_flWaterEntryTime; 	// 0x1360
	Vector m_vecForward; 	// 0x1364
	Vector m_vecLeft; 	// 0x1370
	Vector m_vecUp; 	// 0x137c
	Vector m_vecPreviouslyPredictedOrigin; 	// 0x1388
	// MNetworkEnable
	bool m_bOldJumpPressed; 	// 0x1394
	// MNetworkEnable
	float m_flJumpUntil; 	// 0x1398
	// MNetworkEnable
	float m_flJumpVel; 	// 0x139c
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; 	// 0x13a0
	bool m_bUpdatePredictedOriginAfterDataUpdate; 	// 0x13a4
};

// Alignment: 16
// Size: 0xd0
class CCSPlayer_ObserverServices : public CPlayer_ObserverServices, CPlayerPawnComponent
{ 
public:
	CEntityHandle m_hLastObserverTarget; 	// 0x58
	Vector m_vecObserverInterpolateOffset; 	// 0x5c
	Vector m_vecObserverInterpStartPos; 	// 0x68
	float m_flObsInterp_PathLength; 	// 0x74
	Quaternion m_qObsInterp_OrientationStart; 	// 0x80
	Quaternion m_qObsInterp_OrientationTravelDir; 	// 0x90
	ObserverInterpState_t m_obsInterpState; 	// 0xa0
	bool m_bObserverInterpolationNeedsDeferredSetup; 	// 0xa4
	int32_t m_nLastKillerDamageTaken; 	// 0xa8
	int32_t m_nLastKillerHitsTaken; 	// 0xac
	int32_t m_nLastKillerDamageGiven; 	// 0xb0
	int32_t m_nLastKillerHitsGiven; 	// 0xb4
	int32_t m_nLastKillerActualDamageGiven; 	// 0xb8
	int32_t m_nLastKillerActualDamageTaken; 	// 0xbc
	bool m_bCanShowDeathPanelNow; 	// 0xc0
	bool m_bWasShowingDeathPanel; 	// 0xc1
};

// Alignment: 0
// Size: 0x40
class CCSPlayer_UseServices : public CPlayer_UseServices, CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x50
class CCSPlayer_ViewModelServices : public CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseViewModel >[3] m_hViewModel; 	// 0x40
};

// Alignment: 3
// Size: 0x60
class CCSPlayer_WaterServices : public CPlayer_WaterServices, CPlayerPawnComponent
{ 
public:
	float m_flWaterJumpTime; 	// 0x40
	Vector m_vecWaterJumpVel; 	// 0x44
	float m_flSwimSoundTime; 	// 0x50
};

// Alignment: 3
// Size: 0xb0
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices, CPlayerPawnComponent
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; 	// 0xa8
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; 	// 0xac
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; 	// 0xad
};

// Alignment: 4
// Size: 0x110
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{ 
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; 	// 0x40
	// MNetworkEnable
	CSMatchStats_t m_matchStats; 	// 0x90
	// MNetworkEnable
	int32_t m_iNumRoundKills; 	// 0x108
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; 	// 0x10c
};

// Alignment: 14
// Size: 0x70
class CDamageRecord : public 
{ 
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_PlayerDamager; 	// 0x28
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_PlayerRecipient; 	// 0x2c
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerDamager; 	// 0x30
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerRecipient; 	// 0x34
	// MNetworkEnable
	CUtlString m_szPlayerDamagerName; 	// 0x38
	// MNetworkEnable
	CUtlString m_szPlayerRecipientName; 	// 0x40
	// MNetworkEnable
	uint64_t m_DamagerXuid; 	// 0x48
	// MNetworkEnable
	uint64_t m_RecipientXuid; 	// 0x50
	// MNetworkEnable
	int32_t m_iDamage; 	// 0x58
	// MNetworkEnable
	int32_t m_iActualHealthRemoved; 	// 0x5c
	// MNetworkEnable
	int32_t m_iNumHits; 	// 0x60
	// MNetworkEnable
	int32_t m_iLastBulletUpdate; 	// 0x64
	// MNetworkEnable
	bool m_bIsOtherEnemy; 	// 0x68
	// MNetworkEnable
	EKillTypes_t m_killType; 	// 0x69
};

// Alignment: 3
// Size: 0x98
class CCSPlayerController_DamageServices : public CPlayerControllerComponent
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	// MNetworkChangeCallback "OnDamageListUpdate"
	int32_t m_nSendUpdate; 	// 0x40
	int32_t m_nCachedSendUpdate; 	// 0x44
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; 	// 0x48
};

// Alignment: 5
// Size: 0x58
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{ 
public:
	// MNetworkEnable
	int32_t m_iAccount; 	// 0x40
	// MNetworkEnable
	int32_t m_iStartAccount; 	// 0x44
	// MNetworkEnable
	int32_t m_iTotalCashSpent; 	// 0x48
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; 	// 0x4c
	int32_t m_nPreviousAccount; 	// 0x50
};

// Alignment: 8
// Size: 0x110
class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{ 
public:
	// MNetworkEnable
	uint16_t m_unMusicID; 	// 0x40
	// MNetworkEnable
	MedalRank_t[6] m_rank; 	// 0x44
	// MNetworkEnable
	int32_t m_nPersonaDataPublicLevel; 	// 0x5c
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsLeader; 	// 0x60
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsTeacher; 	// 0x64
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsFriendly; 	// 0x68
	// MNetworkEnable
	// MNetworkChangeCallback "OnTerroristLoadoutCacheChanged"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecTerroristLoadoutCache; 	// 0x70
	// MNetworkEnable
	// MNetworkChangeCallback "OnCounterTerroristLoadoutCacheChanged"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecCounterTerroristLoadoutCache; 	// 0xc0
};

// Alignment: 18
// Size: 0x6c0
class C_SurvivalGameRules : public 
{ 
public:
	// MNetworkEnable
	Vector m_vecPlayAreaMins; 	// 0x8
	// MNetworkEnable
	Vector m_vecPlayAreaMaxs; 	// 0x14
	// MNetworkEnable
	int32[64] m_iPlayerSpawnHexIndices; 	// 0x20
	// MNetworkEnable
	ESurvivalSpawnTileState[224] m_SpawnTileState; 	// 0x120
	// MNetworkEnable
	float m_flSpawnSelectionTimeStartCurrentStage; 	// 0x200
	// MNetworkEnable
	float m_flSpawnSelectionTimeEndCurrentStage; 	// 0x204
	// MNetworkEnable
	float m_flSpawnSelectionTimeEndLastStage; 	// 0x208
	// MNetworkEnable
	SpawnStage_t m_spawnStage; 	// 0x20c
	// MNetworkEnable
	float m_flTabletHexOriginX; 	// 0x210
	// MNetworkEnable
	float m_flTabletHexOriginY; 	// 0x214
	// MNetworkEnable
	float m_flTabletHexSize; 	// 0x218
	// MNetworkEnable
	uint64[64] m_roundData_playerXuids; 	// 0x220
	// MNetworkEnable
	int32[64] m_roundData_playerPositions; 	// 0x420
	// MNetworkEnable
	int32[64] m_roundData_playerTeams; 	// 0x520
	// MNetworkEnable
	ESurvivalGameRuleDecision_t[16] m_SurvivalGameRuleDecisionTypes; 	// 0x620
	// MNetworkEnable
	int32[16] m_SurvivalGameRuleDecisionValues; 	// 0x660
	// MNetworkEnable
	float m_flSurvivalStartTime; 	// 0x6a0
	float m_flLastThinkTime; 	// 0x6a4
};

// Alignment: 7
// Size: 0x560
class C_DangerZone : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	Vector m_vecDangerZoneOriginStartedAt; 	// 0x538
	// MNetworkEnable
	GameTime_t m_flBombLaunchTime; 	// 0x544
	// MNetworkEnable
	float m_flExtraRadius; 	// 0x548
	// MNetworkEnable
	GameTime_t m_flExtraRadiusStartTime; 	// 0x54c
	// MNetworkEnable
	float m_flExtraRadiusTotalLerpTime; 	// 0x550
	// MNetworkEnable
	int32_t m_nDropOrder; 	// 0x554
	// MNetworkEnable
	int32_t m_iWave; 	// 0x558
};

// Alignment: 9
// Size: 0x620
class C_DangerZoneController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDangerZoneControllerEnabled; 	// 0x538
	// MNetworkEnable
	bool m_bMissionControlledExplosions; 	// 0x539
	// MNetworkEnable
	Vector m_vecEndGameCircleStart; 	// 0x53c
	// MNetworkEnable
	Vector m_vecEndGameCircleEnd; 	// 0x548
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0x554
	// MNetworkEnable
	float m_flFinalExpansionTime; 	// 0x558
	// MNetworkEnable
	CHandle< C_DangerZone >[42] m_DangerZones; 	// 0x55c
	// MNetworkEnable
	GameTime_t[5] m_flWaveEndTimes; 	// 0x604
	// MNetworkEnable
	CHandle< C_DangerZone > m_hTheFinalZone; 	// 0x618
};

// Alignment: 4
// Size: 0x560
class C_GrassBurn : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flGrassBurnClearTime; 	// 0x538
	float m_bClientPendingClear; 	// 0x53c
	float m_flGrassBurnClearTimeLocal; 	// 0x540
	CUtlVector< Vector > m_vecGrassBurnPositions; 	// 0x548
};

// Alignment: 13
// Size: 0xb0
class C_IronSightController : public 
{ 
public:
	bool m_bIronSightAvailable; 	// 0x10
	float m_flIronSightAmount; 	// 0x14
	float m_flIronSightAmountGained; 	// 0x18
	float m_flIronSightAmountBiased; 	// 0x1c
	float m_flIronSightAmount_Interpolated; 	// 0x20
	float m_flIronSightAmountGained_Interpolated; 	// 0x24
	float m_flIronSightAmountBiased_Interpolated; 	// 0x28
	float m_flInterpolationLastUpdated; 	// 0x2c
	QAngle[8] m_angDeltaAverage; 	// 0x30
	QAngle m_angViewLast; 	// 0x90
	Vector2D m_vecDotCoords; 	// 0x9c
	float m_flDotBlur; 	// 0xa4
	float m_flSpeedRatio; 	// 0xa8
};

// Alignment: 4
// Size: 0x20
struct CompositeMaterialMatchFilter_t : public 
{ 
public:
	// MPropertyFriendlyName "Match Type"
	// MPropertyAttributeChoiceEnumName
	CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; 	// 0x0
	// MPropertyFriendlyName "Name"
	CUtlString m_strMatchFilter; 	// 0x8
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMatchValue; 	// 0x10
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; 	// 0x18
};

// Alignment: 31
// Size: 0x258
struct CompositeMaterialInputLooseVariable_t : public 
{ 
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttrStateCallback
	CUtlString m_strName; 	// 0x0
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Expose Externally"
	bool m_bExposeExternally; 	// 0x8
	// MPropertyFriendlyName "Exposed Friendly Name"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyName; 	// 0x10
	// MPropertyFriendlyName "Exposed Friendly Group"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyGroupName; 	// 0x18
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Type"
	// MPropertyAttributeChoiceEnumName
	CompositeMaterialInputLooseVariableType_t m_nVariableType; 	// 0x20
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	bool m_bValueBoolean; 	// 0x24
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntX; 	// 0x28
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntY; 	// 0x2c
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntZ; 	// 0x30
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntW; 	// 0x34
	// MPropertyFriendlyName "Specify Min/Max"
	// MPropertyAttrStateCallback
	bool m_bHasFloatBounds; 	// 0x38
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatX; 	// 0x3c
	// MPropertyFriendlyName "X Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Min; 	// 0x40
	// MPropertyFriendlyName "X Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Max; 	// 0x44
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatY; 	// 0x48
	// MPropertyFriendlyName "Y Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Min; 	// 0x4c
	// MPropertyFriendlyName "Y Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Max; 	// 0x50
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatZ; 	// 0x54
	// MPropertyFriendlyName "Z Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Min; 	// 0x58
	// MPropertyFriendlyName "Z Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Max; 	// 0x5c
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatW; 	// 0x60
	// MPropertyFriendlyName "W Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Min; 	// 0x64
	// MPropertyFriendlyName "W Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Max; 	// 0x68
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	Color m_cValueColor4; 	// 0x6c
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialVarSystemVar_t m_nValueSystemVar; 	// 0x70
	// MPropertyFriendlyName "Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strResourceMaterial; 	// 0x78
	// MPropertyFriendlyName "Texture"
	// MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
	// MPropertyAttrStateCallback
	CUtlString m_strTextureContentAssetPath; 	// 0x158
	// MPropertyHideField
	CResourceName m_strTextureRuntimeResourcePath; 	// 0x160
	// MPropertyHideField
	CUtlString m_strTextureCompilationVtexTemplate; 	// 0x240
	// MPropertyFriendlyName "Texture Type"
	// MPropertyAttrStateCallback
	CompositeMaterialInputTextureType_t m_nTextureType; 	// 0x248
	// MPropertyFriendlyName "String"
	// MPropertyAttrStateCallback
	CUtlString m_strString; 	// 0x250
};

// Alignment: 5
// Size: 0x28
struct CompMatMutatorCondition_t : public 
{ 
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Condition"
	// MPropertyAttributeChoiceEnumName
	CompMatPropertyMutatorConditionType_t m_nMutatorCondition; 	// 0x0
	// MPropertyFriendlyName "Container Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerName; 	// 0x8
	// MPropertyFriendlyName "Variable Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarName; 	// 0x10
	// MPropertyFriendlyName "Variable Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarValue; 	// 0x18
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; 	// 0x20
};

// Alignment: 25
// Size: 0x340
struct CompMatPropertyMutator_t : public 
{ 
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; 	// 0x0
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Mutator Command"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrStateCallback
	CompMatPropertyMutatorType_t m_nMutatorCommandType; 	// 0x4
	// MPropertyFriendlyName "Container to Init With"
	// MPropertyAttrStateCallback
	CUtlString m_strInitWith_Container; 	// 0x8
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerSrc; 	// 0x10
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerProperty; 	// 0x18
	// MPropertyFriendlyName "Target Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_TargetProperty; 	// 0x20
	// MPropertyFriendlyName "Seed Input Var"
	// MPropertyAttrStateCallback
	CUtlString m_strRandomRollInputVars_SeedInputVar; 	// 0x28
	// MPropertyFriendlyName "Input Vars"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; 	// 0x30
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyMatchingKeys_InputContainerSrc; 	// 0x48
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; 	// 0x50
	// MPropertyFriendlyName "Find Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_FindSuffix; 	// 0x58
	// MPropertyFriendlyName "Replace Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; 	// 0x60
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value; 	// 0x68
	// MPropertyFriendlyName "Target Texture Param"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_TargetParam; 	// 0x2c0
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; 	// 0x2c8
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; 	// 0x2d0
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; 	// 0x2d4
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; 	// 0x2d5
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; 	// 0x2d8
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; 	// 0x2f0
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; 	// 0x308
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; 	// 0x310
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; 	// 0x318
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; 	// 0x320
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatMutatorCondition_t > m_vecConditions; 	// 0x328
};

// Alignment: 8
// Size: 0x138
struct CompositeMaterialInputContainer_t : public 
{ 
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; 	// 0x0
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Input Container Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrStateCallback
	CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; 	// 0x4
	// MPropertyFriendlyName "Specific Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strSpecificContainerMaterial; 	// 0x8
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrName; 	// 0xe8
	// MPropertyFriendlyName "Alias"
	// MPropertyAttrStateCallback
	CUtlString m_strAlias; 	// 0xf0
	// MPropertyFriendlyName "Variables"
	// MPropertyAttrStateCallback
	CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; 	// 0xf8
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrNameForVar; 	// 0x110
	// MPropertyFriendlyName "Expose Externally"
	// MPropertyAttrStateCallback
	bool m_bExposeExternally; 	// 0x118
};

// Alignment: 4
// Size: 0x60
struct CompositeMaterialAssemblyProcedure_t : public 
{ 
public:
	// MPropertyFriendlyName "Includes"
	// MPropertyAttributeEditor "AssetBrowse( vcompmat )"
	CUtlVector< CResourceName > m_vecCompMatIncludes; 	// 0x0
	// MPropertyFriendlyName "Match Filters"
	CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; 	// 0x18
	// MPropertyFriendlyName "Composite Inputs"
	CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; 	// 0x30
	// MPropertyFriendlyName "Property Mutators"
	CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; 	// 0x48
};

// Alignment: 1
// Size: 0x50
struct GeneratedTextureHandle_t : public 
{ 
public:
	// MPropertyFriendlyName "Generated Texture"
	// MPropertyAttributeEditor "CompositeMaterialTextureViewer"
	CUtlString m_strBitmapName; 	// 0x8
};

// Alignment: 4
// Size: 0x60
struct CompositeMaterial_t : public 
{ 
public:
	// MPropertyGroupName "Target Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_TargetKVs; 	// 0x8
	// MPropertyGroupName "Pre-Generated Output Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_PreGenerationKVs; 	// 0x18
	// MPropertyGroupName "Generated Composite Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_FinalKVs; 	// 0x28
	// MPropertyFriendlyName "Generated Textures"
	CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; 	// 0x40
};

// Alignment: 8
// Size: 0x218
struct CompositeMaterialEditorPoint_t : public 
{ 
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Target Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceName m_ModelName; 	// 0x0
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation"
	int32_t m_nSequenceIndex; 	// 0xe0
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation Cycle"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flCycle; 	// 0xe4
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Model Preview State"
	// MPropertyAttributeEditor "CompositeMaterialUserModelStateSetting"
	KeyValues3 m_KVModelStateChoices; 	// 0xe8
	// MPropertyAutoRebuildOnChange
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Enable Child Model"
	bool m_bEnableChildModel; 	// 0xf8
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Child Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	// MPropertyAttrStateCallback
	CResourceName m_ChildModelName; 	// 0x100
	// MPropertyGroupName "Composite Material Assembly"
	// MPropertyFriendlyName "Composite Material Assembly Procedures"
	CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; 	// 0x1e0
	// MPropertyFriendlyName "Generated Composite Materials"
	CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; 	// 0x1f8
};

// Alignment: 3
// Size: 0x38
class CCompositeMaterialEditorDoc : public 
{ 
public:
	int32_t m_nVersion; 	// 0x8
	CUtlVector< CompositeMaterialEditorPoint_t > m_Points; 	// 0x10
	KeyValues3 m_KVthumbnail; 	// 0x28
};

// Alignment: 43
// Size: 0x4c0
class CGlobalLightBase : public 
{ 
public:
	bool m_bSpotLight; 	// 0x10
	Vector m_SpotLightOrigin; 	// 0x14
	QAngle m_SpotLightAngles; 	// 0x20
	Vector m_ShadowDirection; 	// 0x2c
	Vector m_AmbientDirection; 	// 0x38
	Vector m_SpecularDirection; 	// 0x44
	Vector m_InspectorSpecularDirection; 	// 0x50
	float m_flSpecularPower; 	// 0x5c
	float m_flSpecularIndependence; 	// 0x60
	Color m_SpecularColor; 	// 0x64
	bool m_bStartDisabled; 	// 0x68
	bool m_bEnabled; 	// 0x69
	Color m_LightColor; 	// 0x6a
	Color m_AmbientColor1; 	// 0x6e
	Color m_AmbientColor2; 	// 0x72
	Color m_AmbientColor3; 	// 0x76
	float m_flSunDistance; 	// 0x7c
	float m_flFOV; 	// 0x80
	float m_flNearZ; 	// 0x84
	float m_flFarZ; 	// 0x88
	bool m_bEnableShadows; 	// 0x8c
	bool m_bOldEnableShadows; 	// 0x8d
	bool m_bBackgroundClearNotRequired; 	// 0x8e
	float m_flCloudScale; 	// 0x90
	float m_flCloud1Speed; 	// 0x94
	float m_flCloud1Direction; 	// 0x98
	float m_flCloud2Speed; 	// 0x9c
	float m_flCloud2Direction; 	// 0xa0
	float m_flAmbientScale1; 	// 0xa4
	float m_flAmbientScale2; 	// 0xa8
	float m_flGroundScale; 	// 0xac
	float m_flLightScale; 	// 0xb0
	float m_flFoWDarkness; 	// 0xb4
	bool m_bEnableSeparateSkyboxFog; 	// 0xb8
	Vector m_vFowColor; 	// 0xbc
	Vector m_ViewOrigin; 	// 0xc8
	QAngle m_ViewAngles; 	// 0xd4
	float m_flViewFoV; 	// 0xe0
	Vector[8] m_WorldPoints; 	// 0xe4
	Vector2D m_vFogOffsetLayer0; 	// 0x4a8
	Vector2D m_vFogOffsetLayer1; 	// 0x4b0
	CHandle< C_BaseEntity > m_hEnvWind; 	// 0x4b8
	CHandle< C_BaseEntity > m_hEnvSky; 	// 0x4bc
};

// Alignment: 1
// Size: 0xa30
class C_GlobalLight : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	uint16_t m_WindClothForceHandle; 	// 0xa00
	static C_GlobalLight*[5] &Get_sm_pGlobalLight(){ return *reinterpret_cast<C_GlobalLight*[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[0]->m_instance);};
	static CUtlStringToken[5] &Get_sm_pSkyboxSlots(){ return *reinterpret_cast<CUtlStringToken[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[1]->m_instance);};
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights(){ return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[2]->m_instance);};
};

// Alignment: 10
// Size: 0x588
class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlSymbolLarge m_szParentPathUniqueID; 	// 0x538
	int32_t m_nPathIndex; 	// 0x540
	Vector m_vInTangentLocal; 	// 0x544
	Vector m_vOutTangentLocal; 	// 0x550
	float m_flFOV; 	// 0x55c
	float m_flSpeed; 	// 0x560
	float m_flEaseIn; 	// 0x564
	float m_flEaseOut; 	// 0x568
	Vector m_vInTangentWorld; 	// 0x56c
	Vector m_vOutTangentWorld; 	// 0x578
};

// Alignment: 8
// Size: 0x598
class C_CSGO_MapPreviewCameraPath : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flZFar; 	// 0x538
	float m_flZNear; 	// 0x53c
	bool m_bLoop; 	// 0x540
	bool m_bVerticalFOV; 	// 0x541
	bool m_bConstantSpeed; 	// 0x542
	float m_flDuration; 	// 0x544
	float m_flPathLength; 	// 0x588
	float m_flPathDuration; 	// 0x58c
};

// Alignment: 0
// Size: 0x70
class CCSPlayer_GlowServices : public CPlayerPawnComponent
{ 
public:
	// no members available
};

// Alignment: 7
// Size: 0x570
class C_VoteController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteType"
	int32_t m_iActiveIssueIndex; 	// 0x548
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; 	// 0x54c
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteOption"
	int32[5] m_nVoteOptionCount; 	// 0x550
	// MNetworkEnable
	int32_t m_nPotentialVotes; 	// 0x564
	bool m_bVotesDirty; 	// 0x568
	bool m_bTypeDirty; 	// 0x569
	// MNetworkEnable
	bool m_bIsYesNoVote; 	// 0x56a
};

// Alignment: 17
// Size: 0xe80
class C_MapVetoPickController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nDraftType; 	// 0x548
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; 	// 0x54c
	// MNetworkEnable
	int32[64] m_nTeamWithFirstChoice; 	// 0x550
	// MNetworkEnable
	int32[7] m_nVoteMapIdsList; 	// 0x650
	// MNetworkEnable
	int32[64] m_nAccountIDs; 	// 0x66c
	// MNetworkEnable
	int32[64] m_nMapId0; 	// 0x76c
	// MNetworkEnable
	int32[64] m_nMapId1; 	// 0x86c
	// MNetworkEnable
	int32[64] m_nMapId2; 	// 0x96c
	// MNetworkEnable
	int32[64] m_nMapId3; 	// 0xa6c
	// MNetworkEnable
	int32[64] m_nMapId4; 	// 0xb6c
	// MNetworkEnable
	int32[64] m_nMapId5; 	// 0xc6c
	// MNetworkEnable
	int32[64] m_nStartingSide0; 	// 0xd6c
	// MNetworkEnable
	int32_t m_nCurrentPhase; 	// 0xe6c
	// MNetworkEnable
	int32_t m_nPhaseStartTick; 	// 0xe70
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; 	// 0xe74
	int32_t m_nPostDataUpdateTick; 	// 0xe78
	bool m_bDisabledHud; 	// 0xe7c
};

// Alignment: 0
// Size: 0x30
class CPlayerSprayDecalRenderHelper : public 
{ 
public:
	// no members available
};

// Alignment: 6
// Size: 0x5b0
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bDofEnabled; 	// 0x598
	float m_flDofNearBlurry; 	// 0x59c
	float m_flDofNearCrisp; 	// 0x5a0
	float m_flDofFarCrisp; 	// 0x5a4
	float m_flDofFarBlurry; 	// 0x5a8
	float m_flDofTiltToGround; 	// 0x5ac
};

// Alignment: 0
// Size: 0x5b0
class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera, C_CSGO_MapPreviewCameraPath, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x5b0
class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera, C_CSGO_MapPreviewCameraPath, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x5b0
class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera, C_CSGO_MapPreviewCameraPath, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x5b0
class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera, C_CSGO_MapPreviewCameraPath, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9d0
class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x538
class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x538
class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x538
class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x5c8
class C_InfoMapRegion : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flRadius; 	// 0x538
	// MNetworkEnable
	char[128] m_szLocToken; 	// 0x53c
	C_InfoMapRegion* m_pNext; 	// 0x5c0
};

// Alignment: 0
// Size: 0x538
class C_PointEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 25
// Size: 0x16b8
class C_EnvCombinedLightProbeVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; 	// 0x1608
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; 	// 0x160c
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; 	// 0x1610
	// MNetworkEnable
	bool m_bCustomCubemapTexture; 	// 0x1618
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; 	// 0x1620
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; 	// 0x1628
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; 	// 0x1630
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; 	// 0x1638
	// MNetworkEnable
	Vector m_vBoxMins; 	// 0x1640
	// MNetworkEnable
	Vector m_vBoxMaxs; 	// 0x164c
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; 	// 0x1658
	// MNetworkEnable
	bool m_bMoveable; 	// 0x1660
	// MNetworkEnable
	int32_t m_nHandshake; 	// 0x1664
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; 	// 0x1668
	// MNetworkEnable
	int32_t m_nPriority; 	// 0x166c
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x1670
	// MNetworkEnable
	float m_flEdgeFadeDist; 	// 0x1674
	// MNetworkEnable
	Vector m_vEdgeFadeDists; 	// 0x1678
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; 	// 0x1684
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; 	// 0x1688
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; 	// 0x168c
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; 	// 0x1690
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; 	// 0x1694
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; 	// 0x1698
	// MNetworkEnable
	bool m_bEnabled; 	// 0x16b1
};

// Alignment: 19
// Size: 0x698
class C_EnvCubemap : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; 	// 0x628
	// MNetworkEnable
	bool m_bCustomCubemapTexture; 	// 0x630
	// MNetworkEnable
	float m_flInfluenceRadius; 	// 0x634
	// MNetworkEnable
	Vector m_vBoxProjectMins; 	// 0x638
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; 	// 0x644
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; 	// 0x650
	// MNetworkEnable
	bool m_bMoveable; 	// 0x658
	// MNetworkEnable
	int32_t m_nHandshake; 	// 0x65c
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; 	// 0x660
	// MNetworkEnable
	int32_t m_nPriority; 	// 0x664
	// MNetworkEnable
	float m_flEdgeFadeDist; 	// 0x668
	// MNetworkEnable
	Vector m_vEdgeFadeDists; 	// 0x66c
	// MNetworkEnable
	float m_flDiffuseScale; 	// 0x678
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x67c
	// MNetworkEnable
	bool m_bDefaultEnvMap; 	// 0x67d
	// MNetworkEnable
	bool m_bDefaultSpecEnvMap; 	// 0x67e
	// MNetworkEnable
	bool m_bIndoorCubeMap; 	// 0x67f
	// MNetworkEnable
	bool m_bCopyDiffuseFromDefaultCubemap; 	// 0x680
	// MNetworkEnable
	bool m_bEnabled; 	// 0x690
};

// Alignment: 0
// Size: 0x698
class C_EnvCubemapBox : public C_EnvCubemap, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 18
// Size: 0x588
class C_EnvCubemapFog : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flEndDistance; 	// 0x538
	// MNetworkEnable
	float m_flStartDistance; 	// 0x53c
	// MNetworkEnable
	float m_flFogFalloffExponent; 	// 0x540
	// MNetworkEnable
	bool m_bHeightFogEnabled; 	// 0x544
	// MNetworkEnable
	float m_flFogHeightWidth; 	// 0x548
	// MNetworkEnable
	float m_flFogHeightEnd; 	// 0x54c
	// MNetworkEnable
	float m_flFogHeightStart; 	// 0x550
	// MNetworkEnable
	float m_flFogHeightExponent; 	// 0x554
	// MNetworkEnable
	float m_flLODBias; 	// 0x558
	// MNetworkEnable
	bool m_bActive; 	// 0x55c
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x55d
	// MNetworkEnable
	float m_flFogMaxOpacity; 	// 0x560
	// MNetworkEnable
	int32_t m_nCubemapSourceType; 	// 0x564
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; 	// 0x568
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; 	// 0x570
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; 	// 0x578
	// MNetworkEnable
	bool m_bHasHeightFogEnd; 	// 0x580
	bool m_bFirstTime; 	// 0x581
};

// Alignment: 16
// Size: 0x5d0
class C_GradientFog : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; 	// 0x538
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; 	// 0x540
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; 	// 0x544
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; 	// 0x548
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; 	// 0x54c
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; 	// 0x550
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; 	// 0x554
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; 	// 0x558
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; 	// 0x55c
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; 	// 0x560
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; 	// 0x564
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; 	// 0x568
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; 	// 0x56c
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x570
	// MNetworkEnable
	bool m_bIsEnabled; 	// 0x571
	bool m_bGradientFogNeedsTextures; 	// 0x572
	static C_GradientFog* &Get_sm_pGradientFog(){ return *reinterpret_cast<C_GradientFog**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GradientFog")->m_static_fields[0]->m_instance);};
};

// Alignment: 18
// Size: 0x1590
class C_EnvLightProbeVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; 	// 0x1518
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; 	// 0x1520
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; 	// 0x1528
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; 	// 0x1530
	// MNetworkEnable
	Vector m_vBoxMins; 	// 0x1538
	// MNetworkEnable
	Vector m_vBoxMaxs; 	// 0x1544
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; 	// 0x1550
	// MNetworkEnable
	bool m_bMoveable; 	// 0x1558
	// MNetworkEnable
	int32_t m_nHandshake; 	// 0x155c
	// MNetworkEnable
	int32_t m_nPriority; 	// 0x1560
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x1564
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; 	// 0x1568
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; 	// 0x156c
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; 	// 0x1570
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; 	// 0x1574
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; 	// 0x1578
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; 	// 0x157c
	// MNetworkEnable
	bool m_bEnabled; 	// 0x1589
};

// Alignment: 8
// Size: 0x560
class C_TonemapController2 : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flAutoExposureMin; 	// 0x538
	// MNetworkEnable
	float m_flAutoExposureMax; 	// 0x53c
	// MNetworkEnable
	float m_flTonemapPercentTarget; 	// 0x540
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; 	// 0x544
	// MNetworkEnable
	float m_flTonemapMinAvgLum; 	// 0x548
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; 	// 0x54c
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; 	// 0x550
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; 	// 0x554
};

// Alignment: 28
// Size: 0x5b8
class C_EnvVolumetricFogController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flScattering; 	// 0x538
	// MNetworkEnable
	float m_flAnisotropy; 	// 0x53c
	// MNetworkEnable
	float m_flFadeSpeed; 	// 0x540
	// MNetworkEnable
	float m_flDrawDistance; 	// 0x544
	// MNetworkEnable
	float m_flFadeInStart; 	// 0x548
	// MNetworkEnable
	float m_flFadeInEnd; 	// 0x54c
	// MNetworkEnable
	float m_flIndirectStrength; 	// 0x550
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; 	// 0x554
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; 	// 0x558
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; 	// 0x55c
	// MNetworkEnable
	Vector m_vBoxMins; 	// 0x560
	// MNetworkEnable
	Vector m_vBoxMaxs; 	// 0x56c
	// MNetworkEnable
	bool m_bActive; 	// 0x578
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; 	// 0x57c
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; 	// 0x580
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; 	// 0x584
	// MNetworkEnable
	float m_flStartAnisotropy; 	// 0x588
	// MNetworkEnable
	float m_flStartScattering; 	// 0x58c
	// MNetworkEnable
	float m_flStartDrawDistance; 	// 0x590
	// MNetworkEnable
	float m_flDefaultAnisotropy; 	// 0x594
	// MNetworkEnable
	float m_flDefaultScattering; 	// 0x598
	// MNetworkEnable
	float m_flDefaultDrawDistance; 	// 0x59c
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x5a0
	// MNetworkEnable
	bool m_bEnableIndirect; 	// 0x5a1
	// MNetworkEnable
	bool m_bIsMaster; 	// 0x5a2
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; 	// 0x5a8
	// MNetworkEnable
	int32_t m_nForceRefreshCount; 	// 0x5b0
	bool m_bFirstTime; 	// 0x5b4
};

// Alignment: 7
// Size: 0x568
class C_EnvVolumetricFogVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bActive; 	// 0x538
	// MNetworkEnable
	Vector m_vBoxMins; 	// 0x53c
	// MNetworkEnable
	Vector m_vBoxMaxs; 	// 0x548
	// MNetworkEnable
	bool m_bStartDisabled; 	// 0x554
	// MNetworkEnable
	float m_flStrength; 	// 0x558
	// MNetworkEnable
	int32_t m_nFalloffShape; 	// 0x55c
	// MNetworkEnable
	float m_flFalloffExponent; 	// 0x560
};

// Alignment: 3
// Size: 0x5a8
class C_FogController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	fogparams_t m_fog; 	// 0x538
	bool m_bUseAngles; 	// 0x5a0
	int32_t m_iChangedVariables; 	// 0x5a4
};

// Alignment: 0
// Size: 0x538
class CInfoTarget : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x538
class CInfoParticleTarget : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x550
class C_InfoVisibilityBox : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nMode; 	// 0x53c
	// MNetworkEnable
	Vector m_vBoxSize; 	// 0x540
	// MNetworkEnable
	bool m_bEnabled; 	// 0x54c
};

// Alignment: 8
// Size: 0x580
class CInfoWorldLayer : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; 	// 0x538
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; 	// 0x560
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; 	// 0x568
	// MNetworkEnable
	bool m_bWorldLayerVisible; 	// 0x570
	// MNetworkEnable
	bool m_bEntitiesSpawned; 	// 0x571
	bool m_bCreateAsChildSpawnGroup; 	// 0x572
	uint32_t m_hLayerSpawnGroup; 	// 0x574
	bool m_bWorldLayerActuallyVisible; 	// 0x578
};

// Alignment: 24
// Size: 0x598
class C_PointCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_FOV; 	// 0x538
	// MNetworkEnable
	float m_Resolution; 	// 0x53c
	// MNetworkEnable
	bool m_bFogEnable; 	// 0x540
	// MNetworkEnable
	Color m_FogColor; 	// 0x541
	// MNetworkEnable
	float m_flFogStart; 	// 0x548
	// MNetworkEnable
	float m_flFogEnd; 	// 0x54c
	// MNetworkEnable
	float m_flFogMaxDensity; 	// 0x550
	// MNetworkEnable
	bool m_bActive; 	// 0x554
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; 	// 0x555
	// MNetworkEnable
	float m_flAspectRatio; 	// 0x558
	// MNetworkEnable
	bool m_bNoSky; 	// 0x55c
	// MNetworkEnable
	float m_fBrightness; 	// 0x560
	// MNetworkEnable
	float m_flZFar; 	// 0x564
	// MNetworkEnable
	float m_flZNear; 	// 0x568
	// MNetworkEnable
	bool m_bDofEnabled; 	// 0x56c
	// MNetworkEnable
	float m_flDofNearBlurry; 	// 0x570
	// MNetworkEnable
	float m_flDofNearCrisp; 	// 0x574
	// MNetworkEnable
	float m_flDofFarCrisp; 	// 0x578
	// MNetworkEnable
	float m_flDofFarBlurry; 	// 0x57c
	// MNetworkEnable
	float m_flDofTiltToGround; 	// 0x580
	float m_TargetFOV; 	// 0x584
	float m_DegreesPerSecond; 	// 0x588
	bool m_bIsOn; 	// 0x58c
	C_PointCamera* m_pNext; 	// 0x590
};

// Alignment: 1
// Size: 0x5a0
class C_PointCameraVFOV : public C_PointCamera, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flVerticalFOV; 	// 0x598
};

// Alignment: 12
// Size: 0x5c8
class CPointTemplate : public CLogicalEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlSymbolLarge m_iszWorldName; 	// 0x538
	CUtlSymbolLarge m_iszSource2EntityLumpName; 	// 0x540
	CUtlSymbolLarge m_iszEntityFilterName; 	// 0x548
	float m_flTimeoutInterval; 	// 0x550
	bool m_bAsynchronouslySpawnEntities; 	// 0x554
	CEntityIOOutput m_pOutputOnSpawned; 	// 0x558
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; 	// 0x580
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; 	// 0x584
	CUtlVector< uint32 > m_createdSpawnGroupHandles; 	// 0x588
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; 	// 0x5a0
	HSCRIPT m_ScriptSpawnCallback; 	// 0x5b8
	HSCRIPT m_ScriptCallbackScope; 	// 0x5c0
};

// Alignment: 4
// Size: 0x560
class C_SoundAreaEntityBase : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDisabled; 	// 0x538
	bool m_bWasEnabled; 	// 0x540
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; 	// 0x548
	// MNetworkEnable
	Vector m_vPos; 	// 0x550
};

// Alignment: 1
// Size: 0x568
class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flRadius; 	// 0x560
};

// Alignment: 2
// Size: 0x578
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	Vector m_vMin; 	// 0x560
	// MNetworkEnable
	Vector m_vMax; 	// 0x56c
};

// Alignment: 4
// Size: 0x5f0
class C_Team : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; 	// 0x538
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; 	// 0x550
	// MNetworkEnable
	int32_t m_iScore; 	// 0x568
	// MNetworkEnable
	char[129] m_szTeamname; 	// 0x56c
};

// Alignment: 15
// Size: 0x6a0
class CBasePlayerController : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	int32_t m_nFinalPredictedTick; 	// 0x540
	C_CommandContext m_CommandContext; 	// 0x548
	uint64_t m_nInButtonsWhichAreToggles; 	// 0x5c8
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; 	// 0x5d0
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; 	// 0x5d4
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; 	// 0x5d8
	CSplitScreenSlot m_nSplitScreenSlot; 	// 0x5dc
	CHandle< CBasePlayerController > m_hSplitOwner; 	// 0x5e0
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; 	// 0x5e8
	bool m_bIsHLTV; 	// 0x600
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; 	// 0x604
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char[128] m_iszPlayerName; 	// 0x608
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; 	// 0x690
	bool m_bIsLocalPlayerController; 	// 0x698
	// MNetworkEnable
	uint32_t m_iDesiredFOV; 	// 0x69c
};

// Alignment: 14
// Size: 0x178
class CBasePlayerVData : public CEntitySubclassVDataBase
{ 
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; 	// 0x28
	CSkillFloat m_flHeadDamageMultiplier; 	// 0x108
	CSkillFloat m_flChestDamageMultiplier; 	// 0x118
	CSkillFloat m_flStomachDamageMultiplier; 	// 0x128
	CSkillFloat m_flArmDamageMultiplier; 	// 0x138
	CSkillFloat m_flLegDamageMultiplier; 	// 0x148
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; 	// 0x158
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; 	// 0x15c
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; 	// 0x160
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; 	// 0x164
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; 	// 0x168
	// MPropertyGroupName "Use"
	float m_flUseRange; 	// 0x16c
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; 	// 0x170
	// MPropertyGroupName "Crouch"
	// MPropertyDescription "Time to move between crouch and stand"
	float m_flCrouchTime; 	// 0x174
};

// Alignment: 22
// Size: 0x320
class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{ 
public:
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; 	// 0x28
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; 	// 0x108
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; 	// 0x109
	bool m_bIsFullAuto; 	// 0x10a
	int32_t m_nNumBullets; 	// 0x10c
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CUtlString m_sMuzzleAttachment; 	// 0x110
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; 	// 0x118
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; 	// 0x1f8
	ItemFlagTypes_t m_iFlags; 	// 0x2d8
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nPrimaryAmmoType; 	// 0x2d9
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nSecondaryAmmoType; 	// 0x2da
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; 	// 0x2dc
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; 	// 0x2e0
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; 	// 0x2e4
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; 	// 0x2e8
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; 	// 0x2ec
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; 	// 0x2f0
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; 	// 0x2f1
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; 	// 0x2f4
	CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; 	// 0x2f8
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; 	// 0x318
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; 	// 0x31c
};

// Alignment: 16
// Size: 0x1298
class CBaseAnimGraphController : public CSkeletonAnimationController
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChangedCompat"
	CNetworkedSequenceOperation m_baseLayer; 	// 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; 	// 0x40
	// MNetworkDisable
	bool m_bSequenceFinished; 	// 0x1180
	// MNetworkDisable
	float m_flLastEventCycle; 	// 0x1184
	// MNetworkDisable
	float m_flLastEventAnimTime; 	// 0x1188
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playbackRateChangedCompat"
	CNetworkedQuantizedFloat m_flPlaybackRate; 	// 0x118c
	// MNetworkDisable
	float m_flPrevAnimTime; 	// 0x1194
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChangedCompat"
	bool m_bClientSideAnimation; 	// 0x1198
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; 	// 0x1199
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; 	// 0x119a
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; 	// 0x119b
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "clientSideAnimCycleResetCompat"
	int32_t m_nNewSequenceParity; 	// 0x119c
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_nResetEventsParity; 	// 0x11a0
	// MNetworkEnable
	AnimLoopMode_t m_nAnimLoopMode; 	// 0x11a4
	// MNetworkDisable
	AnimationUpdateListHandle_t m_hAnimationUpdate; 	// 0x123c
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; 	// 0x1240
};

// Alignment: 32
// Size: 0x838
class C_BaseModelEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; 	// 0x588
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; 	// 0x590
	bool m_bInitModelEffects; 	// 0x5d8
	bool m_bIsStaticProp; 	// 0x5d9
	int32_t m_nLastAddDecal; 	// 0x5dc
	int32_t m_nDecalsAdded; 	// 0x5e0
	int32_t m_iOldHealth; 	// 0x5e4
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; 	// 0x5e8
	// MNetworkEnable
	RenderFx_t m_nRenderFX; 	// 0x5e9
	bool m_bAllowFadeInView; 	// 0x5ea
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; 	// 0x5eb
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; 	// 0x5f0
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; 	// 0x658
	// MNetworkEnable
	bool m_bRenderToCubemaps; 	// 0x65c
	// MNetworkEnable
	CCollisionProperty m_Collision; 	// 0x660
	// MNetworkEnable
	CGlowProperty m_Glow; 	// 0x710
	// MNetworkEnable
	float m_flGlowBackfaceMult; 	// 0x768
	// MNetworkEnable
	float m_fadeMinDist; 	// 0x76c
	// MNetworkEnable
	float m_fadeMaxDist; 	// 0x770
	// MNetworkEnable
	float m_flFadeScale; 	// 0x774
	// MNetworkEnable
	float m_flShadowStrength; 	// 0x778
	// MNetworkEnable
	uint8_t m_nObjectCulling; 	// 0x77c
	// MNetworkEnable
	int32_t m_nAddDecal; 	// 0x780
	// MNetworkEnable
	Vector m_vDecalPosition; 	// 0x784
	// MNetworkEnable
	Vector m_vDecalForwardAxis; 	// 0x790
	// MNetworkEnable
	float m_flDecalHealBloodRate; 	// 0x79c
	// MNetworkEnable
	float m_flDecalHealHeightRate; 	// 0x7a0
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; 	// 0x7a8
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; 	// 0x7c0
	CClientAlphaProperty* m_pClientAlphaProperty; 	// 0x7f0
	Color m_ClientOverrideTint; 	// 0x7f8
	bool m_bUseClientOverrideTint; 	// 0x7fc
};

// Alignment: 0
// Size: 0x838
class CServerOnlyModelEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x838
class C_ModelPointEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 7
// Size: 0x590
class CLogicRelay : public CLogicalEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CEntityIOOutput m_OnTrigger; 	// 0x538
	CEntityIOOutput m_OnSpawn; 	// 0x560
	bool m_bDisabled; 	// 0x588
	bool m_bWaitForRefire; 	// 0x589
	bool m_bTriggerOnce; 	// 0x58a
	bool m_bFastRetrigger; 	// 0x58b
	bool m_bPassthoughCaller; 	// 0x58c
};

// Alignment: 23
// Size: 0xde8
class C_ParticleSystem : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	char[512] m_szSnapshotFileName; 	// 0x838
	// MNetworkEnable
	bool m_bActive; 	// 0xa38
	// MNetworkEnable
	bool m_bFrozen; 	// 0xa39
	// MNetworkEnable
	float m_flFreezeTransitionDuration; 	// 0xa3c
	// MNetworkEnable
	int32_t m_nStopType; 	// 0xa40
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; 	// 0xa44
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; 	// 0xa48
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0xa50
	// MNetworkEnable
	float m_flPreSimTime; 	// 0xa54
	// MNetworkEnable
	Vector[4] m_vServerControlPoints; 	// 0xa58
	// MNetworkEnable
	uint8[4] m_iServerControlPointAssignments; 	// 0xa88
	// MNetworkEnable
	CHandle< C_BaseEntity >[64] m_hControlPointEnts; 	// 0xa8c
	// MNetworkEnable
	bool m_bNoSave; 	// 0xb8c
	// MNetworkEnable
	bool m_bNoFreeze; 	// 0xb8d
	bool m_bStartActive; 	// 0xb8e
	CUtlSymbolLarge m_iszEffectName; 	// 0xb90
	CUtlSymbolLarge[64] m_iszControlPointNames; 	// 0xb98
	int32_t m_nDataCP; 	// 0xd98
	Vector m_vecDataCPValue; 	// 0xd9c
	int32_t m_nTintCP; 	// 0xda8
	Color m_clrTint; 	// 0xdac
	bool m_bOldActive; 	// 0xdd0
	bool m_bOldFrozen; 	// 0xdd1
};

// Alignment: 16
// Size: 0x640
class C_PathParticleRope : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bStartActive; 	// 0x538
	float m_flMaxSimulationTime; 	// 0x53c
	CUtlSymbolLarge m_iszEffectName; 	// 0x540
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; 	// 0x548
	// MNetworkEnable
	float m_flParticleSpacing; 	// 0x560
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; 	// 0x564
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; 	// 0x568
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; 	// 0x56c
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; 	// 0x570
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; 	// 0x578
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; 	// 0x580
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; 	// 0x598
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; 	// 0x5b0
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; 	// 0x5c8
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; 	// 0x5e0
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; 	// 0x5f8
};

// Alignment: 0
// Size: 0x640
class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 7
// Size: 0x860
class C_DynamicLight : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	uint8_t m_Flags; 	// 0x838
	// MNetworkEnable
	uint8_t m_LightStyle; 	// 0x839
	// MNetworkEnable
	float m_Radius; 	// 0x83c
	// MNetworkEnable
	int32_t m_Exponent; 	// 0x840
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_InnerAngle; 	// 0x844
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_OuterAngle; 	// 0x848
	// MNetworkEnable
	float m_SpotRadius; 	// 0x84c
};

// Alignment: 9
// Size: 0x5c8
class C_EnvScreenOverlay : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CUtlSymbolLarge[10] m_iszOverlayNames; 	// 0x538
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "63"
	float32[10] m_flOverlayTimes; 	// 0x588
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0x5b0
	// MNetworkEnable
	int32_t m_iDesiredOverlay; 	// 0x5b4
	// MNetworkEnable
	bool m_bIsActive; 	// 0x5b8
	bool m_bWasActive; 	// 0x5b9
	int32_t m_iCachedDesiredOverlay; 	// 0x5bc
	int32_t m_iCurrentOverlay; 	// 0x5c0
	GameTime_t m_flCurrentOverlayTime; 	// 0x5c4
};

// Alignment: 3
// Size: 0x848
class C_FuncTrackTrain : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	int32_t m_nLongAxis; 	// 0x838
	float m_flRadius; 	// 0x83c
	float m_flLineLength; 	// 0x840
};

// Alignment: 7
// Size: 0xf8
class C_LightGlowOverlay : public CGlowOverlay
{ 
public:
	Vector m_vecOrigin; 	// 0xd0
	Vector m_vecDirection; 	// 0xdc
	int32_t m_nMinDist; 	// 0xe8
	int32_t m_nMaxDist; 	// 0xec
	int32_t m_nOuterMaxDist; 	// 0xf0
	bool m_bOneSided; 	// 0xf4
	bool m_bModulateByDot; 	// 0xf5
};

// Alignment: 8
// Size: 0x950
class C_LightGlow : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; 	// 0x838
	// MNetworkEnable
	uint32_t m_nVerticalSize; 	// 0x83c
	// MNetworkEnable
	uint32_t m_nMinDist; 	// 0x840
	// MNetworkEnable
	uint32_t m_nMaxDist; 	// 0x844
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; 	// 0x848
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; 	// 0x84c
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "100"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; 	// 0x850
	C_LightGlowOverlay m_Glow; 	// 0x858
};

// Alignment: 1
// Size: 0x540
class C_RagdollManager : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; 	// 0x538
};

// Alignment: 2
// Size: 0x848
class C_SpotlightEnd : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flLightScale; 	// 0x838
	// MNetworkEnable
	float m_Radius; 	// 0x83c
};

// Alignment: 4
// Size: 0x548
class C_PointHMDAnchor : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDisabled; 	// 0x538
	// MNetworkEnable
	GameTime_t m_flEnableTime; 	// 0x53c
	// MNetworkEnable
	int32_t m_nPlayerIndex; 	// 0x540
	int32_t m_nLastSimulateFrame; 	// 0x544
};

// Alignment: 0
// Size: 0x548
class C_PointHMDAnchorOverride : public C_PointHMDAnchor, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 25
// Size: 0x5b0
class C_PointValueRemapper : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDisabled; 	// 0x538
	bool m_bDisabledOld; 	// 0x539
	// MNetworkEnable
	bool m_bUpdateOnClient; 	// 0x53a
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; 	// 0x53c
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; 	// 0x540
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; 	// 0x544
	// MNetworkEnable
	float m_flMaximumChangePerSecond; 	// 0x548
	// MNetworkEnable
	float m_flDisengageDistance; 	// 0x54c
	// MNetworkEnable
	float m_flEngageDistance; 	// 0x550
	// MNetworkEnable
	bool m_bRequiresUseKey; 	// 0x554
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; 	// 0x558
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; 	// 0x560
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; 	// 0x578
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; 	// 0x57c
	// MNetworkEnable
	float m_flMomentumModifier; 	// 0x580
	// MNetworkEnable
	float m_flSnapValue; 	// 0x584
	float m_flCurrentMomentum; 	// 0x588
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; 	// 0x58c
	float m_flRatchetOffset; 	// 0x590
	// MNetworkEnable
	float m_flInputOffset; 	// 0x594
	bool m_bEngaged; 	// 0x598
	bool m_bFirstUpdate; 	// 0x599
	float m_flPreviousValue; 	// 0x59c
	GameTime_t m_flPreviousUpdateTickTime; 	// 0x5a0
	Vector m_vecPreviousTestPoint; 	// 0x5a4
};

// Alignment: 12
// Size: 0xab0
class C_PointWorldText : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bForceRecreateNextUpdate; 	// 0x840
	// MNetworkEnable
	char[512] m_messageText; 	// 0x850
	// MNetworkEnable
	char[64] m_FontName; 	// 0xa50
	// MNetworkEnable
	bool m_bEnabled; 	// 0xa90
	// MNetworkEnable
	bool m_bFullbright; 	// 0xa91
	// MNetworkEnable
	float m_flWorldUnitsPerPx; 	// 0xa94
	// MNetworkEnable
	float m_flFontSize; 	// 0xa98
	// MNetworkEnable
	float m_flDepthOffset; 	// 0xa9c
	// MNetworkEnable
	Color m_Color; 	// 0xaa0
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; 	// 0xaa4
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; 	// 0xaa8
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; 	// 0xaac
};

// Alignment: 2
// Size: 0x540
class C_HandleTest : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Handle; 	// 0x538
	// MNetworkEnable
	bool m_bSendHandle; 	// 0x53c
};

// Alignment: 1
// Size: 0x740
class C_EnvWind : public C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; 	// 0x538
};

// Alignment: 0
// Size: 0x838
class C_BaseToggle : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x848
class C_BaseButton : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; 	// 0x838
	// MNetworkEnable
	bool m_usable; 	// 0x83c
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; 	// 0x840
};

// Alignment: 0
// Size: 0x838
class C_PrecipitationBlocker : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 13
// Size: 0x880
class C_EntityDissolve : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0x840
	// MNetworkEnable
	float m_flFadeInStart; 	// 0x844
	// MNetworkEnable
	float m_flFadeInLength; 	// 0x848
	// MNetworkEnable
	float m_flFadeOutModelStart; 	// 0x84c
	// MNetworkEnable
	float m_flFadeOutModelLength; 	// 0x850
	// MNetworkEnable
	float m_flFadeOutStart; 	// 0x854
	// MNetworkEnable
	float m_flFadeOutLength; 	// 0x858
	GameTime_t m_flNextSparkTime; 	// 0x85c
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; 	// 0x860
	// MNetworkEnable
	Vector m_vDissolverOrigin; 	// 0x864
	// MNetworkEnable
	uint32_t m_nMagnitude; 	// 0x870
	bool m_bCoreExplode; 	// 0x874
	bool m_bLinkedToServerEnt; 	// 0x875
};

// Alignment: 0
// Size: 0xb20
class C_EnvProjectedTexture : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 9
// Size: 0x870
class C_EnvDecal : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; 	// 0x838
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; 	// 0x840
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; 	// 0x844
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; 	// 0x848
	// MNetworkEnable
	uint32_t m_nRenderOrder; 	// 0x84c
	// MNetworkEnable
	bool m_bProjectOnWorld; 	// 0x850
	// MNetworkEnable
	bool m_bProjectOnCharacters; 	// 0x851
	// MNetworkEnable
	bool m_bProjectOnWater; 	// 0x852
	// MNetworkEnable
	float m_flDepthSortBias; 	// 0x854
};

// Alignment: 4
// Size: 0x110
class CFireOverlay : public CGlowOverlay
{ 
public:
	C_FireSmoke* m_pOwner; 	// 0xd0
	Vector[4] m_vBaseColors; 	// 0xd8
	float m_flScale; 	// 0x108
	int32_t m_nGUID; 	// 0x10c
};

// Alignment: 0
// Size: 0x838
class C_FuncBrush : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x850
class C_FuncElectrifiedVolume : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	ParticleIndex_t m_nAmbientEffect; 	// 0x838
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; 	// 0x840
	// MNetworkEnable
	bool m_bState; 	// 0x848
};

// Alignment: 0
// Size: 0x838
class C_FuncRotating : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x838
class C_Breakable : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x838
class C_PhysBox : public C_Breakable, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 41
// Size: 0xc20
class C_RopeKeyframe : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CBitVec< 10 > m_LinksTouchingSomething; 	// 0x840
	int32_t m_nLinksTouchingSomething; 	// 0x844
	bool m_bApplyWind; 	// 0x848
	int32_t m_fPrevLockedPoints; 	// 0x84c
	int32_t m_iForcePointMoveCounter; 	// 0x850
	bool[2] m_bPrevEndPointPos; 	// 0x854
	Vector[2] m_vPrevEndPointPos; 	// 0x858
	float m_flCurScroll; 	// 0x870
	// MNetworkEnable
	float m_flScrollSpeed; 	// 0x874
	// MNetworkEnable
	uint16_t m_RopeFlags; 	// 0x878
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; 	// 0x880
	Vector[10] m_LightValues; 	// 0xaf8
	// MNetworkEnable
	uint8_t m_nSegments; 	// 0xb70
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; 	// 0xb74
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; 	// 0xb78
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; 	// 0xb7c
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; 	// 0xb7d
	// MNetworkEnable
	uint8_t m_Subdiv; 	// 0xb7e
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; 	// 0xb80
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; 	// 0xb82
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.1"
	// MNetworkMaxValue "10"
	float m_TextureScale; 	// 0xb84
	// MNetworkEnable
	uint8_t m_fLockedPoints; 	// 0xb88
	// MNetworkEnable
	uint8_t m_nChangeCount; 	// 0xb89
	// MNetworkEnable
	float m_Width; 	// 0xb8c
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; 	// 0xb90
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; 	// 0xba0
	int32_t m_TextureHeight; 	// 0xba8
	Vector m_vecImpulse; 	// 0xbac
	Vector m_vecPreviousImpulse; 	// 0xbb8
	float m_flCurrentGustTimer; 	// 0xbc4
	float m_flCurrentGustLifetime; 	// 0xbc8
	float m_flTimeToNextGust; 	// 0xbcc
	Vector m_vWindDir; 	// 0xbd0
	Vector m_vColorMod; 	// 0xbdc
	Vector[2] m_vCachedEndPointAttachmentPos; 	// 0xbe8
	QAngle[2] m_vCachedEndPointAttachmentAngle; 	// 0xc00
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; 	// 0xc18
	uint8_t m_bEndPointAttachmentPositionsDirty:1; 	// 0x0
	uint8_t m_bEndPointAttachmentAnglesDirty:1; 	// 0x0
	uint8_t m_bNewDataThisFrame:1; 	// 0x0
	uint8_t m_bPhysicsInitted:1; 	// 0x0
};

// Alignment: 12
// Size: 0x598
class C_SceneEntity : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bIsPlayingBack; 	// 0x540
	// MNetworkEnable
	bool m_bPaused; 	// 0x541
	// MNetworkEnable
	bool m_bMultiplayer; 	// 0x542
	// MNetworkEnable
	bool m_bAutogenerated; 	// 0x543
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; 	// 0x544
	// MNetworkEnable
	// MNetworkPriority "32"
	uint16_t m_nSceneStringIndex; 	// 0x548
	bool m_bClientOnly; 	// 0x54a
	CHandle< C_BaseFlex > m_hOwner; 	// 0x54c
	// MNetworkEnable
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList; 	// 0x550
	bool m_bWasPlaying; 	// 0x568
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; 	// 0x578
	float m_flCurrentTime; 	// 0x590
};

// Alignment: 1
// Size: 0xd8
class C_SunGlowOverlay : public CGlowOverlay
{ 
public:
	bool m_bModulateByDot; 	// 0xd0
};

// Alignment: 18
// Size: 0x898
class C_Sun : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; 	// 0x838
	ParticleIndex_t m_fxSunFlareEffectIndex; 	// 0x83c
	float m_fdistNormalize; 	// 0x840
	Vector m_vSunPos; 	// 0x844
	// MNetworkEnable
	Vector m_vDirection; 	// 0x850
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; 	// 0x860
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; 	// 0x868
	// MNetworkEnable
	Color m_clrOverlay; 	// 0x870
	// MNetworkEnable
	bool m_bOn; 	// 0x874
	// MNetworkEnable
	bool m_bmaxColor; 	// 0x875
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; 	// 0x878
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; 	// 0x87c
	// MNetworkEnable
	// MNetworkMinValue "-360"
	// MNetworkMaxValue "360"
	float m_flRotation; 	// 0x880
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; 	// 0x884
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaHaze; 	// 0x888
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaScale; 	// 0x88c
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaHdr; 	// 0x890
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	float m_flFarZScale; 	// 0x894
};

// Alignment: 2
// Size: 0x840
class C_BaseTrigger : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDisabled; 	// 0x838
	// MNetworkEnable
	bool m_bClientSidePredicted; 	// 0x839
};

// Alignment: 0
// Size: 0x838
class C_TriggerVolume : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x840
class C_TriggerLerpObject : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0x868
class C_TriggerBuoyancy : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CBuoyancyHelper m_BuoyancyHelper; 	// 0x840
	// MNetworkEnable
	float m_flFluidDensity; 	// 0x860
};

// Alignment: 13
// Size: 0x30
class CClientAlphaProperty : public IClientAlphaProperty
{ 
public:
	uint8_t m_nRenderFX; 	// 0x10
	uint8_t m_nRenderMode; 	// 0x11
	uint8_t m_bAlphaOverride:1; 	// 0x0
	uint8_t m_bShadowAlphaOverride:1; 	// 0x0
	uint8_t m_nReserved:6; 	// 0x0
	uint8_t m_nAlpha; 	// 0x13
	uint16_t m_nDesyncOffset; 	// 0x14
	uint16_t m_nReserved2; 	// 0x16
	uint16_t m_nDistFadeStart; 	// 0x18
	uint16_t m_nDistFadeEnd; 	// 0x1a
	float m_flFadeScale; 	// 0x1c
	GameTime_t m_flRenderFxStartTime; 	// 0x20
	float m_flRenderFxDuration; 	// 0x24
};

// Alignment: 24
// Size: 0x8f8
class C_Beam : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25"
	// MNetworkMaxValue "25"
	// MNetworkEncodeFlags
	float m_flFrameRate; 	// 0x838
	// MNetworkEnable
	float m_flHDRColorScale; 	// 0x83c
	GameTime_t m_flFireTime; 	// 0x840
	float m_flDamage; 	// 0x844
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; 	// 0x848
	int32_t m_queryHandleHalo; 	// 0x84c
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; 	// 0x870
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; 	// 0x878
	// MNetworkEnable
	BeamType_t m_nBeamType; 	// 0x880
	// MNetworkEnable
	uint32_t m_nBeamFlags; 	// 0x884
	// MNetworkEnable
	CHandle< C_BaseEntity >[10] m_hAttachEntity; 	// 0x888
	// MNetworkEnable
	AttachmentHandle_t[10] m_nAttachIndex; 	// 0x8b0
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fWidth; 	// 0x8bc
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fEndWidth; 	// 0x8c0
	// MNetworkEnable
	float m_fFadeLength; 	// 0x8c4
	// MNetworkEnable
	float m_fHaloScale; 	// 0x8c8
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_fAmplitude; 	// 0x8cc
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_fStartFrame; 	// 0x8d0
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "100"
	float m_fSpeed; 	// 0x8d4
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	float m_flFrame; 	// 0x8d8
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; 	// 0x8dc
	// MNetworkEnable
	bool m_bTurnedOff; 	// 0x8e0
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEndPos; 	// 0x8e4
	CHandle< C_BaseEntity > m_hEndEntity; 	// 0x8f0
};

// Alignment: 9
// Size: 0x890
class C_FuncLadder : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderDir; 	// 0x838
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; 	// 0x848
	Vector m_vecLocalTop; 	// 0x860
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionTop; 	// 0x86c
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionBottom; 	// 0x878
	// MNetworkEnable
	float m_flAutoRideSpeed; 	// 0x884
	bool m_bDisabled; 	// 0x888
	// MNetworkEnable
	bool m_bFakeLadder; 	// 0x889
	bool m_bHasSlack; 	// 0x88a
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){ return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

// Alignment: 7
// Size: 0x128
class CPrecipitationVData : public CEntitySubclassVDataBase
{ 
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; 	// 0x28
	float m_flInnerDistance; 	// 0x108
	ParticleAttachment_t m_nAttachType; 	// 0x10c
	bool m_bBatchSameVolumeType; 	// 0x110
	int32_t m_nRTEnvCP; 	// 0x114
	int32_t m_nRTEnvCPComponent; 	// 0x118
	CUtlString m_szModifier; 	// 0x120
};

// Alignment: 24
// Size: 0x968
class C_Sprite : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; 	// 0x850
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; 	// 0x858
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; 	// 0x85c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "60"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; 	// 0x860
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flFrame; 	// 0x864
	GameTime_t m_flDieTime; 	// 0x868
	// MNetworkEnable
	uint32_t m_nBrightness; 	// 0x878
	// MNetworkEnable
	float m_flBrightnessDuration; 	// 0x87c
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; 	// 0x880
	// MNetworkEnable
	float m_flScaleDuration; 	// 0x884
	// MNetworkEnable
	bool m_bWorldSpaceScale; 	// 0x888
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; 	// 0x88c
	// MNetworkEnable
	float m_flHDRColorScale; 	// 0x890
	GameTime_t m_flLastTime; 	// 0x894
	float m_flMaxFrame; 	// 0x898
	float m_flStartScale; 	// 0x89c
	float m_flDestScale; 	// 0x8a0
	GameTime_t m_flScaleTimeStart; 	// 0x8a4
	int32_t m_nStartBrightness; 	// 0x8a8
	int32_t m_nDestBrightness; 	// 0x8ac
	GameTime_t m_flBrightnessTimeStart; 	// 0x8b0
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; 	// 0x8b8
	int32_t m_nSpriteWidth; 	// 0x960
	int32_t m_nSpriteHeight; 	// 0x964
};

// Alignment: 0
// Size: 0x968
class C_SpriteOriented : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 4
// Size: 0x868
class C_BaseClientUIEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bEnabled; 	// 0x840
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; 	// 0x848
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; 	// 0x850
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; 	// 0x858
};

// Alignment: 2
// Size: 0x870
class C_PointClientUIDialog : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; 	// 0x868
	bool m_bStartEnabled; 	// 0x86c
};

// Alignment: 13
// Size: 0xa40
class C_PointClientUIHUD : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bCheckCSSClasses; 	// 0x870
	// MNetworkEnable
	bool m_bIgnoreInput; 	// 0x9f8
	// MNetworkEnable
	float m_flWidth; 	// 0x9fc
	// MNetworkEnable
	float m_flHeight; 	// 0xa00
	// MNetworkEnable
	float m_flDPI; 	// 0xa04
	// MNetworkEnable
	float m_flInteractDistance; 	// 0xa08
	// MNetworkEnable
	float m_flDepthOffset; 	// 0xa0c
	// MNetworkEnable
	uint32_t m_unOwnerContext; 	// 0xa10
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; 	// 0xa14
	// MNetworkEnable
	uint32_t m_unVerticalAlign; 	// 0xa18
	// MNetworkEnable
	uint32_t m_unOrientation; 	// 0xa1c
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; 	// 0xa20
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; 	// 0xa28
};

// Alignment: 28
// Size: 0xaa0
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bForceRecreateNextUpdate; 	// 0x870
	bool m_bMoveViewToPlayerNextThink; 	// 0x871
	bool m_bCheckCSSClasses; 	// 0x872
	CTransform m_anchorDeltaTransform; 	// 0x880
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; 	// 0xa20
	// MNetworkEnable
	bool m_bIgnoreInput; 	// 0xa48
	// MNetworkEnable
	bool m_bLit; 	// 0xa49
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; 	// 0xa4a
	// MNetworkEnable
	float m_flWidth; 	// 0xa4c
	// MNetworkEnable
	float m_flHeight; 	// 0xa50
	// MNetworkEnable
	float m_flDPI; 	// 0xa54
	// MNetworkEnable
	float m_flInteractDistance; 	// 0xa58
	// MNetworkEnable
	float m_flDepthOffset; 	// 0xa5c
	// MNetworkEnable
	uint32_t m_unOwnerContext; 	// 0xa60
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; 	// 0xa64
	// MNetworkEnable
	uint32_t m_unVerticalAlign; 	// 0xa68
	// MNetworkEnable
	uint32_t m_unOrientation; 	// 0xa6c
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; 	// 0xa70
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; 	// 0xa78
	// MNetworkEnable
	bool m_bOpaque; 	// 0xa90
	// MNetworkEnable
	bool m_bNoDepth; 	// 0xa91
	// MNetworkEnable
	bool m_bRenderBackface; 	// 0xa92
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; 	// 0xa93
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; 	// 0xa94
	// MNetworkEnable
	bool m_bGrabbable; 	// 0xa95
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; 	// 0xa96
	// MNetworkEnable
	bool m_bDisableMipGen; 	// 0xa97
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; 	// 0xa98
};

// Alignment: 4
// Size: 0xab0
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bBeenEnabled; 	// 0xaa0
	bool m_bHide; 	// 0xaa1
	float m_flSeenTargetTime; 	// 0xaa4
	C_PointClientUIWorldPanel* m_pTargetPanel; 	// 0xaa8
};

// Alignment: 1
// Size: 0xca0
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	char[512] m_messageText; 	// 0xaa0
};

// Alignment: 14
// Size: 0xb40
class C_PointHintUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlSymbolLarge m_pszLessonName; 	// 0xad0
	CUtlSymbolLarge m_pszCaption; 	// 0xad8
	Vector m_vOffset; 	// 0xae0
	WorldTextAttachmentType_t m_attachType; 	// 0xaec
	CHandle< C_BaseEntity > m_hIconTarget; 	// 0xaf0
	CUtlSymbolLarge m_szTargetAttachmentName; 	// 0xaf8
	CUtlSymbolLarge m_pszCustomLayoutFile; 	// 0xb00
	int32_t m_nTrackedDeviceIndex; 	// 0xb08
	CHandle< C_PropVRHand > m_hHighlightHand; 	// 0xb0c
	CUtlSymbolLarge m_pszHighlightControllerComponent; 	// 0xb10
	CUtlSymbolLarge m_pszHighlightControllerAction; 	// 0xb18
	Vector m_vecLocalHighlightPoint; 	// 0xb20
	CUtlSymbolLarge m_pszHighlightOtherEntityName; 	// 0xb30
	bool m_bUseOffScreenIndicator; 	// 0xb38
};

// Alignment: 9
// Size: 0x720
class CInfoOffscreenPanoramaTexture : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bDisabled; 	// 0x538
	// MNetworkEnable
	int32_t m_nResolutionX; 	// 0x53c
	// MNetworkEnable
	int32_t m_nResolutionY; 	// 0x540
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; 	// 0x548
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; 	// 0x550
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; 	// 0x558
	// MNetworkEnable
	int32_t m_nTargetChangeCount; 	// 0x570
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; 	// 0x578
	bool m_bCheckCSSClasses; 	// 0x6f0
};

// Alignment: 27
// Size: 0x448
class C_EconItemView : public IEconItemInterface
{ 
public:
	bool m_bInventoryImageRgbaRequested; 	// 0x60
	bool m_bInventoryImageTriedCache; 	// 0x61
	int32_t m_nInventoryImageRgbaWidth; 	// 0x80
	int32_t m_nInventoryImageRgbaHeight; 	// 0x84
	char[260] m_szCurrentLoadCachedFileName; 	// 0x88
	bool m_bRestoreCustomMaterialAfterPrecache; 	// 0x1b8
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; 	// 0x1ba
	// MNetworkEnable
	int32_t m_iEntityQuality; 	// 0x1bc
	// MNetworkEnable
	uint32_t m_iEntityLevel; 	// 0x1c0
	uint64_t m_iItemID; 	// 0x1c8
	// MNetworkEnable
	uint32_t m_iItemIDHigh; 	// 0x1d0
	// MNetworkEnable
	uint32_t m_iItemIDLow; 	// 0x1d4
	// MNetworkEnable
	uint32_t m_iAccountID; 	// 0x1d8
	// MNetworkEnable
	uint32_t m_iInventoryPosition; 	// 0x1dc
	// MNetworkEnable
	bool m_bInitialized; 	// 0x1e8
	bool m_bIsStoreItem; 	// 0x1e9
	bool m_bIsTradeItem; 	// 0x1ea
	int32_t m_iEntityQuantity; 	// 0x1ec
	int32_t m_iRarityOverride; 	// 0x1f0
	int32_t m_iQualityOverride; 	// 0x1f4
	uint8_t m_unClientFlags; 	// 0x1f8
	uint8_t m_unOverrideStyle; 	// 0x1f9
	// MNetworkEnable
	CAttributeList m_AttributeList; 	// 0x210
	// MNetworkEnable
	CAttributeList m_NetworkedDynamicAttributes; 	// 0x270
	// MNetworkEnable
	char[161] m_szCustomName; 	// 0x2d0
	char[161] m_szCustomNameOverride; 	// 0x371
	bool m_bInitializedTags; 	// 0x440
	static bool &Get_m_sbHasCleanedInventoryImageCacheDir(){ return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EconItemView")->m_static_fields[0]->m_instance);};
};

// Alignment: 54
// Size: 0x828
class CCSPlayerController : public CBasePlayerController, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; 	// 0x6b0
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; 	// 0x6b8
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; 	// 0x6c0
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; 	// 0x6c8
	// MNetworkEnable
	uint32_t m_iPing; 	// 0x6d0
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; 	// 0x6d4
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; 	// 0x6d8
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; 	// 0x6e0
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; 	// 0x6e4
	// MNetworkEnable
	int32_t m_iCompTeammateColor; 	// 0x6e8
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; 	// 0x6ec
	GameTime_t m_flPreviousForceJoinTeamTime; 	// 0x6f0
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; 	// 0x6f8
	CUtlString m_sSanitizedPlayerName; 	// 0x700
	// MNetworkEnable
	int32_t m_iCoachingTeam; 	// 0x708
	// MNetworkEnable
	uint64_t m_nPlayerDominated; 	// 0x710
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; 	// 0x718
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; 	// 0x720
	// MNetworkEnable
	int32_t m_iCompetitiveWins; 	// 0x724
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; 	// 0x728
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; 	// 0x72c
	// MNetworkEnable
	uint16_t m_unActiveQuestId; 	// 0x730
	// MNetworkEnable
	QuestProgress::Reason m_nQuestProgressReason; 	// 0x734
	// MNetworkEnable
	uint32_t m_unPlayerTvControlFlags; 	// 0x738
	int32_t m_iDraftIndex; 	// 0x7a8
	uint32_t m_msQueuedModeDisconnectionTimestamp; 	// 0x7ac
	uint32_t m_uiAbandonRecordedReason; 	// 0x7b0
	bool m_bEverFullyConnected; 	// 0x7b4
	bool m_bAbandonAllowsSurrender; 	// 0x7b5
	bool m_bDisconnection1MinWarningPrinted; 	// 0x7b6
	bool m_bScoreReported; 	// 0x7b7
	// MNetworkEnable
	int32_t m_nDisconnectionTick; 	// 0x7b8
	// MNetworkEnable
	bool m_bControllingBot; 	// 0x7c8
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; 	// 0x7c9
	bool m_bHasBeenControlledByPlayerThisRound; 	// 0x7ca
	int32_t m_nBotsControlledThisRound; 	// 0x7cc
	// MNetworkEnable
	bool m_bCanControlObservedBot; 	// 0x7d0
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayerPawn; 	// 0x7d4
	// MNetworkEnable
	CHandle< C_CSObserverPawn > m_hObserverPawn; 	// 0x7d8
	// MNetworkEnable
	bool m_bPawnIsAlive; 	// 0x7dc
	// MNetworkEnable
	uint32_t m_iPawnHealth; 	// 0x7e0
	// MNetworkEnable
	int32_t m_iPawnArmor; 	// 0x7e4
	// MNetworkEnable
	bool m_bPawnHasDefuser; 	// 0x7e8
	// MNetworkEnable
	bool m_bPawnHasHelmet; 	// 0x7e9
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; 	// 0x7ea
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; 	// 0x7ec
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; 	// 0x7f0
	// MNetworkEnable
	int32_t m_iPawnGunGameLevel; 	// 0x7f4
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; 	// 0x7f8
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; 	// 0x7fc
	// MNetworkEnable
	int32_t m_iScore; 	// 0x800
	// MNetworkEnable
	C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; 	// 0x808
	// MNetworkEnable
	int32_t m_iMVPs; 	// 0x820
	bool m_bIsPlayerNameDirty; 	// 0x824
};

// Alignment: 2
// Size: 0x850
class C_FootstepControl : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; 	// 0x840
	// MNetworkEnable
	CUtlSymbolLarge m_destination; 	// 0x848
	static CUtlVector< C_FootstepControl* > &Get_sm_footstepControllers(){ return *reinterpret_cast<CUtlVector< C_FootstepControl* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FootstepControl")->m_static_fields[0]->m_instance);};
};

// Alignment: 89
// Size: 0xda8
class CWeaponCSBaseVData : public CBasePlayerWeaponVData, CEntitySubclassVDataBase
{ 
public:
	CSWeaponType m_WeaponType; 	// 0x320
	CSWeaponCategory m_WeaponCategory; 	// 0x324
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; 	// 0x328
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; 	// 0x408
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; 	// 0x4e8
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; 	// 0x5c8
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; 	// 0x6a8
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; 	// 0x788
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; 	// 0x868
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; 	// 0x948
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; 	// 0xa28
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; 	// 0xb08
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; 	// 0xbe8
	int32_t m_GearSlotPosition; 	// 0xbec
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_positions_t m_DefaultLoadoutPosition; 	// 0xbf0
	CUtlString m_sWrongTeamMsg; 	// 0xbf8
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; 	// 0xc00
	int32_t m_nKillAward; 	// 0xc04
	int32_t m_nPrimaryReserveAmmoMax; 	// 0xc08
	int32_t m_nSecondaryReserveAmmoMax; 	// 0xc0c
	bool m_bMeleeWeapon; 	// 0xc10
	bool m_bHasBurstMode; 	// 0xc11
	bool m_bIsRevolver; 	// 0xc12
	bool m_bCannotShootUnderwater; 	// 0xc13
	// MPropertyFriendlyName "In-Code weapon name"
	CUtlString m_szName; 	// 0xc18
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; 	// 0xc20
	CSWeaponSilencerType m_eSilencerType; 	// 0xc28
	int32_t m_nCrosshairMinDistance; 	// 0xc2c
	int32_t m_nCrosshairDeltaDistance; 	// 0xc30
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; 	// 0xc34
	CFiringModeFloat m_flMaxSpeed; 	// 0xc3c
	CFiringModeFloat m_flSpread; 	// 0xc44
	CFiringModeFloat m_flInaccuracyCrouch; 	// 0xc4c
	CFiringModeFloat m_flInaccuracyStand; 	// 0xc54
	CFiringModeFloat m_flInaccuracyJump; 	// 0xc5c
	CFiringModeFloat m_flInaccuracyLand; 	// 0xc64
	CFiringModeFloat m_flInaccuracyLadder; 	// 0xc6c
	CFiringModeFloat m_flInaccuracyFire; 	// 0xc74
	CFiringModeFloat m_flInaccuracyMove; 	// 0xc7c
	CFiringModeFloat m_flRecoilAngle; 	// 0xc84
	CFiringModeFloat m_flRecoilAngleVariance; 	// 0xc8c
	CFiringModeFloat m_flRecoilMagnitude; 	// 0xc94
	CFiringModeFloat m_flRecoilMagnitudeVariance; 	// 0xc9c
	CFiringModeInt m_nTracerFrequency; 	// 0xca4
	float m_flInaccuracyJumpInitial; 	// 0xcac
	float m_flInaccuracyJumpApex; 	// 0xcb0
	float m_flInaccuracyReload; 	// 0xcb4
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; 	// 0xcb8
	int32_t m_nSpreadSeed; 	// 0xcbc
	float m_flTimeToIdleAfterFire; 	// 0xcc0
	float m_flIdleInterval; 	// 0xcc4
	float m_flAttackMovespeedFactor; 	// 0xcc8
	float m_flHeatPerShot; 	// 0xccc
	float m_flInaccuracyPitchShift; 	// 0xcd0
	float m_flInaccuracyAltSoundThreshold; 	// 0xcd4
	float m_flBotAudibleRange; 	// 0xcd8
	CUtlString m_szUseRadioSubtitle; 	// 0xce0
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; 	// 0xce8
	bool m_bHideViewModelWhenZoomed; 	// 0xce9
	int32_t m_nZoomLevels; 	// 0xcec
	int32_t m_nZoomFOV1; 	// 0xcf0
	int32_t m_nZoomFOV2; 	// 0xcf4
	float m_flZoomTime0; 	// 0xcf8
	float m_flZoomTime1; 	// 0xcfc
	float m_flZoomTime2; 	// 0xd00
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; 	// 0xd04
	float m_flIronSightPutDownSpeed; 	// 0xd08
	float m_flIronSightFOV; 	// 0xd0c
	float m_flIronSightPivotForward; 	// 0xd10
	float m_flIronSightLooseness; 	// 0xd14
	QAngle m_angPivotAngle; 	// 0xd18
	Vector m_vecIronSightEyePos; 	// 0xd24
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; 	// 0xd30
	float m_flHeadshotMultiplier; 	// 0xd34
	float m_flArmorRatio; 	// 0xd38
	float m_flPenetration; 	// 0xd3c
	float m_flRange; 	// 0xd40
	float m_flRangeModifier; 	// 0xd44
	float m_flFlinchVelocityModifierLarge; 	// 0xd48
	float m_flFlinchVelocityModifierSmall; 	// 0xd4c
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; 	// 0xd50
	float m_flRecoveryTimeStand; 	// 0xd54
	float m_flRecoveryTimeCrouchFinal; 	// 0xd58
	float m_flRecoveryTimeStandFinal; 	// 0xd5c
	int32_t m_nRecoveryTransitionStartBullet; 	// 0xd60
	int32_t m_nRecoveryTransitionEndBullet; 	// 0xd64
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; 	// 0xd68
	Vector m_vSmokeColor; 	// 0xd6c
	CUtlString m_szAnimClass; 	// 0xd78
};

// Alignment: 0
// Size: 0x538
class C_InfoInstructorHintHostageRescueZone : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 16
// Size: 0x948
class C_PlayerSprayDecal : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nUniqueID; 	// 0x838
	// MNetworkEnable
	uint32_t m_unAccountID; 	// 0x83c
	// MNetworkEnable
	uint32_t m_unTraceID; 	// 0x840
	// MNetworkEnable
	uint32_t m_rtGcTime; 	// 0x844
	// MNetworkEnable
	Vector m_vecEndPos; 	// 0x848
	// MNetworkEnable
	Vector m_vecStart; 	// 0x854
	// MNetworkEnable
	Vector m_vecLeft; 	// 0x860
	// MNetworkEnable
	Vector m_vecNormal; 	// 0x86c
	// MNetworkEnable
	int32_t m_nPlayer; 	// 0x878
	// MNetworkEnable
	int32_t m_nEntity; 	// 0x87c
	// MNetworkEnable
	int32_t m_nHitbox; 	// 0x880
	// MNetworkEnable
	float m_flCreationTime; 	// 0x884
	// MNetworkEnable
	int32_t m_nTintID; 	// 0x888
	// MNetworkEnable
	uint8_t m_nVersion; 	// 0x88c
	// MNetworkEnable
	uint8[128] m_ubSignature; 	// 0x88d
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; 	// 0x918
};

// Alignment: 8
// Size: 0x880
class C_FuncConveyor : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; 	// 0x840
	// MNetworkEnable
	float m_flTargetSpeed; 	// 0x84c
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; 	// 0x850
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; 	// 0x854
	// MNetworkEnable
	float m_flTransitionStartSpeed; 	// 0x858
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; 	// 0x860
	float m_flCurrentConveyorOffset; 	// 0x878
	float m_flCurrentConveyorSpeed; 	// 0x87c
};

// Alignment: 2
// Size: 0x898
class CGrenadeTracer : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flTracerDuration; 	// 0x858
	GrenadeType_t m_nType; 	// 0x85c
	static int32_t &Get_s_nColorIdx(){ return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->m_static_fields[0]->m_instance);};
};

// Alignment: 23
// Size: 0x7e20
class C_Inferno : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	ParticleIndex_t m_nfxFireDamageEffect; 	// 0x878
	// MNetworkEnable
	int32[64] m_fireXDelta; 	// 0x87c
	// MNetworkEnable
	int32[64] m_fireYDelta; 	// 0x97c
	// MNetworkEnable
	int32[64] m_fireZDelta; 	// 0xa7c
	// MNetworkEnable
	int32[64] m_fireParentXDelta; 	// 0xb7c
	// MNetworkEnable
	int32[64] m_fireParentYDelta; 	// 0xc7c
	// MNetworkEnable
	int32[64] m_fireParentZDelta; 	// 0xd7c
	// MNetworkEnable
	bool[64] m_bFireIsBurning; 	// 0xe7c
	// MNetworkEnable
	Vector[64] m_BurnNormal; 	// 0xebc
	// MNetworkEnable
	int32_t m_fireCount; 	// 0x11bc
	// MNetworkEnable
	int32_t m_nInfernoType; 	// 0x11c0
	// MNetworkEnable
	float m_nFireLifetime; 	// 0x11c4
	// MNetworkEnable
	bool m_bInPostEffectTime; 	// 0x11c8
	int32_t m_lastFireCount; 	// 0x11cc
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; 	// 0x11d0
	int32_t m_drawableCount; 	// 0x7de0
	bool m_blosCheck; 	// 0x7de4
	int32_t m_nlosperiod; 	// 0x7de8
	float m_maxFireHalfWidth; 	// 0x7dec
	float m_maxFireHeight; 	// 0x7df0
	Vector m_minBounds; 	// 0x7df4
	Vector m_maxBounds; 	// 0x7e00
	float m_flLastGrassBurnThink; 	// 0x7e0c
};

// Alignment: 0
// Size: 0x7e20
class C_FireCrackerBlast : public C_Inferno, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 49
// Size: 0xa70
class C_BarnLight : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; 	// 0x838
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; 	// 0x83c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; 	// 0x840
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; 	// 0x844
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; 	// 0x848
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; 	// 0x84c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; 	// 0x850
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; 	// 0x854
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; 	// 0x858
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; 	// 0x85c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; 	// 0x860
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; 	// 0x868
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; 	// 0x870
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; 	// 0x878
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; 	// 0x890
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; 	// 0x8a8
	CEntityIOOutput[4] m_StyleEvent; 	// 0x8c0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; 	// 0x960
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; 	// 0x968
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; 	// 0x96c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; 	// 0x970
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; 	// 0x974
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; 	// 0x978
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; 	// 0x97c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; 	// 0x988
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; 	// 0x98c
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; 	// 0x998
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; 	// 0x99c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; 	// 0x9a8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; 	// 0x9ac
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; 	// 0x9b0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; 	// 0x9b4
	// MNetworkEnable
	int32_t m_nBounceLight; 	// 0x9b8
	// MNetworkEnable
	float m_flBounceScale; 	// 0x9bc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; 	// 0x9c0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; 	// 0x9c4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; 	// 0x9c8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; 	// 0x9cc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; 	// 0x9d0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; 	// 0x9d4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; 	// 0x9d8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; 	// 0x9dc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; 	// 0x9e0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; 	// 0x9e4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; 	// 0x9e8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; 	// 0x9f4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; 	// 0xa00
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; 	// 0xa0c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; 	// 0xa18
};

// Alignment: 1
// Size: 0xa78
class C_RectLight : public C_BarnLight, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; 	// 0xa70
};

// Alignment: 3
// Size: 0xa80
class C_OmniLight : public C_BarnLight, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; 	// 0xa70
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; 	// 0xa74
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; 	// 0xa78
};

// Alignment: 12
// Size: 0x8a8
class C_CSTeam : public C_Team, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	char[512] m_szTeamMatchStat; 	// 0x5f0
	// MNetworkEnable
	int32_t m_numMapVictories; 	// 0x7f0
	// MNetworkEnable
	bool m_bSurrendered; 	// 0x7f4
	// MNetworkEnable
	int32_t m_scoreFirstHalf; 	// 0x7f8
	// MNetworkEnable
	int32_t m_scoreSecondHalf; 	// 0x7fc
	// MNetworkEnable
	int32_t m_scoreOvertime; 	// 0x800
	// MNetworkEnable
	char[129] m_szClanTeamname; 	// 0x804
	// MNetworkEnable
	uint32_t m_iClanID; 	// 0x888
	// MNetworkEnable
	CPlayerSlot m_nGGLeaderSlot_CT; 	// 0x88c
	// MNetworkEnable
	CPlayerSlot m_nGGLeaderSlot_T; 	// 0x890
	// MNetworkEnable
	char[8] m_szTeamFlagImage; 	// 0x894
	// MNetworkEnable
	char[8] m_szTeamLogoImage; 	// 0x89c
};

// Alignment: 0
// Size: 0xde8
class C_MapPreviewParticleSystem : public C_ParticleSystem, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0x550
class CInfoDynamicShadowHint : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bDisabled; 	// 0x538
	float m_flRange; 	// 0x53c
	int32_t m_nImportance; 	// 0x540
	int32_t m_nLightChoice; 	// 0x544
	CHandle< C_BaseEntity > m_hLight; 	// 0x548
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){ return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x568
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint, C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_vBoxMins; 	// 0x550
	Vector m_vBoxMaxs; 	// 0x55c
};

// Alignment: 10
// Size: 0x880
class C_EnvSky : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; 	// 0x838
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; 	// 0x840
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; 	// 0x841
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; 	// 0x848
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; 	// 0x84c
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; 	// 0x850
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; 	// 0x854
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; 	// 0x858
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; 	// 0x85c
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; 	// 0x860
};

// Alignment: 0
// Size: 0x560
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x840
class C_LightEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; 	// 0x838
};

// Alignment: 0
// Size: 0x840
class C_LightSpotEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x840
class C_LightOrthoEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x840
class C_LightDirectionalEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x840
class C_LightEnvironmentEntity : public C_LightDirectionalEntity, C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 16
// Size: 0x890
class C_PostProcessingVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; 	// 0x850
	// MNetworkEnable
	float m_flFadeDuration; 	// 0x858
	// MNetworkEnable
	float m_flMinLogExposure; 	// 0x85c
	// MNetworkEnable
	float m_flMaxLogExposure; 	// 0x860
	// MNetworkEnable
	float m_flMinExposure; 	// 0x864
	// MNetworkEnable
	float m_flMaxExposure; 	// 0x868
	// MNetworkEnable
	float m_flExposureCompensation; 	// 0x86c
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; 	// 0x870
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; 	// 0x874
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; 	// 0x878
	// MNetworkEnable
	bool m_bMaster; 	// 0x87c
	// MNetworkEnable
	bool m_bExposureControl; 	// 0x87d
	// MNetworkEnable
	float m_flRate; 	// 0x880
	// MNetworkEnable
	float m_flTonemapPercentTarget; 	// 0x884
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; 	// 0x888
	// MNetworkEnable
	float m_flTonemapMinAvgLum; 	// 0x88c
};

// Alignment: 5
// Size: 0xe00
class C_EnvParticleGlow : public C_ParticleSystem, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flAlphaScale; 	// 0xde8
	// MNetworkEnable
	float m_flRadiusScale; 	// 0xdec
	// MNetworkEnable
	float m_flSelfIllumScale; 	// 0xdf0
	// MNetworkEnable
	Color m_ColorTint; 	// 0xdf4
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; 	// 0xdf8
};

// Alignment: 8
// Size: 0x870
class C_TextureBasedAnimatable : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bLoop; 	// 0x838
	// MNetworkEnable
	float m_flFPS; 	// 0x83c
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; 	// 0x840
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; 	// 0x848
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; 	// 0x850
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; 	// 0x85c
	// MNetworkEnable
	float m_flStartTime; 	// 0x868
	// MNetworkEnable
	float m_flStartFrame; 	// 0x86c
};

// Alignment: 0
// Size: 0x838
class C_World : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 13
// Size: 0x998
class CBaseAnimGraph : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; 	// 0x848
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; 	// 0x850
	// MNetworkEnable
	Vector m_vecForce; 	// 0x854
	// MNetworkEnable
	int32_t m_nForceBone; 	// 0x860
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; 	// 0x864
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; 	// 0x865
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; 	// 0x866
	float m_flMaxSlopeDistance; 	// 0x868
	Vector m_vLastSlopeCheckPos; 	// 0x86c
	bool m_bHasAnimatedMaterialAttributes; 	// 0x878
	CBaseAnimGraph* m_pClientsideRagdoll; 	// 0x880
	bool m_builtRagdoll; 	// 0x888
	bool m_bSuppressAnimEventSounds; 	// 0x898
};

// Alignment: 4
// Size: 0x9d8
class CBaseProp : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bModelOverrodeBlockLOS; 	// 0x998
	int32_t m_iShapeType; 	// 0x99c
	bool m_bConformToCollisionBounds; 	// 0x9a0
	matrix3x4_t m_mPreferredCatchTransform; 	// 0x9a4
};

// Alignment: 30
// Size: 0xae8
class C_BreakableProp : public CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CEntityIOOutput m_OnBreak; 	// 0x9e0
	CEntityOutputTemplate< float32 > m_OnHealthChanged; 	// 0xa08
	CEntityIOOutput m_OnTakeDamage; 	// 0xa30
	float m_impactEnergyScale; 	// 0xa58
	int32_t m_iMinHealthDmg; 	// 0xa5c
	float m_flPressureDelay; 	// 0xa60
	CHandle< C_BaseEntity > m_hBreaker; 	// 0xa64
	PerformanceMode_t m_PerformanceMode; 	// 0xa68
	float m_flDmgModBullet; 	// 0xa6c
	float m_flDmgModClub; 	// 0xa70
	float m_flDmgModExplosive; 	// 0xa74
	float m_flDmgModFire; 	// 0xa78
	CUtlSymbolLarge m_iszPhysicsDamageTableName; 	// 0xa80
	CUtlSymbolLarge m_iszBasePropData; 	// 0xa88
	int32_t m_iInteractions; 	// 0xa90
	GameTime_t m_flPreventDamageBeforeTime; 	// 0xa94
	bool m_bHasBreakPiecesOrCommands; 	// 0xa98
	float m_explodeDamage; 	// 0xa9c
	float m_explodeRadius; 	// 0xaa0
	float m_explosionDelay; 	// 0xaa8
	CUtlSymbolLarge m_explosionBuildupSound; 	// 0xab0
	CUtlSymbolLarge m_explosionCustomEffect; 	// 0xab8
	CUtlSymbolLarge m_explosionCustomSound; 	// 0xac0
	CUtlSymbolLarge m_explosionModifier; 	// 0xac8
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; 	// 0xad0
	GameTime_t m_flLastPhysicsInfluenceTime; 	// 0xad4
	float m_flDefaultFadeScale; 	// 0xad8
	CHandle< C_BaseEntity > m_hLastAttacker; 	// 0xadc
	CHandle< C_BaseEntity > m_hFlareEnt; 	// 0xae0
	// MNetworkEnable
	bool m_noGhostCollision; 	// 0xae4
};

// Alignment: 25
// Size: 0xc00
class C_DynamicProp : public C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; 	// 0xae8
	// MNetworkEnable
	bool m_bUseAnimGraph; 	// 0xae9
	CEntityIOOutput m_pOutputAnimBegun; 	// 0xaf0
	CEntityIOOutput m_pOutputAnimOver; 	// 0xb18
	CEntityIOOutput m_pOutputAnimLoopCycleOver; 	// 0xb40
	CEntityIOOutput m_OnAnimReachedStart; 	// 0xb68
	CEntityIOOutput m_OnAnimReachedEnd; 	// 0xb90
	CUtlSymbolLarge m_iszDefaultAnim; 	// 0xbb8
	AnimLoopMode_t m_nDefaultAnimLoopMode; 	// 0xbc0
	bool m_bAnimateOnServer; 	// 0xbc4
	bool m_bRandomizeCycle; 	// 0xbc5
	bool m_bStartDisabled; 	// 0xbc6
	bool m_bScriptedMovement; 	// 0xbc7
	bool m_bFiredStartEndOutput; 	// 0xbc8
	bool m_bForceNpcExclude; 	// 0xbc9
	bool m_bCreateNonSolid; 	// 0xbca
	bool m_bIsOverrideProp; 	// 0xbcb
	int32_t m_iInitialGlowState; 	// 0xbcc
	int32_t m_nGlowRange; 	// 0xbd0
	int32_t m_nGlowRangeMin; 	// 0xbd4
	Color m_glowColor; 	// 0xbd8
	int32_t m_nGlowTeam; 	// 0xbdc
	int32_t m_iCachedFrameCount; 	// 0xbe0
	Vector m_vecCachedRenderMins; 	// 0xbe4
	Vector m_vecCachedRenderMaxs; 	// 0xbf0
};

// Alignment: 0
// Size: 0xc00
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xc00
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xc00
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 9
// Size: 0xa68
class C_ColorCorrectionVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_LastEnterWeight; 	// 0x840
	float m_LastEnterTime; 	// 0x844
	float m_LastExitWeight; 	// 0x848
	float m_LastExitTime; 	// 0x84c
	// MNetworkEnable
	bool m_bEnabled; 	// 0x850
	// MNetworkEnable
	float m_MaxWeight; 	// 0x854
	// MNetworkEnable
	float m_FadeDuration; 	// 0x858
	// MNetworkEnable
	float m_Weight; 	// 0x85c
	// MNetworkEnable
	char[512] m_lookupFilename; 	// 0x860
};

// Alignment: 8
// Size: 0xd00
class C_FuncMonitor : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CUtlString m_targetCamera; 	// 0x838
	// MNetworkEnable
	int32_t m_nResolutionEnum; 	// 0x840
	// MNetworkEnable
	bool m_bRenderShadows; 	// 0x844
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; 	// 0x845
	// MNetworkEnable
	CUtlString m_brushModelName; 	// 0x848
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; 	// 0x850
	// MNetworkEnable
	bool m_bEnabled; 	// 0x854
	// MNetworkEnable
	bool m_bDraw3DSkybox; 	// 0x855
};

// Alignment: 0
// Size: 0x838
class C_FuncMoveLinear : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0x9c8
class C_PhysMagnet : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; 	// 0x998
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; 	// 0x9b0
};

// Alignment: 13
// Size: 0x9e8
class C_PointCommentaryNode : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bActive; 	// 0x9a0
	bool m_bWasActive; 	// 0x9a1
	GameTime_t m_flEndTime; 	// 0x9a4
	// MNetworkEnable
	GameTime_t m_flStartTime; 	// 0x9a8
	// MNetworkEnable
	float m_flStartTimeInCommentary; 	// 0x9ac
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; 	// 0x9b0
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; 	// 0x9b8
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; 	// 0x9c0
	// MNetworkEnable
	int32_t m_iNodeNumber; 	// 0x9c8
	// MNetworkEnable
	int32_t m_iNodeNumberMax; 	// 0x9cc
	// MNetworkEnable
	bool m_bListenedTo; 	// 0x9d0
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; 	// 0x9e0
	bool m_bRestartAfterRestore; 	// 0x9e4
};

// Alignment: 0
// Size: 0x998
class C_WaterBullet : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x840
class C_BaseDoor : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bIsUsable; 	// 0x838
};

// Alignment: 19
// Size: 0xb28
class C_BaseFlex : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	C_NetworkUtlVectorBase< float32 > m_flexWeight; 	// 0x9a0
	// MNetworkEnable
	bool m_blinktoggle; 	// 0x9b8
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; 	// 0x9c0
	int32_t m_nLastFlexUpdateFrameCount; 	// 0xa30
	Vector m_CachedViewTarget; 	// 0xa34
	uint32_t m_nNextSceneEventId; 	// 0xa40
	int32_t m_iBlink; 	// 0xa44
	float m_blinktime; 	// 0xa48
	bool m_prevblinktoggle; 	// 0xa4c
	int32_t m_iJawOpen; 	// 0xa50
	float m_flJawOpenAmount; 	// 0xa54
	float m_flBlinkAmount; 	// 0xa58
	AttachmentHandle_t m_iMouthAttachment; 	// 0xa5c
	AttachmentHandle_t m_iEyeAttachment; 	// 0xa5d
	bool m_bResetFlexWeightsOnModelChange; 	// 0xa5e
	int32_t m_nEyeOcclusionRendererBone; 	// 0xa78
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; 	// 0xa7c
	Vector m_vEyeOcclusionRendererHalfExtent; 	// 0xaac
	C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; 	// 0xac8
};

// Alignment: 14
// Size: 0xa30
class C_ClientRagdoll : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bFadeOut; 	// 0x998
	bool m_bImportant; 	// 0x999
	GameTime_t m_flEffectTime; 	// 0x99c
	GameTime_t m_gibDespawnTime; 	// 0x9a0
	int32_t m_iCurrentFriction; 	// 0x9a4
	int32_t m_iMinFriction; 	// 0x9a8
	int32_t m_iMaxFriction; 	// 0x9ac
	int32_t m_iFrictionAnimState; 	// 0x9b0
	bool m_bReleaseRagdoll; 	// 0x9b4
	AttachmentHandle_t m_iEyeAttachment; 	// 0x9b5
	bool m_bFadingOut; 	// 0x9b6
	float32[10] m_flScaleEnd; 	// 0x9b8
	GameTime_t[10] m_flScaleTimeStart; 	// 0x9e0
	GameTime_t[10] m_flScaleTimeEnd; 	// 0xa08
};

// Alignment: 8
// Size: 0x890
class C_Precipitation : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flDensity; 	// 0x840
	float m_flParticleInnerDist; 	// 0x850
	char* m_pParticleDef; 	// 0x858
	TimedEvent[1] m_tParticlePrecipTraceTimer; 	// 0x880
	bool[1] m_bActiveParticlePrecipEmitter; 	// 0x888
	bool m_bParticlePrecipInitialized; 	// 0x889
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; 	// 0x88a
	int32_t m_nAvailableSheetSequencesMaxIndex; 	// 0x88c
};

// Alignment: 2
// Size: 0x978
class C_FireSprite : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_vecMoveDir; 	// 0x968
	bool m_bFadeFromAbove; 	// 0x974
};

// Alignment: 0
// Size: 0x968
class C_FireFromAboveSprite : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 23
// Size: 0xa88
class C_Fish : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_pos; 	// 0x998
	Vector m_vel; 	// 0x9a4
	QAngle m_angles; 	// 0x9b0
	int32_t m_localLifeState; 	// 0x9bc
	float m_deathDepth; 	// 0x9c0
	float m_deathAngle; 	// 0x9c4
	float m_buoyancy; 	// 0x9c8
	CountdownTimer m_wiggleTimer; 	// 0x9d0
	float m_wigglePhase; 	// 0x9e8
	float m_wiggleRate; 	// 0x9ec
	Vector m_actualPos; 	// 0x9f0
	QAngle m_actualAngles; 	// 0x9fc
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_poolOrigin; 	// 0xa08
	// MNetworkEnable
	float m_waterLevel; 	// 0xa14
	bool m_gotUpdate; 	// 0xa18
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; 	// 0xa1c
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; 	// 0xa20
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; 	// 0xa24
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; 	// 0xa28
	float32[20] m_errorHistory; 	// 0xa2c
	int32_t m_errorHistoryIndex; 	// 0xa7c
	int32_t m_errorHistoryCount; 	// 0xa80
	float m_averageError; 	// 0xa84
};

// Alignment: 1
// Size: 0xaf0
class C_PhysicsProp : public C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bAwake; 	// 0xae8
};

// Alignment: 7
// Size: 0xc40
class C_BasePropDoor : public C_DynamicProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; 	// 0xc10
	bool m_modelChanged; 	// 0xc14
	// MNetworkEnable
	bool m_bLocked; 	// 0xc15
	// MNetworkEnable
	Vector m_closedPosition; 	// 0xc18
	// MNetworkEnable
	QAngle m_closedAngles; 	// 0xc24
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; 	// 0xc30
	Vector m_vWhereToSetLightingOrigin; 	// 0xc34
};

// Alignment: 12
// Size: 0xb20
class C_PhysPropClientside : public C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	GameTime_t m_flTouchDelta; 	// 0xae8
	GameTime_t m_fDeathTime; 	// 0xaec
	float m_impactEnergyScale; 	// 0xaf0
	float m_inertiaScale; 	// 0xaf4
	float m_flDmgModBullet; 	// 0xaf8
	float m_flDmgModClub; 	// 0xafc
	float m_flDmgModExplosive; 	// 0xb00
	float m_flDmgModFire; 	// 0xb04
	CUtlSymbolLarge m_iszPhysicsDamageTableName; 	// 0xb08
	CUtlSymbolLarge m_iszBasePropData; 	// 0xb10
	int32_t m_iInteractions; 	// 0xb18
	bool m_bHasBreakPiecesOrCommands; 	// 0xb1c
};

// Alignment: 8
// Size: 0xa10
class C_RagdollProp : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; 	// 0x9a0
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; 	// 0x9b8
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	float m_flBlendWeight; 	// 0x9d0
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; 	// 0x9d4
	AttachmentHandle_t m_iEyeAttachment; 	// 0x9d8
	float m_flBlendWeightCurrent; 	// 0x9dc
	CUtlVector< int32 > m_parentPhysicsBoneIndices; 	// 0x9e0
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; 	// 0x9f8
};

// Alignment: 25
// Size: 0xa58
class C_LocalTempEntity : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	int32_t flags; 	// 0x9b0
	GameTime_t die; 	// 0x9b4
	float m_flFrameMax; 	// 0x9b8
	float x; 	// 0x9bc
	float y; 	// 0x9c0
	float fadeSpeed; 	// 0x9c4
	float bounceFactor; 	// 0x9c8
	int32_t hitSound; 	// 0x9cc
	int32_t priority; 	// 0x9d0
	Vector tentOffset; 	// 0x9d4
	QAngle m_vecTempEntAngVelocity; 	// 0x9e0
	int32_t tempent_renderamt; 	// 0x9ec
	Vector m_vecNormal; 	// 0x9f0
	float m_flSpriteScale; 	// 0x9fc
	int32_t m_nFlickerFrame; 	// 0xa00
	float m_flFrameRate; 	// 0xa04
	float m_flFrame; 	// 0xa08
	char* m_pszImpactEffect; 	// 0xa10
	char* m_pszParticleEffect; 	// 0xa18
	bool m_bParticleCollision; 	// 0xa20
	int32_t m_iLastCollisionFrame; 	// 0xa24
	Vector m_vLastCollisionOrigin; 	// 0xa28
	Vector m_vecTempEntVelocity; 	// 0xa34
	Vector m_vecPrevAbsOrigin; 	// 0xa40
	Vector m_vecTempEntAcceleration; 	// 0xa4c
};

// Alignment: 1
// Size: 0xb58
class C_ShatterGlassShardPhysics : public C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; 	// 0xaf8
};

// Alignment: 1
// Size: 0x9c8
class C_PointHintUIButtonHighlightModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	matrix3x4_t m_mComponentTransform; 	// 0x998
};

// Alignment: 1
// Size: 0x9c8
class C_PointHintUIArrowHighlightModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	matrix3x4_t m_mArrowLocalTransform; 	// 0x998
};

// Alignment: 4
// Size: 0xa30
class C_PointHintUIHighlightModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; 	// 0x9c8
	int32_t m_nTrackedDeviceIndex; 	// 0x9e0
	matrix3x4_t m_matLocalHighlight; 	// 0x9f8
	bool m_bVisible; 	// 0xa28
};

// Alignment: 20
// Size: 0x1070
class C_EconEntity : public C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flFlexDelayTime; 	// 0xb38
	float32* m_flFlexDelayedWeight; 	// 0xb40
	bool m_bAttributesInitialized; 	// 0xb48
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; 	// 0xb50
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; 	// 0xff8
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; 	// 0xffc
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; 	// 0x1000
	// MNetworkEnable
	int32_t m_nFallbackSeed; 	// 0x1004
	// MNetworkEnable
	float m_flFallbackWear; 	// 0x1008
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; 	// 0x100c
	bool m_bClientside; 	// 0x1010
	bool m_bParticleSystemsCreated; 	// 0x1011
	CUtlVector< int32 > m_vecAttachedParticles; 	// 0x1018
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; 	// 0x1030
	int32_t m_iOldTeam; 	// 0x1034
	bool m_bAttachmentDirty; 	// 0x1038
	int32_t m_nUnloadedModelIndex; 	// 0x103c
	int32_t m_iNumOwnerValidationRetries; 	// 0x1040
	CHandle< C_BaseEntity > m_hOldProvidee; 	// 0x1050
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; 	// 0x1058
};

// Alignment: 2
// Size: 0x1078
class C_EconWearable : public C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	int32_t m_nForceSkin; 	// 0x1070
	bool m_bAlwaysAllow; 	// 0x1074
};

// Alignment: 12
// Size: 0xb78
class C_BaseGrenade : public C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bHasWarnedAI; 	// 0xb28
	bool m_bIsSmokeGrenade; 	// 0xb29
	// MNetworkEnable
	bool m_bIsLive; 	// 0xb2a
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	float m_DmgRadius; 	// 0xb2c
	// MNetworkEnable
	GameTime_t m_flDetonateTime; 	// 0xb30
	float m_flWarnAITime; 	// 0xb34
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flDamage; 	// 0xb38
	CUtlSymbolLarge m_iszBounceSound; 	// 0xb40
	CUtlString m_ExplosionSound; 	// 0xb48
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; 	// 0xb54
	GameTime_t m_flNextAttack; 	// 0xb70
	CHandle< C_BaseEntity > m_hOriginalThrower; 	// 0xb74
};

// Alignment: 2
// Size: 0x9a8
class C_BRC4Target : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bBrokenOpen; 	// 0x9a0
	// MNetworkEnable
	float m_flRadius; 	// 0x9a4
};

// Alignment: 6
// Size: 0x9c0
class C_ParadropChopper : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_vecLastRopeTargetPos; 	// 0x9a0
	GameTime_t m_flLastRopeTime; 	// 0x9ac
	int32_t m_nRappelABone; 	// 0x9b0
	int32_t m_nRappelBBone; 	// 0x9b4
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCallingPlayer; 	// 0x9b8
	bool m_bCalledByPlayer; 	// 0x9bc
};

// Alignment: 0
// Size: 0x998
class C_SurvivalSpawnChopper : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 12
// Size: 0x9f0
class C_Dronegun : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	Vector m_vecAttentionTarget; 	// 0x9a0
	// MNetworkEnable
	Vector m_vecTargetOffset; 	// 0x9ac
	// MNetworkEnable
	bool m_bHasTarget; 	// 0x9b8
	Vector m_vecAttentionCurrent; 	// 0x9bc
	int32_t m_nPoseParamPitch; 	// 0x9c8
	int32_t m_nPoseParamYaw; 	// 0x9cc
	bool m_bVarInit; 	// 0x9d0
	AttachmentHandle_t m_nAttachMuzzle; 	// 0x9d1
	GameTime_t m_flLastClientThinkTime; 	// 0x9d4
	GameTime_t m_flNextSpark; 	// 0x9d8
	int32_t m_nBoneOverrideIndex; 	// 0x9dc
	Vector m_vecLaserTracePos; 	// 0x9e0
};

// Alignment: 15
// Size: 0xd50
class C_Drone : public C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlVector< Vector > m_vecClientSideTrailPositions; 	// 0xb00
	// MNetworkEnable
	CEntityHandle m_hMoveToThisEntity; 	// 0xb18
	// MNetworkEnable
	CEntityHandle m_hDeliveryCargo; 	// 0xb1c
	// MNetworkEnable
	CEntityHandle m_hRecentCargo; 	// 0xb20
	// MNetworkEnable
	bool m_bPilotTakeoverAllowed; 	// 0xb24
	// MNetworkEnable
	CEntityHandle m_hPotentialCargo; 	// 0xb28
	// MNetworkEnable
	CEntityHandle m_hCurrentPilot; 	// 0xb2c
	// MNetworkEnable
	Vector[24] m_vecTagPositions; 	// 0xb30
	// MNetworkEnable
	int32[24] m_vecTagIncrements; 	// 0xc50
	GameTime_t m_flLastTimeCargoWasAttached; 	// 0xcb0
	Vector[4] m_vecLastKnownCargoAttachPositions; 	// 0xcb4
	Vector m_vecThrusterLastPos; 	// 0xce4
	Vector m_vecThrusterSmoothVel; 	// 0xcf0
	Vector m_vecThrusterSmoothAccel; 	// 0xcfc
	float m_flJammedEffectAmount; 	// 0xd08
};

// Alignment: 0
// Size: 0xaf0
class C_CSPropExplodingBarrel : public C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0xaf8
class C_CSPropExplodingBarrelTop : public C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flOverrideAlpha; 	// 0xaf0
};

// Alignment: 24
// Size: 0xaa8
class C_EnvGasCanister : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bLanded; 	// 0x998
	bool m_bSpawnedSkyboxParticles; 	// 0xa00
	GameTime_t m_flKillImpactParticlesTime; 	// 0xa04
	// MNetworkEnable
	Vector m_vecImpactPosition; 	// 0xa08
	// MNetworkEnable
	Vector m_vecStartPosition; 	// 0xa14
	// MNetworkEnable
	Vector m_vecEnterWorldPosition; 	// 0xa20
	// MNetworkEnable
	Vector m_vecDirection; 	// 0xa2c
	// MNetworkEnable
	QAngle m_vecStartAngles; 	// 0xa38
	// MNetworkEnable
	float m_flFlightTime; 	// 0xa44
	// MNetworkEnable
	float m_flFlightSpeed; 	// 0xa48
	// MNetworkEnable
	GameTime_t m_flLaunchTime; 	// 0xa4c
	// MNetworkEnable
	float m_flInitialZSpeed; 	// 0xa50
	// MNetworkEnable
	float m_flZAcceleration; 	// 0xa54
	// MNetworkEnable
	float m_flHorizSpeed; 	// 0xa58
	// MNetworkEnable
	bool m_bLaunchedFromWithinWorld; 	// 0xa5c
	// MNetworkEnable
	Vector m_vecParabolaDirection; 	// 0xa60
	// MNetworkEnable
	float m_flWorldEnterTime; 	// 0xa6c
	// MNetworkEnable
	Vector m_vecSkyboxOrigin; 	// 0xa70
	// MNetworkEnable
	float m_flSkyboxScale; 	// 0xa7c
	// MNetworkEnable
	bool m_bInSkybox; 	// 0xa80
	// MNetworkEnable
	bool m_bDoImpactEffects; 	// 0xa81
	// MNetworkEnable
	int32_t m_nMyZoneIndex; 	// 0xa84
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hSkyboxCopy; 	// 0xa88
	float m_flLaunchHeight; 	// 0xa8c
};

// Alignment: 4
// Size: 0x9c0
class C_PropCounter : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flDisplayValue; 	// 0x998
	float m_flDisplayValueLocal; 	// 0x99c
	float m_flTimeOfLastValueChange; 	// 0x9a0
	float m_flPreviousValue; 	// 0x9a4
};

// Alignment: 1
// Size: 0x9a0
class C_ViewmodelWeapon : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	char* m_worldModel; 	// 0x998
};

// Alignment: 17
// Size: 0xa00
class C_BaseViewModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	Vector m_vecLastFacing; 	// 0x9a0
	// MNetworkEnable
	uint32_t m_nViewModelIndex; 	// 0x9ac
	// MNetworkEnable
	uint32_t m_nAnimationParity; 	// 0x9b0
	// MNetworkEnable
	float m_flAnimationStartTime; 	// 0x9b4
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hWeapon; 	// 0x9b8
	CUtlSymbolLarge m_sVMName; 	// 0x9c0
	CUtlSymbolLarge m_sAnimationPrefix; 	// 0x9c8
	CHandle< C_ViewmodelWeapon > m_hWeaponModel; 	// 0x9d0
	AttachmentHandle_t m_iCameraAttachment; 	// 0x9d4
	QAngle m_vecLastCameraAngles; 	// 0x9d8
	float m_previousElapsedDuration; 	// 0x9e4
	float m_previousCycle; 	// 0x9e8
	int32_t m_nOldAnimationParity; 	// 0x9ec
	HSequence m_hOldLayerSequence; 	// 0x9f0
	int32_t m_oldLayer; 	// 0x9f4
	float m_oldLayerStartTime; 	// 0x9f8
	// MNetworkEnable
	CEntityHandle m_hControlPanel; 	// 0x9fc
};

// Alignment: 0
// Size: 0x998
class C_ViewmodelAttachmentModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0xa28
class C_PredictedViewModel : public C_BaseViewModel, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	QAngle m_LagAnglesHistory; 	// 0xa00
	Vector m_vPredictedOffset; 	// 0xa18
};

// Alignment: 0
// Size: 0x998
class C_WorldModelStattrak : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x998
class C_WorldModelNametag : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 15
// Size: 0xc00
class C_BaseCSGrenadeProjectile : public C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; 	// 0xb78
	// MNetworkEnable
	int32_t m_nBounces; 	// 0xb84
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; 	// 0xb88
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; 	// 0xb90
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; 	// 0xb94
	GameTime_t m_flSpawnTime; 	// 0xba0
	Vector vecLastTrailLinePos; 	// 0xba4
	GameTime_t flNextTrailLineTime; 	// 0xbb0
	bool m_bExplodeEffectBegan; 	// 0xbb4
	bool m_bCanCreateGrenadeTrail; 	// 0xbb5
	ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; 	// 0xbb8
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; 	// 0xbc0
	CUtlVector< Vector > m_arrTrajectoryTrailPoints; 	// 0xbc8
	CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; 	// 0xbe0
	float m_flTrajectoryTrailEffectCreationTime; 	// 0xbf8
	static float &Get_s_flThinkInterval(){ return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};

// Alignment: 4
// Size: 0xb90
class C_BreachChargeProjectile : public C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bShouldExplode; 	// 0xb78
	// MNetworkEnable
	CHandle< C_BaseEntity > m_weaponThatThrewMe; 	// 0xb7c
	// MNetworkEnable
	int32_t m_nParentBoneIndex; 	// 0xb80
	// MNetworkEnable
	Vector m_vecParentBonePos; 	// 0xb84
};

// Alignment: 4
// Size: 0xbb0
class C_BumpMineProjectile : public C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	bool m_bShouldExplode; 	// 0xb78
	// MNetworkEnable
	int32_t m_nParentBoneIndex; 	// 0xb7c
	// MNetworkEnable
	Vector m_vecParentBonePos; 	// 0xb80
	// MNetworkEnable
	bool m_bArmed; 	// 0xb8c
};

// Alignment: 6
// Size: 0xc10
class C_TripWireFireProjectile : public C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	GameTime_t m_flAttachTime; 	// 0xb78
	// MNetworkEnable
	Vector[10] m_vecTripWireEndPositions; 	// 0xb7c
	// MNetworkEnable
	bool[10] m_bTripWireEndPositionsUsed; 	// 0xbf4
	int32_t m_nTripWireStartIndex0; 	// 0xc00
	int32_t m_nTripWireEndIndex0; 	// 0xc04
	int32_t m_nTripWireCenterIndex0; 	// 0xc08
};

// Alignment: 0
// Size: 0xaf0
class C_PhysicsPropMultiplayer : public C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 4
// Size: 0xb08
class C_PhysPropLootCrate : public C_PhysicsPropMultiplayer, C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bRenderInPSPM; 	// 0xaf8
	// MNetworkEnable
	bool m_bRenderInTablet; 	// 0xaf9
	// MNetworkEnable
	int32_t m_iMaxHealth; 	// 0xafc
	// MNetworkEnable
	int32_t m_iHealth; 	// 0xb00
};

// Alignment: 0
// Size: 0xaf0
class C_PhysPropAmmoBox : public C_PhysicsPropMultiplayer, C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xaf0
class C_PhysPropWeaponUpgrade : public C_PhysicsPropMultiplayer, C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xaf8
class C_PhysPropRadarJammer : public C_PhysicsPropMultiplayer, C_PhysicsProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xc20
class C_SensorGrenadeProjectile : public C_BaseCSGrenadeProjectile, C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 5
// Size: 0xbf0
class C_CSGO_PreviewModel : public C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlString m_animgraph; 	// 0xb28
	CUtlString m_animgraphCharacterModeString; 	// 0xb30
	CUtlString m_defaultAnim; 	// 0xb38
	AnimLoopMode_t m_nDefaultAnimLoopMode; 	// 0xb40
	float m_flInitialModelScale; 	// 0xb44
};

// Alignment: 0
// Size: 0xbf0
class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 6
// Size: 0x9e8
class C_BulletHitModel : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	matrix3x4_t m_matLocal; 	// 0x998
	int32_t m_iBoneIndex; 	// 0x9c8
	CHandle< C_BaseEntity > m_hPlayerParent; 	// 0x9cc
	bool m_bIsHit; 	// 0x9d0
	float m_flTimeCreated; 	// 0x9d4
	Vector m_vecStartPos; 	// 0x9d8
};

// Alignment: 6
// Size: 0x9d0
class C_PickUpModelSlerper : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CHandle< C_BaseEntity > m_hPlayerParent; 	// 0x998
	CHandle< C_BaseEntity > m_hItem; 	// 0x99c
	float m_flTimePickedUp; 	// 0x9a0
	QAngle m_angOriginal; 	// 0x9a4
	Vector m_vecPosOriginal; 	// 0x9b0
	QAngle m_angRandom; 	// 0x9c0
};

// Alignment: 0
// Size: 0x998
class C_WorldModelGloves : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x9a0
class C_HostageCarriableProp : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x9a8
class C_Multimeter : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CHandle< C_PlantedC4 > m_hTargetC4; 	// 0x9a0
};

// Alignment: 21
// Size: 0xa08
class C_PlantedC4 : public CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bBombTicking; 	// 0x998
	// MNetworkEnable
	int32_t m_nBombSite; 	// 0x99c
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; 	// 0x9a0
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; 	// 0x9a8
	GameTime_t m_flNextGlow; 	// 0x9c0
	GameTime_t m_flNextBeep; 	// 0x9c4
	// MNetworkEnable
	GameTime_t m_flC4Blow; 	// 0x9c8
	// MNetworkEnable
	float m_flTimerLength; 	// 0x9cc
	float m_bTenSecWarning; 	// 0x9d0
	float m_bTriggerWarning; 	// 0x9d4
	float m_bExplodeWarning; 	// 0x9d8
	bool m_bLocalBRMusicPlayed; 	// 0x9dc
	// MNetworkEnable
	float m_flDefuseLength; 	// 0x9e0
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; 	// 0x9e4
	// MNetworkEnable
	bool m_bBombDefused; 	// 0x9e8
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_hBombDefuser; 	// 0x9ec
	// MNetworkEnable
	CEntityHandle m_hControlPanel; 	// 0x9f0
	CHandle< C_Multimeter > m_hDefuserMultimeter; 	// 0x9f4
	GameTime_t m_flNextRadarFlashTime; 	// 0x9f8
	bool m_bRadarFlash; 	// 0x9fc
	CHandle< C_CSPlayerPawnBase > m_hLocalDefusingPlayerHandle; 	// 0xa00
};

// Alignment: 2
// Size: 0x1178
class C_Item : public C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bShouldGlow; 	// 0x1070
	char[256] m_pReticleHintTextName; 	// 0x1071
};

// Alignment: 7
// Size: 0x10d0
class C_Chicken : public C_DynamicProp, C_BreakableProp, CBaseProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CHandle< CBaseAnimGraph > m_hHolidayHatAddon; 	// 0xc08
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; 	// 0xc0c
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_leader; 	// 0xc10
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; 	// 0xc18
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; 	// 0x10c0
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; 	// 0x10c4
	bool m_bAttributesInitialized; 	// 0x10c8
};

// Alignment: 10
// Size: 0x10a0
class C_BasePlayerWeapon : public C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateChanged"
	WeaponState_t m_iState; 	// 0x1070
	WeaponState_t m_iOldState; 	// 0x1074
	bool m_bRemoveable; 	// 0x1078
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; 	// 0x107c
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; 	// 0x1080
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; 	// 0x1084
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; 	// 0x1088
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; 	// 0x108c
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; 	// 0x1090
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32[2] m_pReserveAmmo; 	// 0x1094
};

// Alignment: 7
// Size: 0xa48
class C_RagdollPropAttached : public C_RagdollProp, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; 	// 0xa10
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; 	// 0xa14
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointBoneSpace; 	// 0xa18
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointRagdollSpace; 	// 0xa24
	Vector m_vecOffset; 	// 0xa30
	float m_parentTime; 	// 0xa3c
	bool m_bHasParent; 	// 0xa40
};

// Alignment: 8
// Size: 0xbb8
class C_BaseCombatCharacter : public C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; 	// 0xb28
	int32_t m_bloodColor; 	// 0xb40
	AttachmentHandle_t m_leftFootAttachment; 	// 0xb44
	AttachmentHandle_t m_rightFootAttachment; 	// 0xb45
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; 	// 0xb48
	float m_flWaterWorldZ; 	// 0xb4c
	float m_flWaterNextTraceTime; 	// 0xb50
	// MNetworkEnable
	float m_flFieldOfView; 	// 0xb54
};

// Alignment: 23
// Size: 0xce8
class C_BasePlayerPawn : public C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; 	// 0xbb8
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; 	// 0xbc0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; 	// 0xbc8
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; 	// 0xbd0
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; 	// 0xbd8
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; 	// 0xbe0
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; 	// 0xbe8
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; 	// 0xbf0
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; 	// 0xbf8
	QAngle v_angle; 	// 0xc08
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; 	// 0xc14
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	sky3dparams_t m_skybox3d; 	// 0xc18
	// MNetworkEnable
	GameTime_t m_flDeathTime; 	// 0xca8
	Vector m_vecPredictionError; 	// 0xcac
	GameTime_t m_flPredictionErrorTime; 	// 0xcb8
	float m_flFOVSensitivityAdjust; 	// 0xcbc
	float m_flMouseSensitivity; 	// 0xcc0
	Vector m_vOldOrigin; 	// 0xcc4
	float m_flOldSimulationTime; 	// 0xcd0
	int32_t m_nLastExecutedCommandNumber; 	// 0xcd4
	int32_t m_nLastExecutedCommandTick; 	// 0xcd8
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; 	// 0xcdc
	bool m_bIsSwappingToPredictableController; 	// 0xce0
};

// Alignment: 0
// Size: 0x1178
class C_ItemCash : public C_Item, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 10
// Size: 0xaa8
class C_CSGOViewModel : public C_PredictedViewModel, C_BaseViewModel, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; 	// 0xa28
	Vector m_vecCamDriverLastPos; 	// 0xa2c
	QAngle m_angCamDriverLastAng; 	// 0xa38
	float m_flCamDriverAppliedTime; 	// 0xa44
	float m_flCamDriverWeight; 	// 0xa48
	// MNetworkEnable
	uint32_t m_nWeaponParity; 	// 0xa4c
	uint32_t m_nOldWeaponParity; 	// 0xa50
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; 	// 0xa54
	bool m_bNeedToQueueHighResComposite; 	// 0xa58
	QAngle m_vLoweredWeaponOffset; 	// 0xa9c
};

// Alignment: 58
// Size: 0x13d0
class C_WeaponCSBase : public C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; 	// 0x10d8
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; 	// 0x10dc
	int32_t m_nFireSequenceStartTimeAck; 	// 0x10e0
	// MNetworkEnable
	bool m_bPlayerFireEventIsPrimary; 	// 0x10e4
	HSequence m_seqIdle; 	// 0x10e8
	HSequence m_seqFirePrimary; 	// 0x10ec
	HSequence m_seqFireSecondary; 	// 0x10f0
	float m_flCrosshairDistance; 	// 0x1108
	int32_t m_iAmmoLastCheck; 	// 0x110c
	int32_t m_iAlpha; 	// 0x1110
	int32_t m_iScopeTextureID; 	// 0x1114
	int32_t m_iCrosshairTextureID; 	// 0x1118
	float m_flGunAccuracyPosition; 	// 0x111c
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; 	// 0x1120
	bool m_bReloadsWithClips; 	// 0x1124
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; 	// 0x1128
	bool m_bFireOnEmpty; 	// 0x112c
	CEntityIOOutput m_OnPlayerPickup; 	// 0x1130
	// MNetworkEnable
	CSWeaponMode m_weaponMode; 	// 0x1158
	float m_flTurningInaccuracyDelta; 	// 0x115c
	Vector m_vecTurningInaccuracyEyeDirLast; 	// 0x1160
	float m_flTurningInaccuracy; 	// 0x116c
	// MNetworkEnable
	float m_fAccuracyPenalty; 	// 0x1170
	GameTime_t m_flLastAccuracyUpdateTime; 	// 0x1174
	float m_fAccuracySmoothedForZoom; 	// 0x1178
	GameTime_t m_fScopeZoomEndTime; 	// 0x117c
	// MNetworkEnable
	int32_t m_iRecoilIndex; 	// 0x1180
	// MNetworkEnable
	float m_flRecoilIndex; 	// 0x1184
	// MNetworkEnable
	bool m_bBurstMode; 	// 0x1188
	// MNetworkEnable
	GameTime_t m_flPostponeFireReadyTime; 	// 0x118c
	// MNetworkEnable
	bool m_bInReload; 	// 0x1190
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; 	// 0x1191
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; 	// 0x1194
	// MNetworkEnable
	bool m_bIsHauledBack; 	// 0x1198
	// MNetworkEnable
	bool m_bSilencerOn; 	// 0x1199
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; 	// 0x119c
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; 	// 0x11a0
	float m_flNextAttackRenderTimeOffset; 	// 0x11a4
	bool m_bVisualsDataSet; 	// 0x1230
	bool m_bOldFirstPersonSpectatedState; 	// 0x1231
	CHandle< C_BaseEntity > m_hOurPing; 	// 0x1234
	CEntityIndex m_nOurPingIndex; 	// 0x1238
	Vector m_vecOurPingPos; 	// 0x123c
	bool m_bGlowForPing; 	// 0x1248
	bool m_bUIWeapon; 	// 0x1249
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_hPrevOwner; 	// 0x1258
	bool m_donated; 	// 0x127c
	// MNetworkEnable
	GameTime_t m_fLastShotTime; 	// 0x1280
	bool m_bWasOwnedByCT; 	// 0x1284
	bool m_bWasOwnedByTerrorist; 	// 0x1285
	float m_gunHeat; 	// 0x1288
	uint32_t m_smokeAttachments; 	// 0x128c
	GameTime_t m_lastSmokeTime; 	// 0x1290
	float m_flLastClientFireBulletTime; 	// 0x1294
	C_IronSightController m_IronSightController; 	// 0x12f0
	// MNetworkEnable
	int32_t m_iIronSightMode; 	// 0x13a0
	GameTime_t m_flLastLOSTraceFailureTime; 	// 0x13b0
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; 	// 0x13b4
};

// Alignment: 6
// Size: 0x13f0
class C_WeaponCSBaseGun : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_zoomLevel; 	// 0x13d0
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; 	// 0x13d4
	int32_t m_iSilencerBodygroup; 	// 0x13d8
	int32_t m_silencedModelIndex; 	// 0x13e8
	bool m_inPrecache; 	// 0x13ec
	// MNetworkEnable
	bool m_bNeedsBoltAction; 	// 0x13ed
};

// Alignment: 12
// Size: 0x1430
class C_C4 : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	char[32] m_szScreenText; 	// 0x13d0
	ParticleIndex_t m_bombdroppedlightParticleIndex; 	// 0x13f0
	// MNetworkEnable
	bool m_bStartedArming; 	// 0x13f4
	// MNetworkEnable
	GameTime_t m_fArmedTime; 	// 0x13f8
	// MNetworkEnable
	bool m_bBombPlacedAnimation; 	// 0x13fc
	// MNetworkEnable
	bool m_bShowC4LED; 	// 0x13fd
	// MNetworkEnable
	bool m_bIsPlantingViaUse; 	// 0x13fe
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; 	// 0x1400
	int32_t m_nSpotRules; 	// 0x1418
	bool[7] m_bPlayedArmingBeeps; 	// 0x141c
	bool m_bBombPlanted; 	// 0x1423
	bool m_bDroppedFromDeath; 	// 0x1424
};

// Alignment: 0
// Size: 0x13f0
class C_DEagle : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponElite : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13d0
class C_WeaponNOVA : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13d0
class C_WeaponSawedoff : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x1400
class C_WeaponTaser : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; 	// 0x13f0
};

// Alignment: 0
// Size: 0x13d0
class C_WeaponXM1014 : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13d0
class C_Knife : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13d0
class C_KnifeGG : public C_Knife, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 1
// Size: 0x13e0
class C_Melee : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	GameTime_t m_flThrowAt; 	// 0x13d0
};

// Alignment: 2
// Size: 0x1400
class C_WeaponZoneRepulsor : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	float m_flPitchLocal; 	// 0x13f0
	GameTime_t m_flLastTimeNotIdle; 	// 0x13f4
};

// Alignment: 1
// Size: 0x1400
class C_WeaponShield : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	float m_flDisplayHealth; 	// 0x13f0
};

// Alignment: 1
// Size: 0xc28
class C_MolotovProjectile : public C_BaseCSGrenadeProjectile, C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; 	// 0xc00
};

// Alignment: 1
// Size: 0xc28
class C_DecoyProjectile : public C_BaseCSGrenadeProjectile, C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	GameTime_t m_flTimeParticleEffectSpawn; 	// 0xc20
};

// Alignment: 8
// Size: 0xd90
class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile, C_BaseGrenade, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; 	// 0xc08
	// MNetworkEnable
	bool m_bDidSmokeEffect; 	// 0xc0c
	// MNetworkEnable
	int32_t m_nRandomSeed; 	// 0xc10
	// MNetworkEnable
	Vector m_vSmokeColor; 	// 0xc14
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; 	// 0xc20
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	CUtlVector< uint8 > m_VoxelFrameData; 	// 0xc30
	bool m_bSmokeVolumeDataReceived; 	// 0xc48
	bool m_bSmokeEffectSpawned; 	// 0xc49
};

// Alignment: 8
// Size: 0x1410
class C_BaseCSGrenade : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bRedraw; 	// 0x13f0
	// MNetworkEnable
	bool m_bIsHeldByPlayer; 	// 0x13f1
	// MNetworkEnable
	bool m_bPinPulled; 	// 0x13f2
	// MNetworkEnable
	EGrenadeThrowState m_eThrowStatus; 	// 0x13f4
	// MNetworkEnable
	GameTime_t m_fThrowTime; 	// 0x13f8
	// MNetworkEnable
	float m_flThrowStrength; 	// 0x13fc
	// MNetworkEnable
	float m_flThrowStrengthApproach; 	// 0x1400
	// MNetworkEnable
	GameTime_t m_fDropTime; 	// 0x1404
};

// Alignment: 2
// Size: 0x13f0
class C_WeaponBaseItem : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; 	// 0x13d0
	// MNetworkEnable
	bool m_bRedraw; 	// 0x13e8
};

// Alignment: 2
// Size: 0x1180
class C_ItemDogtags : public C_Item, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_OwningPlayer; 	// 0x1178
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_KillingPlayer; 	// 0x117c
};

// Alignment: 0
// Size: 0x13f0
class C_Item_Healthshot : public C_WeaponBaseItem, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 2
// Size: 0x13e0
class C_Fists : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; 	// 0x13d0
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; 	// 0x13d4
};

// Alignment: 27
// Size: 0x1b30
class C_Tablet : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	GameTime_t[4] m_flUpgradeExpirationTime; 	// 0x13d8
	// MNetworkEnable
	int32[42] m_vecLocalHexFlags; 	// 0x13e8
	// MNetworkEnable
	int32_t m_nContractKillGridIndex; 	// 0x1490
	// MNetworkEnable
	int32_t m_nContractKillGridHighResIndex; 	// 0x1494
	// MNetworkEnable
	bool m_bTabletReceptionIsBlocked; 	// 0x1498
	// MNetworkEnable
	float m_flScanProgress; 	// 0x149c
	// MNetworkEnable
	GameTime_t m_flBootTime; 	// 0x14a0
	// MNetworkEnable
	GameTime_t m_flShowMapTime; 	// 0x14a4
	// MNetworkEnable
	Vector m_vecNearestMetalCratePos; 	// 0x14a8
	// MNetworkEnable
	tablet_skin_state_t m_skinState; 	// 0x14b4
	// MNetworkEnable
	int32[8] m_vecNotificationIds; 	// 0x14b8
	// MNetworkEnable
	GameTime_t[8] m_vecNotificationTimestamps; 	// 0x14d8
	// MNetworkEnable
	int32_t m_nLastPurchaseIndex; 	// 0x14f8
	// MNetworkEnable
	Vector[24] m_vecPlayerPositionHistory; 	// 0x14fc
	int32[42] m_vecLocalHexFlagsClientCopy; 	// 0x161c
	GameTime_t[6][42] m_vecLastHexPlayerOccupancyChange; 	// 0x16c4
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_radarMaterial; 	// 0x1ae8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_buildingMaterial; 	// 0x1af0
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hZoneOverlayMaterial; 	// 0x1af8
	float m_flNoiseFadeAlpha; 	// 0x1b00
	Color m_WorkingColor; 	// 0x1b04
	Vector m_vecLastCameraPos; 	// 0x1b08
	QAngle m_angLastCameraAng; 	// 0x1b14
	int32_t m_nDrawElementCount; 	// 0x1b20
	float m_flPrevScanProgress; 	// 0x1b24
	int32_t m_nRenderTargetRes; 	// 0x1b28
	float m_flLastClosePoseParamVal; 	// 0x1b2c
};

// Alignment: 0
// Size: 0x13e0
class C_BreachCharge : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13d0
class C_BumpMine : public C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_TripWireFire : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0xa08
class C_PlantedC4Survival : public C_PlantedC4, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_SensorGrenade : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 187
// Size: 0x12a0
class C_CSPlayerPawnBase : public C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; 	// 0xd00
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; 	// 0xd08
	// MNetworkEnable
	CCSPlayer_ViewModelServices* m_pViewModelServices; 	// 0xd10
	float32[4] m_fRenderingClipPlane; 	// 0xd18
	int32_t m_nLastClipPlaneSetupFrame; 	// 0xd28
	Vector m_vecLastClipCameraPos; 	// 0xd2c
	Vector m_vecLastClipCameraForward; 	// 0xd38
	bool m_bClipHitStaticWorld; 	// 0xd44
	bool m_bCachedPlaneIsValid; 	// 0xd45
	C_WeaponCSBase* m_pClippingWeapon; 	// 0xd48
	CSPlayerState m_previousPlayerState; 	// 0xd50
	float m_flLastCollisionCeiling; 	// 0xd54
	float m_flLastCollisionCeilingChangeTime; 	// 0xd58
	bool m_bInLanding; 	// 0xdb8
	float m_flLandingTime; 	// 0xdbc
	GameTime_t m_grenadeParameterStashTime; 	// 0xdc0
	bool m_bGrenadeParametersStashed; 	// 0xdc4
	QAngle m_angStashedShootAngles; 	// 0xdc8
	Vector m_vecStashedGrenadeThrowPosition; 	// 0xdd4
	Vector m_vecStashedVelocity; 	// 0xde0
	QAngle[2] m_angShootAngleHistory; 	// 0xdec
	Vector[2] m_vecThrowPositionHistory; 	// 0xe04
	Vector[2] m_vecVelocityHistory; 	// 0xe1c
	// MNetworkEnable
	// MNetworkBitCount "32"
	// MNetworkEncoder
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; 	// 0xe38
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; 	// 0xe50
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; 	// 0xe60
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; 	// 0xe70
	bool m_bClientTransparentImmunityAlphaEffectEnabled; 	// 0xe88
	bool m_bClientDeferDrawToImmunityAlphaPass; 	// 0xe89
	// MNetworkEnable
	bool m_bIsScoped; 	// 0xe8a
	// MNetworkEnable
	bool m_bIsWalking; 	// 0xe8b
	// MNetworkEnable
	bool m_bResumeZoom; 	// 0xe8c
	// MNetworkEnable
	CSPlayerState m_iPlayerState; 	// 0xe90
	// MNetworkEnable
	bool m_bIsDefusing; 	// 0xe94
	// MNetworkEnable
	bool m_bIsGrabbingHostage; 	// 0xe95
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; 	// 0xe98
	// MNetworkEnable
	bool m_bIsRescuing; 	// 0xe9c
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; 	// 0xea0
	GameTime_t m_fImmuneToGunGameDamageTimeLast; 	// 0xea4
	// MNetworkEnable
	bool m_bGunGameImmunity; 	// 0xea8
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; 	// 0xea9
	// MNetworkEnable
	bool m_bMadeFinalGunGameProgressiveKill; 	// 0xeaa
	// MNetworkEnable
	int32_t m_iGunGameProgressiveWeaponIndex; 	// 0xeac
	// MNetworkEnable
	int32_t m_iNumGunGameTRKillPoints; 	// 0xeb0
	// MNetworkEnable
	int32_t m_iNumGunGameKillsWithCurrentWeapon; 	// 0xeb4
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; 	// 0xeb8
	// MNetworkEnable
	float m_fMolotovUseTime; 	// 0xebc
	// MNetworkEnable
	float m_fMolotovDamageTime; 	// 0xec0
	// MNetworkEnable
	bool m_bInBombZone; 	// 0xec4
	// MNetworkEnable
	int32_t m_nWhichBombZone; 	// 0xec8
	// MNetworkEnable
	bool m_bInBuyZone; 	// 0xecc
	// MNetworkEnable
	bool m_bInNoDefuseArea; 	// 0xecd
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; 	// 0xed0
	// MNetworkEnable
	bool m_bWaitForNoAttack; 	// 0xed4
	// MNetworkEnable
	bool m_bIsRespawningForDMBonus; 	// 0xed5
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; 	// 0xed8
	// MNetworkEnable
	GameTime_t m_flDetectedByEnemySensorTime; 	// 0xedc
	float m_flNextGuardianTooFarWarning; 	// 0xee0
	bool m_bSuppressGuardianTooFarWarningAudio; 	// 0xee4
	// MNetworkEnable
	bool m_bKilledByTaser; 	// 0xee5
	// MNetworkEnable
	int32_t m_iMoveState; 	// 0xee8
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; 	// 0xeec
	// MNetworkEnable
	bool m_isCurrentGunGameLeader; 	// 0xeed
	// MNetworkEnable
	bool m_isCurrentGunGameTeamLeader; 	// 0xeee
	// MNetworkEnable
	float m_flLowerBodyYawTarget; 	// 0xef0
	// MNetworkEnable
	bool m_bStrafing; 	// 0xef4
	// MNetworkEnable
	char[18] m_szLastPlaceName; 	// 0xef5
	// MNetworkEnable
	float m_flLastExoJumpTime; 	// 0xf08
	GameTime_t m_flLastSpawnTimeIndex; 	// 0xf18
	// MNetworkEnable
	int32_t m_iAddonBits; 	// 0xf1c
	// MNetworkEnable
	int32_t m_iPrimaryAddon; 	// 0xf20
	// MNetworkEnable
	int32_t m_iSecondaryAddon; 	// 0xf24
	// MNetworkEnable
	int32_t m_iProgressBarDuration; 	// 0xf28
	// MNetworkEnable
	float m_flProgressBarStartTime; 	// 0xf2c
	// MNetworkEnable
	float m_flStamina; 	// 0xf30
	// MNetworkEnable
	int32_t m_iDirection; 	// 0xf34
	// MNetworkEnable
	int32_t m_iShotsFired; 	// 0xf38
	// MNetworkEnable
	// MNetworkChangeCallback "OnNightVisionChanged"
	bool m_bNightVisionOn; 	// 0xf3c
	// MNetworkEnable
	bool m_bHasNightVision; 	// 0xf3d
	// MNetworkEnable
	float m_flVelocityModifier; 	// 0xf40
	// MNetworkEnable
	float m_flGroundAccelLinearFracLastTime; 	// 0xf44
	// MNetworkEnable
	int32_t m_iStartAccount; 	// 0xf48
	// MNetworkEnable
	bool m_bIsSpawnRappelling; 	// 0xf4c
	// MNetworkEnable
	Vector m_vecSpawnRappellingRopeOrigin; 	// 0xf50
	float m_flSpawnRappellingFadeOutForClientViewOffset; 	// 0xf5c
	// MNetworkEnable
	int32_t m_nSurvivalTeam; 	// 0xf60
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_hSurvivalAssassinationTarget; 	// 0xf64
	// MNetworkEnable
	float m_flHealthShotBoostExpirationTime; 	// 0xf68
	float m_flLastKnownParachuteScreenEffectAmount; 	// 0xf6c
	Vector m_vecIntroStartEyePosition; 	// 0xf70
	Vector m_vecIntroStartPlayerForward; 	// 0xf7c
	float m_flClientDeathTime; 	// 0xf88
	float m_flNightVisionAlpha; 	// 0xf94
	bool m_bScreenTearFrameCaptured; 	// 0xf98
	float m_flFlashBangTime; 	// 0xf9c
	float m_flFlashScreenshotAlpha; 	// 0xfa0
	float m_flFlashOverlayAlpha; 	// 0xfa4
	bool m_bFlashBuildUp; 	// 0xfa8
	bool m_bFlashDspHasBeenCleared; 	// 0xfa9
	bool m_bFlashScreenshotHasBeenGrabbed; 	// 0xfaa
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; 	// 0xfac
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; 	// 0xfb0
	float m_flLastFiredWeaponTime; 	// 0xfb4
	Vector m_lastStandingPos; 	// 0xfb8
	Vector m_vecLastMuzzleFlashPos; 	// 0xfc4
	QAngle m_angLastMuzzleFlashAngle; 	// 0xfd0
	CHandle< C_BaseEntity > m_hMuzzleFlashShape; 	// 0xfdc
	int32_t m_iHealthBarRenderMaskIndex; 	// 0xfe0
	float m_flHealthFadeValue; 	// 0xfe4
	float m_flHealthFadeAlpha; 	// 0xfe8
	int32_t m_nMyCollisionGroup; 	// 0xfec
	float m_ignoreLadderJumpTime; 	// 0xff0
	CountdownTimer m_ladderSurpressionTimer; 	// 0xff8
	Vector m_lastLadderNormal; 	// 0x1010
	Vector m_lastLadderPos; 	// 0x101c
	float m_flDeathCCWeight; 	// 0x1030
	bool m_bOldIsScoped; 	// 0x1034
	float m_flPrevRoundEndTime; 	// 0x1038
	float m_flPrevMatchEndTime; 	// 0x103c
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; 	// 0x1040
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; 	// 0x1042
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; 	// 0x1044
	// MNetworkEnable
	bool[4] m_passiveItems; 	// 0x1046
	Vector m_vecThirdPersonViewPositionOverride; 	// 0x104c
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; 	// 0x1058
	// MNetworkEnable
	int32_t m_ArmorValue; 	// 0x105c
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; 	// 0x1060
	// MNetworkEnable
	bool m_bInHostageRescueZone; 	// 0x1078
	float m_fNextThinkPushAway; 	// 0x107c
	bool m_bShouldAutobuyDMWeapons; 	// 0x1080
	bool m_bShouldAutobuyNow; 	// 0x1081
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; 	// 0x1082
	// MNetworkEnable
	bool m_bHud_RadarHidden; 	// 0x1083
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; 	// 0x1084
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; 	// 0x1088
	// MNetworkEnable
	int32_t m_nDeathCamMusic; 	// 0x108c
	CEntityIndex m_iIDEntIndex; 	// 0x1090
	CountdownTimer m_delayTargetIDTimer; 	// 0x1098
	CEntityIndex m_iTargetedWeaponEntIndex; 	// 0x10b0
	CEntityIndex m_iOldIDEntIndex; 	// 0x10b4
	CountdownTimer m_holdTargetIDTimer; 	// 0x10b8
	float m_flCurrentMusicStartTime; 	// 0x111c
	float m_flMusicRoundStartTime; 	// 0x1120
	// MNetworkEnable
	int32_t m_cycleLatch; 	// 0x1124
	float m_serverIntendedCycle; 	// 0x1128
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32[5] m_vecPlayerPatchEconIndices; 	// 0x112c
	bool m_bClientEconPatchesNeedUpdate; 	// 0x1140
	// MNetworkEnable
	bool m_bHideTargetID; 	// 0x1141
	float m_nextTaserShakeTime; 	// 0x1144
	float m_firstTaserShakeTime; 	// 0x1148
	float m_flLastSmokeOverlayAlpha; 	// 0x114c
	Vector m_vLastSmokeOverlayColor; 	// 0x1150
	ParticleIndex_t m_nPlayerSmokedFx; 	// 0x115c
	float m_flLastKnownAccumulatedWeaponEncumbrance; 	// 0x1160
	float m_flLastTimeComputedAccumulatedWeaponEncumbrance; 	// 0x1164
	float m_flNextMagDropTime; 	// 0x1168
	int32_t m_nLastMagDropAttachmentIndex; 	// 0x116c
	CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; 	// 0x1170
	CUtlVector< C_PickUpModelSlerper* > m_vecPickupModelSlerpers; 	// 0x1188
	Vector m_vecLastAliveLocalVelocity; 	// 0x11a0
	float m_flLastNearbyItemHighlightCheck; 	// 0x11ac
	bool m_bInSurvivalDangerZone; 	// 0x11b0
	bool m_bNearDangerZone; 	// 0x11b1
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; 	// 0x11e8
	// MNetworkEnable
	float m_flTimeOfLastInjury; 	// 0x1200
	// MNetworkEnable
	RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; 	// 0x1204
	// MNetworkEnable
	int32_t m_nSurvivalTeamNumber; 	// 0x1208
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flNextSprayDecalTime; 	// 0x120c
	bool m_bPreviouslyInBuyZone; 	// 0x1210
	uint32_t m_unPreviousWeaponHash; 	// 0x1214
	uint32_t m_unWeaponHash; 	// 0x1218
	bool m_bPrevDefuser; 	// 0x121c
	bool m_bPrevHelmet; 	// 0x121d
	int32_t m_nPrevArmorVal; 	// 0x1220
	bool m_bGuardianShouldSprayCustomXMark; 	// 0x1224
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; 	// 0x1228
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; 	// 0x1234
	// MNetworkEnable
	int32_t m_aimPunchTickBase; 	// 0x1240
	// MNetworkEnable
	float m_aimPunchTickFraction; 	// 0x1244
	CUtlVector< QAngle > m_aimPunchCache; 	// 0x1248
	float m_flOldFallVelocity; 	// 0x1268
	bool m_bHasDeathInfo; 	// 0x126c
	float m_flDeathInfoTime; 	// 0x1270
	Vector m_vecDeathInfoOrigin; 	// 0x1274
	// MNetworkEnable
	bool m_bKilledByHeadshot; 	// 0x1280
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; 	// 0x1284
	float m_flLandseconds; 	// 0x1298
};

// Alignment: 1
// Size: 0x12a8
class C_CSObserverPawn : public C_CSPlayerPawnBase, C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CEntityHandle m_hDetectParentChange; 	// 0x12a0
};

// Alignment: 20
// Size: 0x19a8
class C_CSPlayerPawn : public C_CSPlayerPawnBase, C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; 	// 0x12a0
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; 	// 0x12a8
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; 	// 0x12b0
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; 	// 0x12b8
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; 	// 0x1388
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; 	// 0x138c
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; 	// 0x1390
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; 	// 0x1391
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; 	// 0x1394
	// MNetworkEnable
	loadout_positions_t m_RetakesMVPBoostExtraUtility; 	// 0x1398
	bool m_bNeedToReApplyGloves; 	// 0x13ac
	// MNetworkEnable
	C_EconItemView m_EconGloves; 	// 0x13b0
	bool m_bMustSyncRagdollState; 	// 0x17f8
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; 	// 0x17fc
	// MNetworkEnable
	Vector m_vRagdollDamageForce; 	// 0x1800
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; 	// 0x180c
	// MNetworkEnable
	char[64] m_szRagdollDamageWeaponName; 	// 0x1818
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; 	// 0x1858
	bool m_bLastHeadBoneTransformIsValid; 	// 0x1980
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; 	// 0x199c
};

// Alignment: 16
// Size: 0xc40
class C_Hostage : public C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; 	// 0xbb8
	// MNetworkEnable
	CHandle< C_BaseEntity > m_leader; 	// 0xbd0
	// MNetworkEnable
	Vector m_vel; 	// 0xbd4
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; 	// 0xbe0
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; 	// 0xbe1
	// MNetworkEnable
	int32_t m_nHostageState; 	// 0xbe4
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; 	// 0xbe8
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; 	// 0xbec
	// MNetworkEnable
	GameTime_t m_flDropStartTime; 	// 0xbf0
	GameTime_t m_flDeadOrRescuedTime; 	// 0xbf4
	CountdownTimer m_blinkTimer; 	// 0xbf8
	Vector m_lookAt; 	// 0xc10
	CountdownTimer m_lookAroundTimer; 	// 0xc20
	bool m_isInit; 	// 0xc38
	AttachmentHandle_t m_eyeAttachment; 	// 0xc39
	AttachmentHandle_t m_chestAttachment; 	// 0xc3a
};

// Alignment: 0
// Size: 0xbb8
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_AK47 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponAug : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponAWP : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponBizon : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponFamas : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponFiveSeven : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponG3SG1 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponGalilAR : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponGlock : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponHKP2000 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponM4A1 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponMAC10 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponMag7 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponMP7 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponMP9 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponNegev : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponP250 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponP90 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponSCAR20 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponSG556 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponSSG08 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponTec9 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponUMP45 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x13f0
class C_WeaponM249 : public C_WeaponCSBaseGun, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1430
class C_MolotovGrenade : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1430
class C_IncendiaryGrenade : public C_MolotovGrenade, C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_DecoyGrenade : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_Flashbang : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_HEGrenade : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1410
class C_SmokeGrenade : public C_BaseCSGrenade, C_WeaponCSBase, C_BasePlayerWeapon, C_EconEntity, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 3
// Size: 0x1a30
class C_CSGO_PreviewPlayer : public C_CSPlayerPawn, C_CSPlayerPawnBase, C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	CUtlString m_animgraph; 	// 0x19a8
	CUtlString m_animgraphCharacterModeString; 	// 0x19b0
	float m_flInitialModelScale; 	// 0x19b8
};

// Alignment: 0
// Size: 0x1a30
class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer, C_CSPlayerPawn, C_CSPlayerPawnBase, C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

// Alignment: 0
// Size: 0x1a30
class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer, C_CSPlayerPawn, C_CSPlayerPawnBase, C_BasePlayerPawn, C_BaseCombatCharacter, C_BaseFlex, CBaseAnimGraph, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{ 
public:
	// no members available
};

