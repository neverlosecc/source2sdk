#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: animationsystem.dll
// Classes count: 451
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
// Size: 0x8
enum class AnimParamType_t : uint32_t
{
	ANIMPARAM_UNKNOWN = 0x0,
	ANIMPARAM_BOOL = 0x1,
	ANIMPARAM_ENUM = 0x2,
	ANIMPARAM_INT = 0x3,
	ANIMPARAM_FLOAT = 0x4,
	ANIMPARAM_VECTOR = 0x5,
	ANIMPARAM_QUATERNION = 0x6,
	ANIMPARAM_COUNT = 0x7,
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
// Size: 0x2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class Comparison_t : uint32_t
{
	COMPARISON_EQUALS = 0x0,
	COMPARISON_NOT_EQUALS = 0x1,
	COMPARISON_GREATER = 0x2,
	COMPARISON_GREATER_OR_EQUAL = 0x3,
	COMPARISON_LESS = 0x4,
	COMPARISON_LESS_OR_EQUAL = 0x5,
	COMPARISON_COUNT = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class ComparisonValueType : uint32_t
{
	COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
	COMPARISONVALUETYPE_CONTROLVALUE = 0x1,
	COMPARISONVALUETYPE_PARAMETER = 0x2,
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
// Size: 0x2
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
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
// Size: 0x3
enum class FacingMode : uint32_t
{
	FacingMode_Manual = 0x0,
	FacingMode_Path = 0x1,
	FacingMode_LookTarget = 0x2,
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

// Alignment: 4
// Size: 0x24
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
	Parameter = 0x8,
	WayPointHeading = 0x9,
	WayPointDistance = 0xa,
	BoundaryRadius = 0xb,
	TargetMoveHeading = 0xc,
	TargetMoveSpeed = 0xd,
	AccelerationHeading = 0xe,
	AccelerationSpeed = 0xf,
	SlopeHeading = 0x10,
	SlopeAngle = 0x11,
	SlopePitch = 0x12,
	SlopeYaw = 0x13,
	GoalDistance = 0x14,
	AccelerationLeftRight = 0x15,
	AccelerationFrontBack = 0x16,
	RootMotionSpeed = 0x17,
	RootMotionTurnSpeed = 0x18,
	MoveHeadingRelativeToLookHeading = 0x19,
	MaxMoveSpeed = 0x1a,
	FingerCurl_Thumb = 0x1b,
	FingerCurl_Index = 0x1c,
	FingerCurl_Middle = 0x1d,
	FingerCurl_Ring = 0x1e,
	FingerCurl_Pinky = 0x1f,
	FingerSplay_Thumb_Index = 0x20,
	FingerSplay_Index_Middle = 0x21,
	FingerSplay_Middle_Ring = 0x22,
	FingerSplay_Ring_Pinky = 0x23,
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
// Size: 0x28
enum class ControlValue : uint32_t
{
	ControlValue_MoveHeading = 0x0,
	ControlValue_MoveSpeed = 0x1,
	ControlValue_FacingHeading = 0x2,
	ControlValue_LookHeading = 0x3,
	ControlValue_LookPitch = 0x4,
	ControlValue_WayPointHeading = 0x5,
	ControlValue_WayPointDistance = 0x6,
	ControlValue_BoundaryRadius = 0x7,
	ControlValue_TotalTranslation_SourceState = 0x8,
	ControlValue_TotalTranslation_TargetState = 0x9,
	ControlValue_RemainingTranslation_SourceState = 0xa,
	ControlValue_RemainingTranslation_TargetState = 0xb,
	ControlValue_MoveVsFacingDelta = 0xc,
	ControlValue_SourceStateBlendWeight = 0xd,
	ControlValue_TargetStateBlendWeight = 0xe,
	ControlValue_TargetMoveHeading = 0xf,
	ControlValue_TargetMoveSpeed = 0x10,
	ControlValue_AccelerationHeading = 0x11,
	ControlValue_AccelerationSpeed = 0x12,
	ControlValue_SlopeHeading = 0x13,
	ControlValue_SlopeAngle = 0x14,
	ControlValue_SlopeYaw = 0x15,
	ControlValue_SlopePitch = 0x16,
	ControlValue_GoalDistance = 0x17,
	ControlValue_AccelerationLeftRight = 0x18,
	ControlValue_AccelerationFrontBack = 0x19,
	ControlValue_RootMotionSpeed = 0x1a,
	ControlValue_RootMotionTurnSpeed = 0x1b,
	ControlValue_MoveHeadingRelativeToLookHeading = 0x1c,
	ControlValue_FingerCurl_Thumb = 0x1d,
	ControlValue_FingerCurl_Index = 0x1e,
	ControlValue_FingerCurl_Middle = 0x1f,
	ControlValue_FingerCurl_Ring = 0x20,
	ControlValue_FingerCurl_Pinky = 0x21,
	ControlValue_FingerSplay_Thumb_Index = 0x22,
	ControlValue_FingerSplay_Index_Middle = 0x23,
	ControlValue_FingerSplay_Middle_Ring = 0x24,
	ControlValue_FingerSplay_Ring_Pinky = 0x25,
	ControlValue_Count = 0x26,
	ControlValue_Invalid = 0xff,
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
// Size: 0x2
enum class DampedValueType : uint32_t
{
	FloatParameter = 0x0,
	VectorParameter = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class MotionSamplingMethod : uint32_t
{
	Uniform = 0x0,
	AtFootCycleStart = 0x1,
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
// Size: 0x3
enum class SelectorTagBehavior_t : uint32_t
{
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	SelectorTagBehavior_OffWhenFinished = 0x1,
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class FootLockSubVisualization : uint32_t
{
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class JumpCorrectionMethod : uint32_t
{
	ScaleMotion = 0x0,
	AddCorrectionDelta = 0x1,
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
enum class FinishedConditionOption : uint32_t
{
	FinishedConditionOption_OnFinished = 0x0,
	FinishedConditionOption_OnAlmostFinished = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class PathStatusOptions : uint32_t
{
	PathStatus_HasPath = 0x0,
	PathStatus_WaypointIsGoal = 0x1,
	PathStatus_GoalHasChanged = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class StateValue : uint32_t
{
	TotalTranslation_SourceState = 0x0,
	TotalTranslation_TargetState = 0x1,
	RemainingTranslation_SourceState = 0x2,
	RemainingTranslation_TargetState = 0x3,
	SourceStateBlendWeight = 0x4,
	TargetStateBlendWeight = 0x5,
	Count = 0x6,
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
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_BoneMask = 0x2,
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

// Alignment: 4
// Size: 0x3
enum class JiggleBoneSimSpace : uint32_t
{
	SimSpace_Local = 0x0,
	SimSpace_Model = 0x1,
	SimSpace_World = 0x2,
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
// Size: 0x2
enum class VPhysXJoint_t__Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
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
// Size: 0x17
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
	FLAG_RETARGET_SRC = 0x200,
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

struct CRangeFloat;
struct AnimationDecodeDebugDumpElement_t;
struct CAnimEncodeDifference;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct CAnimKeyData;
struct CAnimRetargetData;
struct CSeqAutoLayerFlag;
struct CSeqMultiFetchFlag;
struct CSeqSeqDescFlag;
struct CSeqMultiFetch;
struct CSeqTransition;
struct AnimNodeID;
struct AnimNodeOutputID;
struct IKBoneNameAndIndex_t;
struct AnimParamID;
struct CAnimNodeManager;
struct CAnimComponentManager;
struct CAnimGraphSettingsManager;
struct CAnimNodePath;
struct HSequence;
struct AnimComponentID;
struct CAnimInputDamping;
struct CAnimParamHandle;
struct AnimTagID;
struct CAnimNodeConnection;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct CBlendCurve;
struct AnimStateID;
struct CAnimUpdateNodeRef;
struct CAnimAttachment;
struct SkeletalInputOpFixedSettings_t;
struct HitReactFixedSettings_t;
struct StaticPoseCacheHandle;
struct TraceSettings_t;
struct FootLockPoseOpFixedSettings;
struct CMotionDataSet;
struct JiggleBoneSettingsList_t;
struct CompValues;
struct StateComparisonValue;
struct ClipIndex;
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
struct CRenderSkeleton;
struct CAnimCycle;
struct CFootCycle;
struct CFootCycleDefinition;
struct CFootTrajectories;
struct CAnimClipDataManager;
struct AnimScriptHandle;
struct CAnimStateMachineUpdater;
struct AimMatrixOpFixedSettings_t;
struct TwoBoneIKSettings_t;
struct SolveIKChainPoseOpFixedSettings_t;
struct LookAtOpFixedSettings_t;
struct FollowAttachmentSettings_t;

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
class CAnimAnimEvent
{
public:
	int32_t m_nFrame; // 0x0	
	float m_flCycle; // 0x4	
	KeyValues3 m_EventData; // 0x8	
	// MKV3TransferName "m_sOptions"
	CBufferString m_sLegacyOptions; // 0x18	
	CBufferString m_sEventName; // 0x28	
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
// Size: 0x14
class CAnimIKRuleStallFrame
{
public:
	int16_t chain; // 0x0	
	int16_t slot; // 0x2	
	float start; // 0x4	
	float peak; // 0x8	
	float tail; // 0xc	
	float end; // 0x10	
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

// Alignment: 7
// Size: 0x7
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
private:
	[[maybe_unused]] uint8_t __pad0017[0x1]; // 0x17
public:
	float fps; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MKV3TransferName "m_pData"
	CAnimEncodedFrames m_Data; // 0x20	
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8	
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110	
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

// Alignment: 6
// Size: 0x48
class CAnimBone
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_parent; // 0x10	
	Vector m_pos; // 0x14	
	Quaternion m_quat; // 0x20	
	Quaternion m_qAlignment; // 0x30	
	int32_t m_flags; // 0x40	
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

// Alignment: 13
// Size: 0xa8
class CAnimRetargetElementData
{
public:
	int32_t m_nElementType; // 0x0	
	int32_t m_nGroupType; // 0x4	
	int32_t m_nChainType; // 0x8	
	int32_t m_nChainIndex; // 0xc	
	int32_t m_nChainInvIndex; // 0x10	
	int32_t m_nBoneIndex; // 0x14	
	CBufferString m_boneName; // 0x18	
	matrix3x4_t m_transform; // 0x28	
	matrix3x4_t m_invTransform; // 0x58	
	float m_flDistance; // 0x88	
	Vector m_vecMin; // 0x8c	
	Vector m_vecMax; // 0x98	
	float m_flMass; // 0xa4	
};

// Alignment: 4
// Size: 0x30
class CAnimRetargetChainData
{
public:
	CBufferString m_sChainName; // 0x0	
	int32_t m_nGroupType; // 0x10	
	int32_t m_nChainType; // 0x14	
	CUtlVector< int32 > m_nElement; // 0x18	
};

// Alignment: 5
// Size: 0x50
class CAnimRetargetData
{
public:
	int32_t m_bEnableRetarget; // 0x0	
	int32_t m_nRetargetStyle; // 0x4	
	CUtlVector< CAnimRetargetElementData > m_element; // 0x8	
	CUtlVector< CAnimRetargetChainData > m_chain; // 0x20	
	CUtlVector< CBufferString > m_replicated; // 0x38	
};

// Alignment: 8
// Size: 0x180
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
	CAnimRetargetData m_retarget; // 0x110	
	CUtlVector< CBufferString > m_szScripts; // 0x160	
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
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x48	
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

// Alignment: 13
// Size: 0x120
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
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xb8	
	CBufferString m_localNodeName; // 0xd0	
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xe0	
	KeyValues3 m_keyValues; // 0xf8	
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x108	
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
	CUtlVector< CCompressor< Quaternion >* > m_quaternionCompressor; // 0x110	
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
	int32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 1
// Size: 0x10
class CAnimationGraphVisualizerPrimitiveBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8	
};

// Alignment: 3
// Size: 0x30
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	Color m_Color; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlString m_Text; // 0x28	
};

// Alignment: 3
// Size: 0x30
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	float m_flRadius; // 0x20	
	Color m_Color; // 0x24	
};

// Alignment: 3
// Size: 0x40
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x10	
	VectorAligned m_vWsPositionEnd; // 0x20	
	Color m_Color; // 0x30	
};

// Alignment: 4
// Size: 0x50
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x10	
	VectorAligned m_vWsStart; // 0x20	
	VectorAligned m_vWsEnd; // 0x30	
	Color m_Color; // 0x40	
};

// Alignment: 2
// Size: 0x40
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10	
	float m_flAxisSize; // 0x30	
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
class StaticPoseCacheHandle
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

// Alignment: 2
// Size: 0x8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0	
	float m_flControlPoint2; // 0x4	
};

// Alignment: 2
// Size: 0x30
class CAnimNodePath
{
public:
	AnimNodeID m_path[11]; // 0x0	
	int32_t m_nCount; // 0x2c	
};

// Alignment: 2
// Size: 0x8
class CAnimNodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0	
	AnimNodeOutputID m_outputID; // 0x4	
};

// Alignment: 2
// Size: 0x4
class ClipIndex
{
public:
	uint16_t m_groupIndex; // 0x0	
	uint16_t m_clipIndex; // 0x2	
};

// Alignment: 1
// Size: 0x10
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0	
};

// Alignment: 2
// Size: 0x8
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0	
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4	
};

// Alignment: 4
// Size: 0x20
struct IKTargetSettings_t
{
public:
	// MPropertyFriendlyName "Target Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKTargetSource m_TargetSource; // 0x0	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttrStateCallback
	IKBoneNameAndIndex_t m_Bone; // 0x8	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNamePosition; // 0x18	
	// MPropertyFriendlyName "Target Coords"
	// MPropertyAttrStateCallback
	IKTargetCoordinateSystem m_TargetCoordSystem; // 0x1c	
};

// Alignment: 1
// Size: 0x48
class CAnimNodeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8	
};

// Alignment: 2
// Size: 0x20
class CAnimGraphModelBinding
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_modelName; // 0x8	
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10	
};

// Alignment: 1
// Size: 0x38
class CAnimClipDataManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18	
};

// Alignment: 2
// Size: 0x48
class CAnimClipData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_clipName; // 0x38	
};

// Alignment: 1
// Size: 0x50
class CAnimParameterList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x18	
};

// Alignment: 1
// Size: 0x28
class CAnimNodeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10	
};

// Alignment: 1
// Size: 0x28
class CAnimComponentManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8	
};

// Alignment: 1
// Size: 0x28
class CAnimStateList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimState* > m_states; // 0x10	
};

// Alignment: 4
// Size: 0x18
class CAnimInputDamping
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
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

// Alignment: 1
// Size: 0x30
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
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

// Alignment: 10
// Size: 0xe8
class CAnimUpdateSharedData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10	
	CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28	
	CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // 0x48	
	CSmartPtr< CAnimParameterListUpdater > m_pParamListUpdater; // 0x60	
	CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // 0x68	
	CSmartPtr< CAnimScriptManager > m_scriptManager; // 0x70	
	CAnimGraphSettingsManager m_settings; // 0x78	
	CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0xa8	
	CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0xb0	
	CAnimNodePath m_rootNodePath; // 0xb8	
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

// Alignment: 1
// Size: 0x28
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking"
	bool m_bNetworkingEnabled; // 0x20	
};

// Alignment: 5
// Size: 0x48
class CAnimComponentBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyHideField
	CUtlString m_group; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	// MPropertyHideField
	AnimComponentID m_id; // 0x28	
	// MPropertyFriendlyName "Start Enabled"
	bool m_bStartEnabled; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x30	
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34	
};

// Alignment: 6
// Size: 0xf8
class CAnimationSubGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CAnimNodeManager m_nodeManager; // 0x10	
	CAnimComponentManager m_componentManager; // 0x58	
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x80	
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x98	
	CUtlVector< CUtlString > m_referencedParamGroups; // 0xb0	
	CUtlVector< CUtlString > m_referencedTagGroups; // 0xc8	
};

// Alignment: 2
// Size: 0x70
class CAnimScriptComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x48	
	// MPropertyFriendlyName "Script File"
	// MPropertyAttributeEditor "AssetBrowse( as )"
	// MPropertyAttrChangeCallback
	CUtlString m_scriptFilename; // 0x50	
};

// Alignment: 1
// Size: 0x60
class CActionComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_actions" @ 0x38 because of the struct collision
};

// Alignment: 6
// Size: 0x30
class CDampedValueItem
{
public:
	// MPropertyFriendlyName "Value Type"
	// MPropertyAttrChangeCallback
	DampedValueType m_valueType; // 0x0	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamIn; // 0x4	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateFloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamOut; // 0x8	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamIn; // 0xc	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateVectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamOut; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x18	
};

// Alignment: 1
// Size: 0x60
class CDampedValueComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_items" @ 0x38 because of the struct collision
};

// Alignment: 2
// Size: 0x8
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0	
	uint8_t m_index; // 0x4	
};

// Alignment: 7
// Size: 0x118
class CMovementComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Movement Modes"
	CUtlVector< CMovementMode > m_moveModes; // 0x48	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimMotorBase > > m_motors; // 0x60	
	// MPropertyFriendlyName "Network Path"
	bool m_bNetworkPath; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Default Mode"
	FacingMode m_eDefaultFacingMode; // 0x7c	
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_facingDamping; // 0x80	
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Network Facing"
	bool m_bNetworkFacing; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	// MPropertyHideField
	AnimParamID m_paramIDs[27]; // 0x9c	
};

// Alignment: 1
// Size: 0x50
class CLODComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_nServerLOD" @ 0x38 because of the struct collision
};

// Alignment: 6
// Size: 0x68
class CLookComponent : public CAnimComponentBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_bNetworkLookTarget" @ 0x40 because of the struct collision
	// Skipped field "m_lookHeadingID" @ 0x44 because of the struct collision
	// MPropertyHideField
	AnimParamID m_lookPitchID; // 0x48	
	// MPropertyHideField
	AnimParamID m_lookDirectionID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_lookTargetID; // 0x50	
	// MPropertyHideField
	AnimParamID m_lookTargetWorldSpaceID; // 0x54	
};

// Alignment: 2
// Size: 0x10
class CRigidBodyWeight
{
public:
	CUtlString m_name; // 0x0	
	float m_flWeight; // 0x8	
};

// Alignment: 2
// Size: 0x28
class CRigidBodyWeightList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlVector< CRigidBodyWeight > m_weights; // 0x10	
};

// Alignment: 1
// Size: 0x60
class CRagdollComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_weightLists" @ 0x38 because of the struct collision
};

// Alignment: 2
// Size: 0x20
class WeightList
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< float32 > m_weights; // 0x8	
};

// Alignment: 6
// Size: 0x68
class CSlopeComponent : public CAnimComponentBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_slopeAngleID" @ 0x40 because of the struct collision
	// Skipped field "m_slopeHeadingID" @ 0x44 because of the struct collision
	// MPropertyHideField
	AnimParamID m_slopeAngleSideID; // 0x48	
	// MPropertyHideField
	AnimParamID m_slopeAngleFrontID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_slopeNormalID; // 0x50	
	// MPropertyHideField
	AnimParamID m_slopeNormal_WorldSpaceID; // 0x54	
};

// Alignment: 9
// Size: 0x70
class CVRInputComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_FingerCurl_Thumb" @ 0x38 because of the struct collision
	// Skipped field "m_FingerCurl_Index" @ 0x3c because of the struct collision
	// Skipped field "m_FingerCurl_Middle" @ 0x40 because of the struct collision
	// Skipped field "m_FingerCurl_Ring" @ 0x44 because of the struct collision
	// MPropertyHideField
	AnimParamID m_FingerCurl_Pinky; // 0x48	
	// MPropertyHideField
	AnimParamID m_FingerSplay_Thumb_Index; // 0x4c	
	// MPropertyHideField
	AnimParamID m_FingerSplay_Index_Middle; // 0x50	
	// MPropertyHideField
	AnimParamID m_FingerSplay_Middle_Ring; // 0x54	
	// MPropertyHideField
	AnimParamID m_FingerSplay_Ring_Pinky; // 0x58	
};

// Alignment: 0
// Size: 0x38
class CAnimActionBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x40
class CEmitTagAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_tag" @ 0x28 because of the struct collision
};

// Alignment: 2
// Size: 0x50
class CSetParameterAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_param" @ 0x28 because of the struct collision
	// Skipped field "m_value" @ 0x2c because of the struct collision
};

// Alignment: 2
// Size: 0x40
class CToggleComponentAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_componentID" @ 0x28 because of the struct collision
	// Skipped field "m_bSetEnabled" @ 0x2c because of the struct collision
};

// Alignment: 1
// Size: 0x40
class CExpressionAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_expression" @ 0x28 because of the struct collision
};

// Alignment: 2
// Size: 0x28
class CAnimMotorBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyFriendlyName "Is Default"
	bool m_bDefault; // 0x20	
};

// Alignment: 1
// Size: 0x30
class CPathAnimMotorBase : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x28	
};

// Alignment: 0
// Size: 0x30
class CPathAnimMotor : public CPathAnimMotorBase
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x50
class CDampedPathAnimMotor : public CPathAnimMotorBase
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x30	
	// MPropertyFriendlyName "Minimum Speed Percentage"
	float m_flMinSpeedScale; // 0x34	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x38	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x3c	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x40	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x44	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x48	
};

// Alignment: 6
// Size: 0x58
class CPlayerInputAnimMotor : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x28	
	// MPropertyFriendlyName "Use Acceleration"
	// MPropertyAttrChangeCallback
	bool m_bUseAcceleration; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyAttrStateCallback
	float m_flSpringConstant; // 0x44	
	// MPropertyFriendlyName "Anticipation Distance"
	float m_flAnticipationDistance; // 0x48	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50	
};

// Alignment: 11
// Size: 0x48
class CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	CUtlString m_group; // 0x20	
	// MPropertyHideField
	AnimParamID m_id; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyHideField
	// MPropertyAttrChangeCallback
	CUtlString m_componentName; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x4]; // 0x38
public:
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x3c	
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x40	
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x41	
	// MPropertyFriendlyName "Internal"
	// MPropertyAttrStateCallback
	bool m_bInternal; // 0x42	
	// MPropertyHideField
	bool m_bIsReferenced; // 0x43	
	// MPropertyHideField
	bool m_bNetwork; // 0x44	
	// MPropertyFriendlyName "Disable Networking"
	bool m_bDisableNetworking; // 0x45	
};

// Alignment: 1
// Size: 0x50
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x48	
};

// Alignment: 2
// Size: 0x70
class CEnumAnimParameter : public CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x7]; // 0x51
public:
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x58	
};

// Alignment: 3
// Size: 0x58
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x48	
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x4c	
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x50	
};

// Alignment: 4
// Size: 0x58
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x48	
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x4c	
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x50	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x54	
};

// Alignment: 2
// Size: 0x58
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x48	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x54	
};

// Alignment: 2
// Size: 0x60
class CQuaternionAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x48	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x58	
};

// Alignment: 4
// Size: 0x48
class CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
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

// Alignment: 4
// Size: 0x90
class CSequenceAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x10]; // 0x48
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x58	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x70	
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x78	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x7c	
};

// Alignment: 3
// Size: 0x18
class CBlendNodeChild
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x10	
};

// Alignment: 9
// Size: 0x88
class CBlendAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_children" @ 0x38 because of the struct collision
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x50	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x54	
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x58	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x5c	
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x5d	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x5e	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x5f	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x60	
};

// Alignment: 2
// Size: 0x58
class CRagdollAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_weightListName" @ 0x38 because of the struct collision
	// Skipped field "m_inputConnection" @ 0x40 because of the struct collision
};

// Alignment: 1
// Size: 0x58
class CRootAnimNode : public CAnimNodeBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x40 because of the struct collision
};

// Alignment: 4
// Size: 0x18
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10	
	// MPropertyFriendlyName "Blend Time"
	float m_blendTime; // 0x14	
};

// Alignment: 9
// Size: 0x78
class CChoiceAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_children" @ 0x38 because of the struct collision
	// MPropertyHideField
	int32_t m_seed; // 0x50	
	// MPropertyFriendlyName "Method"
	ChoiceMethod m_choiceMethod; // 0x54	
	// MPropertyFriendlyName "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod; // 0x58	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Method"
	// MPropertyAttrChangeCallback
	ChoiceBlendMethod m_blendMethod; // 0x5c	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Duration"
	// MPropertyAttrStateCallback
	float m_blendTime; // 0x60	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Cross Fade"
	bool m_bCrossFade; // 0x64	
	// MPropertyFriendlyName "Reset On Selection"
	// MPropertyAttrChangeCallback
	bool m_bResetChosen; // 0x65	
	// MPropertyFriendlyName "Don't Reset Same Selection"
	// MPropertyAttrStateCallback
	bool m_bDontResetSameSelection; // 0x66	
};

// Alignment: 3
// Size: 0x58
class CCycleControlAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_valueSource" @ 0x40 because of the struct collision
	// Skipped field "m_param" @ 0x44 because of the struct collision
};

// Alignment: 4
// Size: 0x90
class CCycleControlClipAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x10]; // 0x48
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x58	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x70	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x78	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x7c	
};

// Alignment: 8
// Size: 0x68
class CAddAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_baseInput" @ 0x38 because of the struct collision
	// Skipped field "m_additiveInput" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x54	
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x55	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x56	
};

// Alignment: 8
// Size: 0x68
class CSubtractAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_baseInputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_subtractInputConnection" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x54	
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x55	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x56	
};

// Alignment: 12
// Size: 0x90
class CMoverAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_bApplyMovement" @ 0x40 because of the struct collision
	// Skipped field "m_moveVectorParam" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Orient Movement"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttrChangeCallback
	bool m_bOrientMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Movement Heading Parameter"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveHeadingParam; // 0x4c	
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x50	
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x51	
private:
	[[maybe_unused]] uint8_t __pad0052[0x2]; // 0x52
public:
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x54	
	// MPropertyFriendlyName "Turn to Face Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceLimit; // 0x58	
	// MPropertyFriendlyName "Face Direction"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x5c	
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68	
};

// Alignment: 2
// Size: 0x58
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flSlowDownStrength" @ 0x40 because of the struct collision
};

// Alignment: 7
// Size: 0x68
class CTurnHelperAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_facingTarget" @ 0x40 because of the struct collision
	// Skipped field "m_turnStartTime" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x48	
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x4c	
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x4d	
private:
	[[maybe_unused]] uint8_t __pad004e[0x2]; // 0x4e
public:
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x50	
};

// Alignment: 11
// Size: 0xa8
class CAimMatrixAnimNode : public CAnimNodeBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x48	
	// MPropertyFriendlyName "Angle Increment"
	float m_fAngleIncrement; // 0x50	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x54	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x60	
	// MPropertyFriendlyName "Blend Mode"
	// MPropertyAttrChangeCallback
	AimMatrixBlendMode m_blendMode; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	// MPropertyAttrStateCallback
	CUtlString m_boneMaskName; // 0x70	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x78	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x79	
private:
	[[maybe_unused]] uint8_t __pad007a[0x6]; // 0x7a
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80	
};

// Alignment: 2
// Size: 0x58
class CSpeedScaleAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_param" @ 0x40 because of the struct collision
};

// Alignment: 7
// Size: 0x80
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_animNamePrefix" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x48	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x4c	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x50	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x51	
private:
	[[maybe_unused]] uint8_t __pad0052[0x2]; // 0x52
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x54	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x58	
};

// Alignment: 6
// Size: 0x60
class CWayPointHelperAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flStartCycle" @ 0x40 because of the struct collision
	// Skipped field "m_flEndCycle" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x48	
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x49	
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x4a	
};

// Alignment: 13
// Size: 0x88
class CBoneMaskAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_weightListName" @ 0x38 because of the struct collision
	// Skipped field "m_inputConnection1" @ 0x40 because of the struct collision
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection2; // 0x48	
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x50	
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x58	
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_blendParameter; // 0x5c	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x60	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x64	
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x68	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x6c	
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x70	
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x71	
};

// Alignment: 1
// Size: 0x50
class CChoreoAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
};

// Alignment: 3
// Size: 0x58
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_bFinishEarly" @ 0x40 because of the struct collision
	// Skipped field "m_bResetOnFinish" @ 0x41 because of the struct collision
};

// Alignment: 7
// Size: 0x98
class CLeanMatrixAnimNode : public CAnimNodeBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_sequenceName" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x48	
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x4c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x50	
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x54	
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70	
};

// Alignment: 10
// Size: 0x90
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_ikChainName" @ 0x40 because of the struct collision
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x50	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_attachmentName; // 0x60	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_targetBoneName; // 0x68	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_targetParam; // 0x70	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x3]; // 0x75
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Rotation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_rotationParam; // 0x78	
};

// Alignment: 8
// Size: 0x58
class CSolveIKChainAnimNodeChainData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_IkChain; // 0x8	
	// MPropertyFriendlyName "Solver Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10	
	// MPropertyFriendlyName "Override Solver Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKSolverSettings_t m_OverrideSolverSettings; // 0x14	
	// MPropertyFriendlyName "Target Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1c	
	// MPropertyFriendlyName "Override Target Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKTargetSettings_t m_OverrideTargetSettings; // 0x20	
	// MPropertyFriendlyName "Debug Setting"
	// MPropertyGroupName "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x40	
	// MPropertyFriendlyName "Debug Normalized Length"
	// MPropertyGroupName "Debug"
	float m_flDebugNormalizedLength; // 0x44	
	// MPropertyFriendlyName "Debug Offset"
	// MPropertyGroupName "Debug"
	Vector m_vDebugOffset; // 0x48	
};

// Alignment: 2
// Size: 0x78
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x48	
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandSelf
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x50	
};

// Alignment: 14
// Size: 0xa0
class CLookAtAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_target" @ 0x40 because of the struct collision
	// Skipped field "m_param" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x50	
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58	
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	float m_flYawLimit; // 0x60	
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 180"
	float m_flPitchLimit; // 0x64	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x68	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x69	
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x6a	
private:
	[[maybe_unused]] uint8_t __pad006b[0x1]; // 0x6b
public:
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x6c	
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78	
};

// Alignment: 3
// Size: 0x58
class CPathHelperAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flStoppingRadius" @ 0x40 because of the struct collision
	// Skipped field "m_flStoppingSpeedScale" @ 0x44 because of the struct collision
};

// Alignment: 3
// Size: 0x18
class CConnectionProxyItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0	
	// MPropertyHideField
	AnimNodeOutputID m_outputID; // 0x8	
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0xc	
};

// Alignment: 1
// Size: 0x70
class CProxyAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "External Connections"
	// MPropertyAutoExpandSelf
	// MPropertyAttrChangeCallback
	CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x48	
};

// Alignment: 5
// Size: 0x68
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_boneName" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48	
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x50	
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x51	
};

// Alignment: 4
// Size: 0x58
class CSkeletalInputAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_transformSource" @ 0x38 because of the struct collision
	// Skipped field "m_motionRange" @ 0x3c because of the struct collision
	// Skipped field "m_bEnableIK" @ 0x40 because of the struct collision
	// Skipped field "m_bEnableCollision" @ 0x41 because of the struct collision
};

// Alignment: 10
// Size: 0xa8
class CSelectorAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CAnimNodeConnection > m_children; // 0x48	
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x60	
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x78	
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x7c	
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x80	
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x84	
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0x88	
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x8c	
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x8d	
private:
	[[maybe_unused]] uint8_t __pad008e[0x2]; // 0x8e
public:
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x90	
};

// Alignment: 24
// Size: 0xb8
class CHitReactAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flMinDelayBetweenHits" @ 0x40 because of the struct collision
	// Skipped field "m_triggerParam" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x48	
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x4c	
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x50	
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x54	
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x58	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x60	
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0x68	
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0x6c	
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0x70	
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0x74	
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0x78	
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0x7c	
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0x80	
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0x84	
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0x88	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8c	
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0x90	
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0x94	
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0x98	
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0x9c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xa0	
};

// Alignment: 3
// Size: 0x40
class CBlend2DItemBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Use Custom Duration"
	// MPropertyAttrChangeCallback
	bool m_bUseCustomDuration; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Custom Duration"
	// MPropertyAttrStateCallback
	float m_flCustomDuration; // 0x2c	
};

// Alignment: 2
// Size: 0x70
class CSequenceBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x40	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x58	
};

// Alignment: 2
// Size: 0x60
class CNodeBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x48	
};

// Alignment: 10
// Size: 0xa8
class CBlend2DAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CBlend2DItemBase > > m_items; // 0x50	
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceX; // 0x68	
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramX; // 0x6c	
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceY; // 0x70	
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramY; // 0x74	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x78	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x79	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x7a	
private:
	[[maybe_unused]] uint8_t __pad007b[0x1]; // 0x7b
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x7c	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80	
};

// Alignment: 10
// Size: 0x88
class CFootAdjustmentAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_facingTarget" @ 0x40 because of the struct collision
	// Skipped field "m_bResetChild" @ 0x44 because of the struct collision
	// Skipped field "m_bAnimationDriven" @ 0x45 because of the struct collision
	// MPropertyFriendlyName "Base Anim Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_baseClipName; // 0x48	
	// MPropertyFriendlyName "Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_clips; // 0x50	
	// MPropertyFriendlyName "Turn Time Min"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMin; // 0x68	
	// MPropertyFriendlyName "Turn Time Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMax; // 0x6c	
	// MPropertyFriendlyName "Step Height Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMax; // 0x70	
	// MPropertyFriendlyName "Step Height Max Angle"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMaxAngle; // 0x74	
};

// Alignment: 7
// Size: 0x28
class CFootLockItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0	
	// MPropertyFriendlyName "Target Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_targetBoneName; // 0x8	
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x10	
	// MPropertyFriendlyName "Disable Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_disableTagID; // 0x18	
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x1c	
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x20	
	// MPropertyFriendlyName "Footstep Landed Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_footstepLandedTag; // 0x24	
};

// Alignment: 36
// Size: 0x130
class CFootLockAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_items" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x60	
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x64	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x68	
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x70	
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x74	
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x78	
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x79	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x7c	
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x80	
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90	
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00a9[0x3]; // 0xa9
public:
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xac	
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xb0	
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// MPropertyFriendlyName "Tolerance"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakTolerance; // 0xb8	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xbc	
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xc4	
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc8	
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00cd[0x3]; // 0xcd
public:
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xd0	
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd8	
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xdc	
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xe0	
	// MPropertyFriendlyName "Enable Root Height Damping"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrChangeCallback
	bool m_bEnableRootHeightDamping; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyFriendlyName "Damping Settings"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_rootHeightDamping; // 0x100	
	// MPropertyFriendlyName "Max Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMaxRootHeightOffset; // 0x118	
	// MPropertyFriendlyName "Min Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMinRootHeightOffset; // 0x11c	
};

// Alignment: 14
// Size: 0x90
class CFollowPathAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flBlendOutTime" @ 0x40 because of the struct collision
	// Skipped field "m_bBlockNonPathMovement" @ 0x44 because of the struct collision
	// Skipped field "m_bStopFeetAtGoal" @ 0x45 because of the struct collision
	// Skipped field "m_bScaleSpeed" @ 0x46 because of the struct collision
	// MPropertyFriendlyName "Scale"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flScale; // 0x48	
	// MPropertyFriendlyName "Min Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMinAngle; // 0x4c	
	// MPropertyFriendlyName "Max Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMaxAngle; // 0x50	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrStateCallback
	float m_flSpeedScaleBlending; // 0x54	
	// MPropertyFriendlyName "Enable Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MPropertyFriendlyName "Target"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x5c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x60	
	// MPropertyFriendlyName "Offset"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x64	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68	
};

// Alignment: 24
// Size: 0xf0
class CMotionMatchingAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionClipGroup > > m_clipGroups; // 0x50	
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x68	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x80	
	// MPropertyFriendlyName "Prediction Time"
	float m_flPredictionTime; // 0x88	
	// MPropertyFriendlyName "Sampling Method"
	// MPropertyAttrChangeCallback
	MotionSamplingMethod m_samplingMethod; // 0x8c	
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttrStateCallback
	float m_flSampleRate; // 0x90	
	// MPropertyFriendlyName "Search at fixed interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrChangeCallback
	bool m_bSearchAtInterval; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x98	
	// MPropertyFriendlyName "Search on Steps"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchOnSteps; // 0x9c	
	// MPropertyFriendlyName "Search when tags change"
	// MPropertyGroupName "Search Triggers"
	bool m_bForceSearchWhenTagsChange; // 0x9d	
	// MPropertyFriendlyName "Search when clip ends"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenClipEnds; // 0x9e	
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenGoalChanges; // 0x9f	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0xa0	
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0xa4	
	// MPropertyFriendlyName "Lock Clip When Waning"
	bool m_bLockClipWhenWaning; // 0xa8	
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa9	
private:
	[[maybe_unused]] uint8_t __pad00aa[0x2]; // 0xaa
public:
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xac	
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xb0	
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb8	
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xbc	
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xc0	
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xc4	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc8	
};

// Alignment: 3
// Size: 0x58
class CSetFacingAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_facingMode" @ 0x40 because of the struct collision
	// Skipped field "m_bResetChild" @ 0x44 because of the struct collision
};

// Alignment: 6
// Size: 0x78
class CStopAtGoalAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flOuterRadius" @ 0x40 because of the struct collision
	// Skipped field "m_flInnerRadius" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x48	
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x4c	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50	
};

// Alignment: 7
// Size: 0x30
class CJiggleBoneItem
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x0	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8	
	// MPropertyFriendlyName "Sim Rate (FPS)"
	float m_flSimRateFPS; // 0xc	
	// MPropertyFriendlyName "Damping"
	// MPropertyAttributeRange "0 1"
	float m_flDamping; // 0x10	
	// MPropertyFriendlyName "Sim Space"
	JiggleBoneSimSpace m_eSimSpace; // 0x14	
	// MPropertyFriendlyName "Max"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMaxLS; // 0x18	
	// MPropertyFriendlyName "Min"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMinLS; // 0x24	
};

// Alignment: 2
// Size: 0x68
class CJiggleBoneAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_items" @ 0x40 because of the struct collision
};

// Alignment: 8
// Size: 0xb0
class CJumpHelperAnimNode : public CSequenceAnimNode
{
	// Collision detected(0x88->0x90), output may be wrong.
public:
	// Skipped field "m_targetParamID" @ 0x88 because of the struct collision
	// Skipped field "m_flJumpStartCycle" @ 0x8c because of the struct collision
	// MPropertySuppressField
	float m_flJumpDuration; // 0x90	
	// MPropertyFriendlyName "Translate X"
	bool m_bTranslateX; // 0x94	
	// MPropertyFriendlyName "Translate Y"
	bool m_bTranslateY; // 0x95	
	// MPropertyFriendlyName "Translate Z"
	bool m_bTranslateZ; // 0x96	
	// MPropertyFriendlyName "Apply Speed Scale"
	bool m_bScaleSpeed; // 0x97	
	// MPropertyFriendlyName "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod; // 0x98	
};

// Alignment: 2
// Size: 0x70
class CSingleFrameAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
	// MPropertyFriendlyName "Frame"
	int32_t m_nFrameIndex; // 0x58	
};

// Alignment: 3
// Size: 0x70
class CCommentAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlString m_commentText; // 0x48	
	// MPropertySuppressField
	Vector2D m_size; // 0x50	
	// MPropertyFriendlyName "Color"
	Color m_color; // 0x58	
};

// Alignment: 3
// Size: 0x90
class CContainerAnimNodeBase : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x10]; // 0x48
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x58	
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x5c	
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x60	
};

// Alignment: 0
// Size: 0x48
class CInputStreamAnimNode : public CAnimNodeBase
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x28
class CFootStepTriggerItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0	
	// MPropertyFriendlyName "Trigger Phase"
	StepPhase m_triggerPhase; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyFriendlyName "Tags"
	// MPropertyAttributeChoiceName "Tag"
	CUtlVector< AnimTagID > m_tags; // 0x10	
};

// Alignment: 3
// Size: 0x70
class CFootStepTriggerAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_flTolerance" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootStepTriggerItem > m_items; // 0x48	
};

// Alignment: 2
// Size: 0xe0
class CSubGraphAnimNode : public CContainerAnimNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x90	
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x98	
};

// Alignment: 2
// Size: 0x18
class CStateAction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CSmartPtr< CAnimActionBase > m_pAction; // 0x8	
	StateActionBehavior m_eBehavior; // 0x10	
};

// Alignment: 8
// Size: 0x70
class CAnimState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28	
	// MPropertySuppressField
	CUtlVector< CStateAction > m_actions; // 0x40	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x58	
	// MPropertyHideField
	AnimStateID m_stateID; // 0x60	
	// MPropertyHideField
	Vector2D m_position; // 0x64	
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x6c	
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x6d	
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x6e	
};

// Alignment: 3
// Size: 0x48
class CAnimStateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateConditionBase > > m_conditions; // 0x28	
	// MPropertyHideField
	AnimStateID m_destState; // 0x40	
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x44	
};

// Alignment: 1
// Size: 0x28
class CAnimStateMachine
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x8	
};

// Alignment: 2
// Size: 0x10
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0	
	StateActionBehavior m_eBehavior; // 0x8	
};

// Alignment: 4
// Size: 0x20
class CTransitionUpdateData
{
public:
	CUtlVector< CSmartPtr< ConditionUpdater > > m_conditions; // 0x0	
	int16_t m_srcStateIndex; // 0x18	
	int16_t m_destStateIndex; // 0x1a	
	struct 
	{
		uint8_t m_bDisabled: 1; 		
		uint8_t __pad0: 1;
	}; // 2 bits
};

// Alignment: 7
// Size: 0x40
class CStateUpdateData
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< int32 > m_transitionIndices; // 0x8	
	CUtlVector< CStateActionUpdater > m_actions; // 0x20	
	AnimStateID m_stateID; // 0x38	
	struct 
	{
		uint8_t m_bIsStartState: 1; 		
		uint8_t m_bIsEndState: 1; 		
		uint8_t m_bIsPassthrough: 1; 		
		uint8_t __pad1: 3;
	}; // 6 bits
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

// Alignment: 1
// Size: 0x30
class CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	uint8_t m_comparisonOp; // 0x28	
};

// Alignment: 2
// Size: 0x48
class CParameterAnimCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_paramID; // 0x30	
	// MPropertyFriendlyName "Comparison Value"
	CAnimVariant m_comparisonValue; // 0x34	
};

// Alignment: 2
// Size: 0x38
class CTagCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x30	
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x34	
};

// Alignment: 4
// Size: 0x40
class CCycleCondition : public CAnimStateConditionBase
{
public:
	float m_comparisonValue; // 0x30	
	int32_t m_comparisonValueType; // 0x34	
	ControlValue m_comparisonControlValue; // 0x38	
	AnimParamID m_comparisonParamID; // 0x3c	
};

// Alignment: 2
// Size: 0x38
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	FinishedConditionOption m_option; // 0x30	
	bool m_bIsFinished; // 0x34	
};

// Alignment: 1
// Size: 0x38
class CForceFacingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30	
};

// Alignment: 1
// Size: 0x38
class CFacingHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30	
};

// Alignment: 2
// Size: 0x38
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x30	
	bool m_bComparisonValue; // 0x34	
};

// Alignment: 5
// Size: 0x48
class CControlValueCondition : public CAnimStateConditionBase
{
public:
	ControlValue m_sourceControlValue; // 0x30	
	int32_t m_comparisonValueType; // 0x34	
	float m_comparisonFixedValue; // 0x38	
	ControlValue m_comparisonControlValue; // 0x3c	
	AnimParamID m_comparisonParamID; // 0x40	
};

// Alignment: 5
// Size: 0x48
class CStateStatusCondition : public CAnimStateConditionBase
{
public:
	StateValue m_sourceValue; // 0x30	
	ComparisonValueType m_comparisonValueType; // 0x34	
	float m_comparisonFixedValue; // 0x38	
	StateValue m_comparisonStateValue; // 0x3c	
	AnimParamID m_comparisonParamID; // 0x40	
};

// Alignment: 4
// Size: 0x40
class CTimeCondition : public CAnimStateConditionBase
{
public:
	int32_t m_comparisonValueType; // 0x30	
	float m_comparisonValue; // 0x34	
	ControlValue m_comparisonControlValue; // 0x38	
	AnimParamID m_comparisonParamID; // 0x3c	
};

// Alignment: 1
// Size: 0x38
class CGroundCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30	
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

// Alignment: 3
// Size: 0x30
class CAnimTagSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	AnimTagID m_id; // 0x20	
	float m_fStartCycle; // 0x24	
	float m_fDuration; // 0x28	
};

// Alignment: 1
// Size: 0x58
class CAnimTagManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18	
};

// Alignment: 4
// Size: 0x48
class CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x20	
	// MPropertyHideField
	CUtlString m_group; // 0x28	
	// MPropertyHideField
	AnimTagID m_tagID; // 0x30	
	// MPropertyHideField
	bool m_bIsReferenced; // 0x34	
};

// Alignment: 0
// Size: 0x50
class CStringAnimTag : public CAnimTagBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x58
class CPostGraphIKTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_flBlendAmount" @ 0x40 because of the struct collision
};

// Alignment: 3
// Size: 0x60
class CPostGraphIKChainBlendTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_ChainName" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Blend Amount on Enter"
	float m_flBlendAmountOnEnter; // 0x48	
	// MPropertyFriendlyName "Blend Amount on Exit"
	float m_flBlendAmountOnExit; // 0x4c	
};

// Alignment: 1
// Size: 0x58
class CFootFallAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_foot" @ 0x40 because of the struct collision
};

// Alignment: 1
// Size: 0x58
class CAudioAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_clipName" @ 0x40 because of the struct collision
};

// Alignment: 4
// Size: 0x70
class CFootstepLandedAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_FootstepType" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x48	
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x50	
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x58	
};

// Alignment: 1
// Size: 0x58
class CSequenceFinishedAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_sequenceName" @ 0x40 because of the struct collision
};

// Alignment: 1
// Size: 0x60
class CTaskStatusAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_identifierString" @ 0x40 because of the struct collision
};

// Alignment: 4
// Size: 0x68
class CClothSettingsAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_flStiffness" @ 0x40 because of the struct collision
	// Skipped field "m_flEaseIn" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x50	
};

// Alignment: 6
// Size: 0x68
class CRagdollAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_nPoseControl" @ 0x40 because of the struct collision
	// Skipped field "m_flFrequency" @ 0x44 because of the struct collision
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x48	
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x4c	
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x50	
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x54	
};

// Alignment: 4
// Size: 0x68
class CParticleAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_particleSystemName" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x48	
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x50	
	// MPropertyFriendlyName "Tag End Stop is Instant"
	bool m_bTagEndStopIsInstant; // 0x51	
};

// Alignment: 4
// Size: 0x68
class CMaterialAttributeAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_AttributeName" @ 0x40 because of the struct collision
	// MPropertyFriendlyName "Attribute Type"
	// MPropertyAttrChangeCallback
	MatterialAttributeTagType_t m_AttributeType; // 0x48	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	float m_flValue; // 0x4c	
	// MPropertyFriendlyName "Color"
	// MPropertyAttrStateCallback
	Color m_Color; // 0x50	
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
// Size: 0x78
class CBodyGroupAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "Body Group Settings"
	CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x50	
};

// Alignment: 3
// Size: 0x50
class CMotionClip
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x40	
};

// Alignment: 3
// Size: 0x48
class CMotionClipGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionClip > > m_clips; // 0x20	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	// MPropertyFriendlyName "Enable On Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x40	
};

// Alignment: 1
// Size: 0x28
class CMotionMetricBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	float m_flWeight; // 0x20	
};

// Alignment: 1
// Size: 0x40
class CFootCycleMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
};

// Alignment: 0
// Size: 0x28
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x50
class CPathMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyFriendlyName "Samples Times"
	CUtlVector< float32 > m_pathSamples; // 0x30	
	// MPropertyFriendlyName "Extrapolate Movement"
	// MPropertyAttrChangeCallback
	bool m_bExtrapolateMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Min Extrapolation Speed"
	// MPropertyAttrStateCallback
	float m_flMinExtrapolationSpeed; // 0x4c	
};

// Alignment: 1
// Size: 0x30
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
};

// Alignment: 5
// Size: 0x38
class CFutureVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c	
	// MPropertyFriendlyName "Ignore Direction"
	bool m_bIgnoreDirection; // 0x30	
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	bool m_bAutoTargetSpeed; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34	
};

// Alignment: 1
// Size: 0x30
class CBonePositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Alignment: 1
// Size: 0x30
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Alignment: 7
// Size: 0x48
class CDistanceRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Maximum Tracked Distance"
	float m_flMaxDistance; // 0x28	
	// MPropertyFriendlyName "Filter By Fixed Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterFixedMinDistance; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	// MPropertyFriendlyName "Min Distance"
	// MPropertyAttrStateCallback
	float m_flMinDistance; // 0x30	
	// MPropertyFriendlyName "Filter By Goal Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterGoalDistance; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyFriendlyName "Goal Filter Start Distance"
	// MPropertyAttrStateCallback
	float m_flStartGoalFilterDistance; // 0x38	
	// MPropertyFriendlyName "Filter By Goal Overshoot"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bFilterGoalOvershoot; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback
	float m_flMaxGoalOvershootScale; // 0x40	
};

// Alignment: 2
// Size: 0x48
class CStepsRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Min Steps Remaining"
	float m_flMinStepsRemaining; // 0x40	
};

// Alignment: 4
// Size: 0x38
class CTimeRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Match Time Remaining"
	// MPropertyGroupName
	// MPropertyAttrChangeCallback
	bool m_bMatchByTimeRemaining; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MPropertyFriendlyName "Max Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMaxTimeRemaining; // 0x2c	
	// MPropertyFriendlyName "Filter By Time Remaining"
	// MPropertyAttrChangeCallback
	bool m_bFilterByTimeRemaining; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MPropertyFriendlyName "Min Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMinTimeRemaining; // 0x34	
};

// Alignment: 2
// Size: 0x48
class CFootPositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Ignore Slope"
	bool m_bIgnoreSlope; // 0x40	
};

// Alignment: 5
// Size: 0x70
class CScriptModule
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_moduleName; // 0x10	
	CUtlString m_entryFunctionSignature; // 0x18	
	CAnimNodePath m_nodePath; // 0x20	
	AnimComponentID m_componentID; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< char > m_byteCode; // 0x58	
};

// Alignment: 1
// Size: 0x48
class CAnimScriptManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CScriptModule > > m_compiledModules; // 0x10	
};

// Alignment: 3
// Size: 0x30
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0	
	CAnimParamHandle m_hParamIn; // 0x20	
	CAnimParamHandle m_hParamOut; // 0x28	
};

// Alignment: 3
// Size: 0x60
class CAnimReplayFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlBinaryBlock m_instanceData; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	CTransform m_localToWorldTransform; // 0x30	
	float m_timeStamp; // 0x50	
};

// Alignment: 5
// Size: 0x88
class CAnimGraphDebugReplay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x58]; // 0x0
public:
	CUtlString m_animGraphFileName; // 0x58	
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x60	
	int32_t m_startIndex; // 0x78	
	int32_t m_writeIndex; // 0x7c	
	int32_t m_frameCount; // 0x80	
};

// Alignment: 5
// Size: 0xa8
class CAnimParameterListUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18	
	CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30	
	CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50	
	CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70	
	CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88	
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

// Alignment: 3
// Size: 0x28
class CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	AnimComponentID m_id; // 0x18	
	AnimNodeNetworkMode m_networkMode; // 0x1c	
	bool m_bStartEnabled; // 0x20	
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
// Size: 0x160
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CMovementMode > m_movementModes; // 0x28	
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x40	
	CAnimInputDamping m_facingDamping; // 0x58	
	FacingMode m_eDefaultFacingMode; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x8]; // 0x74
public:
	int32_t m_nDefaultMotorIndex; // 0x7c	
	bool m_bMoveVarsDisabled; // 0x80	
	bool m_bNetworkPath; // 0x81	
	bool m_bNetworkFacing; // 0x82	
private:
	[[maybe_unused]] uint8_t __pad0083[0x1]; // 0x83
public:
	CAnimParamHandle m_paramHandles[27]; // 0x84	
};

// Alignment: 6
// Size: 0x58
class CLookComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	CAnimParamHandle m_hLookHeading; // 0x2c	
	CAnimParamHandle m_hLookPitch; // 0x34	
	CAnimParamHandle m_hLookDirection; // 0x3c	
	CAnimParamHandle m_hLookTarget; // 0x44	
	CAnimParamHandle m_hLookTargetWorldSpace; // 0x4c	
	bool m_bNetworkLookTarget; // 0x54	
};

// Alignment: 6
// Size: 0x60
class CSlopeComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	CAnimParamHandle m_hSlopeAngle; // 0x2c	
	CAnimParamHandle m_hSlopeAngleFront; // 0x34	
	CAnimParamHandle m_hSlopeAngleSide; // 0x3c	
	CAnimParamHandle m_hSlopeHeading; // 0x44	
	CAnimParamHandle m_hSlopeNormal; // 0x4c	
	CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x54	
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

// Alignment: 0
// Size: 0x28
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x50
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	float m_flAnticipationTime; // 0x2c	
	float m_flMinSpeedScale; // 0x30	
	CAnimParamHandle m_hAnticipationPosParam; // 0x34	
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x3c	
	float m_flSpringConstant; // 0x44	
	float m_flMinSpringTension; // 0x48	
	float m_flMaxSpringTension; // 0x4c	
};

// Alignment: 6
// Size: 0x58
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
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x4c	
	bool m_bUseAcceleration; // 0x54	
};

// Alignment: 6
// Size: 0x14
class CStateNodeTransitionData
{
public:
	CBlendCurve m_curve; // 0x0	
	float m_blendDuration; // 0x8	
	float m_resetCycleValue; // 0xc	
	struct 
	{
		uint8_t m_bReset: 1; 		
		uint8_t m_resetCycleOption: 3; 		
		uint8_t m_bForceFootPlant: 1; 		
		uint8_t __pad2: 5;
	}; // 10 bits
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

// Alignment: 3
// Size: 0x58
class CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CAnimNodePath m_nodePath; // 0x18	
	CUtlString m_name; // 0x48	
	AnimNodeNetworkMode m_networkMode; // 0x50	
};

// Alignment: 13
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
private:
	[[maybe_unused]] uint8_t __pad0094[0x8c]; // 0x94
public:
	int32_t m_targetBoneIndex; // 0x120	
	CAnimParamHandle m_hPositionParam; // 0x124	
	CAnimParamHandle m_hRotationParam; // 0x12c	
	bool m_bMatchTargetOrientation; // 0x134	
	bool m_bAlwaysUseFallbackHinge; // 0x135	
private:
	[[maybe_unused]] uint8_t __pad0136[0xa]; // 0x136
public:
	VectorAligned m_vFallbackHingeAxis; // 0x140	
	int32_t m_nFixedBoneIndex; // 0x150	
	int32_t m_nMiddleBoneIndex; // 0x154	
	int32_t m_nEndBoneIndex; // 0x158	
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

// Alignment: 1
// Size: 0x68
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58	
};

// Alignment: 0
// Size: 0x58
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
	// No members available
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
	float m_flBlendTime; // 0x94	
	CAnimParamHandle m_hParameter; // 0x98	
	SelectorTagBehavior_t m_eTagBehavior; // 0xa0	
	bool m_bResetOnChange; // 0xa4	
	bool m_bSyncCyclesOnChange; // 0xa5	
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

// Alignment: 12
// Size: 0xd0
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< BlendItem_t > m_items; // 0x60	
	CUtlVector< int32 > m_nodeItemIndices; // 0x78	
	CAnimInputDamping m_damping; // 0x90	
	AnimValueSource m_blendSourceX; // 0xa8	
	CAnimParamHandle m_paramX; // 0xac	
	AnimValueSource m_blendSourceY; // 0xb4	
	CAnimParamHandle m_paramY; // 0xb8	
	Blend2DMode m_eBlendMode; // 0xc0	
	float m_playbackSpeed; // 0xc4	
	bool m_bLoop; // 0xc8	
	bool m_bLockBlendOnReset; // 0xc9	
	bool m_bLockWhenWaning; // 0xca	
};

// Alignment: 9
// Size: 0xa8
class CFootAdjustmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	CUtlVector< HSequence > m_clips; // 0x70	
	StaticPoseCacheHandle m_hBasePoseCacheHandle; // 0x88	
	CAnimParamHandle m_facingTarget; // 0x8c	
	float m_flTurnTimeMin; // 0x94	
	float m_flTurnTimeMax; // 0x98	
	float m_flStepHeightMax; // 0x9c	
	float m_flStepHeightMaxAngle; // 0xa0	
	bool m_bResetChild; // 0xa4	
	bool m_bAnimationDriven; // 0xa5	
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

// Alignment: 15
// Size: 0x60
class FootLockPoseOpFixedSettings
{
public:
	CUtlVector< FootOpFixedInfo > m_footInfo; // 0x0	
	CAnimInputDamping m_hipDampingSettings; // 0x18	
	int32_t m_nHipBoneIndex; // 0x30	
	IKSolverType m_ikSolverType; // 0x34	
	bool m_bApplyTilt; // 0x38	
	bool m_bApplyHipDrop; // 0x39	
	bool m_bAlwaysUseFallbackHinge; // 0x3a	
private:
	[[maybe_unused]] uint8_t __pad003b[0x1]; // 0x3b
public:
	float m_flMaxFootHeight; // 0x3c	
	float m_flExtensionScale; // 0x40	
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

// Alignment: 13
// Size: 0xb8
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
	AnimValueSource m_facingTarget; // 0xa0	
	CAnimParamHandle m_hParam; // 0xa4	
	float m_flTurnToFaceOffset; // 0xac	
	bool m_bTurnToFace; // 0xb0	
};

// Alignment: 2
// Size: 0x20
class CMotionDataSet
{
public:
	CUtlVector< CMotionClipGroupData > m_clipGroups; // 0x0	
	int32_t m_nDimensionCount; // 0x18	
};

// Alignment: 2
// Size: 0x70
class CSetFacingUpdateNode : public CUnaryUpdateNode
{
public:
	FacingMode m_facingMode; // 0x68	
	bool m_bResetChild; // 0x6c	
};

// Alignment: 5
// Size: 0x98
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

// Alignment: 1
// Size: 0x18
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0	
};

// Alignment: 1
// Size: 0x60
class CSingleFrameUpdateNode : public CLeafUpdateNode
{
public:
	StaticPoseCacheHandle m_hPoseCacheHandle; // 0x58	
};

// Alignment: 0
// Size: 0x60
class CInputStreamUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
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

// Alignment: 3
// Size: 0x10
class CompValues
{
public:
	float m_fixedValue; // 0x0	
	ControlValue m_controlValue; // 0x4	
	CAnimParamHandle m_paramIndex; // 0x8	
};

// Alignment: 0
// Size: 0x10
class ConditionUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No members available
};

// Alignment: 3
// Size: 0x30
class CParamConditionUpdater : public ConditionUpdater
{
public:
	CAnimParamHandle m_paramIndex; // 0x10	
	CAnimVariant m_comparisonValue; // 0x18	
	Comparison_t m_operation; // 0x2c	
};

// Alignment: 3
// Size: 0x20
class CTagConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_operation; // 0x10	
	int32_t m_tagIndex; // 0x14	
	bool m_comparisonValue; // 0x18	
};

// Alignment: 3
// Size: 0x28
class CCycleConditionUpdater : public ConditionUpdater
{
public:
	CompValues m_comparisonValue; // 0x10	
	ComparisonValueType m_comparisonValueType; // 0x20	
	Comparison_t m_operation; // 0x24	
};

// Alignment: 2
// Size: 0x18
class CFinishedConditionUpdater : public ConditionUpdater
{
public:
	FinishedConditionOption m_option; // 0x10	
	bool m_bIsFinished; // 0x14	
};

// Alignment: 2
// Size: 0x18
class CForceFacingConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10	
	bool m_bComparisonValue; // 0x14	
};

// Alignment: 2
// Size: 0x18
class CFacingHeadingConditionUpdater : public ConditionUpdater
{
public:
	float m_comparisonValue; // 0x10	
	Comparison_t m_operation; // 0x14	
};

// Alignment: 2
// Size: 0x18
class CPathStatusConditionUpdater : public ConditionUpdater
{
public:
	PathStatusOptions m_optionToCheck; // 0x10	
	bool m_bComparisonValue; // 0x14	
};

// Alignment: 4
// Size: 0x30
class CControlValueConditionUpdater : public ConditionUpdater
{
public:
	CompValues m_comparison; // 0x10	
	ControlValue m_sourceControlValue; // 0x20	
	ComparisonValueType m_comparisonValueType; // 0x24	
	Comparison_t m_operation; // 0x28	
};

// Alignment: 3
// Size: 0x10
class StateComparisonValue
{
public:
	float m_fixedValue; // 0x0	
	StateValue m_stateValue; // 0x4	
	CAnimParamHandle m_paramIndex; // 0x8	
};

// Alignment: 4
// Size: 0x30
class CStateStatusConditionUpdater : public ConditionUpdater
{
public:
	StateComparisonValue m_comparisonValue; // 0x10	
	StateValue m_sourceValue; // 0x20	
	ComparisonValueType m_comparisonValueType; // 0x24	
	Comparison_t m_operation; // 0x28	
};

// Alignment: 5
// Size: 0x28
class CTimeConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10	
	ComparisonValueType m_comparisonValueType; // 0x14	
	float m_flComparisonValue; // 0x18	
	ControlValue m_comparisonControlValue; // 0x1c	
	CAnimParamHandle m_comparisonParamIndex; // 0x20	
};

// Alignment: 2
// Size: 0x18
class CGroundConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10	
	bool m_bComparisonValue; // 0x14	
};

// Alignment: 3
// Size: 0xc
class ClipSampleInfo
{
public:
	ClipIndex m_clipIndex; // 0x0	
	float m_clipCycle; // 0x4	
	uint16_t m_clipSampleIndex; // 0x8	
};

// Alignment: 6
// Size: 0x30
class ClipInfo
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x0	
	HSequence m_hSequence; // 0x18	
	float m_flDuration; // 0x1c	
	int32_t m_nFirstSampleIndex; // 0x20	
	int32_t m_nSampleCount; // 0x24	
	bool m_bLoop; // 0x28	
};

// Alignment: 4
// Size: 0x50
class CMotionClipGroupData
{
public:
	CUtlVector< ClipInfo > m_clips; // 0x0	
	CUtlVector< ClipSampleInfo > m_samplePoints; // 0x18	
	CUtlVector< float32 > m_samplePointVectors; // 0x30	
	int32_t m_activeTagIndex; // 0x48	
};

// Alignment: 23
// Size: 0x100
class CMotionMatchingUpdateNode : public CLeafUpdateNode
{
public:
	CMotionDataSet m_dataSet; // 0x58	
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0090[0x8]; // 0x90
public:
	bool m_bSearchAtInterval; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	float m_flSearchInterval; // 0x9c	
	bool m_bSearchOnSteps; // 0xa0	
	bool m_bForceSearchWhenTagsChange; // 0xa1	
	bool m_bSearchWhenClipEnds; // 0xa2	
	bool m_bSearchWhenGoalChanges; // 0xa3	
	CBlendCurve m_blendCurve; // 0xa4	
	float m_flPredictionTime; // 0xac	
	float m_flSampleRate; // 0xb0	
	float m_flBlendTime; // 0xb4	
	bool m_bLockClipWhenWaning; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x3]; // 0xb9
public:
	float m_flSelectionThreshold; // 0xbc	
	bool m_bGoalAssist; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	float m_flGoalAssistDistance; // 0xc4	
	float m_flGoalAssistTolerance; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CAnimInputDamping m_distanceScale_Damping; // 0xd0	
	float m_flDistanceScale_OuterRadius; // 0xe8	
	float m_flDistanceScale_InnerRadius; // 0xec	
	float m_flDistanceScale_MaxScale; // 0xf0	
	float m_flDistanceScale_MinScale; // 0xf4	
	bool m_bEnableDistanceScaling; // 0xf8	
};

// Alignment: 3
// Size: 0x50
class CMotionMetricEvaluator
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< float32 > m_means; // 0x18	
	CUtlVector< float32 > m_standardDeviations; // 0x30	
	float m_flWeight; // 0x48	
};

// Alignment: 1
// Size: 0x68
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
};

// Alignment: 0
// Size: 0x50
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x58
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
};

// Alignment: 4
// Size: 0x60
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
	float m_flStoppingDistance; // 0x54	
	float m_flTargetSpeed; // 0x58	
	bool m_bIgnoreDirection; // 0x5c	
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
// Size: 0x70
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	bool m_bIgnoreSlope; // 0x68	
};

// Alignment: 8
// Size: 0xe0
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	StaticPoseCacheHandle m_poseCacheHandles[10]; // 0x98	
	AimMatrixBlendMode m_eBlendMode; // 0xc0	
	float m_fAngleIncrement; // 0xc4	
	int32_t m_nSequenceMaxFrame; // 0xc8	
	int32_t m_nBoneMaskIndex; // 0xcc	
	bool m_bTargetIsPosition; // 0xd0	
};

// Alignment: 2
// Size: 0x8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0	
	float m_weight; // 0x4	
};

// Alignment: 9
// Size: 0xd0
struct LookAtOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	CUtlVector< LookAtBone_t > m_bones; // 0x98	
	float m_flYawLimit; // 0xb0	
	float m_flPitchLimit; // 0xb4	
	float m_flHysteresisInnerAngle; // 0xb8	
	float m_flHysteresisOuterAngle; // 0xbc	
	bool m_bTargetIsPosition; // 0xc0	
	bool m_bUseHysteresis; // 0xc1	
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

// Alignment: 1
// Size: 0xa8
class CSkeletalInputUpdateNode : public CLeafUpdateNode
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58	
};

// Alignment: 8
// Size: 0xe8
class CHitReactUpdateNode : public CUnaryUpdateNode
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x8]; // 0xac
public:
	CAnimParamHandle m_triggerParam; // 0xb4	
	CAnimParamHandle m_hitBoneParam; // 0xbc	
	CAnimParamHandle m_hitOffsetParam; // 0xc4	
	CAnimParamHandle m_hitDirectionParam; // 0xcc	
	CAnimParamHandle m_hitStrengthParam; // 0xd4	
	float m_flMinDelayBetweenHits; // 0xdc	
	bool m_bResetChild; // 0xe0	
};

// Alignment: 7
// Size: 0x40
class FootOpFixedInfo
{
public:
	VectorAligned m_vToeOffset; // 0x0	
	VectorAligned m_vHeelOffset; // 0x10	
	int32_t m_nTargetBoneIndex; // 0x20	
	int32_t m_nAnkleBoneIndex; // 0x24	
	int32_t m_nIKAnchorBoneIndex; // 0x28	
	int32_t m_ikChainIndex; // 0x2c	
	float m_flMaxIKLength; // 0x30	
};

// Alignment: 20
// Size: 0x148
class CFootLockUpdateNode : public CUnaryUpdateNode
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad00c8[0x8]; // 0xc8
public:
	CUtlVector< FootFixedSettings > m_footSettings; // 0xd0	
	CAnimInputDamping m_hipShiftDamping; // 0xe8	
	CAnimInputDamping m_rootHeightDamping; // 0x100	
	float m_flStrideCurveScale; // 0x118	
	float m_flStrideCurveLimitScale; // 0x11c	
	float m_flStepHeightIncreaseScale; // 0x120	
	float m_flStepHeightDecreaseScale; // 0x124	
	float m_flHipShiftScale; // 0x128	
	float m_flBlendTime; // 0x12c	
	float m_flMaxRootHeightOffset; // 0x130	
	float m_flMinRootHeightOffset; // 0x134	
	float m_flTiltPlanePitchSpringStrength; // 0x138	
	float m_flTiltPlaneRollSpringStrength; // 0x13c	
	bool m_bApplyFootRotationLimits; // 0x140	
	bool m_bApplyHipShift; // 0x141	
	bool m_bModulateStepHeight; // 0x142	
	bool m_bResetChild; // 0x143	
	bool m_bEnableVerticalCurvedPaths; // 0x144	
	bool m_bEnableRootHeightDamping; // 0x145	
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
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x30	
	float m_flDebugNormalizedValue; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	VectorAligned m_vDebugOffset; // 0x40	
};

// Alignment: 1
// Size: 0x18
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0	
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
// Size: 0x88
class CJiggleBoneUpdateNode : public CUnaryUpdateNode
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68	
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
	Quaternion m_axes[2]; // 0x1c	
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
	Quaternion m_goalOrientation; // 0xa0	
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

// Alignment: 23
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

// Alignment: 5
// Size: 0x14
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
	// MKV3TransferName "dampening"
	float m_dampening; // 0x10	
};

// Alignment: 10
// Size: 0x28
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
	// MKV3TransferName "lowPitchOcclusion"
	float m_flLowPitchOcclusion; // 0x1c	
	// MKV3TransferName "midPitchOcclusion"
	float m_flMidPitchOcclusion; // 0x20	
	// MKV3TransferName "highPitchOcclusion"
	float m_flHighPitchOcclusion; // 0x24	
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
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MKV3TransferName "audiosounds"
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x40	
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x80	
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

// Alignment: 6
// Size: 0x90
struct ModelSkeletonData_t
{
public:
	CUtlVector< CUtlString > m_boneName; // 0x0	
	CUtlVector< int16 > m_nParent; // 0x18	
	CUtlVector< float32 > m_boneSphere; // 0x30	
	CUtlVector< uint32 > m_nFlag; // 0x48	
	CUtlVector< Vector > m_bonePosParent; // 0x60	
	CUtlVector< Quaternion > m_boneRotParent; // 0x78	
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
// Size: 0x2b0
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
	CUtlVector< int16 > m_remappingTable; // 0x218	
	CUtlVector< uint16 > m_remappingTableStarts; // 0x230	
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x248	
	CModelConfigList* m_pModelConfigList; // 0x260	
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x268	
	CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x280	
	CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x298	
};

// Alignment: 1
// Size: 0x1
struct AttachmentHandle_t
{
public:
	uint8_t m_nBoxedTypeSafeInt; // 0x0	
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

// Alignment: 1
// Size: 0x60
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
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
// Size: 0x10
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0	
	uint32_t m_nBindOffsetBytes; // 0x8	
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

// Alignment: 14
// Size: 0xd0
class CMaterialDrawDescriptor
{
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x0	
	int32_t m_nBaseVertex; // 0x4	
	int32_t m_nVertexCount; // 0x8	
	int32_t m_nStartIndex; // 0xc	
	int32_t m_nIndexCount; // 0x10	
	int32_t m_nStartInstance; // 0x14	
	int32_t m_nInstanceCount; // 0x18	
	float m_flUvDensity; // 0x1c	
	Vector m_vTintColor; // 0x20	
	float m_flAlpha; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad0030[0x6]; // 0x30
public:
	int16_t m_CullDataIndex; // 0x36	
	int32_t m_nMeshID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x6c]; // 0x3c
public:
	CRenderBufferBinding m_indexBuffer; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00b8[0x10]; // 0xb8
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xc8	
};

// Alignment: 5
// Size: 0x60
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18	
	CUtlVector< CDrawCullingData > m_drawCullData; // 0x30	
	Vector4D m_vTintColor; // 0x48	
};

// Alignment: 8
// Size: 0x88
class CAttachment
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_influenceNames[3]; // 0x8	
	Vector m_vInfluenceOffsets[3]; // 0x20	
	Quaternion m_vInfluenceRotations[3]; // 0x44	
	float m_influenceWeights[3]; // 0x74	
	bool m_bInfluenceRootTransform[3]; // 0x80	
	uint8_t m_nInfluences; // 0x83	
	bool m_bIgnoreRotation; // 0x84	
};

// Alignment: 14
// Size: 0x70
class CHitBox
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	Vector m_vMinBounds; // 0x20	
	Vector m_vMaxBounds; // 0x2c	
	CUtlString m_name; // 0x38	
	CUtlString m_sSurfaceProperty; // 0x40	
	CUtlString m_sBoneName; // 0x48	
	float m_flShapeRadius; // 0x50	
	uint32_t m_nBoneNameHash; // 0x54	
	int32_t m_nGroupId; // 0x58	
	Color m_cRenderColor; // 0x5c	
	uint16_t m_nHitBoxIndex; // 0x60	
	uint8_t m_nShapeType; // 0x62	
private:
	[[maybe_unused]] uint8_t __pad0063[0x1]; // 0x63
public:
	bool m_bTranslationOnly; // 0x64	
	bool m_bVisible; // 0x65	
	bool m_bSelected; // 0x66	
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
// Size: 0x1b8
class CRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10	
	CUtlVector< CBaseConstraint* > m_constraints; // 0x88	
	CRenderSkeleton m_skeleton; // 0xa0	
};

// Alignment: 6
// Size: 0x70
class CConstraintTarget
{
public:
	uint32_t m_nBoneHash; // 0x0	
	float m_flWeight; // 0x4	
	Vector m_vOffset; // 0x8	
	Quaternion m_qOffset; // 0x14	
	bool m_bIsAttachment; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	CUtlString m_sName; // 0x28	
};

// Alignment: 5
// Size: 0x58
class CConstraintSlave
{
public:
	uint32_t m_nBoneHash; // 0x0	
	float m_flWeight; // 0x4	
	Vector m_vBasePosition; // 0x8	
	Quaternion m_qBaseOrientation; // 0x14	
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
// Size: 0x88
class CAimConstraint : public CBaseConstraint
{
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
};

// Alignment: 3
// Size: 0x98
class CTwistConstraint : public CBaseConstraint
{
public:
	bool m_bInverse; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	Quaternion m_qParentBindRotation; // 0x74	
	Quaternion m_qChildBindRotation; // 0x84	
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

// Alignment: 4
// Size: 0x170
class CAnimationGraph : public CAnimationSubGraph
{
public:
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad0100[0x8]; // 0x100
public:
	CAnimClipDataManager m_clipDataManager; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0140[0x10]; // 0x140
public:
	CUtlString m_modelName; // 0x150	
	CUtlString m_previewModelName; // 0x158	
};

// Alignment: 2
// Size: 0x38
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlString m_sName; // 0x28	
	AnimScriptHandle m_hScript; // 0x30	
};

// Alignment: 1
// Size: 0x40
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x28	
};

// Alignment: 1
// Size: 0x40
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x28	
};

// Alignment: 1
// Size: 0x30
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x28	
};

// Alignment: 4
// Size: 0x90
class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x28	
	CUtlVector< int32 > m_boneIndices; // 0x40	
	CUtlVector< CUtlString > m_boneNames; // 0x58	
	CUtlVector< WeightList > m_weightLists; // 0x70	
};

// Alignment: 0
// Size: 0x48
class CAnimComponentStateTransition : public CAnimStateTransition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x70
class CAnimComponentState : public CAnimState
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x78
class CStateMachineComponent : public CAnimComponentBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x18]; // 0x48
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x60	
};

// Alignment: 2
// Size: 0x88
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x28	
	CUtlString m_sName; // 0x80	
};

// Alignment: 9
// Size: 0x78
class CVRInputComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	CAnimParamHandle m_FingerCurl_Thumb; // 0x2c	
	CAnimParamHandle m_FingerCurl_Index; // 0x34	
	CAnimParamHandle m_FingerCurl_Middle; // 0x3c	
	CAnimParamHandle m_FingerCurl_Ring; // 0x44	
	CAnimParamHandle m_FingerCurl_Pinky; // 0x4c	
	CAnimParamHandle m_FingerSplay_Thumb_Index; // 0x54	
	CAnimParamHandle m_FingerSplay_Index_Middle; // 0x5c	
	CAnimParamHandle m_FingerSplay_Middle_Ring; // 0x64	
	CAnimParamHandle m_FingerSplay_Ring_Pinky; // 0x6c	
};

// Alignment: 1
// Size: 0x20
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18	
};

// Alignment: 2
// Size: 0x38
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	CAnimVariant m_value; // 0x20	
};

// Alignment: 2
// Size: 0x20
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18	
	bool m_bSetEnabled; // 0x1c	
};

// Alignment: 1
// Size: 0x20
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x18	
};

// Alignment: 6
// Size: 0x70
class CAnimNodeStateTransition : public CAnimStateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x50	
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x58	
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	// MPropertyAttributeRange "0 1"
	float m_flFixedCycleValue; // 0x5c	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x60	
	// MPropertyFriendlyName "Park Feet"
	bool m_bForceFootPlant; // 0x68	
};

// Alignment: 2
// Size: 0x80
class CAnimNodeState : public CAnimState
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x70	
	// MPropertyFriendlyName "Exclusive Root Motion"
	bool m_bIsRootMotionExclusive; // 0x78	
};

// Alignment: 2
// Size: 0x78
class CStateMachineAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0048[0x18]; // 0x48
public:
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x60	
	// MPropertyFriendlyName "Lock State when Waning"
	bool m_bLockStateWhenWaning; // 0x61	
};

// Alignment: 1
// Size: 0x70
class CRagdollUpdateNode : public CUnaryUpdateNode
{
public:
	int32_t m_nWeightListIndex; // 0x68	
};

// Alignment: 1
// Size: 0xd8
class CGroupAnimNode : public CContainerAnimNodeBase
{
	// Collision detected(0x80->0x90), output may be wrong.
public:
	// Skipped field "m_nodeMgr" @ 0x80 because of the struct collision
};

// Alignment: 0
// Size: 0x78
class CGroupInputAnimNode : public CProxyAnimNodeBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x70
class CGroupOutputAnimNode : public CProxyAnimNodeBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x68
class CRootUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x90
class CSequenceUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< TagSpan_t > m_tags; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0078[0x4]; // 0x78
public:
	HSequence m_hSequence; // 0x7c	
	float m_playbackSpeed; // 0x80	
	float m_duration; // 0x84	
	bool m_bLoop; // 0x88	
};

// Alignment: 11
// Size: 0xd8
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
	CAnimInputDamping m_damping; // 0xb8	
	BlendKeyType m_blendKeyType; // 0xd0	
	bool m_bLockBlendOnReset; // 0xd4	
	bool m_bSyncCycles; // 0xd5	
	bool m_bLoop; // 0xd6	
	bool m_bLockWhenWaning; // 0xd7	
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
// Size: 0x78
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

// Alignment: 2
// Size: 0x98
class CAddUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c	
	bool m_bApplyChannelsSeparately; // 0x90	
};

// Alignment: 2
// Size: 0x98
class CSubtractUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c	
	bool m_bApplyChannelsSeparately; // 0x90	
};

// Alignment: 11
// Size: 0xb0
class CMoverUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	CAnimInputDamping m_damping; // 0x70	
	AnimValueSource m_facingTarget; // 0x88	
	CAnimParamHandle m_hMoveVecParam; // 0x8c	
	CAnimParamHandle m_hMoveHeadingParam; // 0x94	
	CAnimParamHandle m_hTurnToFaceParam; // 0x9c	
	float m_flTurnToFaceOffset; // 0xa4	
	float m_flTurnToFaceLimit; // 0xa8	
	bool m_bAdditive; // 0xac	
	bool m_bApplyMovement; // 0xad	
	bool m_bOrientMovement; // 0xae	
	bool m_bApplyRotation; // 0xaf	
};

// Alignment: 1
// Size: 0x70
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flSlowDownStrength; // 0x68	
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

// Alignment: 6
// Size: 0x170
class CAimMatrixUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0150[0x8]; // 0x150
public:
	AnimVectorSource m_target; // 0x158	
	CAnimParamHandle m_paramIndex; // 0x15c	
	HSequence m_hSequence; // 0x164	
	bool m_bResetChild; // 0x168	
	bool m_bLockWhenWaning; // 0x169	
};

// Alignment: 1
// Size: 0x70
class CSpeedScaleUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_paramIndex; // 0x68	
};

// Alignment: 8
// Size: 0xb0
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
	AnimValueSource m_blendValueSource; // 0x98	
	CAnimParamHandle m_paramIndex; // 0x9c	
	float m_playbackSpeed; // 0xa4	
	float m_duration; // 0xa8	
	bool m_bLoop; // 0xac	
	bool m_bLockBlendOnReset; // 0xad	
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

// Alignment: 7
// Size: 0xb0
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

// Alignment: 0
// Size: 0x70
class CChoreoUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	bool m_bFinishEarly; // 0x6c	
	bool m_bResetOnFinish; // 0x6d	
};

// Alignment: 10
// Size: 0xf0
class CLeanMatrixUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
public:
	int32_t m_frameCorners[3][3]; // 0x5c	
	StaticPoseCacheHandle m_poses[9]; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	CAnimInputDamping m_damping; // 0xa8	
	AnimVectorSource m_blendSource; // 0xc0	
	CAnimParamHandle m_paramIndex; // 0xc4	
	Vector m_verticalAxis; // 0xcc	
	Vector m_horizontalAxis; // 0xd8	
	HSequence m_hSequence; // 0xe4	
	float m_flMaxValue; // 0xe8	
	int32_t m_nSequenceMaxFrame; // 0xec	
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

// Alignment: 2
// Size: 0xa0
class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68	
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80	
};

// Alignment: 6
// Size: 0x160
class CLookAtUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0140[0x8]; // 0x140
public:
	AnimVectorSource m_target; // 0x148	
	CAnimParamHandle m_paramIndex; // 0x14c	
	CAnimParamHandle m_weightParamIndex; // 0x154	
	bool m_bResetChild; // 0x15c	
	bool m_bLockWhenWaning; // 0x15d	
};

// Alignment: 2
// Size: 0x70
class CPathHelperUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flStoppingRadius; // 0x68	
	float m_flStoppingSpeedScale; // 0x6c	
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

// Alignment: 8
// Size: 0xb8
class CJumpHelperUpdateNode : public CSequenceUpdateNode
{
public:
	CAnimParamHandle m_hTargetParam; // 0x90	
	Vector m_flOriginalJumpMovement; // 0x98	
	float m_flOriginalJumpDuration; // 0xa4	
	float m_flJumpStartCycle; // 0xa8	
	float m_flJumpEndCycle; // 0xac	
	JumpCorrectionMethod m_eCorrectionMethod; // 0xb0	
	bool m_bTranslationAxis[3]; // 0xb4	
	bool m_bScaleSpeed; // 0xb7	
};

