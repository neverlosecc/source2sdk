#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: server.dll
// Class Count: 481
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 18
// Size: 2016
class CPhysBox : public CBreakable, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_damageType; // 0x630
	float m_massScale; // 0x634
	int32_t m_damageToEnableMotion; // 0x638
	float m_flForceToEnableMotion; // 0x63c
	QAngle m_angPreferredCarryAngles; // 0x640
	bool m_bNotSolidToWorld; // 0x64c
	int32_t m_iExploitableByPlayer; // 0x650
	float m_flTouchOutputPerEntityDelay; // 0x654
	CEntityIOOutput m_OnDamaged; // 0x658
	CEntityIOOutput m_OnAwakened; // 0x680
	CEntityIOOutput m_OnMotionEnabled; // 0x6a8
	CEntityIOOutput m_OnPhysGunPickup; // 0x6d0
	CEntityIOOutput m_OnPhysGunPunt; // 0x6f8
	CEntityIOOutput m_OnPhysGunOnlyPickup; // 0x720
	CEntityIOOutput m_OnPhysGunDrop; // 0x748
	CEntityIOOutput m_OnPlayerUse; // 0x770
	CEntityIOOutput m_OnStartTouch; // 0x798
	CHandle< CBasePlayer > m_hCarryingPlayer; // 0x7c0
};

// Aligment: 2
// Size: 2032
class CPhysBoxMultiplayer : public CPhysBox, CBreakable, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_iPhysicsMode; // 0x7e8
	// MNetworkEnable
	// MNetworkEnable
	float m_fMass; // 0x7ec
};

// Aligment: 0
// Size: 2696
class CPhysicsPropMultiplayer : public CPhysicsProp, CBreakableProp, CBaseProp, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 5
// Size: 2752
class CPhysicsPropRespawnable : public CPhysicsProp, CBreakableProp, CBaseProp, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xa88
	QAngle m_vOriginalSpawnAngles; // 0xa94
	Vector m_vOriginalMins; // 0xaa0
	Vector m_vOriginalMaxs; // 0xaac
	float m_flRespawnDuration; // 0xab8
};

// Aligment: 0
// Size: 848
class CFuncPropRespawnZone : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 864
class CPointHMDAnchor : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	float m_flEnableTime; // 0x354
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nPlayerIndex; // 0x358
};

// Aligment: 0
// Size: 864
class CPointHMDAnchorOverride : public CPointHMDAnchor, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 9
// Size: 1768
class CPropVRTrackedObject : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bShouldBePhysicallyConstrained; // 0x690
	bool m_bFoundInitialSafeLocation; // 0x691
	// MNetworkEnable
	bool m_bIsTracking; // 0x6b0
	// MNetworkEnable
	Vector m_vTrackedPosition; // 0x6b4
	// MNetworkEnable
	QAngle m_qTrackedAngles; // 0x6c0
	// MNetworkEnable
	Vector m_vPhysicallyConstrainedPosition; // 0x6cc
	// MNetworkEnable
	QAngle m_qPhysicallyConstrainedAngles; // 0x6d8
	// MNetworkEnable
	bool m_bClientIsAuthoritativeForTransform; // 0x6e4
	// MNetworkEnable
	bool m_bIsInContact; // 0x6e5
};

// Aligment: 4
// Size: 1808
class CPropHMDAvatar : public CPropVRTrackedObject, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32[2] m_hLiteralControllerSlots; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	int32[2] m_hLogicalControllerSlots; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPropVRHand >[4] m_hVRControllers; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPointWorldText > m_hCloseCaption; // 0x708
};

// Aligment: 5
// Size: 52
struct HandHistoryInfo_t
{
public:
	Vector m_vVelocity; // 0x0
	Vector m_vFilteredVelocity; // 0xc
	Vector m_vFilteredThrowVel; // 0x18
	Vector m_vPosition; // 0x24
	float m_flSampleTime; // 0x30
};

// Aligment: 39
// Size: 2456
class CPropVRHand : public CPropVRTrackedObject, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseVRHandAttachment > m_hActiveHandAttachment; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPropHMDAvatar > m_hHMDAvatar; // 0x724
	// MNetworkEnable
	bool m_bVrSkeletonActive; // 0x728
	// MNetworkEnable
	int32_t m_nVrBoneCount; // 0x72c
	// MNetworkEnable
	uint32_t m_unVrCompressedBoneTransformsSize; // 0x730
	// MNetworkEnable
	uint8[64] m_vrCompressedBoneTransforms; // 0x734
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CBaseVRHandAttachmentHandle"
	CUtlVector< CHandle< CBaseVRHandAttachment > > m_hAttachments; // 0x778
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsInView; // 0x791
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nHandID; // 0x794
	// MNetworkEnable
	// MNetworkEnable
	float m_flTriggerAnalogValue; // 0x798
	// MNetworkEnable
	// MNetworkEnable
	float m_flGripAnalogValue; // 0x79c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger0; // 0x7a0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger1; // 0x7a4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger2; // 0x7a8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger3; // 0x7ac
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger4; // 0x7b0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay0; // 0x7b4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay1; // 0x7b8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay2; // 0x7bc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay3; // 0x7c0
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueX; // 0x7c4
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueY; // 0x7c8
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueX; // 0x7cc
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueY; // 0x7d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCanPerformUse; // 0x7d4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTipTransformInitialized; // 0x7d5
	// MNetworkEnable
	// MNetworkEnable
	Vector m_localTipOrigin; // 0x7d8
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_localTipAngles; // 0x7e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flHapticPulseTime; // 0x7f0
	// MNetworkEnable
	// MNetworkEnable
	int16_t m_nHapticPulseInterval; // 0x7f4
	CInteractionManager m_InteractionMgr; // 0x7f8
	matrix3x4_t m_matUseTransform; // 0x8d0
	uint8_t m_nAttachUseIndex; // 0x900
	matrix3x4_t m_matHoldTransform; // 0x904
	uint8_t m_nAttachHoldIndex; // 0x934
	matrix3x4_t m_matHoverTransform; // 0x938
	uint8_t m_nAttachHoverIndex; // 0x968
	// MNetworkEnable
	// MNetworkEnable
	eLiteralHandType m_LiteralHandType; // 0x96c
};

// Aligment: 2
// Size: 16
struct prevent_interaction_t
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x8
	float m_flUntilTime; // 0xc
};

// Aligment: 12
// Size: 216
class CInteractionManager
{
public:
	interactions_t m_nActiveInteraction; // 0x8
	matrix3x4_t m_matHoldTransform; // 0xc
	CHandle< CBaseAnimating > m_hSelf; // 0x3c
	CHandle< CBasePlayer > m_hPlayer; // 0x40
	CHandle< CBaseAnimating > m_hInteractionTarget; // 0x44
	matrix3x4_t m_mInteractionTransformInit; // 0x48
	matrix3x4_t m_mInteractionTransformTarget; // 0x78
	float m_flInteractionLerp; // 0xa8
	bool[8] m_bSelfInteractionRequirementMet; // 0xac
	bool[8] m_bInteractionsDisabled; // 0xb4
	bool m_bAllInteractionsDisabled; // 0xbc
	CUtlVector< prevent_interaction_t > m_vecPreventionEntities; // 0xc0
};

// Aligment: 15
// Size: 224
class CVRHandAttachmentInput
{
public:
	uint64_t m_nButtons; // 0x0
	uint64_t m_afButtonPressed; // 0x8
	uint64_t m_afButtonReleased; // 0x10
	float m_flTriggerAnalogValue; // 0x18
	float m_flGripAnalogValue; // 0x1c
	float m_flFinger0; // 0x20
	float m_flFinger1; // 0x24
	float m_flFinger2; // 0x28
	float m_flFinger3; // 0x2c
	float m_flFinger4; // 0x30
	float m_flTrackpadAnalogValueX; // 0x34
	float m_flTrackpadAnalogValueY; // 0x38
	float m_flJoystickAnalogValueX; // 0x3c
	float m_flJoystickAnalogValueY; // 0x40
	CPropVRHand* m_pHand; // 0xd8
};

// Aligment: 4
// Size: 1736
class CBaseVRHandAttachment : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnAttachedToHand; // 0x670
	CEntityIOOutput m_OnDetachedFromHand; // 0x698
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPropVRHand > m_hAttachedHand; // 0x6c0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsAttached; // 0x6c4
};

// Aligment: 0
// Size: 1736
class CVRHandModelOverride : public CBaseVRHandAttachment, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 40
// Size: 1256
class CPointValueRemapper : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x351
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x354
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x358
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x360
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x368
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x36c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	float m_flDisengageDistance; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	float m_flEngageDistance; // 0x378
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x37c
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x380
	CUtlSymbolLarge m_iszOutputEntityName; // 0x388
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x390
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x398
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x3a0
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_hOutputEntities; // 0x3a8
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x3c0
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x3c4
	// MNetworkEnable
	// MNetworkEnable
	float m_flMomentumModifier; // 0x3c8
	// MNetworkEnable
	// MNetworkEnable
	float m_flSnapValue; // 0x3cc
	float m_flCurrentMomentum; // 0x3d0
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x3d4
	float m_flRatchetOffset; // 0x3d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flInputOffset; // 0x3dc
	bool m_bEngaged; // 0x3e0
	bool m_bFirstUpdate; // 0x3e1
	float m_flPreviousValue; // 0x3e4
	float m_flPreviousUpdateTickTime; // 0x3e8
	float m_flCustomOutputValue; // 0x3ec
	CUtlSymbolLarge m_iszSoundEngage; // 0x3f0
	CUtlSymbolLarge m_iszSoundDisengage; // 0x3f8
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x400
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x408
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x410
	CEntityIOOutput m_OnReachedValueZero; // 0x420
	CEntityIOOutput m_OnReachedValueOne; // 0x448
	CEntityIOOutput m_OnReachedValueCustom; // 0x470
	CEntityIOOutput m_OnEngage; // 0x498
	CEntityIOOutput m_OnDisengage; // 0x4c0
};

// Aligment: 3
// Size: 864
class CRagdollManager : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	int8_t m_iCurrentMaxRagdollCount; // 0x350
	int32_t m_iMaxRagdollCount; // 0x354
	bool m_bSaveImportant; // 0x358
};

// Aligment: 21
// Size: 1440
class CRopeKeyframe : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_RopeFlags; // 0x550
	CUtlSymbolLarge m_iNextLinkName; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int16_t m_Slack; // 0x560
	// MNetworkEnable
	// MNetworkEnable
	float m_Width; // 0x564
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.1"
	// MNetworkMaxValue "10"
	float m_TextureScale; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_nSegments; // 0x56c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x56d
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x570
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x578
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Subdiv; // 0x580
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_nChangeCount; // 0x581
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	int16_t m_RopeLength; // 0x582
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_fLockedPoints; // 0x584
	bool m_bCreatedFromMapFile; // 0x585
	// MNetworkEnable
	// MNetworkEnable
	float m_flScrollSpeed; // 0x588
	bool m_bStartPointValid; // 0x58c
	bool m_bEndPointValid; // 0x58d
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x590
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x594
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iStartAttachment; // 0x598
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iEndAttachment; // 0x59a
};

// Aligment: 0
// Size: 1440
class CRopeKeyframeAlias_move_rope : public CRopeKeyframe, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 81
// Size: 2032
class CSceneEntity : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszSceneFile; // 0x358
	CUtlSymbolLarge m_iszResumeSceneFile; // 0x360
	CUtlSymbolLarge m_iszTarget1; // 0x368
	CUtlSymbolLarge m_iszTarget2; // 0x370
	CUtlSymbolLarge m_iszTarget3; // 0x378
	CUtlSymbolLarge m_iszTarget4; // 0x380
	CUtlSymbolLarge m_iszTarget5; // 0x388
	CUtlSymbolLarge m_iszTarget6; // 0x390
	CUtlSymbolLarge m_iszTarget7; // 0x398
	CUtlSymbolLarge m_iszTarget8; // 0x3a0
	CHandle< CBaseEntity > m_hTarget1; // 0x3a8
	CHandle< CBaseEntity > m_hTarget2; // 0x3ac
	CHandle< CBaseEntity > m_hTarget3; // 0x3b0
	CHandle< CBaseEntity > m_hTarget4; // 0x3b4
	CHandle< CBaseEntity > m_hTarget5; // 0x3b8
	CHandle< CBaseEntity > m_hTarget6; // 0x3bc
	CHandle< CBaseEntity > m_hTarget7; // 0x3c0
	CHandle< CBaseEntity > m_hTarget8; // 0x3c4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x3c8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPaused; // 0x3c9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMultiplayer; // 0x3ca
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutogenerated; // 0x3cb
	// MNetworkEnable
	// MNetworkEnable
	float m_flForceClientTime; // 0x3cc
	float m_flCurrentTime; // 0x3d0
	float m_flFrameTime; // 0x3d4
	bool m_bCancelAtNextInterrupt; // 0x3d8
	float m_fPitch; // 0x3dc
	bool m_bAutomated; // 0x3e0
	int32_t m_nAutomatedAction; // 0x3e4
	float m_flAutomationDelay; // 0x3e8
	float m_flAutomationTime; // 0x3ec
	CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x3f0
	bool m_bWaitingForResumeScene; // 0x3f4
	bool m_bPausedViaInput; // 0x3f5
	bool m_bPauseAtNextInterrupt; // 0x3f6
	bool m_bWaitingForActor; // 0x3f7
	bool m_bWaitingForInterrupt; // 0x3f8
	bool m_bInterruptedActorsScenes; // 0x3f9
	bool m_bBreakOnNonIdle; // 0x3fa
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBaseFlex > > m_hActorList; // 0x400
	CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x418
	int32_t m_nSceneFlushCounter; // 0x438
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nSceneStringIndex; // 0x43c
	CEntityIOOutput m_OnStart; // 0x440
	CEntityIOOutput m_OnCompletion; // 0x468
	CEntityIOOutput m_OnCanceled; // 0x490
	CEntityIOOutput m_OnPaused; // 0x4b8
	CEntityIOOutput m_OnResumed; // 0x4e0
	CEntityIOOutput m_OnTrigger1; // 0x508
	CEntityIOOutput m_OnTrigger2; // 0x530
	CEntityIOOutput m_OnTrigger3; // 0x558
	CEntityIOOutput m_OnTrigger4; // 0x580
	CEntityIOOutput m_OnTrigger5; // 0x5a8
	CEntityIOOutput m_OnTrigger6; // 0x5d0
	CEntityIOOutput m_OnTrigger7; // 0x5f8
	CEntityIOOutput m_OnTrigger8; // 0x620
	CEntityIOOutput m_OnTrigger9; // 0x648
	CEntityIOOutput m_OnTrigger10; // 0x670
	CEntityIOOutput m_OnTrigger11; // 0x698
	CEntityIOOutput m_OnTrigger12; // 0x6c0
	CEntityIOOutput m_OnTrigger13; // 0x6e8
	CEntityIOOutput m_OnTrigger14; // 0x710
	CEntityIOOutput m_OnTrigger15; // 0x738
	CEntityIOOutput m_OnTrigger16; // 0x760
	CHandle< CSceneEntity > m_hInterruptScene; // 0x788
	int32_t m_nInterruptCount; // 0x78c
	bool m_bSceneMissing; // 0x790
	bool m_bInterrupted; // 0x791
	bool m_bCompletedEarly; // 0x792
	bool m_bInterruptSceneFinished; // 0x793
	bool m_bRestoring; // 0x794
	bool m_bGenerated; // 0x795
	CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x798
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x7b0
	CUtlSymbolLarge m_iszSoundName; // 0x7c8
	CHandle< CBaseFlex > m_hActor; // 0x7d0
	CHandle< CBaseEntity > m_hActivator; // 0x7d4
	CHandle< CBaseEntity > m_hCamera; // 0x7d8
	int32_t m_BusyActor; // 0x7dc
	int32_t m_iPlayerDeathBehavior; // 0x7e0
	CRecipientFilter* m_pRecipientFilter; // 0x7e8
public:
	static int32_t &Get_s_nSceneFlushCounter() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSceneEntity")->m_static_fiels[0]->m_instance); }
};

// Aligment: 0
// Size: 2032
class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity, CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 6
// Size: 2312
class CInstancedSceneEntity : public CSceneEntity, CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x7f0
	bool m_bHadOwner; // 0x7f4
	float m_flPostSpeakDelay; // 0x7f8
	float m_flPreDelay; // 0x7fc
	char[260] m_szInstanceFilename; // 0x800
	bool m_bIsBackground; // 0x904
};

// Aligment: 3
// Size: 1064
class CSceneListManager : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x350
	CUtlSymbolLarge[16] m_iszScenes; // 0x368
	CHandle< CBaseEntity >[16] m_hScenes; // 0x3e8
};

// Aligment: 5
// Size: 872
class CShadowControl : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_shadowDirection; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	Color m_shadowColor; // 0x35c
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowMaxDist; // 0x360
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableShadows; // 0x364
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableLocalLightShadows; // 0x365
};

// Aligment: 8
// Size: 920
class CSoundOpvarSetEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszStackName; // 0x358
	CUtlSymbolLarge m_iszOperatorName; // 0x360
	CUtlSymbolLarge m_iszOpvarName; // 0x368
	int32_t m_nOpvarType; // 0x370
	int32_t m_nOpvarIndex; // 0x374
	float m_flOpvarValue; // 0x378
	CUtlSymbolLarge m_OpvarValueString; // 0x380
	bool m_bSetOnSpawn; // 0x388
};

// Aligment: 19
// Size: 1040
class CSoundOpvarSetPointEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnEnter; // 0x350
	CEntityIOOutput m_OnExit; // 0x378
	float m_flDistanceMin; // 0x3a0
	float m_flDistanceMax; // 0x3a4
	float m_flValSetOnDisable; // 0x3a8
	bool m_bSetValueOnDisable; // 0x3ac
	bool m_bDisabled; // 0x3ad
	bool m_bAutoDisable; // 0x3ae
	CEntityHandle m_hSource; // 0x3c8
	CUtlSymbolLarge m_iszStackName; // 0x3d8
	CUtlSymbolLarge m_iszOperatorName; // 0x3e0
	CUtlSymbolLarge m_iszOpvarName; // 0x3e8
	CUtlSymbolLarge m_iszSourceEntityName; // 0x3f0
	int32_t m_iOpvarIndex; // 0x3f8
	float m_flDistanceMapMin; // 0x3fc
	float m_flDistanceMapMax; // 0x400
	float m_flOcclusionRadius; // 0x404
	float m_flOcclusionMin; // 0x408
	float m_flOcclusionMax; // 0x40c
};

// Aligment: 9
// Size: 1144
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x410
	Vector m_vDistanceInnerMaxs; // 0x41c
	Vector m_vDistanceOuterMins; // 0x428
	Vector m_vDistanceOuterMaxs; // 0x434
	int32_t m_nAABBDirection; // 0x440
	Vector m_vInnerMins; // 0x444
	Vector m_vInnerMaxs; // 0x450
	Vector m_vOuterMins; // 0x45c
	Vector m_vOuterMaxs; // 0x468
};

// Aligment: 0
// Size: 1144
class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity, CSoundOpvarSetPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 6
// Size: 880
class CAISound : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iSoundType; // 0x350
	int32_t m_iSoundContext; // 0x354
	int32_t m_iVolume; // 0x358
	int32_t m_iSoundIndex; // 0x35c
	float m_flDuration; // 0x360
	CUtlSymbolLarge m_iszProxyEntityName; // 0x368
};

// Aligment: 4
// Size: 16
class CSoundEnvelope
{
public:
	float m_current; // 0x0
	float m_target; // 0x4
	float m_rate; // 0x8
	bool m_forceupdate; // 0xc
};

// Aligment: 2
// Size: 40
class CCopyRecipientFilter : public IRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
};

// Aligment: 15
// Size: 160
class CSoundPatch
{
public:
	CSoundEnvelope m_pitch; // 0x8
	CSoundEnvelope m_volume; // 0x18
	float m_shutdownTime; // 0x30
	float m_flLastTime; // 0x34
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38
	CHandle< CBaseEntity > m_hEnt; // 0x40
	int32_t m_entityChannel; // 0x44
	CEntityIndex m_soundEntityIndex; // 0x48
	Vector m_soundOrigin; // 0x4c
	int32_t m_flags; // 0x58
	int32_t m_baseFlags; // 0x5c
	int32_t m_isPlaying; // 0x60
	CCopyRecipientFilter m_Filter; // 0x68
	float m_flCloseCaptionDuration; // 0x90
	CUtlSymbolLarge m_iszClassName; // 0x98
public:
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
};

// Aligment: 6
// Size: 928
class CSoundEventEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartOnSpawn; // 0x350
	bool m_bToLocalPlayer; // 0x351
	CUtlSymbolLarge m_iszSoundName; // 0x358
	CUtlSymbolLarge m_iszSourceEntityName; // 0x360
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x368
	CEntityHandle m_hSource; // 0x398
};

// Aligment: 0
// Size: 928
class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 952
class CSoundEventAABBEntity : public CSoundEventEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vMins; // 0x3a0
	Vector m_vMaxs; // 0x3ac
};

// Aligment: 2
// Size: 872
class CSoundEventParameter : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszParamName; // 0x358
	float m_flFloatValue; // 0x360
};

// Aligment: 8
// Size: 984
class CEnvSoundscape : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x350
	float m_flRadius; // 0x378
	CUtlSymbolLarge m_soundscapeName; // 0x380
	int32_t m_soundscapeIndex; // 0x388
	int32_t m_soundscapeEntityListId; // 0x38c
	CUtlSymbolLarge[8] m_positionNames; // 0x390
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x3d0
	bool m_bDisabled; // 0x3d4
};

// Aligment: 1
// Size: 992
class CEnvSoundscapeProxy : public CEnvSoundscape, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_MainSoundscapeName; // 0x3d8
};

// Aligment: 0
// Size: 992
class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy, CEnvSoundscape, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 984
class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 984
class CEnvSoundscapeTriggerable : public CEnvSoundscape, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 984
class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable, CEnvSoundscape, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1816
class CTriggerSoundscape : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x6f0
	CUtlSymbolLarge m_SoundscapeName; // 0x6f8
	CUtlVector< CHandle< CBasePlayer > > m_spectators; // 0x700
};

// Aligment: 0
// Size: 1464
class CSpriteAlias_env_glow : public CSprite, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1960
class CPointWorldText : public CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	char[64] m_FontName; // 0x748
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x788
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFullbright; // 0x789
	// MNetworkEnable
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x78c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFontSize; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x794
	// MNetworkEnable
	// MNetworkEnable
	Color m_Color; // 0x798
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x79c
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x7a0
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x7a4
};

// Aligment: 0
// Size: 848
class CNullEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 856
class CBaseDMStart : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_Master; // 0x350
};

// Aligment: 0
// Size: 848
class CInfoLandmark : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1816
class CTriggerRemove : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnRemove; // 0x6f0
};

// Aligment: 14
// Size: 1936
class CTriggerHurt : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flOriginalDamage; // 0x6f0
	float m_flDamage; // 0x6f4
	float m_flDamageCap; // 0x6f8
	float m_flLastDmgTime; // 0x6fc
	float m_flDmgResetTime; // 0x700
	int32_t m_bitsDamageInflict; // 0x704
	int32_t m_damageModel; // 0x708
	bool m_bNoDmgForce; // 0x70c
	Vector m_vDamageForce; // 0x710
	bool m_thinkAlways; // 0x71c
	float m_hurtThinkPeriod; // 0x720
	CEntityIOOutput m_OnHurt; // 0x728
	CEntityIOOutput m_OnHurtPlayer; // 0x750
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x778
};

// Aligment: 1
// Size: 1952
class CScriptTriggerHurt : public CTriggerHurt, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x790
};

// Aligment: 1
// Size: 1816
class CTriggerMultiple : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x6f0
};

// Aligment: 1
// Size: 1832
class CScriptTriggerMultiple : public CTriggerMultiple, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x718
};

// Aligment: 0
// Size: 1816
class CTriggerOnce : public CTriggerMultiple, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1832
class CScriptTriggerOnce : public CTriggerOnce, CTriggerMultiple, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x718
};

// Aligment: 15
// Size: 1976
class CTriggerLook : public CTriggerOnce, CTriggerMultiple, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x718
	float m_flFieldOfView; // 0x71c
	float m_flLookTime; // 0x720
	float m_flLookTimeTotal; // 0x724
	float m_flLookTimeLast; // 0x728
	float m_flTimeoutDuration; // 0x72c
	bool m_bTimeoutFired; // 0x730
	bool m_bIsLooking; // 0x731
	bool m_b2DFOV; // 0x732
	bool m_bUseVelocity; // 0x733
	CHandle< CBaseEntity > m_hActivator; // 0x734
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x738
	CEntityIOOutput m_OnTimeout; // 0x740
	CEntityIOOutput m_OnStartLook; // 0x768
	CEntityIOOutput m_OnEndLook; // 0x790
};

// Aligment: 0
// Size: 1352
class CTriggerVolume : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 6
// Size: 1840
class CChangeLevel : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlString m_sMapName; // 0x6f0
	CUtlString m_sLandmarkName; // 0x6f8
	CEntityIOOutput m_OnChangeLevel; // 0x700
	bool m_bTouched; // 0x728
	bool m_bNoTouch; // 0x729
	bool m_bNewChapter; // 0x72a
};

// Aligment: 5
// Size: 1800
class CTriggerPush : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecPushDir; // 0x6f0
	bool m_bPushDirIsLocal; // 0x6fc
	bool m_bTriggerOnStartTouch; // 0x6fd
	float m_flAlternateTicksFix; // 0x700
	float m_flPushSpeed; // 0x704
};

// Aligment: 1
// Size: 1816
class CScriptTriggerPush : public CTriggerPush, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x708
};

// Aligment: 1
// Size: 1784
class CTriggerTeleport : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x6f0
};

// Aligment: 0
// Size: 848
class CInfoTeleportDestination : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1784
class CTriggerToggleSave : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x6f0
};

// Aligment: 3
// Size: 1792
class CTriggerSave : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x6f0
	float m_fDangerousTimer; // 0x6f4
	int32_t m_minHitPoints; // 0x6f8
};

// Aligment: 0
// Size: 1776
class CTriggerGravity : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 856
class CAI_ChangeTarget : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszNewTarget; // 0x350
};

// Aligment: 5
// Size: 880
class CAI_ChangeHintGroup : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iSearchType; // 0x350
	CUtlSymbolLarge m_strSearchName; // 0x358
	CUtlSymbolLarge m_strNewHintGroup; // 0x360
	float m_flRadius; // 0x368
	bool m_bHintGroupNavLimiting; // 0x36c
};

// Aligment: 5
// Size: 1840
class CTriggerProximity : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x6f0
	CUtlSymbolLarge m_iszMeasureTarget; // 0x6f8
	float m_fRadius; // 0x700
	int32_t m_nTouchers; // 0x704
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x708
};

// Aligment: 0
// Size: 848
class CLogicProximity : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 1872
class CTriggerImpact : public CTriggerMultiple, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flMagnitude; // 0x718
	float m_flNoise; // 0x71c
	float m_flViewkick; // 0x720
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x728
};

// Aligment: 0
// Size: 1776
class CTriggerPlayerMovement : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1776
class CServerRagdollTrigger : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1824
class CTriggerActiveWeaponDetect : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x6f0
	CUtlSymbolLarge m_iszWeaponClassName; // 0x718
};

// Aligment: 11
// Size: 1824
class CPostProcessingVolume : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDuration; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinLogExposure; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinExposure; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxExposure; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureCompensation; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExposureControl; // 0x719
};

// Aligment: 12
// Size: 1864
class CTriggerPhysics : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_gravityScale; // 0x700
	float m_linearLimit; // 0x704
	float m_linearDamping; // 0x708
	float m_angularLimit; // 0x70c
	float m_angularDamping; // 0x710
	float m_linearForce; // 0x714
	float m_flFrequency; // 0x718
	float m_flDampingRatio; // 0x71c
	Vector m_vecLinearForcePointAt; // 0x720
	bool m_bCollapseToForcePoint; // 0x72c
	Vector m_vecLinearForcePointAtWorld; // 0x730
	Vector m_vecLinearForceDirection; // 0x73c
};

// Aligment: 5
// Size: 1400
class CFuncNavBlocker : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_CachedMins; // 0x548
	Vector m_CachedMaxs; // 0x554
	bool[2] m_isBlockingNav; // 0x568
	int32_t m_blockedTeamNumber; // 0x56c
	bool m_bAffectsFlow; // 0x570
};

// Aligment: 1
// Size: 1416
class CScriptNavBlocker : public CFuncNavBlocker, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x578
};

// Aligment: 1
// Size: 1368
class CFuncNavObstruction : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x550
};

// Aligment: 25
// Size: 100
struct dynpitchvol_base_t
{
public:
	int32_t preset; // 0x0
	int32_t pitchrun; // 0x4
	int32_t pitchstart; // 0x8
	int32_t spinup; // 0xc
	int32_t spindown; // 0x10
	int32_t volrun; // 0x14
	int32_t volstart; // 0x18
	int32_t fadein; // 0x1c
	int32_t fadeout; // 0x20
	int32_t lfotype; // 0x24
	int32_t lforate; // 0x28
	int32_t lfomodpitch; // 0x2c
	int32_t lfomodvol; // 0x30
	int32_t cspinup; // 0x34
	int32_t cspincount; // 0x38
	int32_t pitch; // 0x3c
	int32_t spinupsav; // 0x40
	int32_t spindownsav; // 0x44
	int32_t pitchfrac; // 0x48
	int32_t vol; // 0x4c
	int32_t fadeinsav; // 0x50
	int32_t fadeoutsav; // 0x54
	int32_t volfrac; // 0x58
	int32_t lfofrac; // 0x5c
	int32_t lfomult; // 0x60
};

// Aligment: 0
// Size: 100
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
// <no members described>
};

// Aligment: 10
// Size: 1000
class CAmbientGeneric : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_radius; // 0x350
	float m_flMaxRadius; // 0x354
	soundlevel_t m_iSoundLevel; // 0x358
	dynpitchvol_t m_dpv; // 0x35c
	bool m_fActive; // 0x3c0
	bool m_fLooping; // 0x3c1
	CUtlSymbolLarge m_iszSound; // 0x3c8
	CUtlSymbolLarge m_sSourceEntName; // 0x3d0
	CHandle< CBaseEntity > m_hSoundSource; // 0x3d8
	CEntityIndex m_nSoundSourceEntIndex; // 0x3dc
};

// Aligment: 5
// Size: 20
struct Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x0
	Class_T classType; // 0x4
	int32_t faction; // 0x8
	Disposition_t disposition; // 0xc
	int32_t priority; // 0x10
};

// Aligment: 2
// Size: 24
class CBaseCombatCharacter::DamageHistory
{
public:
	int32_t team; // 0x0
	IntervalTimer interval; // 0x8
};

// Aligment: 34
// Size: 2336
class CBaseCombatCharacter : public CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceServerRagdoll; // 0x708
	bool m_bPreventWeaponPickup; // 0x709
	bool m_bApplyStressDamage; // 0x70a
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	float m_flNextAttack; // 0x70c
	Hull_t m_eHull; // 0x710
	uint32_t m_navHullCategory; // 0x714
	float m_flNavHullRadius; // 0x718
	float m_flNavHullHeight; // 0x71c
	int32_t m_bloodColor; // 0x720
	// MNetworkEnable
	float m_flFieldOfView; // 0x724
	Vector m_HackedGunPos; // 0x728
	CUtlSymbolLarge m_RelationshipString; // 0x738
	float m_impactEnergyScale; // 0x740
	int32_t m_LastHitGroup; // 0x744
	float m_flDamageAccumulator; // 0x748
	int32_t m_iDamageCount; // 0x74c
	WeaponProficiency_t m_CurrentWeaponProficiency; // 0x750
	CUtlVector< Relationship_t > m_Relationship; // 0x758
	int32_t m_nFaction; // 0x770
	CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // 0x778
	CHandle< CBaseEntity > m_hLastFogTrigger; // 0x790
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32[32] m_iAmmo; // 0x794
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBaseCombatWeapon > > m_hMyWeapons; // 0x818
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseCombatWeapon > m_hActiveWeapon; // 0x830
	IntervalTimer m_aliveTimer; // 0x838
	uint32_t m_hasBeenInjured; // 0x848
	CBaseCombatCharacter::DamageHistory[4] m_damageHistory; // 0x850
	CAI_MoveMonitor m_NavAreaUpdateMonitor; // 0x8d0
	int32_t m_registeredNavTeam; // 0x8e0
	int32_t m_navMeshID; // 0x8e4
	CountdownTimer m_footstepTimer; // 0x8e8
	int32_t m_spawnID; // 0x8f8
	Vector m_vecSpawnOrigin; // 0x8fc
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CEconWearable > > m_hMyWearables; // 0x908
public:
	static int32_t &Get_m_lastInteraction() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fiels[0]->m_instance); }
	static Relationship_t** &Get_m_DefaultRelationship() { return *reinterpret_cast<Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fiels[1]->m_instance); }
	static Relationship_t** &Get_m_FactionRelationship() { return *reinterpret_cast<Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fiels[2]->m_instance); }
	static CUtlVector< CUtlVector< CHandle< CBaseEntity > > > &Get_m_aFactions() { return *reinterpret_cast<CUtlVector< CUtlVector< CHandle< CBaseEntity > > >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fiels[3]->m_instance); }
	static int32_t &Get_m_nextSpawnID() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fiels[4]->m_instance); }
};

// Aligment: 3
// Size: 24
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0
	CUtlSymbolLarge m_iszValue; // 0x8
	float m_fExpirationTime; // 0x10
};

// Aligment: 0
// Size: 848
class CServerOnlyPointEntity : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 166
// Size: 4976
class CBasePlayer : public CBaseCombatCharacter, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_StuckLast; // 0x920
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CPlayerLocalData m_Local; // 0x928
	// MNetworkEnable
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0xb38
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPostProcessController > m_hPostProcessCtrl; // 0xb90
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0xb94
	CUtlVector< CHandle< CBaseEntity > > m_hTriggerSoundscapeList; // 0xb98
	CPlayerState m_pl; // 0xbb0
	uint64_t m_nButtons; // 0xbf8
	uint64_t m_afButtonPressed; // 0xc00
	uint64_t m_afButtonReleased; // 0xc08
	uint64_t m_afButtonLast; // 0xc10
	uint64_t m_afButtonDisabled; // 0xc18
	uint64_t m_afButtonForced; // 0xc20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_fOnTarget; // 0xc28
	char[32] m_szAnimExtension; // 0xc29
	int32_t m_nUpdateRate; // 0xc4c
	float m_fLerpTime; // 0xc50
	bool m_bLagCompensation; // 0xc54
	bool m_bPredictWeapons; // 0xc55
	int32_t m_Activity; // 0xc58
	Vector m_vecAdditionalPVSOrigin; // 0xc5c
	Vector m_vecCameraPVSOrigin; // 0xc68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hUseEntity; // 0xc74
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hHeldEntity; // 0xc78
	float m_flPreventUseTime; // 0xc7c
	int32_t m_iTrain; // 0xc80
	float m_iRespawnFrames; // 0xc84
	uint32_t m_afPhysicsFlags; // 0xc88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hVehicle; // 0xc8c
	int32_t m_iVehicleAnalogBias; // 0xc90
	bool m_bPauseBonusProgress; // 0xc94
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	int32_t m_iBonusProgress; // 0xc98
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32_t m_iBonusChallenge; // 0xc9c
	int32_t m_lastDamageAmount; // 0xca0
	float m_fTimeLastHurt; // 0xca4
	Vector m_DmgOrigin; // 0xca8
	float m_DmgTake; // 0xcb4
	float m_DmgSave; // 0xcb8
	int32_t m_bitsDamageType; // 0xcbc
	int32_t m_bitsHUDDamage; // 0xcc0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flDeathTime; // 0xcc4
	float m_flDeathAnimTime; // 0xcc8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint8_t m_iObserverMode; // 0xccc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOV; // 0xcd0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iDefaultFOV; // 0xcd4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOVStart; // 0xcd8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVTime; // 0xcdc
	int32_t m_iObserverLastMode; // 0xce0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hObserverTarget; // 0xce4
	bool m_bForcedObserverMode; // 0xce8
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hZoomOwner; // 0xcec
	float m_tbdPrev; // 0xcf0
	int32_t m_idrowndmg; // 0xcf4
	int32_t m_idrownrestored; // 0xcf8
	int32_t m_nPoisonDmg; // 0xcfc
	int32_t m_nPoisonRestored; // 0xd00
	uint8[8] m_rgbTimeBasedDamage; // 0xd04
	int32_t m_vphysicsCollisionState; // 0xd0c
	float m_fNextSuicideTime; // 0xd10
	int32_t m_iSuicideCustomKillFlags; // 0xd14
	float m_fDelay; // 0xd18
	float m_fReplayEnd; // 0xd1c
	CEntityIndex m_iReplayEntity; // 0xd20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< CBaseEntity > m_hTonemapController; // 0xd24
	int32_t m_nHighestCommandNumberReceived; // 0xd58
	IPhysicsPlayerController* m_pPhysicsController; // 0xd60
	Vector m_oldOrigin; // 0xd78
	Vector m_vecSmoothedVelocity; // 0xd84
	bool m_touchedPhysObject; // 0xd90
	bool m_bPhysicsWasFrozen; // 0xd91
	int32_t m_iPlayerSound; // 0xd94
	int32_t m_iTargetVolume; // 0xd98
	int32[5] m_rgItems; // 0xd9c
	IntervalTimer m_lastHeldVoteTimer; // 0xdb0
	float m_flgeigerRange; // 0xdc0
	float m_flgeigerDelay; // 0xdc4
	int32_t m_igeigerRangePrev; // 0xdc8
	bool m_fInitHUD; // 0xdcc
	bool m_fGameHUDInitialized; // 0xdcd
	bool m_fWeapon; // 0xdce
	int32_t m_iUpdateTime; // 0xdd0
	int32_t m_iFrags; // 0xdd4
	int32_t m_iDeaths; // 0xdd8
	float m_flNextDecalTime; // 0xddc
	float m_flNextTauntTime; // 0xde0
	PlayerConnectedState m_iConnected; // 0xde4
	bool m_bIsLowViolence; // 0xde8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_ArmorValue; // 0xdec
	float m_AirFinished; // 0xdf0
	float m_PainFinished; // 0xdf4
	int32_t m_iPlayerLocked; // 0xdf8
	CSimpleSimTimer m_AutoaimTimer; // 0xdfc
	QAngle m_vecAutoAim; // 0xe00
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseViewModel >[2] m_hViewModel; // 0xe0c
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPropHMDAvatar > m_hPropHMDAvatar; // 0xe14
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CPointHMDAnchor > m_hPointHMDAnchor; // 0xe18
	Vector m_vecLastAnchorPosition; // 0xe20
	bool m_bReceivedInitialAnchorPos; // 0xe2c
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_VRControllerType; // 0xe30
	IntervalTimer m_timeSinceCommandSimulated; // 0x1168
	float m_flStepSoundTime; // 0x1178
	bool m_bAllowInstantSpawn; // 0x117c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2048"
	// MNetworkEncodeFlags
	float m_flMaxspeed; // 0x1180
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_ladderSurfaceProps; // 0x1184
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; // 0x1188
	float m_flWaterJumpTime; // 0x1194
	Vector m_vecWaterJumpVel; // 0x1198
	int32_t m_nImpulse; // 0x11a4
	float m_flSwimSoundTime; // 0x11a8
	float m_flFlashTime; // 0x11ac
	int32_t m_nDrownDmgRate; // 0x11b0
	int32_t m_nNumCrouches; // 0x11b4
	bool m_bDuckToggled; // 0x11b8
	float m_flForwardMove; // 0x11bc
	float m_flSideMove; // 0x11c0
	int32_t m_nNumCrateHudHints; // 0x11c4
	Vector m_vForcedOrigin; // 0x11c8
	bool m_bForceOrigin; // 0x11d4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x11d8
	int32_t m_nOldTickBase; // 0x11dc
	bool m_bGamePaused; // 0x11e0
	float m_fLastPlayerTalkTime; // 0x11e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< CBaseCombatWeapon > m_hLastWeapon; // 0x11e8
	float m_flOldPlayerZ; // 0x11ec
	float m_flOldPlayerViewOffsetZ; // 0x11f0
	bool m_bPlayerUnderwater; // 0x11f4
	float m_flLastAttackTime; // 0x11f8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hViewEntity; // 0x11fc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< CBaseEntity > m_hConstraintEntity; // 0x1200
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecConstraintCenter; // 0x1204
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintRadius; // 0x1210
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintWidth; // 0x1214
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintSpeedFactor; // 0x1218
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bConstraintPastRadius; // 0x121c
	char[32] m_szNetname; // 0x121d
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLaggedMovementValue; // 0x1240
	Vector m_vNewVPhysicsPosition; // 0x1244
	Vector m_vNewVPhysicsVelocity; // 0x1250
	Vector m_vecVehicleViewOrigin; // 0x125c
	QAngle m_vecVehicleViewAngles; // 0x1268
	float m_flVehicleViewFOV; // 0x1274
	int32_t m_nVehicleViewSavedFrame; // 0x1278
	Vector m_vecPreviouslyPredictedOrigin; // 0x127c
	int32_t m_nBodyPitchPoseParam; // 0x1288
	// MNetworkEnable
	// MNetworkEnable
	char[18] m_szLastPlaceName; // 0x128c
	char[64] m_szNetworkIDString; // 0x129e
	CPlayerInfo m_PlayerInfo; // 0x12e0
	CUtlStringToken m_surfaceProps; // 0x12f8
	float m_surfaceFriction; // 0x1308
	char m_chTextureType; // 0x130c
	char m_chPreviousTextureType; // 0x130d
	bool m_bSinglePlayerGameEnding; // 0x130e
	CHandle< CBaseEntity > m_hPlayerProxy; // 0x1310
	bool m_bhasHaptics; // 0x1314
	bool m_autoKickDisabled; // 0x1315
	Vector m_movementCollisionNormal; // 0x1318
	Vector m_groundNormal; // 0x1324
	CHandle< CBaseCombatCharacter > m_stuckCharacter; // 0x1330
	float m_lastEntitySteadyState; // 0x1334
	int32_t m_availableEntitySteadyState; // 0x1338
	CBitVec< 64 > m_playerInPVS; // 0x133c
	bool m_hasAnySteadyStateEnts; // 0x1344
	bool m_bSplitScreenPlayer; // 0x1345
	CHandle< CBasePlayer > m_hSplitOwner; // 0x1348
	CUtlVector< CHandle< CBasePlayer > > m_hSplitScreenPlayers; // 0x1350
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nUnHoldableButtons; // 0x1368
public:
	static bool &Get_ms_bUseSessionPersisterPosAng() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayer")->m_static_fiels[0]->m_instance); }
	static Vector &Get_ms_vSessionPersisterPosition() { return *reinterpret_cast<Vector*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayer")->m_static_fiels[1]->m_instance); }
	static QAngle &Get_ms_angSessionPersisterAngles() { return *reinterpret_cast<QAngle*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayer")->m_static_fiels[2]->m_instance); }
};

// Aligment: 9
// Size: 5032
class CBaseMultiplayerPlayer : public CBasePlayer, CBaseCombatCharacter, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iIgnoreGlobalChat; // 0x1378
	float m_flAreaCaptureScoreAccumulator; // 0x137c
	float m_flCapPointScoreRate; // 0x1380
	int32_t m_iCurrentConcept; // 0x1384
	CMultiplayer_Expresser* m_pExpresser; // 0x1388
	float m_flConnectionTime; // 0x1390
	float m_flLastForcedChangeTeamTime; // 0x1394
	int32_t m_iBalanceScore; // 0x1398
	KeyValues* m_pAchievementKV; // 0x13a0
};

// Aligment: 17
// Size: 1168
class CColorCorrection : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInDuration; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x354
	float m_flStartFadeInWeight; // 0x358
	float m_flStartFadeOutWeight; // 0x35c
	float m_flTimeStartFadeIn; // 0x360
	float m_flTimeStartFadeOut; // 0x364
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxWeight; // 0x368
	bool m_bStartDisabled; // 0x36c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x36d
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x36e
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSide; // 0x36f
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExclusive; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	float m_MinFalloff; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	float m_MaxFalloff; // 0x378
	// MNetworkEnable
	// MNetworkEnable
	float m_flCurWeight; // 0x37c
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_netlookupFilename; // 0x380
	CUtlSymbolLarge m_lookupFilename; // 0x488
};

// Aligment: 4
// Size: 872
class CRagdollMagnet : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x350
	float m_radius; // 0x354
	float m_force; // 0x358
	Vector m_axis; // 0x35c
};

// Aligment: 0
// Size: 1352
class CEntityBlocker : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 10
// Size: 1400
class CEntityDissolve : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x54c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInLength; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x554
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutStart; // 0x55c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutLength; // 0x560
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	EntityDisolveType_t m_nDissolveType; // 0x564
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nMagnitude; // 0x574
};

// Aligment: 10
// Size: 896
class CEnvDOFController : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flFocusTargetRange; // 0x350
	CUtlSymbolLarge m_strFocusTargetName; // 0x358
	CHandle< CBaseEntity > m_hFocusTarget; // 0x360
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDOFEnabled; // 0x364
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurDepth; // 0x368
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearFocusDepth; // 0x36c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarFocusDepth; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurDepth; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurRadius; // 0x378
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurRadius; // 0x37c
};

// Aligment: 5
// Size: 944
class CEnvPlayerSurfaceTrigger : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iTargetGameMaterial; // 0x350
	int32_t m_iCurrentGameMaterial; // 0x354
	bool m_bDisabled; // 0x358
	CEntityIOOutput m_OnSurfaceChangedToTarget; // 0x360
	CEntityIOOutput m_OnSurfaceChangedFromTarget; // 0x388
};

// Aligment: 30
// Size: 1712
class CEnvProjectedTexture : public CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetEntity; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x54c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x54d
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x554
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x555
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x556
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x557
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x55c
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x560
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x564
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x56c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x570
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x574
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x578
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x57c
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x580
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x584
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x588
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x58c
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_SpotlightTextureName; // 0x590
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x694
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x698
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x69c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x6a0
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x6a4
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x6a8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x6ac
};

// Aligment: 6
// Size: 920
class CMessage : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x350
	float m_MessageVolume; // 0x358
	int32_t m_MessageAttenuation; // 0x35c
	float m_Radius; // 0x360
	CUtlSymbolLarge m_sNoise; // 0x368
	CEntityIOOutput m_OnShowMessage; // 0x370
};

// Aligment: 17
// Size: 1296
class CEnvMicrophone : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x350
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x354
	int32_t m_nSoundMask; // 0x358
	float m_flSensitivity; // 0x35c
	float m_flSmoothFactor; // 0x360
	float m_flMaxRange; // 0x364
	CUtlSymbolLarge m_iszSpeakerName; // 0x368
	CHandle< CBaseEntity > m_hSpeaker; // 0x370
	bool m_bAvoidFeedback; // 0x374
	int32_t m_iSpeakerDSPPreset; // 0x378
	CUtlSymbolLarge m_iszListenFilter; // 0x380
	CHandle< CBaseFilter > m_hListenFilter; // 0x388
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x390
	CEntityIOOutput m_OnRoutedSound; // 0x3b8
	CEntityIOOutput m_OnHeardSound; // 0x3e0
	char[256] m_szLastSound; // 0x408
	int32_t m_iLastRoutedFrame; // 0x508
};

// Aligment: 4
// Size: 1072
class CFilterMultiple : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	filter_t m_nFilterType; // 0x3a8
	CUtlSymbolLarge[10] m_iFilterName; // 0x3b0
	CHandle< CBaseEntity >[10] m_hFilter; // 0x400
	int32_t m_nFilterCount; // 0x428
};

// Aligment: 1
// Size: 944
class CFilterProximity : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flRadius; // 0x3a8
};

// Aligment: 0
// Size: 936
class CFilterLOS : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 5
// Size: 1400
class CFuncAreaPortalWindow : public CFuncAreaPortalBase, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDist; // 0x55c
	// MNetworkEnable
	// MNetworkEnable
	float m_flTranslucencyLimit; // 0x560
	CUtlSymbolLarge m_iBackgroundBModelName; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iBackgroundModelIndex; // 0x570
};

// Aligment: 13
// Size: 1448
class CFuncRotating : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	QAngle m_vecMoveAng; // 0x548
	float m_flFanFriction; // 0x554
	float m_flAttenuation; // 0x558
	float m_flVolume; // 0x55c
	float m_flTargetSpeed; // 0x560
	float m_flMaxSpeed; // 0x564
	float m_flBlockDamage; // 0x568
	CUtlSymbolLarge m_NoiseRunning; // 0x570
	bool m_bReversed; // 0x578
	QAngle m_angStart; // 0x57c
	bool m_bStopAtStartPos; // 0x588
	Vector m_vecClientOrigin; // 0x58c
	QAngle m_vecClientAngles; // 0x598
};

// Aligment: 0
// Size: 1760
class CInfoData : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1360
class CItemGenericTriggerHelper : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CItemGeneric > m_hParentItem; // 0x548
};

// Aligment: 33
// Size: 2192
class CItemGeneric : public CItem, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bHasTriggerRadius; // 0x720
	bool m_bHasPickupRadius; // 0x721
	float m_flPickupRadiusSqr; // 0x724
	float m_flTriggerRadiusSqr; // 0x728
	float m_flLastPickupCheck; // 0x72c
	bool m_bPlayerCounterListenerAdded; // 0x730
	bool m_bPlayerInTriggerRadius; // 0x731
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x738
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0x740
	bool m_bAutoStartAmbientSound; // 0x748
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0x750
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0x758
	CUtlSymbolLarge m_pPickupSoundEffect; // 0x760
	CUtlSymbolLarge m_pPickupScriptFunction; // 0x768
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0x770
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x778
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x780
	CUtlSymbolLarge m_pPickupFilterName; // 0x788
	CHandle< CBaseFilter > m_hPickupFilter; // 0x790
	CEntityIOOutput m_OnPickup; // 0x798
	CEntityIOOutput m_OnTimeout; // 0x7c0
	CEntityIOOutput m_OnTriggerStartTouch; // 0x7e8
	CEntityIOOutput m_OnTriggerTouch; // 0x810
	CEntityIOOutput m_OnTriggerEndTouch; // 0x838
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0x860
	float m_flPickupRadius; // 0x868
	float m_flTriggerRadius; // 0x86c
	bool m_bPhysStartAsleep; // 0x870
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0x878
	bool m_bGlowWhenInTrigger; // 0x880
	Color m_glowColor; // 0x881
	bool m_bUseable; // 0x885
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0x888
};

// Aligment: 10
// Size: 64
struct locksound_t
{
public:
	CUtlSymbolLarge sLockedSound; // 0x8
	CUtlSymbolLarge sLockedSentence; // 0x10
	CUtlSymbolLarge sUnlockedSound; // 0x18
	CUtlSymbolLarge sUnlockedSentence; // 0x20
	int32_t iLockedSentence; // 0x28
	int32_t iUnlockedSentence; // 0x2c
	float flwaitSound; // 0x30
	float flwaitSentence; // 0x34
	uint8_t bEOFLocked; // 0x38
	uint8_t bEOFUnlocked; // 0x39
};

// Aligment: 4
// Size: 960
class CLogicBranch : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bInValue; // 0x350
	CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x358
	CEntityIOOutput m_OnTrue; // 0x370
	CEntityIOOutput m_OnFalse; // 0x398
};

// Aligment: 1
// Size: 1360
class CFuncOccluder : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartDisabled; // 0x548
};

// Aligment: 4
// Size: 880
class CParticleLight : public CServerOnlyPointEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flIntensity; // 0x350
	Vector m_vColor; // 0x354
	CUtlSymbolLarge m_PSName; // 0x360
	bool m_bDirectional; // 0x368
};

// Aligment: 3
// Size: 20
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0
	float m_fPrevSampleTime; // 0xc
	float m_fIdealSampleRate; // 0x10
};

// Aligment: 3
// Size: 32
class SimpleConstraintSoundProfile
{
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8
	float32[2] m_keyPoints; // 0xc
	float32[3] m_reversalSoundThresholds; // 0x14
};

// Aligment: 8
// Size: 136
class ConstraintSoundInfo
{
public:
	VelocitySampler m_vSampler; // 0x8
	SimpleConstraintSoundProfile m_soundProfile; // 0x20
	Vector m_forwardAxis; // 0x40
	CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50
	CUtlSymbolLarge m_iszTravelSoundBack; // 0x58
	CUtlSymbolLarge[3] m_iszReversalSounds; // 0x68
	bool m_bPlayTravelSound; // 0x80
	bool m_bPlayReversalSound; // 0x81
};

// Aligment: 7
// Size: 920
class CPhysExplosion : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x350
	float m_damage; // 0x354
	float m_radius; // 0x358
	CUtlSymbolLarge m_targetEntityName; // 0x360
	float m_flInnerRadius; // 0x368
	float m_flPushScale; // 0x36c
	CEntityIOOutput m_OnPushedPlayer; // 0x370
};

// Aligment: 3
// Size: 864
class CPhysImpact : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_damage; // 0x350
	float m_distance; // 0x354
	CUtlSymbolLarge m_directionEntityName; // 0x358
};

// Aligment: 1
// Size: 16
struct magnetted_objects_t
{
public:
	CHandle< CBaseEntity > hEntity; // 0x8
};

// Aligment: 12
// Size: 1792
class CPhysMagnet : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x670
	CEntityIOOutput m_OnMagnetDetach; // 0x698
	float m_massScale; // 0x6c0
	float m_forceLimit; // 0x6c4
	float m_torqueLimit; // 0x6c8
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x6d0
	bool m_bActive; // 0x6e8
	bool m_bHasHitSomething; // 0x6e9
	float m_flTotalMass; // 0x6ec
	float m_flRadius; // 0x6f0
	float m_flNextSuckTime; // 0x6f4
	int32_t m_iMaxObjectsAttached; // 0x6f8
};

// Aligment: 1
// Size: 856
class CInfoPlayerStart : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x350
};

// Aligment: 0
// Size: 8
class IBotController
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IPlayerInfo
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CPlayerInfo : public IBotController
{
public:
	CBasePlayer* m_pParent; // 0x10
};

// Aligment: 8
// Size: 1608
class CPlayerResource : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32[34] m_iPing; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	int32[34] m_iScore; // 0x3d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int32[34] m_iDeaths; // 0x460
	// MNetworkEnable
	// MNetworkEnable
	bool[34] m_bConnected; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32[34] m_iTeam; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	bool[34] m_bAlive; // 0x594
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32[34] m_iHealth; // 0x5b8
	int32_t m_nUpdateCounter; // 0x640
};

// Aligment: 27
// Size: 528
class CPlayerLocalData
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
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x5c
	Vector m_vecOverViewpoint; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0x6d
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0x6e
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x70
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x74
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	float m_flFallVelocity; // 0x7c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x94
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xa0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xa1
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xa2
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	float m_flStepSize; // 0xa4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xa8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xa9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xaa
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	audioparams_t m_audio; // 0x138
	fogparams_t m_fog; // 0x1b0
};

// Aligment: 3
// Size: 872
class CPointPrefab : public CServerOnlyPointEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x350
	CUtlSymbolLarge m_forceWorldGroupID; // 0x358
	bool m_fixupNames; // 0x360
};

// Aligment: 12
// Size: 992
class CPointTemplate : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x350
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x358
	CUtlSymbolLarge m_iszEntityFilterName; // 0x360
	float m_flTimeoutInterval; // 0x368
	bool m_bAsynchronouslySpawnEntities; // 0x36c
	CEntityIOOutput m_pOutputOnSpawned; // 0x370
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x398
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x39c
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x3a0
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x3b8
	HSCRIPT m_ScriptSpawnCallback; // 0x3d0
	HSCRIPT m_ScriptCallbackScope; // 0x3d8
};

// Aligment: 10
// Size: 888
class CPostProcessController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastStrength; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastEdgeStrength; // 0x354
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteStart; // 0x358
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteEnd; // 0x35c
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteBlurStrength; // 0x360
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeToBlackStrength; // 0x364
	// MNetworkEnable
	// MNetworkEnable
	float m_fGrainStrength; // 0x368
	// MNetworkEnable
	// MNetworkEnable
	float m_fTopVignetteStrength; // 0x36c
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeTime; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x374
};

// Aligment: 4
// Size: 1000
class CSkyCamera : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x3d8
	bool m_bUseAngles; // 0x3dc
	CSkyCamera* m_pNext; // 0x3e0
};

// Aligment: 2
// Size: 856
class CSkyboxReference : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlStringToken m_worldGroupId; // 0x350
	CHandle< CSkyCamera > m_hSkyCamera; // 0x354
};

// Aligment: 12
// Size: 52
class CSound
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x0
	CHandle< CBaseEntity > m_hTarget; // 0x4
	int32_t m_iVolume; // 0x8
	float m_flOcclusionScale; // 0xc
	int32_t m_iType; // 0x10
	int32_t m_iNextAudible; // 0x14
	float m_flExpireTime; // 0x18
	int16_t m_iNext; // 0x1c
	bool m_bNoExpirationTime; // 0x1e
	int32_t m_ownerChannelIndex; // 0x20
	Vector m_vecOrigin; // 0x24
	bool m_bHasOwner; // 0x30
};

// Aligment: 4
// Size: 7520
class CSoundEnt : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iFreeSound; // 0x350
	int32_t m_iActiveSound; // 0x354
	int32_t m_cLastActiveSounds; // 0x358
	CSound[128] m_SoundPool; // 0x35c
};

// Aligment: 4
// Size: 1384
class CSpotlightEnd : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightScale; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	float m_Radius; // 0x54c
	Vector m_vSpotlightDir; // 0x550
	Vector m_vSpotlightOrg; // 0x55c
};

// Aligment: 7
// Size: 1048
class CTeam : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< CTeamSpawnPoint* > m_aSpawnPoints; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBasePlayer > > m_aPlayers; // 0x368
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iScore; // 0x380
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iRoundsWon; // 0x384
	// MNetworkEnable
	// MNetworkEnable
	char[129] m_szTeamname; // 0x388
	int32_t m_iDeaths; // 0x40c
	int32_t m_iLastSpawn; // 0x410
};

// Aligment: 15
// Size: 2648
class CTriggerSndSosOpvar : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x6f0
	Vector m_flPosition; // 0x708
	float m_flCenterSize; // 0x714
	float m_flMinVal; // 0x718
	float m_flMaxVal; // 0x71c
	float m_flWait; // 0x720
	CUtlSymbolLarge m_opvarName; // 0x728
	CUtlSymbolLarge m_stackName; // 0x730
	CUtlSymbolLarge m_operatorName; // 0x738
	bool m_bVolIs2D; // 0x740
	char[256] m_opvarNameChar; // 0x741
	char[256] m_stackNameChar; // 0x841
	char[256] m_operatorNameChar; // 0x941
	Vector m_VecNormPos; // 0xa44
	float m_flNormCenterSize; // 0xa50
};

// Aligment: 0
// Size: 1936
class CTriggerHurtGhost : public CTriggerHurt, CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1784
class CTriggerCallback : public CBaseTrigger, CBaseToggle, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 22
// Size: 992
class CTriggerCamera : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x350
	CHandle< CBaseEntity > m_hTarget; // 0x354
	CBaseEntity* m_pPath; // 0x358
	CUtlSymbolLarge m_sPath; // 0x360
	float m_flWait; // 0x368
	float m_flReturnTime; // 0x36c
	float m_flStopTime; // 0x370
	float m_moveDistance; // 0x374
	float m_targetSpeed; // 0x378
	float m_initialSpeed; // 0x37c
	float m_acceleration; // 0x380
	float m_deceleration; // 0x384
	int32_t m_state; // 0x388
	Vector m_vecMoveDir; // 0x38c
	float m_fov; // 0x398
	float m_fovSpeed; // 0x39c
	CUtlSymbolLarge m_iszTargetAttachment; // 0x3a0
	int32_t m_iAttachmentIndex; // 0x3a8
	bool m_bSnapToGoal; // 0x3ac
	int32_t m_nPlayerButtons; // 0x3b0
	DamageOptions_t m_nOldTakeDamage; // 0x3b4
	CEntityIOOutput m_OnEndFollow; // 0x3b8
};

// Aligment: 0
// Size: 1352
class CFuncNavConnectionBlocker : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0
	float m_flClusterArea; // 0x4
};

// Aligment: 0
// Size: 128
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 0
// Size: 232
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 0
// Size: 168
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 2
// Size: 200
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector, CNavVolume
{
public:
	Vector m_vStartPos; // 0xb0
	float m_flSearchDist; // 0xbc
};

// Aligment: 5
// Size: 24
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0
	float forceLimit; // 0x4
	float torqueLimit; // 0x8
	float32[2] bodyMassScale; // 0xc
	bool isActive; // 0x14
};

// Aligment: 4
// Size: 16
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0
	float flMaxRotation; // 0x4
	float flMotorTargetAngSpeed; // 0x8
	float flMotorMaxTorque; // 0xc
};

// Aligment: 4
// Size: 64
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0
	Vector worldAxisDirection; // 0xc
	constraint_axislimit_t hingeAxis; // 0x18
	constraint_breakableparams_t constraint; // 0x28
};

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 0
// Size: 8
class IPhysicsPlayerController
{
public:
// <no members described>
};

// Aligment: 24
// Size: 176
struct HandInfo_t
{
public:
	// MNetworkEnable
	Vector m_vPosition; // 0xc
	// MNetworkEnable
	QAngle m_Angles; // 0x18
	// MNetworkEnable
	Vector m_vVelocity; // 0x24
	// MNetworkEnable
	float m_flSampleTime; // 0x30
	// MNetworkEnable
	Vector m_vFilteredPosition; // 0x34
	// MNetworkEnable
	QAngle m_FilteredAngles; // 0x40
	// MNetworkEnable
	Vector m_vFilteredVelocity; // 0x4c
	// MNetworkEnable
	Vector m_FilteredAngularVel; // 0x58
	// MNetworkEnable
	Vector m_vFilteredThrowVel; // 0x64
	// MNetworkEnable
	float m_flTriggerAnalogValue; // 0x70
	// MNetworkEnable
	float m_flGripAnalogValue; // 0x74
	// MNetworkEnable
	float m_flFinger0; // 0x78
	// MNetworkEnable
	float m_flFinger1; // 0x7c
	// MNetworkEnable
	float m_flFinger2; // 0x80
	// MNetworkEnable
	float m_flFinger3; // 0x84
	// MNetworkEnable
	float m_flFinger4; // 0x88
	// MNetworkEnable
	float m_flFingerSplay0; // 0x8c
	// MNetworkEnable
	float m_flFingerSplay1; // 0x90
	// MNetworkEnable
	float m_flFingerSplay2; // 0x94
	// MNetworkEnable
	float m_flFingerSplay3; // 0x98
	// MNetworkEnable
	float m_flTrackpadAnalogValueX; // 0x9c
	// MNetworkEnable
	float m_flTrackpadAnalogValueY; // 0xa0
	// MNetworkEnable
	float m_flJoystickAnalogValueX; // 0xa4
	// MNetworkEnable
	float m_flJoystickAnalogValueY; // 0xa8
};

// Aligment: 8
// Size: 56
class CPlayerState
{
public:
	bool deadflag; // 0x8
	bool hltv; // 0x9
	QAngle v_angle; // 0xc
	CUtlSymbolLarge netname; // 0x18
	int32_t fixangle; // 0x20
	QAngle anglechange; // 0x24
	int32_t frags; // 0x30
	int32_t deaths; // 0x34
};

// Aligment: 48
// Size: 2008
class CBaseCombatWeapon : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseCombatCharacter > m_hOwner; // 0x678
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x67c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttack; // 0x680
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttack; // 0x684
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_nQueuedAttack; // 0x688
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flTimeAttackQueued; // 0x68c
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iViewModelIndex; // 0x690
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iWorldModelIndex; // 0x698
	// MNetworkEnable
	// MNetworkEnable
	WeaponState_t m_iState; // 0x6a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iPrimaryAmmoType; // 0x6a4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iSecondaryAmmoType; // 0x6a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "64"
	int32_t m_iClip1; // 0x6ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x6b0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	bool m_bOnlyPump; // 0x6b4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "64"
	float m_flTimeWeaponIdle; // 0x6b8
	float m_flNextEmptySoundTime; // 0x6bc
	float m_fMinRange1; // 0x6c0
	float m_fMinRange2; // 0x6c4
	float m_fMaxRange1; // 0x6c8
	float m_fMaxRange2; // 0x6cc
	float m_fFireDuration; // 0x6d0
	float m_fMinAdvanceToRange1; // 0x6d4
	int32_t m_Activity; // 0x6d8
	int32_t m_iPrimaryAmmoCount; // 0x6dc
	int32_t m_iSecondaryAmmoCount; // 0x6e0
	CUtlSymbolLarge m_iszName; // 0x6e8
	bool m_bRemoveable; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInReload; // 0x6f1
	bool m_bFireOnEmpty; // 0x6f2
	bool m_bFiresUnderwater; // 0x6f3
	bool m_bAltFiresUnderwater; // 0x6f4
	bool m_bReloadsSingly; // 0x6f5
	HSequence m_hIdealSequence; // 0x6f8
	int32_t m_IdealActivity; // 0x6fc
	int32_t m_iSubType; // 0x700
	float m_flUnlockTime; // 0x704
	CHandle< CBaseEntity > m_hLocker; // 0x708
	int32_t m_nTracerAttachmentIndex; // 0x70c
	int32_t m_iAltFireHudHintCount; // 0x720
	int32_t m_iReloadHudHintCount; // 0x724
	bool m_bAltFireHudHintDisplayed; // 0x728
	bool m_bReloadHudHintDisplayed; // 0x729
	float m_flHudHintPollTime; // 0x72c
	float m_flHudHintMinDisplayTime; // 0x730
	CEntityIOOutput m_OnPlayerUse; // 0x738
	CEntityIOOutput m_OnPlayerPickup; // 0x760
	CEntityIOOutput m_OnNPCPickup; // 0x788
	CEntityIOOutput m_OnCacheInteraction; // 0x7b0
};

// Aligment: 14
// Size: 1760
class CBaseViewModel : public CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecLastFacing; // 0x678
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nViewModelIndex; // 0x684
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint32_t m_nAnimationParity; // 0x688
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	HSequence m_hLayerSequence; // 0x68c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint32_t m_nLayer; // 0x690
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x694
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponChanged"
	CHandle< CBaseCombatWeapon > m_hWeapon; // 0x698
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwner; // 0x69c
	int32_t m_Activity; // 0x6a0
	CUtlSymbolLarge m_sVMName; // 0x6a8
	CUtlSymbolLarge m_sAnimationPrefix; // 0x6b0
	HSequence m_hOldLayerSequence; // 0x6b8
	int32_t m_oldLayer; // 0x6bc
	float m_oldLayerStartTime; // 0x6c0
};

// Aligment: 7
// Size: 40
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
	uint16_t m_nHierarchyId; // 0x24
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x26
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x27
};

// Aligment: 17
// Size: 168
class CCollisionProperty
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x52
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x53
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x55
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	uint8_t m_CollisionGroup; // 0x56
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x57
	float m_flRadius; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x68
	Vector m_vecSurroundingMaxs; // 0x74
	Vector m_vecSurroundingMins; // 0x80
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x8c
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0x98
	// MNetworkEnable
	// MNetworkEnable
	float m_flCapsuleRadius; // 0xa4
};

// Aligment: 0
// Size: 8
class IDamageHandler
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
class CDamageComponent : public CEntityComponent
{
public:
// <no members described>
};

// Aligment: 19
// Size: 112
class CEffectData
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vOrigin; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vStart; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vNormal; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vAngles; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	float m_flScale; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flMagnitude; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flRadius; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x5e
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nColor; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_fFlags; // 0x61
	// MNetworkEnable
	// MNetworkEnable
	int8_t m_nAttachmentIndex; // 0x62
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x68
};

// Aligment: 2
// Size: 856
class CEnvDetailController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeEndDist; // 0x354
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 31
// Size: 640
class CEnvWindShared
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
	CEntityIOOutput m_OnGustStart; // 0x70
	CEntityIOOutput m_OnGustEnd; // 0x98
	float m_flVariationTime; // 0xc0
	float m_flSwayTime; // 0xc4
	float m_flSimTime; // 0xc8
	float m_flSwitchTime; // 0xcc
	float m_flAveWindSpeed; // 0xd0
	bool m_bGusting; // 0xd4
	float m_flWindAngleVariation; // 0xd8
	float m_flWindSpeedVariation; // 0xdc
	CEntityIndex m_iEntIndex; // 0xe0
};

// Aligment: 0
// Size: 848
class CGameRulesProxy : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 144
class CGameRules
{
public:
	char[128] m_szQuestName; // 0x8
	int32_t m_nQuestPhase; // 0x88
};

// Aligment: 8
// Size: 72
class CGlowProperty
{
public:
	Vector m_fGlowColor; // 0x8
	int32_t m_iGlowTeam; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlashing; // 0x40
	bool m_bGlowing; // 0x41
};

// Aligment: 4
// Size: 24
class CHealthComponent : public CEntityComponent
{
public:
	LifeState_t m_lifeState; // 0x8
	int32_t m_iMax; // 0xc
	int32_t m_iHealth; // 0x10
	float m_flDamageAccumulator; // 0x14
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHealthComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHealthComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 3
// Size: 48
class CHintMessage
{
public:
	char* m_hintString; // 0x8
	CUtlVector< char* > m_args; // 0x10
	float m_duration; // 0x28
};

// Aligment: 3
// Size: 48
class CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x8
	CUtlVector< CHintMessage* > m_messages; // 0x10
	CBasePlayer* m_pPlayer; // 0x28
};

// Aligment: 1
// Size: 200
class CMultiplayRules : public CGameRules
{
public:
	float m_flIntermissionEndTime; // 0xa8
public:
	static int32_t &Get_m_nMapCycleTimeStamp() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_m_nMapCycleindex() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[1]->m_instance); }
};

// Aligment: 22
// Size: 96
struct fogparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	Color colorPrimary; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	Color colorSecondary; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float start; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	float end; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float maxdensity; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	float exponent; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	float HDRColorScale; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float lerptime; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	bool enable; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	bool blend; // 0x59
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x5a
	bool m_bPadding; // 0x5b
};

// Aligment: 14
// Size: 64
struct fogplayerparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< CFogController > m_hCtrl; // 0x8
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
// Size: 136
struct sky3dparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int16_t scale; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t fog; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nWorldGroupID; // 0x80
};

// Aligment: 4
// Size: 120
struct audioparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector[8] localSound; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	int32_t soundscapeIndex; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t localBits; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70
};

// Aligment: 10
// Size: 48
struct TonemapParameters_t
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x8
	// MNetworkEnable
	float m_flAutoExposureMax; // 0xc
	// MNetworkEnable
	float m_flExposureCompensationScalar; // 0x10
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x14
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x18
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x1c
	// MNetworkEnable
	float m_flBloomScale; // 0x20
	// MNetworkEnable
	float m_flBloomStartValue; // 0x24
	// MNetworkEnable
	float m_flRate; // 0x28
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x2c
};

// Aligment: 14
// Size: 928
class CPoseController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoseValueParity; // 0x350
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	float m_fPoseValue; // 0x354
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fInterpolationDuration; // 0x358
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInterpolationWrap; // 0x35c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fCycleFrequency; // 0x360
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	PoseController_FModType_t m_nFModType; // 0x364
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1"
	// MNetworkMaxValue "1"
	float m_fFModTimeOffset; // 0x368
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10"
	// MNetworkMaxValue "10"
	float m_fFModRate; // 0x36c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "10"
	float m_fFModAmplitude; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity >[4] m_hProps; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8[4] m_chPoseIndex; // 0x384
	bool m_bDisablePropLookup; // 0x388
	CUtlSymbolLarge m_iszPropName; // 0x390
	CUtlSymbolLarge m_iszPoseParameterName; // 0x398
};

// Aligment: 0
// Size: 8
class IRagdoll
{
public:
// <no members described>
};

// Aligment: 9
// Size: 128
class CRagdoll : public IRagdoll
{
public:
	ragdoll_t m_ragdoll; // 0x8
	Vector m_mins; // 0x40
	Vector m_maxs; // 0x4c
	Vector m_origin; // 0x58
	float m_lastUpdate; // 0x64
	bool m_allAsleep; // 0x68
	Vector m_vecLastOrigin; // 0x6c
	float m_flLastOriginChangeTime; // 0x78
	float m_flAwakeTime; // 0x7c
public:
	static uint32_t &Get_s_globalCount() { return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRagdoll")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 40
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0
	int32_t parentIndex; // 0x20
	float m_flRadius; // 0x24
};

// Aligment: 4
// Size: 56
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0
	CUtlVector< int32 > boneIndex; // 0x18
	bool allowStretch; // 0x30
	bool unused; // 0x31
};

// Aligment: 2
// Size: 4
struct cache_ragdoll_t
{
public:
	int16_t solidCount; // 0x0
	int16_t constraintCount; // 0x2
};

// Aligment: 16
// Size: 96
class CSceneEventInfo
{
public:
	bool m_bStarted; // 0x1c
	int32_t m_iLayer; // 0x20
	int32_t m_iPriority; // 0x24
	HSequence m_hSequence; // 0x28
	bool m_bIsGesture; // 0x2c
	float m_flWeight; // 0x30
	CHandle< CBaseEntity > m_hTarget; // 0x34
	bool m_bIsMoving; // 0x38
	bool m_bHasArrived; // 0x39
	float m_flInitialYaw; // 0x3c
	float m_flTargetYaw; // 0x40
	float m_flFacingYaw; // 0x44
	int32_t m_nType; // 0x48
	float m_flNext; // 0x4c
	bool m_bClientSide; // 0x50
	bool m_bShouldRemove; // 0x51
};

// Aligment: 4
// Size: 40
class CSequenceTransitioner
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
// Size: 472
class CSequenceTransitioner2
{
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8
	float m_flCurrentPlaybackRate; // 0x48
	float m_flCurrentAnimTime; // 0x4c
	TransitioningLayer_t[4] m_transitioningLayers; // 0x50
	CBaseAnimatingController* m_pOwner; // 0x1d0
};

// Aligment: 4
// Size: 32
struct thinkfunc_t
{
public:
	HSCRIPT m_hFn; // 0x8
	CUtlStringToken m_nContext; // 0x10
	int32_t m_nNextThinkTick; // 0x14
	int32_t m_nLastThinkTick; // 0x18
};

// Aligment: 10
// Size: 36
struct hudtextparms_t
{
public:
	Color color1; // 0x0
	Color color2; // 0x4
	uint8_t effect; // 0x8
	uint8_t channel; // 0x9
	float x; // 0xc
	float y; // 0x10
	float fadeinTime; // 0x14
	float fadeoutTime; // 0x18
	float holdTime; // 0x1c
	float fxTime; // 0x20
};

// Aligment: 1
// Size: 4
class CSimpleSimTimer
{
public:
	float m_next; // 0x0
};

// Aligment: 1
// Size: 8
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4
};

// Aligment: 2
// Size: 12
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4
	float m_maxInterval; // 0x8
};

// Aligment: 1
// Size: 16
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0xc
};

// Aligment: 1
// Size: 24
class CStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_interval; // 0x10
};

// Aligment: 2
// Size: 24
class CRandStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_minInterval; // 0x10
	float m_maxInterval; // 0x14
};

// Aligment: 0
// Size: 144
class CSingleplayRules : public CGameRules
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1464
class CSpriteOriented : public CSprite, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 22
// Size: 136
class CTakeDamageInfo
{
public:
	Vector m_vecDamageForce; // 0x8
	Vector m_vecDamagePosition; // 0x14
	Vector m_vecReportedPosition; // 0x20
	Vector m_vecDamageDirection; // 0x2c
	CHandle< CBaseEntity > m_hInflictor; // 0x38
	CHandle< CBaseEntity > m_hAttacker; // 0x3c
	CHandle< CBaseEntity > m_hWeapon; // 0x40
	float m_flDamage; // 0x44
	float m_flMaxDamage; // 0x48
	float m_flBaseDamage; // 0x4c
	int32_t m_bitsDamageType; // 0x50
	int32_t m_iDamageCustom; // 0x54
	int32_t m_iAmmoType; // 0x58
	float m_flRadius; // 0x5c
	bool m_bCanHeadshot; // 0x68
	float m_flOriginalDamage; // 0x6c
	int32_t m_nDamageTaken; // 0x70
	int16_t m_iRecord; // 0x74
	float m_flStabilityDamage; // 0x78
	bool m_bAllowFriendlyFire; // 0x7c
	bool m_bCanBeBlocked; // 0x7d
	HSCRIPT m_hScriptInstance; // 0x80
};

// Aligment: 14
// Size: 1784
class CBaseClientUIEntity : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x560
	CEntityIOOutput m_CustomOutput0; // 0x568
	CEntityIOOutput m_CustomOutput1; // 0x590
	CEntityIOOutput m_CustomOutput2; // 0x5b8
	CEntityIOOutput m_CustomOutput3; // 0x5e0
	CEntityIOOutput m_CustomOutput4; // 0x608
	CEntityIOOutput m_CustomOutput5; // 0x630
	CEntityIOOutput m_CustomOutput6; // 0x658
	CEntityIOOutput m_CustomOutput7; // 0x680
	CEntityIOOutput m_CustomOutput8; // 0x6a8
	CEntityIOOutput m_CustomOutput9; // 0x6d0
};

// Aligment: 20
// Size: 1864
class CPointClientUIWorldPanel : public CBaseClientUIEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x6f9
	// MNetworkEnable
	// MNetworkEnable
	float m_flWidth; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flHeight; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_flDPI; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	float m_flInteractDistance; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x71c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_vecCSSClasses; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOpaque; // 0x740
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoDepth; // 0x741
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderBackface; // 0x742
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x743
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x744
	// MNetworkEnable
	// MNetworkEnable
	bool m_bGrabbable; // 0x745
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x746
};

// Aligment: 1
// Size: 2376
class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel, CBaseClientUIEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x748
};

// Aligment: 2
// Size: 1792
class CPointClientUIDialog : public CBaseClientUIEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< CBaseEntity > m_hActivator; // 0x6f8
	bool m_bStartEnabled; // 0x6fc
};

// Aligment: 2
// Size: 88
class CAttributeList
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	CUtlVector< CEconItemAttribute > m_Attributes; // 0x8
	CAttributeManager* m_pManager; // 0x50
};

// Aligment: 2
// Size: 24
class CEconItemAttribute
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

// Aligment: 0
// Size: 8
class IEconItemInterface
{
public:
// <no members described>
};

// Aligment: 17
// Size: 216
class CEconItemView : public IEconItemInterface
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

// Aligment: 3
// Size: 24
struct CAttributeManager::cached_attribute_float_t
{
public:
	float flIn; // 0x0
	CUtlSymbolLarge iAttribHook; // 0x8
	float flOut; // 0x10
};

// Aligment: 7
// Size: 104
class CAttributeManager
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_Providers; // 0x8
	CUtlVector< CHandle< CBaseEntity > > m_Receivers; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOuter; // 0x3c
	bool m_bPreventLoopback; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x44
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x48
};

// Aligment: 1
// Size: 320
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CEconItemView m_Item; // 0x68
};

// Aligment: 0
// Size: 8
class IHasAttributes
{
public:
// <no members described>
};

// Aligment: 3
// Size: 12
struct CEconEntity::AttachedParticleInfo_t
{
public:
	int32_t m_nAttachedParticleIndex; // 0x0
	CUtlStringToken m_customType; // 0x4
	bool m_bShouldDestroyImmediately; // 0x8
};

// Aligment: 3
// Size: 2136
class CEconEntity : public CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x710
	CHandle< CBaseEntity > m_hOldProvidee; // 0x850
	int32_t m_iOldOwnerClass; // 0x854
};

// Aligment: 0
// Size: 2136
class CBaseAttributableItem : public CEconEntity, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2136
class CEconWearable : public CEconEntity, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2136
class CTFWearableItem : public CEconWearable, CEconEntity, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 28
// Size: 192
class CBaseAchievement
{
public:
	char* m_pszName; // 0x18
	int32_t m_iAchievementID; // 0x20
	int32_t m_iFlags; // 0x24
	int32_t m_iGoal; // 0x28
	int32_t m_iProgressMsgIncrement; // 0x2c
	int32_t m_iProgressMsgMinimum; // 0x30
	int32_t m_iPointValue; // 0x34
	bool m_bHideUntilAchieved; // 0x38
	bool m_bStoreProgressInSteam; // 0x39
	char* m_pInflictorClassNameFilter; // 0x40
	char* m_pInflictorEntityNameFilter; // 0x48
	char* m_pVictimClassNameFilter; // 0x50
	char* m_pAttackerClassNameFilter; // 0x58
	char* m_pMapNameFilter; // 0x60
	char* m_pGameDirFilter; // 0x68
	char** m_pszComponentNames; // 0x70
	char** m_pszComponentDisplayNames; // 0x78
	int32_t m_iNumComponents; // 0x80
	char* m_pszComponentPrefix; // 0x88
	int32_t m_iComponentPrefixLen; // 0x90
	bool m_bAchieved; // 0x94
	int32_t m_iCount; // 0x98
	int32_t m_iProgressShown; // 0x9c
	uint64_t m_iComponentBits; // 0xa0
	int32_t m_nUserSlot; // 0xb0
	int32_t m_iDisplayOrder; // 0xb4
	bool m_bShowOnHUD; // 0xb8
	int32_t m_iAssetAwardID; // 0xbc
};

// Aligment: 2
// Size: 200
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0
	bool m_bFailed; // 0xc1
};

// Aligment: 1
// Size: 10064
class CFlexExpresserShim : public CFlexCycler, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CAI_Expresser* m_pExpresser; // 0x2748
};

// Aligment: 1
// Size: 10080
class CFlexExpresser : public CFlexExpresserShim, CFlexCycler, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flThenAnyMaxDist; // 0x2758
};

// Aligment: 5
// Size: 1392
class CFogVolume : public CServerOnlyModelEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x548
	CUtlSymbolLarge m_postProcessName; // 0x550
	CUtlSymbolLarge m_colorCorrectionName; // 0x558
	bool m_bDisabled; // 0x56c
	bool m_bInFogVolumesList; // 0x56d
};

// Aligment: 10
// Size: 1656
class CEnvDeferredLight : public CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	Color m_LightColor; // 0x54c
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightSize; // 0x554
	// MNetworkEnable
	// MNetworkEnable
	float m_flSpotFoV; // 0x558
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_vLightDirection; // 0x55c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartFalloff; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	float m_flDistanceFalloff; // 0x56c
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nFlags; // 0x570
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_ProjectedTextureName; // 0x574
};

// Aligment: 0
// Size: 1656
class CEnvDeferredSpotLight : public CEnvDeferredLight, CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 4976
class CDCGPlayer : public CBasePlayer, CBaseCombatCharacter, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 856
class CDCGGameRulesProxy : public CGameRulesProxy, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CSingleplayRules* m_pGameRules; // 0x350
};

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 1
// Size: 168
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x88
};

// Aligment: 0
// Size: 168
class CNavVolumeAll : public CNavVolumeVector, CNavVolume
{
public:
// <no members described>
};

// Aligment: 2
// Size: 144
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x80
	float m_flRadius; // 0x8c
};

// Aligment: 1
// Size: 152
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x90
};

// Aligment: 1
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

