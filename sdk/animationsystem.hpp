#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: animationsystem.dll
// Class Count: 136
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 6
// Size: 112
struct AnimationDecodeDebugDumpElement_t
{
public:
	int32_t m_nEntityIndex; // 0x0
	CUtlString m_modelName; // 0x8
	CUtlVector< CUtlString > m_poseParams; // 0x10
	CUtlVector< CUtlString > m_decodeOps; // 0x28
	CUtlVector< CUtlString > m_internalOps; // 0x40
	CUtlVector< CUtlString > m_decodedAnims; // 0x58
};

// Aligment: 2
// Size: 32
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8
};

// Aligment: 9
// Size: 272
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0
	matrix3x4a_t m_rootToWorld; // 0x10
	bool m_bBonesInWorldSpace; // 0x40
	CUtlVector< uint32 > m_boneSetupMask; // 0x48
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60
	CUtlVector< float32 > m_flexControllers; // 0x78
	AnimationSnapshotType_t m_SnapshotType; // 0x90
	bool m_bHasDecodeDump; // 0x94
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98
};

// Aligment: 2
// Size: 288
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110
	CUtlString m_modelName; // 0x118
};

// Aligment: 5
// Size: 24
struct AnimResourceBoneDifference_t
{
public:
	CResourceString m_name; // 0x0
	CResourceString m_parent; // 0x4
	Vector m_posError; // 0x8
	bool m_bHasRotation; // 0x14
	bool m_bHasMovement; // 0x15
};

// Aligment: 1
// Size: 4
struct AnimResourceMorphDifference_t
{
public:
	CResourceString m_name; // 0x0
};

// Aligment: 2
// Size: 8
struct AnimResourceUserDifference_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_nType; // 0x4
};

// Aligment: 7
// Size: 56
struct AnimResourceEncodeDifference_t
{
public:
	CResourceArray< AnimResourceBoneDifference_t > m_boneArray; // 0x0
	CResourceArray< AnimResourceMorphDifference_t > m_morphArray; // 0x8
	CResourceArray< AnimResourceUserDifference_t > m_userArray; // 0x10
	CResourceArray< uint8 > m_bHasRotationBitArray; // 0x18
	CResourceArray< uint8 > m_bHasMovementBitArray; // 0x20
	CResourceArray< uint8 > m_bHasMorphBitArray; // 0x28
	CResourceArray< uint8 > m_bHasUserBitArray; // 0x30
};

// Aligment: 4
// Size: 16
struct AnimResourceAnimEvent_t
{
public:
	int32_t m_nFrame; // 0x0
	float m_flCycle; // 0x4
	CResourceString m_sOptions; // 0x8
	CResourceString m_sEventName; // 0xc
};

// Aligment: 7
// Size: 44
struct AnimResourceMovement_t
{
public:
	int32_t endframe; // 0x0
	int32_t motionflags; // 0x4
	float v0; // 0x8
	float v1; // 0xc
	float angle; // 0x10
	Vector vector; // 0x14
	Vector position; // 0x20
};

// Aligment: 6
// Size: 20
struct AnimResourceIKRuleStallFrame_t
{
public:
	int16_t chain; // 0x0
	int16_t slot; // 0x2
	float start; // 0x4
	float peak; // 0x8
	float tail; // 0xc
	float end; // 0x10
};

// Aligment: 19
// Size: 96
struct AnimResourceIKRule_t
{
public:
	int32_t index; // 0x0
	int32_t type; // 0x4
	int32_t chain; // 0x8
	int32_t bone; // 0xc
	int32_t slot; // 0x10
	float height; // 0x14
	float radius; // 0x18
	float floor; // 0x1c
	Vector pos; // 0x20
	Quaternion q; // 0x2c
	int32_t iStart; // 0x3c
	float start; // 0x40
	float peak; // 0x44
	float tail; // 0x48
	float end; // 0x4c
	float contact; // 0x50
	float drop; // 0x54
	float top; // 0x58
	CResourceString m_szAttachmentName; // 0x5c
};

// Aligment: 6
// Size: 24
struct AnimResourceLocalHierarchy_t
{
public:
	CResourceString m_sBone; // 0x0
	CResourceString m_sNewParent; // 0x4
	int32_t m_nStartFrame; // 0x8
	int32_t m_nPeakFrame; // 0xc
	int32_t m_nTailFrame; // 0x10
	int32_t m_nEndFrame; // 0x14
};

// Aligment: 3
// Size: 12
struct AnimResourceDecoder_t
{
public:
	CResourceString m_szName; // 0x0
	int32_t m_nVersion; // 0x4
	int32_t m_nType; // 0x8
};

// Aligment: 4
// Size: 20
struct AnimResourceFrameSegment_t
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0
	uint32_t m_nLocalElementMasks; // 0x4
	int32_t m_nLocalChannel; // 0x8
	CResourceArray< uint8 > m_container; // 0xc
};

// Aligment: 3
// Size: 16
struct AnimResourceFrameBlockAnim_t
{
public:
	int32_t m_nStartFrame; // 0x0
	int32_t m_nEndFrame; // 0x4
	CResourceArray< int32 > m_segmentIndexArray; // 0x8
};

// Aligment: 5
// Size: 76
struct AnimResourceEncodedFrames_t
{
public:
	CResourceString m_fileName; // 0x0
	int32_t m_nFrames; // 0x4
	int32_t m_nFramesPerBlock; // 0x8
	CResourceArray< AnimResourceFrameBlockAnim_t > m_frameblockArray; // 0xc
	AnimResourceEncodeDifference_t m_usageDifferences; // 0x14
};

// Aligment: 5
// Size: 5
struct AnimResourceAnimDesc_t_Flag_t
{
public:
	bool m_bLooping; // 0x0
	bool m_bAllZeros; // 0x1
	bool m_bHidden; // 0x2
	bool m_bDelta; // 0x3
	bool m_bLegacyWorldspace; // 0x4
};

// Aligment: 2
// Size: 8
struct AnimResourceSequenceParams_t
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 16
// Size: 120
struct AnimResourceAnimDesc_t
{
public:
	CResourceString m_name; // 0x0
	AnimResourceAnimDesc_t_Flag_t m_flags; // 0x4
	float fps; // 0xc
	CResourcePointer< AnimResourceEncodedFrames_t > m_pData; // 0x10
	CResourceArray< AnimResourceMovement_t > m_movementArray; // 0x14
	CResourceArray< AnimResourceAnimEvent_t > m_eventArray; // 0x1c
	CResourceArray< AnimResourceActivity_t > m_activityArray; // 0x24
	CResourceArray< AnimResourceLocalHierarchy_t > m_hierarchyArray; // 0x2c
	CResourceArray< AnimResourceIKRule_t > m_IKRuleArray; // 0x34
	CResourceArray< AnimResourceIKRuleStallFrame_t > m_IKRuleZeroFrameArray; // 0x3c
	float framestalltime; // 0x44
	Vector m_vecRootMin; // 0x48
	Vector m_vecRootMax; // 0x54
	CResourceArray< Vector > m_vecBoneWorldMin; // 0x60
	CResourceArray< Vector > m_vecBoneWorldMax; // 0x68
	AnimResourceSequenceParams_t m_sequenceParams; // 0x70
};

// Aligment: 4
// Size: 16
struct AnimResourceActivity_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_nActivity; // 0x4
	int32_t m_nFlags; // 0x8
	int32_t m_nWeight; // 0xc
};

// Aligment: 6
// Size: 40
struct AnimationResourceData_t
{
public:
	CResourceString m_name; // 0x0
	CResourceArray< AnimResourceEncodedFrames_t > m_frameData; // 0x4
	CResourceArray< AnimResourceAnimDesc_t > m_animArray; // 0xc
	CResourceArray< AnimResourceDecoder_t > m_decoderArray; // 0x14
	int32_t m_nMaxUniqueFrameIndex; // 0x1c
	CResourceArray< AnimResourceFrameSegment_t > m_segmentArray; // 0x20
};

// Aligment: 6
// Size: 56
struct AnimResourceBone_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_parent; // 0x4
	Vector m_pos; // 0x8
	Quaternion m_quat; // 0x14
	Quaternion m_qAlignment; // 0x24
	int32_t m_flags; // 0x34
};

// Aligment: 2
// Size: 8
struct AnimResourceUser_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_nType; // 0x4
};

// Aligment: 9
// Size: 48
struct AnimResourceDataChannel_t
{
public:
	CResourceString m_szChannelClass; // 0x0
	CResourceString m_szVariableName; // 0x4
	int32_t m_nFlags; // 0x8
	int32_t m_nType; // 0xc
	CResourceString m_szGrouping; // 0x10
	CResourceString m_szDescription; // 0x14
	CResourceArray< CResourceString > m_szElementNameArray; // 0x18
	CResourceArray< int32 > m_nElementIndexArray; // 0x20
	CResourceArray< uint32 > m_nElementMaskArray; // 0x28
};

// Aligment: 2
// Size: 16
struct AnimResourceIKLink_t
{
public:
	int32_t bone; // 0x0
	Vector kneeDir; // 0x4
};

// Aligment: 6
// Size: 24
struct AnimResourceIKTargetInfo_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_nType; // 0x4
	int32_t m_nPosChannel; // 0x8
	int32_t m_nPosElement; // 0xc
	int32_t m_nQuatChannel; // 0x10
	int32_t m_nQuatElement; // 0x14
};

// Aligment: 3
// Size: 20
struct AnimResourceIKChain_t
{
public:
	CResourceString m_name; // 0x0
	CResourceArray< AnimResourceIKTargetInfo_t > m_targetInfoArray; // 0x4
	CResourceArray< AnimResourceIKLink_t > m_linkArray; // 0xc
};

// Aligment: 7
// Size: 48
struct AnimationKeyResourceData_t
{
public:
	CResourceString m_name; // 0x0
	CResourceArray< AnimResourceBone_t > m_boneArray; // 0x4
	CResourceArray< AnimResourceUser_t > m_userArray; // 0xc
	CResourceArray< CResourceString > m_morphArray; // 0x14
	CResourceArray< AnimResourceIKChain_t > m_IKChainArray; // 0x1c
	int32_t m_nChannelElements; // 0x24
	CResourceArray< AnimResourceDataChannel_t > m_dataChannelArray; // 0x28
};

// Aligment: 13
// Size: 156
struct AnimationRetargetElementData_t
{
public:
	int32_t m_nElementType; // 0x0
	int32_t m_nGroupType; // 0x4
	int32_t m_nChainType; // 0x8
	int32_t m_nChainIndex; // 0xc
	int32_t m_nChainInvIndex; // 0x10
	int32_t m_nBoneIndex; // 0x14
	CResourceString m_boneName; // 0x18
	matrix3x4_t m_transform; // 0x1c
	matrix3x4_t m_invTransform; // 0x4c
	float m_flDistance; // 0x7c
	Vector m_vecMin; // 0x80
	Vector m_vecMax; // 0x8c
	float m_flMass; // 0x98
};

// Aligment: 4
// Size: 20
struct AnimationRetargetChainData_t
{
public:
	CResourceString m_sChainName; // 0x0
	int32_t m_nGroupType; // 0x4
	int32_t m_nChainType; // 0x8
	CResourceArray< int32 > m_nElement; // 0xc
};

// Aligment: 5
// Size: 32
struct AnimationRetargetData_t
{
public:
	int32_t m_bEnableRetarget; // 0x0
	int32_t m_nRetargetStyle; // 0x4
	CResourceArray< AnimationRetargetElementData_t > m_element; // 0x8
	CResourceArray< AnimationRetargetChainData_t > m_chain; // 0x10
	CResourceArray< CResourceString > m_replicated; // 0x18
};

// Aligment: 8
// Size: 120
struct AnimationGroupResourceData_t
{
public:
	uint32_t m_nFlags; // 0x0
	CResourceString m_name; // 0x4
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeAnimationResourceData_t > > > m_localHAnimArray; // 0x8
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeAnimationGroupResourceData_t > > > m_includedGroupArray; // 0x10
	CResourceExtReference< CWeakHandle< InfoForResourceTypeSequenceGroupResourceData_t > > m_directHSeqGroup; // 0x18
	AnimationKeyResourceData_t m_decodeKey; // 0x20
	AnimationRetargetData_t m_retarget; // 0x50
	CResourceArray< CResourceString > m_szScripts; // 0x70
};

// Aligment: 8
// Size: 8
struct SeqResourceAutoLayerFlag_t
{
public:
	bool m_bPost; // 0x0
	bool m_bSpline; // 0x1
	bool m_bXFade; // 0x2
	bool m_bNoBlend; // 0x3
	bool m_bLocal; // 0x4
	bool m_bPose; // 0x5
	bool m_bFetchFrame; // 0x6
	bool m_bSubtract; // 0x7
};

// Aligment: 7
// Size: 28
struct SeqResourceAutoLayer_t
{
public:
	int16_t m_nLocalReference; // 0x0
	int16_t m_nLocalPose; // 0x2
	SeqResourceAutoLayerFlag_t m_flags; // 0x4
	float m_start; // 0xc
	float m_peak; // 0x10
	float m_tail; // 0x14
	float m_end; // 0x18
};

// Aligment: 3
// Size: 12
struct SeqResourceIKLock_t
{
public:
	int16_t m_nLocalBone; // 0x0
	float m_flPosWeight; // 0x4
	float m_flAngleWeight; // 0x8
};

// Aligment: 3
// Size: 20
struct SeqResourceBoneMaskList_t
{
public:
	CResourceString m_sName; // 0x0
	CResourceArray< int16 > m_nLocalBoneArray; // 0x4
	CResourceArray< float32 > m_flBoneWeightArray; // 0xc
};

// Aligment: 6
// Size: 6
struct SeqResourceMultiFetch_t_Flag_t
{
public:
	bool m_bRealtime; // 0x0
	bool m_bCylepose; // 0x1
	bool m_b0D; // 0x2
	bool m_b1D; // 0x3
	bool m_b2D; // 0x4
	bool m_b2D_TRI; // 0x5
};

// Aligment: 8
// Size: 56
struct SeqResourceMultiFetch_t
{
public:
	SeqResourceMultiFetch_t_Flag_t m_flags; // 0x0
	CResourceArray< int16 > m_localReferenceArray; // 0x8
	int32[2] m_nGroupSize; // 0x10
	int32[2] m_nLocalPose; // 0x18
	CResourceArray< float32 > m_poseKeyArray0; // 0x20
	CResourceArray< float32 > m_poseKeyArray1; // 0x28
	int32_t m_nLocalCyclePoseParameter; // 0x30
	bool m_bCalculatePoseParameters; // 0x34
};

// Aligment: 10
// Size: 10
struct SeqResourceSeqDesc_t_Flag_t
{
public:
	bool m_bLooping; // 0x0
	bool m_bSnap; // 0x1
	bool m_bAutoplay; // 0x2
	bool m_bPost; // 0x3
	bool m_bHidden; // 0x4
	bool m_bMulti; // 0x5
	bool m_bLegacyDelta; // 0x6
	bool m_bLegacyWorldspace; // 0x7
	bool m_bLegacyCyclepose; // 0x8
	bool m_bLegacyRealtime; // 0x9
};

// Aligment: 2
// Size: 8
struct SeqResourceTransition_t
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 9
// Size: 112
struct SeqResourceS1SeqDesc_t
{
public:
	CResourceString m_sName; // 0x0
	SeqResourceSeqDesc_t_Flag_t m_flags; // 0x4
	SeqResourceMultiFetch_t m_fetch; // 0x10
	int32_t m_nLocalWeightlist; // 0x48
	CResourceArray< SeqResourceAutoLayer_t > m_autoLayerArray; // 0x4c
	CResourceArray< SeqResourceIKLock_t > m_IKLockArray; // 0x54
	SeqResourceTransition_t m_transition; // 0x5c
	CResourceString m_keyValueText; // 0x64
	CResourceArray< AnimResourceActivity_t > m_activityArray; // 0x68
};

// Aligment: 6
// Size: 36
struct SeqResourceSynthAnimDesc_t
{
public:
	CResourceString m_sName; // 0x0
	SeqResourceSeqDesc_t_Flag_t m_flags; // 0x4
	SeqResourceTransition_t m_transition; // 0x10
	int16_t m_nLocalBaseReference; // 0x18
	int16_t m_nLocalBoneMask; // 0x1a
	CResourceArray< AnimResourceActivity_t > m_activityArray; // 0x1c
};

// Aligment: 9
// Size: 24
struct SeqResourceCmdLayer_t
{
public:
	int16_t m_cmd; // 0x0
	int16_t m_nLocalReference; // 0x2
	int16_t m_nLocalBonemask; // 0x4
	int16_t m_nDstResult; // 0x6
	int16_t m_nSrcResult; // 0x8
	bool m_bSpline; // 0xa
	float m_flVar1; // 0xc
	float m_flVar2; // 0x10
	int16_t m_nLineNumber; // 0x14
};

// Aligment: 8
// Size: 24
struct SeqResourcePoseSetting_t
{
public:
	CResourceString m_sPoseParameter; // 0x0
	CResourceString m_sAttachment; // 0x4
	CResourceString m_sReferenceSequence; // 0x8
	float m_flValue; // 0xc
	bool m_bX; // 0x10
	bool m_bY; // 0x11
	bool m_bZ; // 0x12
	int32_t m_eType; // 0x14
};

// Aligment: 12
// Size: 68
struct SeqResourceCmdSeqDesc_t
{
public:
	CResourceString m_sName; // 0x0
	SeqResourceSeqDesc_t_Flag_t m_flags; // 0x4
	SeqResourceTransition_t m_transition; // 0x10
	int16_t m_nFrameRangeSequence; // 0x18
	int16_t m_nFrameCount; // 0x1a
	float m_flFPS; // 0x1c
	int16_t m_nSubCycles; // 0x20
	int16_t m_numLocalResults; // 0x22
	CResourceArray< SeqResourceCmdLayer_t > m_cmdLayerArray; // 0x24
	CResourceArray< AnimResourceAnimEvent_t > m_eventArray; // 0x2c
	CResourceArray< AnimResourceActivity_t > m_activityArray; // 0x34
	CResourceArray< SeqResourcePoseSetting_t > m_poseSettingArray; // 0x3c
};

// Aligment: 5
// Size: 20
struct SeqResourcePoseParamDesc_t
{
public:
	CResourceString m_sName; // 0x0
	float m_flStart; // 0x4
	float m_flEnd; // 0x8
	float m_flLoop; // 0xc
	bool m_bLooping; // 0x10
};

// Aligment: 13
// Size: 88
struct SequenceGroupResourceData_t
{
public:
	CResourceString m_sName; // 0x0
	uint32_t m_nFlags; // 0x4
	CResourceArray< CResourceString > m_localSequenceNameArray; // 0x8
	CResourceArray< SeqResourceS1SeqDesc_t > m_localS1SeqDescArray; // 0x10
	CResourceArray< SeqResourceS1SeqDesc_t > m_localMultiSeqDescArray; // 0x18
	CResourceArray< SeqResourceSynthAnimDesc_t > m_localSynthAnimDescArray; // 0x20
	CResourceArray< SeqResourceCmdSeqDesc_t > m_localCmdSeqDescArray; // 0x28
	CResourceArray< SeqResourceBoneMaskList_t > m_localBoneMaskArray; // 0x30
	CResourceArray< CResourceString > m_localBoneNameArray; // 0x38
	CResourceString m_localNodeName; // 0x40
	CResourceArray< SeqResourcePoseParamDesc_t > m_localPoseParamArray; // 0x44
	CResourceString m_keyValueText; // 0x4c
	CResourceArray< SeqResourceIKLock_t > m_localIKAutoplayLockArray; // 0x50
};

// Aligment: 17
// Size: 416
class CCompressorGroup
{
public:
	int32_t m_nTotalElementCount; // 0x0
	CUtlVector< char* > m_szChannelClass; // 0x8
	CUtlVector< char* > m_szVariableName; // 0x20
	CUtlVector< fieldtype_t > m_nType; // 0x38
	CUtlVector< int32 > m_nFlags; // 0x50
	CUtlVector< CUtlString > m_szGrouping; // 0x68
	CUtlVector< int32 > m_nCompressorIndex; // 0x80
	CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98
	CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xb0
	CUtlVector< uint32 > m_nElementMask; // 0xc8
	CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xf8
	CUtlVector< CCompressor< Quaternion >* > m_quaternionCompressor; // 0x110
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188
};

// Aligment: 1
// Size: 4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 4
class AnimParamID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 4
class AnimTagID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 2
// Size: 16
class CBlendCurve
{
public:
	Vector2D m_vControlPoint1; // 0x0
	Vector2D m_vControlPoint2; // 0x8
};

// Aligment: 5
// Size: 424
class CAnimationGraph
{
public:
	CAnimMotorList m_motorList; // 0x28
	CSmartPtr< CAnimParameterList > m_pParameterList; // 0xe0
	CSmartPtr< CAnimTagManager > m_pTagManager; // 0xe8
	CSmartPtr< CActivityValueList > m_pActivityValuesList; // 0xf0
	AnimNodeID m_rootNodeID; // 0xf8
};

// Aligment: 1
// Size: 200
class CAnimParameterList
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0xb0
};

// Aligment: 2
// Size: 56
class CParameterValue
{
public:
	AnimParamID m_id; // 0x18
	CAnimVariant m_value; // 0x1c
};

// Aligment: 2
// Size: 64
class CActivityValues
{
public:
	CUtlVector< CSmartPtr< CParameterValue > > m_values; // 0x18
	CUtlString m_activityName; // 0x30
};

// Aligment: 1
// Size: 56
class CActivityValueList
{
public:
	CUtlVector< CSmartPtr< CActivityValues > > m_activities; // 0x18
};

// Aligment: 1
// Size: 40
class CAnimNodeList
{
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10
};

// Aligment: 1
// Size: 40
class CAnimStateList
{
public:
	CUtlVector< CAnimState* > m_states; // 0x10
};

// Aligment: 4
// Size: 24
class CAnimInputDamping
{
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc
	// MPropertyFriendlyName "Minimum Speed"
	float m_fMinSpeed; // 0x10
	// MPropertyFriendlyName "Maximum Tension"
	float m_fMaxTension; // 0x14
};

// Aligment: 1
// Size: 184
class CAnimMotorList
{
public:
	CUtlVector< CSmartPtr< CBaseAnimMotor > > m_motors; // 0x8
};

// Aligment: 2
// Size: 40
class CBaseAnimMotor
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyHideField
	bool m_bDefault; // 0x20
};

// Aligment: 1
// Size: 48
class CBasePathAnimMotor : public CBaseAnimMotor
{
public:
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x28
};

// Aligment: 0
// Size: 48
class CPathAnimMotor : public CBasePathAnimMotor, CBaseAnimMotor
{
public:
// <no members described>
};

// Aligment: 6
// Size: 72
class CDampedPathAnimMotor : public CBasePathAnimMotor, CBaseAnimMotor
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x30
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x34
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x38
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x3c
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x40
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x44
};

// Aligment: 6
// Size: 48
class CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyHideField
	AnimParamID m_id; // 0x20
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x24
	// MPropertyFriendlyName "Network"
	bool m_bNetwork; // 0x28
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x29
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x2a
};

// Aligment: 1
// Size: 56
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x30
};

// Aligment: 2
// Size: 88
class CEnumAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x38
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x40
};

// Aligment: 3
// Size: 64
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x30
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x34
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x38
};

// Aligment: 4
// Size: 64
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x30
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x34
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x38
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c
};

// Aligment: 2
// Size: 64
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x30
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c
};

// Aligment: 4
// Size: 56
class CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20
	// MPropertyHideField
	Vector2D m_vecPosition; // 0x28
	// MPropertyHideField
	AnimNodeID m_nNodeID; // 0x30
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34
};

// Aligment: 3
// Size: 48
class CAnimTagSpan
{
public:
	AnimTagID m_id; // 0x18
	float m_fStartCycle; // 0x1c
	float m_fDuration; // 0x20
};

// Aligment: 4
// Size: 104
class CSequenceAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x40
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x58
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x60
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64
};

// Aligment: 3
// Size: 24
class CBlendNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x10
};

// Aligment: 9
// Size: 128
class CBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlendNodeChild > m_children; // 0x40
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_blendValueSource; // 0x58
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x5c
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x60
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x64
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x65
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x66
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x67
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68
};

// Aligment: 1
// Size: 96
class CStateMachineAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x48
};

// Aligment: 1
// Size: 64
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
};

// Aligment: 3
// Size: 24
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10
};

// Aligment: 6
// Size: 112
class CChoiceAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandGroup
	CUtlVector< CChoiceNodeChild > m_children; // 0x40
	// MPropertyHideField
	int32_t m_seed; // 0x58
	// MPropertyFriendlyName "Method"
	ChoiceMethod m_choiceMethod; // 0x5c
	// MPropertyFriendlyName "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod; // 0x60
	// MPropertyFriendlyName "Blend Duration"
	float m_blendTime; // 0x64
	// MPropertyFriendlyName "Reset On Selection"
	bool m_bResetChosen; // 0x68
};

// Aligment: 3
// Size: 72
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_valueSource; // 0x3c
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 7
// Size: 80
class CAddAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38
	// MPropertyHideField
	AnimNodeID m_additiveChildID; // 0x3c
	// MPropertyFriendlyName "Timing Control"
	BinaryNodeTiming m_timingBehavior; // 0x40
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	float m_flTimingBlend; // 0x44
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x48
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x49
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4a
};

// Aligment: 7
// Size: 80
class CSubtractAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38
	// MPropertyHideField
	AnimNodeID m_subtractChildID; // 0x3c
	// MPropertyFriendlyName "Timing Control"
	BinaryNodeTiming m_timingBehavior; // 0x40
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	float m_flTimingBlend; // 0x44
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x48
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x49
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4a
};

// Aligment: 8
// Size: 96
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Generate Movement"
	bool m_bApplyMovement; // 0x3c
	// MPropertyFriendlyName "Orient Movement"
	bool m_bOrientMovement; // 0x3d
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x3e
	// MPropertyFriendlyName "Turn to Face"
	bool m_bTurnToFace; // 0x3f
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	float m_flTurnToFaceOffset; // 0x40
	// MPropertyFriendlyName "Face Direction"
	AnimValueSource m_facingTarget; // 0x44
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x48
};

// Aligment: 8
// Size: 80
class CTurnHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x3c
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x40
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x44
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x48
	// MPropertyFriendlyName "Clamp Turn to Child Duration"
	bool m_bClampDurationToChild; // 0x49
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x4a
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x4c
};

// Aligment: 11
// Size: 144
class CAimMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40
	// MPropertyFriendlyName "Angle Increment"
	float m_fAngleIncrement; // 0x48
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x4c
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x50
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58
	// MPropertyFriendlyName "Blend Mode"
	AimMatrixBlendMode m_blendMode; // 0x60
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_boneMaskName; // 0x68
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x70
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x71
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78
};

// Aligment: 2
// Size: 64
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x3c
};

// Aligment: 7
// Size: 104
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x38
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_blendValueSource; // 0x40
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x44
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x48
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x49
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x4c
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50
};

// Aligment: 6
// Size: 72
class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x3c
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x40
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x44
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x45
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x46
};

// Aligment: 12
// Size: 104
class CBoneMaskAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x38
	// MPropertyHideField
	AnimNodeID m_child1ID; // 0x40
	// MPropertyHideField
	AnimNodeID m_child2ID; // 0x44
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x48
	// MPropertyFriendlyName "Use Blend Source"
	bool m_bUseBlendScale; // 0x4c
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_blendValueSource; // 0x50
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_blendParameter; // 0x54
	// MPropertyFriendlyName "Timing Control"
	BinaryNodeTiming m_timingBehavior; // 0x58
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	float m_flTimingBlend; // 0x5c
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x60
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x64
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x65
};

// Aligment: 1
// Size: 64
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
};

// Aligment: 3
// Size: 64
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x3c
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x3d
};

// Aligment: 7
// Size: 128
class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x40
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x44
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x48
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x4c
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x58
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68
};

// Aligment: 4
// Size: 88
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48
	// MPropertyFriendlyName "Match Target Orientation"
	bool m_bMatchTargetOrientation; // 0x50
};

// Aligment: 13
// Size: 144
class CGroundIKSolveAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlVector< CUtlString > m_IkChains; // 0x40
	// MPropertyFriendlyName "Tilt Source"
	// MPropertyAttributeChoiceEnumName
	GroundIKTiltSource_t m_TiltSource; // 0x58
	// MPropertyFriendlyName "Apply Locks"
	bool m_bApplyLocks; // 0x5c
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x5d
	// MPropertyFriendlyName "Target Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_TargetBlendParameter; // 0x60
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Bone Types to Draw"
	// MPropertyAttributeChoiceEnumName
	CUtlVector< CGroundIKSolveAnimNode::DebugSkeletonBoneType_t > m_DebugDrawBoneTypes; // 0x68
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Lock Values"
	bool m_bDebugDrawLockValues; // 0x80
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Lock Values Color"
	Color m_DebugDrawLockValuesColor; // 0x81
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Before"
	bool m_bDebugDrawBefore; // 0x85
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Before IK Color"
	Color m_DebugDrawBeforeColor; // 0x86
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw After"
	bool m_bDebugDrawAfter; // 0x8a
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug After IK Color"
	Color m_DebugDrawAfterColor; // 0x8b
};

// Aligment: 2
// Size: 88
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlVector< CUtlString > m_IkChains; // 0x40
};

// Aligment: 14
// Size: 136
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x3c
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x40
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x44
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x48
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x50
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	float m_flYawLimit; // 0x58
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 180"
	float m_flPitchLimit; // 0x5c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x60
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x61
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x62
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x64
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x68
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 4
// Size: 112
class CNeuralNetAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Weights File"
	CUtlString m_weightsFile; // 0x38
	// MPropertyFriendlyName "Test Input File"
	CUtlString m_testInputFile; // 0x40
	// MPropertyFriendlyName "Bone Map File"
	CUtlString m_boneMapFile; // 0x48
	// MPropertyFriendlyName "Sensor Range File"
	CUtlString m_sensorRangeFile; // 0x50
};

// Aligment: 3
// Size: 72
class CPathHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x3c
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x40
};

// Aligment: 5
// Size: 88
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x40
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x50
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x51
};

// Aligment: 1
// Size: 64
class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Motion Range"
	AnimVRHandMotionRange_t m_motionRange; // 0x38
};

// Aligment: 10
// Size: 152
class CSelectorAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< AnimNodeID > m_children; // 0x40
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x58
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	AnimParamID m_boolParamID; // 0x74
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	AnimParamID m_enumParamID; // 0x78
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x7c
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehaior_t m_tagBehavior; // 0x80
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x84
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x85
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x88
};

// Aligment: 23
// Size: 160
class CHitReactAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x3c
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x40
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x44
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x48
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x4c
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x50
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0x60
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0x64
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0x68
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0x6c
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0x70
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0x74
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0x78
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0x7c
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0x80
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x84
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0x88
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0x8c
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0x90
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0x94
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x98
};

// Aligment: 2
// Size: 16
class CBlend2DItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x0
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x8
};

// Aligment: 10
// Size: 136
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlend2DItem > m_items; // 0x38
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Horizontal Axis"
	AnimValueSource m_blendSourceX; // 0x50
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Horizontal Axis"
	AnimParamID m_paramX; // 0x54
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Vertical Axis"
	AnimValueSource m_blendSourceY; // 0x58
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Vertical Axis"
	AnimParamID m_paramY; // 0x5c
	// MPropertyFriendlyName "Blend Mode"
	Blend2DMode m_eBlendNode; // 0x60
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x65
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x68
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 11
// Size: 136
class CAnimState
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x20
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x38
	// MPropertySuppressField
	CUtlVector< uint8 > m_tagBehaviors; // 0x50
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x68
	// MPropertyHideField
	AnimNodeID m_childNodeID; // 0x70
	// MPropertyHideField
	AnimStateID m_stateID; // 0x74
	// MPropertyHideField
	Vector2D m_position; // 0x78
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x80
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x81
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x82
	// MPropertyFriendlyName "Exclusive Root Motion"
	bool m_bIsRootMotionExclusive; // 0x83
};

// Aligment: 7
// Size: 96
class CAnimStateTransition
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateConditionBase > > m_conditions; // 0x20
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x38
	// MPropertyHideField
	AnimStateID m_destState; // 0x3c
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x40
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x44
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	float m_flFixedCycleValue; // 0x48
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x4c
};

// Aligment: 1
// Size: 40
class CAnimStateConditionBase
{
public:
	uint8_t m_comparisonOp; // 0x20
};

// Aligment: 2
// Size: 64
class CParameterAnimCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_paramID; // 0x28
	// MPropertyFriendlyName "Comparison Value"
	CAnimVariant m_comparisonValue; // 0x2c
};

// Aligment: 2
// Size: 56
class CTagCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyChoiceProviderFn
	AnimTagID m_tagID; // 0x28
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c
};

// Aligment: 1
// Size: 48
class CCycleCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	// MPropertyAttributeRange "0 1"
	float m_comparisonValue; // 0x28
};

// Aligment: 1
// Size: 48
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Is Finished"
	bool m_bIsFinished; // 0x28
};

// Aligment: 1
// Size: 48
class CLookHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c
};

// Aligment: 1
// Size: 48
class CLookPitchCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c
};

// Aligment: 1
// Size: 48
class CMoveHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c
};

// Aligment: 1
// Size: 48
class CMoveSpeedCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c
};

// Aligment: 1
// Size: 48
class CFacingHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c
};

// Aligment: 2
// Size: 56
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x28
	bool m_bComparisonValue; // 0x2c
};

// Aligment: 5
// Size: 64
class CControlValueCondition : public CAnimStateConditionBase
{
public:
	ControlValue m_sourceControlValue; // 0x28
	int32_t m_comparisonValueType; // 0x2c
	float m_comparisonFixedValue; // 0x30
	ControlValue m_comparisonControlValue; // 0x34
	AnimParamID m_comparisonParamID; // 0x38
};

// Aligment: 1
// Size: 48
class CTimeCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_comparisonValue; // 0x28
};

// Aligment: 1
// Size: 200
class CAnimTagManager
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 2
// Size: 40
class CAnimTagBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyHideField
	AnimTagID m_tagID; // 0x20
};

// Aligment: 0
// Size: 48
class CStringAnimTag : public CAnimTagBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class CPostGraphIKTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Blend Amount"
	float m_flBlendAmount; // 0x30
};

// Aligment: 3
// Size: 64
class CPostGraphIKChainBlendTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Chain Name"
	CUtlString m_ChainName; // 0x30
	// MPropertyFriendlyName "Blend Amount on Enter"
	float m_flBlendAmountOnEnter; // 0x38
	// MPropertyFriendlyName "Blend Amount on Exit"
	float m_flBlendAmountOnExit; // 0x3c
};

// Aligment: 1
// Size: 56
class CFootFallAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x30
};

// Aligment: 1
// Size: 56
class CAudioAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Audio Clip"
	// MPropertyAttributeEditor "SoundPicker"
	CUtlString m_clipName; // 0x30
};

// Aligment: 1
// Size: 56
class CSequenceFinishedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x30
};

// Aligment: 1
// Size: 64
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x30
};

// Aligment: 4
// Size: 72
class CClothSettingsAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x30
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x34
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x38
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x40
};

// Aligment: 4
// Size: 72
class CParticleAnimTag : public CAnimTagBase
{
public:
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x30
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x38
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x40
	// MPropertyFriendlyName "Tag End Stop is Instant"
	bool m_bTagEndStopIsInstant; // 0x41
};

// Aligment: 2
// Size: 16
class CAnimReplayWayPoint
{
public:
	Vector m_vPosition; // 0x0
	float m_flFacing; // 0xc
};

// Aligment: 5
// Size: 128
class CAnimReplayFrame
{
public:
	CUtlBinaryBlock m_instanceData; // 0x10
	CUtlBinaryBlock m_poseRecipeInstanceData; // 0x28
	CTransform m_localToWorldTransform; // 0x40
	CUtlVector< CAnimReplayWayPoint > m_waypoints; // 0x60
	float m_timeStamp; // 0x78
};

// Aligment: 5
// Size: 112
class CAnimGraphDebugReplay
{
public:
	CAnimationGraph* m_pAnimGraph; // 0x40
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48
	int32_t m_startIndex; // 0x60
	int32_t m_writeIndex; // 0x64
	int32_t m_frameCount; // 0x68
};

