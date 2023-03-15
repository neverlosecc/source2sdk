#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: animationsystem.dll
// Class Count: 474
// Enum Count: 77
///////////////////////////////////////////

// Aligment: 4
// Size: 2
enum class MoodType_t : uint32_t
{
	eMoodType_Head = 0x0,
	eMoodType_Body = 0x1,
};

// Aligment: 4
// Size: 6
enum class AnimationProcessingType_t : uint32_t
{
	ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
	ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
	ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
	ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
	ANIMATION_PROCESSING_MAX = 0x5,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 17
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

// Aligment: 4
// Size: 4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Aligment: 4
// Size: 18
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

// Aligment: 4
// Size: 5
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
};

// Aligment: 1
// Size: 9
enum class AnimParamType_t : uint8_t
{
	ANIMPARAM_UNKNOWN = 0,
	ANIMPARAM_BOOL = 1,
	ANIMPARAM_ENUM = 2,
	ANIMPARAM_INT = 3,
	ANIMPARAM_FLOAT = 4,
	ANIMPARAM_VECTOR = 5,
	ANIMPARAM_QUATERNION = 6,
	ANIMPARAM_STRINGTOKEN = 7,
	ANIMPARAM_COUNT = 8,
};

// Aligment: 4
// Size: 4
enum class BoneTransformSpace_t : uint32_t
{
	BoneTransformSpace_Invalid = 0xffffffffffffffff,
	BoneTransformSpace_Parent = 0x0,
	BoneTransformSpace_Model = 0x1,
	BoneTransformSpace_World = 0x2,
};

// Aligment: 1
// Size: 3
enum class PoseType_t : uint8_t
{
	POSETYPE_STATIC = 0,
	POSETYPE_DYNAMIC = 1,
	POSETYPE_INVALID = 255,
};

// Aligment: 4
// Size: 13
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

// Aligment: 4
// Size: 3
enum class AnimParamNetworkSetting : uint32_t
{
	Auto = 0x0,
	AlwaysNetwork = 0x1,
	NeverNetwork = 0x2,
};

// Aligment: 4
// Size: 2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
};

// Aligment: 4
// Size: 4
enum class StateActionBehavior : uint32_t
{
	STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
	STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
	STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
	STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
};

// Aligment: 4
// Size: 2
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
};

// Aligment: 4
// Size: 3
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
};

// Aligment: 4
// Size: 3
enum class AnimPoseControl : uint32_t
{
	NoPoseControl = 0x0,
	AbsolutePoseControl = 0x1,
	RelativePoseControl = 0x2,
};

// Aligment: 4
// Size: 3
enum class FacingMode : uint32_t
{
	FacingMode_Manual = 0x0,
	FacingMode_Path = 0x1,
	FacingMode_LookTarget = 0x2,
};

// Aligment: 4
// Size: 2
enum class RagdollPoseControl : uint32_t
{
	Absolute = 0x0,
	Relative = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
};

// Aligment: 4
// Size: 4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Aligment: 4
// Size: 2
enum class AnimVrBoneTransformSource_t : uint32_t
{
	AnimVrBoneTransformSource_LiveStream = 0x0,
	AnimVrBoneTransformSource_GripLimit = 0x1,
};

// Aligment: 4
// Size: 6
enum class IKSolverType : uint32_t
{
	IKSOLVER_Perlin = 0x0,
	IKSOLVER_TwoBone = 0x1,
	IKSOLVER_Fabrik = 0x2,
	IKSOLVER_DogLeg3Bone = 0x3,
	IKSOLVER_CCD = 0x4,
	IKSOLVER_COUNT = 0x5,
};

// Aligment: 4
// Size: 3
enum class IKTargetSource : uint32_t
{
	IKTARGETSOURCE_Bone = 0x0,
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class IKTargetCoordinateSystem : uint32_t
{
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

// Aligment: 4
// Size: 36
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

// Aligment: 4
// Size: 13
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

// Aligment: 4
// Size: 3
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
};

// Aligment: 4
// Size: 2
enum class EAnimValueSource : uint32_t
{
	Constant = 0x0,
	Parameter = 0x1,
};

// Aligment: 4
// Size: 40
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

// Aligment: 4
// Size: 3
enum class FieldNetworkOption : uint32_t
{
	Auto = 0x0,
	ForceEnable = 0x1,
	ForceDisable = 0x2,
};

// Aligment: 4
// Size: 2
enum class DampedValueType : uint32_t
{
	FloatParameter = 0x0,
	VectorParameter = 0x1,
};

// Aligment: 4
// Size: 2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
};

// Aligment: 4
// Size: 3
enum class SingleFrameSelection : uint32_t
{
	FirstFrame = 0x0,
	LastFrame = 0x1,
	SpecificFrame = 0x2,
};

// Aligment: 4
// Size: 7
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

// Aligment: 1
// Size: 2
enum class ComparisonValueType : uint8_t
{
	COMPARISONVALUETYPE_FIXEDVALUE = 0,
	COMPARISONVALUETYPE_PARAMETER = 1,
};

// Aligment: 4
// Size: 2
enum class FinishedConditionOption : uint32_t
{
	FinishedConditionOption_OnFinished = 0x0,
	FinishedConditionOption_OnAlmostFinished = 0x1,
};

// Aligment: 4
// Size: 3
enum class StateComparisonValueType : uint32_t
{
	StateComparisonValue_FixedValue = 0x0,
	StateComparisonValue_StateValue = 0x1,
	StateComparisonValue_Parameter = 0x2,
};

// Aligment: 4
// Size: 5
enum class StateValue : uint32_t
{
	TotalTranslation_SourceState = 0x0,
	TotalTranslation_TargetState = 0x1,
	SourceStateBlendWeight = 0x2,
	TargetStateBlendWeight = 0x3,
	Count = 0x4,
};

// Aligment: 4
// Size: 8
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

// Aligment: 4
// Size: 2
enum class MatterialAttributeTagType_t : uint32_t
{
	MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
	MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1,
};

// Aligment: 2
// Size: 4
enum class AnimScriptType : uint16_t
{
	ANIMSCRIPT_TYPE_INVALID = 18446744073709551615,
	ANIMSCRIPT_FUSE_GENERAL = 0,
	ANIMSCRIPT_FUSE_STATEMACHINE = 1,
	ANIMSCRIPT_EXPRTK = 2,
};

// Aligment: 4
// Size: 4
enum class BlendKeyType : uint32_t
{
	BlendKey_UserValue = 0x0,
	BlendKey_Velocity = 0x1,
	BlendKey_Distance = 0x2,
	BlendKey_RemainingDistance = 0x3,
};

// Aligment: 4
// Size: 5
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
	SameTimeAsSource = 0x4,
};

// Aligment: 4
// Size: 4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
};

// Aligment: 4
// Size: 3
enum class ChoiceChangeMethod : uint32_t
{
	OnReset = 0x0,
	OnCycleEnd = 0x1,
	OnResetOrCycleEnd = 0x2,
};

// Aligment: 4
// Size: 2
enum class ChoiceBlendMethod : uint32_t
{
	SingleBlendTime = 0x0,
	PerChoiceBlendTimes = 0x1,
};

// Aligment: 4
// Size: 2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
};

// Aligment: 4
// Size: 4
enum class IkTargetType : uint32_t
{
	IkTarget_Attachment = 0x0,
	IkTarget_Bone = 0x1,
	IkTarget_Parameter_ModelSpace = 0x2,
	IkTarget_Parameter_WorldSpace = 0x3,
};

// Aligment: 4
// Size: 3
enum class BinaryNodeTiming : uint32_t
{
	UseChild1 = 0x0,
	UseChild2 = 0x1,
	SyncChildren = 0x2,
};

// Aligment: 4
// Size: 2
enum class BinaryNodeChildOption : uint32_t
{
	Child1 = 0x0,
	Child2 = 0x1,
};

// Aligment: 4
// Size: 2
enum class StanceOverrideMode : uint32_t
{
	Sequence = 0x0,
	Node = 0x1,
};

// Aligment: 4
// Size: 3
enum class SelectorTagBehavior_t : uint32_t
{
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	SelectorTagBehavior_OffWhenFinished = 0x1,
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Aligment: 4
// Size: 2
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Aligment: 4
// Size: 2
enum class FootLockSubVisualization : uint32_t
{
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Aligment: 4
// Size: 3
enum class FootPinningTimingSource : uint32_t
{
	FootMotion = 0x0,
	Tag = 0x1,
	Parameter = 0x2,
};

// Aligment: 4
// Size: 2
enum class JumpCorrectionMethod : uint32_t
{
	ScaleMotion = 0x0,
	AddCorrectionDelta = 0x1,
};

// Aligment: 4
// Size: 2
enum class StepPhase : uint32_t
{
	StepPhase_OnGround = 0x0,
	StepPhase_InAir = 0x1,
};

// Aligment: 1
// Size: 3
enum class VelocityMetricMode : uint8_t
{
	DirectionOnly = 0,
	MagnitudeOnly = 1,
	DirectionAndMagnitude = 2,
};

// Aligment: 4
// Size: 4
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Aligment: 4
// Size: 4
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
	AimMatrixBlendMode_BoneMask = 0x3,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 3
enum class JiggleBoneSimSpace : uint32_t
{
	SimSpace_Local = 0x0,
	SimSpace_Model = 0x1,
	SimSpace_World = 0x2,
};

// Aligment: 4
// Size: 5
enum class VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t
{
	FLAG_STATIC = 0x1,
	FLAG_KINEMATIC = 0x2,
	FLAG_JOINT = 0x4,
	FLAG_MASS = 0x8,
	FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Aligment: 4
// Size: 4
enum class VPhysXConstraintParams_t::EnumFlags0_t : uint32_t
{
	FLAG0_SHIFT_INTERPENETRATE = 0x0,
	FLAG0_SHIFT_CONSTRAIN = 0x1,
	FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class VPhysXJoint_t::Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Aligment: 4
// Size: 3
enum class VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t
{
	FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	FLAG_LEVEL_COLLISION = 0x10,
	FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20,
};

// Aligment: 4
// Size: 8
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

// Aligment: 4
// Size: 22
enum class ModelSkeletonData_t::BoneFlags_t : uint32_t
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

// Aligment: 4
// Size: 15
enum class PermModelInfo_t::FlagEnum : uint32_t
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

// Aligment: 4
// Size: 4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
};

// Aligment: 4
// Size: 5
enum class ModelConfigAttachmentType_t : uint32_t
{
	MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffffffffffff,
	MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
	MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
	MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
	MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
};

// Aligment: 4
// Size: 26
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

// Aligment: 4
// Size: 4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Aligment: 4
// Size: 4
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
};

// Aligment: 4
// Size: 5
enum class AnimVRFinger_t : uint32_t
{
	AnimVrFinger_Thumb = 0x0,
	AnimVrFinger_Index = 0x1,
	AnimVrFinger_Middle = 0x2,
	AnimVrFinger_Ring = 0x3,
	AnimVrFinger_Pinky = 0x4,
};

// Aligment: 2
// Size: 16
struct MoodAnimation_t
{
public:
	// MPropertyDescription "Name of the animation"
	// MPropertyAttributeEditor "VDataModelAnim( m_sModelName; include_deltas )"
	CUtlString m_sName; // 0x0
	// MPropertyDescription "Weight of the animation, higher numbers get picked more"
	float m_flWeight; // 0x8
};

// Aligment: 12
// Size: 96
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
	// MPropertyDescription "List of animations to choose from"
	CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10
	// MPropertyDescription "Intensity of the animation"
	// MPropertyAttributeRange "0 1"
	CRangeFloat m_flIntensity; // 0x28
	// MPropertyDescription "Multiplier of the animation duration"
	CRangeFloat m_flDurationScale; // 0x30
	// MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
	bool m_bScaleWithInts; // 0x38
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

// Aligment: 3
// Size: 256
class CMoodVData
{
public:
	// MPropertyDescription "Model to get the animation list from"
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0
	// MPropertyDescription "Type of mood"
	MoodType_t m_nMoodType; // 0xe0
	// MPropertyDescription "Layers for this mood"
	CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xe8
};

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
// Size: 48
class CAnimBoneDifference
{
public:
	CBufferString m_name; // 0x0
	CBufferString m_parent; // 0x10
	Vector m_posError; // 0x20
	bool m_bHasRotation; // 0x2c
	bool m_bHasMovement; // 0x2d
};

// Aligment: 1
// Size: 16
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0
};

// Aligment: 2
// Size: 24
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
};

// Aligment: 7
// Size: 168
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

// Aligment: 5
// Size: 56
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

// Aligment: 7
// Size: 44
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

// Aligment: 6
// Size: 48
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

// Aligment: 3
// Size: 24
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0
	int32_t m_nVersion; // 0x10
	int32_t m_nType; // 0x14
};

// Aligment: 4
// Size: 40
class CAnimFrameSegment
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0
	uint32_t m_nLocalElementMasks; // 0x4
	int32_t m_nLocalChannel; // 0x8
	CUtlBinaryBlock m_container; // 0x10
};

// Aligment: 3
// Size: 32
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0
	int32_t m_nEndFrame; // 0x4
	CUtlVector< int32 > m_segmentIndexArray; // 0x8
};

// Aligment: 5
// Size: 216
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0
	int32_t m_nFrames; // 0x10
	int32_t m_nFramesPerBlock; // 0x14
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18
	CAnimEncodeDifference m_usageDifferences; // 0x30
};

// Aligment: 8
// Size: 8
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

// Aligment: 2
// Size: 8
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 14
// Size: 432
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0
	CAnimDesc_Flag m_flags; // 0x10
	float fps; // 0x18
	// MKV3TransferName "m_pData"
	CAnimEncodedFrames m_Data; // 0x20
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110
	CUtlVector< CAnimActivity > m_activityArray; // 0x128
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140
	float framestalltime; // 0x158
	Vector m_vecRootMin; // 0x15c
	Vector m_vecRootMax; // 0x168
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x178
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x190
	CAnimSequenceParams m_sequenceParams; // 0x1a8
};

// Aligment: 4
// Size: 32
class CAnimActivity
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nActivity; // 0x10
	int32_t m_nFlags; // 0x14
	int32_t m_nWeight; // 0x18
};

// Aligment: 5
// Size: 112
class CAnimData
{
public:
	CBufferString m_name; // 0x10
	CUtlVector< CAnimDesc > m_animArray; // 0x20
	CUtlVector< CAnimDecoder > m_decoderArray; // 0x38
	int32_t m_nMaxUniqueFrameIndex; // 0x50
	CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58
};

// Aligment: 7
// Size: 72
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

// Aligment: 2
// Size: 24
class CAnimUser
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
};

// Aligment: 9
// Size: 144
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

// Aligment: 6
// Size: 120
class CAnimKeyData
{
public:
	CBufferString m_name; // 0x0
	CUtlVector< CAnimBone > m_boneArray; // 0x10
	CUtlVector< CAnimUser > m_userArray; // 0x28
	CUtlVector< CBufferString > m_morphArray; // 0x40
	int32_t m_nChannelElements; // 0x58
	CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60
};

// Aligment: 7
// Size: 304
class CAnimationGroup
{
public:
	uint32_t m_nFlags; // 0x10
	CBufferString m_name; // 0x18
	// MKV3TransferName "m_localHAnimArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60
	// MKV3TransferName "m_includedGroupArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78
	// MKV3TransferName "m_directHSeqGroup"
	CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90
	CAnimKeyData m_decodeKey; // 0x98
	CUtlVector< CBufferString > m_szScripts; // 0x110
};

// Aligment: 8
// Size: 8
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

// Aligment: 7
// Size: 28
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

// Aligment: 4
// Size: 12
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0
	float m_flAngleWeight; // 0x4
	int16_t m_nLocalBone; // 0x8
	bool m_bBonesOrientedAlongPositiveX; // 0xa
};

// Aligment: 5
// Size: 96
class CSeqBoneMaskList
{
public:
	CBufferString m_sName; // 0x0
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10
	CUtlVector< float32 > m_flBoneWeightArray; // 0x28
	float m_flDefaultMorphCtrlWeight; // 0x40
	CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48
};

// Aligment: 3
// Size: 64
class CSeqScaleSet
{
public:
	CBufferString m_sName; // 0x0
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10
	CUtlVector< float32 > m_flBoneScaleArray; // 0x28
};

// Aligment: 6
// Size: 6
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

// Aligment: 8
// Size: 104
class CSeqMultiFetch
{
public:
	CSeqMultiFetchFlag m_flags; // 0x0
	CUtlVector< int16 > m_localReferenceArray; // 0x8
	int32[2] m_nGroupSize; // 0x20
	int32[2] m_nLocalPose; // 0x28
	CUtlVector< float32 > m_poseKeyArray0; // 0x30
	CUtlVector< float32 > m_poseKeyArray1; // 0x48
	int32_t m_nLocalCyclePoseParameter; // 0x60
	bool m_bCalculatePoseParameters; // 0x64
};

// Aligment: 11
// Size: 11
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

// Aligment: 2
// Size: 8
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 11
// Size: 280
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
	CSeqMultiFetch m_fetch; // 0x20
	int32_t m_nLocalWeightlist; // 0x88
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xa8
	CSeqTransition m_transition; // 0xc0
	KeyValues3 m_SequenceKeys; // 0xc8
	// MKV3TransferName "m_keyValueText"
	CBufferString m_LegacyKeyValueText; // 0xd8
	CUtlVector< CAnimActivity > m_activityArray; // 0xe8
	CUtlVector< CFootMotion > m_footMotion; // 0x100
};

// Aligment: 6
// Size: 64
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
	CSeqTransition m_transition; // 0x1c
	int16_t m_nLocalBaseReference; // 0x24
	int16_t m_nLocalBoneMask; // 0x26
	CUtlVector< CAnimActivity > m_activityArray; // 0x28
};

// Aligment: 9
// Size: 24
class CSeqCmdLayer
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
// Size: 64
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
	int32_t m_eType; // 0x38
};

// Aligment: 12
// Size: 144
class CSeqCmdSeqDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
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

// Aligment: 5
// Size: 32
class CSeqPoseParamDesc
{
public:
	CBufferString m_sName; // 0x0
	float m_flStart; // 0x10
	float m_flEnd; // 0x14
	float m_flLoop; // 0x18
	bool m_bLooping; // 0x1c
};

// Aligment: 14
// Size: 312
class CSequenceGroupData
{
public:
	CBufferString m_sName; // 0x10
	uint32_t m_nFlags; // 0x20
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
	CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // 0x110
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188
};

// Aligment: 1
// Size: 4
class HSequence
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 1
// Size: 16
class CAnimationGraphVisualizerPrimitiveBase
{
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8
};

// Aligment: 3
// Size: 48
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10
	Color m_Color; // 0x20
	CUtlString m_Text; // 0x28
};

// Aligment: 3
// Size: 48
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10
	float m_flRadius; // 0x20
	Color m_Color; // 0x24
};

// Aligment: 3
// Size: 64
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x10
	VectorAligned m_vWsPositionEnd; // 0x20
	Color m_Color; // 0x30
};

// Aligment: 4
// Size: 80
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x10
	VectorAligned m_vWsStart; // 0x20
	VectorAligned m_vWsEnd; // 0x30
	Color m_Color; // 0x40
};

// Aligment: 2
// Size: 64
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10
	float m_flAxisSize; // 0x30
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
class AnimNodeOutputID
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

// Aligment: 1
// Size: 4
class AnimComponentID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 4
class AnimScriptHandle
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 1
class CAnimEnum
{
public:
	uint8_t m_value; // 0x0
};

// Aligment: 2
// Size: 8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0
	float m_flControlPoint2; // 0x4
};

// Aligment: 2
// Size: 48
class CAnimNodePath
{
public:
	AnimNodeID[11] m_path; // 0x0
	int32_t m_nCount; // 0x2c
};

// Aligment: 2
// Size: 4
class CPoseHandle
{
public:
	uint16_t m_nIndex; // 0x0
	PoseType_t m_eType; // 0x2
};

// Aligment: 2
// Size: 8
class CAnimNodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0
	AnimNodeOutputID m_outputID; // 0x4
};

// Aligment: 2
// Size: 4
class ConfigIndex
{
public:
	uint16_t m_nGroup; // 0x0
	uint16_t m_nConfig; // 0x2
};

// Aligment: 2
// Size: 4
class MotionIndex
{
public:
	uint16_t m_nGroup; // 0x0
	uint16_t m_nMotion; // 0x2
};

// Aligment: 5
// Size: 32
class CMotionGraphConfig
{
public:
	float32[4] m_paramValues; // 0x0
	float m_flDuration; // 0x10
	MotionIndex m_nMotionIndex; // 0x14
	int32_t m_nSampleStart; // 0x18
	int32_t m_nSampleCount; // 0x1c
};

// Aligment: 1
// Size: 16
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0
};

// Aligment: 2
// Size: 8
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

// Aligment: 4
// Size: 32
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

// Aligment: 6
// Size: 224
class CAnimationSubGraph
{
public:
	CAnimNodeManager m_nodeManager; // 0x8
	CAnimComponentManager m_componentManager; // 0x50
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x78
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x90
	CUtlVector< CUtlString > m_referencedParamGroups; // 0xa8
	CUtlVector< CUtlString > m_referencedTagGroups; // 0xc0
};

// Aligment: 2
// Size: 40
class CAnimGraphModelBinding
{
public:
	CUtlString m_modelName; // 0x8
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10
};

// Aligment: 1
// Size: 56
class CAnimClipDataManager
{
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18
};

// Aligment: 2
// Size: 72
class CAnimClipData
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_clipName; // 0x38
};

// Aligment: 1
// Size: 88
class CAnimParameterList
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x20
};

// Aligment: 1
// Size: 40
class CAnimNodeList
{
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10
};

// Aligment: 1
// Size: 72
class CAnimNodeManager
{
public:
	// MPropertyHideField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8
};

// Aligment: 1
// Size: 40
class CAnimStateList
{
public:
	CUtlVector< CAnimState* > m_states; // 0x10
};

// Aligment: 2
// Size: 16
class CAnimInputDamping
{
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc
};

// Aligment: 10
// Size: 256
class CAnimUpdateSharedData
{
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

// Aligment: 3
// Size: 24
class CFloatAnimValue
{
public:
	// MPropertyHideField
	float m_flConstValue; // 0x8
	// MPropertyHideField
	AnimParamID m_paramID; // 0xc
	// MPropertyHideField
	EAnimValueSource m_eSource; // 0x10
};

// Aligment: 4
// Size: 64
class CCachedPose
{
public:
	CUtlVector< CTransform > m_transforms; // 0x8
	CUtlVector< float32 > m_morphWeights; // 0x20
	HSequence m_hSequence; // 0x38
	float m_flCycle; // 0x3c
};

// Aligment: 3
// Size: 48
class CStaticPoseCache
{
public:
	CUtlVector< CCachedPose > m_poses; // 0x10
	int32_t m_nBoneCount; // 0x28
	int32_t m_nMorphCount; // 0x2c
};

// Aligment: 0
// Size: 56
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
// <no members described>
};

// Aligment: 1
// Size: 48
class CAnimGraphSettingsManager
{
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18
};

// Aligment: 2
// Size: 32
class CAnimParamSpanSample
{
public:
	CAnimVariant m_value; // 0x8
	float m_flCycle; // 0x1c
};

// Aligment: 4
// Size: 72
class CAnimParamSpan
{
public:
	CUtlVector< CAnimParamSpanSample > m_samples; // 0x20
	AnimParamID m_id; // 0x38
	float m_flStartCycle; // 0x3c
	float m_flEndCycle; // 0x40
};

// Aligment: 2
// Size: 24
struct ParamSpanSample_t
{
public:
	CAnimVariant m_value; // 0x0
	float m_flCycle; // 0x14
};

// Aligment: 5
// Size: 40
struct ParamSpan_t
{
public:
	CUtlVector< ParamSpanSample_t > m_samples; // 0x0
	CAnimParamHandle m_hParam; // 0x18
	AnimParamType_t m_eParamType; // 0x1a
	float m_flStartCycle; // 0x1c
	float m_flEndCycle; // 0x20
};

// Aligment: 1
// Size: 24
class CParamSpanUpdater
{
public:
	CUtlVector< ParamSpan_t > m_spans; // 0x0
};

// Aligment: 0
// Size: 32
class CAnimGraphSettingsGroup
{
public:
// <no members described>
};

// Aligment: 1
// Size: 40
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking"
	bool m_bNetworkingEnabled; // 0x20
};

// Aligment: 5
// Size: 56
class CAnimComponentBase
{
public:
	// MPropertyHideField
	CUtlString m_group; // 0x18
	// MPropertyHideField
	AnimComponentID m_id; // 0x28
	// MPropertyFriendlyName "Start Enabled"
	bool m_bStartEnabled; // 0x2c
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x30
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34
};

// Aligment: 1
// Size: 40
class CAnimComponentManager
{
public:
	CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8
};

// Aligment: 2
// Size: 88
class CAnimScriptComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x40
	// MPropertyFriendlyName "Script File"
	// MPropertyAttributeEditor "AssetBrowse( as )"
	// MPropertyAttrChangeCallback
	CUtlString m_scriptFilename; // 0x48
};

// Aligment: 2
// Size: 88
class CActionComponent : public CAnimComponentBase
{
public:
	CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x38
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x50
};

// Aligment: 6
// Size: 40
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
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x18
};

// Aligment: 2
// Size: 88
class CDampedValueComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38
	// MPropertyFriendlyName "Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CDampedValueItem > m_items; // 0x40
};

// Aligment: 3
// Size: 32
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0
	CAnimParamHandle m_hParamIn; // 0x18
	CAnimParamHandle m_hParamOut; // 0x1a
};

// Aligment: 7
// Size: 264
class CMovementComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Movement Modes"
	CUtlVector< CMovementMode > m_moveModes; // 0x40
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimMotorBase > > m_motors; // 0x58
	// MPropertyFriendlyName "Network Path"
	bool m_bNetworkPath; // 0x70
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Default Mode"
	FacingMode m_eDefaultFacingMode; // 0x74
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_facingDamping; // 0x78
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Network Facing"
	bool m_bNetworkFacing; // 0x88
	// MPropertyHideField
	AnimParamID[30] m_paramIDs; // 0x8c
};

// Aligment: 1
// Size: 64
class CLODComponent : public CAnimComponentBase
{
public:
	int32_t m_nServerLOD; // 0x38
};

// Aligment: 7
// Size: 96
class CLookComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Network Look Target"
	bool m_bNetworkLookTarget; // 0x40
	// MPropertyHideField
	AnimParamID m_lookHeadingID; // 0x44
	// MPropertyHideField
	AnimParamID m_lookHeadingVelocityID; // 0x48
	// MPropertyHideField
	AnimParamID m_lookPitchID; // 0x4c
	// MPropertyHideField
	AnimParamID m_lookDirectionID; // 0x50
	// MPropertyHideField
	AnimParamID m_lookTargetID; // 0x54
	// MPropertyHideField
	AnimParamID m_lookTargetWorldSpaceID; // 0x58
};

// Aligment: 2
// Size: 16
class CRigidBodyWeight
{
public:
	CUtlString m_name; // 0x0
	float m_flWeight; // 0x8
};

// Aligment: 2
// Size: 40
class CRigidBodyWeightList
{
public:
	CUtlString m_name; // 0x8
	CUtlVector< CRigidBodyWeight > m_weights; // 0x10
};

// Aligment: 3
// Size: 88
class CRagdollComponent : public CAnimComponentBase
{
public:
	CUtlVector< CRigidBodyWeightList > m_weightLists; // 0x38
	float m_flSpringFrequencyMin; // 0x50
	float m_flSpringFrequencyMax; // 0x54
};

// Aligment: 2
// Size: 32
class WeightList
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< float32 > m_weights; // 0x8
};

// Aligment: 7
// Size: 96
class CSlopeComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Trace Distance"
	float m_flTraceDistance; // 0x40
	// MPropertyHideField
	AnimParamID m_slopeAngleID; // 0x44
	// MPropertyHideField
	AnimParamID m_slopeHeadingID; // 0x48
	// MPropertyHideField
	AnimParamID m_slopeAngleSideID; // 0x4c
	// MPropertyHideField
	AnimParamID m_slopeAngleFrontID; // 0x50
	// MPropertyHideField
	AnimParamID m_slopeNormalID; // 0x54
	// MPropertyHideField
	AnimParamID m_slopeNormal_WorldSpaceID; // 0x58
};

// Aligment: 9
// Size: 96
class CVRInputComponent : public CAnimComponentBase
{
public:
	// MPropertyHideField
	AnimParamID m_FingerCurl_Thumb; // 0x38
	// MPropertyHideField
	AnimParamID m_FingerCurl_Index; // 0x3c
	// MPropertyHideField
	AnimParamID m_FingerCurl_Middle; // 0x40
	// MPropertyHideField
	AnimParamID m_FingerCurl_Ring; // 0x44
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

// Aligment: 0
// Size: 40
class CAnimActionBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 48
class CEmitTagAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x28
};

// Aligment: 2
// Size: 64
class CSetParameterAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_param; // 0x28
	// MPropertyFriendlyName "Value"
	CAnimVariant m_value; // 0x2c
};

// Aligment: 2
// Size: 48
class CToggleComponentAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Component"
	// MPropertyAttributeChoiceName "Component"
	AnimComponentID m_componentID; // 0x28
	// MPropertyFriendlyName "Set Enabled"
	bool m_bSetEnabled; // 0x2c
};

// Aligment: 2
// Size: 56
class CExpressionAction : public CAnimActionBase
{
public:
	AnimParamID m_param; // 0x28
	CUtlString m_expression; // 0x30
};

// Aligment: 2
// Size: 40
class CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyFriendlyName "Is Default"
	bool m_bDefault; // 0x20
};

// Aligment: 1
// Size: 48
class CPathAnimMotorBase : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x28
};

// Aligment: 0
// Size: 48
class CPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 80
class CDampedPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
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

// Aligment: 6
// Size: 88
class CPlayerInputAnimMotor : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x28
	// MPropertyFriendlyName "Use Acceleration"
	bool m_bUseAcceleration; // 0x40
	// MPropertyFriendlyName "Spring Constant"
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

// Aligment: 12
// Size: 120
class CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CAnimGraphSymbolWithStorage m_name; // 0x18
	// MPropertyHideField
	CUtlString m_group; // 0x38
	// MPropertyHideField
	AnimParamID m_id; // 0x40
	// MPropertyHideField
	// MPropertyAttrChangeCallback
	CUtlString m_componentName; // 0x58
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x64
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x68
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x69
	// MPropertyFriendlyName "Network"
	AnimParamNetworkSetting m_eNetworkSetting; // 0x6c
	// MPropertyFriendlyName "Game Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGameWritable; // 0x70
	// MPropertyFriendlyName "Graph Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGraphWritable; // 0x71
	// MPropertyHideField
	bool m_bIsReferenced; // 0x72
	// MPropertyHideField
	bool m_bNetworkingRequested; // 0x73
};

// Aligment: 1
// Size: 128
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x78
};

// Aligment: 2
// Size: 208
class CEnumAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x80
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x88
};

// Aligment: 3
// Size: 136
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x78
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x7c
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x80
};

// Aligment: 4
// Size: 136
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x78
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x7c
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x80
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x84
};

// Aligment: 2
// Size: 136
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x78
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x84
};

// Aligment: 2
// Size: 160
class CQuaternionAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x80
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x90
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

// Aligment: 5
// Size: 168
class CSequenceAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x98
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xa0
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa4
};

// Aligment: 3
// Size: 32
class CBlendNodeChild
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x8
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x10
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x18
};

// Aligment: 9
// Size: 128
class CBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children; // 0x48
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x60
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x64
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x68
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x6c
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x6d
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x6e
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x6f
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 3
// Size: 80
class CRagdollAnimNode : public CAnimNodeBase
{
public:
	CUtlString m_weightListName; // 0x38
	RagdollPoseControl m_poseControlMethod; // 0x40
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x44
};

// Aligment: 1
// Size: 88
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x50
};

// Aligment: 4
// Size: 24
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

// Aligment: 9
// Size: 104
class CChoiceAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandSelf
	CUtlVector< CChoiceNodeChild > m_children; // 0x38
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

// Aligment: 3
// Size: 72
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x40
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x44
};

// Aligment: 4
// Size: 120
class CCycleControlClipAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x50
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x68
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x70
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x74
};

// Aligment: 10
// Size: 96
class CAddAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_baseInput; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_additiveInput; // 0x40
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50
	// MPropertyFriendlyName "Add Foot Motion"
	bool m_bApplyToFootMotion; // 0x54
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x55
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x56
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x57
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x58
};

// Aligment: 10
// Size: 96
class CSubtractAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_baseInputConnection; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_subtractInputConnection; // 0x40
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50
	// MPropertyFriendlyName "Subtract Foot Motion"
	bool m_bApplyToFootMotion; // 0x54
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x55
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x56
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x57
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x58
};

// Aligment: 13
// Size: 120
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Generate Movement"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttrChangeCallback
	bool m_bApplyMovement; // 0x40
	// MPropertyFriendlyName "Movement Velocity Parameter"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveVectorParam; // 0x44
	// MPropertyFriendlyName "Orient Movement"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttrChangeCallback
	bool m_bOrientMovement; // 0x48
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
	// MPropertyFriendlyName "Face Direction"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x54
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x58
	// MPropertyFriendlyName "Turn Limit Only"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	// MPropertyAttrChangeCallback
	bool m_bLimitOnly; // 0x5c
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x60
	// MPropertyFriendlyName "Turn to Face Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceLimit; // 0x64
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68
};

// Aligment: 2
// Size: 72
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x40
};

// Aligment: 7
// Size: 88
class CTurnHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x40
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x44
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x48
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x4c
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x4d
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x50
};

// Aligment: 11
// Size: 144
class CAimMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40
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
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x60
	// MPropertyFriendlyName "Blend Mode"
	// MPropertyAttrChangeCallback
	AimMatrixBlendMode m_blendMode; // 0x68
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	// MPropertyAttrStateCallback
	CUtlString m_boneMaskName; // 0x70
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x78
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x79
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80
};

// Aligment: 2
// Size: 72
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 7
// Size: 104
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x40
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
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x54
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x58
};

// Aligment: 6
// Size: 80
class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x40
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x44
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x48
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x49
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x4a
};

// Aligment: 13
// Size: 120
class CBoneMaskAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection1; // 0x40
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection2; // 0x48
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x50
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x54
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

// Aligment: 1
// Size: 64
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
};

// Aligment: 3
// Size: 72
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x40
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x41
};

// Aligment: 7
// Size: 128
class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40
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
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 13
// Size: 136
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40
	// MPropertyFriendlyName "Auto-Detect Hinge Axis"
	bool m_bAutoDetectHingeAxis; // 0x48
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x4c
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x50
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x58
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
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Rotation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_rotationParam; // 0x78
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Constrain Twist"
	// MPropertyAttrStateCallback
	bool m_bConstrainTwist; // 0x7c
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Max Twist"
	// MPropertyAttrStateCallback
	float m_flMaxTwist; // 0x80
};

// Aligment: 8
// Size: 88
class CSolveIKChainAnimNodeChainData
{
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

// Aligment: 2
// Size: 96
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandSelf
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x48
};

// Aligment: 17
// Size: 136
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Target"
	// MPropertyAttrChangeCallback
	AnimVectorSource m_target; // 0x40
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x44
	// MPropertyFriendlyName "Parameter is a Position"
	// MPropertyAttrStateCallback
	bool m_bIsPosition; // 0x48
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x4c
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x50
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58
	// MPropertyFriendlyName "Rotate Through Forward"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrChangeCallback
	bool m_bRotateYawForward; // 0x60
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrStateCallback
	float m_flYawLimit; // 0x64
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 90"
	// MPropertyGroupName "Rotation Limits"
	float m_flPitchLimit; // 0x68
	// MPropertyFriendlyName "Maintain Up Direction"
	bool m_bMaintainUpDirection; // 0x6c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x6d
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x6e
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x6f
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x70
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x74
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78
};

// Aligment: 3
// Size: 72
class CPathHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x40
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x44
};

// Aligment: 3
// Size: 24
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

// Aligment: 1
// Size: 88
class CProxyAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "External Connections"
	// MPropertyAutoExpandSelf
	// MPropertyAttrChangeCallback
	CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x40
};

// Aligment: 5
// Size: 88
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
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

// Aligment: 4
// Size: 72
class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Data Source"
	// MPropertyAttrChangeCallback
	AnimVrBoneTransformSource_t m_transformSource; // 0x38
	// MPropertyFriendlyName "Motion Range"
	// MPropertyAttrStateCallback
	AnimVRHandMotionRange_t m_motionRange; // 0x3c
	// MPropertyFriendlyName "Enable IK"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableIK; // 0x40
	// MPropertyFriendlyName "Enable Collision"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableCollision; // 0x41
};

// Aligment: 6
// Size: 96
class CStanceOverrideAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_stanceSourceConnection; // 0x40
	// MPropertyFriendlyName "Blend Parameter (optional)"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_blendParamID; // 0x48
	// MPropertyFriendlyName "Stance Source"
	// MPropertyAttrChangeCallback
	StanceOverrideMode m_eMode; // 0x4c
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_sequenceName; // 0x50
	// MPropertyFriendlyName "Frame"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x58
};

// Aligment: 2
// Size: 72
class CStanceScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 10
// Size: 168
class CSelectorAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CAnimNodeConnection > m_children; // 0x40
	// MPropertyHideField
	CUtlVector< AnimTagID > m_tags; // 0x58
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x74
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x78
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x80
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0x98
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x9c
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x9d
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xa0
};

// Aligment: 24
// Size: 168
class CHitReactAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x40
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x44
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

// Aligment: 3
// Size: 48
class CBlend2DItemBase
{
public:
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x18
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Use Custom Duration"
	// MPropertyAttrChangeCallback
	bool m_bUseCustomDuration; // 0x28
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Custom Duration"
	// MPropertyAttrStateCallback
	float m_flCustomDuration; // 0x2c
};

// Aligment: 2
// Size: 88
class CSequenceBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x38
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
};

// Aligment: 2
// Size: 72
class CNodeBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x40
};

// Aligment: 13
// Size: 200
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CBlend2DItemBase > > m_items; // 0x50
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceX; // 0x98
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramX; // 0x9c
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceY; // 0xa0
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramY; // 0xa4
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa8
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0xa9
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0xaa
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xac
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xb0
	// MPropertyFriendlyName "AnimEvents and Tags Exclusive To Most Weighted"
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xc0
};

// Aligment: 10
// Size: 120
class CFootAdjustmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_facingTarget; // 0x40
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x44
	// MPropertyFriendlyName "Animation Driven"
	// MPropertyAttrChangeCallback
	bool m_bAnimationDriven; // 0x45
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

// Aligment: 7
// Size: 40
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

// Aligment: 38
// Size: 264
class CFootLockAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootLockItem > m_items; // 0x40
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x60
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x64
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x65
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x68
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x6c
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bApplyLegTwistLimits; // 0x6d
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	float m_flMaxLegTwist; // 0x70
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x74
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x78
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x7c
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x7d
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x80
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x84
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x88
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x8c
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa0
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xa4
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xa8
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xac
	// MPropertyFriendlyName "Tolerance"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakTolerance; // 0xb0
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xb4
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xb8
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xbc
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc0
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xc4
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xc8
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xcc
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd0
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xd4
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xd8
	// MPropertyFriendlyName "Enable Root Height Damping"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrChangeCallback
	bool m_bEnableRootHeightDamping; // 0xe8
	// MPropertyFriendlyName "Damping Settings"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_rootHeightDamping; // 0xf0
	// MPropertyFriendlyName "Max Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMaxRootHeightOffset; // 0x100
	// MPropertyFriendlyName "Min Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMinRootHeightOffset; // 0x104
};

// Aligment: 11
// Size: 80
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

// Aligment: 7
// Size: 40
class CFootPinningItem
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
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x18
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_param; // 0x1c
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x20
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x24
};

// Aligment: 11
// Size: 136
class CFootPinningAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootPinningItem > m_items; // 0x40
	// MPropertyFriendlyName "Lock Timing Source"
	FootPinningTimingSource m_eTimingSource; // 0x58
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x5c
	// MPropertyFriendlyName "Lock Break Distance"
	float m_flLockBreakDistance; // 0x60
	// MPropertyFriendlyName "Max Leg Straight Amount"
	// MPropertyAttributeRange "0 1"
	float m_flMaxLegStraightAmount; // 0x64
	// MPropertyFriendlyName "Limit Foot Rotation"
	// MPropertyGroupName "Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x68
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyGroupName "Foot Rotation Limits"
	CUtlString m_hipBoneName; // 0x70
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "Knee Twist Limits"
	bool m_bApplyLegTwistLimits; // 0x78
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "Knee Twist Limits"
	float m_flMaxLegTwist; // 0x7c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x80
};

// Aligment: 14
// Size: 120
class CFollowPathAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Blend Out Time"
	float m_flBlendOutTime; // 0x40
	// MPropertyFriendlyName "Block Non-Path Movement"
	bool m_bBlockNonPathMovement; // 0x44
	// MPropertyFriendlyName "Stop Feet at Goal"
	bool m_bStopFeetAtGoal; // 0x45
	// MPropertyFriendlyName "Enable Speed Scaling"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrChangeCallback
	bool m_bScaleSpeed; // 0x46
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

// Aligment: 23
// Size: 208
class CMotionMatchingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionItemGroup > > m_groups; // 0x48
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x60
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0x78
	// MPropertyHideField
	int32_t m_nRandomSeed; // 0x80
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttributeRange "0.01 0.2"
	float m_flSampleRate; // 0x84
	// MPropertyFriendlyName "Search Every Update"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrChangeCallback
	bool m_bSearchEveryTick; // 0x88
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x8c
	// MPropertyFriendlyName "Search when motion ends"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenMotionEnds; // 0x90
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenGoalChanges; // 0x91
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x94
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x98
	// MPropertyFriendlyName "Re-Selection Time Window"
	float m_flReselectionTimeWindow; // 0x9c
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockSelectionWhenWaning; // 0xa0
	// MPropertyFriendlyName "Enable Rotation Correction"
	bool m_bEnableRotationCorrection; // 0xa1
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa2
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xa4
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xa8
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xac
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb0
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xb4
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xb8
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xbc
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc0
};

// Aligment: 3
// Size: 72
class CSetFacingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Facing Mode"
	FacingMode m_facingMode; // 0x40
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x44
};

// Aligment: 6
// Size: 96
class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x40
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x44
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x48
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x4c
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50
};

// Aligment: 7
// Size: 48
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

// Aligment: 2
// Size: 88
class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandSelf
	CUtlVector< CJiggleBoneItem > m_items; // 0x40
};

// Aligment: 8
// Size: 200
class CJumpHelperAnimNode : public CSequenceAnimNode, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_targetParamID; // 0xb0
	// MPropertySuppressField
	float m_flJumpStartCycle; // 0xb4
	// MPropertySuppressField
	float m_flJumpDuration; // 0xb8
	// MPropertyFriendlyName "Translate X"
	bool m_bTranslateX; // 0xbc
	// MPropertyFriendlyName "Translate Y"
	bool m_bTranslateY; // 0xbd
	// MPropertyFriendlyName "Translate Z"
	bool m_bTranslateZ; // 0xbe
	// MPropertyFriendlyName "Apply Speed Scale"
	bool m_bScaleSpeed; // 0xbf
	// MPropertyFriendlyName "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc0
};

// Aligment: 4
// Size: 120
class CSingleFrameAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
	// MPropertyFriendlyName "Frame Selection"
	// MPropertyAttrChangeCallback
	SingleFrameSelection m_eFrameSelection; // 0x58
	// MPropertyFriendlyName "Frame Index"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x5c
	CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x60
};

// Aligment: 3
// Size: 88
class CCommentAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlString m_commentText; // 0x40
	// MPropertySuppressField
	Vector2D m_size; // 0x48
	// MPropertyFriendlyName "Color"
	Color m_color; // 0x50
};

// Aligment: 3
// Size: 112
class CContainerAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x48
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x4c
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x50
};

// Aligment: 0
// Size: 56
class CInputStreamAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 40
class CFootStepTriggerItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0
	// MPropertyFriendlyName "Trigger Phase"
	StepPhase m_triggerPhase; // 0x8
	// MPropertyFriendlyName "Tags"
	// MPropertyAttributeChoiceName "Tag"
	CUtlVector< AnimTagID > m_tags; // 0x10
};

// Aligment: 3
// Size: 96
class CFootStepTriggerAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Tolerance"
	float m_flTolerance; // 0x40
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootStepTriggerItem > m_items; // 0x48
};

// Aligment: 2
// Size: 184
class CSubGraphAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x78
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x80
};

// Aligment: 0
// Size: 56
class CBindPoseAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 56
class CZeroPoseAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 24
class CStateAction
{
public:
	CSmartPtr< CAnimActionBase > m_pAction; // 0x8
	StateActionBehavior m_eBehavior; // 0x10
};

// Aligment: 8
// Size: 112
class CAnimState
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28
	// MPropertyHideField
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

// Aligment: 4
// Size: 112
class CAnimStateTransition
{
public:
	// MPropertySuppressField
	CConditionContainer m_conditionList; // 0x28
	// MPropertyHideField
	AnimStateID m_srcState; // 0x60
	// MPropertyHideField
	AnimStateID m_destState; // 0x64
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x68
};

// Aligment: 1
// Size: 40
class CAnimStateMachine
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x8
};

// Aligment: 2
// Size: 16
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0
	StateActionBehavior m_eBehavior; // 0x8
};

// Aligment: 3
// Size: 3
class CTransitionUpdateData
{
public:
	uint8_t m_srcStateIndex; // 0x0
	uint8_t m_destStateIndex; // 0x1
	bitfield:1 m_bDisabled; // 0x0
};

// Aligment: 8
// Size: 72
class CStateUpdateData
{
public:
	CUtlString m_name; // 0x0
	AnimScriptHandle m_hScript; // 0x8
	CUtlVector< int32 > m_transitionIndices; // 0x10
	CUtlVector< CStateActionUpdater > m_actions; // 0x28
	AnimStateID m_stateID; // 0x40
	bitfield:1 m_bIsStartState; // 0x0
	bitfield:1 m_bIsEndState; // 0x0
	bitfield:1 m_bIsPassthrough; // 0x0
};

// Aligment: 3
// Size: 88
class CAnimStateMachineUpdater
{
public:
	CUtlVector< CStateUpdateData > m_states; // 0x8
	CUtlVector< CTransitionUpdateData > m_transitions; // 0x20
	int32_t m_startStateIndex; // 0x50
};

// Aligment: 0
// Size: 40
class CConditionBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class CConditionContainer
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CConditionBase > > m_conditions; // 0x10
};

// Aligment: 5
// Size: 72
class CCycleCondition : public CConditionBase
{
public:
	Comparison_t m_comparisonOp; // 0x28
	CUtlString m_comparisonString; // 0x30
	float m_comparisonValue; // 0x38
	ComparisonValueType m_comparisonValueType; // 0x3c
	AnimParamID m_comparisonParamID; // 0x40
};

// Aligment: 2
// Size: 48
class CFinishedCondition : public CConditionBase
{
public:
	FinishedConditionOption m_option; // 0x28
	bool m_bIsFinished; // 0x2c
};

// Aligment: 0
// Size: 96
class COrCondition : public CConditionBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 80
class CParameterCondition : public CConditionBase
{
public:
	AnimParamID m_paramID; // 0x28
	Comparison_t m_comparisonOp; // 0x2c
	CAnimVariant m_comparisonValue; // 0x30
	CUtlString m_comparisonString; // 0x48
};

// Aligment: 6
// Size: 64
class CStateStatusCondition : public CConditionBase
{
public:
	StateValue m_sourceValue; // 0x28
	StateComparisonValueType m_comparisonValueType; // 0x2c
	float m_comparisonFixedValue; // 0x30
	StateValue m_comparisonStateValue; // 0x34
	AnimParamID m_comparisonParamID; // 0x38
	Comparison_t m_comparisonOp; // 0x3c
};

// Aligment: 2
// Size: 48
class CTagCondition : public CConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c
};

// Aligment: 2
// Size: 56
class CTimeCondition : public CConditionBase
{
public:
	Comparison_t m_comparisonOp; // 0x28
	CUtlString m_comparisonString; // 0x30
};

// Aligment: 3
// Size: 12
struct TagSpan_t
{
public:
	int32_t m_tagIndex; // 0x0
	float m_startCycle; // 0x4
	float m_endCycle; // 0x8
};

// Aligment: 3
// Size: 48
class CAnimTagSpan
{
public:
	AnimTagID m_id; // 0x20
	float m_fStartCycle; // 0x24
	float m_fDuration; // 0x28
};

// Aligment: 1
// Size: 88
class CAnimTagManager
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 4
// Size: 56
class CAnimTagBase
{
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

// Aligment: 0
// Size: 64
class CStringAnimTag : public CAnimTagBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 72
class CFootFallAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x40
};

// Aligment: 7
// Size: 88
class CAudioAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Sound Event"
	// MPropertyAttributeEditor "SoundPicker()"
	CUtlString m_clipName; // 0x40
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48
	// MPropertyFriendlyName "Volume"
	// MPropertyAttributeRange "0 1"
	float m_flVolume; // 0x50
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x54
	// MPropertyFriendlyName "Stop When Graph Destroyed"
	bool m_bStopWhenGraphEnds; // 0x55
	// MPropertyFriendlyName "Play on Server"
	bool m_bPlayOnServer; // 0x56
	// MPropertyFriendlyName "Play on Client"
	bool m_bPlayOnClient; // 0x57
};

// Aligment: 4
// Size: 96
class CFootstepLandedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x40
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x48
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x50
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x58
};

// Aligment: 1
// Size: 72
class CSequenceFinishedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40
};

// Aligment: 1
// Size: 80
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x40
};

// Aligment: 4
// Size: 88
class CClothSettingsAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x40
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x44
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x48
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x50
};

// Aligment: 6
// Size: 88
class CRagdollAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x40
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x44
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

// Aligment: 10
// Size: 128
class CParticleAnimTag : public CAnimTagBase
{
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x40
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x48
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x50
	// MPropertyFriendlyName "Detach From Owner"
	bool m_bDetachFromOwner; // 0x58
	// MPropertyFriendlyName "Stop on Tag End"
	// MPropertyGroupName "Ending"
	bool m_bStopWhenTagEnds; // 0x59
	// MPropertyFriendlyName "Tag End Stop is Instant"
	// MPropertyGroupName "Ending"
	bool m_bTagEndStopIsInstant; // 0x5a
	// MPropertyFriendlyName "Attachment"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x60
	// MPropertyFriendlyName "Attachment Type"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentType; // 0x68
	// MPropertyFriendlyName "Attachment (Control Point 1)"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentCP1Name; // 0x70
	// MPropertyFriendlyName "Attachment Type (Control Point 1)"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentCP1Type; // 0x78
};

// Aligment: 4
// Size: 88
class CMaterialAttributeAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Attribute Name"
	CUtlString m_AttributeName; // 0x40
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

// Aligment: 2
// Size: 16
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

// Aligment: 2
// Size: 96
class CBodyGroupAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x40
	// MPropertyFriendlyName "Body Group Settings"
	CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x48
};

// Aligment: 0
// Size: 80
class CMotionNodeManager : public CAnimNodeManager
{
public:
// <no members described>
};

// Aligment: 1
// Size: 40
class CMotionParameterManager
{
public:
	CUtlVector< CSmartPtr< CMotionParameter > > m_params; // 0x10
};

// Aligment: 5
// Size: 48
class CMotionParameter
{
public:
	CUtlString m_name; // 0x18
	AnimParamID m_id; // 0x20
	float m_flMinValue; // 0x24
	float m_flMaxValue; // 0x28
	int32_t m_nSamples; // 0x2c
};

// Aligment: 1
// Size: 8
class SampleCode
{
public:
	uint8[8] m_subCode; // 0x0
};

// Aligment: 1
// Size: 4
class MotionDBIndex
{
public:
	uint32_t m_nIndex; // 0x0
};

// Aligment: 3
// Size: 32
class CVectorQuantizer
{
public:
	CUtlVector< float32 > m_centroidVectors; // 0x0
	int32_t m_nCentroids; // 0x18
	int32_t m_nDimensions; // 0x1c
};

// Aligment: 2
// Size: 32
class CProductQuantizer
{
public:
	CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0
	int32_t m_nDimensions; // 0x18
};

// Aligment: 5
// Size: 128
class CMotionSearchNode
{
public:
	CUtlVector< CMotionSearchNode* > m_children; // 0x0
	CVectorQuantizer m_quantizer; // 0x18
	CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38
	CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50
	CUtlVector< int32 > m_selectableSamples; // 0x68
};

// Aligment: 3
// Size: 184
class CMotionSearchDB
{
public:
	CMotionSearchNode m_rootNode; // 0x0
	CProductQuantizer m_residualQuantizer; // 0x80
	CUtlVector< MotionDBIndex > m_codeIndices; // 0xa0
};

// Aligment: 3
// Size: 120
class CMotionItemGroup
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionItem > > m_motions; // 0x20
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38
	CConditionContainer m_conditions; // 0x40
};

// Aligment: 5
// Size: 168
class CMotionItem
{
public:
	// MPropertyHideField
	CMotionParameterManager m_paramManager; // 0x28
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_blockSpans; // 0x50
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa0
};

// Aligment: 1
// Size: 184
class CSequenceMotionItem : public CMotionItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0xb0
};

// Aligment: 2
// Size: 264
class CGraphMotionItem : public CMotionItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0xb0
	// MPropertyHideField
	CMotionNodeManager m_nodeManager; // 0xb8
};

// Aligment: 1
// Size: 40
class CMotionMetricBase
{
public:
	// MPropertyHideField
	float m_flWeight; // 0x20
};

// Aligment: 0
// Size: 40
class CBlockSelectionMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 64
class CFootCycleMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28
};

// Aligment: 0
// Size: 40
class CCurrentRotationVelocityMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 80
class CPathMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Samples Times"
	CUtlVector< float32 > m_pathSamples; // 0x30
	// MPropertyFriendlyName "Extrapolate Movement"
	// MPropertyAttrChangeCallback
	bool m_bExtrapolateMovement; // 0x48
	// MPropertyFriendlyName "Min Extrapolation Speed"
	// MPropertyAttrStateCallback
	float m_flMinExtrapolationSpeed; // 0x4c
};

// Aligment: 2
// Size: 48
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Time"
	float m_flTime; // 0x2c
};

// Aligment: 5
// Size: 56
class CFutureVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c
	// MPropertyFriendlyName "Mode"
	// MPropertyAttrChangeCallback
	VelocityMetricMode m_eMode; // 0x30
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bAutoTargetSpeed; // 0x31
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34
};

// Aligment: 1
// Size: 48
class CBonePositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28
};

// Aligment: 1
// Size: 48
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28
};

// Aligment: 7
// Size: 72
class CDistanceRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Maximum Tracked Distance"
	float m_flMaxDistance; // 0x28
	// MPropertyFriendlyName "Filter By Fixed Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterFixedMinDistance; // 0x2c
	// MPropertyFriendlyName "Min Distance"
	// MPropertyAttrStateCallback
	float m_flMinDistance; // 0x30
	// MPropertyFriendlyName "Filter By Goal Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterGoalDistance; // 0x34
	// MPropertyFriendlyName "Goal Filter Start Distance"
	// MPropertyAttrStateCallback
	float m_flStartGoalFilterDistance; // 0x38
	// MPropertyFriendlyName "Filter By Goal Overshoot"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bFilterGoalOvershoot; // 0x3c
	// MPropertyFriendlyName "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback
	float m_flMaxGoalOvershootScale; // 0x40
};

// Aligment: 2
// Size: 72
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

// Aligment: 4
// Size: 56
class CTimeRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Match Time Remaining"
	// MPropertyGroupName
	// MPropertyAttrChangeCallback
	bool m_bMatchByTimeRemaining; // 0x28
	// MPropertyFriendlyName "Max Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMaxTimeRemaining; // 0x2c
	// MPropertyFriendlyName "Filter By Time Remaining"
	// MPropertyAttrChangeCallback
	bool m_bFilterByTimeRemaining; // 0x30
	// MPropertyFriendlyName "Min Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMinTimeRemaining; // 0x34
};

// Aligment: 2
// Size: 72
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

// Aligment: 5
// Size: 88
struct ScriptInfo_t
{
public:
	CUtlString m_code; // 0x0
	CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8
	CUtlVector< int32 > m_proxyReadParams; // 0x20
	CUtlVector< int32 > m_proxyWriteParams; // 0x38
	AnimScriptType m_eScriptType; // 0x50
};

// Aligment: 1
// Size: 272
class CAnimScriptManager
{
public:
	CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10
};

// Aligment: 2
// Size: 2
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0
	uint8_t m_index; // 0x1
};

// Aligment: 5
// Size: 144
class CAnimReplayFrame
{
public:
	CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // 0x10
	CUtlBinaryBlock m_instanceData; // 0x28
	CTransform m_startingLocalToWorldTransform; // 0x40
	CTransform m_localToWorldTransform; // 0x60
	float m_timeStamp; // 0x80
};

// Aligment: 5
// Size: 112
class CAnimGraphDebugReplay
{
public:
	CUtlString m_animGraphFileName; // 0x40
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48
	int32_t m_startIndex; // 0x60
	int32_t m_writeIndex; // 0x64
	int32_t m_frameCount; // 0x68
};

// Aligment: 1
// Size: 32
class CAnimParamHandleMap
{
public:
	CUtlHashtable< uint16, int16 > m_list; // 0x0
};

// Aligment: 6
// Size: 256
class CAnimParameterListUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18
	CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30
	CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50
	CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70
	CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88
	CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // 0xa0
};

// Aligment: 1
// Size: 56
class CAnimTagManagerUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 4
// Size: 48
class CAnimComponentUpdater
{
public:
	CUtlString m_name; // 0x18
	AnimComponentID m_id; // 0x20
	AnimNodeNetworkMode m_networkMode; // 0x24
	bool m_bStartEnabled; // 0x28
};

// Aligment: 2
// Size: 16
class CMovementMode
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0
	// MPropertyFriendlyName "Top Speed"
	float m_flSpeed; // 0x8
};

// Aligment: 9
// Size: 192
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CMovementMode > m_movementModes; // 0x30
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x48
	CAnimInputDamping m_facingDamping; // 0x60
	FacingMode m_eDefaultFacingMode; // 0x70
	int32_t m_nDefaultMotorIndex; // 0x7c
	bool m_bMoveVarsDisabled; // 0x80
	bool m_bNetworkPath; // 0x81
	bool m_bNetworkFacing; // 0x82
	CAnimParamHandle[30] m_paramHandles; // 0x83
};

// Aligment: 7
// Size: 72
class CLookComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimParamHandle m_hLookHeading; // 0x34
	CAnimParamHandle m_hLookHeadingVelocity; // 0x36
	CAnimParamHandle m_hLookPitch; // 0x38
	CAnimParamHandle m_hLookDirection; // 0x3a
	CAnimParamHandle m_hLookTarget; // 0x3c
	CAnimParamHandle m_hLookTargetWorldSpace; // 0x3e
	bool m_bNetworkLookTarget; // 0x40
};

// Aligment: 7
// Size: 72
class CSlopeComponentUpdater : public CAnimComponentUpdater
{
public:
	float m_flTraceDistance; // 0x34
	CAnimParamHandle m_hSlopeAngle; // 0x38
	CAnimParamHandle m_hSlopeAngleFront; // 0x3a
	CAnimParamHandle m_hSlopeAngleSide; // 0x3c
	CAnimParamHandle m_hSlopeHeading; // 0x3e
	CAnimParamHandle m_hSlopeNormal; // 0x40
	CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42
};

// Aligment: 0
// Size: 24
class CAnimActionUpdater
{
public:
// <no members described>
};

// Aligment: 2
// Size: 32
class CAnimMotorUpdaterBase
{
public:
	CUtlString m_name; // 0x10
	bool m_bDefault; // 0x18
};

// Aligment: 1
// Size: 40
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:
	bool m_bLockToPath; // 0x20
};

// Aligment: 0
// Size: 40
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 72
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
	float m_flAnticipationTime; // 0x2c
	float m_flMinSpeedScale; // 0x30
	CAnimParamHandle m_hAnticipationPosParam; // 0x34
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x36
	float m_flSpringConstant; // 0x38
	float m_flMinSpringTension; // 0x3c
	float m_flMaxSpringTension; // 0x40
};

// Aligment: 6
// Size: 80
class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:
	CUtlVector< float32 > m_sampleTimes; // 0x20
	float m_flSpringConstant; // 0x3c
	float m_flAnticipationDistance; // 0x40
	CAnimParamHandle m_hAnticipationPosParam; // 0x44
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x46
	bool m_bUseAcceleration; // 0x48
};

// Aligment: 5
// Size: 28
class CStateNodeTransitionData
{
public:
	CBlendCurve m_curve; // 0x0
	CAnimValue< float32 > m_blendDuration; // 0x8
	CAnimValue< float32 > m_resetCycleValue; // 0x10
	bitfield:1 m_bReset; // 0x0
	bitfield:3 m_resetCycleOption; // 0x0
};

// Aligment: 2
// Size: 24
class CStateNodeStateData
{
public:
	CAnimUpdateNodeRef m_pChild; // 0x0
	bitfield:1 m_bExclusiveRootMotion; // 0x0
};

// Aligment: 1
// Size: 16
class CAnimUpdateNodeRef
{
public:
	int32_t m_nodeIndex; // 0x8
};

// Aligment: 3
// Size: 88
class CAnimUpdateNodeBase
{
public:
	CAnimNodePath m_nodePath; // 0x18
	CUtlString m_name; // 0x48
	AnimNodeNetworkMode m_networkMode; // 0x50
};

// Aligment: 2
// Size: 32
class CDirectPlaybackTagData
{
public:
	CUtlString m_sequenceName; // 0x0
	CUtlVector< TagSpan_t > m_tags; // 0x8
};

// Aligment: 15
// Size: 352
struct TwoBoneIKSettings_t
{
public:
	IkEndEffectorType m_endEffectorType; // 0x0
	CAnimAttachment m_endEffectorAttachment; // 0x10
	IkTargetType m_targetType; // 0x90
	CAnimAttachment m_targetAttachment; // 0xa0
	int32_t m_targetBoneIndex; // 0x120
	CAnimParamHandle m_hPositionParam; // 0x124
	CAnimParamHandle m_hRotationParam; // 0x126
	bool m_bAlwaysUseFallbackHinge; // 0x128
	VectorAligned m_vFallbackHingeAxis; // 0x130
	int32_t m_nFixedBoneIndex; // 0x140
	int32_t m_nMiddleBoneIndex; // 0x144
	int32_t m_nEndBoneIndex; // 0x148
	bool m_bMatchTargetOrientation; // 0x14c
	bool m_bConstrainTwist; // 0x14d
	float m_flMaxTwist; // 0x150
};

// Aligment: 6
// Size: 136
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

// Aligment: 1
// Size: 104
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58
};

// Aligment: 0
// Size: 88
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 168
class CSkeletalInputUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58
};

// Aligment: 2
// Size: 16
struct StanceInfo_t
{
public:
	Vector m_vPosition; // 0x0
	float m_flDirection; // 0xc
};

// Aligment: 4
// Size: 152
class CStanceOverrideUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68
	CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80
	CAnimParamHandle m_hParameter; // 0x90
	StanceOverrideMode m_eMode; // 0x94
};

// Aligment: 1
// Size: 112
class CStanceScaleUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_hParam; // 0x68
};

// Aligment: 8
// Size: 168
class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58
	CUtlVector< int8 > m_tags; // 0x70
	CBlendCurve m_blendCurve; // 0x8c
	CAnimValue< float32 > m_flBlendTime; // 0x94
	CAnimParamHandle m_hParameter; // 0x9c
	SelectorTagBehavior_t m_eTagBehavior; // 0xa0
	bool m_bResetOnChange; // 0xa4
	bool m_bSyncCyclesOnChange; // 0xa5
};

// Aligment: 8
// Size: 200
class CHitReactUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68
	CAnimParamHandle m_triggerParam; // 0xb4
	CAnimParamHandle m_hitBoneParam; // 0xb6
	CAnimParamHandle m_hitOffsetParam; // 0xb8
	CAnimParamHandle m_hitDirectionParam; // 0xba
	CAnimParamHandle m_hitStrengthParam; // 0xbc
	float m_flMinDelayBetweenHits; // 0xc0
	bool m_bResetChild; // 0xc4
};

// Aligment: 6
// Size: 64
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

// Aligment: 15
// Size: 240
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< BlendItem_t > m_items; // 0x60
	CUtlVector< TagSpan_t > m_tags; // 0x78
	CParamSpanUpdater m_paramSpans; // 0x90
	CUtlVector< int32 > m_nodeItemIndices; // 0xa8
	CAnimInputDamping m_damping; // 0xc0
	AnimValueSource m_blendSourceX; // 0xd0
	CAnimParamHandle m_paramX; // 0xd4
	AnimValueSource m_blendSourceY; // 0xd8
	CAnimParamHandle m_paramY; // 0xdc
	Blend2DMode m_eBlendMode; // 0xe0
	float m_playbackSpeed; // 0xe4
	bool m_bLoop; // 0xe8
	bool m_bLockBlendOnReset; // 0xe9
	bool m_bLockWhenWaning; // 0xea
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb
};

// Aligment: 9
// Size: 168
class CFootAdjustmentUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< HSequence > m_clips; // 0x70
	CPoseHandle m_hBasePoseCacheHandle; // 0x88
	CAnimParamHandle m_facingTarget; // 0x8c
	float m_flTurnTimeMin; // 0x90
	float m_flTurnTimeMax; // 0x94
	float m_flStepHeightMax; // 0x98
	float m_flStepHeightMaxAngle; // 0x9c
	bool m_bResetChild; // 0xa0
	bool m_bAnimationDriven; // 0xa1
};

// Aligment: 2
// Size: 8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0
	float m_flTraceRadius; // 0x4
};

// Aligment: 10
// Size: 64
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
	float m_flTraceAngleBlend; // 0x34
	int32_t m_nDisableTagIndex; // 0x38
	int32_t m_nFootIndex; // 0x3c
};

// Aligment: 20
// Size: 312
class CFootLockUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68
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

// Aligment: 4
// Size: 200
class CFootPinningUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70
	FootPinningTimingSource m_eTimingSource; // 0xa0
	CUtlVector< CAnimParamHandle > m_params; // 0xa8
	bool m_bResetChild; // 0xc0
};

// Aligment: 13
// Size: 168
class CFollowPathUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flBlendOutTime; // 0x6c
	bool m_bBlockNonPathMovement; // 0x70
	bool m_bStopFeetAtGoal; // 0x71
	bool m_bScaleSpeed; // 0x72
	float m_flScale; // 0x74
	float m_flMinAngle; // 0x78
	float m_flMaxAngle; // 0x7c
	float m_flSpeedScaleBlending; // 0x80
	CAnimInputDamping m_turnDamping; // 0x88
	AnimValueSource m_facingTarget; // 0x98
	CAnimParamHandle m_hParam; // 0x9c
	float m_flTurnToFaceOffset; // 0xa0
	bool m_bTurnToFace; // 0xa4
};

// Aligment: 23
// Size: 320
class CMotionMatchingUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CMotionDataSet m_dataSet; // 0x58
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78
	CUtlVector< float32 > m_weights; // 0x90
	bool m_bSearchEveryTick; // 0xe0
	float m_flSearchInterval; // 0xe4
	bool m_bSearchWhenClipEnds; // 0xe8
	bool m_bSearchWhenGoalChanges; // 0xe9
	CBlendCurve m_blendCurve; // 0xec
	float m_flSampleRate; // 0xf4
	float m_flBlendTime; // 0xf8
	bool m_bLockClipWhenWaning; // 0xfc
	float m_flSelectionThreshold; // 0x100
	float m_flReselectionTimeWindow; // 0x104
	bool m_bEnableRotationCorrection; // 0x108
	bool m_bGoalAssist; // 0x109
	float m_flGoalAssistDistance; // 0x10c
	float m_flGoalAssistTolerance; // 0x110
	CAnimInputDamping m_distanceScale_Damping; // 0x118
	float m_flDistanceScale_OuterRadius; // 0x128
	float m_flDistanceScale_InnerRadius; // 0x12c
	float m_flDistanceScale_MaxScale; // 0x130
	float m_flDistanceScale_MinScale; // 0x134
	bool m_bEnableDistanceScaling; // 0x138
};

// Aligment: 2
// Size: 112
class CSetFacingUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FacingMode m_facingMode; // 0x68
	bool m_bResetChild; // 0x6c
};

// Aligment: 5
// Size: 144
class CStopAtGoalUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flOuterRadius; // 0x6c
	float m_flInnerRadius; // 0x70
	float m_flMaxScale; // 0x74
	float m_flMinScale; // 0x78
	CAnimInputDamping m_damping; // 0x80
};

// Aligment: 1
// Size: 136
class CJiggleBoneUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68
};

// Aligment: 4
// Size: 128
class CSingleFrameUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x58
	CPoseHandle m_hPoseCacheHandle; // 0x70
	HSequence m_hSequence; // 0x74
	float m_flCycle; // 0x78
};

// Aligment: 0
// Size: 96
class CInputStreamUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class FootStepTrigger
{
public:
	CUtlVector< int32 > m_tags; // 0x0
	int32_t m_nFootIndex; // 0x18
	StepPhase m_triggerPhase; // 0x1c
};

// Aligment: 2
// Size: 136
class CFootStepTriggerUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< FootStepTrigger > m_triggers; // 0x68
	float m_flTolerance; // 0x84
};

// Aligment: 5
// Size: 264
class CMotionGraphGroup
{
public:
	CMotionSearchDB m_searchDB; // 0x0
	CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xb8
	CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xd0
	CUtlVector< int32 > m_sampleToConfig; // 0xe8
	AnimScriptHandle m_hIsActiveScript; // 0x100
};

// Aligment: 2
// Size: 32
class CMotionDataSet
{
public:
	CUtlVector< CMotionGraphGroup > m_groups; // 0x0
	int32_t m_nDimensionCount; // 0x18
};

// Aligment: 7
// Size: 88
class CMotionGraph
{
public:
	CParamSpanUpdater m_paramSpans; // 0x10
	CUtlVector< TagSpan_t > m_tags; // 0x28
	CSmartPtr< CMotionNode > m_pRootNode; // 0x40
	int32_t m_nParameterCount; // 0x48
	int32_t m_nConfigStartIndex; // 0x4c
	int32_t m_nConfigCount; // 0x50
	bool m_bLoop; // 0x54
};

// Aligment: 0
// Size: 88
class CEditableMotionGraph : public CMotionGraph
{
public:
// <no members described>
};

// Aligment: 2
// Size: 40
class CMotionNode
{
public:
	CUtlString m_name; // 0x18
	AnimNodeID m_id; // 0x20
};

// Aligment: 3
// Size: 72
class CMotionNodeSequence : public CMotionNode
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x28
	HSequence m_hSequence; // 0x40
	float m_flPlaybackSpeed; // 0x44
};

// Aligment: 2
// Size: 16
class MotionBlendItem
{
public:
	CSmartPtr< CMotionNode > m_pChild; // 0x0
	float m_flKeyValue; // 0x8
};

// Aligment: 2
// Size: 72
class CMotionNodeBlend1D : public CMotionNode
{
public:
	CUtlVector< MotionBlendItem > m_blendItems; // 0x28
	int32_t m_nParamIndex; // 0x40
};

// Aligment: 4
// Size: 80
class CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_means; // 0x18
	CUtlVector< float32 > m_standardDeviations; // 0x30
	float m_flWeight; // 0x48
	int32_t m_nDimensionStartIndex; // 0x4c
};

// Aligment: 0
// Size: 80
class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 1
// Size: 104
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
};

// Aligment: 0
// Size: 80
class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 80
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 4
// Size: 120
class CPathMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_pathTimeSamples; // 0x50
	float m_flDistance; // 0x68
	bool m_bExtrapolateMovement; // 0x6c
	float m_flMinExtrapolationSpeed; // 0x70
};

// Aligment: 2
// Size: 88
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
	float m_flTime; // 0x54
};

// Aligment: 4
// Size: 96
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
	float m_flStoppingDistance; // 0x54
	float m_flTargetSpeed; // 0x58
	VelocityMetricMode m_eMode; // 0x5c
};

// Aligment: 1
// Size: 88
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
};

// Aligment: 1
// Size: 88
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
};

// Aligment: 7
// Size: 104
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

// Aligment: 2
// Size: 112
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	float m_flMinStepsRemaining; // 0x68
};

// Aligment: 4
// Size: 96
class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	bool m_bMatchByTimeRemaining; // 0x50
	float m_flMaxTimeRemaining; // 0x54
	bool m_bFilterByTimeRemaining; // 0x58
	float m_flMinTimeRemaining; // 0x5c
};

// Aligment: 2
// Size: 112
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	bool m_bIgnoreSlope; // 0x68
};

// Aligment: 8
// Size: 208
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	CAnimInputDamping m_damping; // 0x80
	CPoseHandle[10] m_poseCacheHandles; // 0x90
	AimMatrixBlendMode m_eBlendMode; // 0xb8
	float m_fAngleIncrement; // 0xbc
	int32_t m_nSequenceMaxFrame; // 0xc0
	int32_t m_nBoneMaskIndex; // 0xc4
	bool m_bTargetIsPosition; // 0xc8
};

// Aligment: 2
// Size: 8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0
	float m_weight; // 0x4
};

// Aligment: 11
// Size: 192
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

// Aligment: 4
// Size: 144
struct FollowAttachmentSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	int32_t m_boneIndex; // 0x80
	bool m_bMatchTranslation; // 0x84
	bool m_bMatchRotation; // 0x85
};

// Aligment: 2
// Size: 8
struct FingerSource_t
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
};

// Aligment: 7
// Size: 52
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

// Aligment: 9
// Size: 96
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

// Aligment: 2
// Size: 48
struct WristBone_t
{
public:
	CTransform m_xOffsetTransformMS; // 0x0
	int32_t m_boneIndex; // 0x20
};

// Aligment: 9
// Size: 72
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

// Aligment: 17
// Size: 68
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

// Aligment: 18
// Size: 96
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
	float m_flMaxFootHeight; // 0x38
	float m_flExtensionScale; // 0x3c
	float m_flMaxLegTwist; // 0x40
	bool m_bEnableLockBreaking; // 0x44
	float m_flLockBreakTolerance; // 0x48
	float m_flLockBlendTime; // 0x4c
	bool m_bEnableStretching; // 0x50
	float m_flMaxStretchAmount; // 0x54
	float m_flStretchExtensionScale; // 0x58
};

// Aligment: 7
// Size: 48
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

// Aligment: 6
// Size: 80
struct ChainToSolveData_t
{
public:
	int32_t m_nChainIndex; // 0x0
	IKSolverSettings_t m_SolverSettings; // 0x4
	IKTargetSettings_t m_TargetSettings; // 0x10
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x30
	float m_flDebugNormalizedValue; // 0x34
	VectorAligned m_vDebugOffset; // 0x40
};

// Aligment: 1
// Size: 24
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0
};

// Aligment: 7
// Size: 44
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

// Aligment: 1
// Size: 24
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0
};

// Aligment: 5
// Size: 120
struct VPhysics2ShapeDef_t
{
public:
	CUtlVector< RnSphereDesc_t > m_spheres; // 0x0
	CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18
	CUtlVector< RnHullDesc_t > m_hulls; // 0x30
	CUtlVector< RnMeshDesc_t > m_meshes; // 0x48
	CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60
};

// Aligment: 10
// Size: 160
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
	Vector m_vMassCenterOverride; // 0x94
};

// Aligment: 8
// Size: 160
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

// Aligment: 2
// Size: 8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0
	float m_flMax; // 0x4
};

// Aligment: 46
// Size: 248
struct VPhysXConstraintParams_t
{
public:
	int8_t m_nType; // 0x0
	int8_t m_nTranslateMotion; // 0x1
	int8_t m_nRotateMotion; // 0x2
	int8_t m_nFlags; // 0x3
	Vector[2] m_anchor; // 0x4
	QuaternionStorage[2] m_axes; // 0x1c
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

// Aligment: 4
// Size: 256
struct VPhysXConstraint2_t
{
public:
	uint32_t m_nFlags; // 0x0
	uint16_t m_nParent; // 0x4
	uint16_t m_nChild; // 0x6
	VPhysXConstraintParams_t m_params; // 0x8
};

// Aligment: 24
// Size: 176
struct VPhysXJoint_t
{
public:
	uint16_t m_nType; // 0x0
	uint16_t m_nBody1; // 0x2
	uint16_t m_nBody2; // 0x4
	uint16_t m_nFlags; // 0x6
	CTransform m_Frame1; // 0x10
	CTransform m_Frame2; // 0x30
	bool m_bEnableCollision; // 0x50
	bool m_bEnableLinearLimit; // 0x51
	VPhysXRange_t m_LinearLimit; // 0x54
	bool m_bEnableLinearMotor; // 0x5c
	Vector m_vLinearTargetVelocity; // 0x60
	float m_flMaxForce; // 0x6c
	bool m_bEnableSwingLimit; // 0x70
	VPhysXRange_t m_SwingLimit; // 0x74
	bool m_bEnableTwistLimit; // 0x7c
	VPhysXRange_t m_TwistLimit; // 0x80
	bool m_bEnableAngularMotor; // 0x88
	Vector m_vAngularTargetVelocity; // 0x8c
	float m_flMaxTorque; // 0x98
	float m_flLinearFrequency; // 0x9c
	float m_flLinearDampingRatio; // 0xa0
	float m_flAngularFrequency; // 0xa4
	float m_flAngularDampingRatio; // 0xa8
	float m_flFriction; // 0xac
};

// Aligment: 6
// Size: 144
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

// Aligment: 16
// Size: 312
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0
	uint16_t m_nRefCounter; // 0x2
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

// Aligment: 7
// Size: 28
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

// Aligment: 8
// Size: 32
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

// Aligment: 8
// Size: 64
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

// Aligment: 8
// Size: 168
class CPhysSurfaceProperties
{
public:
	// MKV3TransferName "surfacePropertyName"
	CUtlString m_name; // 0x0
	uint32_t m_nameHash; // 0x8
	uint32_t m_baseNameHash; // 0xc
	// MKV3TransferName "hidden"
	bool m_bHidden; // 0x18
	// MKV3TransferName "description"
	CUtlString m_description; // 0x20
	// MKV3TransferName "physics"
	CPhysSurfacePropertiesPhysics m_physics; // 0x28
	// MKV3TransferName "audiosounds"
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x88
};

// Aligment: 1
// Size: 24
class CVPhysXSurfacePropertiesList
{
public:
	// MKV3TransferName "SurfacePropertiesList"
	CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0
};

// Aligment: 2
// Size: 32
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8
};

// Aligment: 7
// Size: 168
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

// Aligment: 10
// Size: 88
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

// Aligment: 4
// Size: 64
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0
	CUtlString m_Name; // 0x20
	int32_t m_nParent; // 0x28
	CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30
};

// Aligment: 5
// Size: 32
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
	CUtlString m_flexController; // 0x8
	uint32_t m_flexControllerToken; // 0x10
	float m_flMin; // 0x14
	float m_flMax; // 0x18
};

// Aligment: 3
// Size: 40
struct ModelBoneFlexDriver_t
{
public:
	CUtlString m_boneName; // 0x0
	uint32_t m_boneNameToken; // 0x8
	CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10
};

// Aligment: 2
// Size: 16
struct PermModelDataAnimatedMaterialAttribute_t
{
public:
	CUtlString m_AttributeName; // 0x0
	int32_t m_nNumChannels; // 0x8
};

// Aligment: 23
// Size: 712
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

// Aligment: 1
// Size: 1
struct AttachmentHandle_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 2
// Size: 72
class CModelConfigElement
{
public:
	CUtlString m_ElementName; // 0x8
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10
};

// Aligment: 14
// Size: 232
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

// Aligment: 1
// Size: 96
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48
};

// Aligment: 2
// Size: 88
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
};

// Aligment: 2
// Size: 88
class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
};

// Aligment: 2
// Size: 96
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48
	KeyValues3 m_Args; // 0x50
};

// Aligment: 3
// Size: 40
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8
	bool m_bTopLevel; // 0x20
};

// Aligment: 3
// Size: 32
class CModelConfigList
{
public:
	bool m_bHideMaterialGroupInTools; // 0x0
	bool m_bHideRenderColorInTools; // 0x1
	CUtlVector< CModelConfig* > m_Configs; // 0x8
};

// Aligment: 2
// Size: 24
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0
	uint32_t m_nBindOffsetBytes; // 0x10
};

// Aligment: 2
// Size: 24
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0
	Vector m_vecSize; // 0xc
};

// Aligment: 5
// Size: 96
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0
	CUtlString m_parentName; // 0x8
	matrix3x4_t m_invBindPose; // 0x10
	SkeletonBoneBounds_t m_bbox; // 0x40
	float m_flSphereRadius; // 0x58
};

// Aligment: 3
// Size: 80
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0
	CUtlVector< int32 > m_boneParents; // 0x30
	int32_t m_nBoneWeightCount; // 0x48
};

// Aligment: 3
// Size: 16
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0
	int8[3] m_ConeAxis; // 0xc
	int8_t m_ConeCutoff; // 0xf
};

// Aligment: 12
// Size: 232
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
	uint32_t m_nFirstMeshlet; // 0x2c
	uint16_t m_nNumMeshlets; // 0x30
	CRenderBufferBinding m_indexBuffer; // 0xb8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xe0
};

// Aligment: 2
// Size: 24
class CMeshletDescriptor
{
public:
	PackedAABB_t m_PackedAABB; // 0x0
	CDrawCullingData m_CullingData; // 0x8
};

// Aligment: 6
// Size: 120
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

// Aligment: 8
// Size: 144
class CAttachment
{
public:
	CUtlString m_name; // 0x0
	CUtlString[3] m_influenceNames; // 0x8
	Quaternion[3] m_vInfluenceRotations; // 0x20
	Vector[3] m_vInfluenceOffsets; // 0x50
	float32[3] m_influenceWeights; // 0x74
	bool[3] m_bInfluenceRootTransform; // 0x80
	uint8_t m_nInfluences; // 0x83
	bool m_bIgnoreRotation; // 0x84
};

// Aligment: 14
// Size: 112
class CHitBox
{
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
	bool m_bTranslationOnly; // 0x64
	bool m_bVisible; // 0x65
	bool m_bSelected; // 0x66
};

// Aligment: 4
// Size: 48
class CHitBoxSet
{
public:
	CUtlString m_name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< CHitBox > m_HitBoxes; // 0x10
	CUtlString m_SourceFilename; // 0x28
};

// Aligment: 1
// Size: 24
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0
};

// Aligment: 3
// Size: 472
class CRenderMesh
{
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10
	CUtlVector< CBaseConstraint* > m_constraints; // 0xa0
	CRenderSkeleton m_skeleton; // 0xb8
};

// Aligment: 6
// Size: 96
class CConstraintTarget
{
public:
	Quaternion m_qOffset; // 0x20
	Vector m_vOffset; // 0x30
	uint32_t m_nBoneHash; // 0x3c
	CUtlString m_sName; // 0x40
	float m_flWeight; // 0x48
	bool m_bIsAttachment; // 0x59
};

// Aligment: 5
// Size: 96
class CConstraintSlave
{
public:
	Quaternion m_qBaseOrientation; // 0x0
	Vector m_vBasePosition; // 0x10
	uint32_t m_nBoneHash; // 0x1c
	float m_flWeight; // 0x20
	CUtlString m_sName; // 0x28
};

// Aligment: 0
// Size: 40
class CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 112
class CBaseConstraint : public CBoneConstraintBase
{
public:
	CUtlString m_name; // 0x28
	Vector m_vUpVector; // 0x30
	CUtlVector< CConstraintSlave > m_slaves; // 0x40
	CUtlVector< CConstraintTarget > m_targets; // 0x58
};

// Aligment: 0
// Size: 112
class CPointConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 112
class COrientConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 144
class CAimConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	Quaternion m_qAimOffset; // 0x70
	uint32_t m_nUpType; // 0x80
};

// Aligment: 3
// Size: 160
class CTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	bool m_bInverse; // 0x70
	Quaternion m_qParentBindRotation; // 0x80
	Quaternion m_qChildBindRotation; // 0x90
};

// Aligment: 2
// Size: 160
class CTiltTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	int32_t m_nTargetAxis; // 0x70
	int32_t m_nSlaveAxis; // 0x74
};

// Aligment: 4
// Size: 144
class CMorphConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlString m_sTargetMorph; // 0x70
	int32_t m_nSlaveChannel; // 0x78
	float m_flMin; // 0x7c
	float m_flMax; // 0x80
};

// Aligment: 0
// Size: 112
class CParentConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 5
// Size: 168
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28
	CUtlString m_sAttachmentName; // 0x30
	CUtlVector< CUtlString > m_outputMorph; // 0x38
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50
	bool m_bClamp; // 0x68
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceMorph::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< float32 > m_outputWeightList; // 0x10
};

// Aligment: 1
// Size: 152
class CBoneConstraintPoseSpaceBone : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceBone::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< CTransform > m_outputTransformList; // 0x10
};

// Aligment: 2
// Size: 8
class CFlexOp
{
public:
	FlexOpCode_t m_OpCode; // 0x0
	int32_t m_Data; // 0x4
};

// Aligment: 2
// Size: 32
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0
	CUtlVector< CFlexOp > m_FlexOps; // 0x8
};

// Aligment: 1
// Size: 8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0
};

// Aligment: 4
// Size: 24
class CFlexController
{
public:
	CUtlString m_szName; // 0x0
	CUtlString m_szType; // 0x8
	float min; // 0x10
	float max; // 0x14
};

// Aligment: 4
// Size: 56
class CMorphBundleData
{
public:
	float m_flULeftSrc; // 0x0
	float m_flVTopSrc; // 0x4
	CUtlVector< float32 > m_offsets; // 0x8
	CUtlVector< float32 > m_ranges; // 0x20
};

// Aligment: 5
// Size: 40
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0
	int16_t m_nYTopDst; // 0x2
	float m_flUWidthSrc; // 0x4
	float m_flVHeightSrc; // 0x8
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10
};

// Aligment: 2
// Size: 32
class CMorphData
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8
};

// Aligment: 8
// Size: 152
class CMorphSetData
{
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

// Aligment: 5
// Size: 40
class CAnimFoot
{
public:
	CUtlString m_name; // 0x0
	Vector m_vBallOffset; // 0x8
	Vector m_vHeelOffset; // 0x14
	int32_t m_ankleBoneIndex; // 0x20
	int32_t m_toeBoneIndex; // 0x24
};

// Aligment: 8
// Size: 208
class CAnimSkeleton
{
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

// Aligment: 9
// Size: 64
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

// Aligment: 1
// Size: 4
class CCycleBase
{
public:
	float m_flCycle; // 0x0
};

// Aligment: 0
// Size: 4
class CAnimCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 4
class CFootCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 9
// Size: 60
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

// Aligment: 3
// Size: 20
class CFootTrajectory
{
public:
	Vector m_vOffset; // 0x0
	float m_flRotationOffset; // 0xc
	float m_flProgression; // 0x10
public:
	static CFootTrajectory &Get_Identity() { return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("animationsystem.dll")->FindDeclaredClass("CFootTrajectory")->m_static_fiels[0]->m_instance); }
};

// Aligment: 1
// Size: 24
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0
};

// Aligment: 2
// Size: 88
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0
	CFootTrajectories m_trajectories; // 0x40
};

// Aligment: 3
// Size: 40
class CFootMotion
{
public:
	CUtlVector< CFootStride > m_strides; // 0x0
	CUtlString m_name; // 0x18
	bool m_bAdditive; // 0x20
};

// Aligment: 2
// Size: 8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
};

// Aligment: 7
// Size: 56
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

// Aligment: 10
// Size: 112
class CFingerChain
{
public:
	CUtlVector< CFingerSource > m_targets; // 0x0
	CUtlVector< CFingerBone > m_bones; // 0x18
	CUtlString m_name; // 0x30
	CUtlString m_tipParentBoneName; // 0x38
	Vector m_vTipOffset; // 0x40
	CUtlString m_metacarpalBoneName; // 0x50
	Vector m_vSplayHingeAxis; // 0x58
	float m_flSplayMinAngle; // 0x64
	float m_flSplayMaxAngle; // 0x68
	float m_flFingerScaleRatio; // 0x6c
};

// Aligment: 4
// Size: 48
class CWristBone
{
public:
	CUtlString m_name; // 0x0
	Vector m_vForwardLS; // 0x8
	Vector m_vUpLS; // 0x14
	Vector m_vOffset; // 0x20
};

// Aligment: 6
// Size: 80
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

// Aligment: 4
// Size: 336
class CAnimationGraph : public CAnimationSubGraph
{
public:
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xe8
	CAnimClipDataManager m_clipDataManager; // 0xf8
	CUtlString m_modelName; // 0x140
	CUtlString m_previewModelName; // 0x148
};

// Aligment: 1
// Size: 56
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x30
};

// Aligment: 1
// Size: 72
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30
};

// Aligment: 1
// Size: 72
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x30
};

// Aligment: 1
// Size: 56
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x30
};

// Aligment: 6
// Size: 160
class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30
	CUtlVector< int32 > m_boneIndices; // 0x48
	CUtlVector< CUtlString > m_boneNames; // 0x60
	CUtlVector< WeightList > m_weightLists; // 0x78
	float m_flSpringFrequencyMin; // 0x90
	float m_flSpringFrequencyMax; // 0x94
};

// Aligment: 0
// Size: 112
class CAnimComponentStateTransition : public CAnimStateTransition
{
public:
// <no members described>
};

// Aligment: 0
// Size: 112
class CAnimComponentState : public CAnimState
{
public:
// <no members described>
};

// Aligment: 1
// Size: 104
class CStateMachineComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x60
};

// Aligment: 1
// Size: 136
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x30
};

// Aligment: 9
// Size: 72
class CVRInputComponentUpdater : public CAnimComponentUpdater
{
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

// Aligment: 2
// Size: 32
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18
	bool m_bIsZeroDuration; // 0x1c
};

// Aligment: 2
// Size: 48
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18
	CAnimVariant m_value; // 0x1a
};

// Aligment: 2
// Size: 32
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18
	bool m_bSetEnabled; // 0x1c
};

// Aligment: 3
// Size: 32
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18
	AnimParamType_t m_eParamType; // 0x1a
	AnimScriptHandle m_hScript; // 0x1c
};

// Aligment: 5
// Size: 184
class CAnimNodeStateTransition : public CAnimStateTransition
{
public:
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x78
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x90
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x94
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	CFloatAnimValue m_flFixedCycleValue; // 0x98
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xb0
};

// Aligment: 2
// Size: 128
class CAnimNodeState : public CAnimState
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x70
	// MPropertyFriendlyName "Exclusive Root Motion"
	// MPropertySortPriority "0"
	bool m_bIsRootMotionExclusive; // 0x78
};

// Aligment: 2
// Size: 104
class CStateMachineAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x60
	// MPropertyFriendlyName "Lock State when Waning"
	bool m_bLockStateWhenWaning; // 0x61
};

// Aligment: 2
// Size: 112
class CRagdollUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	int32_t m_nWeightListIndex; // 0x68
	RagdollPoseControl m_poseControlMethod; // 0x6c
};

// Aligment: 1
// Size: 184
class CGroupAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeManager m_nodeMgr; // 0x70
};

// Aligment: 0
// Size: 96
class CGroupInputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 88
class CGroupOutputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 96
class CBindPoseUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 96
class CZeroPoseUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 96
class CAndCondition : public CConditionBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 104
class CRootUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 6
// Size: 168
class CSequenceUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CParamSpanUpdater m_paramSpans; // 0x60
	CUtlVector< TagSpan_t > m_tags; // 0x78
	HSequence m_hSequence; // 0x94
	float m_playbackSpeed; // 0x98
	float m_duration; // 0x9c
	bool m_bLoop; // 0xa0
};

// Aligment: 11
// Size: 208
class CBlendUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60
	CUtlVector< uint8 > m_sortedOrder; // 0x78
	CUtlVector< float32 > m_targetValues; // 0x90
	AnimValueSource m_blendValueSource; // 0xac
	CAnimParamHandle m_paramIndex; // 0xb0
	CAnimInputDamping m_damping; // 0xb8
	BlendKeyType m_blendKeyType; // 0xc8
	bool m_bLockBlendOnReset; // 0xcc
	bool m_bSyncCycles; // 0xcd
	bool m_bLoop; // 0xce
	bool m_bLockWhenWaning; // 0xcf
};

// Aligment: 5
// Size: 248
class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x68
	CUtlVector< CStateNodeStateData > m_stateData; // 0xc0
	CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xd8
	bool m_bBlockWaningTags; // 0xf4
	bool m_bLockStateWhenWaning; // 0xf5
};

// Aligment: 10
// Size: 184
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

// Aligment: 2
// Size: 112
class CCycleControlUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AnimValueSource m_valueSource; // 0x68
	CAnimParamHandle m_paramIndex; // 0x6c
};

// Aligment: 5
// Size: 144
class CCycleControlClipUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x60
	HSequence m_hSequence; // 0x7c
	float m_duration; // 0x80
	AnimValueSource m_valueSource; // 0x84
	CAnimParamHandle m_paramIndex; // 0x88
};

// Aligment: 4
// Size: 152
class CAddUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyToFootMotion; // 0x90
	bool m_bApplyChannelsSeparately; // 0x91
	bool m_bUseModelSpace; // 0x92
};

// Aligment: 4
// Size: 152
class CSubtractUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyToFootMotion; // 0x90
	bool m_bApplyChannelsSeparately; // 0x91
	bool m_bUseModelSpace; // 0x92
};

// Aligment: 12
// Size: 160
class CMoverUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimInputDamping m_damping; // 0x70
	AnimValueSource m_facingTarget; // 0x80
	CAnimParamHandle m_hMoveVecParam; // 0x84
	CAnimParamHandle m_hMoveHeadingParam; // 0x86
	CAnimParamHandle m_hTurnToFaceParam; // 0x88
	float m_flTurnToFaceOffset; // 0x8c
	float m_flTurnToFaceLimit; // 0x90
	bool m_bAdditive; // 0x94
	bool m_bApplyMovement; // 0x95
	bool m_bOrientMovement; // 0x96
	bool m_bApplyRotation; // 0x97
	bool m_bLimitOnly; // 0x98
};

// Aligment: 1
// Size: 112
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flSlowDownStrength; // 0x68
};

// Aligment: 6
// Size: 136
class CTurnHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AnimValueSource m_facingTarget; // 0x6c
	float m_turnStartTimeOffset; // 0x70
	float m_turnDuration; // 0x74
	bool m_bMatchChildDuration; // 0x78
	float m_manualTurnOffset; // 0x7c
	bool m_bUseManualTurnOffset; // 0x80
};

// Aligment: 6
// Size: 352
class CAimMatrixUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x148
	CAnimParamHandle m_paramIndex; // 0x14c
	HSequence m_hSequence; // 0x150
	bool m_bResetChild; // 0x154
	bool m_bLockWhenWaning; // 0x155
};

// Aligment: 1
// Size: 112
class CSpeedScaleUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_paramIndex; // 0x68
};

// Aligment: 8
// Size: 168
class CDirectionalBlendUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	HSequence[8] m_hSequences; // 0x5c
	CAnimInputDamping m_damping; // 0x80
	AnimValueSource m_blendValueSource; // 0x90
	CAnimParamHandle m_paramIndex; // 0x94
	float m_playbackSpeed; // 0x98
	float m_duration; // 0x9c
	bool m_bLoop; // 0xa0
	bool m_bLockBlendOnReset; // 0xa1
};

// Aligment: 5
// Size: 120
class CWayPointHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flStartCycle; // 0x6c
	float m_flEndCycle; // 0x70
	bool m_bOnlyGoals; // 0x74
	bool m_bPreventOvershoot; // 0x75
	bool m_bPreventUndershoot; // 0x76
};

// Aligment: 7
// Size: 168
class CBoneMaskUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	int32_t m_nWeightListIndex; // 0x8c
	float m_flRootMotionBlend; // 0x90
	BoneMaskBlendSpace m_blendSpace; // 0x94
	BinaryNodeChildOption m_footMotionTiming; // 0x98
	bool m_bUseBlendScale; // 0x9c
	AnimValueSource m_blendValueSource; // 0xa0
	CAnimParamHandle m_hBlendParameter; // 0xa4
};

// Aligment: 0
// Size: 112
class CChoreoUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 136
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	bool m_bFinishEarly; // 0x6c
	bool m_bResetOnFinish; // 0x6d
	CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70
};

// Aligment: 10
// Size: 232
class CLeanMatrixUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	int32[3][3] m_frameCorners; // 0x5c
	CPoseHandle[9] m_poses; // 0x80
	CAnimInputDamping m_damping; // 0xa8
	AnimVectorSource m_blendSource; // 0xb8
	CAnimParamHandle m_paramIndex; // 0xbc
	Vector m_verticalAxis; // 0xc0
	Vector m_horizontalAxis; // 0xcc
	HSequence m_hSequence; // 0xd8
	float m_flMaxValue; // 0xdc
	int32_t m_nSequenceMaxFrame; // 0xe0
};

// Aligment: 1
// Size: 480
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70
};

// Aligment: 2
// Size: 160
class CSolveIKChainUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80
};

// Aligment: 6
// Size: 336
class CLookAtUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x138
	CAnimParamHandle m_paramIndex; // 0x13c
	CAnimParamHandle m_weightParamIndex; // 0x13e
	bool m_bResetChild; // 0x140
	bool m_bLockWhenWaning; // 0x141
};

// Aligment: 2
// Size: 112
class CPathHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flStoppingRadius; // 0x68
	float m_flStoppingSpeedScale; // 0x6c
};

// Aligment: 1
// Size: 272
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FollowAttachmentSettings_t m_opFixedData; // 0x70
};

// Aligment: 8
// Size: 208
class CJumpHelperUpdateNode : public CSequenceUpdateNode, CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_hTargetParam; // 0xa8
	Vector m_flOriginalJumpMovement; // 0xac
	float m_flOriginalJumpDuration; // 0xb8
	float m_flJumpStartCycle; // 0xbc
	float m_flJumpEndCycle; // 0xc0
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc4
	bool[3] m_bTranslationAxis; // 0xc8
	bool m_bScaleSpeed; // 0xcb
};

