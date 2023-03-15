#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: client.dll
// Class Count: 325
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 4
// Size: 5
enum class C_BaseCombatCharacter::WaterWakeMode_t : uint32_t
{
	WATER_WAKE_NONE = 0x0,
	WATER_WAKE_IDLE = 0x1,
	WATER_WAKE_WALKING = 0x2,
	WATER_WAKE_RUNNING = 0x3,
	WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Aligment: 4
// Size: 3
enum class CSteamPal_Intro_Toilet::TestState_t : uint32_t
{
	TEST_UNTESTED = 0x0,
	TEST_PASS = 0x1,
	TEST_FAIL = 0x2,
};

// Aligment: 1
// Size: 32
class CBuoyancyHelper
{
public:
	float m_flFluidDensity; // 0x18
};

// Aligment: 2
// Size: 88
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x50
};

// Aligment: 9
// Size: 192
struct PlayerResourceData_t
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	uint64_t m_iPlayerSteamID; // 0x20
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerNameChanged"
	char[128] m_iszPlayerName; // 0x28
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hPlayerController; // 0xa8
	// MNetworkEnable
	CHandle< C_BasePlayer > m_hPawn; // 0xac
	// MNetworkEnable
	bool m_bIsValid; // 0xb0
	// MNetworkEnable
	bool m_bFakeClient; // 0xb1
	// MNetworkEnable
	bool m_bIsBot; // 0xb2
	// MNetworkEnable
	int32_t m_nConnectionState; // 0xb4
	// MNetworkEnable
	int32_t m_iTeam; // 0xb8
};

// Aligment: 0
// Size: 48
class CPlayer_AutoaimServices : public CPlayerComponent
{
public:
// <no members described>
};

// Aligment: 4
// Size: 120
struct audioparams_t
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector[8] localSound; // 0x8
	// MNetworkEnable
	int32_t soundscapeIndex; // 0x68
	// MNetworkEnable
	uint8_t localBits; // 0x6c
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70
};

// Aligment: 25
// Size: 568
class CPlayer_CameraServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	uint32_t m_iFOV; // 0x30
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x34
	// MNetworkEnable
	float m_flFOVTime; // 0x38
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x3c
	// MNetworkEnable
	uint32_t m_iDefaultFOV; // 0x40
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkBitCount "32"
	// MNetworkChangeCallback "OnPunchChanged"
	QAngle m_vecPunchAngle; // 0x48
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x60
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; // 0x78
	// MNetworkEnable
	C_fogplayerparams_t m_PlayerFog; // 0x80
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0xc0
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; // 0xc4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; // 0xc8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	audioparams_t m_audio; // 0xd0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x148
	float m_flOldPlayerZ; // 0x160
	float m_flOldPlayerViewOffsetZ; // 0x164
	fogparams_t m_CurrentFog; // 0x168
	CHandle< C_FogController > m_hOldFogController; // 0x1d0
	bool[5] m_bOverrideFogColor; // 0x1d4
	Color[5] m_OverrideFogColor; // 0x1d9
	bool[5] m_bOverrideFogStartEnd; // 0x1ed
	float32[5] m_fOverrideFogStart; // 0x1f4
	float32[5] m_fOverrideFogEnd; // 0x208
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x21c
	QAngle m_angDemoViewAngles; // 0x220
};

// Aligment: 0
// Size: 48
class CPlayer_FlashlightServices : public CPlayerComponent
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
class CPlayer_ItemServices : public CPlayerComponent
{
public:
// <no members described>
};

// Aligment: 14
// Size: 128
class CPlayer_MovementServices : public CPlayerComponent
{
public:
	float m_flStepSoundTime; // 0x30
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	float m_flFallVelocity; // 0x34
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2048"
	// MNetworkEncodeFlags
	float m_flMaxspeed; // 0x38
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x3c
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x3d
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x3e
	Vector m_groundNormal; // 0x40
	float m_flSurfaceFriction; // 0x4c
	CUtlStringToken m_surfaceProps; // 0x50
	int32_t m_nStepside; // 0x60
	Vector m_vecPreviouslyPredictedOrigin; // 0x64
	float m_flForwardMove; // 0x70
	float m_flSideMove; // 0x74
	float m_flUpMove; // 0x78
};

// Aligment: 10
// Size: 88
class CPlayer_ObserverServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0x30
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; // 0x34
	float m_flObserverChaseDistance; // 0x38
	Vector m_vecFreezeFrameStart; // 0x3c
	float m_flFreezeFrameStartTime; // 0x48
	float m_flFreezeFrameDistance; // 0x4c
	bool m_bStartedFreezeFraming; // 0x50
	bool m_bFinishedFreezeFraming; // 0x51
	bool m_bSentFreezeFrame; // 0x52
	float m_flFreezeZOffset; // 0x54
};

// Aligment: 1
// Size: 56
class CPlayer_UseServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUseEntity; // 0x30
};

// Aligment: 6
// Size: 88
class CPlayer_VehicleServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hVehicle; // 0x30
	int32_t m_iVehicleAnalogBias; // 0x34
	Vector m_vecVehicleViewOrigin; // 0x38
	QAngle m_vecVehicleViewAngles; // 0x44
	int32_t m_nVehicleViewSavedFrame; // 0x50
	float m_flVehicleViewFOV; // 0x54
};

// Aligment: 8
// Size: 96
class CPlayer_WaterServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	float m_AirFinishedTime; // 0x30
	float m_flWaterJumpTime; // 0x34
	Vector m_vecWaterJumpVel; // 0x38
	float m_flSwimSoundTime; // 0x44
	bool m_bPlayerUnderwater; // 0x48
	float m_flWaterSurfaceZ; // 0x4c
	bool m_bResampleWaterSurface; // 0x50
	TimedEvent m_tWaterParticleTimer; // 0x54
};

// Aligment: 4
// Size: 144
class CPlayer_WeaponServices : public CPlayerComponent
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x30
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x48
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x4c
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16[32] m_iAmmo; // 0x50
};

// Aligment: 15
// Size: 184
class CAnimationLayer
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOpChanged"
	CNetworkedSequenceOperation m_op; // 0x20
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOrderChanged"
	int32_t m_nOrder; // 0x60
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkSendProxyRecipientsFilter
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x68
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	bool m_bLooping; // 0x80
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "animationLayerCycleReset"
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nNewSequenceParity; // 0x84
	// MNetworkDisable
	int32_t m_nFlags; // 0x88
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x8c
	// MNetworkDisable
	float m_flKillRate; // 0x90
	// MNetworkDisable
	float m_flKillDelay; // 0x94
	// MNetworkDisable
	float m_flLayerAnimtime; // 0x98
	// MNetworkDisable
	float m_flLayerFadeOuttime; // 0x9c
	// MNetworkDisable
	int32_t m_nActivity; // 0xa0
	// MNetworkDisable
	int32_t m_nPriority; // 0xa4
	// MNetworkDisable
	float m_flLastEventCycle; // 0xa8
	// MNetworkDisable
	float m_flLastAccess; // 0xac
};

// Aligment: 2
// Size: 48
struct CBaseAnimatingEasingFloat_t
{
public:
	// MNetworkEnable
	CUtlString m_GraphParameterName; // 0x8
	// MNetworkEnable
	float m_flGoal; // 0x28
};

// Aligment: 1
// Size: 56
struct CBaseAnimatingEasings_t
{
public:
	// MNetworkEnable
	CBaseAnimatingEasingFloat_t m_IKMasterBlendAmountEasing; // 0x8
};

// Aligment: 2
// Size: 40
struct PhysicsRagdollPose_t
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x8
	bool m_bDirty; // 0x20
};

// Aligment: 4
// Size: 88
struct ActiveModelConfig_t
{
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0x18
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x20
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x28
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x40
};

// Aligment: 2
// Size: 16
class CGameSceneNodeHandle
{
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc
};

// Aligment: 33
// Size: 352
class CGameSceneNode
{
public:
	// MNetworkDisable
	CTransform m_nodeToWorld; // 0x10
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x30
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x38
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x40
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x48
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x70
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xfc
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0x100
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0x10c
	// MNetworkDisable
	float m_flAbsScale; // 0x118
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0x11c
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0x11e
	// MNetworkDisable
	bool m_bDormant; // 0x11f
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0x120
	// MNetworkDisable
	bitfield:1 m_bDirtyHierarchy; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyBoneMergeInfo; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedPositionChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedAnglesChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedScaleChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNotifyBoneTransformsChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bBoneMergeFlex; // 0x0
	// MNetworkDisable
	bitfield:2 m_nLatchAbsOrigin; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0x123
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0x124
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x125
	// MNetworkEnable
	CUtlStringToken m_name; // 0x128
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x140
	// MNetworkDisable
	float m_flZOffset; // 0x144
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x148
};

// Aligment: 8
// Size: 64
class CNetworkedSequenceOperation
{
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x8
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	// MNetworkChangeCallback "sequenceOpCycleChanged"
	float m_flCycle; // 0x10
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CNetworkedQuantizedFloat m_flWeight; // 0x18
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x30
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x31
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x34
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x38
};

// Aligment: 6
// Size: 80
class CNetworkedIKProceduralTargetContext
{
public:
	// MNetworkEnable
	int32_t m_nChainIndex; // 0x20
	// MNetworkEnable
	int32_t m_nRuleIndex; // 0x24
	// MNetworkEnable
	Vector m_vTargetPosition; // 0x28
	// MNetworkEnable
	Quaternion m_qTargetOrientation; // 0x34
	// MNetworkEnable
	// MNetworkPriority "48"
	float m_flWeight; // 0x44
	// MNetworkEnable
	bool m_bIsValid; // 0x48
};

// Aligment: 1
// Size: 80
class CNetworkedIKContext
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< CNetworkedIKProceduralTargetContext > m_ProceduralTargetContexts; // 0x8
};

// Aligment: 8
// Size: 576
class CModelState
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x188
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x22a
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x22b
	// MNetworkDisable
	bool m_bIsJiggleBonesEnabled; // 0x22c
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x22d
};

// Aligment: 12
// Size: 1216
class CSkeletonInstance : public CGameSceneNode
{
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x170
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x3b0
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x3b1
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x3b2
	// MNetworkDisable
	bool m_bEnableIK; // 0x3b3
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x3b4
	// MNetworkDisable
	bitfield:1 m_bDirtyMotionType; // 0x0
	// MNetworkDisable
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x3b8
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x3bc
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x408
	// MNetworkEnable
	CNetworkedIKContext m_NetworkedIKContext; // 0x410
};

// Aligment: 1
// Size: 16
class IntervalTimer
{
public:
	// MNetworkEnable
	float m_timestamp; // 0x8
};

// Aligment: 2
// Size: 16
class CountdownTimer
{
public:
	// MNetworkEnable
	float m_duration; // 0x8
	// MNetworkEnable
	float m_timestamp; // 0xc
};

// Aligment: 7
// Size: 616
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	float32[64] m_flValues; // 0x10
	// MNetworkEnable
	int32[64] m_nValueCounts; // 0x110
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210
	// MNetworkEnable
	float m_flInterval; // 0x214
	// MNetworkEnable
	float m_flFinalValue; // 0x218
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c
	// MNetworkEnable
	bool m_bStopped; // 0x220
};

// Aligment: 25
// Size: 5808
class CAnimGraphNetworkedVariables
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_BoolVariables"
	C_NetworkUtlVectorBase< bool > m_NetBoolVariables; // 0x8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_ByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_NetByteVariables; // 0x20
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_UInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_NetUInt16Variables; // 0x38
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_IntVariables"
	C_NetworkUtlVectorBase< int32 > m_NetIntVariables; // 0x50
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_UInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_NetUInt32Variables; // 0x68
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_FloatVariables"
	C_NetworkUtlVectorBase< float32 > m_NetFloatVariables; // 0x80
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_VectorVariables"
	C_NetworkUtlVectorBase< Vector > m_NetVectorVariables; // 0x98
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_QuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_NetQuaternionVariables; // 0xb0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	C_NetworkUtlVectorBase< bool > m_PredNetBoolVariables; // 0xc8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0xe0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0xf8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x110
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x128
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x140
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0x158
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0x170
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetBoolVariables"
	C_NetworkUtlVectorBase< bool > m_LocalPredNetBoolVariables; // 0x188
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_LocalPredNetByteVariables; // 0x1a0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_LocalPredNetUInt16Variables; // 0x1b8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetIntVariables"
	C_NetworkUtlVectorBase< int32 > m_LocalPredNetIntVariables; // 0x1d0
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_LocalPredNetUInt32Variables; // 0x1e8
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_LocalPredNetFloatVariables; // 0x200
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_LocalPredNetVectorVariables; // 0x218
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_LocalPredNetQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_LocalPredNetQuaternionVariables; // 0x230
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; // 0x169c
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

// Aligment: 30
// Size: 736
class CProjectedTextureBase
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc
	// MNetworkEnable
	bool m_bState; // 0x10
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11
	// MNetworkEnable
	float m_flLightFOV; // 0x14
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20
	// MNetworkEnable
	Color m_LightColor; // 0x24
	// MNetworkEnable
	float m_flIntensity; // 0x28
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30
	// MNetworkEnable
	bool m_bVolumetric; // 0x34
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c
	// MNetworkEnable
	float m_flAmbient; // 0x50
	// MNetworkEnable
	char[512] m_SpotlightTextureName; // 0x54
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x254
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x258
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x25c
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x260
	// MNetworkEnable
	float m_flProjectionSize; // 0x264
	// MNetworkEnable
	float m_flRotation; // 0x268
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x26c
public:
	static float &Get_m_flVisibleBBoxMinHeight() { return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fiels[0]->m_instance); }
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

// Aligment: 14
// Size: 720
class CFlashlightEffect
{
public:
	bool m_bIsOn; // 0x8
	bool m_bMuzzleFlashEnabled; // 0x18
	float m_flMuzzleFlashBrightness; // 0x1c
	Quaternion m_quatMuzzleFlashOrientation; // 0x20
	Vector m_vecMuzzleFlashOrigin; // 0x30
	float m_flFov; // 0x3c
	float m_flFarZ; // 0x40
	float m_flLinearAtten; // 0x44
	bool m_bCastsShadows; // 0x48
	float m_flCurrentPullBackDist; // 0x4c
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x50
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x58
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x60
	char[64] m_textureName; // 0x68
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
	uint16_t m_ListIndex; // 0xc4
	int32_t m_queryHandle; // 0xc8
};

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0
	float m_fNextEvent; // 0x4
};

// Aligment: 8
// Size: 48
struct VPhysicsCollisionAttribute_t
{
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; // 0x8
	// MNetworkEnable
	uint64_t m_nInteractsWith; // 0x10
	// MNetworkEnable
	uint64_t m_nInteractsExclude; // 0x18
	// MNetworkEnable
	uint32_t m_nEntityId; // 0x20
	// MNetworkEnable
	uint32_t m_nOwnerId; // 0x24
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x28
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x2a
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x2b
};

// Aligment: 17
// Size: 176
class CCollisionProperty
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x40
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x4c
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x5a
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x5b
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x5c
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x5d
	// MNetworkEnable
	uint8_t m_CollisionGroup; // 0x5e
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x5f
	float m_flBoundingRadius; // 0x60
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x64
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x70
	Vector m_vecSurroundingMaxs; // 0x7c
	Vector m_vecSurroundingMins; // 0x88
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x94
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0xa0
	// MNetworkEnable
	float m_flCapsuleRadius; // 0xac
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

// Aligment: 21
// Size: 112
class CEffectData
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vOrigin; // 0x8
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vStart; // 0x14
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vNormal; // 0x20
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vAngles; // 0x2c
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c
	// MNetworkEnable
	float m_flScale; // 0x40
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flMagnitude; // 0x44
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flRadius; // 0x48
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58
	// MNetworkEnable
	uint8_t m_nPenetrate; // 0x5c
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5e
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x60
	// MNetworkEnable
	uint8_t m_nColor; // 0x62
	// MNetworkEnable
	uint8_t m_fFlags; // 0x63
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; // 0x64
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x68
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x6c
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6e
};

// Aligment: 29
// Size: 560
class C_EnvWindShared
{
public:
	// MNetworkEnable
	float m_flStartTime; // 0x8
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc
	// MNetworkEnable
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	uint16_t m_iMaxGust; // 0x1a
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20
	// MNetworkEnable
	float m_flGustDuration; // 0x24
	// MNetworkEnable
	uint16_t m_iGustDirChange; // 0x28
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
	uint16_t m_iInitialWindDir; // 0x68
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

// Aligment: 2
// Size: 8
struct C_EnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 2
// Size: 8
struct C_EnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 13
// Size: 96
struct shard_model_desc_t
{
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10
	// MNetworkEnable
	ShardSolid_t m_solid; // 0x18
	// MNetworkEnable
	ShatterPanelMode m_ShatterPanelMode; // 0x19
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0x1c
	// MNetworkEnable
	Vector2D m_vecStressPositionA; // 0x24
	// MNetworkEnable
	Vector2D m_vecStressPositionB; // 0x2c
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38
	// MNetworkEnable
	float m_flGlassHalfThickness; // 0x50
	// MNetworkEnable
	bool m_bHasParent; // 0x54
	// MNetworkEnable
	bool m_bParentFrozen; // 0x55
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x58
	// MNetworkEnable
	CUtlStringToken m_LightGroup; // 0x5c
};

// Aligment: 0
// Size: 8
class C_GameRules
{
public:
// <no members described>
};

// Aligment: 10
// Size: 80
class CGlowProperty
{
public:
	Vector m_fGlowColor; // 0x8
	int32_t m_iGlowTeam; // 0x14
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x34
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x38
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x3c
	// MNetworkEnable
	bool m_bFlashing; // 0x40
	// MNetworkEnable
	float m_flGlowTime; // 0x44
	// MNetworkEnable
	float m_flGlowStartTime; // 0x48
	bool m_bGlowing; // 0x4c
};

// Aligment: 0
// Size: 8
class C_MultiplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 24
// Size: 104
struct fogparams_t
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; // 0x8
	// MNetworkEnable
	Color colorPrimary; // 0x14
	// MNetworkEnable
	Color colorSecondary; // 0x18
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20
	// MNetworkEnable
	float start; // 0x24
	// MNetworkEnable
	float end; // 0x28
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c
	// MNetworkEnable
	float maxdensity; // 0x30
	// MNetworkEnable
	float exponent; // 0x34
	// MNetworkEnable
	float HDRColorScale; // 0x38
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float lerptime; // 0x50
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; // 0x58
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; // 0x5c
	// MNetworkEnable
	bool enable; // 0x60
	// MNetworkEnable
	bool blend; // 0x61
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x62
	bool m_bPadding; // 0x63
};

// Aligment: 14
// Size: 64
struct C_fogplayerparams_t
{
public:
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

// Aligment: 6
// Size: 144
struct sky3dparams_t
{
public:
	// MNetworkEnable
	int16_t scale; // 0x8
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; // 0xc
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
	// MNetworkEnable
	fogparams_t fog; // 0x20
	// MNetworkEnable
	CUtlStringToken m_nWorldGroupID; // 0x88
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

// Aligment: 7
// Size: 96
struct TransitioningLayer_t
{
public:
	CNetworkedSequenceOperation m_op; // 0x8
	float m_flStartAnimTime; // 0x48
	float m_flStartWeight; // 0x4c
	float m_flAnimTime; // 0x50
	int32_t m_nOrder; // 0x54
	float m_flPlaybackRate; // 0x58
	float m_flFadeOutDuration; // 0x5c
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

// Aligment: 0
// Size: 8
class C_TeamplayRules : public C_MultiplayRules, C_GameRules
{
public:
// <no members described>
};

// Aligment: 18
// Size: 128
struct C_ViewSmoothingData_t
{
public:
	C_BaseAnimating* pVehicle; // 0x0
	bool bClampEyeAngles; // 0x8
	float flPitchCurveZero; // 0xc
	float flPitchCurveLinear; // 0x10
	float flRollCurveZero; // 0x14
	float flRollCurveLinear; // 0x18
	float flFOV; // 0x1c
	ViewLockData_t pitchLockData; // 0x20
	ViewLockData_t rollLockData; // 0x30
	bool bDampenEyePosition; // 0x40
	bool bRunningEnterExit; // 0x41
	bool bWasRunningAnim; // 0x42
	float flEnterExitStartTime; // 0x44
	float flEnterExitDuration; // 0x48
	QAngle vecAnglesSaved; // 0x4c
	Vector vecOriginSaved; // 0x58
	QAngle vecAngleDiffSaved; // 0x64
	QAngle vecAngleDiffMin; // 0x70
};

// Aligment: 11
// Size: 424
class CAI_BaseNPCVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	// MPropertyGroupName "Sounds"
	CFootstepTableHandle m_hFootstepSounds; // 0x108
	int32_t m_nMaxHealth; // 0x110
	CUtlVector< CEmbeddedSubclass< CSteamPalModifier > > m_vecIntrinsicModifiers; // 0x118
	CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // 0x130
	// MPropertyGroupName "Damage"
	CSkillFloat m_flHeadDamageMultiplier; // 0x148
	// MPropertyGroupName "Damage"
	CSkillFloat m_flChestDamageMultiplier; // 0x158
	// MPropertyGroupName "Damage"
	CSkillFloat m_flStomachDamageMultiplier; // 0x168
	// MPropertyGroupName "Damage"
	CSkillFloat m_flArmDamageMultiplier; // 0x178
	// MPropertyGroupName "Damage"
	CSkillFloat m_flLegDamageMultiplier; // 0x188
	// MPropertyGroupName "Damage"
	CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x198
};

// Aligment: 6
// Size: 40
struct NPCAbilityTarget_t
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc
	// MNetworkEnable
	BodyLocations_t m_locTargetEntityBodyLocation; // 0x10
	// MNetworkEnable
	TargetOriginType_t m_locGatherTargetEntityOriginType; // 0x14
	// MNetworkEnable
	TargetOriginType_t m_locUsageTargetEntityOriginType; // 0x18
	// MNetworkEnable
	Vector m_vecWorldPosition; // 0x1c
};

// Aligment: 19
// Size: 616
class CAI_DefaultNPCVData : public CAI_BaseNPCVData, CEntitySubclassVDataBase
{
public:
	Class_T m_nClassifyAs; // 0x1a8
	// MPropertyGroupName "Flinching"
	CRangeFloat m_flInterruptFlinchCooldown; // 0x1ac
	// MPropertyGroupName "Flinching"
	CRangeFloat m_flNonInterruptFlinchCooldown; // 0x1b4
	// MPropertyGroupName "Flinching"
	// MPropertyDescription "When checking for flinch movement clearance, this is the minimum distance that must be clear for us to do a large flinch."
	float m_flFlinchClearDistanceForLarge; // 0x1bc
	// MPropertyGroupName "Flinching"
	// MPropertyDescription "When checking for flinch movement clearance, this is the minimum distance that must be clear for us to do a small flinch. If this distance isn't clear, we'll choose a stationary flinch."
	float m_flFlinchClearDistanceForSmall; // 0x1c0
	// MPropertyGroupName "Flinching"
	// MPropertyDescription "when hit by DMG_TMPRAGDOLL, this is the minimum amount of time this npc will stay in tmp ragdoll (scaled by damage)"
	CSkillFloat m_flTmpRagdollDamageTimeMin; // 0x1c4
	// MPropertyGroupName "Flinching"
	// MPropertyDescription "when hit by DMG_TMPRAGDOLL, this is the maximum amount of time this npc will stay in tmp ragdoll (scaled by damage)"
	CSkillFloat m_flTmpRagdollDamageTimeMax; // 0x1d4
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sDeathSound; // 0x1e8
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sPainSound; // 0x1f8
	// MPropertyDescription "If the distance between the nearest point on a hitscan bullet's trajectory and this NPC's eyes is less than this react amount, this NPC will be notified of the incoming fire via the WarnOfIncomingFire() virtual."
	CRangeFloat m_flIncomingFireDistance; // 0x208
	// MPropertyDescription "Abilities are things like alt-fire or even weapon upgrades"
	CUtlVector< NPCAbilityDesc_t > m_vecAbilities; // 0x210
	// MPropertyFriendlyName "Auto Unholster Held Ability"
	// MPropertyDescription "If set, the NPC will automatically unholster the first held ability it's granted."
	bool m_bAutoUnholsterHeldAbility; // 0x228
	// MPropertyGroupName "Throw & Catch"
	bool m_bCatchThrownProps; // 0x229
	// MPropertyGroupName "Throw & Catch"
	// MPropertyDescription "If already holding an item, drop it when another item is thrown at us."
	// MPropertySuppressExpr "m_bCatchThrownProps == 0"
	bool m_bDropHeldItemOnThrownCollision; // 0x22a
	// MPropertyGroupName "Throw & Catch"
	// MPropertyDescription "Graph param that will be set when the entity knows something has been thrown to them (the prop is still in the air)"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	// MPropertySuppressExpr "m_bCatchThrownProps == 0"
	CUtlString m_sReadyCatchAnimgraphParam; // 0x230
	// MPropertyGroupName "Throw & Catch"
	// MPropertyDescription "Graph param that will be set the moment the thrown prop reaches them."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	// MPropertySuppressExpr "m_bCatchThrownProps == 0"
	CUtlString m_sCatchAnimgraphParam; // 0x238
	// MPropertyGroupName "Throw & Catch"
	// MPropertyDescription "Graph param that will be set the moment the thrown prop reaches them."
	// MPropertyAttributeEditor "VDataModelAttachment( m_sModelName )"
	// MPropertySuppressExpr "m_bCatchThrownProps == 0"
	CUtlString m_sCatchAttachmentName; // 0x240
	// MPropertyGroupName "Throw & Catch"
	// MPropertyDescription "If this NPC supports catching and throwing, show interest in props with any of these string attributes."
	// MPropertySuppressExpr "m_bCatchThrownProps == 0"
	CUtlVector< CUtlString > m_CatchablePropAttriburtes; // 0x248
	// MPropertyDescription "If non-empty, this refers to a squad mode entry in npc_squad_modes.txt. The first NPC to be added to a squad will use this mode as the squad mode."
	CUtlString m_sDefaultSquadMode; // 0x260
};

// Aligment: 3
// Size: 856
class CAI_BaseActorVData : public CAI_DefaultNPCVData, CAI_BaseNPCVData, CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Mood File"
	// MPropertyGroupName "Acting"
	// MPropertyAttributeEditor "AssetBrowse( vdata )"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVDataResource > > m_hMoodFile; // 0x268
	// MPropertyFriendlyName "Actor Name"
	// MPropertyGroupName "Acting"
	CUtlString m_sActorName; // 0x348
	// MPropertyGroupName "Acting"
	ActorClasses_t m_nActorClass; // 0x350
};

// Aligment: 3
// Size: 24
struct AWS_AbilityUsageData_t
{
public:
	// MNetworkEnable
	CUtlStringToken m_nAbilityID; // 0x8
	AbilityPathType_t m_PathTypeToBeUsed; // 0xc
	bool m_bRestrictToDuringResolution; // 0x10
};

// Aligment: 4
// Size: 104
class CAI_AbilityServices : public CAI_Component
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< CBaseNPCAbility > > m_vecAbilities; // 0x18
	// MNetworkEnable
	AWS_AbilityUsageData_t m_AbilityToBeUsed; // 0x30
	// MNetworkEnable
	AWS_AbilityUsageData_t m_AbilityBeingUsed; // 0x48
	// MNetworkEnable
	bool m_bInAbilityUseSchedule; // 0x60
};

// Aligment: 1
// Size: 32
class CAI_StanceServices : public CAI_Component
{
public:
	// MNetworkEnable
	StanceType_t m_nCurrentStance; // 0x18
};

// Aligment: 62
// Size: 952
class CBaseNPCAbilityVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Priority relative to other abilities on this NPC. All abilities will be evaluated, and the highest priority one that passes its evaluation step will be used."
	int32_t m_nPriority; // 0x28
	// MPropertyDescription "Does this ability operate on the current enemy?"
	// MPropertyGroupName "Evaluating"
	bool m_bAbilityOperatesOnCurrentEnemy; // 0x2c
	// MPropertyDescription "Must this ability be held (only 1 can be held at a time) to be active?"
	bool m_bMustBeHeld; // 0x2d
	// MPropertyDescription "Only used for held abilities. Should be the desired value of the 'e_weapon' animgraph variable on this NPC, when it is holding this Ability."
	CUtlString m_sDeployedAnimgraphWeaponEnum; // 0x30
	// MPropertyDescription "Model to be bonemerged to the parent NPC"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x38
	// MPropertyDescription "Entity to be bonemerged to the parent NPC"
	// MPropertyGroupName "Visuals"
	CEmbeddedSubclass< C_BaseEntity > m_hModelEntity; // 0x118
	// MPropertyDescription "Allows the ability to override body locations specified in the owner NPC"
	// MPropertyGroupName "Visuals"
	CUtlMap< BodyLocations_t, NPCAbilityBodyLocationOverride_t > m_mapBodyLocationOverrides; // 0x128
	// MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0x148
	CUtlMap< NPCAbilitySound_t, CSoundEventName > m_mapAbilitySounds; // 0x228
	CSkillDamage m_damageInfo; // 0x248
	DamageTypes_t m_nDamageType; // 0x25c
	CUtlVector< CEmbeddedSubclass< CSteamPalModifier > > m_vecIntrinsicModifiers; // 0x260
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_iAmmoType; // 0x278
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 100"
	// MPropertyGroupName "Ammo"
	int32_t m_nMaxAmmo; // 0x27c
	// MPropertyDescription "If set, and this is a Secondary ability attached to a Primary one, this Ability will require/consume the ammunition of the Primary ability, not its own."
	// MPropertyGroupName "Ammo"
	bool m_bUsePrimaryAbilityAmmo; // 0x280
	// MPropertyGroupName "Range"
	// MPropertyDescription "Min Range. By default, this corresponds both to the range at which the ability will be seeked (for schedule selection) as well as used. You can separately override the 'move to' range to cause the system to attempt to move to use range automatically."
	float m_fMinRange; // 0x284
	// MPropertyGroupName "Range"
	// MPropertyDescription "Max Range. By default, this corresponds both to the range at which the ability will be seeked (for schedule selection) as well as used. You can separately override the 'move to' range to cause the system to attempt to move to use range automatically."
	float m_fMaxRange; // 0x288
	// MPropertyGroupName "Range"
	float m_fMinAdvanceToRange; // 0x28c
	// MPropertyGroupName "Range"
	// MPropertyDescription "Min Range to move to before using the ability ( <0 on both min + max disables move to )"
	float m_flMinMoveToRange; // 0x290
	// MPropertyGroupName "Range"
	// MPropertyDescription "Max Range to move to before using the ability ( <0 on both min + max disables move to )"
	float m_flMaxMoveToRange; // 0x294
	// MPropertyDescription "When cooling down yourself, or squadmates, if this name is specified, it will cool down all abilities with the same scope name. Useful to put all grenade throws on a shared cooldown for example."
	// MPropertyGroupName "Cooldown"
	CUtlString m_sSharedCooldownName; // 0x298
	// MPropertyDescription "The amount of time after using this ability before it can be used again."
	// MPropertyGroupName "Cooldown"
	CRangeFloat m_flCooldownDuration; // 0x2a0
	// MPropertyDescription "If set, use of this ability will also cause squad mates to delay their usage of this same ability."
	// MPropertyGroupName "Cooldown"
	CRangeFloat m_flCooldownDurationSquadMates; // 0x2a8
	// MPropertyDescription "Should this ability start on cooldown?"
	// MPropertyGroupName "Cooldown"
	bool m_bStartOnCooldown; // 0x2b0
	// MPropertyDescription "The amount of time after using this ability before the NPC is allowed to use *any* of its abilities."
	// MPropertyGroupName "Cooldown"
	CRangeFloat m_flAttackDelay; // 0x2b4
	// MPropertyDescription "Can this ability interrupt other schedules?"
	// MPropertyGroupName "Evaluating"
	bool m_bCanInterruptSchedules; // 0x2bc
	// MPropertyDescription "Should this ability attempt to suggest a schedule how to get into position in order to use it? An NPC can only seek to get one ability usable at a time."
	// MPropertyGroupName "Evaluating"
	bool m_bShouldSeekToBeUsable; // 0x2bd
	// MPropertyDescription "If the ability usage evaluation indicates it cannot be used, this is the delay before the ability can check again."
	// MPropertyGroupName "Evaluating"
	CRangeFloat m_flEvaluationDelay; // 0x2c0
	// MPropertyDescription "Body location on the owning NPC to use for gathering LOS conditions from"
	// MPropertyGroupName "Evaluating"
	BodyLocations_t m_nLOSTestLocation; // 0x2c8
	// MPropertyDescription "Sets whether or not the owner of this ability is required to have LOS to a target to be able to use the ability. If it does, the ability won't attempt to gather conditions if the owner doesn't have LOS to the target."
	// MPropertyGroupName "Evaluating"
	bool m_bRequiresOwnerHasLOS; // 0x2cc
	// MPropertyDescription "The enemy location that this ability will use when gathering conditions to determine whether or not it can be performed. Last Seen Position is the last place we saw our enemy. Last Known Position is updated for a short time after lose sight of our enemy. So if our enemy ran around a corner, Last Seen Position would be right before they vanished around the corner, and Last Known Position would be around the corner and out of sight."
	// MPropertyGroupName "Evaluating"
	TargetOriginType_t m_nGatherCondEnemyOriginType; // 0x2d0
	// MPropertyDescription "What angle relative to the eyes direction does the target have to be in to use the ability?"
	// MPropertyGroupName "Evaluating"
	// MPropertyAttributeRange "0 360"
	float m_flFacingAngle; // 0x2d4
	// MPropertyDescription "The name of the first squad slot in a range of squad slots, one of which must be claimable to use this ability."
	// MPropertyGroupName "Evaluating"
	SquadSlotId_t m_nSquadSlotRangeMin; // 0x2d8
	// MPropertyDescription "The name of the last squad slot in a range of squad slots, one of which must be claimable to use this ability. If this is left blank, it'll be considered as matching the 'Squad Slot Range Min', meaning the ability will use a single squad slot."
	// MPropertyGroupName "Evaluating"
	SquadSlotId_t m_nSquadSlotRangeMax; // 0x2dc
	// MPropertyDescription "Only usable if there aren't any squad mates within this range of our enemy target. Useful for preventing explosive attacks from damaging squad mates."
	// MPropertyGroupName "Evaluating"
	float m_flMinDistToSquadMates; // 0x2e0
	// MPropertyFriendlyName "Pre-Attack Animgraph Parameter"
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph before it performs this attack, if it's not set already. If it's not set, it will be set, and the NPC will wait for the 'Pre-Attack Animgraph Finish Tag' to be fired by the animgraph before continuing."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphParamPre; // 0x2e8
	// MPropertyFriendlyName "Pre-Attack Animgraph Finish Tag"
	// MPropertyDescription "The animgraph status tag that will be set by the animgraph when it has finished performing the 'Pre-Attack Animgraph Parameter' step."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlString m_sAnimgraphFinishTagPre; // 0x2f0
	// MPropertyDescription "Optional amount of time the NPC waits after performing the pre-attack phase, before continuing its AI."
	// MPropertyGroupName "Animation"
	CRangeFloat m_flPreAbilityUseWait; // 0x2f8
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph when it performs this attack."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphParam; // 0x300
	// MPropertyDescription "The animgraph status tag that will be waited for by the NPC when it has finished performing the attack."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlString m_sAnimgraphFinishTag; // 0x308
	// MPropertyFriendlyName "Post-Attack Animgraph Parameter"
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph after it performs this attack."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphParamPost; // 0x310
	// MPropertyFriendlyName "Post-Attack Animgraph Finish Tag"
	// MPropertyDescription "The animgraph status tag that will be waited for by the NPC when it has finished performing the Post Attack animation step."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlString m_sAnimgraphFinishTagPost; // 0x318
	// MPropertyDescription "Is the anim graph capable of auto-repeating the attack if the ability still thinks it's valid to attack? Note auto-repeating will not trigger cooldowns."
	// MPropertyGroupName "Animation"
	bool m_bCanAutoRepeat; // 0x320
	// MPropertyDescription "Optional amount of time the NPC waits after attacking before continuing its AI."
	// MPropertyGroupName "Animation"
	CRangeFloat m_flPostAbilityUseWait; // 0x324
	// MPropertyDescription "When triggered, it causes the ability to run ability-specific pre-triggering code.  Used for two-stage hits (like a leap or spot where the attack commits to a direction before it's actually performed)."
	// MPropertyGroupName "Animation"
	GameAnimEventIndex_t m_nAnimEventSetup; // 0x32c
	// MPropertyDescription "When triggered, the ability is used"
	// MPropertyGroupName "Animation"
	GameAnimEventIndex_t m_nAnimEventTrigger; // 0x330
	// MPropertyFriendlyName "Enemy Location To Target When Performing"
	// MPropertyDescription "The enemy location that this ability will target when performing the ability. Last Seen Position is the last place we saw our enemy. Last Known Position is updated for a short time after lose sight of our enemy. So if our enemy ran around a corner, Last Seen Position would be right before they vanished around the corner, and Last Known Position would be around the corner and out of sight."
	// MPropertyGroupName "Using"
	TargetOriginType_t m_nUsageCondEnemyOriginType; // 0x334
	// MPropertyDescription "When firing at the player, is this weapon allowed to miss and hit interesting targets nearby, for visual flair?"
	// MPropertyGroupName "Using"
	bool m_bAllowedToMiss; // 0x338
	// MPropertyDescription "If an NPC uses this ability while moving, should the usage be aborted if the NPC finishes the movement?"
	// MPropertyGroupName "Using"
	bool m_bAbortUsageOnMoveFinish; // 0x339
	// MPropertyGroupName "Using"
	// MPropertyDescription "Is the NPC allowed to do displacement during non-interrupt staggers while performing this ability? Generally only true for attacking abilities."
	bool m_bAllowFlinchDisplacementDuringUsage; // 0x33a
	// MPropertyGroupName "Using"
	// MPropertyDescription "A modifier that will be added to our NPC when it starts using this ability, and removed once it finishes."
	CEmbeddedSubclass< CBaseModifier > m_OwnerModifierWhileUsing; // 0x340
	// MPropertyGroupName "Using"
	// MPropertyDescription "A modifier that will be added to our NPC when it finishes using this ability."
	CEmbeddedSubclass< CBaseModifier > m_OwnerModifierAfterUsage; // 0x350
	// MPropertyGroupName "Using"
	// MPropertyDescription "A modifier that will be added to our NPC whenever the ability trigger occurs."
	CEmbeddedSubclass< CBaseModifier > m_OwnerModifierOnTrigger; // 0x360
	// MPropertyDescription "Only used for held abilities. Never drop this ability, always immediately remove it instead."
	// MPropertyGroupName "Drop"
	bool m_bDestroyInsteadOfDrop; // 0x370
	// MPropertyDescription "Always Drop this ability."
	// MPropertyGroupName "Drop"
	bool m_bAlwaysDrop; // 0x371
	// MPropertyGroupName "Drop"
	bool m_bAddRandomDropVelocity; // 0x372
	// MPropertyGroupName "Drop"
	CUtlVector< NPCAbilityDropBehavior_t > m_vecDropBehaviors; // 0x378
	// MPropertyGroupName "Drop"
	CUtlVector< NPCAbilityPickupBehavior_t > m_vecPickupBehaviors; // 0x390
	// MPropertyDescription "When pathing to the target, range tolerance"
	// MPropertyGroupName "Evaluating"
	float m_flRangeTolerance; // 0x3a8
	// MPropertyDescription "When building a path to the target, avoid our enemy by this distance"
	float m_flEnemyPathAvoidance; // 0x3ac
	// MPropertyDescription "Time to hold unreachable targets before reevaluating"
	float m_flTargetEntityUnreachableTimeout; // 0x3b0
	// MPropertyDescription "Should this ability be visible when other NPCs ask this ability's NPC what it's capable of?"
	bool m_bIncludeInNPCsCapabilityQueries; // 0x3b4
};

// Aligment: 2
// Size: 288
class CNPCAbilityModelVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	CUtlVector< CEmbeddedSubclass< CSteamPalModifier > > m_vecIntrinsicModifiers; // 0x108
};

// Aligment: 1
// Size: 968
class CNPCAbilityAddModifierVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Modifier VData: Modifier to Apply to Caster"
	CEmbeddedSubclass< CBaseModifier > m_Modifier; // 0x3b8
};

// Aligment: 1
// Size: 960
class CNPCAbilityRemoveModifierVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Modifier to Remove"
	CUtlString m_sRemoveModifier; // 0x3b8
};

// Aligment: 7
// Size: 1048
class CNPCAbilityMeleeAttackVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Hit Triggers"
	// MPropertyGroupName "Animation"
	CUtlVector< MeleeAttackUseTrigger_t > m_vecTriggers; // 0x3b8
	// MPropertyGroupName "Evaluating"
	ENPCAbilityMeleeAttackEvaluationTest m_EvaluationTest; // 0x3d0
	// MPropertyGroupName "Evaluating"
	Vector m_vecEvaluatingMeleeAttackMins; // 0x3d4
	// MPropertyGroupName "Evaluating"
	Vector m_vecEvaluatingMeleeAttackMaxs; // 0x3e0
	// MPropertyGroupName "Using"
	Vector m_vecUsingMeleeAttackMins; // 0x3ec
	// MPropertyGroupName "Using"
	Vector m_vecUsingMeleeAttackMaxs; // 0x3f8
	// MPropertyGroupName "Using"
	CEmbeddedSubclass< CBaseModifier > m_ModifierOnHit; // 0x408
};

// Aligment: 4
// Size: 984
class CNPCAbilitySpawnVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyAttributeEditor "VDataChoice( scripts/npc_units.vdata )"
	// MPropertyGroupName "Using"
	CSubclassNameGeneric m_sSubclassToSpawn; // 0x3b8
	// MPropertyGroupName "Using"
	CRangeInt m_nNumToSpawn; // 0x3c8
	// MPropertyGroupName "Using"
	bool m_bSpawnInRagdoll; // 0x3d0
	// MPropertyGroupName "Using"
	float m_flRagdollSpawnForceMultiplier; // 0x3d4
};

// Aligment: 8
// Size: 1440
class CNPCWeaponHitscanVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x3b8
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0x498
	// MPropertyGroupName "Using"
	CRangeInt m_nBurstSize; // 0x578
	// MPropertyGroupName "Using"
	Vector m_vecBulletSpreadCone; // 0x580
	// MPropertyGroupName "Using"
	float m_flSpreadBias; // 0x58c
	// MPropertyGroupName "Using"
	int32_t m_nPellets; // 0x590
	// MPropertyDescription "When calculating the aim spread, should this ability apply the current aim refinement value of the wielding NPC?"
	// MPropertyGroupName "Using"
	bool m_bApplyAimRefinement; // 0x594
	// MPropertyGroupName "Using"
	int32_t m_nPowerCostPerShot; // 0x598
};

// Aligment: 19
// Size: 912
class CModifierVData : public CEntitySubclassVDataBase
{
public:
	CModifierLevelFloat m_flDuration; // 0x28
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Particle system to attach to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleEffect; // 0x38
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Status Effect to apply to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleStatusEffect; // 0x118
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Screen-space particle system to create if the parent of the modifier is the local player"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strScreenParticleEffect; // 0x1f8
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Priority of this status effect relative to others"
	int32_t m_nStatusEffectPriority; // 0x2d8
	// MPropertyGroupName "Visuals"
	CUtlVector< ModifierRenderAttribute_t > m_vecRenderAttributes; // 0x2e0
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sStartSound; // 0x2f8
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sAmbientLoopingSound; // 0x308
	// MPropertyGroupName "Sounds"
	ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients; // 0x318
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sEndSound; // 0x320
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nEnabledStateMask; // 0x330
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nDisabledStateMask; // 0x334
	// MPropertyGroupName "Scripted Settings"
	ModifierAttribute_t m_nAttributes; // 0x338
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Modifier Values"
	CUtlVector< ModifierScriptValue_t > m_vecScriptValues; // 0x340
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Event Handlers"
	CUtlVector< ModifierScriptedEventHandler_t > m_vecScriptEventHandlers; // 0x358
	ModifierDisableGroup_t m_nDisableGroupsMask; // 0x370
	// MPropertyDescription "When set, the modifier only provides data to requests made directly to the attached entity and not to other modifier properties that the owner provides to."
	bool m_bPrivateAccess; // 0x374
	// MPropertyDescription "When set, the modifier will not be visible to UI or visible modifier list."
	bool m_bIsHidden; // 0x375
	// MPropertyDescription "When to consider the modifier a debuff."
	ModifierDebuffType_t m_eDebuffType; // 0x378
};

// Aligment: 18
// Size: 120
class CBaseModifier
{
public:
	ModifierSerialNumber_t m_nSerialNumber; // 0x24
	float m_flLastAppliedTime; // 0x28
	float m_flDuration; // 0x2c
	CHandle< C_BaseEntity > m_hCaster; // 0x30
	CHandle< C_BaseEntity > m_hAbility; // 0x34
	CModifierHandleBase m_hAuraProvider; // 0x38
	uint8_t m_iAttributes; // 0x50
	uint8_t m_iTeam; // 0x51
	int16_t m_iStackCount; // 0x52
	int16_t m_iMaxStackCount; // 0x54
	uint8_t m_eDestroyReason; // 0x56
	bool m_bDisabled; // 0x57
	float m_flPreviousTick; // 0x58
	float m_flThinkInterval; // 0x5c
	float m_flThinkIntervalStartTime; // 0x60
	float m_flTimeScale; // 0x64
	CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects; // 0x68
	ModifierRuntimeHandle_t m_hModifierListHandle; // 0x70
};

// Aligment: 3
// Size: 952
class CModifierVData_BaseAura : public CModifierVData, CEntitySubclassVDataBase
{
public:
	CModifierLevelFloat m_flAuraRadius; // 0x390
	int32_t m_nAmbientParticleRadiusControlPoint; // 0x3a0
	// MPropertyDescription "Aura - Modifier to Apply"
	// MPropertyFriendlyName "Modifier Provided By Aura"
	CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // 0x3a8
};

// Aligment: 10
// Size: 240
class CModifierProperty
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
	CHandle< C_BaseEntity > m_hOwner; // 0x20
	uint8_t m_nProviderVisitedFlags; // 0x8e
	bool m_bModifierStatesDirty; // 0x8f
	int8_t m_iLockRefCount; // 0x90
	ModifierPropRuntimeHandle_t m_hHandle; // 0x92
	uint16_t m_nBroadcastEventListenerMask; // 0x94
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecProviders; // 0xa0
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32[1] m_bvEnabledStateMask; // 0xbc
};

// Aligment: 1
// Size: 24
class CModifierHandleBase
{
public:
	// MNetworkEnable
	// MNetworkSerializer "modifier_handle"
	uint64_t m_hStableHandle; // 0x8
};

// Aligment: 5
// Size: 608
class CSteamPalPlayer_CameraServices : public CPlayer_CameraServices, CPlayerComponent
{
public:
	// MNetworkEnable
	bool m_bViewFrozen; // 0x238
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCameraTarget; // 0x23c
	// MNetworkEnable
	Vector m_vMoveOffset; // 0x240
	// MNetworkEnable
	QAngle m_vLookOffset; // 0x24c
	float m_flFOVOffset; // 0x258
};

// Aligment: 0
// Size: 128
class CSteamPalPlayer_MovementServices : public CPlayer_MovementServices, CPlayerComponent
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class C_SteamPalGameRules : public C_SingleplayRules, C_GameRules
{
public:
	bool m_bIsInAscentSection; // 0x10
};

// Aligment: 0
// Size: 120
class CSteamPalModifier : public CBaseModifier
{
public:
// <no members described>
};

// Aligment: 0
// Size: 120
class CSteamPalModifier_Base : public CSteamPalModifier, CBaseModifier
{
public:
// <no members described>
};

// Aligment: 0
// Size: 952
class CSteamPalModifierAuraVData : public CModifierVData_BaseAura, CModifierVData, CEntitySubclassVDataBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 152
class CSteampal_Turret_ManagerVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sIntroTurretType; // 0x28
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sIntroSmokingTurretType; // 0x38
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sUltraTurretType; // 0x48
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sBadTurretType; // 0x58
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sGoodTurretType; // 0x68
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sAscentTurretType; // 0x78
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sCaveJohnsonTurretType; // 0x88
};

// Aligment: 11
// Size: 128
class CSteamPal_SequencerVData : public CEntitySubclassVDataBase
{
public:
	float m_flBPM; // 0x28
	bool m_bStartPaused; // 0x2c
	int32_t m_nGridWidth; // 0x30
	int32_t m_nGridHeight; // 0x34
	int32_t m_nTestDisplayTrackNum; // 0x38
	float m_flDebugGridSize; // 0x3c
	float m_flDebugGridElementGap; // 0x40
	CUtlVector< CSteamPal_SequencerTrackDef_t > m_vTrackDefs; // 0x48
	CUtlVector< CSteamPal_SequencerSequenceDef_t > m_vIntroSequences; // 0x60
	bool m_bAutoPlayIntro; // 0x78
	bool m_bLoopIntroTracks; // 0x79
};

// Aligment: 8
// Size: 312
class CSteamPal_BaseSingingEntity_VData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	CSoundEventName m_sTestToneSound; // 0x108
	CSoundEventName m_sGreetingSound; // 0x118
	bool m_bAutoSingTracks; // 0x128
	bool m_bPlayAnimGraphOnly; // 0x129
	float m_flBaseMidiNote; // 0x12c
	float m_flWingAnimateInTime; // 0x130
	float m_flVolume; // 0x134
};

// Aligment: 10
// Size: 176
class CSteamPal_NameFormVData : public CEntitySubclassVDataBase
{
public:
	CSkillFloat m_flMaxTimeSayingName; // 0x28
	CSkillFloat m_flMaxTimeTypingFaceButtons; // 0x38
	int32_t m_nNumFaceButtonLettersNeededToSucceed; // 0x48
	CSkillFloat m_flMaxTimeTypingKeyboard; // 0x4c
	int32_t m_nNumKeyboardLettersNeededToSucceed; // 0x5c
	CSkillFloat m_flMaxTimeSigningName; // 0x60
	CSkillFloat m_flTaskTimeAfterUsefulAction; // 0x70
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata )"
	CSubclassName< 0 > m_sWritingSurfaceToSpawn; // 0x80
	QAngle m_qWritingSurfaceAttachAngles; // 0x90
	CSoundEventName m_sDingToneSound; // 0xa0
};

// Aligment: 4
// Size: 280
class CSteamPal_WritingSurfaceVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	Color m_BackgroundColor; // 0x108
	Color m_WritingColor; // 0x10c
	float m_flWritingTipSize; // 0x110
};

// Aligment: 36
// Size: 1440
class CSteamPal_TurretVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sMuzzleFlashEffect; // 0x108
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sTracerEffect; // 0x1e8
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sLaserSightEffect; // 0x2c8
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplodeEffect; // 0x3a8
	CSteamPal_Turret_Wing_t m_sLeftWing; // 0x488
	CSteamPal_Turret_Wing_t m_sRightWing; // 0x4a0
	Steampal_TurretType_t m_TurretType; // 0x4b8
	CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > > m_BreakPieces; // 0x4c0
	CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > > m_WhiteBreakPieces; // 0x4d8
	bool m_bTakeOverCamera; // 0x4f0
	bool m_bSynchedWings; // 0x4f1
	bool m_bRawAiming; // 0x4f2
	bool m_bUseInterpolationHack; // 0x4f3
	float m_flTraceLength; // 0x4f4
	float m_flXInputExponent; // 0x4f8
	float m_flYInputExponent; // 0x4fc
	float m_flAxialDeadZoneX; // 0x500
	float m_flAxialDeadZoneY; // 0x504
	float m_flCircularDeadzoneMin; // 0x508
	float m_flCircularDeadzoneMax; // 0x50c
	float m_flCircularExponent; // 0x510
	float m_flWingDeployExplodeThreshold; // 0x514
	int32_t m_nMaxAmmo; // 0x518
	float m_flCameraOverShoulderOffset; // 0x51c
	float m_flCameraOverShoulderFOV; // 0x520
	bool m_bOnlyValidTargetIfControlledByPlayer; // 0x524
	int32_t m_nHealth; // 0x528
	CSoundEventName m_sWingOpenSound; // 0x530
	CSoundEventName m_sWingCloseSound; // 0x540
	CSoundEventName m_sWingMoveCompleteSound; // 0x550
	CSoundEventName m_sWingMoveSound; // 0x560
	Vector m_vDeployingVibration; // 0x570
	Vector m_vShootingVibration; // 0x57c
	Vector m_vTakingDamageVibration; // 0x588
	Vector m_vExplodingVibration; // 0x594
};

// Aligment: 10
// Size: 2360
class CSteamPal_Intro_ToiletVData : public CSteamPal_TurretVData, CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBidetWaterEffect; // 0x5a0
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sToiletFlushEffect; // 0x680
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sSmokingToiletSmokeEffect; // 0x760
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBidetShootingBulletsEffect; // 0x840
	float m_flTestSpringStrength; // 0x920
	float m_flTestRequiredDuration; // 0x924
	float m_flFlushWaitTime; // 0x928
	float m_flCisternFillDuration; // 0x92c
	float m_flFlushDuration; // 0x930
	bool m_bSmoking; // 0x934
};

// Aligment: 1
// Size: 264
class CSteamPal_ToiletTestPanelVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
};

// Aligment: 12
// Size: 5464
class CSteamPal_Ultra_ToiletVData : public CSteamPal_TurretVData, CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sUltraModelName; // 0x5a0
	CSteamPal_Ultra_Toilet_Gun_VData_t m_Minigun; // 0x680
	CSteamPal_Ultra_Toilet_Gun_VData_t m_SMG; // 0x878
	CSteamPal_Ultra_Toilet_Gun_VData_t m_AAGun_L1; // 0xa70
	CSteamPal_Ultra_Toilet_Gun_VData_t m_AAGun_L2; // 0xc68
	CSteamPal_Ultra_Toilet_Gun_VData_t m_AAGun_R1; // 0xe60
	CSteamPal_Ultra_Toilet_Gun_VData_t m_AAGun_R2; // 0x1058
	CSteamPal_Ultra_Toilet_Gun_VData_t m_Rocket; // 0x1250
	CSoundEventName m_sMinigunWindUpSound; // 0x1448
	CSoundEventName m_sMinigunWindDownSound; // 0x1458
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRadarSparksEffect; // 0x1468
	CSoundEventName m_sRadarSparksSound; // 0x1548
};

// Aligment: 4
// Size: 512
class CSteamPal_Ultra_Toilet_RocketVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRocketTrailEffect; // 0x28
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRocketExplosionEffect; // 0x108
	CSoundEventName m_sRocketExplodeSound; // 0x1e8
	int32_t m_nNumRocketPaths; // 0x1f8
};

// Aligment: 1
// Size: 264
class CSteamPal_TrackballVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
};

// Aligment: 1
// Size: 264
class CSteamPal_TouchScreenVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
};

// Aligment: 10
// Size: 560
class CSteamPal_DeskVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	// MPropertyDescription "Trackball Class"
	CEmbeddedSubclass< CSteamPal_Trackball > m_sTrackballClassToSpawn; // 0x108
	CUtlString m_szLeftTrackballAttachmentName; // 0x118
	CUtlString m_szRightTrackballAttachmentName; // 0x120
	float m_flButtonAnimationDuration; // 0x128
	float m_flButtonBlinkFrequency; // 0x12c
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRocketBoostEffect; // 0x130
	CUtlString m_strRecordedWavPath; // 0x210
	CEmbeddedSubclass< CSteamPal_TouchScreen > m_sTouchScreenClassToSpawn; // 0x218
	CUtlString m_szTouchScreenAttachment; // 0x228
};

// Aligment: 18
// Size: 1504
class CNPCApplianceWeaponBulletsVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashEffect; // 0x3b8
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerEffect; // 0x498
	// MPropertyDescription "Muzzle attachements"
	CUtlVector< NPCApplianceBulletAttachment_t > m_vecMuzzleAttachments; // 0x578
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sFiringLoopingSound; // 0x590
	// MPropertyGroupName "Using"
	CRangeInt m_nBurstSize; // 0x5a0
	// MPropertyGroupName "Using"
	Vector m_vecBulletSpreadCone; // 0x5a8
	// MPropertyGroupName "Using"
	float m_flSpreadBias; // 0x5b4
	// MPropertyGroupName "Using"
	int32_t m_nPellets; // 0x5b8
	// MPropertyGroupName "Using"
	bool m_bTargetingBullets; // 0x5bc
	// MPropertyDescription "When calculating the aim spread, should this ability apply the current aim refinement value of the wielding NPC?"
	// MPropertyGroupName "Using"
	bool m_bApplyAimRefinement; // 0x5bd
	float m_flAttackVerticalFOV; // 0x5c0
	float m_flAttackHorizontalFOV; // 0x5c4
	float m_flAttackMaxHeightDelta; // 0x5c8
	float m_flAttackMinHeightDelta; // 0x5cc
	float m_flMinAngleX; // 0x5d0
	float m_flMaxAngleX; // 0x5d4
	float m_flMinAngleY; // 0x5d8
	float m_flMaxAngleY; // 0x5dc
};

// Aligment: 13
// Size: 816
class CNPCApplianceProjectileVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	float m_flShootVelocity; // 0x108
	bool m_bExplode; // 0x10c
	float m_flExplodeRadius; // 0x110
	float m_flExplodeDamage; // 0x114
	// MPropertyDescription "Damage to apply on projectile touch"
	float m_flTouchDamage; // 0x118
	// MPropertyGroupName "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sTrailParticle; // 0x120
	// MPropertyGroupName "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplosionParticle; // 0x200
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sHitWorldSound; // 0x2e0
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sHitBodySound; // 0x2f0
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sNearMissSound; // 0x300
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sPreExplodeSound; // 0x310
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sExplodeSound; // 0x320
};

// Aligment: 10
// Size: 1040
class CNPCApplianceWeaponVData : public CBaseNPCAbilityVData, CEntitySubclassVDataBase
{
public:
	CUtlVector< NPCApplianceProjectileAttachment_t > m_vecProjectiles; // 0x3b8
	float m_flOpenConeAngle; // 0x3d0
	float m_flAttackConeAngle; // 0x3d4
	bool m_bPickRandomProjectile; // 0x3d8
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph when it performs the open animation."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphOpenParam; // 0x3e0
	// MPropertyDescription "The animgraph status tag that will be waited for by the NPC when it has finished performing the open animation."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlStringToken m_sAnimgraphFinishOpenTag; // 0x3e8
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph when it performs the attack."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphAttackParam; // 0x3f0
	// MPropertyDescription "The animgraph status tag that will be waited for by the NPC when it has finished performing the attack."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlStringToken m_sAnimgraphFinishAttackTag; // 0x3f8
	// MPropertyDescription "The animgraph parameter that should be set on the NPC's animgraph when it performs the close animation."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CUtlString m_sAnimgraphCloseParam; // 0x400
	// MPropertyDescription "The animgraph status tag that will be waited for by the NPC when it has finished performing the close animation."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlStringToken m_sAnimgraphFinishCloseTag; // 0x408
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

// Aligment: 4
// Size: 56
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// MNetworkEnable
	// MNetworkPriority "56"
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

// Aligment: 1
// Size: 32
class CHitboxComponent : public CEntityComponent
{
public:
	uint32_t m_unDisabledHitGroupMask; // 0x1c
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 65
// Size: 440
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
	Color m_SecondaryColor; // 0x79
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x80
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x84
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; // 0x88
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x8c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x90
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x94
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0x98
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; // 0x9c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; // 0xa0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xb0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; // 0xb4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xbc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xc0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xc4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xc8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; // 0xcc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; // 0xd0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xd4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xd8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; // 0xe0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; // 0xe4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; // 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xec
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xf8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xfc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0x100
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0x104
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0x108
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesBakedShadowing; // 0x10c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; // 0x110
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x114
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x118
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x120
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x128
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x12c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x130
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x134
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x138
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x13c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x140
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x141
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x142
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x144
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x150
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x15c
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x168
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x174
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x180
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x184
	// MNetworkEnable
	float m_flFogContributionStength; // 0x188
	// MNetworkEnable
	float m_flNearClipPlane; // 0x18c
	// MNetworkEnable
	Color m_SkyColor; // 0x190
	// MNetworkEnable
	float m_flSkyIntensity; // 0x194
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x198
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x19c
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x19d
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flLightStyleStartTime; // 0x1a0
	// MNetworkEnable
	float m_flCapsuleLength; // 0x1a4
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 5
// Size: 200
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

// Aligment: 21
// Size: 824
class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; // 0x108
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; // 0x109
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CUtlString m_sMuzzleAttachment; // 0x110
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0x1f8
	CUtlVector< CEmbeddedSubclass< CSteamPalModifier > > m_vecIntrinsicModifiers; // 0x2d8
	ItemFlagTypes_t m_iFlags; // 0x2f0
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nPrimaryAmmoType; // 0x2f1
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nSecondaryAmmoType; // 0x2f2
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; // 0x2f4
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x2f8
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x2fc
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x300
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x304
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x308
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; // 0x30c
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; // 0x310
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; // 0x311
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; // 0x314
	CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x318
};

// Aligment: 22
// Size: 6920
class C_BaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x1710
	// MNetworkDisable
	float m_flGroundSpeed; // 0x1714
	// MNetworkDisable
	float m_flLastEventCycle; // 0x1718
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x171c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x1720
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x1738
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x173c
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x179c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x179d
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0x179e
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0x179f
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x17a0
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_nResetEventsParity; // 0x17a4
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x17a8
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x17ac
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x17b0
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x17b4
	// MNetworkDisable
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x17e0
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x1a58
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x1a5c
};

// Aligment: 2
// Size: 8256
class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingController m_animationController; // 0x520
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x2028
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 7024
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	C_UtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // 0x1b08
};

// Aligment: 2
// Size: 8368
class C_BodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	C_BaseAnimatingOverlayController m_animationController; // 0x520
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x2090
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

// Aligment: 7
// Size: 248
class C_LightGlowOverlay : public CGlowOverlay
{
public:
	Vector m_vecOrigin; // 0xd0
	Vector m_vecDirection; // 0xdc
	int32_t m_nMinDist; // 0xe8
	int32_t m_nMaxDist; // 0xec
	int32_t m_nOuterMaxDist; // 0xf0
	bool m_bOneSided; // 0xf4
	bool m_bModulateByDot; // 0xf5
};

// Aligment: 85
// Size: 1400
class C_BaseEntity : public CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x38
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
	int32_t m_nLastThinkTick; // 0x300
	CGameSceneNode* m_pGameSceneNode; // 0x308
	CRenderComponent* m_pRenderComponent; // 0x310
	CCollisionProperty* m_pCollision; // 0x318
	// MNetworkEnable
	// MNetworkChangePointerCallback
	CModifierProperty* m_pModifierProp; // 0x320
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x328
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x32c
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x330
	// MNetworkEnable
	bool m_bTakesDamage; // 0x331
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x332
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x334
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x338
	int32_t m_nNoInterpolationTick; // 0x33c
	float m_flProxyRandomValue; // 0x340
	int32_t m_iEFlags; // 0x344
	uint8_t m_nWaterType; // 0x348
	bool m_bInterpolateEvenWithNoModel; // 0x349
	bool m_bPredictionEligible; // 0x34a
	bool m_bApplyLayerMatchIDToModel; // 0x34c
	CUtlStringToken m_tokLayerMatchID; // 0x350
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x354
	int32_t m_nSimulationTick; // 0x360
	int32_t m_iCurrentThinkContext; // 0x364
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x368
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; // 0x380
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x384
	uint8_t m_nSceneObjectOverrideFlags; // 0x388
	bool m_bHasSuccessfullyInterpolated; // 0x389
	bool m_bHasAddedVarsToInterpolation; // 0x38a
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x38b
	int32[2] m_nInterpolationLatchDirtyFlags; // 0x38c
	uint16[11] m_ListEntry; // 0x394
	// MNetworkEnable
	float m_flCreateTime; // 0x3ac
	float m_flSpeed; // 0x3b0
	uint16_t m_EntClientFlags; // 0x3b4
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3b6
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3b7
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3b8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nNextThinkTick; // 0x3bc
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x3c0
	Vector m_vecAbsVelocity; // 0x3c4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3d0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x438
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x444
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x448
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x44c
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x44d
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	uint8_t m_nWaterLevel; // 0x44e
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x450
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x454
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "4"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x458
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x45c
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x460
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; // 0x464
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x465
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinCPULevel; // 0x466
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxCPULevel; // 0x467
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinGPULevel; // 0x468
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxGPULevel; // 0x469
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	float m_flNavIgnoreUntilTime; // 0x46c
	CBitVec< 1 > m_ShadowBits; // 0x470
	float m_flFirstReceivedTime; // 0x474
	float m_flLastMessageTime; // 0x478
	uint16_t m_hThink; // 0x47c
	uint8_t m_fBBoxVisFlags; // 0x488
	bool m_bIsValidIKAttachment; // 0x489
	bool m_bPredictable; // 0x48a
	bool m_bRenderWithViewModels; // 0x48b
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x48c
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x490
	CParticleProperty m_Particles; // 0x498
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x4c0
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4d8
	int32_t m_nNextScriptVarRecordID; // 0x508
	int32_t m_nAnimGraphNetVarCreationCommandNumber; // 0x518
	QAngle m_vecAngVelocity; // 0x51c
	float m_flGroundChangeTime; // 0x528
	int32_t m_DataChangeEventRef; // 0x52c
	CUtlVector< CEntityHandle > m_dependencies; // 0x530
	int32_t m_nCreationTick; // 0x548
	bool m_bAnimTimeChanged; // 0x561
	bool m_bSimulationTimeChanged; // 0x562
	CUtlString m_sUniqueHammerID; // 0x570
public:
	static bool &Get_sm_bDatadescValidating() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[0]->m_instance); }
	static bool &Get_sm_bAccurateTriggerBboxChecks() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[1]->m_instance); }
	static bool &Get_sm_bDisableTouchFuncs() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[2]->m_instance); }
	static bool &Get_m_bAllowPrecache() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[3]->m_instance); }
	static LatchDirtyPermission_t &Get_s_nLatchPermissions() { return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[4]->m_instance); }
	static int32_t &Get_m_nPredictionRandomSeed() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[5]->m_instance); }
	static CBasePlayerController* &Get_m_pPredictionPlayerController() { return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[6]->m_instance); }
	static bool &Get_s_bAbsQueriesValid() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[7]->m_instance); }
	static bool &Get_s_bAbsRecomputationEnabled() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[8]->m_instance); }
	static bool &Get_s_bComputingInterpolatedValues() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[9]->m_instance); }
	static bool &Get_s_bPreventingSetAnimRunAnimEvents() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[10]->m_instance); }
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects() { return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fiels[11]->m_instance); }
};

// Aligment: 0
// Size: 1400
class CLogicalEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 18
// Size: 1984
class C_ColorCorrection : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecOrigin; // 0x578
	// MNetworkEnable
	float m_MinFalloff; // 0x584
	// MNetworkEnable
	float m_MaxFalloff; // 0x588
	// MNetworkEnable
	float m_flFadeInDuration; // 0x58c
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x590
	// MNetworkEnable
	float m_flMaxWeight; // 0x594
	// MNetworkEnable
	float m_flCurWeight; // 0x598
	// MNetworkEnable
	char[512] m_netlookupFilename; // 0x59c
	// MNetworkEnable
	bool m_bEnabled; // 0x79c
	// MNetworkEnable
	bool m_bMaster; // 0x79d
	// MNetworkEnable
	bool m_bClientSide; // 0x79e
	// MNetworkEnable
	bool m_bExclusive; // 0x79f
	bool[1] m_bEnabledOnClient; // 0x7a0
	float32[1] m_flCurWeightOnClient; // 0x7a4
	bool[1] m_bFadingIn; // 0x7a8
	float32[1] m_flFadeStartWeight; // 0x7ac
	float32[1] m_flFadeStartTime; // 0x7b0
	float32[1] m_flFadeDuration; // 0x7b4
};

// Aligment: 1
// Size: 1960
class C_EnvWindClientside : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_EnvWindShared m_EnvWindShared; // 0x578
};

// Aligment: 3
// Size: 1448
class C_EntityFlame : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x578
	CHandle< C_BaseEntity > m_hOldAttached; // 0x5a0
	// MNetworkEnable
	bool m_bCheapEffect; // 0x5a4
};

// Aligment: 4
// Size: 1416
class C_BaseFire : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x578
	// MNetworkEnable
	float m_flStartScale; // 0x57c
	// MNetworkEnable
	float m_flScaleTime; // 0x580
	// MNetworkEnable
	uint32_t m_nFlags; // 0x584
};

// Aligment: 13
// Size: 1520
class C_FireSmoke : public C_BaseFire, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x588
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x58c
	float m_flScaleRegister; // 0x590
	float m_flScaleStart; // 0x594
	float m_flScaleEnd; // 0x598
	float m_flScaleTimeStart; // 0x59c
	float m_flScaleTimeEnd; // 0x5a0
	float m_flChildFlameSpread; // 0x5a4
	float m_flClipPerc; // 0x5b8
	bool m_bClipTested; // 0x5bc
	bool m_bFadingOut; // 0x5bd
	TimedEvent m_tParticleSpawn; // 0x5c0
	CFireOverlay* m_pFireOverlay; // 0x5c8
};

// Aligment: 4
// Size: 272
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0
	Vector[4] m_vBaseColors; // 0xd8
	float m_flScale; // 0x108
	int32_t m_nGUID; // 0x10c
};

// Aligment: 1
// Size: 216
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0
};

// Aligment: 0
// Size: 1424
class C_TintController : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class C_TriggerCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
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
// Size: 1560
class C_SkyCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x578
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x608
	bool m_bUseAngles; // 0x60c
	C_SkyCamera* m_pNext; // 0x610
};

// Aligment: 14
// Size: 400
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	CUtlVector< CEmbeddedSubclass< CSteamPalModifier > > m_vecIntrinsicModifiers; // 0x108
	CSkillFloat m_flHeadDamageMultiplier; // 0x120
	CSkillFloat m_flChestDamageMultiplier; // 0x130
	CSkillFloat m_flStomachDamageMultiplier; // 0x140
	CSkillFloat m_flArmDamageMultiplier; // 0x150
	CSkillFloat m_flLegDamageMultiplier; // 0x160
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; // 0x170
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; // 0x174
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; // 0x178
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; // 0x17c
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; // 0x180
	// MPropertyGroupName "Use"
	float m_flUseRange; // 0x184
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; // 0x188
};

// Aligment: 2
// Size: 1408
class C_EnvDetailController : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x578
	// MNetworkEnable
	float m_flFadeEndDist; // 0x57c
};

// Aligment: 0
// Size: 1400
class C_InfoLadderDismount : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class C_GameRulesProxy : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 15
// Size: 1488
class C_PoseController : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bPoseValueParity; // 0x578
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	float m_fPoseValue; // 0x57c
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fInterpolationDuration; // 0x580
	// MNetworkEnable
	bool m_bInterpolationWrap; // 0x584
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fCycleFrequency; // 0x588
	// MNetworkEnable
	PoseController_FModType_t m_nFModType; // 0x58c
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "1"
	float m_fFModTimeOffset; // 0x590
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fFModRate; // 0x594
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fFModAmplitude; // 0x598
	// MNetworkEnable
	CHandle< C_BaseEntity >[4] m_hProps; // 0x59c
	// MNetworkEnable
	uint8[4] m_chPoseIndex; // 0x5ac
	bool m_bOldPoseValueParity; // 0x5b0
	float m_fCurrentPoseValue; // 0x5b4
	float m_fCurrentFMod; // 0x5b8
	CInterpolatedValue m_PoseTransitionValue; // 0x5bc
};

// Aligment: 7
// Size: 296
class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28
	float m_flInnerDistance; // 0x108
	ParticleAttachment_t m_nAttachType; // 0x10c
	bool m_bBatchSameVolumeType; // 0x110
	int32_t m_nRTEnvCP; // 0x114
	int32_t m_nRTEnvCPComponent; // 0x118
	CUtlString m_szModifier; // 0x120
};

// Aligment: 5
// Size: 1432
class C_SoundOpvarSetPointBase : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x578
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x580
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x588
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x590
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x594
};

// Aligment: 0
// Size: 1432
class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1432
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1432
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity, C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1432
class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity, C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1432
class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 30
// Size: 1472
class C_TeamRoundTimer : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x578
	// MNetworkEnable
	float m_flTimeRemaining; // 0x57c
	// MNetworkEnable
	float m_flTimerEndTime; // 0x580
	// MNetworkEnable
	bool m_bIsDisabled; // 0x584
	// MNetworkEnable
	bool m_bShowInHUD; // 0x585
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x588
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x58c
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x590
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x594
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x598
	// MNetworkEnable
	int32_t m_nState; // 0x59c
	// MNetworkEnable
	bool m_bStartPaused; // 0x5a0
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x5a1
	// MNetworkEnable
	float m_flTotalTime; // 0x5a4
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x5a8
	bool m_bFireFinished; // 0x5a9
	bool m_bFire5MinRemain; // 0x5aa
	bool m_bFire4MinRemain; // 0x5ab
	bool m_bFire3MinRemain; // 0x5ac
	bool m_bFire2MinRemain; // 0x5ad
	bool m_bFire1MinRemain; // 0x5ae
	bool m_bFire30SecRemain; // 0x5af
	bool m_bFire10SecRemain; // 0x5b0
	bool m_bFire5SecRemain; // 0x5b1
	bool m_bFire4SecRemain; // 0x5b2
	bool m_bFire3SecRemain; // 0x5b3
	bool m_bFire2SecRemain; // 0x5b4
	bool m_bFire1SecRemain; // 0x5b5
	int32_t m_nOldTimerLength; // 0x5b8
	int32_t m_nOldTimerState; // 0x5bc
};

// Aligment: 6
// Size: 1464
class CBaseNPCAbility : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< CNPCAbilityModel > m_hAbilityModel; // 0x578
	// MNetworkEnable
	CHandle< CBaseNPCAbility > m_hLinkedAbility; // 0x57c
	// MNetworkEnable
	bool m_bHeld; // 0x580
	// MNetworkEnable
	bool m_bEnabled; // 0x581
	// MNetworkEnable
	bool m_bPrimaryAbility; // 0x582
	// MNetworkEnable
	// MNetworkVarEmbeddedNotFlattened
	// MNetworkSendProxyRecipientsFilter
	NPCAbilityTarget_t m_UsageTarget; // 0x590
};

// Aligment: 0
// Size: 1464
class CNPCAbilityAddModifier : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1464
class CNPCAbilityRemoveModifier : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1464
class CNPCAbilityBaseRanged : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1464
class CNPCAbilityMeleeAttack : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1464
class CNPCAbilitySpawn : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1472
class CNPCWeaponHitscan : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	AttachmentHandle_t m_nTracerAttachmentIndex; // 0x5b8
};

// Aligment: 2
// Size: 152
class CBaseModifierAura : public CSteamPalModifier, CBaseModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // 0x78
	ParticleIndex_t m_hAmbientEffect; // 0x90
};

// Aligment: 2
// Size: 1432
class CPointModifierThinker : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CModifierHandleTyped< CSteamPalModifier > m_hModifier; // 0x578
	bool m_bSendToClients; // 0x590
};

// Aligment: 1
// Size: 1408
class CSteamPalGameRulesProxy : public C_GameRulesProxy, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	C_SteamPalGameRules* m_pSteamPalGameRules; // 0x578
};

// Aligment: 0
// Size: 152
class CSteamPalModifierAura : public CBaseModifierAura, CSteamPalModifier, CBaseModifier
{
public:
// <no members described>
};

// Aligment: 0
// Size: 152
class CSteamPalModifierAura_Default : public CSteamPalModifierAura, CBaseModifierAura, CSteamPalModifier, CBaseModifier
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class CSteampal_Turret_Manager : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class CSteamPal_Sequencer : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 16
// Size: 1480
class CSteamPal_NameForm : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bPrevShowingWritingSurface; // 0x588
	// MNetworkEnable
	float m_flTimeUserLastDidUsefulActivity; // 0x58c
	// MNetworkEnable
	float m_flDurationCurrentTask; // 0x590
	// MNetworkEnable
	float m_flTimeStartedCurrentTask; // 0x594
	// MNetworkEnable
	// MNetworkChangeCallback "TypedNameChanged"
	CUtlString m_strTypedName; // 0x598
	// MNetworkEnable
	bool m_bIsTaskSuccess; // 0x5a0
	// MNetworkEnable
	float m_flLastMicLevel; // 0x5a4
	// MNetworkEnable
	bool m_bIsRecording; // 0x5a8
	// MNetworkEnable
	bool m_bIsWarmingUpMicrophone; // 0x5a9
	// MNetworkEnable
	int32_t m_nNumFramesOfAudioDBsRecorded; // 0x5ac
	// MNetworkEnable
	bool m_bUserTypedWithKeyboard; // 0x5b0
	// MNetworkEnable
	bool m_bIsShowingWritingSurface; // 0x5b1
	// MNetworkEnable
	float m_flFrameRateLimitBeforeDrawing; // 0x5b4
	// MNetworkEnable
	CHandle< CSteamPal_Desk > m_hDesk; // 0x5b8
	// MNetworkEnable
	CHandle< CSteamPal_WritingSurface > m_hWritingSurface; // 0x5bc
	// MNetworkEnable
	CHandle< CInfoOffscreenPanoramaTexture > m_hOffscreenTexture; // 0x5c0
};

// Aligment: 4
// Size: 1448
class CSteamPal_Turret_Laser : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hTurret; // 0x578
	// MNetworkEnable
	bool m_bIsLaserOn; // 0x57c
	bool m_bPrevIsLaserOn; // 0x57d
	AttachmentHandle_t m_nLaserAttachment; // 0x5a0
};

// Aligment: 5
// Size: 1416
class CSteamPal_Turret_Wing : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< CSteamPal_Turret > m_hTurret; // 0x578
	// MNetworkEnable
	bool m_bIsLeftWing; // 0x57c
	// MNetworkEnable
	bool m_bBeingControlled; // 0x57d
	AttachmentHandle_t[2] m_nMuzzleAttachments; // 0x57e
	// MNetworkEnable
	int32_t m_nCurrentMuzzle; // 0x580
};

// Aligment: 7
// Size: 1472
class CSteamPalConveyor : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flCurrentConveyorOffset; // 0x578
	float m_flLastClientThinkTime; // 0x57c
	// MNetworkEnable
	bool m_bMoving; // 0x580
	// MNetworkEnable
	float m_flCurrentSpeed; // 0x584
	// MNetworkEnable
	float m_flAnimationDirection; // 0x588
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseAnimating > > m_hConveyorModels; // 0x590
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< CSteamPalConveyorPathNode > > m_hPathNodes; // 0x5a8
};

// Aligment: 2
// Size: 1424
class CSteamPal_PaintStreamPathNode : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	Vector m_vInTangentWorld; // 0x578
	// MNetworkEnable
	Vector m_vOutTangentWorld; // 0x584
};

// Aligment: 8
// Size: 1560
class CSteamPal_PaintStream : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flPrevClientThinkTime; // 0x578
	bool m_bPrevIsOn; // 0x57c
	// MNetworkEnable
	bool m_bIsOn; // 0x598
	// MNetworkEnable
	float m_flSpeed; // 0x59c
	// MNetworkEnable
	float m_flPathLength; // 0x5a0
	// MNetworkEnable
	int32_t m_nNumPaintBlobs; // 0x5a4
	// MNetworkEnable
	SteamPalPaintType m_PaintType; // 0x5a8
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< CSteamPal_PaintStreamPathNode > > m_hPathNodes; // 0x5b0
};

// Aligment: 0
// Size: 1400
class CSteamPal_Projectile_Tag_Marker : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1432
class CSteamPalCameraPath : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bRelativeFOV; // 0x578
	// MNetworkEnable
	Vector m_flFOVData; // 0x57c
	// MNetworkEnable
	Vector m_vVelocity; // 0x588
};

// Aligment: 3
// Size: 1416
class CSteamPalPointCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bRelativeFOV; // 0x578
	// MNetworkEnable
	float m_flFOV; // 0x57c
	// MNetworkEnable
	bool m_bActive; // 0x580
};

// Aligment: 1
// Size: 1472
class CNPCApplianceWeaponBullets : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	AttachmentHandle_t m_nTracerAttachmentIndex; // 0x5b8
};

// Aligment: 0
// Size: 1464
class CNPCApplianceWeaponProjectiles : public CBaseNPCAbility, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class C_SteampalKillVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1488
class C_BaseCurveOverTime : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bLooping; // 0x578
	// MNetworkEnable
	CUtlSymbolLarge m_CurveString; // 0x580
	// MNetworkEnable
	float m_flStartTime; // 0x5c8
};

// Aligment: 2
// Size: 1512
class C_PointRenderAttrCurve : public C_BaseCurveOverTime, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_AttrName; // 0x5d0
	// MNetworkEnable
	CUtlSymbolLarge m_ActiveComboName; // 0x5d8
};

// Aligment: 0
// Size: 1400
class C_PointEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 20
// Size: 5840
class C_EnvCombinedLightProbeVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x1638
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x163c
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1640
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x1648
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1650
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1658
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1660
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1668
	// MNetworkEnable
	Vector m_vBoxMins; // 0x1670
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x167c
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x1688
	// MNetworkEnable
	bool m_bMoveable; // 0x1690
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1694
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x1698
	// MNetworkEnable
	int32_t m_nPriority; // 0x169c
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x16a0
	// MNetworkEnable
	bool m_bStartDisabled; // 0x16a4
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x16a8
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x16ac
	// MNetworkEnable
	bool m_bEnabled; // 0x16c9
};

// Aligment: 21
// Size: 1768
class C_EnvCubemap : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x670
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hDepthmapTexture; // 0x678
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x680
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x684
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x688
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x694
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x6a0
	// MNetworkEnable
	bool m_bMoveable; // 0x6a8
	// MNetworkEnable
	int32_t m_nHandshake; // 0x6ac
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x6b0
	// MNetworkEnable
	int32_t m_nPriority; // 0x6b4
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x6b8
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x6bc
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x6c0
	// MNetworkEnable
	float m_flDiffuseScale; // 0x6cc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x6d0
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x6d1
	// MNetworkEnable
	bool m_bDefaultSpecEnvMap; // 0x6d2
	// MNetworkEnable
	bool m_bRenderDepthMap; // 0x6d3
	// MNetworkEnable
	bool m_bCopyDiffuseFromDefaultCubemap; // 0x6d4
	// MNetworkEnable
	bool m_bEnabled; // 0x6e0
};

// Aligment: 0
// Size: 1768
class C_EnvCubemapBox : public C_EnvCubemap, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 18
// Size: 1480
class C_EnvCubemapFog : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x578
	// MNetworkEnable
	float m_flStartDistance; // 0x57c
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x580
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x584
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x588
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x58c
	// MNetworkEnable
	float m_flFogHeightStart; // 0x590
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x594
	// MNetworkEnable
	float m_flLODBias; // 0x598
	// MNetworkEnable
	bool m_bActive; // 0x59c
	// MNetworkEnable
	bool m_bStartDisabled; // 0x59d
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x5a0
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x5a4
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x5a8
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x5b0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x5b8
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x5c0
	bool m_bFirstTime; // 0x5c1
};

// Aligment: 12
// Size: 5536
class C_EnvLightProbeVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1540
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1548
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1550
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1558
	// MNetworkEnable
	Vector m_vBoxMins; // 0x1560
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x156c
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x1578
	// MNetworkEnable
	bool m_bMoveable; // 0x1580
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1584
	// MNetworkEnable
	int32_t m_nPriority; // 0x1588
	// MNetworkEnable
	bool m_bStartDisabled; // 0x158c
	// MNetworkEnable
	bool m_bEnabled; // 0x1599
};

// Aligment: 8
// Size: 1440
class C_TonemapController2 : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x578
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x57c
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x580
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x584
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x588
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x58c
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x590
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x594
};

// Aligment: 28
// Size: 1528
class C_EnvVolumetricFogController : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x578
	// MNetworkEnable
	float m_flAnisotropy; // 0x57c
	// MNetworkEnable
	float m_flFadeSpeed; // 0x580
	// MNetworkEnable
	float m_flDrawDistance; // 0x584
	// MNetworkEnable
	float m_flFadeInStart; // 0x588
	// MNetworkEnable
	float m_flFadeInEnd; // 0x58c
	// MNetworkEnable
	float m_flIndirectStrength; // 0x590
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x594
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x598
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x59c
	// MNetworkEnable
	Vector m_vBoxMins; // 0x5a0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x5ac
	// MNetworkEnable
	bool m_bActive; // 0x5b8
	// MNetworkEnable
	float m_flStartAnisoTime; // 0x5bc
	// MNetworkEnable
	float m_flStartScatterTime; // 0x5c0
	// MNetworkEnable
	float m_flStartDrawDistanceTime; // 0x5c4
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x5c8
	// MNetworkEnable
	float m_flStartScattering; // 0x5cc
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x5d0
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x5d4
	// MNetworkEnable
	float m_flDefaultScattering; // 0x5d8
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x5dc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5e0
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5e1
	// MNetworkEnable
	bool m_bIsMaster; // 0x5e2
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5e8
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5f0
	bool m_bFirstTime; // 0x5f4
};

// Aligment: 7
// Size: 1448
class C_EnvVolumetricFogVolume : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x578
	// MNetworkEnable
	Vector m_vBoxMins; // 0x57c
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x588
	// MNetworkEnable
	bool m_bStartDisabled; // 0x594
	// MNetworkEnable
	float m_flStrength; // 0x598
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x59c
	// MNetworkEnable
	float m_flFalloffExponent; // 0x5a0
};

// Aligment: 3
// Size: 1512
class C_FogController : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x578
	bool m_bUseAngles; // 0x5e0
	int32_t m_iChangedVariables; // 0x5e4
};

// Aligment: 0
// Size: 1400
class CInfoTarget : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1400
class CInfoParticleTarget : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1424
class C_InfoVisibilityBox : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x57c
	// MNetworkEnable
	Vector m_vBoxSize; // 0x580
	// MNetworkEnable
	bool m_bEnabled; // 0x58c
};

// Aligment: 8
// Size: 1472
class CInfoWorldLayer : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x578
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x5a0
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x5a8
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x5b0
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x5b1
	bool m_bCreateAsChildSpawnGroup; // 0x5b2
	uint32_t m_hLayerSpawnGroup; // 0x5b4
	bool m_bWorldLayerActuallyVisible; // 0x5b8
};

// Aligment: 24
// Size: 1496
class C_PointCamera : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x578
	// MNetworkEnable
	float m_Resolution; // 0x57c
	// MNetworkEnable
	bool m_bFogEnable; // 0x580
	// MNetworkEnable
	Color m_FogColor; // 0x581
	// MNetworkEnable
	float m_flFogStart; // 0x588
	// MNetworkEnable
	float m_flFogEnd; // 0x58c
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x590
	// MNetworkEnable
	bool m_bActive; // 0x594
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x595
	// MNetworkEnable
	float m_flAspectRatio; // 0x598
	// MNetworkEnable
	bool m_bNoSky; // 0x59c
	// MNetworkEnable
	float m_fBrightness; // 0x5a0
	// MNetworkEnable
	float m_flZFar; // 0x5a4
	// MNetworkEnable
	float m_flZNear; // 0x5a8
	// MNetworkEnable
	bool m_bDofEnabled; // 0x5ac
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x5b0
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x5b4
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x5b8
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x5bc
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x5c0
	float m_TargetFOV; // 0x5c4
	float m_DegreesPerSecond; // 0x5c8
	bool m_bIsOn; // 0x5cc
	C_PointCamera* m_pNext; // 0x5d0
};

// Aligment: 9
// Size: 1440
class C_PointCameraVFOV : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flVerticalFOV; // 0x578
	float m_flZFar; // 0x57c
	float m_flZNear; // 0x580
	bool m_bDofEnabled; // 0x584
	float m_flDofNearBlurry; // 0x588
	float m_flDofNearCrisp; // 0x58c
	float m_flDofFarCrisp; // 0x590
	float m_flDofFarBlurry; // 0x594
	float m_flDofTiltToGround; // 0x598
};

// Aligment: 12
// Size: 1544
class CPointTemplate : public CLogicalEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x578
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x580
	CUtlSymbolLarge m_iszEntityFilterName; // 0x588
	float m_flTimeoutInterval; // 0x590
	bool m_bAsynchronouslySpawnEntities; // 0x594
	CEntityIOOutput m_pOutputOnSpawned; // 0x598
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x5c0
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x5c4
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x5c8
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5e0
	HSCRIPT m_ScriptSpawnCallback; // 0x5f8
	HSCRIPT m_ScriptCallbackScope; // 0x600
};

// Aligment: 4
// Size: 1440
class C_SoundAreaEntityBase : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x578
	bool m_bWasEnabled; // 0x580
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x588
	// MNetworkEnable
	Vector m_vPos; // 0x590
};

// Aligment: 1
// Size: 1448
class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x5a0
};

// Aligment: 2
// Size: 1464
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x5a0
	// MNetworkEnable
	Vector m_vMax; // 0x5ac
};

// Aligment: 3
// Size: 1560
class C_Team : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x578
	// MNetworkEnable
	int32_t m_iScore; // 0x590
	// MNetworkEnable
	char[129] m_szTeamname; // 0x594
};

// Aligment: 1
// Size: 1480
class CPlayerResource : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< PlayerResourceData_t > m_vecPlayerData; // 0x580
};

// Aligment: 32
// Size: 2144
class C_BaseModelEntity : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x578
	int32_t m_nLastAddDecal; // 0x580
	int32_t m_nDecalsAdded; // 0x584
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x588
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x589
	bool m_bAllowFadeInView; // 0x58a
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x58b
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlStringToken[4] m_RenderAttributeIDs; // 0x590
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	Vector4D[4] m_RenderAttributeValues; // 0x5a0
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x5f8
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x5fc
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x600
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x6b0
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x700
	// MNetworkEnable
	float m_fadeMinDist; // 0x704
	// MNetworkEnable
	float m_fadeMaxDist; // 0x708
	// MNetworkEnable
	float m_flFadeScale; // 0x70c
	// MNetworkEnable
	float m_flShadowStrength; // 0x710
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x714
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x718
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x71c
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x728
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x734
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x738
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x740
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x758
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x7c0
	Color m_ClientOverrideTint; // 0x7c8
	bool m_bUseClientOverrideTint; // 0x7cc
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	Vector m_vLightingOrigin; // 0x808
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	bool m_bFixupLightingOriginToPlayerSide; // 0x814
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< ActiveModelConfig_t > m_ActiveModelConfigs; // 0x818
};

// Aligment: 0
// Size: 2144
class CServerOnlyModelEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2144
class C_ModelPointEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 1488
class CLogicRelay : public CLogicalEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x578
	CEntityIOOutput m_OnSpawn; // 0x5a0
	bool m_bDisabled; // 0x5c8
	bool m_bWaitForRefire; // 0x5c9
	bool m_bTriggerOnce; // 0x5ca
	bool m_bFastRetrigger; // 0x5cb
	bool m_bPassthoughCaller; // 0x5cc
};

// Aligment: 17
// Size: 3576
class C_ParticleSystem : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	char[512] m_szSnapshotFileName; // 0x860
	// MNetworkEnable
	bool m_bActive; // 0xa60
	// MNetworkEnable
	bool m_bFrozen; // 0xa61
	// MNetworkEnable
	int32_t m_nStopType; // 0xa64
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa68
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa70
	// MNetworkEnable
	float m_flStartTime; // 0xa78
	// MNetworkEnable
	float m_flPreSimTime; // 0xa7c
	// MNetworkEnable
	Vector[4] m_vServerControlPoints; // 0xa80
	// MNetworkEnable
	uint8[4] m_iServerControlPointAssignments; // 0xab0
	// MNetworkEnable
	CHandle< C_BaseEntity >[64] m_hControlPointEnts; // 0xab4
	bool m_bNoSave; // 0xbb4
	bool m_bStartActive; // 0xbb5
	CUtlSymbolLarge m_iszEffectName; // 0xbb8
	CUtlSymbolLarge[64] m_iszControlPointNames; // 0xbc0
	bool m_bOldActive; // 0xde0
	bool m_bOldFrozen; // 0xde1
};

// Aligment: 16
// Size: 1664
class C_PathParticleRope : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartActive; // 0x578
	float m_flMaxSimulationTime; // 0x57c
	CUtlSymbolLarge m_iszEffectName; // 0x580
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x588
	// MNetworkEnable
	float m_flParticleSpacing; // 0x5a0
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x5a4
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x5a8
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x5ac
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x5b0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x5b8
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x5c0
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x5d8
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5f0
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x608
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x620
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x638
};

// Aligment: 7
// Size: 2184
class C_DynamicLight : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0x860
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x861
	// MNetworkEnable
	float m_Radius; // 0x864
	// MNetworkEnable
	int32_t m_Exponent; // 0x868
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_InnerAngle; // 0x86c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_OuterAngle; // 0x870
	// MNetworkEnable
	float m_SpotRadius; // 0x874
};

// Aligment: 9
// Size: 1544
class C_EnvScreenOverlay : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge[10] m_iszOverlayNames; // 0x578
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "63"
	float32[10] m_flOverlayTimes; // 0x5c8
	// MNetworkEnable
	float m_flStartTime; // 0x5f0
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5f4
	// MNetworkEnable
	bool m_bIsActive; // 0x5f8
	bool m_bWasActive; // 0x5f9
	int32_t m_iCachedDesiredOverlay; // 0x5fc
	int32_t m_iCurrentOverlay; // 0x600
	float m_flCurrentOverlayTime; // 0x604
};

// Aligment: 3
// Size: 2160
class C_FuncTrackTrain : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nLongAxis; // 0x860
	float m_flRadius; // 0x864
	float m_flLineLength; // 0x868
};

// Aligment: 8
// Size: 2424
class C_LightGlow : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x860
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x864
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x868
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x86c
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x870
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x874
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "100"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; // 0x878
	C_LightGlowOverlay m_Glow; // 0x880
};

// Aligment: 1
// Size: 1408
class C_RagdollManager : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x578
};

// Aligment: 2
// Size: 2160
class C_SpotlightEnd : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x860
	// MNetworkEnable
	float m_Radius; // 0x864
};

// Aligment: 4
// Size: 1416
class C_PointHMDAnchor : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x578
	// MNetworkEnable
	float m_flEnableTime; // 0x57c
	// MNetworkEnable
	int32_t m_nPlayerIndex; // 0x580
	int32_t m_nLastSimulateFrame; // 0x584
};

// Aligment: 0
// Size: 1416
class C_PointHMDAnchorOverride : public C_PointHMDAnchor, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 25
// Size: 1520
class C_PointValueRemapper : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x578
	bool m_bDisabledOld; // 0x579
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x57a
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x57c
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x580
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x584
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x588
	// MNetworkEnable
	float m_flDisengageDistance; // 0x58c
	// MNetworkEnable
	float m_flEngageDistance; // 0x590
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x594
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x598
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x5a0
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x5b8
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x5bc
	// MNetworkEnable
	float m_flMomentumModifier; // 0x5c0
	// MNetworkEnable
	float m_flSnapValue; // 0x5c4
	float m_flCurrentMomentum; // 0x5c8
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x5cc
	float m_flRatchetOffset; // 0x5d0
	// MNetworkEnable
	float m_flInputOffset; // 0x5d4
	bool m_bEngaged; // 0x5d8
	bool m_bFirstUpdate; // 0x5d9
	float m_flPreviousValue; // 0x5dc
	float m_flPreviousUpdateTickTime; // 0x5e0
	Vector m_vecPreviousTestPoint; // 0x5e4
};

// Aligment: 12
// Size: 2776
class C_PointWorldText : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceRecreateNextUpdate; // 0x868
	// MNetworkEnable
	char[512] m_messageText; // 0x878
	// MNetworkEnable
	char[64] m_FontName; // 0xa78
	// MNetworkEnable
	bool m_bEnabled; // 0xab8
	// MNetworkEnable
	bool m_bFullbright; // 0xab9
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xabc
	// MNetworkEnable
	float m_flFontSize; // 0xac0
	// MNetworkEnable
	float m_flDepthOffset; // 0xac4
	// MNetworkEnable
	Color m_Color; // 0xac8
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xacc
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xad0
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xad4
};

// Aligment: 2
// Size: 1408
class C_HandleTest : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Handle; // 0x578
	// MNetworkEnable
	bool m_bSendHandle; // 0x57c
};

// Aligment: 1
// Size: 1960
class C_EnvWind : public C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; // 0x578
};

// Aligment: 0
// Size: 2144
class C_BaseToggle : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 2160
class C_BaseButton : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x860
	// MNetworkEnable
	bool m_usable; // 0x864
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x868
};

// Aligment: 0
// Size: 2144
class C_PrecipitationBlocker : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 13
// Size: 2216
class C_EntityDissolve : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flStartTime; // 0x868
	// MNetworkEnable
	float m_flFadeInStart; // 0x86c
	// MNetworkEnable
	float m_flFadeInLength; // 0x870
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x874
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x878
	// MNetworkEnable
	float m_flFadeOutStart; // 0x87c
	// MNetworkEnable
	float m_flFadeOutLength; // 0x880
	float m_flNextSparkTime; // 0x884
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x888
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x88c
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x898
	bool m_bCoreExplode; // 0x89c
	bool m_bLinkedToServerEnt; // 0x89d
};

// Aligment: 0
// Size: 2888
class C_EnvProjectedTexture : public C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2144
class C_FuncBrush : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 2168
class C_FuncElectrifiedVolume : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x860
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x868
	// MNetworkEnable
	bool m_bState; // 0x870
};

// Aligment: 0
// Size: 2144
class C_FuncRotating : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2144
class C_Breakable : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2144
class C_PhysBox : public C_Breakable, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 41
// Size: 3144
class C_RopeKeyframe : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x868
	int32_t m_nLinksTouchingSomething; // 0x86c
	bool m_bApplyWind; // 0x870
	int32_t m_fPrevLockedPoints; // 0x874
	int32_t m_iForcePointMoveCounter; // 0x878
	bool[2] m_bPrevEndPointPos; // 0x87c
	Vector[2] m_vPrevEndPointPos; // 0x880
	float m_flCurScroll; // 0x898
	// MNetworkEnable
	float m_flScrollSpeed; // 0x89c
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x8a0
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x8a8
	Vector[10] m_LightValues; // 0xb20
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb98
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb9c
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xba0
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xba4
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xba5
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xba6
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xba8
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xbaa
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.1"
	// MNetworkMaxValue "10"
	float m_TextureScale; // 0xbac
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xbb0
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xbb1
	// MNetworkEnable
	float m_Width; // 0xbb4
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xbb8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xbc8
	int32_t m_TextureHeight; // 0xbd0
	Vector m_vecImpulse; // 0xbd4
	Vector m_vecPreviousImpulse; // 0xbe0
	float m_flCurrentGustTimer; // 0xbec
	float m_flCurrentGustLifetime; // 0xbf0
	float m_flTimeToNextGust; // 0xbf4
	Vector m_vWindDir; // 0xbf8
	Vector m_vColorMod; // 0xc04
	Vector[2] m_vCachedEndPointAttachmentPos; // 0xc10
	QAngle[2] m_vCachedEndPointAttachmentAngle; // 0xc28
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xc40
	bitfield:1 m_bEndPointAttachmentPositionsDirty; // 0x0
	bitfield:1 m_bEndPointAttachmentAnglesDirty; // 0x0
	bitfield:1 m_bNewDataThisFrame; // 0x0
	bitfield:1 m_bPhysicsInitted; // 0x0
};

// Aligment: 12
// Size: 1496
class C_SceneEntity : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x580
	// MNetworkEnable
	bool m_bPaused; // 0x581
	// MNetworkEnable
	bool m_bMultiplayer; // 0x582
	// MNetworkEnable
	bool m_bAutogenerated; // 0x583
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x584
	// MNetworkEnable
	// MNetworkPriority "32"
	uint16_t m_nSceneStringIndex; // 0x588
	bool m_bClientOnly; // 0x58a
	CHandle< C_BaseFlex > m_hOwner; // 0x58c
	// MNetworkEnable
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList; // 0x590
	bool m_bWasPlaying; // 0x5a8
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x5b8
	float m_flCurrentTime; // 0x5d0
};

// Aligment: 18
// Size: 2240
class C_Sun : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x860
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0x864
	float m_fdistNormalize; // 0x868
	Vector m_vSunPos; // 0x86c
	// MNetworkEnable
	Vector m_vDirection; // 0x878
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x888
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x890
	// MNetworkEnable
	Color m_clrOverlay; // 0x898
	// MNetworkEnable
	bool m_bOn; // 0x89c
	// MNetworkEnable
	bool m_bmaxColor; // 0x89d
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0x8a0
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0x8a4
	// MNetworkEnable
	// MNetworkMinValue "-360"
	// MNetworkMaxValue "360"
	float m_flRotation; // 0x8a8
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0x8ac
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaHaze; // 0x8b0
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaScale; // 0x8b4
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2"
	float m_flAlphaHdr; // 0x8b8
	// MNetworkEnable
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	float m_flFarZScale; // 0x8bc
};

// Aligment: 2
// Size: 2152
class C_BaseTrigger : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x860
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x861
};

// Aligment: 0
// Size: 2144
class C_TriggerVolume : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2152
class C_TriggerLerpObject : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 2192
class C_TriggerBuoyancy : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x868
	// MNetworkEnable
	float m_flFluidDensity; // 0x888
};

// Aligment: 24
// Size: 2336
class C_Beam : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25"
	// MNetworkMaxValue "25"
	// MNetworkEncodeFlags
	float m_flFrameRate; // 0x860
	// MNetworkEnable
	float m_flHDRColorScale; // 0x864
	float m_flFireTime; // 0x868
	float m_flDamage; // 0x86c
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x870
	int32_t m_queryHandleHalo; // 0x874
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x898
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x8a0
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x8a8
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x8ac
	// MNetworkEnable
	CHandle< C_BaseEntity >[10] m_hAttachEntity; // 0x8b0
	// MNetworkEnable
	AttachmentHandle_t[10] m_nAttachIndex; // 0x8d8
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fWidth; // 0x8e4
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "102.3"
	// MNetworkEncodeFlags
	float m_fEndWidth; // 0x8e8
	// MNetworkEnable
	float m_fFadeLength; // 0x8ec
	// MNetworkEnable
	float m_fHaloScale; // 0x8f0
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_fAmplitude; // 0x8f4
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_fStartFrame; // 0x8f8
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "100"
	float m_fSpeed; // 0x8fc
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	float m_flFrame; // 0x900
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x904
	// MNetworkEnable
	bool m_bTurnedOff; // 0x908
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEndPos; // 0x90c
	CHandle< C_BaseEntity > m_hEndEntity; // 0x918
};

// Aligment: 9
// Size: 2232
class C_FuncLadder : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderDir; // 0x860
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x870
	Vector m_vecLocalTop; // 0x888
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionTop; // 0x894
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionBottom; // 0x8a0
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x8ac
	bool m_bDisabled; // 0x8b0
	// MNetworkEnable
	bool m_bFakeLadder; // 0x8b1
	bool m_bHasSlack; // 0x8b2
public:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders() { return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fiels[0]->m_instance); }
};

// Aligment: 24
// Size: 2448
class C_Sprite : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x878
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x880
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x884
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "60"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0x888
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flFrame; // 0x88c
	float m_flDieTime; // 0x890
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x8a0
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x8a4
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x8a8
	// MNetworkEnable
	float m_flScaleDuration; // 0x8ac
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x8b0
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x8b4
	// MNetworkEnable
	float m_flHDRColorScale; // 0x8b8
	float m_flLastTime; // 0x8bc
	float m_flMaxFrame; // 0x8c0
	float m_flStartScale; // 0x8c4
	float m_flDestScale; // 0x8c8
	float m_flScaleTimeStart; // 0x8cc
	int32_t m_nStartBrightness; // 0x8d0
	int32_t m_nDestBrightness; // 0x8d4
	float m_flBrightnessTimeStart; // 0x8d8
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x8e0
	int32_t m_nSpriteWidth; // 0x988
	int32_t m_nSpriteHeight; // 0x98c
};

// Aligment: 0
// Size: 2448
class C_SpriteOriented : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2200
class C_BaseClientUIEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x868
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x870
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x878
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x880
};

// Aligment: 2
// Size: 2208
class C_PointClientUIDialog : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0x898
	bool m_bStartEnabled; // 0x89c
};

// Aligment: 13
// Size: 2664
class C_PointClientUIHUD : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bCheckCSSClasses; // 0x8a0
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa20
	// MNetworkEnable
	float m_flWidth; // 0xa24
	// MNetworkEnable
	float m_flHeight; // 0xa28
	// MNetworkEnable
	float m_flDPI; // 0xa2c
	// MNetworkEnable
	float m_flInteractDistance; // 0xa30
	// MNetworkEnable
	float m_flDepthOffset; // 0xa34
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa38
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa3c
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa40
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa44
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa48
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xa50
};

// Aligment: 28
// Size: 2768
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceRecreateNextUpdate; // 0x8a0
	bool m_bMoveViewToPlayerNextThink; // 0x8a1
	bool m_bCheckCSSClasses; // 0x8a2
	CTransform m_anchorDeltaTransform; // 0x8b0
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa48
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa70
	// MNetworkEnable
	bool m_bLit; // 0xa71
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xa72
	// MNetworkEnable
	float m_flWidth; // 0xa74
	// MNetworkEnable
	float m_flHeight; // 0xa78
	// MNetworkEnable
	float m_flDPI; // 0xa7c
	// MNetworkEnable
	float m_flInteractDistance; // 0xa80
	// MNetworkEnable
	float m_flDepthOffset; // 0xa84
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa88
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa8c
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa90
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa94
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa98
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xaa0
	// MNetworkEnable
	bool m_bOpaque; // 0xab8
	// MNetworkEnable
	bool m_bNoDepth; // 0xab9
	// MNetworkEnable
	bool m_bRenderBackface; // 0xaba
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xabb
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xabc
	// MNetworkEnable
	bool m_bGrabbable; // 0xabd
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xabe
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xabf
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xac0
};

// Aligment: 4
// Size: 2784
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bBeenEnabled; // 0xad0
	bool m_bHide; // 0xad1
	float m_flSeenTargetTime; // 0xad4
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xad8
};

// Aligment: 1
// Size: 3280
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	char[512] m_messageText; // 0xad0
};

// Aligment: 14
// Size: 2928
class C_PointHintUi : public C_PointClientUIWorldPanel, C_BaseClientUIEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_pszLessonName; // 0xb00
	CUtlSymbolLarge m_pszCaption; // 0xb08
	Vector m_vOffset; // 0xb10
	WorldTextAttachmentType_t m_attachType; // 0xb1c
	CHandle< C_BaseEntity > m_hIconTarget; // 0xb20
	CUtlSymbolLarge m_szTargetAttachmentName; // 0xb28
	CUtlSymbolLarge m_pszCustomLayoutFile; // 0xb30
	int32_t m_nTrackedDeviceIndex; // 0xb38
	CHandle< C_PropVRHand > m_hHighlightHand; // 0xb3c
	CUtlSymbolLarge m_pszHighlightControllerComponent; // 0xb40
	CUtlSymbolLarge m_pszHighlightControllerAction; // 0xb48
	Vector m_vecLocalHighlightPoint; // 0xb50
	CUtlSymbolLarge m_pszHighlightOtherEntityName; // 0xb60
	bool m_bUseOffScreenIndicator; // 0xb68
};

// Aligment: 9
// Size: 1880
class CInfoOffscreenPanoramaTexture : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x578
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x57c
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x580
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x588
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x590
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x598
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x5b0
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x5b8
	bool m_bCheckCSSClasses; // 0x728
};

// Aligment: 31
// Size: 1592
class COffscreenParticleTexture : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x580
	// MNetworkEnable
	float m_flRawInputA; // 0x584
	// MNetworkEnable
	float m_flRawInputB; // 0x588
	// MNetworkEnable
	float m_flRawInputC; // 0x58c
	// MNetworkEnable
	float m_flRawInputD; // 0x590
	// MNetworkEnable
	float m_flCPValueA; // 0x594
	// MNetworkEnable
	float m_flCPValueB; // 0x598
	// MNetworkEnable
	float m_flCPValueC; // 0x59c
	// MNetworkEnable
	float m_flCPValueD; // 0x5a0
	// MNetworkEnable
	int32_t m_nRemapFuncA; // 0x5a4
	// MNetworkEnable
	float m_flRemapAParamS; // 0x5a8
	// MNetworkEnable
	float m_flRemapAParamT; // 0x5ac
	// MNetworkEnable
	int32_t m_nRemapFuncB; // 0x5b0
	// MNetworkEnable
	float m_flRemapBParamS; // 0x5b4
	// MNetworkEnable
	float m_flRemapBParamT; // 0x5b8
	// MNetworkEnable
	int32_t m_nRemapFuncC; // 0x5bc
	// MNetworkEnable
	float m_flRemapCParamS; // 0x5c0
	// MNetworkEnable
	float m_flRemapCParamT; // 0x5c4
	// MNetworkEnable
	int32_t m_nRemapFuncD; // 0x5c8
	// MNetworkEnable
	float m_flRemapDParamS; // 0x5cc
	// MNetworkEnable
	float m_flRemapDParamT; // 0x5d0
	// MNetworkEnable
	int32_t m_nControlPointA; // 0x5d4
	// MNetworkEnable
	int32_t m_nControlPointB; // 0x5d8
	// MNetworkEnable
	int32_t m_nControlPointC; // 0x5dc
	// MNetworkEnable
	int32_t m_nControlPointD; // 0x5e0
	// MNetworkEnable
	int32_t m_nResolution; // 0x5e4
	// MNetworkEnable
	Color m_clearColor; // 0x5e8
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0x5ec
	// MNetworkEnable
	CUtlSymbolLarge m_szEffectName; // 0x5f0
	// MNetworkEnable
	CUtlSymbolLarge m_szMaterialParameterName; // 0x5f8
	// MNetworkEnable
	bool m_bPlayerInRange; // 0x630
};

// Aligment: 46
// Size: 2680
class C_BarnLight : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x860
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x864
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x868
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x86c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x870
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x874
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x878
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x87c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x880
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x884
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x888
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x890
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLightStyleStartTime; // 0x898
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x8a0
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x8b8
	CEntityIOOutput[4] m_StyleEvent; // 0x8d0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x970
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x978
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x97c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x980
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x984
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x988
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x98c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x998
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x99c
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x9a8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x9ac
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x9b8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x9bc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x9c0
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x9c4
	// MNetworkEnable
	float m_flBounceScale; // 0x9c8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x9cc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x9d0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x9d4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x9d8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x9dc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x9e0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x9e4
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x9e8
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x9ec
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x9f0
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x9fc
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0xa08
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0xa14
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xa20
};

// Aligment: 1
// Size: 2688
class C_RectLight : public C_BarnLight, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xa78
};

// Aligment: 3
// Size: 2696
class C_OmniLight : public C_BarnLight, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xa78
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xa7c
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xa80
};

// Aligment: 0
// Size: 1400
class CSteamPalConveyorPathNode : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 2152
class CSteamPal_PictureCard : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bShouldSetPicture; // 0x860
	bool m_bHasSetPicture; // 0x861
};

// Aligment: 7
// Size: 2944
class CInfoOffscreenMovieTexture : public CInfoOffscreenPanoramaTexture, C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	char[512] m_MovieName; // 0x760
	// MNetworkEnable
	char[512] m_OverrideSoundEvent; // 0x960
	// MNetworkEnable
	bool m_bRepeat; // 0xb60
	// MNetworkEnable
	bool m_bPlaying; // 0xb61
	// MNetworkEnable
	float m_flVisibleRangeCheck; // 0xb64
	float m_flPlayStartAtGameTime; // 0xb70
	bool m_bClientPlaying; // 0xb75
};

// Aligment: 5
// Size: 1424
class CInfoDynamicShadowHint : public C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x578
	float m_flRange; // 0x57c
	int32_t m_nImportance; // 0x580
	int32_t m_nLightChoice; // 0x584
	CHandle< C_BaseEntity > m_hLight; // 0x588
public:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints() { return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 1448
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint, C_PointEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vBoxMins; // 0x590
	Vector m_vBoxMaxs; // 0x59c
};

// Aligment: 9
// Size: 2216
class C_EnvSky : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x860
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x868
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x869
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x870
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x874
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x878
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x87c
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x880
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x884
};

// Aligment: 0
// Size: 1440
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2152
class C_LightEntity : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x860
};

// Aligment: 0
// Size: 2152
class C_LightSpotEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2152
class C_LightOrthoEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2152
class C_LightDirectionalEntity : public C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2152
class C_LightEnvironmentEntity : public C_LightDirectionalEntity, C_LightEntity, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 12
// Size: 2216
class C_PostProcessingVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x878
	// MNetworkEnable
	float m_flFadeDuration; // 0x880
	// MNetworkEnable
	float m_flMinLogExposure; // 0x884
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x888
	// MNetworkEnable
	float m_flMinExposure; // 0x88c
	// MNetworkEnable
	float m_flMaxExposure; // 0x890
	// MNetworkEnable
	float m_flExposureCompensation; // 0x894
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x898
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x89c
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x8a0
	// MNetworkEnable
	bool m_bMaster; // 0x8a4
	// MNetworkEnable
	bool m_bExposureControl; // 0x8a5
};

// Aligment: 5
// Size: 3600
class C_EnvParticleGlow : public C_ParticleSystem, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xdf8
	// MNetworkEnable
	float m_flRadiusScale; // 0xdfc
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xe00
	// MNetworkEnable
	Color m_ColorTint; // 0xe04
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xe08
};

// Aligment: 8
// Size: 2200
class C_TextureBasedAnimatable : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x860
	// MNetworkEnable
	float m_flFPS; // 0x864
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x868
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x870
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x878
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x884
	// MNetworkEnable
	float m_flStartTime; // 0x890
	// MNetworkEnable
	float m_flStartFrame; // 0x894
};

// Aligment: 0
// Size: 2144
class C_World : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 16
// Size: 2616
class C_BaseAnimating : public C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x860
	// MNetworkEnable
	// MNetworkChangeCallback "OnRagdollPoseChanged"
	PhysicsRagdollPose_t* m_pRagdollPose; // 0x880
	// MNetworkEnable
	Vector m_vecForce; // 0x888
	// MNetworkEnable
	int32_t m_nForceBone; // 0x894
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x898
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x899
	float m_flMaxSlopeDistance; // 0x89c
	Vector m_vLastSlopeCheckPos; // 0x8a0
	CUtlVector< CUtlString >* m_pSuppressedAnimEventTags; // 0x8b0
	bool m_bHasAnimatedMaterialAttributes; // 0x8b8
	C_BaseAnimating* m_pClientsideRagdoll; // 0x8c0
	bool m_bInitModelEffects; // 0x8c8
	bool m_builtRagdoll; // 0x8c9
	bool m_bIsStaticProp; // 0x8ca
	bool m_bSuppressAnimEventSounds; // 0x900
	// MNetworkEnable
	CBaseAnimatingEasings_t m_Easings; // 0xa00
};

// Aligment: 0
// Size: 2616
class C_BaseAnimatingOverlay : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2680
class CBaseProp : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa38
	int32_t m_iShapeType; // 0xa3c
	bool m_bConformToCollisionBounds; // 0xa40
	matrix3x4_t m_mPreferredCatchTransform; // 0xa44
};

// Aligment: 30
// Size: 2952
class C_BreakableProp : public CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnBreak; // 0xa80
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xaa8
	CEntityIOOutput m_OnTakeDamage; // 0xad0
	float m_impactEnergyScale; // 0xaf8
	int32_t m_iMinHealthDmg; // 0xafc
	float m_flPressureDelay; // 0xb00
	CHandle< C_BaseEntity > m_hBreaker; // 0xb04
	PerformanceMode_t m_PerformanceMode; // 0xb08
	float m_flDmgModBullet; // 0xb0c
	float m_flDmgModClub; // 0xb10
	float m_flDmgModExplosive; // 0xb14
	float m_flDmgModFire; // 0xb18
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xb20
	CUtlSymbolLarge m_iszBasePropData; // 0xb28
	int32_t m_iInteractions; // 0xb30
	float m_flPreventDamageBeforeTime; // 0xb34
	bool m_bHasBreakPiecesOrCommands; // 0xb38
	float m_explodeDamage; // 0xb3c
	float m_explodeRadius; // 0xb40
	float m_explosionDelay; // 0xb48
	CUtlSymbolLarge m_explosionBuildupSound; // 0xb50
	CUtlSymbolLarge m_explosionCustomEffect; // 0xb58
	CUtlSymbolLarge m_explosionCustomSound; // 0xb60
	CHandle< C_BasePlayer > m_hPhysicsAttacker; // 0xb68
	float m_flLastPhysicsInfluenceTime; // 0xb6c
	float m_flDefaultFadeScale; // 0xb70
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xb74
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xb78
	// MNetworkEnable
	bool m_noGhostCollision; // 0xb7c
	// MNetworkEnable
	float m_flClothScale; // 0xb80
};

// Aligment: 33
// Size: 3256
class C_DynamicProp : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xb88
	CEntityIOOutput m_pOutputAnimOver; // 0xbb0
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbd8
	CEntityIOOutput m_OnAnimReachedStart; // 0xc00
	CEntityIOOutput m_OnAnimReachedEnd; // 0xc28
	CUtlSymbolLarge m_iszDefaultAnim; // 0xc50
	CUtlSymbolLarge m_iszInitialAnim; // 0xc58
	HSequence m_hGoalSequence; // 0xc60
	int32_t m_iTransitionDirection; // 0xc64
	bool m_bAnimateOnServer; // 0xc68
	bool m_bRandomizeCycle; // 0xc69
	bool m_bHoldAnimation; // 0xc6a
	bool m_bIsHoldingAnimation; // 0xc6b
	bool m_bRandomAnimator; // 0xc6c
	float m_flNextRandAnim; // 0xc70
	float m_flMinRandAnimDuration; // 0xc74
	float m_flMaxRandAnimDuration; // 0xc78
	HSequence m_hPendingSequence; // 0xc7c
	bool m_bStartDisabled; // 0xc80
	bool m_bUpdateAttachedChildren; // 0xc81
	bool m_bScriptedMovement; // 0xc82
	bool m_bFiredStartEndOutput; // 0xc83
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xc84
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xc85
	bool m_bCreateNonSolid; // 0xc86
	bool m_bIsOverrideProp; // 0xc87
	int32_t m_iInitialGlowState; // 0xc88
	int32_t m_nGlowRange; // 0xc8c
	int32_t m_nGlowRangeMin; // 0xc90
	Color m_glowColor; // 0xc94
	int32_t m_iCachedFrameCount; // 0xc98
	Vector m_vecCachedRenderMins; // 0xc9c
	Vector m_vecCachedRenderMaxs; // 0xca8
};

// Aligment: 0
// Size: 3256
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 3256
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 3256
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 9
// Size: 2704
class C_ColorCorrectionVolume : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_LastEnterWeight; // 0x868
	float m_LastEnterTime; // 0x86c
	float m_LastExitWeight; // 0x870
	float m_LastExitTime; // 0x874
	// MNetworkEnable
	bool m_bEnabled; // 0x878
	// MNetworkEnable
	float m_MaxWeight; // 0x87c
	// MNetworkEnable
	float m_FadeDuration; // 0x880
	// MNetworkEnable
	float m_Weight; // 0x884
	// MNetworkEnable
	char[512] m_lookupFilename; // 0x888
};

// Aligment: 8
// Size: 3376
class C_FuncMonitor : public C_FuncBrush, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x860
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x868
	// MNetworkEnable
	bool m_bRenderShadows; // 0x86c
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x86d
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x870
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0x878
	// MNetworkEnable
	bool m_bEnabled; // 0x87c
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x87d
};

// Aligment: 0
// Size: 2144
class C_FuncMoveLinear : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 2664
class C_PhysMagnet : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xa38
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xa50
};

// Aligment: 13
// Size: 2696
class C_PointCommentaryNode : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0xa40
	bool m_bWasActive; // 0xa41
	float m_flEndTime; // 0xa44
	// MNetworkEnable
	float m_flStartTime; // 0xa48
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa4c
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xa50
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa58
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa60
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xa68
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xa6c
	// MNetworkEnable
	bool m_bListenedTo; // 0xa70
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xa80
	bool m_bRestartAfterRestore; // 0xa84
};

// Aligment: 0
// Size: 2616
class C_WaterBullet : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2152
class C_BaseDoor : public C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bIsUsable; // 0x860
};

// Aligment: 26
// Size: 3056
class C_BaseFlex : public C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xa40
	// MNetworkEnable
	bool m_blinktoggle; // 0xa58
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xa60
	int32_t m_nLastFlexUpdateFrameCount; // 0xad0
	Vector m_CachedViewTarget; // 0xad4
	uint32_t m_nNextSceneEventId; // 0xae8
	int32_t m_iBlink; // 0xaec
	float m_blinktime; // 0xaf0
	bool m_prevblinktoggle; // 0xaf4
	int32_t m_iBlinkSlider; // 0xaf8
	int32_t m_iJawOpen; // 0xafc
	float m_flJawOpenAmount; // 0xb00
	float m_flBlinkAmount; // 0xb04
	AttachmentHandle_t m_iMouthAttachment; // 0xb08
	AttachmentHandle_t m_iEyeAttachment; // 0xb09
	bool m_bResetFlexWeightsOnModelChange; // 0xb0a
	int32_t m_iEyeLidUpDownPP; // 0xb28
	int32_t m_iEyeLidLeftRightPP; // 0xb2c
	float m_flMinEyeUpDown; // 0xb30
	float m_flMaxEyeUpDown; // 0xb34
	float m_flMinEyeLeftRight; // 0xb38
	float m_flMaxEyeLeftRight; // 0xb3c
	int32_t m_nEyeOcclusionRendererBone; // 0xb40
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xb44
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xb74
	C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; // 0xb90
};

// Aligment: 14
// Size: 2768
class C_ClientRagdoll : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bFadeOut; // 0xa38
	bool m_bImportant; // 0xa39
	float m_flEffectTime; // 0xa3c
	float m_gibDespawnTime; // 0xa40
	int32_t m_iCurrentFriction; // 0xa44
	int32_t m_iMinFriction; // 0xa48
	int32_t m_iMaxFriction; // 0xa4c
	int32_t m_iFrictionAnimState; // 0xa50
	bool m_bReleaseRagdoll; // 0xa54
	AttachmentHandle_t m_iEyeAttachment; // 0xa55
	bool m_bFadingOut; // 0xa56
	float32[10] m_flScaleEnd; // 0xa58
	float32[10] m_flScaleTimeStart; // 0xa80
	float32[10] m_flScaleTimeEnd; // 0xaa8
};

// Aligment: 8
// Size: 2232
class C_Precipitation : public C_BaseTrigger, C_BaseToggle, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flDensity; // 0x868
	float m_flParticleInnerDist; // 0x878
	char* m_pParticleDef; // 0x880
	TimedEvent[1] m_tParticlePrecipTraceTimer; // 0x8a8
	bool[1] m_bActiveParticlePrecipEmitter; // 0x8b0
	bool m_bParticlePrecipInitialized; // 0x8b1
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x8b2
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x8b4
};

// Aligment: 2
// Size: 2464
class C_FireSprite : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecMoveDir; // 0x990
	bool m_bFadeFromAbove; // 0x99c
};

// Aligment: 0
// Size: 2448
class C_FireFromAboveSprite : public C_Sprite, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 23
// Size: 2848
class C_Fish : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_pos; // 0xa38
	Vector m_vel; // 0xa44
	QAngle m_angles; // 0xa50
	int32_t m_localLifeState; // 0xa5c
	float m_deathDepth; // 0xa60
	float m_deathAngle; // 0xa64
	float m_buoyancy; // 0xa68
	CountdownTimer m_wiggleTimer; // 0xa70
	float m_wigglePhase; // 0xa80
	float m_wiggleRate; // 0xa84
	Vector m_actualPos; // 0xa88
	QAngle m_actualAngles; // 0xa94
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_poolOrigin; // 0xaa0
	// MNetworkEnable
	float m_waterLevel; // 0xaac
	bool m_gotUpdate; // 0xab0
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xab4
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xab8
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xabc
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xac0
	float32[20] m_errorHistory; // 0xac4
	int32_t m_errorHistoryIndex; // 0xb14
	int32_t m_errorHistoryCount; // 0xb18
	float m_averageError; // 0xb1c
};

// Aligment: 1
// Size: 2960
class C_PhysicsProp : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bAwake; // 0xb88
};

// Aligment: 27
// Size: 2864
class C_PropVehicleDriveable : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BasePlayer > m_hPlayer; // 0xa40
	// MNetworkEnable
	int32_t m_nSpeed; // 0xa44
	// MNetworkEnable
	int16_t m_nRPM; // 0xa48
	// MNetworkEnable
	float m_flThrottle; // 0xa4c
	// MNetworkEnable
	int32_t m_nBoostTimeLeft; // 0xa50
	// MNetworkEnable
	bool m_bHasBoost; // 0xa54
	// MNetworkEnable
	bool m_nScannerDisabledWeapons; // 0xa55
	// MNetworkEnable
	bool m_nScannerDisabledVehicle; // 0xa56
	int32_t m_iFlashTimer; // 0xa58
	bool m_bLockedDim; // 0xa5c
	bool m_bLockedIcon; // 0xa5d
	int32_t m_iScannerWepFlashTimer; // 0xa60
	bool m_bScannerWepDim; // 0xa64
	bool m_bScannerWepIcon; // 0xa65
	int32_t m_iScannerVehicleFlashTimer; // 0xa68
	bool m_bScannerVehicleDim; // 0xa6c
	bool m_bScannerVehicleIcon; // 0xa6d
	float m_flSequenceChangeTime; // 0xa70
	// MNetworkEnable
	bool m_bEnterAnimOn; // 0xa74
	// MNetworkEnable
	bool m_bExitAnimOn; // 0xa75
	float m_flFOV; // 0xa78
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecGunCrosshair; // 0xa80
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEyeExitEndpoint; // 0xa98
	// MNetworkEnable
	bool m_bHasGun; // 0xaa4
	// MNetworkEnable
	bool m_bUnableToFire; // 0xaa5
	CHandle< C_BasePlayer > m_hPrevPlayer; // 0xaa8
	C_ViewSmoothingData_t m_ViewSmoothingData; // 0xab0
};

// Aligment: 1
// Size: 3264
class C_DynamicPropClientside : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bNoInterpolate; // 0xcb8
};

// Aligment: 7
// Size: 3320
class C_BasePropDoor : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xcc8
	bool m_modelChanged; // 0xccc
	// MNetworkEnable
	bool m_bLocked; // 0xccd
	// MNetworkEnable
	Vector m_closedPosition; // 0xcd0
	// MNetworkEnable
	QAngle m_closedAngles; // 0xcdc
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xce8
	Vector m_vWhereToSetLightingOrigin; // 0xcec
};

// Aligment: 9
// Size: 11296
class C_FlexCycler : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flextime; // 0xbf0
	float32[2048] m_flextarget; // 0xbf8
	float m_blinktime; // 0x2bf8
	float m_looktime; // 0x2bfc
	Vector m_lookTarget; // 0x2c00
	float m_speaktime; // 0x2c0c
	int32_t m_istalking; // 0x2c10
	int32_t m_phoneme; // 0x2c14
	HSequence m_hCurrLayerSequence; // 0x2c18
};

// Aligment: 9
// Size: 11360
class C_GenericFlexCycler : public C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	int32_t m_nTestMode; // 0x2c20
	int32_t m_nTestIndex; // 0x2c24
	CUtlSymbolLarge m_poseParameterName; // 0x2c28
	bool m_bDoClientSideAnimation; // 0x2c30
	CUtlSymbolLarge[2] m_layerSequence; // 0x2c38
	int32[2] m_nLayerIndex; // 0x2c48
	HSequence[2] m_hBaseSequence; // 0x2c50
	int32_t m_nBoneOverrideIndex; // 0x2c58
	float m_flLastSimTime; // 0x2c5c
};

// Aligment: 12
// Size: 3008
class C_PhysPropClientside : public C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flTouchDelta; // 0xb88
	float m_fDeathTime; // 0xb8c
	float m_impactEnergyScale; // 0xb90
	float m_inertiaScale; // 0xb94
	float m_flDmgModBullet; // 0xb98
	float m_flDmgModClub; // 0xb9c
	float m_flDmgModExplosive; // 0xba0
	float m_flDmgModFire; // 0xba4
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xba8
	CUtlSymbolLarge m_iszBasePropData; // 0xbb0
	int32_t m_iInteractions; // 0xbb8
	bool m_bHasBreakPiecesOrCommands; // 0xbbc
};

// Aligment: 8
// Size: 2736
class C_RagdollProp : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xa40
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xa58
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	float m_flBlendWeight; // 0xa70
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xa74
	AttachmentHandle_t m_iEyeAttachment; // 0xa78
	float m_flBlendWeightCurrent; // 0xa7c
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xa80
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xa98
};

// Aligment: 25
// Size: 2808
class C_LocalTempEntity : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t flags; // 0xa50
	float die; // 0xa54
	float m_flFrameMax; // 0xa58
	float x; // 0xa5c
	float y; // 0xa60
	float fadeSpeed; // 0xa64
	float bounceFactor; // 0xa68
	int32_t hitSound; // 0xa6c
	int32_t priority; // 0xa70
	Vector tentOffset; // 0xa74
	QAngle m_vecTempEntAngVelocity; // 0xa80
	int32_t tempent_renderamt; // 0xa8c
	Vector m_vecNormal; // 0xa90
	float m_flSpriteScale; // 0xa9c
	int32_t m_nFlickerFrame; // 0xaa0
	float m_flFrameRate; // 0xaa4
	float m_flFrame; // 0xaa8
	char* m_pszImpactEffect; // 0xab0
	char* m_pszParticleEffect; // 0xab8
	bool m_bParticleCollision; // 0xac0
	int32_t m_iLastCollisionFrame; // 0xac4
	Vector m_vLastCollisionOrigin; // 0xac8
	Vector m_vecTempEntVelocity; // 0xad4
	Vector m_vecPrevAbsOrigin; // 0xae0
	Vector m_vecTempEntAcceleration; // 0xaec
};

// Aligment: 12
// Size: 3136
class C_BaseGrenade : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bHasWarnedAI; // 0xbf0
	bool m_bIsSmokeGrenade; // 0xbf1
	// MNetworkEnable
	bool m_bIsLive; // 0xbf2
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	float m_DmgRadius; // 0xbf4
	// MNetworkEnable
	float m_flDetonateTime; // 0xbf8
	float m_flWarnAITime; // 0xbfc
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flDamage; // 0xc00
	CUtlSymbolLarge m_iszBounceSound; // 0xc08
	CUtlString m_ExplosionSound; // 0xc10
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0xc1c
	float m_flNextAttack; // 0xc38
	CHandle< C_BaseEntity > m_hOriginalThrower; // 0xc3c
};

// Aligment: 1
// Size: 3064
class C_ShatterGlassShardPhysics : public C_PhysicsProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xb98
};

// Aligment: 1
// Size: 2664
class C_PointHintUIButtonHighlightModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	matrix3x4_t m_mComponentTransform; // 0xa38
};

// Aligment: 1
// Size: 2664
class C_PointHintUIArrowHighlightModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	matrix3x4_t m_mArrowLocalTransform; // 0xa38
};

// Aligment: 4
// Size: 2768
class C_PointHintUIHighlightModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0xa68
	int32_t m_nTrackedDeviceIndex; // 0xa80
	matrix3x4_t m_matLocalHighlight; // 0xa98
	bool m_bVisible; // 0xac8
};

// Aligment: 0
// Size: 2616
class CNPCAbilityModel : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2744
class C_PropAnimatingBreakable : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nCurrentBreakStage; // 0xa38
	CEntityIOOutput m_OnTakeDamage; // 0xa40
	CEntityIOOutput m_OnFinalBreak; // 0xa68
	CEntityIOOutput m_OnStageAdvanced; // 0xa90
};

// Aligment: 5
// Size: 2648
class CSteamPal_BaseSingingEntity : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	char m_cCurNote; // 0xa40
	float m_flTimeNotePlayed; // 0xa44
	int32_t m_nSequenceTrack; // 0xa48
	bool m_bIsRegistered; // 0xa4c
	float m_flWingLastNotePct; // 0xa50
};

// Aligment: 9
// Size: 2800
class CSteamPal_WritingSurface : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vPointOnBoardPos; // 0xa60
	Vector m_vPrevPointOnBoardPos1; // 0xa6c
	Vector m_vPrevPointOnBoardPos2; // 0xa78
	Vector m_vTopLeftPoint; // 0xa90
	Vector m_vBoardNormal; // 0xa9c
	matrix3x4_t m_matWorldToOffscreenParticleBuffer; // 0xaa8
	float m_flTimeCreated; // 0xad8
	float m_flLastTimeDrawn; // 0xadc
	// MNetworkEnable
	bool m_bCanWrite; // 0xae8
};

// Aligment: 26
// Size: 3056
class CSteamPal_Turret : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	AttachmentHandle_t m_hTurretLaserAttachment; // 0xa38
	// MNetworkEnable
	CHandle< CSteamPal_Turret_Wing >[2] m_hWings; // 0xa3c
	// MNetworkEnable
	CHandle< CSteamPal_Turret_Wing > m_hLeftWing; // 0xa44
	// MNetworkEnable
	CHandle< CSteamPal_Turret_Wing > m_hRightWing; // 0xa48
	// MNetworkEnable
	bool m_bBeingControlled; // 0xa4c
	// MNetworkEnable
	bool m_bGyroHintEnabled; // 0xa4d
	// MNetworkEnable
	float m_flTotalGyroActiveTime; // 0xa50
	// MNetworkEnable
	float m_flTotalGyroInactiveTime; // 0xa54
	// MNetworkEnable
	float m_flLastGyroActiveTime; // 0xa58
	ParticleIndex_t m_nLaserSightFX; // 0xa5c
	CEntityIOOutput m_OnLeftWingButton; // 0xa60
	CEntityIOOutput m_OnRightWingButton; // 0xa88
	CEntityIOOutput m_OnAnyWingButton; // 0xab0
	CEntityIOOutput m_OnLeftFireButton; // 0xad8
	CEntityIOOutput m_OnRightFireButton; // 0xb00
	CEntityIOOutput m_OnAnyFireButton; // 0xb28
	CEntityIOOutput m_OnTurretExploded; // 0xb50
	CEntityIOOutput m_OnToiletControlsUsed; // 0xb78
	CEntityIOOutput m_OnPresentingRotationFinished; // 0xba0
	Vector m_vLaserSightEnd; // 0xbc8
	// MNetworkEnable
	float m_flCurrentAimX; // 0xbd8
	// MNetworkEnable
	float m_flCurrentAimY; // 0xbdc
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hAmmoModel; // 0xbe0
	// MNetworkEnable
	bool m_bRevertFOV; // 0xbe4
	// MNetworkEnable
	float m_flWingDeployAmount; // 0xbe8
	// MNetworkEnable
	CHandle< CSteamPalPointCamera > m_hReturnCamera; // 0xbec
};

// Aligment: 37
// Size: 3776
class CSteamPal_Intro_Toilet : public CSteamPal_Turret, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	float m_flLidSpeed; // 0xbf0
	// MNetworkEnable
	float m_flLidPos; // 0xbf4
	// MNetworkEnable
	float m_flHandleSpeed; // 0xbf8
	// MNetworkEnable
	float m_flHandlePos; // 0xbfc
	// MNetworkEnable
	float m_flBidetPlaybackSpeed; // 0xc00
	// MNetworkEnable
	float m_flBidetPlaybackPos; // 0xc04
	// MNetworkEnable
	float m_flCisternSpeed; // 0xc08
	// MNetworkEnable
	float m_flCisternPos; // 0xc0c
	// MNetworkEnable
	int32_t m_nWaterLevel; // 0xc10
	// MNetworkEnable
	bool m_bLoadedWithBullets; // 0xc14
	// MNetworkEnable
	bool m_bExclusiveToilet; // 0xc15
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nLidTestState; // 0xc18
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nFlushTestState; // 0xc1c
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nBidet1TestState; // 0xc20
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nBidet2TestState; // 0xc24
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nBidet3TestState; // 0xc28
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nBidet4TestState; // 0xc2c
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nLeftArmTestState; // 0xc30
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nRightArmTestState; // 0xc34
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nHoldWaterTestState; // 0xc38
	// MNetworkEnable
	CSteamPal_Intro_Toilet::TestState_t m_nSeatPressureTestState; // 0xc3c
	// MNetworkEnable
	CHandle< C_DynamicProp > m_hWaterSpout; // 0xc40
	// MNetworkEnable
	CHandle< C_DynamicProp > m_hPressureTester; // 0xc44
	// MNetworkEnable
	CHandle< CSteamPal_ToiletTestPanel > m_hTestPanel; // 0xc48
	CEntityIOOutput m_OnTestFailed; // 0xc50
	CEntityIOOutput m_OnTestsPassed; // 0xc78
	CEntityIOOutput m_OnFlushButton; // 0xca0
	CEntityIOOutput m_OnBidetButton; // 0xcc8
	CEntityIOOutput m_OnPressureButtonPressed; // 0xcf0
	CEntityIOOutput m_OnPressureButtonReleased; // 0xd18
	CEntityIOOutput m_OnPressureTesterDown; // 0xd40
	CEntityIOOutput m_OnLidButton; // 0xd68
	CEntityIOOutput m_OnCisternButton; // 0xd90
	CEntityIOOutput m_OnSpoutStartWater; // 0xdb8
	CEntityIOOutput m_OnOtherButton; // 0xde0
	CEntityIOOutput m_OnHighBidetPressure; // 0xe08
	CEntityIOOutput m_OnSmokingToiletBidetCanceled; // 0xe30
};

// Aligment: 34
// Size: 3704
class CSteamPal_ToiletTestPanel : public C_PhysicsProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hCisternDiagramLight; // 0xb90
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hFlushDiagramLight; // 0xb94
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hSeatPressureDiagramLight; // 0xb98
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hBidetDiagramLight; // 0xb9c
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hCisternTestLight; // 0xba0
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hFlushTestLight; // 0xba4
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hSeatPressureTestLight; // 0xba8
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hBidetTestLight; // 0xbac
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hCisternGauge; // 0xbb0
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hFlushGauge; // 0xbb4
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hSeatPressureGauge; // 0xbb8
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hBidetGauge; // 0xbbc
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hCisternFunctionLight; // 0xbc0
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hBidetFunctionLight; // 0xbc4
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hFlushFunctionLight; // 0xbc8
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hSeatPressureFunctionLight; // 0xbcc
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hPassFailLight; // 0xbd0
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit0; // 0xbd4
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit1; // 0xbd8
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit2; // 0xbdc
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit3; // 0xbe0
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit4; // 0xbe4
	// MNetworkEnable
	CHandle< C_BaseAnimating > m_hDigit5; // 0xbe8
	// MNetworkEnable
	int32_t m_nCounterValue; // 0xbec
	CEntityIOOutput m_OnTestLidPassed; // 0xc50
	CEntityIOOutput m_OnTestCisternPassed; // 0xc78
	CEntityIOOutput m_OnTestLeftArmPassed; // 0xca0
	CEntityIOOutput m_OnTestRightArmPassed; // 0xcc8
	CEntityIOOutput m_OnTestBidetPassed; // 0xcf0
	CEntityIOOutput m_OnTestPressurePassed; // 0xd18
	CEntityIOOutput m_OnTestFlushPassed; // 0xd40
	CEntityIOOutput m_OnAllTestsPassed; // 0xd68
	CEntityIOOutput m_OnTestFailed; // 0xd90
	CEntityIOOutput m_OnResetPanel; // 0xdb8
};

// Aligment: 4
// Size: 2632
class CSteamPal_Toilet : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	AttachmentHandle_t m_hToiletBidetAttachment; // 0xa38
	CEntityHandle m_hSeatHinge; // 0xa3c
	CEntityHandle m_hSeatCoverHinge; // 0xa40
	CEntityHandle m_hCisternLidConstraint; // 0xa44
};

// Aligment: 0
// Size: 2616
class CSteamPal_Ultra_Toilet_Rocket : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class CSteamPal_Ultra_Toilet_Attachment : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 3056
class CSteamPal_Ultra_Toilet : public CSteamPal_Turret, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class CSteamPal_Trackball : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class CSteamPal_TouchScreen : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 20
// Size: 3976
class CSteamPal_Desk : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bInputEnabled; // 0xa38
	float m_flStickDeployAmount; // 0xa3c
	float m_flStickDeployVelocity; // 0xa40
	int32_t m_nDeskState; // 0xa44
	bool m_bDiscoveryModeComplete; // 0xa48
	bool m_bDeskHidden; // 0xa49
	CEntityIOOutput m_OnAButton; // 0xd18
	CEntityIOOutput m_OnBButton; // 0xd40
	CEntityIOOutput m_OnXButton; // 0xd68
	CEntityIOOutput m_OnYButton; // 0xd90
	CEntityIOOutput m_OnL4Button; // 0xdb8
	CEntityIOOutput m_OnL5Button; // 0xde0
	CEntityIOOutput m_OnR4Button; // 0xe08
	CEntityIOOutput m_OnR5Button; // 0xe30
	CEntityIOOutput m_OnL4ButtonReleased; // 0xe58
	CEntityIOOutput m_OnL5ButtonReleased; // 0xe80
	CEntityIOOutput m_OnR4ButtonReleased; // 0xea8
	CEntityIOOutput m_OnR5ButtonReleased; // 0xed0
	CEntityIOOutput m_OnHamburgerButton; // 0xef8
	CEntityIOOutput m_OnShowPaddles; // 0xf20
};

// Aligment: 2
// Size: 2968
class CSteamPal_PaintableProp : public C_PhysicsProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	bool m_bShouldSetPicture; // 0xb90
	bool m_bHasSetPicture; // 0xb91
};

// Aligment: 0
// Size: 2960
class CNPCApplianceProjectile : public C_PhysicsProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 19
// Size: 3360
class C_DevtestHierarchy : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vRotationAxis; // 0xcb8
	float m_flRotationSpeed; // 0xcc4
	// MNetworkEnable
	int32_t m_nTestMode; // 0xcc8
	CHandle< C_BaseEntity > m_hChild; // 0xccc
	// MNetworkEnable
	CUtlStringToken m_attachName; // 0xcd0
	// MNetworkEnable
	Vector m_vDynamicAttachOffset; // 0xcd4
	// MNetworkEnable
	int32_t m_nDynamicResetCount; // 0xce0
	int32_t m_nDynamicDetachCount; // 0xce4
	// MNetworkEnable
	bool m_bChildIsDynamic; // 0xce8
	// MNetworkEnable
	bool m_bCreateChildSideChild; // 0xce9
	// MNetworkEnable
	CUtlStringToken m_alternateAttachName; // 0xcec
	CHandle< C_BaseEntity > m_hAlternateParent; // 0xcf0
	CStrongHandle< InfoForResourceTypeCModel > m_hAlternateModel; // 0xcf8
	CStrongHandle< InfoForResourceTypeCModel > m_hOriginalModel; // 0xd00
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_hClientSideChildModel; // 0xd08
	// MNetworkEnable
	float m_flEntityStartTime; // 0xd10
	int32_t m_nTestIndex; // 0xd14
	HierarchyType_t m_nCurrType; // 0xd18
	int32_t m_nCurrentModel; // 0xd1c
};

// Aligment: 0
// Size: 3256
class C_DevtestHierarchyChild : public C_DynamicProp, C_BreakableProp, CBaseProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2616
class C_DevtestHierarchy2 : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 8
// Size: 2656
class C_BasePlayerWeapon : public C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	WeaponState_t m_iState; // 0xa38
	WeaponState_t m_iOldState; // 0xa3c
	bool m_bRemoveable; // 0xa40
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttack; // 0xa44
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttack; // 0xa48
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0xa4c
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0xa50
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32[2] m_pReserveAmmo; // 0xa54
};

// Aligment: 0
// Size: 11360
class C_GenericFlexCyclerAlias_cycler : public C_GenericFlexCycler, C_FlexCycler, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 2792
class C_RagdollPropAttached : public C_RagdollProp, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xab0
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xab4
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointBoneSpace; // 0xab8
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointRagdollSpace; // 0xac4
	Vector m_vecOffset; // 0xad0
	float m_parentTime; // 0xadc
	bool m_bHasParent; // 0xae0
};

// Aligment: 7
// Size: 3176
class C_BaseCombatCharacter : public C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_bloodColor; // 0xbf0
	AttachmentHandle_t m_leftFootAttachment; // 0xbf4
	AttachmentHandle_t m_rightFootAttachment; // 0xbf5
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xbf8
	float m_flWaterWorldZ; // 0xbfc
	float m_flWaterNextTraceTime; // 0xc00
	// MNetworkEnable
	float m_flFieldOfView; // 0xc04
};

// Aligment: 14
// Size: 3272
class C_AI_BaseNPC : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flTempRagdollTransitionTime; // 0xc68
	CUtlVector< CTransform > m_RagdollTransform; // 0xc70
	CUtlVector< CTransform > m_TransitionTransform; // 0xc88
	float m_flPoweredRagdoll_BlendWeight; // 0xca0
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xca4
	// MNetworkEnable
	HSequence m_iDeathPose; // 0xca8
	// MNetworkEnable
	int32_t m_iDeathFrame; // 0xcac
	// MNetworkEnable
	bool m_bIsMoving; // 0xcb0
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xcb1
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xcb2
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hServerRagdoll; // 0xcb4
	// MNetworkEnable
	bool m_bPoweredRagdoll; // 0xcb8
	// MNetworkEnable
	RagdollBlendDirection m_iPoweredRagdoll_TransitionDirection; // 0xcbc
	// MNetworkEnable
	float m_flPoweredRagdoll_TransitionStartTime; // 0xcc0
};

// Aligment: 2
// Size: 3296
class C_AI_DefaultNPC : public C_AI_BaseNPC, C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CAI_StanceServices* m_pStanceServices; // 0xcc8
	// MNetworkEnable
	// MNetworkTypeAlias "CAI_AbilityServices"
	// MNetworkChangeCallback "AbilityServicesChanged"
	CAI_AbilityServices* m_pAbilityServices; // 0xcd0
};

// Aligment: 0
// Size: 3296
class C_AI_BaseActor : public C_AI_DefaultNPC, C_AI_BaseNPC, C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 10
// Size: 3344
class CBasePlayerController : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nFinalPredictedTick; // 0xc70
	C_CommandContext m_CommandContext; // 0xc78
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0xcd0
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayer > m_hPawn; // 0xcd4
	CSplitScreenSlot m_nSplitScreenSlot; // 0xcd8
	CHandle< CBasePlayerController > m_hSplitOwner; // 0xcdc
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0xce0
	bool m_bIsHLTV; // 0xcf8
	uint64_t m_steamID; // 0xd00
	bool m_bIsLocalPlayerController; // 0xd08
};

// Aligment: 0
// Size: 3176
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 31
// Size: 3736
class C_BasePlayer : public CBasePlayerController, C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xd10
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xd18
	// MNetworkEnable
	CPlayer_VehicleServices* m_pVehicleServices; // 0xd20
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xd28
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xd30
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xd38
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xd40
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xd48
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xd50
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xd58
	QAngle m_vecOldViewAngles; // 0xd68
	uint64_t m_nButtons; // 0xd78
	uint64_t m_afButtonPressed; // 0xd80
	uint64_t m_afButtonReleased; // 0xd88
	uint64_t m_afButtonLast; // 0xd90
	uint64_t m_afButtonDisabled; // 0xd98
	uint64_t m_afButtonForced; // 0xda0
	uint64_t m_nOldButtons; // 0xdb0
	int32_t m_nImpulse; // 0xdb8
	QAngle v_angle; // 0xdbc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xdc8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	sky3dparams_t m_skybox3d; // 0xdd0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flDeathTime; // 0xe60
	bool m_bWasFrozen; // 0xe64
	Vector m_vecPredictionError; // 0xe68
	float m_flPredictionErrorTime; // 0xe74
	float m_flFOVSensitivityAdjust; // 0xe78
	float m_flMouseSensitivity; // 0xe7c
	Vector m_vOldOrigin; // 0xe80
	float m_flOldSimulationTime; // 0xe8c
	bool deadflag; // 0xe90
};

// Aligment: 19
// Size: 3928
class C_SteamPal_Player : public C_BasePlayer, CBasePlayerController, C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CUtlString m_strPlayerName; // 0xef0
	// MNetworkEnable
	bool m_bViewFrozen; // 0xef8
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCameraTarget; // 0xefc
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCursorHoverEntity; // 0xf00
	// MNetworkEnable
	// MNetworkChangeCallback "DamageCausedChanged"
	uint64_t m_uDamageCaused; // 0xf08
	// MNetworkEnable
	bool m_bMotionBlur; // 0xf10
	int64_t m_hCameraFlashPostProcessingInst; // 0xf18
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hScreenshotTexture; // 0xf20
	CHandle< C_BaseEntity > m_hCurrentScreenTouchEntity; // 0xf28
	Vector m_vCurrentScreenTouchEntityHitPoint; // 0xf2c
	Vector m_vCursorScreenPos; // 0xf38
	Vector m_vCursorWorldPos; // 0xf44
	bool m_bIsUserTouchActive; // 0xf50
	bool m_bIsMainMenuShowing; // 0xf51
	bool m_bSteamScreenshotsWasHooked; // 0xf52
	bool m_bInPhotoSection; // 0xf53
	bool m_bScreenshotQueued; // 0xf54
	bool m_bCameraFlashPending; // 0xf55
	bool m_bCameraFlashFadeOut; // 0xf56
};

