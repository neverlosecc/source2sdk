#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: client.dll
// Class Count: 106
// Enum Count: 1
///////////////////////////////////////////

// Aligment: 4
// Size: 13
enum class PostProcessParameterNames_t : uint32_t
{
	PPPN_FADE_TIME = 0x0,
	PPPN_LOCAL_CONTRAST_STRENGTH = 0x1,
	PPPN_LOCAL_CONTRAST_EDGE_STRENGTH = 0x2,
	PPPN_VIGNETTE_START = 0x3,
	PPPN_VIGNETTE_END = 0x4,
	PPPN_VIGNETTE_BLUR_STRENGTH = 0x5,
	PPPN_FADE_TO_BLACK_STRENGTH = 0x6,
	PPPN_DEPTH_BLUR_FOCAL_DISTANCE = 0x7,
	PPPN_DEPTH_BLUR_STRENGTH = 0x8,
	PPPN_SCREEN_BLUR_STRENGTH = 0x9,
	PPPN_FILM_GRAIN_STRENGTH = 0xa,
	PPPN_TOP_VIGNETTE_STRENGTH = 0xb,
	POST_PROCESS_PARAMETER_COUNT = 0xc,
};

// Aligment: 1
// Size: 16
class C_PlayerState
{
public:
	bool deadflag; // 0x8
};

// Aligment: 6
// Size: 64
class CNetworkedIKProceduralTargetContext
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nChainIndex; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nRuleIndex; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vTargetPosition; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	Quaternion m_qTargetOrientation; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "96"
	float m_flWeight; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsValid; // 0x3c
};

// Aligment: 19
// Size: 2584
class CAnimGraphNetworkedVariables
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_BoolVariables"
	CUtlVector< bool > m_NetBoolVariables; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_ByteVariables"
	CUtlVector< uint8 > m_NetByteVariables; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_IntVariables"
	CUtlVector< int32 > m_NetIntVariables; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_FloatVariables"
	CUtlVector< float32 > m_NetFloatVariables; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_VectorVariables"
	CUtlVector< Vector > m_NetVectorVariables; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_QuaternionVariables"
	CUtlVector< Quaternion > m_NetQuaternionVariables; // 0x80
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CUtlVector< bool > m_PredNetBoolVariables; // 0x98
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CUtlVector< uint8 > m_PredNetByteVariables; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CUtlVector< int32 > m_PredNetIntVariables; // 0xc8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CUtlVector< float32 > m_PredNetFloatVariables; // 0xe0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CUtlVector< Vector > m_PredNetVectorVariables; // 0xf8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CUtlVector< Quaternion > m_PredNetQuaternionVariables; // 0x110
	CUtlVector< bool > m_LocalPredBoolVariables; // 0x128
	CUtlVector< uint8 > m_LocalPredByteVariables; // 0x140
	CUtlVector< int32 > m_LocalPredIntVariables; // 0x158
	CUtlVector< float32 > m_LocalPredFloatVariables; // 0x170
	CUtlVector< Vector > m_LocalPredVectorVariables; // 0x188
	CUtlVector< Quaternion > m_LocalPredQuaternionVariables; // 0x1a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; // 0xa0c
};

// Aligment: 5
// Size: 32
class C_BaseFlex::Emphasized_Phoneme
{
public:
	CUtlString m_sClassName; // 0x0
	float m_flAmount; // 0x18
	bool m_bRequired; // 0x1c
	bool m_bBasechecked; // 0x1d
	bool m_bValid; // 0x1e
};

// Aligment: 2
// Size: 1584
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x628
};

// Aligment: 30
// Size: 488
class CProjectedTextureBase
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_SpotlightTextureName; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x158
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x15c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x160
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x164
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x168
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x16c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x170
public:
	static float &Get_m_flVisibleBBoxMinHeight() { return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fiels[0]->m_instance); }
};

// Aligment: 4
// Size: 224
class C_PlayerLocalData
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint8[32] m_chAreaBits; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint8[24] m_chAreaPortalBits; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0x50
};

// Aligment: 1
// Size: 24
struct C_SceneEntity::QueuedEvents_t
{
public:
	float starttime; // 0x0
};

// Aligment: 4
// Size: 32
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0
	float m_flHorzSize; // 0xc
	float m_flVertSize; // 0x10
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18
};

// Aligment: 15
// Size: 208
class CGlowOverlay
{
public:
	Vector m_vPos; // 0x8
	bool m_bDirectional; // 0x14
	Vector m_vDirection; // 0x18
	bool m_bInSky; // 0x24
	float m_skyObstructionScale; // 0x28
	CGlowSprite[4] m_Sprites; // 0x30
	int32_t m_nSprites; // 0xb0
	float m_flProxyRadius; // 0xb4
	float m_flHDRColorScale; // 0xb8
	float m_flGlowObstructionScale; // 0xbc
	bool m_bCacheGlowObstruction; // 0xc0
	bool m_bCacheSkyObstruction; // 0xc1
	int16_t m_bActivated; // 0xc2
	int16_t m_ListIndex; // 0xc4
	int32_t m_queryHandle; // 0xc8
};

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
struct PostProcessParameters_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float32[12] m_flParameters; // 0x8
};

// Aligment: 2
// Size: 8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0
	float m_fNextEvent; // 0x4
};

// Aligment: 3
// Size: 32
class CViewAngleKeyFrame
{
public:
	QAngle m_vecAngles; // 0x8
	float m_flTime; // 0x14
	int32_t m_iFlags; // 0x18
};

// Aligment: 10
// Size: 160
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0
	float m_flAnimationLifeSpan; // 0x4
	float m_flPlaceTime; // 0x8
	float m_flFadeStartTime; // 0xc
	float m_flFadeDuration; // 0x10
	int32_t m_nVBSlot; // 0x14
	int32_t m_nBoneIndex; // 0x18
	CDecalInfo* m_pNext; // 0x28
	CDecalInfo* m_pPrev; // 0x30
	uint64_t m_nDecalMaterialIndex; // 0x98
};

// Aligment: 2
// Size: 8
struct C_CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 2
// Size: 8
struct C_CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 29
// Size: 576
class C_CEnvWindShared
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_location; // 0x2c
	int32_t m_iszGustSound; // 0x38
	int32_t m_iWindDir; // 0x3c
	float m_flWindSpeed; // 0x40
	Vector m_currentWindVector; // 0x44
	Vector m_CurrentSwayVector; // 0x50
	Vector m_PrevSwayVector; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c
	float m_flVariationTime; // 0x70
	float m_flSwayTime; // 0x74
	float m_flSimTime; // 0x78
	float m_flSwitchTime; // 0x7c
	float m_flAveWindSpeed; // 0x80
	bool m_bGusting; // 0x84
	float m_flWindAngleVariation; // 0x88
	float m_flWindSpeedVariation; // 0x8c
	CEntityIndex m_iEntIndex; // 0x90
};

// Aligment: 0
// Size: 8
class C_GameRules
{
public:
// <no members described>
};

// Aligment: 14
// Size: 64
struct C_fogplayerparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8
	float m_flTransitionTime; // 0xc
	Color m_OldColor; // 0x10
	float m_flOldStart; // 0x14
	float m_flOldEnd; // 0x18
	float m_flOldMaxDensity; // 0x1c
	float m_flOldHDRColorScale; // 0x20
	float m_flOldFarZ; // 0x24
	Color m_NewColor; // 0x28
	float m_flNewStart; // 0x2c
	float m_flNewEnd; // 0x30
	float m_flNewMaxDensity; // 0x34
	float m_flNewHDRColorScale; // 0x38
	float m_flNewFarZ; // 0x3c
};

// Aligment: 4
// Size: 40
class C_CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0
	bool m_bIsInSimulation; // 0x18
	float m_flSimOrRenderTime; // 0x1c
	float m_flInterpolatedTime; // 0x20
};

// Aligment: 5
// Size: 568
class C_CSequenceTransitioner2
{
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8
	float m_flCurrentPlaybackRate; // 0x48
	float m_flCurrentAnimTime; // 0x4c
	TransitioningLayer_t[4] m_transitioningLayers; // 0x50
	C_BaseAnimatingController* m_pOwner; // 0x1d0
};

// Aligment: 1
// Size: 32
class C_SBox_Gamerules : public C_GameRules
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
};

// Aligment: 2
// Size: 40
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "112"
	CEntityIdentity* m_pEntity; // 0x8
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x10
};

// Aligment: 0
// Size: 40
class C_GameEntity : public CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 23
// Size: 3720
class C_BaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0xa78
	// MNetworkDisable
	float m_flGroundSpeed; // 0xa7c
	// MNetworkDisable
	float m_flLastEventCycle; // 0xa80
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0xa84
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0xa88
	// MNetworkDisable
	float m_flPrevAnimTime; // 0xaa0
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0xaa4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0xb04
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0xb05
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0xb06
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0xb07
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xb08
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0xb0c
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0xb10
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0xb14
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0xb18
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0xb1c
	// MNetworkDisable
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0xb48
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0xdc0
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0xdc4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "overrideAnimGraphChanged"
	CStrongHandle< InfoForResourceTypeIAnimationGraph > m_hOverrideGraph; // 0xe70
};

// Aligment: 1
// Size: 3824
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0xe88
};

// Aligment: 2
// Size: 64
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 336
class CBodyComponentPoint : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x130
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 1184
class CBodyComponentSkeletonInstance : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x480
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fiels[1]->m_instance); }
};

// Aligment: 0
// Size: 24
class CHitboxComponent : public CEntityComponent
{
public:
// <no members described>
};

// Aligment: 58
// Size: 392
class CLightComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x48
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x75
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x7c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x80
	// MNetworkEnable
	// MNetworkChangeCallback "LightRangeChanged"
	float m_flRange; // 0x84
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x88
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x8c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x90
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0x94
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flTheta; // 0x98
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flPhi; // 0x9c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_lightCookie; // 0xa0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	int32_t m_nCastShadows; // 0xac
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xb0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xb4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xbc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xc0
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightWidth; // 0xc4
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightHeight; // 0xc8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xcc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xd0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xd4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xd8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xdc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0xe0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0xe4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakeLightIndex; // 0xec
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBakeLightIndexScale; // 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesIndexedBakedLighting; // 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0xf5
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nPriority; // 0xf8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x100
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x108
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x10c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x110
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x114
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x118
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x11c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x120
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x121
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x124
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x130
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x13c
	// MNetworkEnable
	Vector m_vPrecomputePosition; // 0x140
	// MNetworkEnable
	Vector m_vPrecomputeDirection; // 0x14c
	// MNetworkEnable
	Vector m_vPrecomputeUp; // 0x158
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x164
	// MNetworkEnable
	float m_flFogContributionStength; // 0x168
	// MNetworkEnable
	float m_flNearClipPlane; // 0x16c
	// MNetworkEnable
	Color m_SkyColor; // 0x170
	// MNetworkEnable
	float m_flSkyIntensity; // 0x174
	// MNetworkEnable
	bool m_bLowerHemisphereIsBlack; // 0x178
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x179
	bool m_bMixedShadows; // 0x184
	bool m_bFadeMixedShadows; // 0x185
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 6
// Size: 176
class CRenderComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10
	bool m_bClientAllowDraw; // 0x28
	bool m_bLastRenderState; // 0x29
	uint32_t m_nSplitscreenFlags; // 0x48
	bool m_bEnableRendering; // 0x58
	bool m_bInterpolationReadyToDraw; // 0xa8
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 71
// Size: 1280
class C_BaseEntity : public C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "96"
	CBodyComponent* m_CBodyComponent; // 0x38
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
	CUtlString m_sPredictionCopyComment; // 0x268
	int32_t m_nLastThinkTick; // 0x280
	CGameSceneNode* m_pGameSceneNode; // 0x288
	CRenderComponent* m_pRenderComponent; // 0x290
	CCollisionProperty* m_pCollision; // 0x298
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x2a0
	int32_t m_nNoInterpolationTick; // 0x2a4
	float m_flProxyRandomValue; // 0x2a8
	int32_t m_iEFlags; // 0x2ac
	uint8_t m_nWaterType; // 0x2b0
	bool m_bInterpolateEvenWithNoModel; // 0x2b1
	int32_t m_nSimulationTick; // 0x2b4
	int32_t m_iCurrentThinkContext; // 0x2b8
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x2c0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; // 0x2d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x2dc
	bool m_bHasSuccessfullyInterpolated; // 0x2e0
	bool m_bHasAddedVarsToInterpolation; // 0x2e1
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x2e2
	int32[2] m_nInterpolationLatchDirtyFlags; // 0x2e4
	uint16[9] m_ListEntry; // 0x2ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flCreateTime; // 0x300
	float m_flSpeed; // 0x304
	int16_t m_EntClientFlags; // 0x308
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x30c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nNextThinkTick; // 0x310
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	// MNetworkSerializer "CropFlagsToPlayerFlagBitsLength"
	uint32_t m_fFlags; // 0x314
	// MNetworkEnable
	Vector m_vecAbsVelocity; // 0x318
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "64"
	Vector m_vecVelocity; // 0x324
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vecBaseVelocity; // 0x330
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x33c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x340
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x344
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x348
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "4"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x34c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x354
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; // 0x358
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x359
	// MNetworkEnable
	// MNetworkEnable
	float m_flNavIgnoreUntilTime; // 0x35c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_iTextureFrameIndex; // 0x360
	uint8_t m_ShadowBits; // 0x361
	float m_flFirstReceivedTime; // 0x364
	float m_flLastMessageTime; // 0x368
	uint16_t m_hThink; // 0x36c
	uint8_t m_fBBoxVisFlags; // 0x378
	bool m_bIsValidIKAttachment; // 0x379
	bool m_bPredictable; // 0x37a
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x37c
	CParticleProperty m_Particles; // 0x380
	int32_t m_nAnimGraphNetVarCreationCommandNumber; // 0x3b0
	QAngle m_vecAngVelocity; // 0x3b4
	int32_t m_DataChangeEventRef; // 0x3c0
	CUtlVector< CEntityHandle > m_dependencies; // 0x3c8
	int32_t m_nCreationTick; // 0x3e0
	bool m_bAnimTimeChanged; // 0x3f9
	bool m_bSimulationTimeChanged; // 0x3fa
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHasDynamicPhysics; // 0x3fb
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnSbEntityNameChanged"
	CUtlString m_EntityName; // 0x400
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	Vector m_EyePosOffset; // 0x408
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	Quaternion m_EyeRotOffset; // 0x414
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	float m_fHealth; // 0x424
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_lifeState; // 0x428
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_WaterLevel; // 0x429
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_WaterEntity; // 0x42c
	// MNetworkEnable
	// MNetworkEnable
	DataTable m_NetData; // 0x438
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_netHash; // 0x468
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< NetField > m_netData; // 0x470
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< NetField > m_netDataLocal; // 0x4b8
public:
	static bool &Get_sm_bDatadescValidating() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[0]->m_instance); }
	static bool &Get_sm_bAccurateTriggerBboxChecks() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[1]->m_instance); }
	static bool &Get_sm_bDisableTouchFuncs() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[2]->m_instance); }
	static bool &Get_m_bAllowPrecache() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[3]->m_instance); }
	static LatchDirtyPermission_t &Get_s_nLatchPermissions() { return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[4]->m_instance); }
	static int32_t &Get_m_nPredictionRandomSeed() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[5]->m_instance); }
	static C_BasePlayer* &Get_m_pPredictionPlayer() { return *reinterpret_cast<C_BasePlayer**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[6]->m_instance); }
	static bool &Get_s_bAbsQueriesValid() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[7]->m_instance); }
	static bool &Get_s_bAbsRecomputationEnabled() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[8]->m_instance); }
	static bool &Get_s_bComputingInterpolatedValues() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[9]->m_instance); }
	static bool &Get_s_bPreventingSetAnimRunAnimEvents() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[10]->m_instance); }
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects() { return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[11]->m_instance); }
};

// Aligment: 0
// Size: 1280
class CLogicalEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 29
// Size: 3496
class C_BasePlayer : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	fogparams_t m_CurrentFog; // 0x508
	CHandle< C_FogController > m_hOldFogController; // 0x570
	bool[5] m_bOverrideFogColor; // 0x574
	Color[5] m_OverrideFogColor; // 0x579
	bool[5] m_bOverrideFogStartEnd; // 0x58d
	float32[5] m_fOverrideFogStart; // 0x594
	float32[5] m_fOverrideFogEnd; // 0x5a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CPlayerLocalData"
	// MNetworkSendProxyRecipientsFilter
	C_PlayerLocalData m_Local; // 0x5c0
	C_PlayerState m_pl; // 0x6a0
	uint64_t m_afButtonLast; // 0x6b0
	uint64_t m_afButtonPressed; // 0x6b8
	uint64_t m_afButtonReleased; // 0x6c0
	uint64_t m_nButtons; // 0x6c8
	uint64_t m_afButtonDisabled; // 0x6d0
	uint64_t m_afButtonForced; // 0x6d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hViewEntity; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x6ec
	int32_t m_nFinalPredictedTick; // 0x6f0
	C_CommandContext m_CommandContext; // 0x6f8
	Vector m_vecPredictionError; // 0xd28
	float m_flPredictionErrorTime; // 0xd34
	bool m_bIsLocalPlayer; // 0xd38
	Vector m_vOldOrigin; // 0xd3c
	float m_flOldSimulationTime; // 0xd48
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "fogplayerparams_t"
	C_fogplayerparams_t m_PlayerFog; // 0xd50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nUnHoldableButtons; // 0xd90
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_Ping; // 0xd98
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_PacketLoss; // 0xd9c
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Pawn; // 0xda0
};

// Aligment: 1
// Size: 1856
class C_EnvWindClientside : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_CEnvWindShared m_EnvWindShared; // 0x500
};

// Aligment: 0
// Size: 1304
class C_TintController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 13
// Size: 48
class CClientAlphaProperty : public IClientAlphaProperty
{
public:
	uint8_t m_nRenderFX; // 0x10
	uint8_t m_nRenderMode; // 0x11
	bitfield:1 m_bAlphaOverride; // 0x0
	bitfield:1 m_bShadowAlphaOverride; // 0x0
	bitfield:6 m_nReserved; // 0x0
	uint8_t m_nAlpha; // 0x13
	uint16_t m_nDesyncOffset; // 0x14
	uint16_t m_nReserved2; // 0x16
	uint16_t m_nDistFadeStart; // 0x18
	uint16_t m_nDistFadeEnd; // 0x1a
	float m_flFadeScale; // 0x1c
	float m_flRenderFxStartTime; // 0x20
	float m_flRenderFxDuration; // 0x24
};

// Aligment: 4
// Size: 1440
class C_SkyCamera : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x590
	bool m_bUseAngles; // 0x594
	C_SkyCamera* m_pNext; // 0x598
};

// Aligment: 5
// Size: 1336
class CViewAngleAnimation : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flAnimStartTime; // 0x500
	bool m_bFinished; // 0x504
	CUtlVector< CViewAngleKeyFrame* > m_KeyFrames; // 0x508
	QAngle m_vecBaseAngles; // 0x520
	int32_t m_iFlags; // 0x52c
};

// Aligment: 2
// Size: 1288
class C_EnvDetailController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeEndDist; // 0x504
};

// Aligment: 0
// Size: 1280
class C_GameRulesProxy : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1288
class C_SBox_GamerulesProxy : public C_GameRulesProxy, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CSBox_Gamerules*"
	// MNetworkPriority "64"
	C_SBox_Gamerules* m_pGameRules; // 0x500
};

// Aligment: 0
// Size: 3496
class C_SBox_Player : public C_BasePlayer, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1280
class C_PointEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 5
// Size: 1304
class C_EnvClock : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hHourHand; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hMinuteHand; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hSecondHand; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartGameTime; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartClockSeconds; // 0x510
};

// Aligment: 18
// Size: 5688
class C_EnvCombinedLightProbeVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x15b0
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x15b4
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x15b8
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x15c0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x15c8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x15d0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x15d8
	// MNetworkEnable
	Vector m_vBoxMins; // 0x15e0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x15ec
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x15f8
	// MNetworkEnable
	bool m_bMoveable; // 0x1600
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1604
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x1608
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x160c
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x1610
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x1614
	// MNetworkEnable
	bool m_bStartDisabled; // 0x1618
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x1631
};

// Aligment: 18
// Size: 1616
class C_EnvCubemap : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5e8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hDepthmapTexture; // 0x5f0
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x5f8
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x5fc
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x600
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x60c
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x618
	// MNetworkEnable
	bool m_bMoveable; // 0x620
	// MNetworkEnable
	int32_t m_nHandshake; // 0x624
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x628
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x62c
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x630
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x634
	// MNetworkEnable
	bool m_bStartDisabled; // 0x638
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x639
	// MNetworkEnable
	bool m_bRenderDepthMap; // 0x63a
	// MNetworkEnable
	bool m_bAlwaysCheckDepth; // 0x63b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x648
};

// Aligment: 0
// Size: 1616
class C_EnvCubemapBox : public C_EnvCubemap, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1328
class C_EnvCubemapFog : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flEndDistance; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDistance; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightStart; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flLODBias; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x51d
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x520
	bool m_bFirstTime; // 0x528
};

// Aligment: 12
// Size: 5416
class C_EnvLightProbeVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x14c8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x14d0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14d8
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14e0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14ec
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x14f8
	// MNetworkEnable
	bool m_bMoveable; // 0x1500
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1504
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x1508
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x150c
	// MNetworkEnable
	bool m_bStartDisabled; // 0x1510
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x1521
};

// Aligment: 10
// Size: 1384
class C_SphericalVignette : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteStartDistance; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteEndDistance; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flFarZ; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteMaxOpacity; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteFalloffExponent; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	Color m_vignetteColor; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteStrength; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flFadeTime; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsEnabled; // 0x521
public:
	static C_SphericalVignette* &Get_sm_pSphericalVignette() { return *reinterpret_cast<C_SphericalVignette**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_SphericalVignette")->m_static_fiels[0]->m_instance); }
};

// Aligment: 28
// Size: 1408
class C_EnvVolumetricFogController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flScattering; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnisotropy; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeSpeed; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	float m_flDrawDistance; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInEnd; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flIndirectStrength; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisoTime; // 0x544
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScatterTime; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistanceTime; // 0x54c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScattering; // 0x554
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x55c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultScattering; // 0x560
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x564
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x569
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMaster; // 0x56a
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x570
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x578
	bool m_bFirstTime; // 0x57c
};

// Aligment: 7
// Size: 1328
class C_EnvVolumetricFogVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStrength; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	float m_flFalloffExponent; // 0x528
};

// Aligment: 3
// Size: 1392
class C_FogController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t m_fog; // 0x500
	bool m_bUseAngles; // 0x568
	int32_t m_iChangedVariables; // 0x56c
};

// Aligment: 0
// Size: 1280
class CInfoTarget : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1280
class CInfoParticleTarget : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1304
class C_InfoVisibilityBox : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nMode; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxSize; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x514
};

// Aligment: 8
// Size: 1352
class CInfoWorldLayer : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x539
	bool m_bCreateAsChildSpawnGroup; // 0x53a
	uint32_t m_hLayerSpawnGroup; // 0x53c
	bool m_bWorldLayerActuallyVisible; // 0x540
};

// Aligment: 24
// Size: 1376
class C_PointCamera : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_FOV; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_Resolution; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFogEnable; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	Color m_FogColor; // 0x509
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStart; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEnd; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x51d
	// MNetworkEnable
	// MNetworkEnable
	float m_flAspectRatio; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoSky; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	float m_fBrightness; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	float m_flZFar; // 0x52c
	// MNetworkEnable
	// MNetworkEnable
	float m_flZNear; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDofEnabled; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x53c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x544
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x548
	float m_TargetFOV; // 0x54c
	float m_DegreesPerSecond; // 0x550
	bool m_bIsOn; // 0x554
	C_PointCamera* m_pNext; // 0x558
};

// Aligment: 2
// Size: 4928
class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingController m_animationController; // 0x4a0
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1328
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 5040
class C_BodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingOverlayController m_animationController; // 0x4a0
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1390
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 1216
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x4a0
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[1]->m_instance); }
};

// Aligment: 25
// Size: 1896
class C_BaseModelEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x500
	int32_t m_iViewerID; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x50d
	bool m_bAllowFadeInView; // 0x50e
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x50f
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x5f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x658
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMinDist; // 0x65c
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMaxDist; // 0x660
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeScale; // 0x664
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowStrength; // 0x668
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x670
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x6d8
	Color m_ClientOverrideTint; // 0x6e0
	bool m_bUseClientOverrideTint; // 0x6e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	Vector m_vLightingOrigin; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	bool m_bFixupLightingOriginToPlayerSide; // 0x72c
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlStringToken > m_MaterialReplaceAttribute; // 0x730
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_MaterialReplaceMaterial; // 0x748
	int32_t m_materialCountHash; // 0x760
	CUtlStringToken m_sceneLayerID; // 0x764
};

// Aligment: 0
// Size: 1896
class CServerOnlyModelEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1896
class C_ModelPointEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 1368
class CLogicRelay : public CLogicalEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x500
	CEntityIOOutput m_OnSpawn; // 0x528
	bool m_bDisabled; // 0x550
	bool m_bWaitForRefire; // 0x551
	bool m_bTriggerOnce; // 0x552
	bool m_bFastRetrigger; // 0x553
	bool m_bPassthoughCaller; // 0x554
};

// Aligment: 16
// Size: 1544
class C_PathParticleRope : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartActive; // 0x500
	float m_flMaxSimulationTime; // 0x504
	CUtlSymbolLarge m_iszEffectName; // 0x508
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flParticleSpacing; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x52c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	// MNetworkBitCount "3"
	int32_t m_nEffectState; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Position; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentIn; // 0x560
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentOut; // 0x578
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Color; // 0x590
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CUtlVector< bool > m_PathNodes_PinEnabled; // 0x5a8
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< float32 > m_PathNodes_RadiusScale; // 0x5c0
};

// Aligment: 5
// Size: 1304
class CInfoDynamicShadowHint : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x500
	float m_flRange; // 0x504
	int32_t m_nImportance; // 0x508
	int32_t m_nLightChoice; // 0x50c
	CHandle< C_BaseEntity > m_hLight; // 0x510
public:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints() { return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 1328
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint, C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vBoxMins; // 0x518
	Vector m_vBoxMaxs; // 0x524
};

// Aligment: 7
// Size: 1936
class C_DynamicLight : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Flags; // 0x768
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_LightStyle; // 0x769
	// MNetworkEnable
	// MNetworkEnable
	float m_Radius; // 0x76c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_Exponent; // 0x770
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_InnerAngle; // 0x774
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_OuterAngle; // 0x778
	// MNetworkEnable
	// MNetworkEnable
	float m_SpotRadius; // 0x77c
};

// Aligment: 4
// Size: 1920
class C_FuncAreaPortalWindow : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x768
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDist; // 0x76c
	// MNetworkEnable
	// MNetworkEnable
	float m_flTranslucencyLimit; // 0x770
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iBackgroundModelIndex; // 0x778
};

// Aligment: 5
// Size: 1304
class C_ShadowControl : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_shadowDirection; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	Color m_shadowColor; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowMaxDist; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableShadows; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableLocalLightShadows; // 0x515
};

// Aligment: 4
// Size: 1296
class C_PointHMDAnchor : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flEnableTime; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nPlayerIndex; // 0x508
	int32_t m_nLastSimulateFrame; // 0x50c
};

// Aligment: 0
// Size: 1296
class C_PointHMDAnchorOverride : public C_PointHMDAnchor, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 25
// Size: 1400
class C_PointValueRemapper : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x500
	bool m_bDisabledOld; // 0x501
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x502
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flDisengageDistance; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flEngageDistance; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x544
	// MNetworkEnable
	// MNetworkEnable
	float m_flMomentumModifier; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	float m_flSnapValue; // 0x54c
	float m_flCurrentMomentum; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x554
	float m_flRatchetOffset; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	float m_flInputOffset; // 0x55c
	bool m_bEngaged; // 0x560
	bool m_bFirstUpdate; // 0x561
	float m_flPreviousValue; // 0x564
	float m_flPreviousUpdateTickTime; // 0x568
	Vector m_vecPreviousTestPoint; // 0x56c
};

// Aligment: 12
// Size: 2528
class C_PointWorldText : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceRecreateNextUpdate; // 0x770
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x780
	// MNetworkEnable
	// MNetworkEnable
	char[64] m_FontName; // 0x980
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x9c0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFullbright; // 0x9c1
	// MNetworkEnable
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x9c4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFontSize; // 0x9c8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x9cc
	// MNetworkEnable
	// MNetworkEnable
	Color m_Color; // 0x9d0
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9d4
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9d8
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x9dc
};

// Aligment: 4
// Size: 1312
class C_SoundOpvarSetPointEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x518
};

// Aligment: 0
// Size: 1312
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1312
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity, C_SoundOpvarSetPointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1856
class C_EnvWind : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	C_CEnvWindShared m_EnvWindShared; // 0x500
};

// Aligment: 0
// Size: 1896
class C_BaseToggle : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1896
class C_PrecipitationBlocker : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 2056
class C_Precipitation : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	PrecipitationType_t m_nPrecipType; // 0x768
	float m_flDensity; // 0x76c
	float m_flParticleInnerDist; // 0x778
	char* m_pParticleInnerNearDef; // 0x780
	char* m_pParticleInnerFarDef; // 0x788
	char* m_pParticleOuterDef; // 0x790
	TimedEvent m_tParticlePrecipTraceTimer; // 0x7f8
	bool m_bActiveParticlePrecipEmitter; // 0x800
	bool m_bParticlePrecipInitialized; // 0x801
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x802
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x804
};

// Aligment: 0
// Size: 2392
class C_EnvProjectedTexture : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1896
class C_FuncOccluder : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 12
// Size: 1376
class C_SceneEntity : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPaused; // 0x509
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMultiplayer; // 0x50a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutogenerated; // 0x50b
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	uint16_t m_nSceneStringIndex; // 0x510
	bool m_bClientOnly; // 0x512
	CHandle< C_BaseFlex > m_hOwner; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CUtlVector< CHandle< C_BaseFlex > > m_hActorList; // 0x518
	bool m_bWasPlaying; // 0x530
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x540
	float m_flCurrentTime; // 0x558
};

// Aligment: 24
// Size: 2200
class C_Sprite : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x780
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x788
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	AttachmentHandle_t m_nAttachment; // 0x78c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "60"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flFrame; // 0x794
	float m_flDieTime; // 0x798
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nBrightness; // 0x7a8
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x7ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x7b0
	// MNetworkEnable
	// MNetworkEnable
	float m_flScaleDuration; // 0x7b4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x7b8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x7bc
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x7c0
	float m_flLastTime; // 0x7c4
	float m_flMaxFrame; // 0x7c8
	float m_flStartScale; // 0x7cc
	float m_flDestScale; // 0x7d0
	float m_flScaleTimeStart; // 0x7d4
	int32_t m_nStartBrightness; // 0x7d8
	int32_t m_nDestBrightness; // 0x7dc
	float m_flBrightnessTimeStart; // 0x7e0
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x7e8
	int32_t m_nSpriteWidth; // 0x890
	int32_t m_nSpriteHeight; // 0x894
};

// Aligment: 0
// Size: 2200
class C_SpriteOriented : public C_Sprite, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1904
class C_LightEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x768
};

// Aligment: 0
// Size: 1904
class C_LightSpotEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1904
class C_LightOrthoEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1904
class C_LightDirectionalEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1904
class C_LightEnvironmentEntity : public C_LightDirectionalEntity, C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1896
class C_World : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 2312
class C_BaseAnimating : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x768
	CUtlVector< handposepair_t > m_HandPoses; // 0x780
	// MNetworkEnable
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x798
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x799
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_nMuzzleFlashParity; // 0x79a
	bool m_bIsStaticProp; // 0x79b
	uint8_t m_nOldMuzzleFlashParity; // 0x79c
	AttachmentHandle_t m_iEjectBrassAttachment; // 0x7c8
	bool m_bSuppressAnimEventSounds; // 0x7d8
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasings_t m_Easings; // 0x8a8
	bool m_bShouldUseAnimGraph; // 0x8e0
};

// Aligment: 0
// Size: 2312
class C_BaseAnimatingOverlay : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 32
// Size: 2616
class C_DynamicProp : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x908
	CEntityIOOutput m_pOutputAnimOver; // 0x930
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x958
	CEntityIOOutput m_OnAnimReachedStart; // 0x980
	CEntityIOOutput m_OnAnimReachedEnd; // 0x9a8
	CUtlSymbolLarge m_iszDefaultAnim; // 0x9d0
	CUtlSymbolLarge m_iszInitialAnim; // 0x9d8
	HSequence m_hGoalSequence; // 0x9e0
	int32_t m_iTransitionDirection; // 0x9e4
	bool m_bAnimateOnServer; // 0x9e8
	bool m_bRandomizeCycle; // 0x9e9
	bool m_bHoldAnimation; // 0x9ea
	bool m_bIsHoldingAnimation; // 0x9eb
	bool m_bRandomAnimator; // 0x9ec
	float m_flNextRandAnim; // 0x9f0
	float m_flMinRandAnimDuration; // 0x9f4
	float m_flMaxRandAnimDuration; // 0x9f8
	HSequence m_hPendingSequence; // 0x9fc
	bool m_bStartDisabled; // 0xa00
	bool m_bUpdateAttachedChildren; // 0xa01
	bool m_bFiredStartEndOutput; // 0xa02
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xa03
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xa04
	bool m_bCreateNonSolid; // 0xa05
	bool m_bIsOverrideProp; // 0xa06
	int32_t m_iInitialGlowState; // 0xa08
	int32_t m_nGlowRange; // 0xa0c
	int32_t m_nGlowRangeMin; // 0xa10
	Color m_glowColor; // 0xa14
	int32_t m_iCachedFrameCount; // 0xa18
	Vector m_vecCachedRenderMins; // 0xa1c
	Vector m_vecCachedRenderMaxs; // 0xa28
};

// Aligment: 0
// Size: 2616
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 25
// Size: 2752
class C_BaseFlex : public C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_viewtarget; // 0x910
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< float32 >"
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CUtlVector< float32 > m_flexWeight; // 0x928
	// MNetworkEnable
	// MNetworkEnable
	bool m_blinktoggle; // 0x940
	int32_t m_nLastFlexUpdateFrameCount; // 0x9a8
	Vector m_CachedViewTarget; // 0x9ac
	int32_t m_iBlink; // 0x9c0
	float m_blinktime; // 0x9c4
	bool m_prevblinktoggle; // 0x9c8
	int32_t m_iBlinkSlider; // 0x9cc
	int32_t m_iJawOpen; // 0x9d0
	float m_flJawOpenAmount; // 0x9d4
	float m_flBlinkAmount; // 0x9d8
	AttachmentHandle_t m_iMouthAttachment; // 0x9dc
	AttachmentHandle_t m_iEyeAttachment; // 0x9dd
	bool m_bResetFlexWeightsOnModelChange; // 0x9de
	int32_t m_iEyeLidUpDownPP; // 0x9f8
	int32_t m_iEyeLidLeftRightPP; // 0x9fc
	float m_flMinEyeUpDown; // 0xa00
	float m_flMaxEyeUpDown; // 0xa04
	float m_flMinEyeLeftRight; // 0xa08
	float m_flMaxEyeLeftRight; // 0xa0c
	int32_t m_nEyeOcclusionRendererBone; // 0xa10
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xa14
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xa44
	C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; // 0xa60
};

// Aligment: 9
// Size: 10992
class C_FlexCycler : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flextime; // 0xac0
	float32[2048] m_flextarget; // 0xac8
	float m_blinktime; // 0x2ac8
	float m_looktime; // 0x2acc
	Vector m_lookTarget; // 0x2ad0
	float m_speaktime; // 0x2adc
	int32_t m_istalking; // 0x2ae0
	int32_t m_phoneme; // 0x2ae4
	HSequence m_hCurrLayerSequence; // 0x2ae8
};

// Aligment: 9
// Size: 11056
class C_GenericFlexCycler : public C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0x2af0
	int32_t m_nTestIndex; // 0x2af4
	CUtlSymbolLarge m_poseParameterName; // 0x2af8
	bool m_bDoClientSideAnimation; // 0x2b00
	CUtlSymbolLarge[2] m_layerSequence; // 0x2b08
	int32[2] m_nLayerIndex; // 0x2b18
	HSequence[2] m_hBaseSequence; // 0x2b20
	int32_t m_nBoneOverrideIndex; // 0x2b28
	float m_flLastSimTime; // 0x2b2c
};

// Aligment: 0
// Size: 11056
class C_GenericFlexCyclerAlias_cycler : public C_GenericFlexCycler, C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

