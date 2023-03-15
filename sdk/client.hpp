#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: client.dll
// Class Count: 210
// Enum Count: 3
///////////////////////////////////////////

// Aligment: 4
// Size: 9
enum class NPC_STATE : uint32_t
{
	NPC_STATE_INVALID = 0xffffffffffffffff,
	NPC_STATE_NONE = 0x0,
	NPC_STATE_IDLE = 0x1,
	NPC_STATE_ALERT = 0x2,
	NPC_STATE_COMBAT = 0x3,
	NPC_STATE_SCRIPT = 0x4,
	NPC_STATE_PLAYDEAD = 0x5,
	NPC_STATE_PRONE = 0x6,
	NPC_STATE_DEAD = 0x7,
};

// Aligment: 4
// Size: 5
enum class C_BaseCombatCharacter::WaterWakeMode_t : uint32_t
{
	C_BaseCombatCharacter::WATER_WAKE_NONE = 0x0,
	C_BaseCombatCharacter::WATER_WAKE_IDLE = 0x1,
	C_BaseCombatCharacter::WATER_WAKE_WALKING = 0x2,
	C_BaseCombatCharacter::WATER_WAKE_RUNNING = 0x3,
	C_BaseCombatCharacter::WATER_WAKE_WATER_OVERHEAD = 0x4,
};

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

// Aligment: 4
// Size: 72
struct ActiveModelConfig_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x30
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
// Size: 3008
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
	float m_flLastTeleportTime; // 0xbb4
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
// Size: 856
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x350
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

// Aligment: 29
// Size: 488
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
	int32_t m_nStepside; // 0x50
	int32_t m_nOldButtons; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	float m_flFallVelocity; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	float m_flStepSize; // 0x70
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x78
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x90
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0xa8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0xa9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0xaa
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xab
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xac
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xad
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xae
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xaf
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0xb8
	// MNetworkEnable
	// MNetworkEnable
	audioparams_t m_audio; // 0x140
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x1b8
	bool m_bInLanding; // 0x1d4
	float m_flLandingTime; // 0x1d8
	Vector m_vecClientBaseVelocity; // 0x1dc
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

// Aligment: 1
// Size: 16
class C_RopeKeyframe::CPhysicsDelegate
{
public:
	C_RopeKeyframe* m_pKeyframe; // 0x8
};

// Aligment: 1
// Size: 24
struct C_SceneEntity::QueuedEvents_t
{
public:
	float starttime; // 0x0
};

// Aligment: 15
// Size: 776
class CFlashlightEffect
{
public:
	bool m_bIsOn; // 0x8
	bool m_bMuzzleFlashEnabled; // 0x18
	float m_flMuzzleFlashBrightness; // 0x1c
	Quaternion m_quatMuzzleFlashOrientation; // 0x20
	Vector m_vecMuzzleFlashOrigin; // 0x30
	float m_flDT; // 0x3c
	float m_flFov; // 0x40
	float m_flFarZ; // 0x44
	float m_flLinearAtten; // 0x48
	bool m_bCastsShadows; // 0x4c
	float m_flCurrentPullBackDist; // 0x50
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x58
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x60
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x68
	char[64] m_textureName; // 0x70
};

// Aligment: 0
// Size: 776
class CHeadlightEffect : public CFlashlightEffect
{
public:
// <no members described>
};

// Aligment: 5
// Size: 20
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0
	float m_flEndTime; // 0x4
	float m_flStartValue; // 0x8
	float m_flEndValue; // 0xc
	int32_t m_nInterpType; // 0x10
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

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 10
// Size: 96
class JiggleData
{
public:
	int32_t bone; // 0x0
	int32_t id; // 0x4
	float lastUpdate; // 0x8
	Vector basePos; // 0xc
	Vector baseLastPos; // 0x18
	Vector baseVel; // 0x24
	Vector baseAccel; // 0x30
	Vector tipPos; // 0x3c
	Vector tipVel; // 0x48
	Vector tipAccel; // 0x54
};

// Aligment: 0
// Size: 40
class CJiggleBones
{
public:
// <no members described>
};

// Aligment: 3
// Size: 24
class C_PlayerState
{
public:
	bool deadflag; // 0x8
	bool hltv; // 0x9
	QAngle v_angle; // 0xc
};

// Aligment: 10
// Size: 152
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
	int32_t m_nDecalMaterialIndex; // 0x90
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

// Aligment: 3
// Size: 48
class C_CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x8
	CUtlVector< CHintMessage* > m_messages; // 0x10
	C_BasePlayer* m_pPlayer; // 0x28
};

// Aligment: 0
// Size: 32
class C_MultiplayRules : public C_GameRules
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

// Aligment: 0
// Size: 8
class C_SingleplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 2
// Size: 24
class C_EconItemAttribute
{
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14
};

// Aligment: 3
// Size: 12
struct C_EconEntity::AttachedParticleInfo_t
{
public:
	ParticleIndex_t m_nAttachedParticleIndex; // 0x0
	CUtlStringToken m_customType; // 0x4
	bool m_bShouldDestroyImmediately; // 0x8
};

// Aligment: 1
// Size: 16
struct C_EconEntity::AttachedModelData_t
{
public:
	int32_t m_iModelDisplayFlags; // 0x8
};

// Aligment: 52
// Size: 1368
class CGlobalLightBase
{
public:
	bool m_bSpotLight; // 0x10
	Vector m_SpotLightOrigin; // 0x14
	QAngle m_SpotLightAngles; // 0x20
	Vector m_ShadowDirection; // 0x2c
	Vector m_AmbientDirection; // 0x38
	Vector m_SpecularDirection; // 0x44
	Vector m_InspectorSpecularDirection; // 0x50
	float m_flSpecularPower; // 0x5c
	float m_flSpecularIndependence; // 0x60
	Color m_SpecularColor; // 0x64
	bool m_bStartDisabled; // 0x68
	bool m_bEnabled; // 0x69
	Color m_LightColor; // 0x6a
	Color m_HeroLightColor; // 0x6e
	Color m_AOGradientBottomColor; // 0x72
	bool m_bEnableRainFx; // 0x76
	Color m_AmbientColor1; // 0x77
	Color m_AmbientColor2; // 0x7b
	Color m_AmbientColor3; // 0x7f
	float m_flSunDistance; // 0x84
	float m_flFOV; // 0x88
	float m_flNearZ; // 0x8c
	float m_flFarZ; // 0x90
	bool m_bEnableShadows; // 0x94
	bool m_bOldEnableShadows; // 0x95
	bool m_bBackgroundClearNotRequired; // 0x96
	float m_flCloudScale; // 0x98
	float m_flCloud1Speed; // 0x9c
	float m_flCloud1Direction; // 0xa0
	float m_flCloud2Speed; // 0xa4
	float m_flCloud2Direction; // 0xa8
	float m_flAmbientScale1; // 0xac
	float m_flAmbientScale2; // 0xb0
	float m_flGroundScale; // 0xb4
	float m_flLightScale; // 0xb8
	float m_flHeroLightScale; // 0xbc
	float m_flRainInnerRadius; // 0xc0
	float m_flRainOuterRadius; // 0xc4
	float m_flRainInnerAmount; // 0xc8
	float m_flFoWDarkness; // 0xcc
	bool m_bEnableSeparateSkyboxFog; // 0xd0
	Vector m_vFowColor; // 0xd4
	Vector m_ViewOrigin; // 0xe0
	QAngle m_ViewAngles; // 0xec
	float m_flViewFoV; // 0xf8
	Vector[8] m_WorldPoints; // 0xfc
	Vector2D m_vFogOffsetLayer0; // 0x4e8
	Vector2D m_vFogOffsetLayer1; // 0x4f0
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4f8
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4fc
	float m_fSmoothedAmount; // 0x500
	float m_fSlowSmoothedAmount; // 0x504
};

// Aligment: 9
// Size: 400
class CDeferredLightBase
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	Color m_LightColor; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightSize; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	float m_flSpotFoV; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_vLightDirection; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartFalloff; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDistanceFalloff; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nFlags; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_ProjectedTextureName; // 0x38
};

// Aligment: 107
// Size: 1016
class CLightInfoBase
{
public:
	Vector2D m_origin2D; // 0x10
	Color[2] m_Color; // 0x18
	float32[2] m_LightScale; // 0x20
	Color[2] m_HeroColor; // 0x28
	float32[2] m_HeroLightScale; // 0x30
	Color[2] m_AOGradientBottomColor; // 0x38
	bool m_bEnableRainFx; // 0x40
	float m_flRainInnerRadius; // 0x44
	float m_flRainOuterRadius; // 0x48
	float m_flRainInnerAmount; // 0x4c
	Color[2] m_AmbientColor; // 0x50
	float32[2] m_AmbientScale; // 0x58
	Color[2] m_ShadowColor; // 0x60
	Color[2] m_ShadowSecondaryColor; // 0x68
	float32[2] m_ShadowScale; // 0x70
	float32[2] m_ShadowGroundScale; // 0x78
	Color[2] m_SpecularColor; // 0x80
	float32[2] m_flSpecularPower; // 0x88
	float32[2] m_flSpecularIndependence; // 0x90
	Vector[2] m_SpecularDirection; // 0x98
	Vector[2] m_InspectorSpecularDirection; // 0xb0
	Vector[2] m_LightDirection; // 0xc8
	Vector[2] m_AmbientDirection; // 0xe0
	Color[2] m_FogColor; // 0xf8
	float32[2] m_FogStart; // 0x100
	float32[2] m_FogEnd; // 0x108
	float32[2] m_HeightFogValue; // 0x110
	Color[2] m_HeightFogColor; // 0x118
	float32[2] m_FoWDarkness; // 0x120
	float32[2] m_FoWColorR; // 0x128
	float32[2] m_FoWColorG; // 0x130
	float32[2] m_FoWColorB; // 0x138
	Color[2] m_InspectorViewFogColor; // 0x140
	QAngle m_windAngle; // 0x148
	float32[2] m_flWindAmount; // 0x154
	float m_flMinWind; // 0x15c
	float m_flMaxWind; // 0x160
	float m_flMinGust; // 0x164
	float m_flMaxGust; // 0x168
	float m_flMinGustDelay; // 0x16c
	float m_flMaxGustDelay; // 0x170
	float m_flGustDuration; // 0x174
	float m_flGustDirChange; // 0x178
	QAngle[2] m_skyboxAngle; // 0x17c
	CStrongHandle< InfoForResourceTypeIMaterial2 >[2] m_hSkyboxMaterial; // 0x198
	Color[2] m_vSkyboxTintColor; // 0x1a8
	uint8_t m_nSkyboxFogType; // 0x1b0
	float m_flSkyboxAngularFogMaxEnd; // 0x1b4
	float m_flSkyboxAngularFogMaxStart; // 0x1b8
	float m_flSkyboxAngularFogMinStart; // 0x1bc
	float m_flSkyboxAngularFogMinEnd; // 0x1c0
	Vector4D m_vAngularParams; // 0x1c4
	Color[2] m_vHeightFogColor; // 0x1d4
	float m_flFogMaxZ; // 0x1dc
	float32[2] m_flFogDensity; // 0x1e0
	float m_flFogFalloff; // 0x1e8
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture0; // 0x1f0
	float m_flFogLayer0Rotation; // 0x1f8
	float m_flFogLayer0Scale; // 0x1fc
	float32[2] m_flFoglayer0ScrollU; // 0x200
	float32[2] m_flFoglayer0ScrollV; // 0x208
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture1; // 0x210
	float m_flFogLayer1Rotation; // 0x218
	float m_flFogLayer1Scale; // 0x21c
	float32[2] m_flFoglayer1ScrollU; // 0x220
	float32[2] m_flFoglayer1ScrollV; // 0x228
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTextureOpacity; // 0x230
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hWaterFlowMapTexture; // 0x238
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogFlowMapTexture; // 0x240
	float m_flFogExclusionInnerRadius; // 0x248
	float m_flFogExclusionHeightBias; // 0x24c
	float m_flCausticSpeedScale; // 0x254
	float m_flCausticAmplitudeScale; // 0x258
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hColorWarp; // 0x260
	float m_flColorWarpBlendToFull; // 0x268
	float m_fInnerRadius; // 0x26c
	float m_fOuterRadius; // 0x270
	float m_flLightning_specular_pow_scale_min; // 0x274
	float m_flLightning_specular_pow_scale_max; // 0x278
	Color m_lightningColor; // 0x27c
	float m_flLightningIntensityMin; // 0x280
	float m_flLightningIntensityMax; // 0x284
	float m_flLightningElevation; // 0x288
	float m_flLightningSpecularIntensity; // 0x28c
	float m_flFarZOverride; // 0x290
	float m_flAmbientShadowAmount; // 0x294
	int32_t m_nWeatherType; // 0x298
	CUtlString m_WeatherEffect; // 0x2a0
	float m_flLightning_period_min; // 0x2a8
	float m_flLightning_period_max; // 0x2ac
	float m_flLightning_duration_min; // 0x2b0
	float m_flLightning_duration_max; // 0x2b4
	float m_flLightning_fluctuation_min; // 0x2b8
	float m_flLightning_fluctuation_max; // 0x2bc
	char[260] m_pszLightningSound; // 0x2c0
	float m_flNextLightningStartTime; // 0x3c4
	float m_flNextLightningEndTime; // 0x3c8
	float m_flLightningFluctuationTimeStart; // 0x3cc
	float m_flLightningFluctuationTimeEnd; // 0x3d0
	float m_flLightningNumFluctuations; // 0x3d4
	float m_flNextLightningSoundTime; // 0x3d8
	bool m_bPlayLightingSound; // 0x3dc
	float m_flLightningEventMagnitude; // 0x3e0
	float m_flLightningScale; // 0x3e4
	float m_flLightningFluctuation; // 0x3e8
	float m_flLightningAngle; // 0x3ec
	float m_flLightningEventPercentage; // 0x3f0
};

// Aligment: 1
// Size: 24
struct GCConsumedIDs_t
{
public:
	CUtlVector< item_definition_index_t > m_vecIDs; // 0x0
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
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 0
// Size: 56
class C_GameEntity : public CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 21
// Size: 1104
class C_BaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x58
	// MNetworkDisable
	float m_flGroundSpeed; // 0x5c
	// MNetworkDisable
	float m_flLastEventCycle; // 0x60
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x64
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x68
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x80
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x84
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0xe4
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0xe5
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0xe6
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0xe7
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0xec
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0xf0
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0xf4
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0xf8
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0xfc
	// MNetworkDisable
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x128
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x3a0
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x3a4
};

// Aligment: 1
// Size: 1208
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x450
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
// Size: 448
class CBodyComponentPoint : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1a0
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 1312
class CBodyComponentSkeletonInstance : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x500
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

// Aligment: 60
// Size: 400
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
	CUtlStringToken m_lightCookie; // 0xa0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xa4
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	int32_t m_nCastShadows; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xac
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xb0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xb4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xbc
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightWidth; // 0xc0
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightHeight; // 0xc4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xc8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xd0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xd8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xdc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xe0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xe4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0xec
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakeLightIndex; // 0xf8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBakeLightIndexScale; // 0xfc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesIndexedBakedLighting; // 0x100
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x101
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nPriority; // 0x104
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x108
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x110
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x114
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x118
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x11c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x120
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x124
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x128
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x129
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x12c
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x138
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x144
	// MNetworkEnable
	Vector m_vPrecomputePosition; // 0x148
	// MNetworkEnable
	Vector m_vPrecomputeDirection; // 0x154
	// MNetworkEnable
	Vector m_vPrecomputeUp; // 0x160
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x16c
	// MNetworkEnable
	float m_flFogContributionStength; // 0x170
	// MNetworkEnable
	float m_flNearClipPlane; // 0x174
	// MNetworkEnable
	Color m_SkyColor; // 0x178
	// MNetworkEnable
	float m_flSkyIntensity; // 0x17c
	// MNetworkEnable
	bool m_bLowerHemisphereIsBlack; // 0x180
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x181
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x185
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flLightStyleStartTime; // 0x188
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 5
// Size: 168
class CRenderComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10
	bool m_bIsRenderingWithViewModels; // 0x40
	uint32_t m_nSplitscreenFlags; // 0x44
	bool m_bEnableRendering; // 0x50
	bool m_bInterpolationReadyToDraw; // 0xa0
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 85
// Size: 1240
class C_BaseEntity : public C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "96"
	CBodyComponent* m_CBodyComponent; // 0x48
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x50
	CUtlString m_sPredictionCopyComment; // 0x268
	int32_t m_nLastThinkTick; // 0x280
	CGameSceneNode* m_pGameSceneNode; // 0x288
	CRenderComponent* m_pRenderComponent; // 0x290
	CCollisionProperty* m_pCollision; // 0x298
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x2a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "64"
	int32_t m_iHealth; // 0x2a4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "64"
	uint8_t m_lifeState; // 0x2a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	DamageOptions_t m_takedamage; // 0x2a9
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x2aa
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x2ac
	int32_t m_nNoInterpolationTick; // 0x2b0
	float m_flProxyRandomValue; // 0x2b4
	int32_t m_iEFlags; // 0x2b8
	uint8_t m_nWaterType; // 0x2bc
	bool m_bInterpolateEvenWithNoModel; // 0x2bd
	bool m_bPredictionEligible; // 0x2be
	int32_t m_nSimulationTick; // 0x2c0
	int32_t m_iCurrentThinkContext; // 0x2c4
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x2c8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; // 0x2e0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x2e4
	uint8_t m_nSceneObjectOverrideFlags; // 0x2e8
	bool m_bHasSuccessfullyInterpolated; // 0x2e9
	bool m_bHasAddedVarsToInterpolation; // 0x2ea
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x2eb
	int32[2] m_nInterpolationLatchDirtyFlags; // 0x2ec
	uint16[10] m_ListEntry; // 0x2f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flCreateTime; // 0x308
	float m_flSpeed; // 0x30c
	int16_t m_EntClientFlags; // 0x310
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x312
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x313
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x314
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nNextThinkTick; // 0x318
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	// MNetworkSerializer "CropFlagsToPlayerFlagBitsLength"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x31c
	// MNetworkEnable
	Vector m_vecAbsVelocity; // 0x320
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "64"
	CNetworkVelocityVector m_vecVelocity; // 0x330
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x398
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x3a4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x3a8
	// MNetworkEnable
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x3ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x3ad
	// MNetworkEnable
	// MNetworkEnable
	gender_t m_Gender; // 0x3ae
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkUserGroup "Player"
	uint8_t m_nWaterLevel; // 0x3af
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x3b0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x3b4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "4"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x3b8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x3bc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; // 0x3c0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x3c1
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nMinCPULevel; // 0x3c2
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nMaxCPULevel; // 0x3c3
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint8_t m_nMinGPULevel; // 0x3c4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint8_t m_nMaxGPULevel; // 0x3c5
	// MNetworkEnable
	// MNetworkEnable
	float m_flNavIgnoreUntilTime; // 0x3c8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_iTextureFrameIndex; // 0x3cc
	CBitVec< 1 > m_ShadowBits; // 0x3d0
	float m_flFirstReceivedTime; // 0x3d4
	float m_flLastMessageTime; // 0x3d8
	uint16_t m_hThink; // 0x3dc
	uint8_t m_fBBoxVisFlags; // 0x3e8
	bool m_bIsValidIKAttachment; // 0x3e9
	bool m_bPredictable; // 0x3ea
	bool m_bRenderWithViewModels; // 0x3eb
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x3ec
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x3f0
	CParticleProperty m_Particles; // 0x3f8
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x420
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x438
	int32_t m_nNextScriptVarRecordID; // 0x468
	int32_t m_nAnimGraphNetVarCreationCommandNumber; // 0x478
	QAngle m_vecAngVelocity; // 0x47c
	float m_flGroundChangeTime; // 0x488
	float m_flGravity; // 0x48c
	int32_t m_DataChangeEventRef; // 0x490
	CUtlVector< CEntityHandle > m_dependencies; // 0x498
	int32_t m_nCreationTick; // 0x4b0
	bool m_bIsDACNPC; // 0x4c8
	bool m_bIsNPC; // 0x4c9
	bool m_bAnimTimeChanged; // 0x4ca
	bool m_bSimulationTimeChanged; // 0x4cb
	bool m_bIsBlurred; // 0x4cc
public:
	static bool &Get_sm_bAccurateTriggerBboxChecks() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[0]->m_instance); }
	static bool &Get_sm_bDisableTouchFuncs() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[1]->m_instance); }
	static bool &Get_m_bAllowPrecache() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[2]->m_instance); }
	static LatchDirtyPermission_t &Get_s_nLatchPermissions() { return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[3]->m_instance); }
	static int32_t &Get_m_nPredictionRandomSeed() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[4]->m_instance); }
	static C_BasePlayer* &Get_m_pPredictionPlayer() { return *reinterpret_cast<C_BasePlayer**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[5]->m_instance); }
	static bool &Get_s_bAbsQueriesValid() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[6]->m_instance); }
	static bool &Get_s_bAbsRecomputationEnabled() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[7]->m_instance); }
	static bool &Get_s_bComputingInterpolatedValues() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[8]->m_instance); }
	static bool &Get_s_bPreventingSetAnimRunAnimEvents() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[9]->m_instance); }
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects() { return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[10]->m_instance); }
};

// Aligment: 0
// Size: 1240
class CLogicalEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 18
// Size: 1576
class C_ColorCorrection : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecOrigin; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_MinFalloff; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_MaxFalloff; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInDuration; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxWeight; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flCurWeight; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_netlookupFilename; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x600
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x601
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSide; // 0x602
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExclusive; // 0x603
	bool[1] m_bEnabledOnClient; // 0x604
	float32[1] m_flCurWeightOnClient; // 0x608
	bool[1] m_bFadingIn; // 0x60c
	float32[1] m_flFadeStartWeight; // 0x610
	float32[1] m_flFadeStartTime; // 0x614
	float32[1] m_flFadeDuration; // 0x618
};

// Aligment: 1
// Size: 1816
class C_EnvWindClientside : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_CEnvWindShared m_EnvWindShared; // 0x4d8
};

// Aligment: 3
// Size: 1288
class C_EntityFlame : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x4d8
	CHandle< C_BaseEntity > m_hOldAttached; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCheapEffect; // 0x504
};

// Aligment: 10
// Size: 1280
class C_PostProcessController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastStrength; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastEdgeStrength; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteStart; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteEnd; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteBlurStrength; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeToBlackStrength; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_fGrainStrength; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	float m_fTopVignetteStrength; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeTime; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x4fc
};

// Aligment: 11
// Size: 2456
class C_PlayerResource : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge[34] m_szName; // 0x4f0
	Color[32] m_Colors; // 0x600
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32[34] m_iPing; // 0x680
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	int32[34] m_iScore; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int32[34] m_iDeaths; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectedFlagsChanged"
	bool[34] m_bConnected; // 0x818
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32[34] m_iTeam; // 0x83c
	// MNetworkEnable
	// MNetworkEnable
	bool[34] m_bAlive; // 0x8c4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32[34] m_iHealth; // 0x8e8
	bool[34] m_bIsFakePlayer; // 0x970
	int32_t m_nEventPlayerInfo; // 0x994
};

// Aligment: 4
// Size: 1392
class C_SkyCamera : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x560
	bool m_bUseAngles; // 0x564
	C_SkyCamera* m_pNext; // 0x568
};

// Aligment: 0
// Size: 1264
class C_TintController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 1416
class C_Team : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BasePlayer > > m_aPlayers; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iScore; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iRoundsWon; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	char[129] m_szTeamname; // 0x4f8
	int32_t m_iDeaths; // 0x57c
	int32_t m_iPing; // 0x580
	int32_t m_iPacketloss; // 0x584
};

// Aligment: 0
// Size: 1240
class C_TriggerCamera : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 14
// Size: 48
class CClientAlphaProperty : public IClientAlphaProperty
{
public:
	uint8_t m_nRenderFX; // 0x10
	uint8_t m_nRenderMode; // 0x11
	bitfield:1 m_bAlphaOverride; // 0x0
	bitfield:1 m_bShadowAlphaOverride; // 0x0
	bitfield:1 m_nDistanceFadeMode; // 0x0
	bitfield:4 m_nReserved; // 0x0
	uint8_t m_nAlpha; // 0x13
	uint16_t m_nDesyncOffset; // 0x14
	uint16_t m_nReserved2; // 0x16
	uint16_t m_nDistFadeStart; // 0x18
	uint16_t m_nDistFadeEnd; // 0x1a
	float m_flFadeScale; // 0x1c
	float m_flRenderFxStartTime; // 0x20
	float m_flRenderFxDuration; // 0x24
};

// Aligment: 5
// Size: 1296
class CViewAngleAnimation : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flAnimStartTime; // 0x4d8
	bool m_bFinished; // 0x4dc
	CUtlVector< CViewAngleKeyFrame* > m_KeyFrames; // 0x4e0
	QAngle m_vecBaseAngles; // 0x4f8
	int32_t m_iFlags; // 0x504
};

// Aligment: 2
// Size: 1248
class C_EnvDetailController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4dc
};

// Aligment: 0
// Size: 1240
class C_GameRulesProxy : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 15
// Size: 1328
class C_PoseController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoseValueParity; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	float m_fPoseValue; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fInterpolationDuration; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInterpolationWrap; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fCycleFrequency; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	PoseController_FModType_t m_nFModType; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "1"
	float m_fFModTimeOffset; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fFModRate; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fFModAmplitude; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity >[4] m_hProps; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8[4] m_chPoseIndex; // 0x50c
	bool m_bOldPoseValueParity; // 0x510
	float m_fCurrentPoseValue; // 0x514
	float m_fCurrentFMod; // 0x518
	CInterpolatedValue m_PoseTransitionValue; // 0x51c
};

// Aligment: 17
// Size: 216
class C_EconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31
	bool m_bIsStoreItem; // 0x32
	bool m_bIsTradeItem; // 0x33
	bool m_bHasComputedAttachedParticles; // 0x34
	bool m_bHasAttachedParticles; // 0x35
	int32_t m_iEntityQuantity; // 0x38
	uint8_t m_unClientFlags; // 0x3c
	eEconItemOrigin m_unOverrideOrigin; // 0x40
	char* m_pszGrayedOutReason; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x58
};

// Aligment: 1
// Size: 1248
class C_DACGameRulesProxy : public C_GameRulesProxy, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	C_SingleplayRules* m_pGameRules; // 0x4d8
};

// Aligment: 0
// Size: 1240
class C_DacShadowmapBoundary : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2648
class C_GlobalLight : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	uint16_t m_WindClothForceHandle; // 0xa30
public:
	static C_GlobalLight*[5] &Get_sm_pGlobalLight() { return *reinterpret_cast<C_GlobalLight*[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[0]->m_instance); }
	static CUtlStringToken[5] &Get_sm_pSkyboxSlots() { return *reinterpret_cast<CUtlStringToken[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[1]->m_instance); }
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights() { return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[2]->m_instance); }
};

// Aligment: 0
// Size: 2256
class C_DOTA_LightInfo : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 15
// Size: 1560
class C_EnvCubemap : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5b8
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x5c0
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x5c4
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x5c8
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x5d4
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x5e0
	// MNetworkEnable
	bool m_bMoveable; // 0x5e8
	// MNetworkEnable
	int32_t m_nHandshake; // 0x5ec
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x5f0
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x5f4
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x5f8
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x5fc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x600
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x601
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x610
};

// Aligment: 0
// Size: 1560
class C_EnvCubemapBox : public C_EnvCubemap, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1288
class C_EnvCubemapFog : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flEndDistance; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDistance; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flLODBias; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f5
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4f8
	bool m_bFirstTime; // 0x500
};

// Aligment: 12
// Size: 5368
class C_EnvLightProbeVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1498
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x14a0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14a8
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14b0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14bc
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x14c8
	// MNetworkEnable
	bool m_bMoveable; // 0x14d0
	// MNetworkEnable
	int32_t m_nHandshake; // 0x14d4
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x14d8
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x14dc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x14e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x14f1
};

// Aligment: 18
// Size: 5632
class C_EnvCombinedLightProbeVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x1578
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x157c
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1580
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x1588
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1590
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1598
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x15a0
	// MNetworkEnable
	Vector m_vBoxMins; // 0x15a8
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x15b4
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x15c0
	// MNetworkEnable
	bool m_bMoveable; // 0x15c8
	// MNetworkEnable
	int32_t m_nHandshake; // 0x15cc
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x15d0
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x15d4
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x15d8
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x15dc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x15e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x15f9
};

// Aligment: 15
// Size: 8224
class C_EnvTimeOfDay2 : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnSunrise; // 0x4d8
	CEntityIOOutput m_OnSunset; // 0x500
	CEntityIOOutput m_OnDayBegin; // 0x528
	CEntityIOOutput m_OnDayEnd; // 0x550
	CEntityIOOutput m_OnNightBegin; // 0x578
	CEntityIOOutput m_OnNightEnd; // 0x5a0
	CEntityIOOutput m_OnDuskBegin; // 0x5c8
	CEntityIOOutput m_OnDuskEnd; // 0x5f0
	CEntityIOOutput m_OnDawnBegin; // 0x618
	CEntityIOOutput m_OnDawnEnd; // 0x640
	CEntityIOOutput m_OnMidDay; // 0x668
	CEntityIOOutput m_OnMidNight; // 0x690
	// MNetworkEnable
	// MNetworkEnable
	CTimeOfDayDynamicKeys m_DynamicKeys; // 0x6b8
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CTimeOfDayDynamicValues > m_DynamicValues; // 0x740
	// MNetworkEnable
	// MNetworkEnable
	float m_flTimeLastUpdate; // 0x1150
public:
	static C_EnvTimeOfDay2* &Get_sm_pTimeOfDay() { return *reinterpret_cast<C_EnvTimeOfDay2**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EnvTimeOfDay2")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_s_kDynamicValuesArraySize() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EnvTimeOfDay2")->m_static_fiels[1]->m_instance); }
};

// Aligment: 7
// Size: 1272
class C_TonemapController2 : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flRate; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x4f0
};

// Aligment: 28
// Size: 1368
class C_EnvVolumetricFogController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flScattering; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnisotropy; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flDrawDistance; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisoTime; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScatterTime; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistanceTime; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScattering; // 0x52c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultScattering; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x53c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x541
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMaster; // 0x542
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x550
	bool m_bFirstTime; // 0x554
};

// Aligment: 7
// Size: 1288
class C_EnvVolumetricFogVolume : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flStrength; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFalloffExponent; // 0x500
};

// Aligment: 3
// Size: 1344
class C_FogController : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t m_fog; // 0x4d8
	bool m_bUseAngles; // 0x538
	int32_t m_iChangedVariables; // 0x53c
};

// Aligment: 0
// Size: 1240
class C_PointEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 28
// Size: 1352
class C_PointCamera : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_FOV; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_Resolution; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFogEnable; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	Color m_FogColor; // 0x4e1
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStart; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEnd; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x4f5
	// MNetworkEnable
	// MNetworkEnable
	float m_flAspectRatio; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoSky; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	float m_fBrightness; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flZFar; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	float m_flZNear; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	float m_flOverrideShadowFarZ; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDofEnabled; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	float m_flScreenWindowScale; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStartMultiplier; // 0x52c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEndMultiplier; // 0x530
	float m_TargetFOV; // 0x534
	float m_DegreesPerSecond; // 0x538
	bool m_bIsOn; // 0x53c
	C_PointCamera* m_pNext; // 0x540
};

// Aligment: 5
// Size: 1264
class C_EnvClock : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hHourHand; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hMinuteHand; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hSecondHand; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartGameTime; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartClockSeconds; // 0x4e8
};

// Aligment: 8
// Size: 1312
class CInfoWorldLayer : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x511
	bool m_bCreateAsChildSpawnGroup; // 0x512
	uint32_t m_hLayerSpawnGroup; // 0x514
	bool m_bWorldLayerActuallyVisible; // 0x518
};

// Aligment: 3
// Size: 1264
class C_InfoVisibilityBox : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nMode; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x4ec
};

// Aligment: 2
// Size: 2448
class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingController m_animationController; // 0x520
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x970
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 2544
class C_BodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingOverlayController m_animationController; // 0x520
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x9d8
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 1344
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x520
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[1]->m_instance); }
};

// Aligment: 27
// Size: 1768
class C_BaseModelEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4d8
	int32_t m_nLastAddDecal; // 0x4e0
	int32_t m_nDecalsAdded; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x4e9
	bool m_bAllowFadeInView; // 0x4ea
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x4eb
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlStringToken[4] m_RenderAttributeIDs; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	Vector4D[4] m_RenderAttributeValues; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x544
	// MNetworkEnable
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x5f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x638
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMinDist; // 0x63c
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMaxDist; // 0x640
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeScale; // 0x644
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowStrength; // 0x648
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x64c
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x650
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x65c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x668
	// MNetworkEnable
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x66c
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x670
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x6d8
	Color m_ClientOverrideTint; // 0x6e0
	bool m_bUseClientOverrideTint; // 0x6e4
};

// Aligment: 0
// Size: 1768
class CServerOnlyModelEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class C_ModelPointEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 1328
class CLogicRelay : public CLogicalEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4d8
	CEntityIOOutput m_OnSpawn; // 0x500
	bool m_bDisabled; // 0x528
	bool m_bWaitForRefire; // 0x529
	bool m_bTriggerOnce; // 0x52a
	bool m_bFastRetrigger; // 0x52b
	bool m_bPassthoughCaller; // 0x52c
};

// Aligment: 13
// Size: 2936
class C_ParticleSystem : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_szSnapshotFileName; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x7ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	int32_t m_nStopType; // 0x7f0
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x7f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x800
	// MNetworkEnable
	// MNetworkEnable
	Vector[4] m_vServerControlPoints; // 0x804
	// MNetworkEnable
	// MNetworkEnable
	uint8[4] m_iServerControlPointAssignments; // 0x834
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity >[64] m_hControlPointEnts; // 0x838
	bool m_bNoSave; // 0x938
	bool m_bStartActive; // 0x939
	CUtlSymbolLarge m_iszEffectName; // 0x940
	CUtlSymbolLarge[64] m_iszControlPointNames; // 0x948
	bool m_bOldActive; // 0xb68
};

// Aligment: 16
// Size: 1504
class C_PathParticleRope : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartActive; // 0x4d8
	float m_flMaxSimulationTime; // 0x4dc
	CUtlSymbolLarge m_iszEffectName; // 0x4e0
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flParticleSpacing; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	// MNetworkBitCount "3"
	int32_t m_nEffectState; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Position; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentIn; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentOut; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Color; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CUtlVector< bool > m_PathNodes_PinEnabled; // 0x580
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< float32 > m_PathNodes_RadiusScale; // 0x598
};

// Aligment: 5
// Size: 1264
class CInfoDynamicShadowHint : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x4d8
	float m_flRange; // 0x4dc
	int32_t m_nImportance; // 0x4e0
	int32_t m_nLightChoice; // 0x4e4
	CHandle< C_BaseEntity > m_hLight; // 0x4e8
public:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints() { return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 1288
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint, C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vBoxMins; // 0x4f0
	Vector m_vBoxMaxs; // 0x4fc
};

// Aligment: 7
// Size: 1808
class C_DynamicLight : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Flags; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_LightStyle; // 0x6e9
	// MNetworkEnable
	// MNetworkEnable
	float m_Radius; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_Exponent; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_InnerAngle; // 0x6f4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_OuterAngle; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	float m_SpotRadius; // 0x6fc
};

// Aligment: 9
// Size: 1384
class C_EnvScreenOverlay : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge[10] m_iszOverlayNames; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "63"
	float32[10] m_flOverlayTimes; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int32_t m_iDesiredOverlay; // 0x554
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsActive; // 0x558
	bool m_bWasActive; // 0x559
	int32_t m_iCachedDesiredOverlay; // 0x55c
	int32_t m_iCurrentOverlay; // 0x560
	float m_flCurrentOverlayTime; // 0x564
};

// Aligment: 2
// Size: 1248
class C_EnvScreenEffect : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flDuration; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	ScreenEffectType_t m_nType; // 0x4dc
};

// Aligment: 7
// Size: 1272
class C_EnvDOFController : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDOFEnabled; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurDepth; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearFocusDepth; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarFocusDepth; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurDepth; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurRadius; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurRadius; // 0x4f0
};

// Aligment: 4
// Size: 1792
class C_FuncAreaPortalWindow : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDist; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flTranslucencyLimit; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iBackgroundModelIndex; // 0x6f8
};

// Aligment: 2
// Size: 1776
class C_Func_LOD : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	uint32_t m_nDisappearMinDist; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	uint32_t m_nDisappearMaxDist; // 0x6ec
};

// Aligment: 15
// Size: 2064
class C_MaterialModifyControl : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[255] m_szMaterialName; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	char[255] m_szMaterialVar; // 0x5d7
	// MNetworkEnable
	// MNetworkEnable
	char[255] m_szMaterialVarValue; // 0x6d6
	bool m_bHasNewAnimationCommands; // 0x7e0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iFrameStart; // 0x7e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iFrameEnd; // 0x7e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWrap; // 0x7ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flFramerate; // 0x7f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNewAnimCommandsSemaphore; // 0x7f4
	bool m_bOldAnimCommandsSemaphore; // 0x7f5
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpStartValue; // 0x7f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpEndValue; // 0x7fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpTransitionTime; // 0x800
	float m_flAnimationStartTime; // 0x804
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	MaterialModifyMode_t m_nModifyMode; // 0x808
};

// Aligment: 1
// Size: 1248
class C_RagdollManager : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	int8_t m_iCurrentMaxRagdollCount; // 0x4d8
};

// Aligment: 5
// Size: 1264
class C_ShadowControl : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_shadowDirection; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	Color m_shadowColor; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowMaxDist; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableShadows; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableLocalLightShadows; // 0x4ed
};

// Aligment: 4
// Size: 1256
class C_PointHMDAnchor : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flEnableTime; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nPlayerIndex; // 0x4e0
	int32_t m_nLastSimulateFrame; // 0x4e4
};

// Aligment: 0
// Size: 1256
class C_PointHMDAnchorOverride : public C_PointHMDAnchor, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1256
class CHapticRelay : public CLogicalEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flFrequency; // 0x4d8
	float m_flAmplitude; // 0x4dc
	float m_flDuration; // 0x4e0
};

// Aligment: 26
// Size: 1368
class C_PointValueRemapper : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4d8
	bool m_bDisabledOld; // 0x4d9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4da
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flEngageDistance; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMomentumModifier; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	float m_flSnapValue; // 0x524
	float m_flCurrentMomentum; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x52c
	float m_flRatchetOffset; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	float m_flInputOffset; // 0x534
	eLiteralHandType m_nLiteralHand; // 0x538
	bool m_bEngaged; // 0x53c
	bool m_bFirstUpdate; // 0x53d
	float m_flPreviousValue; // 0x540
	float m_flPreviousUpdateTickTime; // 0x544
	Vector m_vecPreviousTestPoint; // 0x548
};

// Aligment: 4
// Size: 1272
class C_SoundOpvarSetPointEntity : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x4f0
};

// Aligment: 0
// Size: 1272
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1272
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity, C_SoundOpvarSetPointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 12
// Size: 2400
class C_PointWorldText : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceRecreateNextUpdate; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	char[64] m_FontName; // 0x900
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x940
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFullbright; // 0x941
	// MNetworkEnable
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x944
	// MNetworkEnable
	// MNetworkEnable
	float m_flFontSize; // 0x948
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x94c
	// MNetworkEnable
	// MNetworkEnable
	Color m_Color; // 0x950
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x954
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x958
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x95c
};

// Aligment: 1
// Size: 1816
class C_EnvWind : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	C_CEnvWindShared m_EnvWindShared; // 0x4d8
};

// Aligment: 0
// Size: 1768
class C_BaseToggle : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1784
class C_BaseButton : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_usable; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x6f0
};

// Aligment: 2
// Size: 1800
class C_ButtonTimed : public C_BaseButton, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_sUseString; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_sUseSubString; // 0x700
};

// Aligment: 0
// Size: 1768
class C_PrecipitationBlocker : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1928
class CClient_Precipitation : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	PrecipitationType_t m_nPrecipType; // 0x6e8
	float m_flDensity; // 0x6ec
	float m_flParticleInnerDist; // 0x6f8
	char* m_pParticleInnerNearDef; // 0x700
	char* m_pParticleInnerFarDef; // 0x708
	char* m_pParticleOuterDef; // 0x710
	TimedEvent[1] m_tParticlePrecipTraceTimer; // 0x778
	bool[1] m_bActiveParticlePrecipEmitter; // 0x780
	bool m_bParticlePrecipInitialized; // 0x781
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x782
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x784
};

// Aligment: 13
// Size: 1840
class C_EntityDissolve : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x6f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInLength; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutStart; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutLength; // 0x708
	float m_flNextSparkTime; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	EntityDisolveType_t m_nDissolveType; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nMagnitude; // 0x720
	bool m_bCoreExplode; // 0x724
	bool m_bLinkedToServerEnt; // 0x725
};

// Aligment: 0
// Size: 2264
class C_EnvProjectedTexture : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class C_FuncBrush : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1800
class C_FuncCombineBarrier : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_eBarrierState; // 0x700
};

// Aligment: 3
// Size: 1792
class C_FuncElectrifiedVolume : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x6f8
};

// Aligment: 0
// Size: 1768
class C_FuncOccluder : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class C_FuncRotating : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class C_Breakable : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class C_PhysBox : public C_Breakable, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 41
// Size: 2768
class C_RopeKeyframe : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x6e8
	int32_t m_nLinksTouchingSomething; // 0x6ec
	bool m_bApplyWind; // 0x6f0
	int32_t m_fPrevLockedPoints; // 0x6f4
	int32_t m_iForcePointMoveCounter; // 0x6f8
	bool[2] m_bPrevEndPointPos; // 0x6fc
	Vector[2] m_vPrevEndPointPos; // 0x700
	float m_flCurScroll; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	float m_flScrollSpeed; // 0x71c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_RopeFlags; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x728
	Vector[10] m_LightValues; // 0x9a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_nSegments; // 0xa18
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xa1c
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xa20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iStartAttachment; // 0xa24
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iEndAttachment; // 0xa26
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Subdiv; // 0xa28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xa2a
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xa2c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.1"
	// MNetworkMaxValue "10"
	float m_TextureScale; // 0xa30
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_fLockedPoints; // 0xa34
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_nChangeCount; // 0xa35
	// MNetworkEnable
	// MNetworkEnable
	float m_Width; // 0xa38
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xa40
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xa50
	int32_t m_TextureHeight; // 0xa58
	Vector m_vecImpulse; // 0xa5c
	Vector m_vecPreviousImpulse; // 0xa68
	float m_flCurrentGustTimer; // 0xa74
	float m_flCurrentGustLifetime; // 0xa78
	float m_flTimeToNextGust; // 0xa7c
	Vector m_vWindDir; // 0xa80
	Vector m_vColorMod; // 0xa8c
	Vector[2] m_vCachedEndPointAttachmentPos; // 0xa98
	QAngle[2] m_vCachedEndPointAttachmentAngle; // 0xab0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xac8
	bitfield:1 m_bEndPointAttachmentPositionsDirty; // 0x0
	bitfield:1 m_bEndPointAttachmentAnglesDirty; // 0x0
	bitfield:1 m_bNewDataThisFrame; // 0x0
	bitfield:1 m_bPhysicsInitted; // 0x0
};

// Aligment: 12
// Size: 1336
class C_SceneEntity : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPaused; // 0x4e1
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMultiplayer; // 0x4e2
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutogenerated; // 0x4e3
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	uint16_t m_nSceneStringIndex; // 0x4e8
	bool m_bClientOnly; // 0x4ea
	CHandle< C_BaseFlex > m_hOwner; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CUtlVector< CHandle< C_BaseFlex > > m_hActorList; // 0x4f0
	bool m_bWasPlaying; // 0x508
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x518
	float m_flCurrentTime; // 0x530
};

// Aligment: 2
// Size: 1776
class C_BaseTrigger : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x6e9
};

// Aligment: 0
// Size: 1768
class C_TriggerVolume : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1776
class C_TriggerLerpObject : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 24
// Size: 1960
class C_Beam : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25"
	// MNetworkMaxValue "25"
	// MNetworkEncodeFlags
	float m_flFrameRate; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x6ec
	float m_flFireTime; // 0x6f0
	float m_flDamage; // 0x6f4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8_t m_nNumBeamEnts; // 0x6f8
	int32_t m_queryHandleHalo; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x730
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	uint32_t m_nBeamFlags; // 0x734
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity >[10] m_hAttachEntity; // 0x738
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8[10] m_nAttachIndex; // 0x760
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fWidth; // 0x76c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fEndWidth; // 0x770
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeLength; // 0x774
	// MNetworkEnable
	// MNetworkEnable
	float m_fHaloScale; // 0x778
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_fAmplitude; // 0x77c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_fStartFrame; // 0x780
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "100"
	float m_fSpeed; // 0x784
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	float m_flFrame; // 0x788
	// MNetworkEnable
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x78c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTurnedOff; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEndPos; // 0x794
	CHandle< C_BaseEntity > m_hEndEntity; // 0x7a0
};

// Aligment: 24
// Size: 2072
class C_Sprite : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nAttachment; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "60"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flFrame; // 0x714
	float m_flDieTime; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nBrightness; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x72c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x730
	// MNetworkEnable
	// MNetworkEnable
	float m_flScaleDuration; // 0x734
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x738
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x73c
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x740
	float m_flLastTime; // 0x744
	float m_flMaxFrame; // 0x748
	float m_flStartScale; // 0x74c
	float m_flDestScale; // 0x750
	float m_flScaleTimeStart; // 0x754
	int32_t m_nStartBrightness; // 0x758
	int32_t m_nDestBrightness; // 0x75c
	float m_flBrightnessTimeStart; // 0x760
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x768
	int32_t m_nSpriteWidth; // 0x810
	int32_t m_nSpriteHeight; // 0x814
};

// Aligment: 0
// Size: 2072
class C_SpriteOriented : public C_Sprite, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 1824
class C_BaseClientUIEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x708
};

// Aligment: 28
// Size: 2344
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceRecreateNextUpdate; // 0x728
	bool m_bMoveViewToPlayerNextThink; // 0x729
	bool m_bCheckCSSClasses; // 0x72a
	matrix3x4_t m_matAnchorDelta; // 0x72c
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x8c8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x8d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLit; // 0x8d1
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x8d2
	// MNetworkEnable
	// MNetworkEnable
	float m_flWidth; // 0x8d4
	// MNetworkEnable
	// MNetworkEnable
	float m_flHeight; // 0x8d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDPI; // 0x8dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flInteractDistance; // 0x8e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x8e4
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8e8
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8ec
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8f0
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8f4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8f8
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_vecCSSClasses; // 0x900
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOpaque; // 0x918
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoDepth; // 0x919
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderBackface; // 0x91a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x91b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x91c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bGrabbable; // 0x91d
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x91e
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x91f
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x920
};

// Aligment: 4
// Size: 2360
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bBeenEnabled; // 0x928
	bool m_bHide; // 0x929
	float m_flSeenTargetTime; // 0x92c
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0x930
};

// Aligment: 1
// Size: 2856
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x928
};

// Aligment: 13
// Size: 2496
class C_PointHintUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_pszLessonName; // 0x958
	CUtlSymbolLarge m_pszCaption; // 0x960
	Vector m_vOffset; // 0x968
	WorldTextAttachmentType_t m_attachType; // 0x974
	CHandle< C_BaseEntity > m_hIconTarget; // 0x978
	CUtlSymbolLarge m_szTargetAttachmentName; // 0x980
	CUtlSymbolLarge m_pszCustomLayoutFile; // 0x988
	int32_t m_nTrackedDeviceIndex; // 0x990
	CHandle< C_PropVRHand > m_hHighlightHand; // 0x994
	CUtlSymbolLarge m_pszHighlightControllerComponent; // 0x998
	Vector m_vecLocalHighlightPoint; // 0x9a0
	CUtlSymbolLarge m_pszHighlightOtherEntityName; // 0x9b0
	bool m_bUseOffScreenIndicator; // 0x9b8
};

// Aligment: 13
// Size: 2272
class C_PointClientUIHUD : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bCheckCSSClasses; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x898
	// MNetworkEnable
	// MNetworkEnable
	float m_flWidth; // 0x89c
	// MNetworkEnable
	// MNetworkEnable
	float m_flHeight; // 0x8a0
	// MNetworkEnable
	// MNetworkEnable
	float m_flDPI; // 0x8a4
	// MNetworkEnable
	// MNetworkEnable
	float m_flInteractDistance; // 0x8a8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x8ac
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8b0
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8b4
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8b8
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8bc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8c0
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_vecCSSClasses; // 0x8c8
};

// Aligment: 2
// Size: 1832
class C_PointClientUIDialog : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0x720
	bool m_bStartEnabled; // 0x724
};

// Aligment: 10
// Size: 1864
class CDACWorldParticleSystem : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nType; // 0x708
	CUtlSymbolLarge m_szEffectName; // 0x710
	CUtlSymbolLarge m_szTargetName; // 0x718
	CUtlSymbolLarge m_szControlPoint; // 0x720
	HSequence m_hOverrideSequence; // 0x728
	CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // 0x730
	Vector m_vModelScale; // 0x738
	bool m_bDayTime; // 0x744
	bool m_bNightTime; // 0x745
	bool m_bShowInFow; // 0x746
};

// Aligment: 0
// Size: 2208
class C_EnvDeferredLight : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2208
class C_EnvDeferredLightClientOnly : public C_EnvDeferredLight, C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 9
// Size: 1840
class C_EnvSky : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x6f1
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x70c
};

// Aligment: 0
// Size: 1272
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1776
class C_LightEntity : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x6e8
};

// Aligment: 0
// Size: 1776
class C_LightSpotEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1776
class C_LightOrthoEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1776
class C_LightDirectionalEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1776
class C_LightEnvironmentEntity : public C_LightDirectionalEntity, C_LightEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1240
class CInfoTarget : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1240
class CInfoParticleTarget : public C_PointEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1840
class C_PostProcessingVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDuration; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinLogExposure; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinExposure; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxExposure; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureCompensation; // 0x71c
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x724
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExposureControl; // 0x729
};

// Aligment: 0
// Size: 1768
class C_World : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 15
// Size: 2200
class C_BaseAnimating : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vecForce; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nForceBone; // 0x70c
	CUtlVector< handposepair_t > m_HandPoses; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x729
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x72a
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_nMuzzleFlashParity; // 0x72b
	C_BaseAnimating* m_pClientsideRagdoll; // 0x730
	bool m_bInitModelEffects; // 0x738
	bool m_builtRagdoll; // 0x739
	bool m_bIsStaticProp; // 0x73a
	uint8_t m_nOldMuzzleFlashParity; // 0x73b
	int32_t m_iEjectBrassAttachment; // 0x798
	bool m_bSuppressAnimEventSounds; // 0x79c
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasings_t m_Easings; // 0x860
};

// Aligment: 0
// Size: 2200
class C_BaseAnimatingOverlay : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2264
class CBaseProp : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x898
	int32_t m_iShapeType; // 0x89c
	bool m_bConformToCollisionBounds; // 0x8a0
	matrix3x4_t m_mPreferredCatchTransform; // 0x8a4
};

// Aligment: 30
// Size: 2536
class C_BreakableProp : public CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnBreak; // 0x8e0
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x908
	CEntityIOOutput m_OnTakeDamage; // 0x930
	float m_impactEnergyScale; // 0x958
	int32_t m_iMinHealthDmg; // 0x95c
	float m_flPressureDelay; // 0x960
	CHandle< C_BaseEntity > m_hBreaker; // 0x964
	PerformanceMode_t m_PerformanceMode; // 0x968
	float m_flDmgModBullet; // 0x96c
	float m_flDmgModClub; // 0x970
	float m_flDmgModExplosive; // 0x974
	float m_flDmgModFire; // 0x978
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x980
	CUtlSymbolLarge m_iszBasePropData; // 0x988
	int32_t m_iInteractions; // 0x990
	float m_flPreventDamageBeforeTime; // 0x994
	bool m_bHasBreakPiecesOrCommands; // 0x998
	float m_explodeDamage; // 0x99c
	float m_explodeRadius; // 0x9a0
	float m_explosionDelay; // 0x9a8
	CUtlSymbolLarge m_explosionBuildupSound; // 0x9b0
	CUtlSymbolLarge m_explosionCustomEffect; // 0x9b8
	CUtlSymbolLarge m_explosionCustomSound; // 0x9c0
	CHandle< C_BasePlayer > m_hPhysicsAttacker; // 0x9c8
	float m_flLastPhysicsInfluenceTime; // 0x9cc
	float m_flDefaultFadeScale; // 0x9d0
	CHandle< C_BaseEntity > m_hLastAttacker; // 0x9d4
	CHandle< C_BaseEntity > m_hFlareEnt; // 0x9d8
	// MNetworkEnable
	// MNetworkEnable
	bool m_noGhostCollision; // 0x9dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flClothScale; // 0x9e0
};

// Aligment: 33
// Size: 2840
class C_DynamicProp : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x9e8
	CEntityIOOutput m_pOutputAnimOver; // 0xa10
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa38
	CEntityIOOutput m_OnAnimReachedStart; // 0xa60
	CEntityIOOutput m_OnAnimReachedEnd; // 0xa88
	CUtlSymbolLarge m_iszDefaultAnim; // 0xab0
	CUtlSymbolLarge m_iszInitialAnim; // 0xab8
	HSequence m_hGoalSequence; // 0xac0
	int32_t m_iTransitionDirection; // 0xac4
	bool m_bAnimateOnServer; // 0xac8
	bool m_bRandomizeCycle; // 0xac9
	bool m_bHoldAnimation; // 0xaca
	bool m_bIsHoldingAnimation; // 0xacb
	bool m_bRandomAnimator; // 0xacc
	float m_flNextRandAnim; // 0xad0
	float m_flMinRandAnimDuration; // 0xad4
	float m_flMaxRandAnimDuration; // 0xad8
	HSequence m_hPendingSequence; // 0xadc
	bool m_bStartDisabled; // 0xae0
	bool m_bUpdateAttachedChildren; // 0xae1
	bool m_bScriptedMovement; // 0xae2
	bool m_bFiredStartEndOutput; // 0xae3
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xae4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xae5
	bool m_bCreateNonSolid; // 0xae6
	bool m_bIsOverrideProp; // 0xae7
	int32_t m_iInitialGlowState; // 0xae8
	int32_t m_nGlowRange; // 0xaec
	int32_t m_nGlowRangeMin; // 0xaf0
	Color m_glowColor; // 0xaf4
	int32_t m_iCachedFrameCount; // 0xaf8
	Vector m_vecCachedRenderMins; // 0xafc
	Vector m_vecCachedRenderMaxs; // 0xb08
};

// Aligment: 0
// Size: 2840
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2840
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 9
// Size: 2080
class C_ColorCorrectionVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_LastEnterWeight; // 0x6f0
	float m_LastEnterTime; // 0x6f4
	float m_LastExitWeight; // 0x6f8
	float m_LastExitTime; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_MaxWeight; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	float m_FadeDuration; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_Weight; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_lookupFilename; // 0x710
};

// Aligment: 18
// Size: 2448
class C_PropVRTrackedObject : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	matrix3x4_t m_mClientTransform; // 0x8b0
	Vector m_vClientScale; // 0x8e0
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x8f0
	// MNetworkEnable
	bool m_bIsTracking; // 0x908
	// MNetworkEnable
	Vector m_vTrackedPosition; // 0x90c
	// MNetworkEnable
	QAngle m_qTrackedAngles; // 0x918
	// MNetworkEnable
	Vector m_vPhysicallyConstrainedPosition; // 0x924
	// MNetworkEnable
	QAngle m_qPhysicallyConstrainedAngles; // 0x930
	// MNetworkEnable
	Vector m_vWeldTransformPosition; // 0x93c
	// MNetworkEnable
	QAngle m_qWeldTransformAngles; // 0x948
	// MNetworkEnable
	bool m_bClientIsAuthoritativeForTransform; // 0x954
	// MNetworkEnable
	bool m_bIsInContact; // 0x955
	// MNetworkEnable
	bool m_bIsInContactTeleportClip; // 0x956
	// MNetworkEnable
	Vector m_vTeleportClipPos; // 0x958
	// MNetworkEnable
	bool m_bIsInContactSolidPostTeleportClip; // 0x964
	// MNetworkEnable
	Vector m_vSolidPostTeleportClipPos; // 0x968
	// MNetworkEnable
	Vector m_vLocalPosition; // 0x974
	// MNetworkEnable
	QAngle m_qLocalAngles; // 0x980
};

// Aligment: 6
// Size: 2496
class C_PropHMDAvatar : public C_PropVRTrackedObject, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32[2] m_hLiteralControllerSlots; // 0x990
	// MNetworkEnable
	// MNetworkEnable
	int32[2] m_hLogicalControllerSlots; // 0x998
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropVRHand >[4] m_hVRControllers; // 0x9a0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PointWorldText > m_hCloseCaption; // 0x9b0
	bool m_bLocalHMDPoseValid; // 0x9b4
	float m_flLastZPos; // 0x9b8
};

// Aligment: 42
// Size: 4168
class C_PropVRHand : public C_PropVRTrackedObject, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseVRHandAttachment > m_hActiveHandAttachment; // 0x9d0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropHMDAvatar > m_hHMDAvatar; // 0x9d4
	// MNetworkEnable
	bool m_bVrSkeletonActive; // 0x9d8
	// MNetworkEnable
	int32_t m_nVrBoneCount; // 0x9dc
	// MNetworkEnable
	uint32_t m_unVrCompressedBoneTransformsSize; // 0x9e0
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	uint8[64] m_vrCompressedBoneTransforms; // 0x9e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CBaseVRHandAttachmentHandle"
	CUtlVector< CHandle< C_BaseVRHandAttachment > > m_hAttachments; // 0xe08
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0xe20
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsInView; // 0xe21
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nHandID; // 0xe24
	// MNetworkEnable
	// MNetworkEnable
	float m_flTriggerAnalogValue; // 0xe28
	// MNetworkEnable
	// MNetworkEnable
	float m_flGripAnalogValue; // 0xe2c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger0; // 0xe30
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger1; // 0xe34
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger2; // 0xe38
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger3; // 0xe3c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger4; // 0xe40
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay0; // 0xe44
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay1; // 0xe48
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay2; // 0xe4c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay3; // 0xe50
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueX; // 0xe54
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueY; // 0xe58
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueX; // 0xe5c
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueY; // 0xe60
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCanPerformUse; // 0xe64
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTipTransformInitialized; // 0xe65
	// MNetworkEnable
	// MNetworkEnable
	Vector m_localTipOrigin; // 0xe68
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_localTipAngles; // 0xe74
	// MNetworkEnable
	// MNetworkEnable
	float m_flHapticPulseTime; // 0xe80
	// MNetworkEnable
	// MNetworkEnable
	int16_t m_nHapticPulseInterval; // 0xe84
	CInteractionManager m_InteractionMgr; // 0xe88
	matrix3x4_t m_matUseTransform; // 0xf68
	uint8_t m_nAttachUseIndex; // 0xf98
	matrix3x4_t m_matHoldTransform; // 0xf9c
	uint8_t m_nAttachHoldIndex; // 0xfcc
	matrix3x4_t m_matHoverTransform; // 0xfd0
	uint8_t m_nAttachHoverIndex; // 0x1000
	uint8_t m_nAttachOriginIndex; // 0x1001
	// MNetworkEnable
	// MNetworkEnable
	eLiteralHandType m_LiteralHandType; // 0x1004
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAttachedToTrackedBody; // 0x1038
	bool m_bWaitingToAttach; // 0x1039
};

// Aligment: 6
// Size: 2304
class C_BaseVRHandAttachment : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< C_PropVRHand > m_hOldAttachedHand; // 0x898
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialOverride; // 0x8a0
	CEntityIOOutput m_OnAttachedToHand; // 0x8a8
	CEntityIOOutput m_OnDetachedFromHand; // 0x8d0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropVRHand > m_hAttachedHand; // 0x8f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsAttached; // 0x8fc
};

// Aligment: 0
// Size: 2304
class C_VRHandModelOverride : public C_BaseVRHandAttachment, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 16
// Size: 2368
class C_ClientRagdoll : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bFadeOut; // 0x898
	bool m_bImportant; // 0x899
	float m_flEffectTime; // 0x89c
	float m_gibDespawnTime; // 0x8a0
	int32_t m_iCurrentFriction; // 0x8a4
	int32_t m_iMinFriction; // 0x8a8
	int32_t m_iMaxFriction; // 0x8ac
	int32_t m_iFrictionAnimState; // 0x8b0
	bool m_bReleaseRagdoll; // 0x8b4
	int32_t m_iEyeAttachment; // 0x8b8
	bool m_bFadingOut; // 0x8bc
	float32[10] m_flScaleEnd; // 0x8c0
	float32[10] m_flScaleTimeStart; // 0x8e8
	float32[10] m_flScaleTimeEnd; // 0x910
	bool m_bForceShadowCastType; // 0x938
	ShadowType_t m_forcedShadowCastType; // 0x93c
};

// Aligment: 1
// Size: 1776
class C_BaseDoor : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsUsable; // 0x6e8
};

// Aligment: 25
// Size: 2648
class C_BaseFlex : public C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_viewtarget; // 0x8a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< float32 >"
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CUtlVector< float32 > m_flexWeight; // 0x8b8
	// MNetworkEnable
	// MNetworkEnable
	bool m_blinktoggle; // 0x8d0
	int32_t m_nLastFlexUpdateFrameCount; // 0x938
	Vector m_CachedViewTarget; // 0x93c
	int32_t m_iBlink; // 0x950
	float m_blinktime; // 0x954
	bool m_prevblinktoggle; // 0x958
	int32_t m_iBlinkSlider; // 0x95c
	int32_t m_iJawOpen; // 0x960
	float m_flJawOpenAmount; // 0x964
	float m_flBlinkAmount; // 0x968
	int32_t m_iMouthAttachment; // 0x96c
	int32_t m_iEyeAttachment; // 0x970
	bool m_bResetFlexWeightsOnModelChange; // 0x974
	int32_t m_iEyeLidUpDownPP; // 0x990
	int32_t m_iEyeLidLeftRightPP; // 0x994
	float m_flMinEyeUpDown; // 0x998
	float m_flMaxEyeUpDown; // 0x99c
	float m_flMinEyeLeftRight; // 0x9a0
	float m_flMaxEyeLeftRight; // 0x9a4
	int32_t m_nEyeOcclusionRendererBone; // 0x9a8
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x9ac
	Vector m_vEyeOcclusionRendererHalfExtent; // 0x9dc
	C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; // 0x9f8
};

// Aligment: 11
// Size: 10904
class C_FlexCycler : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flextime; // 0xa58
	float32[2048] m_flextarget; // 0xa60
	float m_blinktime; // 0x2a60
	float m_looktime; // 0x2a64
	Vector m_lookTarget; // 0x2a68
	float m_speaktime; // 0x2a74
	int32_t m_istalking; // 0x2a78
	int32_t m_phoneme; // 0x2a7c
	HSequence m_hCurrLayerSequence; // 0x2a80
	CUtlSymbolLarge m_iszSentence; // 0x2a88
	int32_t m_sentence; // 0x2a90
};

// Aligment: 9
// Size: 10968
class C_GenericFlexCycler : public C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0x2a98
	int32_t m_nTestIndex; // 0x2a9c
	CUtlSymbolLarge m_poseParameterName; // 0x2aa0
	bool m_bDoClientSideAnimation; // 0x2aa8
	CUtlSymbolLarge[2] m_layerSequence; // 0x2ab0
	int32[2] m_nLayerIndex; // 0x2ac0
	HSequence[2] m_hBaseSequence; // 0x2ac8
	int32_t m_nBoneOverrideIndex; // 0x2ad0
	float m_flLastSimTime; // 0x2ad4
};

// Aligment: 2
// Size: 2208
class C_CombatWeaponClone : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< C_BaseCombatWeapon > m_hWeaponParent; // 0x898
	int32_t m_nLastUpdatedWorldModelClone; // 0x89c
};

// Aligment: 2
// Size: 2544
class C_PhysicsProp : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAwake; // 0x9e8
	uint32_t m_spawnflags; // 0x9ec
};

// Aligment: 1
// Size: 2848
class C_DynamicPropClientside : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bNoInterpolate; // 0xb18
};

// Aligment: 7
// Size: 2912
class C_BasePropDoor : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xb30
	bool m_modelChanged; // 0xb34
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLocked; // 0xb35
	// MNetworkEnable
	// MNetworkEnable
	Vector m_closedPosition; // 0xb38
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_closedAngles; // 0xb44
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xb50
	Vector m_vWhereToSetLightingOrigin; // 0xb54
};

// Aligment: 13
// Size: 2600
class C_PhysPropClientside : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flTouchDelta; // 0x9e8
	float m_fDeathTime; // 0x9ec
	float m_impactEnergyScale; // 0x9f0
	uint32_t m_spawnflags; // 0x9f4
	float m_inertiaScale; // 0x9f8
	float m_flDmgModBullet; // 0x9fc
	float m_flDmgModClub; // 0xa00
	float m_flDmgModExplosive; // 0xa04
	float m_flDmgModFire; // 0xa08
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xa10
	CUtlSymbolLarge m_iszBasePropData; // 0xa18
	int32_t m_iInteractions; // 0xa20
	bool m_bHasBreakPiecesOrCommands; // 0xa24
};

// Aligment: 8
// Size: 2320
class C_ServerRagdoll : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< Vector >"
	// MNetworkEncoder
	// MNetworkChangeCallback "ragAnglesChanged"
	CUtlVector< Vector > m_ragPos; // 0x8a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< QAngle >"
	// MNetworkEncoder
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	CUtlVector< QAngle > m_ragAngles; // 0x8b8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	float m_flBlendWeight; // 0x8d0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0x8d4
	int32_t m_iEyeAttachment; // 0x8d8
	float m_flBlendWeightCurrent; // 0x8dc
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0x8e0
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0x8f8
};

// Aligment: 25
// Size: 2392
class C_LocalTempEntity : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t flags; // 0x8b0
	float die; // 0x8b4
	float m_flFrameMax; // 0x8b8
	float x; // 0x8bc
	float y; // 0x8c0
	float fadeSpeed; // 0x8c4
	float bounceFactor; // 0x8c8
	int32_t hitSound; // 0x8cc
	int32_t priority; // 0x8d0
	Vector tentOffset; // 0x8d4
	QAngle m_vecTempEntAngVelocity; // 0x8e0
	int32_t tempent_renderamt; // 0x8ec
	Vector m_vecNormal; // 0x8f0
	float m_flSpriteScale; // 0x8fc
	int32_t m_nFlickerFrame; // 0x900
	float m_flFrameRate; // 0x904
	float m_flFrame; // 0x908
	char* m_pszImpactEffect; // 0x910
	char* m_pszParticleEffect; // 0x918
	bool m_bParticleCollision; // 0x920
	int32_t m_iLastCollisionFrame; // 0x924
	Vector m_vLastCollisionOrigin; // 0x928
	Vector m_vecTempEntVelocity; // 0x934
	Vector m_vecPrevAbsOrigin; // 0x940
	Vector m_vecTempEntAcceleration; // 0x94c
};

// Aligment: 49
// Size: 2432
class C_BaseCombatWeapon : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseCombatCharacter > m_hOwner; // 0x8a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x8a4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttack; // 0x8a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttack; // 0x8ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_nQueuedAttack; // 0x8b0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flTimeAttackQueued; // 0x8b4
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iViewModelIndex; // 0x8b8
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iWorldModelIndex; // 0x8c0
	// MNetworkEnable
	// MNetworkEnable
	WeaponState_t m_iState; // 0x8c8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iPrimaryAmmoType; // 0x8cc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iSecondaryAmmoType; // 0x8d0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "64"
	int32_t m_iClip1; // 0x8d4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x8d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	bool m_bOnlyPump; // 0x8dc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "64"
	float m_flTimeWeaponIdle; // 0x8e0
	float m_flNextEmptySoundTime; // 0x8e4
	float m_fMinRange1; // 0x8e8
	float m_fMinRange2; // 0x8ec
	float m_fMaxRange1; // 0x8f0
	float m_fMaxRange2; // 0x8f4
	float m_fFireDuration; // 0x8f8
	float m_fMinAdvanceToRange1; // 0x8fc
	int32_t m_Activity; // 0x900
	int32_t m_iPrimaryAmmoCount; // 0x904
	int32_t m_iSecondaryAmmoCount; // 0x908
	CUtlSymbolLarge m_iszName; // 0x910
	bool m_bRemoveable; // 0x918
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInReload; // 0x919
	bool m_bFireOnEmpty; // 0x91a
	bool m_bFiresUnderwater; // 0x91b
	bool m_bAltFiresUnderwater; // 0x91c
	bool m_bReloadsSingly; // 0x91d
	HSequence m_hIdealSequence; // 0x920
	int32_t m_IdealActivity; // 0x924
	int32_t m_iSubType; // 0x928
	float m_flUnlockTime; // 0x92c
	CHandle< C_BaseEntity > m_hLocker; // 0x930
	int32_t m_nTracerAttachmentIndex; // 0x934
	int32_t m_iAltFireHudHintCount; // 0x948
	int32_t m_iReloadHudHintCount; // 0x94c
	bool m_bAltFireHudHintDisplayed; // 0x950
	bool m_bReloadHudHintDisplayed; // 0x951
	float m_flHudHintPollTime; // 0x954
	float m_flHudHintMinDisplayTime; // 0x958
	bool m_bJustRestored; // 0x95c
	int16_t m_nLastNetworkedModelIndex; // 0x95e
	int16_t m_nPreDataChangedModelIndex; // 0x960
	C_CombatWeaponClone* m_pWorldModelClone; // 0x968
	WeaponState_t m_iOldState; // 0x978
};

// Aligment: 1
// Size: 2208
class C_ViewmodelWeapon : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	char* m_worldModel; // 0x898
};

// Aligment: 20
// Size: 2344
class C_BaseViewModel : public C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecLastFacing; // 0x8a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nViewModelIndex; // 0x8ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint32_t m_nAnimationParity; // 0x8b0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	HSequence m_hLayerSequence; // 0x8b4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint32_t m_nLayer; // 0x8b8
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x8bc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponChanged"
	CHandle< C_BaseCombatWeapon > m_hWeapon; // 0x8c0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x8c4
	int32_t m_Activity; // 0x8c8
	CUtlSymbolLarge m_sVMName; // 0x8d0
	CUtlSymbolLarge m_sAnimationPrefix; // 0x8d8
	CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0x8e0
	int32_t m_iCameraAttachment; // 0x8e4
	QAngle m_vecLastCameraAngles; // 0x8e8
	float m_previousElapsedDuration; // 0x8f4
	float m_previousCycle; // 0x8f8
	int32_t m_nOldAnimationParity; // 0x8fc
	HSequence m_hOldLayerSequence; // 0x900
	int32_t m_oldLayer; // 0x904
	float m_oldLayerStartTime; // 0x908
};

// Aligment: 0
// Size: 2200
class C_PointHintUIButtonHighlightModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 5
// Size: 2320
class C_PointHintUIHighlightModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x8b0
	int32_t m_nTrackedDeviceIndex; // 0x8c8
	CHandle< C_PropVRHand > m_hHighlightHand; // 0x8cc
	matrix3x4_t m_matLocalHighlight; // 0x8d8
	bool m_bVisible; // 0x908
};

// Aligment: 12
// Size: 3056
class C_EconEntity : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xa60
	bool m_bClientside; // 0xba0
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xba4
	bool m_bParticleSystemsCreated; // 0xba8
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xba9
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xbb0
	CHandle< C_BaseAnimating > m_hViewmodelAttachment; // 0xbc8
	int32_t m_iOldTeam; // 0xbcc
	bool m_bAttachmentDirty; // 0xbd0
	style_index_t m_iOldStyle; // 0xbd1
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xbd4
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xbd8
};

// Aligment: 0
// Size: 3056
class C_BaseAttributableItem : public C_EconEntity, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 3064
class C_EconWearable : public C_EconEntity, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 3064
class C_TFWearableItem : public C_EconWearable, C_EconEntity, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 81
// Size: 3608
class C_DAC_NPC : public C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nServerEntIndex; // 0x898
	PlayerSlot_t m_unOwnerPlayerSlot; // 0x89c
	bool m_bSimulatedFirstSnapshot; // 0x8a8
	bool m_bIsSetupSnapshot; // 0x960
	bool m_bIsOnBench; // 0x961
	bool m_bIsShopUnit; // 0x962
	bool m_bOverPopulation; // 0x963
	bool m_bUnderPopulation; // 0x964
	bool m_bUnitKeywordHighlight; // 0x965
	float m_flDeathStateChangeTime; // 0x968
	bool m_bSuppressPostCombatCelebration; // 0x978
	int32_t m_nHealth; // 0x97c
	int32_t m_nArmor; // 0x980
	int32_t m_nDPS; // 0x984
	int32_t m_nDamageBonus; // 0x988
	int32_t m_nDamageMin; // 0x98c
	int32_t m_nDamageMax; // 0x990
	int32_t m_nRangeBonus; // 0x994
	float m_flAttacksPerSecond; // 0x998
	int32_t m_nMana; // 0x99c
	int32_t m_nMaxMana; // 0x9a0
	int32_t m_nRank; // 0x9a4
	float m_flKillCount; // 0x9a8
	int32_t m_nKillStreak; // 0x9ac
	int32_t m_nUnderlordPower; // 0x9b0
	int32_t m_nDuelBonusDamage; // 0x9b4
	int32_t m_nLastForcedUnderlordSlotNum; // 0x9b8
	float m_flBaseUnitModelScale; // 0x9bc
	float m_flItemScaling; // 0x9c0
	float m_flCooldownMultiplier; // 0x9c4
	bool m_bPlayPlacedOnBoardAnim; // 0x9c8
	bool m_bPlaySpawnAnim; // 0x9c9
	bool m_bPlayTeleportIn; // 0x9ca
	float m_flZOffset; // 0x9cc
	float m_flLastAttackEndTime; // 0x9d0
	float m_flPreviousLastAttackEndTime; // 0x9d4
	float m_flLastAttackSpeed; // 0x9d8
	float m_flCooldownRatio; // 0x9fc
	Vector m_vecSnapshotPosition; // 0xa70
	QAngle m_angSnapshotAngles; // 0xa7c
	Vector m_vecStartingPosition; // 0xa88
	float m_flDesiredModelScale; // 0xa94
	CUtlVectorFixedGrowable< CUtlString > m_vecAttachmentNames; // 0xa98
	int32_t m_nAttackLayer; // 0xaf0
	int32_t m_nAttackActivity; // 0xaf4
	int32_t m_nModifierLayer; // 0xaf8
	int32_t m_nAbilityLayer; // 0xafc
	bool m_bDragging; // 0xb00
	bool m_bIsDraggingInWorldspace; // 0xb01
	Vector m_vecDragPosition; // 0xb04
	QAngle m_angDragAngles; // 0xb10
	bool m_bOverridePosition; // 0xb1c
	bool m_bOverrideBench; // 0xb1d
	bool m_bRestorePosition; // 0xb1e
	bool m_bSelected; // 0xb1f
	bool m_bIsSummoned; // 0xb20
	bool m_bForceUseBigHealthbar; // 0xb21
	int32_t m_nSummonOwnerEntIndex; // 0xb24
	bool m_bClientCanBeSold; // 0xb28
	bool m_bClientCanMoveToBench; // 0xb29
	bool m_bClientRecommendedForPopcap; // 0xb2a
	uint64_t m_uPredictedSequenceNumber; // 0xb30
	Vector m_vPredictedPosition; // 0xb38
	QAngle m_angPredictedAngles; // 0xb44
	bool m_bPredictHidden; // 0xb50
	bool m_bNoInterp; // 0xb51
	bool m_bShowManaBar; // 0xb52
	bool m_bInvisibleUntilFirstUpdate; // 0xb53
	bool m_bIsModifierRenderOutlineOnly; // 0xb54
	int32_t m_nLastCheerRound; // 0xb58
	bool m_bUseUnitScaleFactor; // 0xb5c
	UnitStatusLabel m_eStatusLabel; // 0xb60
	CUtlVector< UnitStatusLabel > m_vecAllStatusLabels; // 0xb68
	ParticleIndex_t m_nStatusEffectIndex; // 0xb80
	DACAbilityID_t m_unEquippedItem; // 0xd30
	bool m_bForceShowRank; // 0xd50
	float m_flHealthBarBaseOffset; // 0xd54
	CHandle< C_DynamicPropClientside > m_hatProp; // 0xd70
	CountdownTimer m_dragScaleBump; // 0xe00
	int32_t m_nSellValue; // 0xe10
	DACAbilityID_t m_itemOverride; // 0xe14
};

// Aligment: 6
// Size: 3120
class C_DAC_Wearable : public C_EconWearable, C_EconEntity, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bOwnerModelChanged; // 0xbf8
	bool m_bIsGeneratingEconItem; // 0xbf9
	bool m_bIsItemVisibleOnGeneratedEntity; // 0xbfa
	float m_fZDelta; // 0xbfc
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // 0xc00
	int32_t m_nOwnerRank; // 0xc28
};

// Aligment: 2
// Size: 3248
class C_DAC_Banner : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDirty; // 0xb18
	uint32_t m_unTeamID; // 0xb1c
};

// Aligment: 9
// Size: 2776
class C_DAC_Underlord : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	uint32_t m_unTeamID; // 0xa58
	int32_t m_nLastForcedUnderlordSlotNum; // 0xa5c
	UnderlordID_t m_unForcedUnderlord; // 0xa60
	UnderlordID_t m_unUnderlord; // 0xa62
	int32_t m_nIdleActivity; // 0xa64
	HSequence m_hIdleSequence; // 0xa68
	CHandle< C_SceneEntity > m_hScene; // 0xa6c
	CUtlString m_sQueuedScene; // 0xa70
	bool m_bOutfitUpdateQueued; // 0xad0
};

// Aligment: 1
// Size: 2864
class C_DAC_ChallengeMapClaim : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszClaimName; // 0xb18
};

// Aligment: 1
// Size: 2912
class C_DAC_ChallengeMapChallenge : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bPrestige; // 0xb40
};

// Aligment: 9
// Size: 2304
class C_DAC_Reward_Preview : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< C_SceneEntity > m_hScene; // 0x898
	item_definition_index_t m_nDacItemIndex; // 0x89c
	int32_t m_IdleActivity; // 0x8ac
	int32_t m_nClickerStartHealth; // 0x8b0
	int32_t m_nClickerHealth; // 0x8b4
	Vector m_vMinsForFraming; // 0x8e0
	Vector m_vMaxsForFraming; // 0x8ec
	float m_flRespawnParticleDelay; // 0x8f8
	bool m_bMute; // 0x8fc
};

// Aligment: 4
// Size: 2888
class C_DACBoardBuddy : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vDesiredPos; // 0xb28
	float m_flLastUpdateTime; // 0xb34
	CUtlString m_szModelName; // 0xb38
	bool m_bUpdateModel; // 0xb40
};

// Aligment: 2
// Size: 3016
class C_DACMapProp : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nPropSize; // 0xba0
	int32_t m_nPropSlot; // 0xba4
};

// Aligment: 19
// Size: 2944
class C_DevtestHierarchy : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vRotationAxis; // 0xb18
	float m_flRotationSpeed; // 0xb24
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0xb28
	CHandle< C_BaseEntity > m_hChild; // 0xb2c
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_attachName; // 0xb30
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDynamicAttachOffset; // 0xb34
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nDynamicResetCount; // 0xb40
	int32_t m_nDynamicDetachCount; // 0xb44
	// MNetworkEnable
	// MNetworkEnable
	bool m_bChildIsDynamic; // 0xb48
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCreateChildSideChild; // 0xb49
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_alternateAttachName; // 0xb4c
	CHandle< C_BaseEntity > m_hAlternateParent; // 0xb50
	CStrongHandle< InfoForResourceTypeCModel > m_hAlternateModel; // 0xb58
	CStrongHandle< InfoForResourceTypeCModel > m_hOriginalModel; // 0xb60
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_hClientSideChildModel; // 0xb68
	// MNetworkEnable
	// MNetworkEnable
	float m_flEntityStartTime; // 0xb70
	int32_t m_nTestIndex; // 0xb74
	HierarchyType_t m_nCurrType; // 0xb78
	int32_t m_nCurrentModel; // 0xb7c
};

// Aligment: 0
// Size: 2840
class C_DevtestHierarchyChild : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2200
class C_DevtestHierarchy2 : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 10968
class C_GenericFlexCyclerAlias_cycler : public C_GenericFlexCycler, C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 2376
class C_ServerRagdollAttached : public C_ServerRagdoll, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_boneIndexAttached; // 0x910
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_ragdollAttachedObjectIndex; // 0x914
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointBoneSpace; // 0x918
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointRagdollSpace; // 0x924
	Vector m_vecOffset; // 0x930
	float m_parentTime; // 0x93c
	bool m_bHasParent; // 0x940
};

// Aligment: 13
// Size: 2984
class C_BaseCombatCharacter : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	float m_flNextAttack; // 0xa58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnAmmoChanged"
	uint32[32] m_iAmmo; // 0xa5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponsChanged"
	CUtlVector< CHandle< C_BaseCombatWeapon > > m_hMyWeapons; // 0xae0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseCombatWeapon > m_hActiveWeapon; // 0xaf8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	CUtlVector< CHandle< C_EconWearable > > m_hMyWearables; // 0xb00
	int32_t m_bloodColor; // 0xb18
	int32_t m_leftFootAttachment; // 0xb1c
	int32_t m_rightFootAttachment; // 0xb20
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xb24
	float m_flWaterWorldZ; // 0xb28
	float m_flWaterNextTraceTime; // 0xb2c
	// MNetworkEnable
	float m_flFieldOfView; // 0xb30
	CountdownTimer m_footstepTimer; // 0xb38
};

// Aligment: 114
// Size: 5288
class C_BasePlayer : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecFlashlightOrigin; // 0xbb0
	Vector m_vecFlashlightForward; // 0xbbc
	Vector m_vecFlashlightUp; // 0xbc8
	Vector m_vecFlashlightRight; // 0xbd4
	bool m_bBehindLocalPlayer; // 0xbe0
	int32_t m_nBehindLocalPlayerFrame; // 0xbe4
	fogparams_t m_CurrentFog; // 0xbe8
	CHandle< C_FogController > m_hOldFogController; // 0xc48
	bool[5] m_bOverrideFogColor; // 0xc4c
	Color[5] m_OverrideFogColor; // 0xc51
	bool[5] m_bOverrideFogStartEnd; // 0xc65
	float32[5] m_fOverrideFogStart; // 0xc6c
	float32[5] m_fOverrideFogEnd; // 0xc80
	int32_t m_StuckLast; // 0xc94
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CPlayerLocalData"
	// MNetworkSendProxyRecipientsFilter
	C_PlayerLocalData m_Local; // 0xc98
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hTonemapController; // 0xe80
	C_PlayerState m_pl; // 0xe88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOV; // 0xea0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOVStart; // 0xea4
	uint64_t m_afButtonLast; // 0xea8
	uint64_t m_afButtonPressed; // 0xeb0
	uint64_t m_afButtonReleased; // 0xeb8
	uint64_t m_nButtons; // 0xec0
	float m_surfaceFriction; // 0xec8
	int32_t m_nImpulse; // 0xecc
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_ladderSurfaceProps; // 0xed0
	int32_t m_flPhysics; // 0xed4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVTime; // 0xed8
	float m_flWaterJumpTime; // 0xedc
	float m_flSwimSoundTime; // 0xee0
	float m_flStepSoundTime; // 0xee4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; // 0xee8
	char[32] m_szAnimExtension; // 0xef4
	int32_t m_nOldTickBase; // 0xf14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	int32_t m_iBonusProgress; // 0xf18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32_t m_iBonusChallenge; // 0xf1c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2048"
	// MNetworkEncodeFlags
	float m_flMaxspeed; // 0xf20
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; // 0xf24
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hVehicle; // 0xf28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseCombatWeapon > m_hLastWeapon; // 0xf2c
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseViewModel >[2] m_hViewModel; // 0xf30
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropHMDAvatar > m_hPropHMDAvatar; // 0xf38
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PointHMDAnchor > m_hPointHMDAnchor; // 0xf3c
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_VRControllerType; // 0xf40
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_fOnTarget; // 0xf44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iDefaultFOV; // 0xf48
	uint64_t m_afButtonDisabled; // 0xf50
	uint64_t m_afButtonForced; // 0xf58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hViewEntity; // 0xf68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hConstraintEntity; // 0xf6c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecConstraintCenter; // 0xf70
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintRadius; // 0xf7c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintWidth; // 0xf80
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintSpeedFactor; // 0xf84
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bConstraintPastRadius; // 0xf88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0xf89
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; // 0xf8c
	float m_flObserverChaseDistance; // 0xf90
	Vector m_vecFreezeFrameStart; // 0xf94
	float m_flFreezeFrameStartTime; // 0xfa0
	float m_flFreezeFrameDistance; // 0xfa4
	bool m_bStartedFreezeFraming; // 0xfa8
	bool m_bFinishedFreezeFraming; // 0xfa9
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flDeathTime; // 0xfac
	CHandle< C_BaseEntity > m_hOldVehicle; // 0xfb0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hUseEntity; // 0xfb4
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hHeldEntity; // 0xfb8
	Vector m_vecWaterJumpVel; // 0xfbc
	QAngle m_vecOldViewAngles; // 0xfc8
	QAngle m_angDemoViewAngles; // 0xfd8
	bool m_bWasFrozen; // 0xff0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0xff4
	int32_t m_nFinalPredictedTick; // 0xff8
	bool[1] m_bFlashlightEnabled; // 0xffc
	float m_flOldPlayerZ; // 0x1000
	float m_flOldPlayerViewOffsetZ; // 0x1004
	Vector m_vecVehicleViewOrigin; // 0x1008
	QAngle m_vecVehicleViewAngles; // 0x1014
	float m_flVehicleViewFOV; // 0x1020
	int32_t m_nVehicleViewSavedFrame; // 0x1024
	C_CommandContext m_CommandContext; // 0x1028
	float m_flWaterSurfaceZ; // 0x1380
	bool m_bResampleWaterSurface; // 0x1384
	TimedEvent m_tWaterParticleTimer; // 0x1388
	bool m_bPlayerUnderwater; // 0x1390
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x1394
	float m_flNextAvoidanceTime; // 0x1398
	float m_flAvoidanceRight; // 0x139c
	float m_flAvoidanceForward; // 0x13a0
	float m_flAvoidanceDotForward; // 0x13a4
	float m_flAvoidanceDotRight; // 0x13a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLaggedMovementValue; // 0x13ac
	Vector m_vecPredictionError; // 0x13b0
	float m_flPredictionErrorTime; // 0x13bc
	Vector m_vecPreviouslyPredictedOrigin; // 0x13c0
	// MNetworkEnable
	// MNetworkEnable
	char[18] m_szLastPlaceName; // 0x13cc
	CUtlStringToken m_surfaceProps; // 0x13e0
	char m_chTextureType; // 0x13f0
	bool m_bSentFreezeFrame; // 0x13f1
	float m_flFreezeZOffset; // 0x13f4
	CUtlVector< CHandle< C_BasePlayer > > m_hSplitScreenPlayers; // 0x13f8
	CSplitScreenSlot m_nSplitScreenSlot; // 0x1410
	CHandle< C_BasePlayer > m_hSplitOwner; // 0x1414
	bool m_bIsLocalPlayer; // 0x1418
	Vector m_movementCollisionNormal; // 0x141c
	Vector m_groundNormal; // 0x1428
	Vector m_vOldOrigin; // 0x1434
	float m_flOldSimulationTime; // 0x1440
	CHandle< C_BaseCombatCharacter > m_stuckCharacter; // 0x1444
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PostProcessController > m_hPostProcessCtrl; // 0x1448
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0x144c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "fogplayerparams_t"
	C_fogplayerparams_t m_PlayerFog; // 0x1450
	Vector m_vecElevatorFixup; // 0x1490
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nUnHoldableButtons; // 0x14a0
};

// Aligment: 0
// Size: 2984
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 18
// Size: 3088
class C_AI_BaseNPC : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flTempRagdollTransitionTime; // 0xba8
	CUtlVector< matrix3x4a_t > m_RagdollTransform; // 0xbb0
	CUtlVector< matrix3x4a_t > m_TransitionTransform; // 0xbc8
	// MNetworkEnable
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xbe0
	// MNetworkEnable
	// MNetworkEnable
	float m_flTimePingEffect; // 0xbe4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	HSequence m_iDeathPose; // 0xbe8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int32_t m_iDeathFrame; // 0xbec
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iSpeedModRadius; // 0xbf0
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iSpeedModSpeed; // 0xbf4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPerformAvoidance; // 0xbf8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMoving; // 0xbf9
	// MNetworkEnable
	// MNetworkEnable
	float m_flStunUntilTime; // 0xbfc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xc00
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSpeedModActive; // 0xc01
	// MNetworkEnable
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xc02
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hServerRagdoll; // 0xc04
	uint8_t m_nFootstepType; // 0xc08
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoweredRagdoll; // 0xc09
};

