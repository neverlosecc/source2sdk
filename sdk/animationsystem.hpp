#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: animationsystem.dll
// Classes count: 342
// Enums count: 68
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x2
enum class MoodType_t : uint32_t
{
	eMoodType_Head = 0x0,
	eMoodType_Body = 0x1,
};

// Alignment: 4
// Size: 0x6
enum class AnimationProcessingType_t : uint32_t
{
	ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
	ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
	ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
	ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
	ANIMATION_PROCESSING_MAX = 0x5,
};

// Alignment: 4
// Size: 0x7
enum class AnimationSnapshotType_t : uint32_t
{
	ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
	ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
	ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
	ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
	ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
	ANIMATION_SNAPSHOT_MAX = 0x6,
};

// Alignment: 4
// Size: 0x11
enum class SeqCmd_t : uint32_t
{
	SeqCmd_Nop = 0x0,
	SeqCmd_LinearDelta = 0x1,
	SeqCmd_FetchFrameRange = 0x2,
	SeqCmd_Slerp = 0x3,
	SeqCmd_Add = 0x4,
	SeqCmd_Subtract = 0x5,
	SeqCmd_Scale = 0x6,
	SeqCmd_Copy = 0x7,
	SeqCmd_Blend = 0x8,
	SeqCmd_Worldspace = 0x9,
	SeqCmd_Sequence = 0xa,
	SeqCmd_FetchCycle = 0xb,
	SeqCmd_FetchFrame = 0xc,
	SeqCmd_IKLockInPlace = 0xd,
	SeqCmd_IKRestoreAll = 0xe,
	SeqCmd_ReverseSequence = 0xf,
	SeqCmd_Transform = 0x10,
};

// Alignment: 4
// Size: 0x4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Alignment: 4
// Size: 0x12
enum class ParticleAttachment_t : uint32_t
{
	PATTACH_INVALID = 0xffffffffffffffff,
	PATTACH_ABSORIGIN = 0x0,
	PATTACH_ABSORIGIN_FOLLOW = 0x1,
	PATTACH_CUSTOMORIGIN = 0x2,
	PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
	PATTACH_POINT = 0x4,
	PATTACH_POINT_FOLLOW = 0x5,
	PATTACH_EYES_FOLLOW = 0x6,
	PATTACH_OVERHEAD_FOLLOW = 0x7,
	PATTACH_WORLDORIGIN = 0x8,
	PATTACH_ROOTBONE_FOLLOW = 0x9,
	PATTACH_RENDERORIGIN_FOLLOW = 0xa,
	PATTACH_MAIN_VIEW = 0xb,
	PATTACH_WATERWAKE = 0xc,
	PATTACH_CENTER_FOLLOW = 0xd,
	PATTACH_CUSTOM_GAME_STATE_1 = 0xe,
	PATTACH_HEALTHBAR = 0xf,
	MAX_PATTACH_TYPES = 0x10,
};

// Alignment: 1
// Size: 0x9
enum class AnimParamType_t : uint8_t
{
	ANIMPARAM_UNKNOWN = 0x0,
	ANIMPARAM_BOOL = 0x1,
	ANIMPARAM_ENUM = 0x2,
	ANIMPARAM_INT = 0x3,
	ANIMPARAM_FLOAT = 0x4,
	ANIMPARAM_VECTOR = 0x5,
	ANIMPARAM_QUATERNION = 0x6,
	ANIMPARAM_STRINGTOKEN = 0x7,
	ANIMPARAM_COUNT = 0x8,
};

// Alignment: 4
// Size: 0x4
enum class BoneTransformSpace_t : uint32_t
{
	BoneTransformSpace_Invalid = 0xffffffffffffffff,
	BoneTransformSpace_Parent = 0x0,
	BoneTransformSpace_Model = 0x1,
	BoneTransformSpace_World = 0x2,
};

// Alignment: 4
// Size: 0xd
enum class AnimParamButton_t : uint32_t
{
	ANIMPARAM_BUTTON_NONE = 0x0,
	ANIMPARAM_BUTTON_DPAD_UP = 0x1,
	ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
	ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
	ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
	ANIMPARAM_BUTTON_A = 0x5,
	ANIMPARAM_BUTTON_B = 0x6,
	ANIMPARAM_BUTTON_X = 0x7,
	ANIMPARAM_BUTTON_Y = 0x8,
	ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
	ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
	ANIMPARAM_BUTTON_LTRIGGER = 0xb,
	ANIMPARAM_BUTTON_RTRIGGER = 0xc,
};

// Alignment: 4
// Size: 0x3
enum class AnimParamNetworkSetting : uint32_t
{
	Auto = 0x0,
	AlwaysNetwork = 0x1,
	NeverNetwork = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class AnimPoseControl : uint32_t
{
	NoPoseControl = 0x0,
	AbsolutePoseControl = 0x1,
	RelativePoseControl = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class RagdollPoseControl : uint32_t
{
	Absolute = 0x0,
	Relative = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class AnimVrBoneTransformSource_t : uint32_t
{
	AnimVrBoneTransformSource_LiveStream = 0x0,
	AnimVrBoneTransformSource_GripLimit = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t
{
	FLAG_STATIC = 0x1,
	FLAG_KINEMATIC = 0x2,
	FLAG_JOINT = 0x4,
	FLAG_MASS = 0x8,
	FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Alignment: 4
// Size: 0x4
enum class VPhysXConstraintParams_t__EnumFlags0_t : uint32_t
{
	FLAG0_SHIFT_INTERPENETRATE = 0x0,
	FLAG0_SHIFT_CONSTRAIN = 0x1,
	FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class VPhysXJoint_t__Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
	JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t
{
	FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	FLAG_LEVEL_COLLISION = 0x10,
	FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20,
};

// Alignment: 4
// Size: 0x8
enum class MeshDrawPrimitiveFlags_t : uint32_t
{
	MESH_DRAW_FLAGS_NONE = 0x0,
	MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
	MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
	MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
	MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
	MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
	MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
	MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
};

// Alignment: 4
// Size: 0x16
enum class ModelSkeletonData_t__BoneFlags_t : uint32_t
{
	FLAG_NO_BONE_FLAGS = 0x0,
	FLAG_BONEFLEXDRIVER = 0x4,
	FLAG_CLOTH = 0x8,
	FLAG_PHYSICS = 0x10,
	FLAG_ATTACHMENT = 0x20,
	FLAG_ANIMATION = 0x40,
	FLAG_MESH = 0x80,
	FLAG_HITBOX = 0x100,
	FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	FLAG_BONE_MERGE_READ = 0x40000,
	FLAG_BONE_MERGE_WRITE = 0x80000,
	FLAG_ALL_BONE_FLAGS = 0xfffff,
	BLEND_PREALIGNED = 0x100000,
	FLAG_RIGIDLENGTH = 0x200000,
	FLAG_PROCEDURAL = 0x400000,
};

// Alignment: 4
// Size: 0xf
enum class PermModelInfo_t__FlagEnum : uint32_t
{
	FLAG_TRANSLUCENT = 0x1,
	FLAG_TRANSLUCENT_TWO_PASS = 0x2,
	FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
	FLAG_SOURCE1_IMPORT = 0x8,
	FLAG_MODEL_PART_CHILD = 0x10,
	FLAG_NAV_GEN_NONE = 0x20,
	FLAG_NAV_GEN_HULL = 0x40,
	FLAG_NO_FORCED_FADE = 0x800,
	FLAG_HAS_SKINNED_MESHES = 0x400,
	FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
	FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
	FLAG_NO_ANIM_EVENTS = 0x100000,
	FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
	FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	FLAG_MODEL_DOC = 0x800000,
};

// Alignment: 4
// Size: 0x4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class ModelConfigAttachmentType_t : uint32_t
{
	MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffffffffffff,
	MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
	MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
	MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
	MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x1a
enum class FlexOpCode_t : uint32_t
{
	FLEX_OP_CONST = 0x1,
	FLEX_OP_FETCH1 = 0x2,
	FLEX_OP_FETCH2 = 0x3,
	FLEX_OP_ADD = 0x4,
	FLEX_OP_SUB = 0x5,
	FLEX_OP_MUL = 0x6,
	FLEX_OP_DIV = 0x7,
	FLEX_OP_NEG = 0x8,
	FLEX_OP_EXP = 0x9,
	FLEX_OP_OPEN = 0xa,
	FLEX_OP_CLOSE = 0xb,
	FLEX_OP_COMMA = 0xc,
	FLEX_OP_MAX = 0xd,
	FLEX_OP_MIN = 0xe,
	FLEX_OP_2WAY_0 = 0xf,
	FLEX_OP_2WAY_1 = 0x10,
	FLEX_OP_NWAY = 0x11,
	FLEX_OP_COMBO = 0x12,
	FLEX_OP_DOMINATE = 0x13,
	FLEX_OP_DME_LOWER_EYELID = 0x14,
	FLEX_OP_DME_UPPER_EYELID = 0x15,
	FLEX_OP_SQRT = 0x16,
	FLEX_OP_REMAPVALCLAMPED = 0x17,
	FLEX_OP_SIN = 0x18,
	FLEX_OP_COS = 0x19,
	FLEX_OP_ABS = 0x1a,
};

// Alignment: 4
// Size: 0x4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class AnimVRFinger_t : uint32_t
{
	AnimVrFinger_Thumb = 0x0,
	AnimVrFinger_Index = 0x1,
	AnimVrFinger_Middle = 0x2,
	AnimVrFinger_Ring = 0x3,
	AnimVrFinger_Pinky = 0x4,
};

// Alignment: 4
// Size: 0x4
enum class IKChannelMode : uint32_t
{
	TwoBone = 0x0,
	TwoBone_Translate = 0x1,
	OneBone = 0x2,
	OneBone_Translate = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class EDemoBoneSelectionMode : uint32_t
{
	CaptureAllBones = 0x0,
	CaptureSelectedBones = 0x1,
};

// Alignment: 4
// Size: 0x25
enum class AnimValueSource : uint32_t
{
	MoveHeading = 0x0,
	MoveSpeed = 0x1,
	ForwardSpeed = 0x2,
	StrafeSpeed = 0x3,
	FacingHeading = 0x4,
	ManualFacingHeading = 0x5,
	LookHeading = 0x6,
	LookPitch = 0x7,
	LookDistance = 0x8,
	Parameter = 0x9,
	WayPointHeading = 0xa,
	WayPointDistance = 0xb,
	BoundaryRadius = 0xc,
	TargetMoveHeading = 0xd,
	TargetMoveSpeed = 0xe,
	AccelerationHeading = 0xf,
	AccelerationSpeed = 0x10,
	SlopeHeading = 0x11,
	SlopeAngle = 0x12,
	SlopePitch = 0x13,
	SlopeYaw = 0x14,
	GoalDistance = 0x15,
	AccelerationLeftRight = 0x16,
	AccelerationFrontBack = 0x17,
	RootMotionSpeed = 0x18,
	RootMotionTurnSpeed = 0x19,
	MoveHeadingRelativeToLookHeading = 0x1a,
	MaxMoveSpeed = 0x1b,
	FingerCurl_Thumb = 0x1c,
	FingerCurl_Index = 0x1d,
	FingerCurl_Middle = 0x1e,
	FingerCurl_Ring = 0x1f,
	FingerCurl_Pinky = 0x20,
	FingerSplay_Thumb_Index = 0x21,
	FingerSplay_Index_Middle = 0x22,
	FingerSplay_Middle_Ring = 0x23,
	FingerSplay_Ring_Pinky = 0x24,
};

// Alignment: 4
// Size: 0xd
enum class AnimVectorSource : uint32_t
{
	MoveDirection = 0x0,
	FacingDirection = 0x1,
	LookDirection = 0x2,
	VectorParameter = 0x3,
	WayPointDirection = 0x4,
	Acceleration = 0x5,
	SlopeNormal = 0x6,
	SlopeNormal_WorldSpace = 0x7,
	LookTarget = 0x8,
	LookTarget_WorldSpace = 0x9,
	WayPointPosition = 0xa,
	GoalPosition = 0xb,
	RootMotionVelocity = 0xc,
};

// Alignment: 4
// Size: 0x3
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class StateActionBehavior : uint32_t
{
	STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
	STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
	STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
	STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class FieldNetworkOption : uint32_t
{
	Auto = 0x0,
	ForceEnable = 0x1,
	ForceDisable = 0x2,
};

// Alignment: 4
// Size: 0x8
enum class FootFallTagFoot_t : uint32_t
{
	FOOT1 = 0x0,
	FOOT2 = 0x1,
	FOOT3 = 0x2,
	FOOT4 = 0x3,
	FOOT5 = 0x4,
	FOOT6 = 0x5,
	FOOT7 = 0x6,
	FOOT8 = 0x7,
};

// Alignment: 4
// Size: 0x2
enum class MatterialAttributeTagType_t : uint32_t
{
	MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
	MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1,
};

// Alignment: 1
// Size: 0x3
enum class VelocityMetricMode : uint8_t
{
	DirectionOnly = 0x0,
	MagnitudeOnly = 0x1,
	DirectionAndMagnitude = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
	AimMatrixBlendMode_BoneMask = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class JiggleBoneSimSpace : uint32_t
{
	SimSpace_Local = 0x0,
	SimSpace_Model = 0x1,
	SimSpace_World = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class SolveIKChainAnimNodeDebugSetting : uint32_t
{
	SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
};

// Alignment: 2
// Size: 0x3
enum class AnimScriptType : uint16_t
{
	ANIMSCRIPT_TYPE_INVALID = 0xffffffffffffffff,
	ANIMSCRIPT_FUSE_GENERAL = 0x0,
	ANIMSCRIPT_FUSE_STATEMACHINE = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class BinaryNodeTiming : uint32_t
{
	UseChild1 = 0x0,
	UseChild2 = 0x1,
	SyncChildren = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class BinaryNodeChildOption : uint32_t
{
	Child1 = 0x0,
	Child2 = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class BlendKeyType : uint32_t
{
	BlendKey_UserValue = 0x0,
	BlendKey_Velocity = 0x1,
	BlendKey_Distance = 0x2,
	BlendKey_RemainingDistance = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class ChoiceChangeMethod : uint32_t
{
	OnReset = 0x0,
	OnCycleEnd = 0x1,
	OnResetOrCycleEnd = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class ChoiceBlendMethod : uint32_t
{
	SingleBlendTime = 0x0,
	PerChoiceBlendTimes = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class FootLockSubVisualization : uint32_t
{
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class FootPinningTimingSource : uint32_t
{
	FootMotion = 0x0,
	Tag = 0x1,
	Parameter = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class StepPhase : uint32_t
{
	StepPhase_OnGround = 0x0,
	StepPhase_InAir = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class JumpCorrectionMethod : uint32_t
{
	ScaleMotion = 0x0,
	AddCorrectionDelta = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class SelectorTagBehavior_t : uint32_t
{
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	SelectorTagBehavior_OffWhenFinished = 0x1,
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class StanceOverrideMode : uint32_t
{
	Sequence = 0x0,
	Node = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
	SameTimeAsSource = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class IkTargetType : uint32_t
{
	IkTarget_Attachment = 0x0,
	IkTarget_Bone = 0x1,
	IkTarget_Parameter_ModelSpace = 0x2,
	IkTarget_Parameter_WorldSpace = 0x3,
};

// Alignment: 1
// Size: 0x3
enum class PoseType_t : uint8_t
{
	POSETYPE_STATIC = 0x0,
	POSETYPE_DYNAMIC = 0x1,
	POSETYPE_INVALID = 0xff,
};

// Alignment: 4
// Size: 0x5
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class FacingMode : uint32_t
{
	FacingMode_Manual = 0x0,
	FacingMode_Path = 0x1,
	FacingMode_LookTarget = 0x2,
};

// Alignment: 4
// Size: 0x6
enum class IKSolverType : uint32_t
{
	IKSOLVER_Perlin = 0x0,
	IKSOLVER_TwoBone = 0x1,
	IKSOLVER_Fabrik = 0x2,
	IKSOLVER_DogLeg3Bone = 0x3,
	IKSOLVER_CCD = 0x4,
	IKSOLVER_COUNT = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class IKTargetSource : uint32_t
{
	IKTARGETSOURCE_Bone = 0x0,
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class IKTargetCoordinateSystem : uint32_t
{
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

struct CRangeFloat;
struct AnimationDecodeDebugDumpElement_t;
struct CAnimEncodeDifference;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct CAnimKeyData;
struct CSeqAutoLayerFlag;
struct CSeqMultiFetchFlag;
struct CSeqSeqDescFlag;
struct CSeqMultiFetch;
struct CSeqTransition;
struct VPhysics2ShapeDef_t;
struct VPhysXConstraintParams_t;
struct VPhysXRange_t;
struct PhysFeModelDesc_t;
struct CPhysSurfacePropertiesPhysics;
struct CPhysSurfacePropertiesSoundNames;
struct CPhysSurfacePropertiesAudio;
struct PermModelInfo_t;
struct ModelSkeletonData_t;
struct CModelConfigList;
struct SkeletonBoneBounds_t;
struct CRenderBufferBinding;
struct PackedAABB_t;
struct CDrawCullingData;
struct CRenderSkeleton;
struct CAnimCycle;
struct CFootCycle;
struct CFootCycleDefinition;
struct CFootTrajectories;
struct CAnimGraphSettingsManager;
struct CAnimNodePath;
struct CAnimParamHandle;
struct HSequence;
struct AnimComponentID;
struct AnimScriptHandle;
struct AnimTagID;
struct CAnimInputDamping;
struct CAnimDemoCaptureSettings;
struct CAnimStateMachineUpdater;
struct CMotionSearchDB;
struct CVectorQuantizer;
struct CMotionSearchNode;
struct CProductQuantizer;
struct CParamSpanUpdater;
struct AnimNodeID;
struct CAnimAttachment;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct AnimParamID;
struct AnimStateID;
struct CAnimUpdateNodeRef;
struct TraceSettings_t;
struct CMotionDataSet;
struct CBlendCurve;
struct CPoseHandle;
struct SkeletalInputOpFixedSettings_t;
struct MotionIndex;
struct IKBoneNameAndIndex_t;
struct AimMatrixOpFixedSettings_t;
struct FollowAttachmentSettings_t;
struct FootLockPoseOpFixedSettings;
struct FootPinningPoseOpFixedData_t;
struct HitReactFixedSettings_t;
struct JiggleBoneSettingsList_t;
struct LookAtOpFixedSettings_t;
struct SolveIKChainPoseOpFixedSettings_t;
struct TwoBoneIKSettings_t;

// Alignment: 2
// Size: 0x10
struct MoodAnimation_t
{
public:
	// MPropertyDescription "Name of the animation"
	// MPropertyAttributeEditor "VDataModelAnim( m_sModelName; include_deltas )"
	CUtlString m_sName; // 0x0	
	// MPropertyDescription "Weight of the animation, higher numbers get picked more"
	float m_flWeight; // 0x8	
};

// Alignment: 12
// Size: 0x60
struct MoodAnimationLayer_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Name of the layer"
	CUtlString m_sName; // 0x0	
	// MPropertyFriendlyName "Active When Listening"
	// MPropertyDescription "Sets the mood's animation buckets to be active when the character is listening"
	bool m_bActiveListening; // 0x8	
	// MPropertyFriendlyName "Active When Talking"
	// MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
	bool m_bActiveTalking; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
public:
	// MPropertyDescription "List of animations to choose from"
	CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10	
	// MPropertyDescription "Intensity of the animation"
	// MPropertyAttributeRange "0 1"
	CRangeFloat m_flIntensity; // 0x28	
	// MPropertyDescription "Multiplier of the animation duration"
	CRangeFloat m_flDurationScale; // 0x30	
	// MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
	bool m_bScaleWithInts; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
public:
	// MPropertyDescription "Time before the next animation can start"
	CRangeFloat m_flNextStart; // 0x3c	
	// MPropertyDescription "Time from the start of the mood before an animation can start"
	CRangeFloat m_flStartOffset; // 0x44	
	// MPropertyDescription "Time from the end of the mood when an animation cannot play"
	CRangeFloat m_flEndOffset; // 0x4c	
	// MPropertyDescription "Fade in time of the animation"
	float m_flFadeIn; // 0x54	
	// MPropertyDescription "Fade out time of the animation"
	float m_flFadeOut; // 0x58	
};

// Alignment: 3
// Size: 0x100
class CMoodVData
{
public:
	// MPropertyDescription "Model to get the animation list from"
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0	
	// MPropertyDescription "Type of mood"
	MoodType_t m_nMoodType; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e4[0x4]; // 0xe4
public:
	// MPropertyDescription "Layers for this mood"
	CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xe8	
};

// Alignment: 6
// Size: 0x70
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

// Alignment: 2
// Size: 0x20
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0	
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8	
};

// Alignment: 9
// Size: 0x110
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0	
	matrix3x4a_t m_rootToWorld; // 0x10	
	bool m_bBonesInWorldSpace; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	CUtlVector< uint32 > m_boneSetupMask; // 0x48	
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60	
	CUtlVector< float32 > m_flexControllers; // 0x78	
	AnimationSnapshotType_t m_SnapshotType; // 0x90	
	bool m_bHasDecodeDump; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98	
};

// Alignment: 2
// Size: 0x120
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CUtlString m_modelName; // 0x118	
};

// Alignment: 5
// Size: 0x30
class CAnimBoneDifference
{
public:
	CBufferString m_name; // 0x0	
	CBufferString m_parent; // 0x10	
	Vector m_posError; // 0x20	
	bool m_bHasRotation; // 0x2c	
	bool m_bHasMovement; // 0x2d	
};

// Alignment: 1
// Size: 0x10
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0	
};

// Alignment: 2
// Size: 0x18
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Alignment: 7
// Size: 0xa8
class CAnimEncodeDifference
{
public:
	CUtlVector< CAnimBoneDifference > m_boneArray; // 0x0	
	CUtlVector< CAnimMorphDifference > m_morphArray; // 0x18	
	CUtlVector< CAnimUserDifference > m_userArray; // 0x30	
	CUtlVector< uint8 > m_bHasRotationBitArray; // 0x48	
	CUtlVector< uint8 > m_bHasMovementBitArray; // 0x60	
	CUtlVector< uint8 > m_bHasMorphBitArray; // 0x78	
	CUtlVector< uint8 > m_bHasUserBitArray; // 0x90	
};

// Alignment: 5
// Size: 0x38
class CAnimEventDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nFrame; // 0x8	
	float m_flCycle; // 0xc	
	KeyValues3 m_EventData; // 0x10	
	// MKV3TransferName "m_sOptions"
	CBufferString m_sLegacyOptions; // 0x20	
	CGlobalSymbol m_sEventName; // 0x30	
};

// Alignment: 7
// Size: 0x2c
class CAnimMovement
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

// Alignment: 6
// Size: 0x30
class CAnimLocalHierarchy
{
public:
	CBufferString m_sBone; // 0x0	
	CBufferString m_sNewParent; // 0x10	
	int32_t m_nStartFrame; // 0x20	
	int32_t m_nPeakFrame; // 0x24	
	int32_t m_nTailFrame; // 0x28	
	int32_t m_nEndFrame; // 0x2c	
};

// Alignment: 3
// Size: 0x18
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0	
	int32_t m_nVersion; // 0x10	
	int32_t m_nType; // 0x14	
};

// Alignment: 4
// Size: 0x28
class CAnimFrameSegment
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0	
	uint32_t m_nLocalElementMasks; // 0x4	
	int32_t m_nLocalChannel; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlBinaryBlock m_container; // 0x10	
};

// Alignment: 3
// Size: 0x20
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0	
	int32_t m_nEndFrame; // 0x4	
	CUtlVector< int32 > m_segmentIndexArray; // 0x8	
};

// Alignment: 5
// Size: 0xd8
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0	
	int32_t m_nFrames; // 0x10	
	int32_t m_nFramesPerBlock; // 0x14	
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18	
	CAnimEncodeDifference m_usageDifferences; // 0x30	
};

// Alignment: 8
// Size: 0x8
class CAnimDesc_Flag
{
public:
	bool m_bLooping; // 0x0	
	bool m_bAllZeros; // 0x1	
	bool m_bHidden; // 0x2	
	bool m_bDelta; // 0x3	
	bool m_bLegacyWorldspace; // 0x4	
	bool m_bModelDoc; // 0x5	
	bool m_bImplicitSeqIgnoreDelta; // 0x6	
	bool m_bAnimGraphAdditive; // 0x7	
};

// Alignment: 2
// Size: 0x8
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Alignment: 14
// Size: 0x1b0
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0	
	CAnimDesc_Flag m_flags; // 0x10	
	float fps; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MKV3TransferName "m_pData"
	CAnimEncodedFrames m_Data; // 0x20	
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8	
	CUtlVector< CAnimEventDefinition > m_eventArray; // 0x110	
	CUtlVector< CAnimActivity > m_activityArray; // 0x128	
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140	
	float framestalltime; // 0x158	
	Vector m_vecRootMin; // 0x15c	
	Vector m_vecRootMax; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x178	
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x190	
	CAnimSequenceParams m_sequenceParams; // 0x1a8	
};

// Alignment: 4
// Size: 0x20
class CAnimActivity
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nActivity; // 0x10	
	int32_t m_nFlags; // 0x14	
	int32_t m_nWeight; // 0x18	
};

// Alignment: 5
// Size: 0x70
class CAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_name; // 0x10	
	CUtlVector< CAnimDesc > m_animArray; // 0x20	
	CUtlVector< CAnimDecoder > m_decoderArray; // 0x38	
	int32_t m_nMaxUniqueFrameIndex; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58	
};

// Alignment: 7
// Size: 0x48
class CAnimBone
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_parent; // 0x10	
	Vector m_pos; // 0x14	
	QuaternionStorage m_quat; // 0x20	
	float m_scale; // 0x30	
	QuaternionStorage m_qAlignment; // 0x34	
	int32_t m_flags; // 0x44	
};

// Alignment: 2
// Size: 0x18
class CAnimUser
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Alignment: 9
// Size: 0x90
class CAnimDataChannelDesc
{
public:
	CBufferString m_szChannelClass; // 0x0	
	CBufferString m_szVariableName; // 0x10	
	int32_t m_nFlags; // 0x20	
	int32_t m_nType; // 0x24	
	CBufferString m_szGrouping; // 0x28	
	CBufferString m_szDescription; // 0x38	
	CUtlVector< CBufferString > m_szElementNameArray; // 0x48	
	CUtlVector< int32 > m_nElementIndexArray; // 0x60	
	CUtlVector< uint32 > m_nElementMaskArray; // 0x78	
};

// Alignment: 6
// Size: 0x78
class CAnimKeyData
{
public:
	CBufferString m_name; // 0x0	
	CUtlVector< CAnimBone > m_boneArray; // 0x10	
	CUtlVector< CAnimUser > m_userArray; // 0x28	
	CUtlVector< CBufferString > m_morphArray; // 0x40	
	int32_t m_nChannelElements; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60	
};

// Alignment: 7
// Size: 0x130
class CAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	uint32_t m_nFlags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CBufferString m_name; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
public:
	// MKV3TransferName "m_localHAnimArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60	
	// MKV3TransferName "m_includedGroupArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78	
	// MKV3TransferName "m_directHSeqGroup"
	CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90	
	CAnimKeyData m_decodeKey; // 0x98	
	CUtlVector< CBufferString > m_szScripts; // 0x110	
};

// Alignment: 8
// Size: 0x8
class CSeqAutoLayerFlag
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

// Alignment: 7
// Size: 0x1c
class CSeqAutoLayer
{
public:
	int16_t m_nLocalReference; // 0x0	
	int16_t m_nLocalPose; // 0x2	
	CSeqAutoLayerFlag m_flags; // 0x4	
	float m_start; // 0xc	
	float m_peak; // 0x10	
	float m_tail; // 0x14	
	float m_end; // 0x18	
};

// Alignment: 4
// Size: 0xc
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0	
	float m_flAngleWeight; // 0x4	
	int16_t m_nLocalBone; // 0x8	
	bool m_bBonesOrientedAlongPositiveX; // 0xa	
};

// Alignment: 5
// Size: 0x60
class CSeqBoneMaskList
{
public:
	CBufferString m_sName; // 0x0	
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10	
	CUtlVector< float32 > m_flBoneWeightArray; // 0x28	
	float m_flDefaultMorphCtrlWeight; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48	
};

// Alignment: 5
// Size: 0x50
class CSeqScaleSet
{
public:
	CBufferString m_sName; // 0x0	
	bool m_bRootOffset; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	Vector m_vRootOffset; // 0x14	
	CUtlVector< int16 > m_nLocalBoneArray; // 0x20	
	CUtlVector< float32 > m_flBoneScaleArray; // 0x38	
};

// Alignment: 6
// Size: 0x6
class CSeqMultiFetchFlag
{
public:
	bool m_bRealtime; // 0x0	
	bool m_bCylepose; // 0x1	
	bool m_b0D; // 0x2	
	bool m_b1D; // 0x3	
	bool m_b2D; // 0x4	
	bool m_b2D_TRI; // 0x5	
};

// Alignment: 8
// Size: 0x68
class CSeqMultiFetch
{
public:
	CSeqMultiFetchFlag m_flags; // 0x0	
	CUtlVector< int16 > m_localReferenceArray; // 0x8	
	int32_t m_nGroupSize[2]; // 0x20	
	int32_t m_nLocalPose[2]; // 0x28	
	CUtlVector< float32 > m_poseKeyArray0; // 0x30	
	CUtlVector< float32 > m_poseKeyArray1; // 0x48	
	int32_t m_nLocalCyclePoseParameter; // 0x60	
	bool m_bCalculatePoseParameters; // 0x64	
};

// Alignment: 11
// Size: 0xb
class CSeqSeqDescFlag
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
	bool m_bModelDoc; // 0xa	
};

// Alignment: 2
// Size: 0x8
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Alignment: 11
// Size: 0x118
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001b[0x5]; // 0x1b
public:
	CSeqMultiFetch m_fetch; // 0x20	
	int32_t m_nLocalWeightlist; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90	
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xa8	
	CSeqTransition m_transition; // 0xc0	
	KeyValues3 m_SequenceKeys; // 0xc8	
	// MKV3TransferName "m_keyValueText"
	CBufferString m_LegacyKeyValueText; // 0xd8	
	CUtlVector< CAnimActivity > m_activityArray; // 0xe8	
	CUtlVector< CFootMotion > m_footMotion; // 0x100	
};

// Alignment: 6
// Size: 0x40
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nLocalBaseReference; // 0x24	
	int16_t m_nLocalBoneMask; // 0x26	
	CUtlVector< CAnimActivity > m_activityArray; // 0x28	
};

// Alignment: 9
// Size: 0x18
class CSeqCmdLayer
{
public:
	int16_t m_cmd; // 0x0	
	int16_t m_nLocalReference; // 0x2	
	int16_t m_nLocalBonemask; // 0x4	
	int16_t m_nDstResult; // 0x6	
	int16_t m_nSrcResult; // 0x8	
	bool m_bSpline; // 0xa	
private:
	[[maybe_unused]] uint8_t __pad000b[0x1]; // 0xb
public:
	float m_flVar1; // 0xc	
	float m_flVar2; // 0x10	
	int16_t m_nLineNumber; // 0x14	
};

// Alignment: 8
// Size: 0x40
class CSeqPoseSetting
{
public:
	CBufferString m_sPoseParameter; // 0x0	
	CBufferString m_sAttachment; // 0x10	
	CBufferString m_sReferenceSequence; // 0x20	
	float m_flValue; // 0x30	
	bool m_bX; // 0x34	
	bool m_bY; // 0x35	
	bool m_bZ; // 0x36	
private:
	[[maybe_unused]] uint8_t __pad0037[0x1]; // 0x37
public:
	int32_t m_eType; // 0x38	
};

// Alignment: 12
// Size: 0x90
class CSeqCmdSeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nFrameRangeSequence; // 0x24	
	int16_t m_nFrameCount; // 0x26	
	float m_flFPS; // 0x28	
	int16_t m_nSubCycles; // 0x2c	
	int16_t m_numLocalResults; // 0x2e	
	CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30	
	CUtlVector< CAnimEventDefinition > m_eventArray; // 0x48	
	CUtlVector< CAnimActivity > m_activityArray; // 0x60	
	CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78	
};

// Alignment: 5
// Size: 0x20
class CSeqPoseParamDesc
{
public:
	CBufferString m_sName; // 0x0	
	float m_flStart; // 0x10	
	float m_flEnd; // 0x14	
	float m_flLoop; // 0x18	
	bool m_bLooping; // 0x1c	
};

// Alignment: 14
// Size: 0x138
class CSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_sName; // 0x10	
	uint32_t m_nFlags; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< CBufferString > m_localSequenceNameArray; // 0x28	
	CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // 0x40	
	CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // 0x58	
	CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // 0x70	
	CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // 0x88	
	CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // 0xa0	
	CUtlVector< CSeqScaleSet > m_localScaleSetArray; // 0xb8	
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xd0	
	CBufferString m_localNodeName; // 0xe8	
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xf8	
	KeyValues3 m_keyValues; // 0x110	
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x120	
};

// Alignment: 17
// Size: 0x1a0
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
private:
	[[maybe_unused]] uint8_t __pad00e0[0x18]; // 0xe0
public:
	CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xf8	
	CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // 0x110	
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128	
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140	
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158	
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170	
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188	
};

// Alignment: 1
// Size: 0x4
class HSequence
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("animationsystem.dll")->FindDeclaredClass("HSequence")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x1
class CAnimEnum
{
public:
	uint8_t m_value; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimNodeOutputID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimParamID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimTagID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimComponentID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x4
class AnimScriptHandle
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 5
// Size: 0x80
class CAnimAttachment
{
public:
	Quaternion m_influenceRotations[3]; // 0x0	
	VectorAligned m_influenceOffsets[3]; // 0x30	
	int32_t m_influenceIndices[3]; // 0x60	
	float m_influenceWeights[3]; // 0x6c	
	uint8_t m_numInfluences; // 0x78	
};

// Alignment: 5
// Size: 0x78
struct VPhysics2ShapeDef_t
{
public:
	CUtlVector< RnSphereDesc_t > m_spheres; // 0x0	
	CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18	
	CUtlVector< RnHullDesc_t > m_hulls; // 0x30	
	CUtlVector< RnMeshDesc_t > m_meshes; // 0x48	
	CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60	
};

// Alignment: 10
// Size: 0xa0
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0	
	float m_flMass; // 0x4	
	VPhysics2ShapeDef_t m_rnShape; // 0x8	
	uint16_t m_nCollisionAttributeIndex; // 0x80	
	uint16_t m_nReserved; // 0x82	
	float m_flInertiaScale; // 0x84	
	float m_flLinearDamping; // 0x88	
	float m_flAngularDamping; // 0x8c	
	bool m_bOverrideMassCenter; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	Vector m_vMassCenterOverride; // 0x94	
};

// Alignment: 8
// Size: 0xa0
struct VPhysXCollisionAttributes_t
{
public:
	uint32_t m_CollisionGroup; // 0x0	
	CUtlVector< uint32 > m_InteractAs; // 0x8	
	CUtlVector< uint32 > m_InteractWith; // 0x20	
	CUtlVector< uint32 > m_InteractExclude; // 0x38	
	CUtlString m_CollisionGroupString; // 0x50	
	CUtlVector< CUtlString > m_InteractAsStrings; // 0x58	
	CUtlVector< CUtlString > m_InteractWithStrings; // 0x70	
	CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88	
};

// Alignment: 2
// Size: 0x8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0	
	float m_flMax; // 0x4	
};

// Alignment: 46
// Size: 0xf8
struct VPhysXConstraintParams_t
{
public:
	int8_t m_nType; // 0x0	
	int8_t m_nTranslateMotion; // 0x1	
	int8_t m_nRotateMotion; // 0x2	
	int8_t m_nFlags; // 0x3	
	Vector m_anchor[2]; // 0x4	
	QuaternionStorage m_axes[2]; // 0x1c	
	float m_maxForce; // 0x3c	
	float m_maxTorque; // 0x40	
	float m_linearLimitValue; // 0x44	
	float m_linearLimitRestitution; // 0x48	
	float m_linearLimitSpring; // 0x4c	
	float m_linearLimitDamping; // 0x50	
	float m_twistLowLimitValue; // 0x54	
	float m_twistLowLimitRestitution; // 0x58	
	float m_twistLowLimitSpring; // 0x5c	
	float m_twistLowLimitDamping; // 0x60	
	float m_twistHighLimitValue; // 0x64	
	float m_twistHighLimitRestitution; // 0x68	
	float m_twistHighLimitSpring; // 0x6c	
	float m_twistHighLimitDamping; // 0x70	
	float m_swing1LimitValue; // 0x74	
	float m_swing1LimitRestitution; // 0x78	
	float m_swing1LimitSpring; // 0x7c	
	float m_swing1LimitDamping; // 0x80	
	float m_swing2LimitValue; // 0x84	
	float m_swing2LimitRestitution; // 0x88	
	float m_swing2LimitSpring; // 0x8c	
	float m_swing2LimitDamping; // 0x90	
	Vector m_goalPosition; // 0x94	
	QuaternionStorage m_goalOrientation; // 0xa0	
	Vector m_goalAngularVelocity; // 0xb0	
	float m_driveSpringX; // 0xbc	
	float m_driveSpringY; // 0xc0	
	float m_driveSpringZ; // 0xc4	
	float m_driveDampingX; // 0xc8	
	float m_driveDampingY; // 0xcc	
	float m_driveDampingZ; // 0xd0	
	float m_driveSpringTwist; // 0xd4	
	float m_driveSpringSwing; // 0xd8	
	float m_driveSpringSlerp; // 0xdc	
	float m_driveDampingTwist; // 0xe0	
	float m_driveDampingSwing; // 0xe4	
	float m_driveDampingSlerp; // 0xe8	
	int32_t m_solverIterationCount; // 0xec	
	float m_projectionLinearTolerance; // 0xf0	
	float m_projectionAngularTolerance; // 0xf4	
};

// Alignment: 4
// Size: 0x100
struct VPhysXConstraint2_t
{
public:
	uint32_t m_nFlags; // 0x0	
	uint16_t m_nParent; // 0x4	
	uint16_t m_nChild; // 0x6	
	VPhysXConstraintParams_t m_params; // 0x8	
};

// Alignment: 24
// Size: 0xb0
struct VPhysXJoint_t
{
public:
	uint16_t m_nType; // 0x0	
	uint16_t m_nBody1; // 0x2	
	uint16_t m_nBody2; // 0x4	
	uint16_t m_nFlags; // 0x6	
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CTransform m_Frame1; // 0x10	
	CTransform m_Frame2; // 0x30	
	bool m_bEnableCollision; // 0x50	
	bool m_bEnableLinearLimit; // 0x51	
private:
	[[maybe_unused]] uint8_t __pad0052[0x2]; // 0x52
public:
	VPhysXRange_t m_LinearLimit; // 0x54	
	bool m_bEnableLinearMotor; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	Vector m_vLinearTargetVelocity; // 0x60	
	float m_flMaxForce; // 0x6c	
	bool m_bEnableSwingLimit; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	VPhysXRange_t m_SwingLimit; // 0x74	
	bool m_bEnableTwistLimit; // 0x7c	
private:
	[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
public:
	VPhysXRange_t m_TwistLimit; // 0x80	
	bool m_bEnableAngularMotor; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad0089[0x3]; // 0x89
public:
	Vector m_vAngularTargetVelocity; // 0x8c	
	float m_flMaxTorque; // 0x98	
	float m_flLinearFrequency; // 0x9c	
	float m_flLinearDampingRatio; // 0xa0	
	float m_flAngularFrequency; // 0xa4	
	float m_flAngularDampingRatio; // 0xa8	
	float m_flFriction; // 0xac	
};

// Alignment: 6
// Size: 0x90
struct PhysSoftbodyDesc_t
{
public:
	CUtlVector< uint32 > m_ParticleBoneHash; // 0x0	
	CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18	
	CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30	
	CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48	
	CUtlVector< CTransform > m_InitPose; // 0x60	
	CUtlVector< CUtlString > m_ParticleBoneName; // 0x78	
};

// Alignment: 16
// Size: 0x138
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0	
	uint16_t m_nRefCounter; // 0x2	
private:
	[[maybe_unused]] uint8_t __pad0004[0x4]; // 0x4
public:
	CUtlVector< uint32 > m_bonesHash; // 0x8	
	CUtlVector< CUtlString > m_boneNames; // 0x20	
	CUtlVector< uint16 > m_indexNames; // 0x38	
	CUtlVector< uint16 > m_indexHash; // 0x50	
	CUtlVector< matrix3x4a_t > m_bindPose; // 0x68	
	CUtlVector< VPhysXBodyPart_t > m_parts; // 0x80	
	CUtlVector< VPhysXConstraint2_t > m_constraints2; // 0x98	
	CUtlVector< VPhysXJoint_t > m_joints; // 0xb0	
	PhysFeModelDesc_t* m_pFeModel; // 0xc8	
	CUtlVector< uint16 > m_boneParents; // 0xd0	
	CUtlVector< uint32 > m_surfacePropertyHashes; // 0xe8	
	CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x100	
	CUtlVector< CUtlString > m_debugPartNames; // 0x118	
	CUtlString m_embeddedKeyvalues; // 0x130	
};

// Alignment: 7
// Size: 0x1c
class CPhysSurfacePropertiesPhysics
{
public:
	// MKV3TransferName "friction"
	float m_friction; // 0x0	
	// MKV3TransferName "elasticity"
	float m_elasticity; // 0x4	
	// MKV3TransferName "density"
	float m_density; // 0x8	
	// MKV3TransferName "thickness"
	float m_thickness; // 0xc	
	// MKV3TransferName "softcontactfrequency"
	float m_softContactFrequency; // 0x10	
	// MKV3TransferName "softcontactdampingratio"
	float m_softContactDampingRatio; // 0x14	
	// MKV3TransferName "wheeldrag"
	float m_wheelDrag; // 0x18	
};

// Alignment: 8
// Size: 0x20
class CPhysSurfacePropertiesAudio
{
public:
	// MKV3TransferName "audioreflectivity"
	float m_reflectivity; // 0x0	
	// MKV3TransferName "audiohardnessfactor"
	float m_hardnessFactor; // 0x4	
	// MKV3TransferName "audioroughnessfactor"
	float m_roughnessFactor; // 0x8	
	// MKV3TransferName "scrapeRoughThreshold"
	float m_roughThreshold; // 0xc	
	// MKV3TransferName "impactHardThreshold"
	float m_hardThreshold; // 0x10	
	// MKV3TransferName "audioHardMinVelocity"
	float m_hardVelocityThreshold; // 0x14	
	// MKV3TransferName "staticImpactVolume"
	float m_flStaticImpactVolume; // 0x18	
	// MKV3TransferName "occlusionFactor"
	float m_flOcclusionFactor; // 0x1c	
};

// Alignment: 8
// Size: 0x40
class CPhysSurfacePropertiesSoundNames
{
public:
	// MKV3TransferName "impactsoft"
	CUtlString m_impactSoft; // 0x0	
	// MKV3TransferName "impacthard"
	CUtlString m_impactHard; // 0x8	
	// MKV3TransferName "scrapesmooth"
	CUtlString m_scrapeSmooth; // 0x10	
	// MKV3TransferName "scraperough"
	CUtlString m_scrapeRough; // 0x18	
	// MKV3TransferName "bulletimpact"
	CUtlString m_bulletImpact; // 0x20	
	// MKV3TransferName "rolling"
	CUtlString m_rolling; // 0x28	
	// MKV3TransferName "break"
	CUtlString m_break; // 0x30	
	// MKV3TransferName "strain"
	CUtlString m_strain; // 0x38	
};

// Alignment: 8
// Size: 0xa8
class CPhysSurfaceProperties
{
public:
	// MKV3TransferName "surfacePropertyName"
	CUtlString m_name; // 0x0	
	uint32_t m_nameHash; // 0x8	
	uint32_t m_baseNameHash; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MKV3TransferName "hidden"
	bool m_bHidden; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	// MKV3TransferName "description"
	CUtlString m_description; // 0x20	
	// MKV3TransferName "physics"
	CPhysSurfacePropertiesPhysics m_physics; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MKV3TransferName "audiosounds"
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48	
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x88	
};

// Alignment: 1
// Size: 0x18
class CVPhysXSurfacePropertiesList
{
public:
	// MKV3TransferName "SurfacePropertiesList"
	CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0	
};

// Alignment: 2
// Size: 0x20
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8	
};

// Alignment: 7
// Size: 0xa8
struct ModelSkeletonData_t
{
public:
	CUtlVector< CUtlString > m_boneName; // 0x0	
	CUtlVector< int16 > m_nParent; // 0x18	
	CUtlVector< float32 > m_boneSphere; // 0x30	
	CUtlVector< uint32 > m_nFlag; // 0x48	
	CUtlVector< Vector > m_bonePosParent; // 0x60	
	CUtlVector< QuaternionStorage > m_boneRotParent; // 0x78	
	CUtlVector< float32 > m_boneScaleParent; // 0x90	
};

// Alignment: 10
// Size: 0x58
struct PermModelInfo_t
{
public:
	uint32_t m_nFlags; // 0x0	
	Vector m_vHullMin; // 0x4	
	Vector m_vHullMax; // 0x10	
	Vector m_vViewMin; // 0x1c	
	Vector m_vViewMax; // 0x28	
	float m_flMass; // 0x34	
	Vector m_vEyePosition; // 0x38	
	float m_flMaxEyeDeflection; // 0x44	
	CUtlString m_sSurfaceProperty; // 0x48	
	CUtlString m_keyValueText; // 0x50	
};

// Alignment: 4
// Size: 0x40
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0	
	CUtlString m_Name; // 0x20	
	int32_t m_nParent; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30	
};

// Alignment: 5
// Size: 0x20
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0	
	CUtlString m_flexController; // 0x8	
	uint32_t m_flexControllerToken; // 0x10	
	float m_flMin; // 0x14	
	float m_flMax; // 0x18	
};

// Alignment: 3
// Size: 0x28
struct ModelBoneFlexDriver_t
{
public:
	CUtlString m_boneName; // 0x0	
	uint32_t m_boneNameToken; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10	
};

// Alignment: 2
// Size: 0x10
struct PermModelDataAnimatedMaterialAttribute_t
{
public:
	CUtlString m_AttributeName; // 0x0	
	int32_t m_nNumChannels; // 0x8	
};

// Alignment: 23
// Size: 0x2c8
struct PermModelData_t
{
public:
	CUtlString m_name; // 0x0	
	PermModelInfo_t m_modelInfo; // 0x8	
	CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60	
	CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78	
	CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90	
	CUtlVector< uint64 > m_refPhysGroupMasks; // 0xa8	
	CUtlVector< uint8 > m_refLODGroupMasks; // 0xc0	
	CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xd8	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xf0	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108	
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120	
	CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138	
	CUtlVector< CUtlString > m_meshGroups; // 0x150	
	CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168	
	uint64_t m_nDefaultMeshGroupMask; // 0x180	
	ModelSkeletonData_t m_modelSkeleton; // 0x188	
	CUtlVector< int16 > m_remappingTable; // 0x230	
	CUtlVector< uint16 > m_remappingTableStarts; // 0x248	
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x260	
	CModelConfigList* m_pModelConfigList; // 0x278	
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x280	
	CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x298	
	CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x2b0	
};

// Alignment: 1
// Size: 0x1
struct AttachmentHandle_t
{
public:
	uint8_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("animationsystem.dll")->FindDeclaredClass("AttachmentHandle_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x48
class CModelConfigElement
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_ElementName; // 0x8	
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10	
};

// Alignment: 14
// Size: 0xe8
class CModelConfigElement_AttachedModel : public CModelConfigElement
{
public:
	CUtlString m_InstanceName; // 0x48	
	CUtlString m_EntityClass; // 0x50	
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x58	
	Vector m_vOffset; // 0x60	
	QAngle m_aAngOffset; // 0x6c	
	CUtlString m_AttachmentName; // 0x78	
	CUtlString m_LocalAttachmentOffsetName; // 0x80	
	ModelConfigAttachmentType_t m_AttachmentType; // 0x88	
	bool m_bBoneMergeFlex; // 0x8c	
	bool m_bUserSpecifiedColor; // 0x8d	
	bool m_bUserSpecifiedMaterialGroup; // 0x8e	
	bool m_bAcceptParentMaterialDrivenDecals; // 0x8f	
	CUtlString m_BodygroupOnOtherModels; // 0x90	
	CUtlString m_MaterialGroupOnOtherModels; // 0x98	
};

// Alignment: 1
// Size: 0x60
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
};

// Alignment: 2
// Size: 0x80
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
	CUtlVector< float32 > m_ChoiceWeights; // 0x60	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48	
};

// Alignment: 1
// Size: 0x60
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48	
};

// Alignment: 2
// Size: 0x58
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48	
	int32_t m_nChoice; // 0x50	
};

// Alignment: 2
// Size: 0x58
class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48	
	int32_t m_nChoice; // 0x50	
};

// Alignment: 2
// Size: 0x60
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48	
	KeyValues3 m_Args; // 0x50	
};

// Alignment: 3
// Size: 0x28
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0	
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8	
	bool m_bTopLevel; // 0x20	
};

// Alignment: 3
// Size: 0x20
class CModelConfigList
{
public:
	bool m_bHideMaterialGroupInTools; // 0x0	
	bool m_bHideRenderColorInTools; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
public:
	CUtlVector< CModelConfig* > m_Configs; // 0x8	
};

// Alignment: 2
// Size: 0x18
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0	
	uint32_t m_nBindOffsetBytes; // 0x10	
};

// Alignment: 2
// Size: 0x18
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0	
	Vector m_vecSize; // 0xc	
};

// Alignment: 5
// Size: 0x60
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0	
	CUtlString m_parentName; // 0x8	
	matrix3x4_t m_invBindPose; // 0x10	
	SkeletonBoneBounds_t m_bbox; // 0x40	
	float m_flSphereRadius; // 0x58	
};

// Alignment: 3
// Size: 0x50
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0	
	CUtlVector< int32 > m_boneParents; // 0x30	
	int32_t m_nBoneWeightCount; // 0x48	
};

// Alignment: 3
// Size: 0x10
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0	
	int8_t m_ConeAxis[3]; // 0xc	
	int8_t m_ConeCutoff; // 0xf	
};

// Alignment: 12
// Size: 0xe8
class CMaterialDrawDescriptor
{
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x0	
	int32_t m_nBaseVertex; // 0x4	
	int32_t m_nVertexCount; // 0x8	
	int32_t m_nStartIndex; // 0xc	
	int32_t m_nIndexCount; // 0x10	
	float m_flUvDensity; // 0x14	
	Vector m_vTintColor; // 0x18	
	float m_flAlpha; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	uint32_t m_nFirstMeshlet; // 0x2c	
	uint16_t m_nNumMeshlets; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x86]; // 0x32
public:
	CRenderBufferBinding m_indexBuffer; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x10]; // 0xd0
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xe0	
};

// Alignment: 2
// Size: 0x18
class CMeshletDescriptor
{
public:
	PackedAABB_t m_PackedAABB; // 0x0	
	CDrawCullingData m_CullingData; // 0x8	
};

// Alignment: 6
// Size: 0x78
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18	
	CUtlVector< AABB_t > m_drawBounds; // 0x30	
	CUtlVector< CMeshletDescriptor > m_meshlets; // 0x48	
	Vector4D m_vTintColor; // 0x60	
};

// Alignment: 8
// Size: 0x90
class CAttachment
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_influenceNames[3]; // 0x8	
	Quaternion m_vInfluenceRotations[3]; // 0x20	
	Vector m_vInfluenceOffsets[3]; // 0x50	
	float m_influenceWeights[3]; // 0x74	
	bool m_bInfluenceRootTransform[3]; // 0x80	
	uint8_t m_nInfluences; // 0x83	
	bool m_bIgnoreRotation; // 0x84	
};

// Alignment: 13
// Size: 0x70
class CHitBox
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_sSurfaceProperty; // 0x8	
	CUtlString m_sBoneName; // 0x10	
	Vector m_vMinBounds; // 0x18	
	Vector m_vMaxBounds; // 0x24	
	float m_flShapeRadius; // 0x30	
	uint32_t m_nBoneNameHash; // 0x34	
	int32_t m_nGroupId; // 0x38	
	uint8_t m_nShapeType; // 0x3c	
	bool m_bTranslationOnly; // 0x3d	
private:
	[[maybe_unused]] uint8_t __pad003e[0x2]; // 0x3e
public:
	uint32_t m_CRC; // 0x40	
	Color m_cRenderColor; // 0x44	
	uint16_t m_nHitBoxIndex; // 0x48	
};

// Alignment: 4
// Size: 0x30
class CHitBoxSet
{
public:
	CUtlString m_name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHitBox > m_HitBoxes; // 0x10	
	CUtlString m_SourceFilename; // 0x28	
};

// Alignment: 1
// Size: 0x18
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0	
};

// Alignment: 3
// Size: 0x1e0
class CRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10	
	CUtlVector< CBaseConstraint* > m_constraints; // 0xa0	
	CRenderSkeleton m_skeleton; // 0xb8	
};

// Alignment: 6
// Size: 0x60
class CConstraintTarget
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	Quaternion m_qOffset; // 0x20	
	Vector m_vOffset; // 0x30	
	uint32_t m_nBoneHash; // 0x3c	
	CUtlString m_sName; // 0x40	
	float m_flWeight; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0xd]; // 0x4c
public:
	bool m_bIsAttachment; // 0x59	
};

// Alignment: 5
// Size: 0x60
class CConstraintSlave
{
public:
	Quaternion m_qBaseOrientation; // 0x0	
	Vector m_vBasePosition; // 0x10	
	uint32_t m_nBoneHash; // 0x1c	
	float m_flWeight; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlString m_sName; // 0x28	
};

// Alignment: 0
// Size: 0x28
class CBoneConstraintBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x70
class CBaseConstraint : public CBoneConstraintBase
{
public:
	CUtlString m_name; // 0x28	
	Vector m_vUpVector; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	CUtlVector< CConstraintSlave > m_slaves; // 0x40	
	CUtlVector< CConstraintTarget > m_targets; // 0x58	
};

// Alignment: 0
// Size: 0x70
class CPointConstraint : public CBaseConstraint
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x70
class COrientConstraint : public CBaseConstraint
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x90
class CAimConstraint : public CBaseConstraint
{
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
};

// Alignment: 3
// Size: 0xa0
class CTwistConstraint : public CBaseConstraint
{
public:
	bool m_bInverse; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0xf]; // 0x71
public:
	Quaternion m_qParentBindRotation; // 0x80	
	Quaternion m_qChildBindRotation; // 0x90	
};

// Alignment: 2
// Size: 0xa0
class CTiltTwistConstraint : public CBaseConstraint
{
public:
	int32_t m_nTargetAxis; // 0x70	
	int32_t m_nSlaveAxis; // 0x74	
};

// Alignment: 4
// Size: 0x90
class CMorphConstraint : public CBaseConstraint
{
public:
	CUtlString m_sTargetMorph; // 0x70	
	int32_t m_nSlaveChannel; // 0x78	
	float m_flMin; // 0x7c	
	float m_flMax; // 0x80	
};

// Alignment: 0
// Size: 0x70
class CParentConstraint : public CBaseConstraint
{
public:
	// No members available
};

// Alignment: 5
// Size: 0xa8
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28	
	CUtlString m_sAttachmentName; // 0x30	
	CUtlVector< CUtlString > m_outputMorph; // 0x38	
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50	
	bool m_bClamp; // 0x68	
};

// Alignment: 2
// Size: 0x28
struct CBoneConstraintPoseSpaceMorph__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< float32 > m_outputWeightList; // 0x10	
};

// Alignment: 1
// Size: 0x98
class CBoneConstraintPoseSpaceBone : public CBaseConstraint
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70	
};

// Alignment: 2
// Size: 0x28
struct CBoneConstraintPoseSpaceBone__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< CTransform > m_outputTransformList; // 0x10	
};

// Alignment: 4
// Size: 0x60
class CBoneConstraintDotToMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28	
	CUtlString m_sTargetBoneName; // 0x30	
	CUtlString m_sMorphChannelName; // 0x38	
	float m_flRemap[4]; // 0x40	
};

// Alignment: 2
// Size: 0x8
class CFlexOp
{
public:
	FlexOpCode_t m_OpCode; // 0x0	
	int32_t m_Data; // 0x4	
};

// Alignment: 2
// Size: 0x20
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0	
	CUtlVector< CFlexOp > m_FlexOps; // 0x8	
};

// Alignment: 1
// Size: 0x8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0	
};

// Alignment: 4
// Size: 0x18
class CFlexController
{
public:
	CUtlString m_szName; // 0x0	
	CUtlString m_szType; // 0x8	
	float min; // 0x10	
	float max; // 0x14	
};

// Alignment: 4
// Size: 0x38
class CMorphBundleData
{
public:
	float m_flULeftSrc; // 0x0	
	float m_flVTopSrc; // 0x4	
	CUtlVector< float32 > m_offsets; // 0x8	
	CUtlVector< float32 > m_ranges; // 0x20	
};

// Alignment: 5
// Size: 0x28
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0	
	int16_t m_nYTopDst; // 0x2	
	float m_flUWidthSrc; // 0x4	
	float m_flVHeightSrc; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10	
};

// Alignment: 2
// Size: 0x20
class CMorphData
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8	
};

// Alignment: 8
// Size: 0x98
class CMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int32_t m_nWidth; // 0x10	
	int32_t m_nHeight; // 0x14	
	CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x18	
	CUtlVector< CMorphData > m_morphDatas; // 0x30	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x48	
	CUtlVector< CFlexDesc > m_FlexDesc; // 0x50	
	CUtlVector< CFlexController > m_FlexControllers; // 0x68	
	CUtlVector< CFlexRule > m_FlexRules; // 0x80	
};

// Alignment: 5
// Size: 0x28
class CAnimFoot
{
public:
	CUtlString m_name; // 0x0	
	Vector m_vBallOffset; // 0x8	
	Vector m_vHeelOffset; // 0x14	
	int32_t m_ankleBoneIndex; // 0x20	
	int32_t m_toeBoneIndex; // 0x24	
};

// Alignment: 8
// Size: 0xd0
class CAnimSkeleton
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CTransform > m_localSpaceTransforms; // 0x10	
	CUtlVector< CTransform > m_modelSpaceTransforms; // 0x28	
	CUtlVector< CUtlString > m_boneNames; // 0x40	
	CUtlVector< CUtlVector< int32 > > m_children; // 0x58	
	CUtlVector< int32 > m_parents; // 0x70	
	CUtlVector< CAnimFoot > m_feet; // 0x88	
	CUtlVector< CUtlString > m_morphNames; // 0xa0	
	CUtlVector< int32 > m_lodBoneCounts; // 0xb8	
};

// Alignment: 9
// Size: 0x40
class CFootDefinition
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_ankleBoneName; // 0x8	
	CUtlString m_toeBoneName; // 0x10	
	Vector m_vBallOffset; // 0x18	
	Vector m_vHeelOffset; // 0x24	
	float m_flFootLength; // 0x30	
	float m_flBindPoseDirectionMS; // 0x34	
	float m_flTraceHeight; // 0x38	
	float m_flTraceRadius; // 0x3c	
};

// Alignment: 1
// Size: 0x4
class CCycleBase
{
public:
	float m_flCycle; // 0x0	
};

// Alignment: 0
// Size: 0x4
class CAnimCycle : public CCycleBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4
class CFootCycle : public CCycleBase
{
public:
	// No members available
};

// Alignment: 9
// Size: 0x3c
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0	
	Vector m_vMidpointPositionMS; // 0xc	
	float m_flStanceDirectionMS; // 0x18	
	Vector m_vToStrideStartPos; // 0x1c	
	CAnimCycle m_stanceCycle; // 0x28	
	CFootCycle m_footLiftCycle; // 0x2c	
	CFootCycle m_footOffCycle; // 0x30	
	CFootCycle m_footStrikeCycle; // 0x34	
	CFootCycle m_footLandCycle; // 0x38	
};

// Alignment: 3
// Size: 0x14
class CFootTrajectory
{
public:
	Vector m_vOffset; // 0x0	
	float m_flRotationOffset; // 0xc	
	float m_flProgression; // 0x10	
	
	// Static fields:
	static CFootTrajectory &Get_Identity(){return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("animationsystem.dll")->FindDeclaredClass("CFootTrajectory")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x18
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0	
};

// Alignment: 2
// Size: 0x58
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0	
	CFootTrajectories m_trajectories; // 0x40	
};

// Alignment: 3
// Size: 0x28
class CFootMotion
{
public:
	CUtlVector< CFootStride > m_strides; // 0x0	
	CUtlString m_name; // 0x18	
	bool m_bAdditive; // 0x20	
};

// Alignment: 2
// Size: 0x8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0	
	float m_flFingerWeight; // 0x4	
};

// Alignment: 7
// Size: 0x38
class CFingerBone
{
public:
	CUtlString m_boneName; // 0x0	
	Vector m_hingeAxis; // 0x8	
	Vector m_vCapsulePos1; // 0x14	
	Vector m_vCapsulePos2; // 0x20	
	float m_flMinAngle; // 0x2c	
	float m_flMaxAngle; // 0x30	
	float m_flRadius; // 0x34	
};

// Alignment: 10
// Size: 0x70
class CFingerChain
{
public:
	CUtlVector< CFingerSource > m_targets; // 0x0	
	CUtlVector< CFingerBone > m_bones; // 0x18	
	CUtlString m_name; // 0x30	
	CUtlString m_tipParentBoneName; // 0x38	
	Vector m_vTipOffset; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_metacarpalBoneName; // 0x50	
	Vector m_vSplayHingeAxis; // 0x58	
	float m_flSplayMinAngle; // 0x64	
	float m_flSplayMaxAngle; // 0x68	
	float m_flFingerScaleRatio; // 0x6c	
};

// Alignment: 4
// Size: 0x30
class CWristBone
{
public:
	CUtlString m_name; // 0x0	
	Vector m_vForwardLS; // 0x8	
	Vector m_vUpLS; // 0x14	
	Vector m_vOffset; // 0x20	
};

// Alignment: 6
// Size: 0x50
class CVrSkeletalInputSettings
{
public:
	CUtlVector< CWristBone > m_wristBones; // 0x0	
	CUtlVector< CFingerChain > m_fingers; // 0x18	
	CUtlString m_name; // 0x30	
	CUtlString m_outerKnuckle1; // 0x38	
	CUtlString m_outerKnuckle2; // 0x40	
	AnimVRHand_t m_eHand; // 0x48	
};

// Alignment: 2
// Size: 0x10
struct BoneDemoCaptureSettings_t
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x0	
	// MPropertySuppressField
	float m_flChainLength; // 0x8	
};

// Alignment: 5
// Size: 0x28
struct IKDemoCaptureSettings_t
{
public:
	// MPropertyFriendlyName "Target Parent"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_parentBoneName; // 0x0	
	// MPropertyFriendlyName "Solver Mode"
	// MPropertyAttrChangeCallback
	IKChannelMode m_eMode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	// MPropertyAttrStateCallback
	CUtlString m_ikChainName; // 0x10	
	// MPropertyFriendlyName "Start Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_oneBoneStart; // 0x18	
	// MPropertyFriendlyName "End Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_oneBoneEnd; // 0x20	
};

// Alignment: 16
// Size: 0x78
class CAnimDemoCaptureSettings
{
public:
	// MPropertyFriendlyName "Bone Chain Length Error Scaling Range"
	// MPropertyGroupName "+Spline Settings"
	Vector2D m_rangeBoneChainLength; // 0x0	
	// MPropertyFriendlyName "Max Rotation Error (Mapped Against Bone Chain Length)"
	// MPropertyGroupName "+Spline Settings"
	Vector2D m_rangeMaxSplineErrorRotation; // 0x8	
	// MPropertyFriendlyName "Max Translation Error"
	// MPropertyGroupName "+Spline Settings"
	float m_flMaxSplineErrorTranslation; // 0x10	
	// MPropertyFriendlyName "Max Scale Error"
	// MPropertyGroupName "+Spline Settings"
	float m_flMaxSplineErrorScale; // 0x14	
	// MPropertyFriendlyName "Max IK Rotation Error"
	// MPropertyGroupName "+Spline Settings"
	float m_flIkRotation_MaxSplineError; // 0x18	
	// MPropertyFriendlyName "Max IK Translation Error"
	// MPropertyGroupName "+Spline Settings"
	float m_flIkTranslation_MaxSplineError; // 0x1c	
	// MPropertyFriendlyName "Max Rotation Error"
	// MPropertyGroupName "+Quantization Settings"
	float m_flMaxQuantizationErrorRotation; // 0x20	
	// MPropertyFriendlyName "Max Translation Error"
	// MPropertyGroupName "+Quantization Settings"
	float m_flMaxQuantizationErrorTranslation; // 0x24	
	// MPropertyFriendlyName "Max Scale Error"
	// MPropertyGroupName "+Quantization Settings"
	float m_flMaxQuantizationErrorScale; // 0x28	
	// MPropertyFriendlyName "Max IK Rotation Error"
	// MPropertyGroupName "+Quantization Settings"
	float m_flIkRotation_MaxQuantizationError; // 0x2c	
	// MPropertyFriendlyName "Max IK Translation Error"
	// MPropertyGroupName "+Quantization Settings"
	float m_flIkTranslation_MaxQuantizationError; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Base Sequence"
	// MPropertyGroupName "+Base Pose"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_baseSequence; // 0x38	
	// MPropertyFriendlyName "Base Sequence Frame"
	// MPropertyGroupName "+Base Pose"
	int32_t m_nBaseSequenceFrame; // 0x40	
	// MPropertyFriendlyName "Bone Selection Mode"
	// MPropertyGroupName "+Bones"
	// MPropertyAttrChangeCallback
	EDemoBoneSelectionMode m_boneSelectionMode; // 0x44	
	// MPropertyFriendlyName "Bones"
	// MPropertyGroupName "+Bones"
	// MPropertyAttrStateCallback
	CUtlVector< BoneDemoCaptureSettings_t > m_bones; // 0x48	
	// MPropertyFriendlyName "IK Chains"
	CUtlVector< IKDemoCaptureSettings_t > m_ikChains; // 0x60	
};

// Alignment: 5
// Size: 0x90
class CAnimReplayFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // 0x10	
	CUtlBinaryBlock m_instanceData; // 0x28	
	CTransform m_startingLocalToWorldTransform; // 0x40	
	CTransform m_localToWorldTransform; // 0x60	
	float m_timeStamp; // 0x80	
};

// Alignment: 5
// Size: 0x70
class CAnimGraphDebugReplay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	CUtlString m_animGraphFileName; // 0x40	
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48	
	int32_t m_startIndex; // 0x60	
	int32_t m_writeIndex; // 0x64	
	int32_t m_frameCount; // 0x68	
};

// Alignment: 2
// Size: 0x28
class CAnimGraphModelBinding
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_modelName; // 0x8	
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10	
};

// Alignment: 2
// Size: 0x10
class CAnimInputDamping
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8	
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc	
};

// Alignment: 2
// Size: 0x2
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0	
	uint8_t m_index; // 0x1	
};

// Alignment: 1
// Size: 0x20
class CAnimParamHandleMap
{
public:
	CUtlHashtable< uint16, int16 > m_list; // 0x0	
};

// Alignment: 6
// Size: 0x100
class CAnimParameterManagerUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18	
	CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30	
	CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50	
	CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70	
	CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88	
	CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // 0xa0	
};

// Alignment: 1
// Size: 0x30
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
};

// Alignment: 2
// Size: 0x8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0	
	float m_flControlPoint2; // 0x4	
};

// Alignment: 2
// Size: 0x18
struct ParamSpanSample_t
{
public:
	CAnimVariant m_value; // 0x0	
	float m_flCycle; // 0x14	
};

// Alignment: 5
// Size: 0x28
struct ParamSpan_t
{
public:
	CUtlVector< ParamSpanSample_t > m_samples; // 0x0	
	CAnimParamHandle m_hParam; // 0x18	
	AnimParamType_t m_eParamType; // 0x1a	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	float m_flStartCycle; // 0x1c	
	float m_flEndCycle; // 0x20	
};

// Alignment: 1
// Size: 0x18
class CParamSpanUpdater
{
public:
	CUtlVector< ParamSpan_t > m_spans; // 0x0	
};

// Alignment: 0
// Size: 0x20
class CAnimGraphSettingsGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x30
class CAnimNodePath
{
public:
	AnimNodeID m_path[11]; // 0x0	
	int32_t m_nCount; // 0x2c	
};

// Alignment: 4
// Size: 0x40
class CCachedPose
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CTransform > m_transforms; // 0x8	
	CUtlVector< float32 > m_morphWeights; // 0x20	
	HSequence m_hSequence; // 0x38	
	float m_flCycle; // 0x3c	
};

// Alignment: 3
// Size: 0x30
class CStaticPoseCache
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CCachedPose > m_poses; // 0x10	
	int32_t m_nBoneCount; // 0x28	
	int32_t m_nMorphCount; // 0x2c	
};

// Alignment: 0
// Size: 0x38
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18
class CAnimActionUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x20
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18	
	bool m_bIsZeroDuration; // 0x1c	
};

// Alignment: 2
// Size: 0x30
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	CAnimVariant m_value; // 0x1a	
};

// Alignment: 2
// Size: 0x20
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18	
	bool m_bSetEnabled; // 0x1c	
};

// Alignment: 3
// Size: 0x20
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	AnimParamType_t m_eParamType; // 0x1a	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	AnimScriptHandle m_hScript; // 0x1c	
};

// Alignment: 4
// Size: 0x30
class CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CGlobalSymbol m_name; // 0x18	
	// MPropertyHideField
	CGlobalSymbol m_group; // 0x20	
	// MPropertyHideField
	AnimTagID m_tagID; // 0x28	
	// MPropertyHideField
	bool m_bIsReferenced; // 0x2c	
};

// Alignment: 1
// Size: 0x38
class CAnimTagManagerUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18	
};

// Alignment: 7
// Size: 0x50
class CAudioAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Sound Event"
	// MPropertyAttributeEditor "SoundPicker()"
	CUtlString m_clipName; // 0x38	
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x40	
	// MPropertyFriendlyName "Volume"
	// MPropertyAttributeRange "0 1"
	float m_flVolume; // 0x48	
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x4c	
	// MPropertyFriendlyName "Stop When Graph Destroyed"
	bool m_bStopWhenGraphEnds; // 0x4d	
	// MPropertyFriendlyName "Play on Server"
	bool m_bPlayOnServer; // 0x4e	
	// MPropertyFriendlyName "Play on Client"
	bool m_bPlayOnClient; // 0x4f	
};

// Alignment: 2
// Size: 0x10
class CBodyGroupSetting
{
public:
	// MPropertyFriendlyName "BodyGroup"
	// MPropertyAttributeChoiceName "BodyGroup"
	// MPropertyAutoRebuildOnChange
	CUtlString m_BodyGroupName; // 0x0	
	// MPropertyFriendlyName "BodyGroup Option"
	// MPropertyAttributeChoiceName "BodyGroupOption"
	// MPropertyAttrExtraInfoFn
	int32_t m_nBodyGroupOption; // 0x8	
};

// Alignment: 2
// Size: 0x58
class CBodyGroupAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Body Group Settings"
	CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x40	
};

// Alignment: 4
// Size: 0x50
class CClothSettingsAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x38	
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x3c	
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x48	
};

// Alignment: 1
// Size: 0x40
class CFootFallAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x38	
};

// Alignment: 4
// Size: 0x58
class CFootstepLandedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x40	
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x48	
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x50	
};

// Alignment: 4
// Size: 0x50
class CMaterialAttributeAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Attribute Name"
	CUtlString m_AttributeName; // 0x38	
	// MPropertyFriendlyName "Attribute Type"
	// MPropertyAttrChangeCallback
	MatterialAttributeTagType_t m_AttributeType; // 0x40	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	float m_flValue; // 0x44	
	// MPropertyFriendlyName "Color"
	// MPropertyAttrStateCallback
	Color m_Color; // 0x48	
};

// Alignment: 10
// Size: 0x78
class CParticleAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x38	
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x40	
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x48	
	// MPropertyFriendlyName "Detach From Owner"
	bool m_bDetachFromOwner; // 0x50	
	// MPropertyFriendlyName "Stop on Tag End"
	// MPropertyGroupName "Ending"
	bool m_bStopWhenTagEnds; // 0x51	
	// MPropertyFriendlyName "Tag End Stop is Instant"
	// MPropertyGroupName "Ending"
	bool m_bTagEndStopIsInstant; // 0x52	
private:
	[[maybe_unused]] uint8_t __pad0053[0x5]; // 0x53
public:
	// MPropertyFriendlyName "Attachment"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58	
	// MPropertyFriendlyName "Attachment Type"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentType; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Attachment (Control Point 1)"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentCP1Name; // 0x68	
	// MPropertyFriendlyName "Attachment Type (Control Point 1)"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentCP1Type; // 0x70	
};

// Alignment: 6
// Size: 0x50
class CRagdollAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x38	
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x3c	
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x40	
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x44	
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x48	
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x4c	
};

// Alignment: 1
// Size: 0x40
class CSequenceFinishedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
};

// Alignment: 0
// Size: 0x30
class CStringAnimTag : public CAnimTagBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x38
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x30
class CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_name; // 0x18	
	AnimComponentID m_id; // 0x20	
	AnimNodeNetworkMode m_networkMode; // 0x24	
	bool m_bStartEnabled; // 0x28	
};

// Alignment: 1
// Size: 0x38
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x30	
};

// Alignment: 1
// Size: 0x60
class CCPPScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	// MPropertyFriendlyName "Scripts"
	CUtlVector< CGlobalSymbol > m_scriptsToRun; // 0x30	
};

// Alignment: 3
// Size: 0x20
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0	
	CAnimParamHandle m_hParamIn; // 0x18	
	CAnimParamHandle m_hParamOut; // 0x1a	
};

// Alignment: 1
// Size: 0x48
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x30	
};

// Alignment: 1
// Size: 0xa8
class CDemoSettingsComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimDemoCaptureSettings m_settings; // 0x30	
};

// Alignment: 1
// Size: 0x38
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x30	
};

// Alignment: 8
// Size: 0x48
class CLookComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
public:
	CAnimParamHandle m_hLookHeading; // 0x34	
	CAnimParamHandle m_hLookHeadingVelocity; // 0x36	
	CAnimParamHandle m_hLookPitch; // 0x38	
	CAnimParamHandle m_hLookDistance; // 0x3a	
	CAnimParamHandle m_hLookDirection; // 0x3c	
	CAnimParamHandle m_hLookTarget; // 0x3e	
	CAnimParamHandle m_hLookTargetWorldSpace; // 0x40	
	bool m_bNetworkLookTarget; // 0x42	
};

// Alignment: 2
// Size: 0x10
class CMovementMode
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0	
	// MPropertyFriendlyName "Top Speed"
	float m_flSpeed; // 0x8	
};

// Alignment: 9
// Size: 0xc0
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CMovementMode > m_movementModes; // 0x30	
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x48	
	CAnimInputDamping m_facingDamping; // 0x60	
	FacingMode m_eDefaultFacingMode; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x8]; // 0x74
public:
	int32_t m_nDefaultMotorIndex; // 0x7c	
	bool m_bMoveVarsDisabled; // 0x80	
	bool m_bNetworkPath; // 0x81	
	bool m_bNetworkFacing; // 0x82	
	CAnimParamHandle m_paramHandles[30]; // 0x83	
};

// Alignment: 2
// Size: 0x20
class WeightList
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< float32 > m_weights; // 0x8	
};

// Alignment: 7
// Size: 0xa0
class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30	
	CUtlVector< int32 > m_boneIndices; // 0x48	
	CUtlVector< CUtlString > m_boneNames; // 0x60	
	CUtlVector< WeightList > m_weightLists; // 0x78	
	float m_flSpringFrequencyMin; // 0x90	
	float m_flSpringFrequencyMax; // 0x94	
	float m_flMaxStretch; // 0x98	
};

// Alignment: 7
// Size: 0x48
class CSlopeComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
public:
	float m_flTraceDistance; // 0x34	
	CAnimParamHandle m_hSlopeAngle; // 0x38	
	CAnimParamHandle m_hSlopeAngleFront; // 0x3a	
	CAnimParamHandle m_hSlopeAngleSide; // 0x3c	
	CAnimParamHandle m_hSlopeHeading; // 0x3e	
	CAnimParamHandle m_hSlopeNormal; // 0x40	
	CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42	
};

// Alignment: 9
// Size: 0x48
class CVRInputComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
public:
	CAnimParamHandle m_FingerCurl_Thumb; // 0x34	
	CAnimParamHandle m_FingerCurl_Index; // 0x36	
	CAnimParamHandle m_FingerCurl_Middle; // 0x38	
	CAnimParamHandle m_FingerCurl_Ring; // 0x3a	
	CAnimParamHandle m_FingerCurl_Pinky; // 0x3c	
	CAnimParamHandle m_FingerSplay_Thumb_Index; // 0x3e	
	CAnimParamHandle m_FingerSplay_Index_Middle; // 0x40	
	CAnimParamHandle m_FingerSplay_Middle_Ring; // 0x42	
	CAnimParamHandle m_FingerSplay_Ring_Pinky; // 0x44	
};

// Alignment: 3
// Size: 0x58
class CAnimStateMachineUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CStateUpdateData > m_states; // 0x8	
	CUtlVector< CTransitionUpdateData > m_transitions; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	int32_t m_startStateIndex; // 0x50	
};

// Alignment: 2
// Size: 0x20
class CMotionDataSet
{
public:
	CUtlVector< CMotionGraphGroup > m_groups; // 0x0	
	int32_t m_nDimensionCount; // 0x18	
};

// Alignment: 2
// Size: 0x20
class CProductQuantizer
{
public:
	CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0	
	int32_t m_nDimensions; // 0x18	
};

// Alignment: 1
// Size: 0x8
class SampleCode
{
public:
	uint8_t m_subCode[8]; // 0x0	
};

// Alignment: 1
// Size: 0x4
class MotionDBIndex
{
public:
	uint32_t m_nIndex; // 0x0	
};

// Alignment: 3
// Size: 0x20
class CVectorQuantizer
{
public:
	CUtlVector< float32 > m_centroidVectors; // 0x0	
	int32_t m_nCentroids; // 0x18	
	int32_t m_nDimensions; // 0x1c	
};

// Alignment: 5
// Size: 0x80
class CMotionSearchNode
{
public:
	CUtlVector< CMotionSearchNode* > m_children; // 0x0	
	CVectorQuantizer m_quantizer; // 0x18	
	CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38	
	CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50	
	CUtlVector< int32 > m_selectableSamples; // 0x68	
};

// Alignment: 3
// Size: 0xb8
class CMotionSearchDB
{
public:
	CMotionSearchNode m_rootNode; // 0x0	
	CProductQuantizer m_residualQuantizer; // 0x80	
	CUtlVector< MotionDBIndex > m_codeIndices; // 0xa0	
};

// Alignment: 5
// Size: 0x108
class CMotionGraphGroup
{
public:
	CMotionSearchDB m_searchDB; // 0x0	
	CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xb8	
	CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xd0	
	CUtlVector< int32 > m_sampleToConfig; // 0xe8	
	AnimScriptHandle m_hIsActiveScript; // 0x100	
};

// Alignment: 7
// Size: 0x58
class CMotionGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CParamSpanUpdater m_paramSpans; // 0x10	
	CUtlVector< TagSpan_t > m_tags; // 0x28	
	CSmartPtr< CMotionNode > m_pRootNode; // 0x40	
	int32_t m_nParameterCount; // 0x48	
	int32_t m_nConfigStartIndex; // 0x4c	
	int32_t m_nConfigCount; // 0x50	
	bool m_bLoop; // 0x54	
};

// Alignment: 0
// Size: 0x58
class CEditableMotionGraph : public CMotionGraph
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x28
class CMotionNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_name; // 0x18	
	AnimNodeID m_id; // 0x20	
};

// Alignment: 3
// Size: 0x48
class CMotionNodeSequence : public CMotionNode
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x28	
	HSequence m_hSequence; // 0x40	
	float m_flPlaybackSpeed; // 0x44	
};

// Alignment: 2
// Size: 0x10
class MotionBlendItem
{
public:
	CSmartPtr< CMotionNode > m_pChild; // 0x0	
	float m_flKeyValue; // 0x8	
};

// Alignment: 2
// Size: 0x48
class CMotionNodeBlend1D : public CMotionNode
{
public:
	CUtlVector< MotionBlendItem > m_blendItems; // 0x28	
	int32_t m_nParamIndex; // 0x40	
};

// Alignment: 4
// Size: 0x50
class CMotionMetricEvaluator
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< float32 > m_means; // 0x18	
	CUtlVector< float32 > m_standardDeviations; // 0x30	
	float m_flWeight; // 0x48	
	int32_t m_nDimensionStartIndex; // 0x4c	
};

// Alignment: 0
// Size: 0x50
class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x58
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
};

// Alignment: 1
// Size: 0x58
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
};

// Alignment: 0
// Size: 0x50
class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x50
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x68
class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flMaxDistance; // 0x50	
	float m_flMinDistance; // 0x54	
	float m_flStartGoalFilterDistance; // 0x58	
	float m_flMaxGoalOvershootScale; // 0x5c	
	bool m_bFilterFixedMinDistance; // 0x60	
	bool m_bFilterGoalDistance; // 0x61	
	bool m_bFilterGoalOvershoot; // 0x62	
};

// Alignment: 1
// Size: 0x68
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
};

// Alignment: 2
// Size: 0x70
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	bool m_bIgnoreSlope; // 0x68	
};

// Alignment: 2
// Size: 0x58
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
	float m_flTime; // 0x54	
};

// Alignment: 4
// Size: 0x60
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
	float m_flStoppingDistance; // 0x54	
	float m_flTargetSpeed; // 0x58	
	VelocityMetricMode m_eMode; // 0x5c	
};

// Alignment: 4
// Size: 0x78
class CPathMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_pathTimeSamples; // 0x50	
	float m_flDistance; // 0x68	
	bool m_bExtrapolateMovement; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	float m_flMinExtrapolationSpeed; // 0x70	
};

// Alignment: 2
// Size: 0x70
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	float m_flMinStepsRemaining; // 0x68	
};

// Alignment: 4
// Size: 0x60
class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	bool m_bMatchByTimeRemaining; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	float m_flMaxTimeRemaining; // 0x54	
	bool m_bFilterByTimeRemaining; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flMinTimeRemaining; // 0x5c	
};

// Alignment: 2
// Size: 0x20
class CAnimMotorUpdaterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_name; // 0x10	
	bool m_bDefault; // 0x18	
};

// Alignment: 1
// Size: 0x28
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:
	bool m_bLockToPath; // 0x20	
};

// Alignment: 7
// Size: 0x48
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	float m_flAnticipationTime; // 0x2c	
	float m_flMinSpeedScale; // 0x30	
	CAnimParamHandle m_hAnticipationPosParam; // 0x34	
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x36	
	float m_flSpringConstant; // 0x38	
	float m_flMinSpringTension; // 0x3c	
	float m_flMaxSpringTension; // 0x40	
};

// Alignment: 0
// Size: 0x28
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x50
class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:
	CUtlVector< float32 > m_sampleTimes; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0038[0x4]; // 0x38
public:
	float m_flSpringConstant; // 0x3c	
	float m_flAnticipationDistance; // 0x40	
	CAnimParamHandle m_hAnticipationPosParam; // 0x44	
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x46	
	bool m_bUseAcceleration; // 0x48	
};

// Alignment: 8
// Size: 0xd0
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	CPoseHandle m_poseCacheHandles[10]; // 0x90	
	AimMatrixBlendMode m_eBlendMode; // 0xb8	
	float m_fAngleIncrement; // 0xbc	
	int32_t m_nSequenceMaxFrame; // 0xc0	
	int32_t m_nBoneMaskIndex; // 0xc4	
	bool m_bTargetIsPosition; // 0xc8	
};

// Alignment: 4
// Size: 0x90
struct FollowAttachmentSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	int32_t m_boneIndex; // 0x80	
	bool m_bMatchTranslation; // 0x84	
	bool m_bMatchRotation; // 0x85	
};

// Alignment: 18
// Size: 0x60
class FootLockPoseOpFixedSettings
{
public:
	CUtlVector< FootFixedData_t > m_footInfo; // 0x0	
	CAnimInputDamping m_hipDampingSettings; // 0x18	
	int32_t m_nHipBoneIndex; // 0x28	
	IKSolverType m_ikSolverType; // 0x2c	
	bool m_bApplyTilt; // 0x30	
	bool m_bApplyHipDrop; // 0x31	
	bool m_bAlwaysUseFallbackHinge; // 0x32	
	bool m_bApplyFootRotationLimits; // 0x33	
	bool m_bApplyLegTwistLimits; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	float m_flMaxFootHeight; // 0x38	
	float m_flExtensionScale; // 0x3c	
	float m_flMaxLegTwist; // 0x40	
	bool m_bEnableLockBreaking; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	float m_flLockBreakTolerance; // 0x48	
	float m_flLockBlendTime; // 0x4c	
	bool m_bEnableStretching; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	float m_flMaxStretchAmount; // 0x54	
	float m_flStretchExtensionScale; // 0x58	
};

// Alignment: 7
// Size: 0x30
struct FootPinningPoseOpFixedData_t
{
public:
	CUtlVector< FootFixedData_t > m_footInfo; // 0x0	
	float m_flBlendTime; // 0x18	
	float m_flLockBreakDistance; // 0x1c	
	float m_flMaxLegTwist; // 0x20	
	int32_t m_nHipBoneIndex; // 0x24	
	bool m_bApplyLegTwistLimits; // 0x28	
	bool m_bApplyFootRotationLimits; // 0x29	
};

// Alignment: 17
// Size: 0x44
struct HitReactFixedSettings_t
{
public:
	int32_t m_nWeightListIndex; // 0x0	
	int32_t m_nEffectedBoneCount; // 0x4	
	float m_flMaxImpactForce; // 0x8	
	float m_flMinImpactForce; // 0xc	
	float m_flWhipImpactScale; // 0x10	
	float m_flCounterRotationScale; // 0x14	
	float m_flDistanceFadeScale; // 0x18	
	float m_flPropagationScale; // 0x1c	
	float m_flWhipDelay; // 0x20	
	float m_flSpringStrength; // 0x24	
	float m_flWhipSpringStrength; // 0x28	
	float m_flMaxAngleRadians; // 0x2c	
	int32_t m_nHipBoneIndex; // 0x30	
	float m_flHipBoneTranslationScale; // 0x34	
	float m_flHipDipSpringStrength; // 0x38	
	float m_flHipDipImpactScale; // 0x3c	
	float m_flHipDipDelay; // 0x40	
};

// Alignment: 7
// Size: 0x2c
struct JiggleBoneSettings_t
{
public:
	int32_t m_nBoneIndex; // 0x0	
	float m_flSpringStrength; // 0x4	
	float m_flMaxTimeStep; // 0x8	
	float m_flDamping; // 0xc	
	Vector m_vBoundsMaxLS; // 0x10	
	Vector m_vBoundsMinLS; // 0x1c	
	JiggleBoneSimSpace m_eSimSpace; // 0x28	
};

// Alignment: 1
// Size: 0x18
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0	
};

// Alignment: 2
// Size: 0x8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0	
	float m_weight; // 0x4	
};

// Alignment: 11
// Size: 0xc0
struct LookAtOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	CUtlVector< LookAtBone_t > m_bones; // 0x90	
	float m_flYawLimit; // 0xa8	
	float m_flPitchLimit; // 0xac	
	float m_flHysteresisInnerAngle; // 0xb0	
	float m_flHysteresisOuterAngle; // 0xb4	
	bool m_bRotateYawForward; // 0xb8	
	bool m_bMaintainUpDirection; // 0xb9	
	bool m_bTargetIsPosition; // 0xba	
	bool m_bUseHysteresis; // 0xbb	
};

// Alignment: 2
// Size: 0x8
struct FingerSource_t
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0	
	float m_flFingerWeight; // 0x4	
};

// Alignment: 7
// Size: 0x34
struct FingerBone_t
{
public:
	int32_t m_boneIndex; // 0x0	
	Vector m_hingeAxis; // 0x4	
	Vector m_vCapsulePos1; // 0x10	
	Vector m_vCapsulePos2; // 0x1c	
	float m_flMinAngle; // 0x28	
	float m_flMaxAngle; // 0x2c	
	float m_flRadius; // 0x30	
};

// Alignment: 9
// Size: 0x60
struct FingerChain_t
{
public:
	CUtlVector< FingerSource_t > m_targets; // 0x0	
	CUtlVector< FingerBone_t > m_bones; // 0x18	
	Vector m_vTipOffset; // 0x30	
	Vector m_vSplayHingeAxis; // 0x3c	
	int32_t m_tipParentBoneIndex; // 0x48	
	int32_t m_metacarpalBoneIndex; // 0x4c	
	float m_flSplayMinAngle; // 0x50	
	float m_flSplayMaxAngle; // 0x54	
	float m_flFingerScaleRatio; // 0x58	
};

// Alignment: 2
// Size: 0x30
struct WristBone_t
{
public:
	CTransform m_xOffsetTransformMS; // 0x0	
	int32_t m_boneIndex; // 0x20	
};

// Alignment: 9
// Size: 0x48
struct SkeletalInputOpFixedSettings_t
{
public:
	CUtlVector< WristBone_t > m_wristBones; // 0x0	
	CUtlVector< FingerChain_t > m_fingers; // 0x18	
	int32_t m_outerKnuckle1; // 0x30	
	int32_t m_outerKnuckle2; // 0x34	
	AnimVRHand_t m_eHand; // 0x38	
	AnimVRHandMotionRange_t m_eMotionRange; // 0x3c	
	AnimVrBoneTransformSource_t m_eTransformSource; // 0x40	
	bool m_bEnableIK; // 0x44	
	bool m_bEnableCollision; // 0x45	
};

// Alignment: 2
// Size: 0x8
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0	
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4	
};

// Alignment: 2
// Size: 0x20
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0	
	bool m_bMatchTargetOrientation; // 0x18	
};

// Alignment: 6
// Size: 0x50
class CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CGlobalSymbol m_name; // 0x18	
	// MPropertyHideField
	CUtlString m_group; // 0x20	
	// MPropertyHideField
	AnimParamID m_id; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x14]; // 0x2c
public:
	// MPropertyHideField
	// MPropertyAttrChangeCallback
	CUtlString m_componentName; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0048[0x4]; // 0x48
public:
	// MPropertyHideField
	bool m_bNetworkingRequested; // 0x4c	
	// MPropertyHideField
	bool m_bIsReferenced; // 0x4d	
};

// Alignment: 6
// Size: 0x60
class CConcreteAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x50	
	// MPropertyFriendlyName "Network"
	AnimParamNetworkSetting m_eNetworkSetting; // 0x54	
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x58	
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x59	
	// MPropertyFriendlyName "Game Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGameWritable; // 0x5a	
	// MPropertyFriendlyName "Graph Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGraphWritable; // 0x5b	
};

// Alignment: 2
// Size: 0x60
class CVirtualAnimParameter : public CAnimParameterBase
{
public:
	CUtlString m_expressionString; // 0x50	
	AnimParamType_t m_eParamType; // 0x58	
};

// Alignment: 1
// Size: 0x68
class CBoolAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x60	
};

// Alignment: 2
// Size: 0xb8
class CEnumAnimParameter : public CConcreteAnimParameter
{
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x7]; // 0x69
public:
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x70	
};

// Alignment: 3
// Size: 0x70
class CIntAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x60	
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x64	
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x68	
};

// Alignment: 4
// Size: 0x70
class CFloatAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x60	
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x64	
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x68	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x6c	
};

// Alignment: 2
// Size: 0x70
class CVectorAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x60	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x6c	
};

// Alignment: 2
// Size: 0x80
class CQuaternionAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x60	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x70	
};

// Alignment: 5
// Size: 0x58
struct ScriptInfo_t
{
public:
	CUtlString m_code; // 0x0	
	CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8	
	CUtlVector< int32 > m_proxyReadParams; // 0x20	
	CUtlVector< int32 > m_proxyWriteParams; // 0x38	
	AnimScriptType m_eScriptType; // 0x50	
};

// Alignment: 1
// Size: 0x1a0
class CAnimScriptManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10	
};

// Alignment: 2
// Size: 0x10
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0	
	StateActionBehavior m_eBehavior; // 0x8	
};

// Alignment: 3
// Size: 0x3
class CTransitionUpdateData
{
public:
	uint8_t m_srcStateIndex; // 0x0	
	uint8_t m_destStateIndex; // 0x1	
	struct 
	{
		uint8_t m_bDisabled: 1; 		
		uint8_t __pad0: 1;
	}; // 2 bits
};

// Alignment: 8
// Size: 0x48
class CStateUpdateData
{
public:
	CUtlString m_name; // 0x0	
	AnimScriptHandle m_hScript; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< int32 > m_transitionIndices; // 0x10	
	CUtlVector< CStateActionUpdater > m_actions; // 0x28	
	AnimStateID m_stateID; // 0x40	
	struct 
	{
		uint8_t m_bIsStartState: 1; 		
		uint8_t m_bIsEndState: 1; 		
		uint8_t m_bIsPassthrough: 1; 		
		uint8_t __pad1: 3;
	}; // 6 bits
};

// Alignment: 1
// Size: 0x88
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x30	
};

// Alignment: 1
// Size: 0x10
class CAnimUpdateNodeRef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nodeIndex; // 0x8	
};

// Alignment: 3
// Size: 0x58
class CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CAnimNodePath m_nodePath; // 0x18	
	AnimNodeNetworkMode m_networkMode; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_name; // 0x50	
};

// Alignment: 6
// Size: 0x88
class CBinaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChild1; // 0x58	
	CAnimUpdateNodeRef m_pChild2; // 0x68	
	BinaryNodeTiming m_timingBehavior; // 0x78	
	float m_flTimingBlend; // 0x7c	
	bool m_bResetChild1; // 0x80	
	bool m_bResetChild2; // 0x81	
};

// Alignment: 11
// Size: 0xd0
class CBlendUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60	
	CUtlVector< uint8 > m_sortedOrder; // 0x78	
	CUtlVector< float32 > m_targetValues; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x4]; // 0xa8
public:
	AnimValueSource m_blendValueSource; // 0xac	
	CAnimParamHandle m_paramIndex; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b2[0x6]; // 0xb2
public:
	CAnimInputDamping m_damping; // 0xb8	
	BlendKeyType m_blendKeyType; // 0xc8	
	bool m_bLockBlendOnReset; // 0xcc	
	bool m_bSyncCycles; // 0xcd	
	bool m_bLoop; // 0xce	
	bool m_bLockWhenWaning; // 0xcf	
};

// Alignment: 6
// Size: 0x40
struct BlendItem_t
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x0	
	CAnimUpdateNodeRef m_pChild; // 0x18	
	HSequence m_hSequence; // 0x28	
	Vector2D m_vPos; // 0x2c	
	float m_flDuration; // 0x34	
	bool m_bUseCustomDuration; // 0x38	
};

// Alignment: 15
// Size: 0xf0
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< BlendItem_t > m_items; // 0x60	
	CUtlVector< TagSpan_t > m_tags; // 0x78	
	CParamSpanUpdater m_paramSpans; // 0x90	
	CUtlVector< int32 > m_nodeItemIndices; // 0xa8	
	CAnimInputDamping m_damping; // 0xc0	
	AnimValueSource m_blendSourceX; // 0xd0	
	CAnimParamHandle m_paramX; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
public:
	AnimValueSource m_blendSourceY; // 0xd8	
	CAnimParamHandle m_paramY; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00de[0x2]; // 0xde
public:
	Blend2DMode m_eBlendMode; // 0xe0	
	float m_playbackSpeed; // 0xe4	
	bool m_bLoop; // 0xe8	
	bool m_bLockBlendOnReset; // 0xe9	
	bool m_bLockWhenWaning; // 0xea	
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb	
};

// Alignment: 7
// Size: 0xa8
class CBoneMaskUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	int32_t m_nWeightListIndex; // 0x8c	
	float m_flRootMotionBlend; // 0x90	
	BoneMaskBlendSpace m_blendSpace; // 0x94	
	BinaryNodeChildOption m_footMotionTiming; // 0x98	
	bool m_bUseBlendScale; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad009d[0x3]; // 0x9d
public:
	AnimValueSource m_blendValueSource; // 0xa0	
	CAnimParamHandle m_hBlendParameter; // 0xa4	
};

// Alignment: 10
// Size: 0xb8
class CChoiceUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58	
	CUtlVector< float32 > m_weights; // 0x70	
	CUtlVector< float32 > m_blendTimes; // 0x88	
	ChoiceMethod m_choiceMethod; // 0xa0	
	ChoiceChangeMethod m_choiceChangeMethod; // 0xa4	
	ChoiceBlendMethod m_blendMethod; // 0xa8	
	float m_blendTime; // 0xac	
	bool m_bCrossFade; // 0xb0	
	bool m_bResetChosen; // 0xb1	
	bool m_bDontResetSameSelection; // 0xb2	
};

// Alignment: 2
// Size: 0x20
class CDirectPlaybackTagData
{
public:
	CUtlString m_sequenceName; // 0x0	
	CUtlVector< TagSpan_t > m_tags; // 0x8	
};

// Alignment: 11
// Size: 0x50
struct FootFixedData_t
{
public:
	VectorAligned m_vToeOffset; // 0x0	
	VectorAligned m_vHeelOffset; // 0x10	
	int32_t m_nTargetBoneIndex; // 0x20	
	int32_t m_nAnkleBoneIndex; // 0x24	
	int32_t m_nIKAnchorBoneIndex; // 0x28	
	int32_t m_ikChainIndex; // 0x2c	
	float m_flMaxIKLength; // 0x30	
	int32_t m_nFootIndex; // 0x34	
	int32_t m_nTagIndex; // 0x38	
	float m_flMaxRotationLeft; // 0x3c	
	float m_flMaxRotationRight; // 0x40	
};

// Alignment: 2
// Size: 0x8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0	
	float m_flTraceRadius; // 0x4	
};

// Alignment: 10
// Size: 0x40
class FootFixedSettings
{
public:
	TraceSettings_t m_traceSettings; // 0x0	
	VectorAligned m_vFootBaseBindPosePositionMS; // 0x10	
	float m_flFootBaseLength; // 0x20	
	float m_flMaxRotationLeft; // 0x24	
	float m_flMaxRotationRight; // 0x28	
	int32_t m_footstepLandedTagIndex; // 0x2c	
	bool m_bEnableTracing; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	float m_flTraceAngleBlend; // 0x34	
	int32_t m_nDisableTagIndex; // 0x38	
	int32_t m_nFootIndex; // 0x3c	
};

// Alignment: 3
// Size: 0x20
class FootStepTrigger
{
public:
	CUtlVector< int32 > m_tags; // 0x0	
	int32_t m_nFootIndex; // 0x18	
	StepPhase m_triggerPhase; // 0x1c	
};

// Alignment: 0
// Size: 0x58
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
	// No members available
};

// Alignment: 10
// Size: 0xe8
class CLeanMatrixUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
public:
	int32_t m_frameCorners[3][3]; // 0x5c	
	CPoseHandle m_poses[9]; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	CAnimInputDamping m_damping; // 0xa8	
	AnimVectorSource m_blendSource; // 0xb8	
	CAnimParamHandle m_paramIndex; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
public:
	Vector m_verticalAxis; // 0xc0	
	Vector m_horizontalAxis; // 0xcc	
	HSequence m_hSequence; // 0xd8	
	float m_flMaxValue; // 0xdc	
	int32_t m_nSequenceMaxFrame; // 0xe0	
};

// Alignment: 1
// Size: 0x68
class CMotionGraphUpdateNode : public CLeafUpdateNode
{
public:
	CSmartPtr< CMotionGraph > m_pMotionGraph; // 0x58	
};

// Alignment: 23
// Size: 0x140
class CMotionMatchingUpdateNode : public CLeafUpdateNode
{
public:
	CMotionDataSet m_dataSet; // 0x58	
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78	
	CUtlVector< float32 > m_weights; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x38]; // 0xa8
public:
	bool m_bSearchEveryTick; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e1[0x3]; // 0xe1
public:
	float m_flSearchInterval; // 0xe4	
	bool m_bSearchWhenClipEnds; // 0xe8	
	bool m_bSearchWhenGoalChanges; // 0xe9	
private:
	[[maybe_unused]] uint8_t __pad00ea[0x2]; // 0xea
public:
	CBlendCurve m_blendCurve; // 0xec	
	float m_flSampleRate; // 0xf4	
	float m_flBlendTime; // 0xf8	
	bool m_bLockClipWhenWaning; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad00fd[0x3]; // 0xfd
public:
	float m_flSelectionThreshold; // 0x100	
	float m_flReselectionTimeWindow; // 0x104	
	bool m_bEnableRotationCorrection; // 0x108	
	bool m_bGoalAssist; // 0x109	
private:
	[[maybe_unused]] uint8_t __pad010a[0x2]; // 0x10a
public:
	float m_flGoalAssistDistance; // 0x10c	
	float m_flGoalAssistTolerance; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CAnimInputDamping m_distanceScale_Damping; // 0x118	
	float m_flDistanceScale_OuterRadius; // 0x128	
	float m_flDistanceScale_InnerRadius; // 0x12c	
	float m_flDistanceScale_MaxScale; // 0x130	
	float m_flDistanceScale_MinScale; // 0x134	
	bool m_bEnableDistanceScaling; // 0x138	
};

// Alignment: 8
// Size: 0xa8
class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58	
	CUtlVector< int8 > m_tags; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	CBlendCurve m_blendCurve; // 0x8c	
	CAnimValue< float32 > m_flBlendTime; // 0x94	
	CAnimParamHandle m_hParameter; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
public:
	SelectorTagBehavior_t m_eTagBehavior; // 0xa0	
	bool m_bResetOnChange; // 0xa4	
	bool m_bSyncCyclesOnChange; // 0xa5	
};

// Alignment: 6
// Size: 0xa8
class CSequenceUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CParamSpanUpdater m_paramSpans; // 0x60	
	CUtlVector< TagSpan_t > m_tags; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0090[0x4]; // 0x90
public:
	HSequence m_hSequence; // 0x94	
	float m_playbackSpeed; // 0x98	
	float m_duration; // 0x9c	
	bool m_bLoop; // 0xa0	
};

// Alignment: 2
// Size: 0x4
class CPoseHandle
{
public:
	uint16_t m_nIndex; // 0x0	
	PoseType_t m_eType; // 0x2	
};

// Alignment: 1
// Size: 0xa8
class CSkeletalInputUpdateNode : public CLeafUpdateNode
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58	
};

// Alignment: 2
// Size: 0x4
struct CSolveIKTargetHandle_t
{
public:
	CAnimParamHandle m_positionHandle; // 0x0	
	CAnimParamHandle m_orientationHandle; // 0x2	
};

// Alignment: 2
// Size: 0x10
struct StanceInfo_t
{
public:
	Vector m_vPosition; // 0x0	
	float m_flDirection; // 0xc	
};

// Alignment: 5
// Size: 0x1c
class CStateNodeTransitionData
{
public:
	CBlendCurve m_curve; // 0x0	
	CAnimValue< float32 > m_blendDuration; // 0x8	
	CAnimValue< float32 > m_resetCycleValue; // 0x10	
	struct 
	{
		uint8_t m_bReset: 1; 		
		uint8_t m_resetCycleOption: 3; 		
		uint8_t __pad2: 4;
	}; // 8 bits
};

// Alignment: 2
// Size: 0x18
class CStateNodeStateData
{
public:
	CAnimUpdateNodeRef m_pChild; // 0x0	
	struct 
	{
		uint8_t m_bExclusiveRootMotion: 1; 		
		uint8_t __pad3: 1;
	}; // 2 bits
};

// Alignment: 5
// Size: 0xf8
class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x68	
	CUtlVector< CStateNodeStateData > m_stateData; // 0xc0	
	CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00f0[0x4]; // 0xf0
public:
	bool m_bBlockWaningTags; // 0xf4	
	bool m_bLockStateWhenWaning; // 0xf5	
};

// Alignment: 4
// Size: 0x98
class CSubtractUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c	
	bool m_bApplyToFootMotion; // 0x90	
	bool m_bApplyChannelsSeparately; // 0x91	
	bool m_bUseModelSpace; // 0x92	
};

// Alignment: 15
// Size: 0x160
struct TwoBoneIKSettings_t
{
public:
	IkEndEffectorType m_endEffectorType; // 0x0	
	CAnimAttachment m_endEffectorAttachment; // 0x10	
	IkTargetType m_targetType; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0094[0xc]; // 0x94
public:
	CAnimAttachment m_targetAttachment; // 0xa0	
	int32_t m_targetBoneIndex; // 0x120	
	CAnimParamHandle m_hPositionParam; // 0x124	
	CAnimParamHandle m_hRotationParam; // 0x126	
	bool m_bAlwaysUseFallbackHinge; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x7]; // 0x129
public:
	VectorAligned m_vLsFallbackHingeAxis; // 0x130	
	int32_t m_nFixedBoneIndex; // 0x140	
	int32_t m_nMiddleBoneIndex; // 0x144	
	int32_t m_nEndBoneIndex; // 0x148	
	bool m_bMatchTargetOrientation; // 0x14c	
	bool m_bConstrainTwist; // 0x14d	
private:
	[[maybe_unused]] uint8_t __pad014e[0x2]; // 0x14e
public:
	float m_flMaxTwist; // 0x150	
};

// Alignment: 1
// Size: 0x68
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58	
};

// Alignment: 5
// Size: 0x78
class CWayPointHelperUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	float m_flStartCycle; // 0x6c	
	float m_flEndCycle; // 0x70	
	bool m_bOnlyGoals; // 0x74	
	bool m_bPreventOvershoot; // 0x75	
	bool m_bPreventUndershoot; // 0x76	
};

// Alignment: 0
// Size: 0x60
class CZeroPoseUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xc
struct TagSpan_t
{
public:
	int32_t m_tagIndex; // 0x0	
	float m_startCycle; // 0x4	
	float m_endCycle; // 0x8	
};

// Alignment: 10
// Size: 0x100
class CAnimUpdateSharedData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10	
	CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28	
	CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // 0x48	
	CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater; // 0x60	
	CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // 0x68	
	CSmartPtr< CAnimScriptManager > m_scriptManager; // 0x70	
	CAnimGraphSettingsManager m_settings; // 0x78	
	CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0xa8	
	CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0xb0	
	CAnimNodePath m_rootNodePath; // 0xb8	
};

// Alignment: 2
// Size: 0x4
class ConfigIndex
{
public:
	uint16_t m_nGroup; // 0x0	
	uint16_t m_nConfig; // 0x2	
};

// Alignment: 2
// Size: 0x4
class MotionIndex
{
public:
	uint16_t m_nGroup; // 0x0	
	uint16_t m_nMotion; // 0x2	
};

// Alignment: 5
// Size: 0x20
class CMotionGraphConfig
{
public:
	float m_paramValues[4]; // 0x0	
	float m_flDuration; // 0x10	
	MotionIndex m_nMotionIndex; // 0x14	
	int32_t m_nSampleStart; // 0x18	
	int32_t m_nSampleCount; // 0x1c	
};

// Alignment: 4
// Size: 0x80
class CSingleFrameUpdateNode : public CLeafUpdateNode
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x58	
	CPoseHandle m_hPoseCacheHandle; // 0x70	
	HSequence m_hSequence; // 0x74	
	float m_flCycle; // 0x78	
};

// Alignment: 3
// Size: 0x40
class CAnimationGraphVisualizerPrimitiveBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8	
	AnimNodeID m_OwningAnimNodePaths[11]; // 0xc	
	int32_t m_nOwningAnimNodePathCount; // 0x38	
};

// Alignment: 3
// Size: 0x60
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x40	
	Color m_Color; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlString m_Text; // 0x58	
};

// Alignment: 3
// Size: 0x60
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x40	
	float m_flRadius; // 0x50	
	Color m_Color; // 0x54	
};

// Alignment: 3
// Size: 0x70
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x40	
	VectorAligned m_vWsPositionEnd; // 0x50	
	Color m_Color; // 0x60	
};

// Alignment: 4
// Size: 0x80
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x40	
	VectorAligned m_vWsStart; // 0x50	
	VectorAligned m_vWsEnd; // 0x60	
	Color m_Color; // 0x70	
};

// Alignment: 2
// Size: 0x70
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x40	
	float m_flAxisSize; // 0x60	
};

// Alignment: 1
// Size: 0x10
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0	
};

// Alignment: 5
// Size: 0x28
struct IKTargetSettings_t
{
public:
	// MPropertyFriendlyName "Target Source"
	// MPropertyAttrChangeCallback
	IKTargetSource m_TargetSource; // 0x0	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttrStateCallback
	IKBoneNameAndIndex_t m_Bone; // 0x8	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNamePosition; // 0x18	
	// MPropertyFriendlyName "Animgraph Orientation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNameOrientation; // 0x1c	
	// MPropertyFriendlyName "Target Coords"
	// MPropertyAttrStateCallback
	IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20	
};

// Alignment: 6
// Size: 0x50
struct ChainToSolveData_t
{
public:
	int32_t m_nChainIndex; // 0x0	
	IKSolverSettings_t m_SolverSettings; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	IKTargetSettings_t m_TargetSettings; // 0x10	
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38	
	float m_flDebugNormalizedValue; // 0x3c	
	VectorAligned m_vDebugOffset; // 0x40	
};

// Alignment: 1
// Size: 0x28
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking"
	bool m_bNetworkingEnabled; // 0x20	
};

// Alignment: 1
// Size: 0x48
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30	
};

// Alignment: 4
// Size: 0x98
class CAddUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c	
	bool m_bApplyToFootMotion; // 0x90	
	bool m_bApplyChannelsSeparately; // 0x91	
	bool m_bUseModelSpace; // 0x92	
};

// Alignment: 6
// Size: 0x160
class CAimMatrixUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0140[0x8]; // 0x140
public:
	AnimVectorSource m_target; // 0x148	
	CAnimParamHandle m_paramIndex; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014e[0x2]; // 0x14e
public:
	HSequence m_hSequence; // 0x150	
	bool m_bResetChild; // 0x154	
	bool m_bLockWhenWaning; // 0x155	
};

// Alignment: 0
// Size: 0x60
class CBindPoseUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x70
class CChoreoUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CCycleControlUpdateNode : public CUnaryUpdateNode
{
public:
	AnimValueSource m_valueSource; // 0x68	
	CAnimParamHandle m_paramIndex; // 0x6c	
};

// Alignment: 5
// Size: 0x90
class CCycleControlClipUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< TagSpan_t > m_tags; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0078[0x4]; // 0x78
public:
	HSequence m_hSequence; // 0x7c	
	float m_duration; // 0x80	
	AnimValueSource m_valueSource; // 0x84	
	CAnimParamHandle m_paramIndex; // 0x88	
};

// Alignment: 8
// Size: 0xa8
class CDirectionalBlendUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
public:
	HSequence m_hSequences[8]; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	CAnimInputDamping m_damping; // 0x80	
	AnimValueSource m_blendValueSource; // 0x90	
	CAnimParamHandle m_paramIndex; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0096[0x2]; // 0x96
public:
	float m_playbackSpeed; // 0x98	
	float m_duration; // 0x9c	
	bool m_bLoop; // 0xa0	
	bool m_bLockBlendOnReset; // 0xa1	
};

// Alignment: 3
// Size: 0x88
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	bool m_bFinishEarly; // 0x6c	
	bool m_bResetOnFinish; // 0x6d	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70	
};

// Alignment: 13
// Size: 0xa8
class CFollowPathUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	float m_flBlendOutTime; // 0x6c	
	bool m_bBlockNonPathMovement; // 0x70	
	bool m_bStopFeetAtGoal; // 0x71	
	bool m_bScaleSpeed; // 0x72	
private:
	[[maybe_unused]] uint8_t __pad0073[0x1]; // 0x73
public:
	float m_flScale; // 0x74	
	float m_flMinAngle; // 0x78	
	float m_flMaxAngle; // 0x7c	
	float m_flSpeedScaleBlending; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	CAnimInputDamping m_turnDamping; // 0x88	
	AnimValueSource m_facingTarget; // 0x98	
	CAnimParamHandle m_hParam; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
public:
	float m_flTurnToFaceOffset; // 0xa0	
	bool m_bTurnToFace; // 0xa4	
};

// Alignment: 1
// Size: 0x110
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	FollowAttachmentSettings_t m_opFixedData; // 0x70	
};

// Alignment: 9
// Size: 0xa8
class CFootAdjustmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	CUtlVector< HSequence > m_clips; // 0x70	
	CPoseHandle m_hBasePoseCacheHandle; // 0x88	
	CAnimParamHandle m_facingTarget; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad008e[0x2]; // 0x8e
public:
	float m_flTurnTimeMin; // 0x90	
	float m_flTurnTimeMax; // 0x94	
	float m_flStepHeightMax; // 0x98	
	float m_flStepHeightMaxAngle; // 0x9c	
	bool m_bResetChild; // 0xa0	
	bool m_bAnimationDriven; // 0xa1	
};

// Alignment: 20
// Size: 0x138
class CFootLockUpdateNode : public CUnaryUpdateNode
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad00c8[0x8]; // 0xc8
public:
	CUtlVector< FootFixedSettings > m_footSettings; // 0xd0	
	CAnimInputDamping m_hipShiftDamping; // 0xe8	
	CAnimInputDamping m_rootHeightDamping; // 0xf8	
	float m_flStrideCurveScale; // 0x108	
	float m_flStrideCurveLimitScale; // 0x10c	
	float m_flStepHeightIncreaseScale; // 0x110	
	float m_flStepHeightDecreaseScale; // 0x114	
	float m_flHipShiftScale; // 0x118	
	float m_flBlendTime; // 0x11c	
	float m_flMaxRootHeightOffset; // 0x120	
	float m_flMinRootHeightOffset; // 0x124	
	float m_flTiltPlanePitchSpringStrength; // 0x128	
	float m_flTiltPlaneRollSpringStrength; // 0x12c	
	bool m_bApplyFootRotationLimits; // 0x130	
	bool m_bApplyHipShift; // 0x131	
	bool m_bModulateStepHeight; // 0x132	
	bool m_bResetChild; // 0x133	
	bool m_bEnableVerticalCurvedPaths; // 0x134	
	bool m_bEnableRootHeightDamping; // 0x135	
};

// Alignment: 4
// Size: 0xc8
class CFootPinningUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70	
	FootPinningTimingSource m_eTimingSource; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	CUtlVector< CAnimParamHandle > m_params; // 0xa8	
	bool m_bResetChild; // 0xc0	
};

// Alignment: 2
// Size: 0x88
class CFootStepTriggerUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< FootStepTrigger > m_triggers; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0080[0x4]; // 0x80
public:
	float m_flTolerance; // 0x84	
};

// Alignment: 8
// Size: 0xc8
class CHitReactUpdateNode : public CUnaryUpdateNode
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x8]; // 0xac
public:
	CAnimParamHandle m_triggerParam; // 0xb4	
	CAnimParamHandle m_hitBoneParam; // 0xb6	
	CAnimParamHandle m_hitOffsetParam; // 0xb8	
	CAnimParamHandle m_hitDirectionParam; // 0xba	
	CAnimParamHandle m_hitStrengthParam; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
public:
	float m_flMinDelayBetweenHits; // 0xc0	
	bool m_bResetChild; // 0xc4	
};

// Alignment: 0
// Size: 0x60
class CInputStreamUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x88
class CJiggleBoneUpdateNode : public CUnaryUpdateNode
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68	
};

// Alignment: 8
// Size: 0xd0
class CJumpHelperUpdateNode : public CSequenceUpdateNode
{
public:
	CAnimParamHandle m_hTargetParam; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00aa[0x2]; // 0xaa
public:
	Vector m_flOriginalJumpMovement; // 0xac	
	float m_flOriginalJumpDuration; // 0xb8	
	float m_flJumpStartCycle; // 0xbc	
	float m_flJumpEndCycle; // 0xc0	
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc4	
	bool m_bTranslationAxis[3]; // 0xc8	
	bool m_bScaleSpeed; // 0xcb	
};

// Alignment: 6
// Size: 0x150
class CLookAtUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0130[0x8]; // 0x130
public:
	AnimVectorSource m_target; // 0x138	
	CAnimParamHandle m_paramIndex; // 0x13c	
	CAnimParamHandle m_weightParamIndex; // 0x13e	
	bool m_bResetChild; // 0x140	
	bool m_bLockWhenWaning; // 0x141	
};

// Alignment: 12
// Size: 0xa0
class CMoverUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	CAnimInputDamping m_damping; // 0x70	
	AnimValueSource m_facingTarget; // 0x80	
	CAnimParamHandle m_hMoveVecParam; // 0x84	
	CAnimParamHandle m_hMoveHeadingParam; // 0x86	
	CAnimParamHandle m_hTurnToFaceParam; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008a[0x2]; // 0x8a
public:
	float m_flTurnToFaceOffset; // 0x8c	
	float m_flTurnToFaceLimit; // 0x90	
	bool m_bAdditive; // 0x94	
	bool m_bApplyMovement; // 0x95	
	bool m_bOrientMovement; // 0x96	
	bool m_bApplyRotation; // 0x97	
	bool m_bLimitOnly; // 0x98	
};

// Alignment: 2
// Size: 0x70
class CPathHelperUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flStoppingRadius; // 0x68	
	float m_flStoppingSpeedScale; // 0x6c	
};

// Alignment: 2
// Size: 0x70
class CRagdollUpdateNode : public CUnaryUpdateNode
{
public:
	int32_t m_nWeightListIndex; // 0x68	
	RagdollPoseControl m_poseControlMethod; // 0x6c	
};

// Alignment: 0
// Size: 0x68
class CRootUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CSetFacingUpdateNode : public CUnaryUpdateNode
{
public:
	FacingMode m_facingMode; // 0x68	
	bool m_bResetChild; // 0x6c	
};

// Alignment: 1
// Size: 0x70
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flSlowDownStrength; // 0x68	
};

// Alignment: 2
// Size: 0xa8
class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< CSolveIKTargetHandle_t > m_targetHandles; // 0x68	
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80	
};

// Alignment: 1
// Size: 0x70
class CSpeedScaleUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_paramIndex; // 0x68	
};

// Alignment: 4
// Size: 0x98
class CStanceOverrideUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68	
	CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80	
	CAnimParamHandle m_hParameter; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
public:
	StanceOverrideMode m_eMode; // 0x94	
};

// Alignment: 1
// Size: 0x70
class CStanceScaleUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_hParam; // 0x68	
};

// Alignment: 5
// Size: 0x90
class CStopAtGoalUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	float m_flOuterRadius; // 0x6c	
	float m_flInnerRadius; // 0x70	
	float m_flMaxScale; // 0x74	
	float m_flMinScale; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	CAnimInputDamping m_damping; // 0x80	
};

// Alignment: 6
// Size: 0x88
class CTurnHelperUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	AnimValueSource m_facingTarget; // 0x6c	
	float m_turnStartTimeOffset; // 0x70	
	float m_turnDuration; // 0x74	
	bool m_bMatchChildDuration; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	float m_manualTurnOffset; // 0x7c	
	bool m_bUseManualTurnOffset; // 0x80	
};

// Alignment: 1
// Size: 0x1e0
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70	
};

