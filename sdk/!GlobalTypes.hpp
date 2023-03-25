#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: !GlobalTypes
// Classes count: 1319
// Enums count: 317
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Alignment: 1
// Size: 0x4a
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0x0,
	FIELD_FLOAT32 = 0x1,
	FIELD_STRING = 0x2,
	FIELD_VECTOR = 0x3,
	FIELD_QUATERNION = 0x4,
	FIELD_INT32 = 0x5,
	FIELD_BOOLEAN = 0x6,
	FIELD_INT16 = 0x7,
	FIELD_CHARACTER = 0x8,
	FIELD_COLOR32 = 0x9,
	FIELD_EMBEDDED = 0xa,
	FIELD_CUSTOM = 0xb,
	FIELD_CLASSPTR = 0xc,
	FIELD_EHANDLE = 0xd,
	FIELD_POSITION_VECTOR = 0xe,
	FIELD_TIME = 0xf,
	FIELD_TICK = 0x10,
	FIELD_SOUNDNAME = 0x11,
	FIELD_INPUT = 0x12,
	FIELD_FUNCTION = 0x13,
	FIELD_VMATRIX = 0x14,
	FIELD_VMATRIX_WORLDSPACE = 0x15,
	FIELD_MATRIX3X4_WORLDSPACE = 0x16,
	FIELD_INTERVAL = 0x17,
	FIELD_UNUSED = 0x18,
	FIELD_VECTOR2D = 0x19,
	FIELD_INT64 = 0x1a,
	FIELD_VECTOR4D = 0x1b,
	FIELD_RESOURCE = 0x1c,
	FIELD_TYPEUNKNOWN = 0x1d,
	FIELD_CSTRING = 0x1e,
	FIELD_HSCRIPT = 0x1f,
	FIELD_VARIANT = 0x20,
	FIELD_UINT64 = 0x21,
	FIELD_FLOAT64 = 0x22,
	FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
	FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
	FIELD_UINT32 = 0x25,
	FIELD_UTLSTRINGTOKEN = 0x26,
	FIELD_QANGLE = 0x27,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
	FIELD_HMATERIAL = 0x29,
	FIELD_HMODEL = 0x2a,
	FIELD_NETWORK_QUANTIZED_VECTOR = 0x2b,
	FIELD_NETWORK_QUANTIZED_FLOAT = 0x2c,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2d,
	FIELD_QANGLE_WORLDSPACE = 0x2e,
	FIELD_QUATERNION_WORLDSPACE = 0x2f,
	FIELD_HSCRIPT_LIGHTBINDING = 0x30,
	FIELD_V8_VALUE = 0x31,
	FIELD_V8_OBJECT = 0x32,
	FIELD_V8_ARRAY = 0x33,
	FIELD_V8_CALLBACK_INFO = 0x34,
	FIELD_UTLSTRING = 0x35,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
	FIELD_HRENDERTEXTURE = 0x37,
	FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
	FIELD_UINT8 = 0x39,
	FIELD_UINT16 = 0x3a,
	FIELD_CTRANSFORM = 0x3b,
	FIELD_CTRANSFORM_WORLDSPACE = 0x3c,
	FIELD_HPOSTPROCESSING = 0x3d,
	FIELD_MATRIX3X4 = 0x3e,
	FIELD_SHIM = 0x3f,
	FIELD_CMOTIONTRANSFORM = 0x40,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
	FIELD_ATTACHMENT_HANDLE = 0x42,
	FIELD_AMMO_INDEX = 0x43,
	FIELD_CONDITION_ID = 0x44,
	FIELD_AI_SCHEDULE_BITS = 0x45,
	FIELD_MODIFIER_HANDLE = 0x46,
	FIELD_ROTATION_VECTOR = 0x47,
	FIELD_ROTATION_VECTOR_WORLDSPACE = 0x48,
	FIELD_TYPECOUNT = 0x49,
};

// Alignment: 4
// Size: 0x3
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
	INPUT_LAYOUT_VARIATION_STREAM1_DRAWINDIRECT_ID = 0x3,
	INPUT_LAYOUT_VARIATION_MAX = 0x4,
};

// Alignment: 4
// Size: 0x8
enum class RenderMultisampleType_t : uint32_t
{
	RENDER_MULTISAMPLE_INVALID = 0xffffffffffffffff,
	RENDER_MULTISAMPLE_NONE = 0x0,
	RENDER_MULTISAMPLE_2X = 0x1,
	RENDER_MULTISAMPLE_4X = 0x2,
	RENDER_MULTISAMPLE_6X = 0x3,
	RENDER_MULTISAMPLE_8X = 0x4,
	RENDER_MULTISAMPLE_16X = 0x5,
	RENDER_MULTISAMPLE_TYPE_COUNT = 0x6,
};

// Alignment: 4
// Size: 0x9
enum class RenderBufferFlags_t : uint32_t
{
	RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
	RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
	RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
	RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
	RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
	RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
	RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
	RENDER_BUFFER_UAV_COUNTER = 0x80,
	RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
};

// Alignment: 4
// Size: 0x2d
enum class RenderPrimitiveType_t : uint32_t
{
	RENDER_PRIM_POINTS = 0x0,
	RENDER_PRIM_LINES = 0x1,
	RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
	RENDER_PRIM_LINE_STRIP = 0x3,
	RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
	RENDER_PRIM_TRIANGLES = 0x5,
	RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
	RENDER_PRIM_TRIANGLE_STRIP = 0x7,
	RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
	RENDER_PRIM_INSTANCED_QUADS = 0x9,
	RENDER_PRIM_HETEROGENOUS = 0xa,
	RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 0xb,
	RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 0xc,
	RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 0xd,
	RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 0xe,
	RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 0xf,
	RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 0x10,
	RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 0x11,
	RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 0x12,
	RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 0x13,
	RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 0x14,
	RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 0x15,
	RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 0x16,
	RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 0x17,
	RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 0x18,
	RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 0x19,
	RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 0x1a,
	RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 0x1b,
	RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 0x1c,
	RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 0x1d,
	RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 0x1e,
	RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 0x1f,
	RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 0x20,
	RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 0x21,
	RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 0x22,
	RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 0x23,
	RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 0x24,
	RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 0x25,
	RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 0x26,
	RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 0x27,
	RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 0x28,
	RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 0x29,
	RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 0x2a,
	RENDER_PRIM_COMPUTE_SHADER = 0x2b,
	RENDER_PRIM_TYPE_COUNT = 0x2c,
};

// Alignment: 4
// Size: 0x5
enum class SpawnDebugRestrictionOverrideState_t : uint32_t
{
	SPAWN_DEBUG_RESTRICT_NONE = 0x0,
	SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
	SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
};

// Alignment: 4
// Size: 0x3
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
};

// Alignment: 4
// Size: 0x9
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

// Alignment: 4
// Size: 0x3
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class MoodType_t : uint32_t
{
	eMoodType_Head = 0x0,
	eMoodType_Body = 0x1,
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
enum class BinaryNodeChildOption : uint32_t
{
	Child1 = 0x0,
	Child2 = 0x1,
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
// Size: 0x4
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
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
// Size: 0x4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
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
// Size: 0x3
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_BoneMask = 0x2,
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
enum class VPhysXJoint_t__Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
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
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
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
// Size: 0x4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
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
// Size: 0x3
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
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
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
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
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
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
// Size: 0x4
enum class StateActionBehavior : uint32_t
{
	STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
	STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
	STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
	STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
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
enum class MotionSamplingMethod : uint32_t
{
	Uniform = 0x0,
	AtFootCycleStart = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ChoiceBlendMethod : uint32_t
{
	SingleBlendTime = 0x0,
	PerChoiceBlendTimes = 0x1,
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
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
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
// Size: 0x2
enum class FinishedConditionOption : uint32_t
{
	FinishedConditionOption_OnFinished = 0x0,
	FinishedConditionOption_OnAlmostFinished = 0x1,
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
// Size: 0x4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
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
// Size: 0x4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
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
// Size: 0x2
enum class DampedValueType : uint32_t
{
	FloatParameter = 0x0,
	VectorParameter = 0x1,
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
// Size: 0x3
enum class IKTargetSource : uint32_t
{
	IKTARGETSOURCE_Bone = 0x0,
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
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
// Size: 0x2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
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
// Size: 0x2
enum class StepPhase : uint32_t
{
	StepPhase_OnGround = 0x0,
	StepPhase_InAir = 0x1,
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
enum class MatterialAttributeTagType_t : uint32_t
{
	MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
	MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1,
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
// Size: 0x3
enum class IKTargetCoordinateSystem : uint32_t
{
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
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
enum class PathStatusOptions : uint32_t
{
	PathStatus_HasPath = 0x0,
	PathStatus_WaypointIsGoal = 0x1,
	PathStatus_GoalHasChanged = 0x2,
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
// Size: 0x4
enum class BoneTransformSpace_t : uint32_t
{
	BoneTransformSpace_Invalid = 0xffffffffffffffff,
	BoneTransformSpace_Parent = 0x0,
	BoneTransformSpace_Model = 0x1,
	BoneTransformSpace_World = 0x2,
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
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class SosGroupType_t : uint32_t
{
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
	SOS_ACTION_TIME_LIMIT = 0x2,
};

// Alignment: 1
// Size: 0x5
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_12dB = 0x0,
	FILTER_SLOPE_24dB = 0x1,
	FILTER_SLOPE_36dB = 0x2,
	FILTER_SLOPE_48dB = 0x3,
	FILTER_SLOPE_MAX = 0x3,
};

// Alignment: 4
// Size: 0x6
enum class VMixChannelOperation_t : uint32_t
{
	VMIX_CHAN_STEREO = 0x0,
	VMIX_CHAN_LEFT = 0x1,
	VMIX_CHAN_RIGHT = 0x2,
	VMIX_CHAN_SWAP = 0x3,
	VMIX_CHAN_MONO = 0x4,
	VMIX_CHAN_MID_SIDE = 0x5,
};

// Alignment: 4
// Size: 0x1e
enum class soundlevel_t : uint32_t
{
	SNDLVL_NONE = 0x0,
	SNDLVL_20dB = 0x14,
	SNDLVL_25dB = 0x19,
	SNDLVL_30dB = 0x1e,
	SNDLVL_35dB = 0x23,
	SNDLVL_40dB = 0x28,
	SNDLVL_45dB = 0x2d,
	SNDLVL_50dB = 0x32,
	SNDLVL_55dB = 0x37,
	SNDLVL_IDLE = 0x3c,
	SNDLVL_60dB = 0x3c,
	SNDLVL_65dB = 0x41,
	SNDLVL_STATIC = 0x42,
	SNDLVL_70dB = 0x46,
	SNDLVL_NORM = 0x4b,
	SNDLVL_75dB = 0x4b,
	SNDLVL_80dB = 0x50,
	SNDLVL_TALKING = 0x50,
	SNDLVL_85dB = 0x55,
	SNDLVL_90dB = 0x5a,
	SNDLVL_95dB = 0x5f,
	SNDLVL_100dB = 0x64,
	SNDLVL_105dB = 0x69,
	SNDLVL_110dB = 0x6e,
	SNDLVL_120dB = 0x78,
	SNDLVL_130dB = 0x82,
	SNDLVL_GUNFIRE = 0x8c,
	SNDLVL_140dB = 0x8c,
	SNDLVL_150dB = 0x96,
	SNDLVL_180dB = 0xb4,
};

// Alignment: 2
// Size: 0x13
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
	VPROCESSOR_RT_PITCH = 0x2,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
	VPROCESSOR_DYNAMICS = 0x4,
	VPROCESSOR_PRESETDSP = 0x5,
	VPROCESSOR_DELAY = 0x6,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0x7,
	VPROCESSOR_FILTER = 0x8,
	VPROCESSOR_STEAMAUDIO_PATHING = 0x9,
	VPROCESSOR_EQ8 = 0xa,
	VPROCESSOR_ENVELOPE = 0xb,
	VPROCESSOR_VOCODER = 0xc,
	VPROCESSOR_CONVOLUTION = 0xd,
	VPROCESSOR_DYNAMICS_3BAND = 0xe,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 0xf,
	VPROCESSOR_SHAPER = 0x10,
	VPROCESSOR_UTILITY = 0x11,
	VPROCESSOR_AUTOFILTER = 0x12,
};

// Alignment: 4
// Size: 0x2
enum class SosActionSortType_t : uint32_t
{
	SOS_SORTTYPE_HIGHEST = 0x0,
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Alignment: 4
// Size: 0x6
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class SosActionStopType_t : uint32_t
{
	SOS_STOPTYPE_NONE = 0x0,
	SOS_STOPTYPE_TIME = 0x1,
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Alignment: 2
// Size: 0x8
enum class VMixFilterType_t : uint16_t
{
	FILTER_UNKNOWN = 0xffffffffffffffff,
	FILTER_LOWPASS = 0x0,
	FILTER_HIGHPASS = 0x1,
	FILTER_BANDPASS = 0x2,
	FILTER_NOTCH = 0x3,
	FILTER_PEAKING_EQ = 0x4,
	FILTER_LOW_SHELF = 0x5,
	FILTER_HIGH_SHELF = 0x6,
};

// Alignment: 4
// Size: 0x5
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

// Alignment: 1
// Size: 0x4
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0x0,
	kDisableShadows_All = 0x1,
	kDisableShadows_Baked = 0x2,
	kDisableShadows_Realtime = 0x3,
};

// Alignment: 4
// Size: 0x10
enum class ObjectTypeFlags_t : uint32_t
{
	OBJECT_TYPE_NONE = 0x0,
	OBJECT_TYPE_IMAGE_LOD = 0x1,
	OBJECT_TYPE_GEOMETRY_LOD = 0x2,
	OBJECT_TYPE_DECAL = 0x4,
	OBJECT_TYPE_MODEL = 0x8,
	OBJECT_TYPE_BLOCK_LIGHT = 0x10,
	OBJECT_TYPE_NO_SHADOWS = 0x20,
	OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
	OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
	OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
	OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
	OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
	OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
	OBJECT_TYPE_NO_ZPREPASS = 0x1000,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
	OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
};

// Alignment: 4
// Size: 0x2
enum class voxel_vis_compression_t : uint32_t
{
	VOXVIS_COMPRESS_RAW = 0x0,
	VOXVIS_COMPRESS_RLE = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class TextureRepetitionMode_t : uint32_t
{
	TEXTURE_REPETITION_PARTICLE = 0x0,
	TEXTURE_REPETITION_PATH = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ParticleOrientationSetMode_t : uint32_t
{
	PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
	PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	PARTICLE_LIGHT_TYPE_FX = 0x2,
	PARTICLE_LIGHT_TYPE_CAPSULE = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class ParticleLightFogLightingMode_t : uint32_t
{
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class SpriteCardShaderType_t : uint32_t
{
	SPRITECARD_SHADER_BASE = 0x0,
	SPRITECARD_SHADER_CUSTOM = 0x1,
};

// Alignment: 4
// Size: 0x6
enum class ParticleImpulseType_t : uint32_t
{
	IMPULSE_TYPE_NONE = 0x0,
	IMPULSE_TYPE_GENERIC = 0x1,
	IMPULSE_TYPE_ROPE = 0x2,
	IMPULSE_TYPE_EXPLOSION = 0x4,
	IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
	IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
};

// Alignment: 4
// Size: 0x3
enum class ClosestPointTestType_t : uint32_t
{
	PARTICLE_CLOSEST_TYPE_BOX = 0x0,
	PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
	PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ParticleEndcapMode_t : uint32_t
{
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ParticleSortingChoiceList_t : uint32_t
{
	PARTICLE_SORTING_NEAREST = 0x0,
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class ParticleCollisionMode_t : uint32_t
{
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	COLLISION_MODE_DISABLED = 0xffffffffffffffff,
};

// Alignment: 4
// Size: 0x6
enum class ParticleOrientationChoiceList_t : uint32_t
{
	PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
	PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
	PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
	PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
	PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
	PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
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

// Alignment: 4
// Size: 0xf
enum class SpriteCardTextureChannel_t : uint32_t
{
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
	SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
	SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
	SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
	SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xa,
	SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xb,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xc,
	SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xd,
	SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xe,
};

// Alignment: 4
// Size: 0x4
enum class ParticleAlphaReferenceType_t : uint32_t
{
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Alignment: 4
// Size: 0xa
enum class SpriteCardTextureType_t : uint32_t
{
	SPRITECARD_TEXTURE_DIFFUSE = 0x0,
	SPRITECARD_TEXTURE_ZOOM = 0x1,
	SPRITECARD_TEXTURE_UVDISTORTION = 0x2,
	SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x3,
	SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x4,
	SPRITECARD_TEXTURE_NORMALMAP = 0x5,
	SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
};

// Alignment: 4
// Size: 0x4
enum class ParticleDetailLevel_t : uint32_t
{
	PARTICLEDETAIL_LOW = 0x0,
	PARTICLEDETAIL_MEDIUM = 0x1,
	PARTICLEDETAIL_HIGH = 0x2,
	PARTICLEDETAIL_ULTRA = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class ParticleSequenceCropOverride_t : uint32_t
{
	PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffffffffffff,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class ParticleFalloffFunction_t : uint32_t
{
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	PARTICLE_FALLOFF_LINEAR = 0x1,
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
};

// Alignment: 4
// Size: 0xc
enum class ParticleVecType_t : uint32_t
{
	PVEC_TYPE_INVALID = 0xffffffffffffffff,
	PVEC_TYPE_LITERAL = 0x0,
	PVEC_TYPE_LITERAL_COLOR = 0x1,
	PVEC_TYPE_PARTICLE_VECTOR = 0x2,
	PVEC_TYPE_CP_VALUE = 0x3,
	PVEC_TYPE_CP_RELATIVE_POSITION = 0x4,
	PVEC_TYPE_CP_RELATIVE_DIR = 0x5,
	PVEC_TYPE_FLOAT_COMPONENTS = 0x6,
	PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0x7,
	PVEC_TYPE_FLOAT_INTERP_OPEN = 0x8,
	PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0x9,
	PVEC_TYPE_COUNT = 0xa,
};

// Alignment: 4
// Size: 0x4
enum class PFNoiseModifier_t : uint32_t
{
	PF_NOISE_MODIFIER_NONE = 0x0,
	PF_NOISE_MODIFIER_LINES = 0x1,
	PF_NOISE_MODIFIER_CLUMPS = 0x2,
	PF_NOISE_MODIFIER_RINGS = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class MaterialProxyType_t : uint32_t
{
	MATERIAL_PROXY_STATUS_EFFECT = 0x0,
	MATERIAL_PROXY_TINT = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ParticleLightnintBranchBehavior_t : uint32_t
{
	PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
	PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class ParticleOutputBlendMode_t : uint32_t
{
	PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
	PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
	PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
	PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
	PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
	PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
	PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6,
};

// Alignment: 4
// Size: 0x4
enum class ParticleFloatInputMode_t : uint32_t
{
	PF_INPUT_MODE_INVALID = 0xffffffffffffffff,
	PF_INPUT_MODE_CLAMPED = 0x0,
	PF_INPUT_MODE_LOOPED = 0x1,
	PF_INPUT_MODE_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ParticleSelection_t : uint32_t
{
	PARTICLE_SELECTION_FIRST = 0x0,
	PARTICLE_SELECTION_LAST = 0x1,
	PARTICLE_SELECTION_NUMBER = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class ParticleTextureLayerBlendType_t : uint32_t
{
	SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
	SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
	SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
	SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
	SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
	SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
	SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class ParticleTraceSet_t : uint32_t
{
	PARTICLE_TRACE_SET_ALL = 0x0,
	PARTICLE_TRACE_SET_STATIC = 0x1,
	PARTICLE_TRACE_SET_DYNAMIC = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class ParticleFloatMapType_t : uint32_t
{
	PF_MAP_TYPE_INVALID = 0xffffffffffffffff,
	PF_MAP_TYPE_DIRECT = 0x0,
	PF_MAP_TYPE_MULT = 0x1,
	PF_MAP_TYPE_REMAP = 0x2,
	PF_MAP_TYPE_REMAP_BIASED = 0x3,
	PF_MAP_TYPE_CURVE = 0x4,
	PF_MAP_TYPE_COUNT = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class ParticleLightBehaviorChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
	PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
	PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class ParticleTopology_t : uint32_t
{
	PARTICLE_TOPOLOGY_POINTS = 0x0,
	PARTICLE_TOPOLOGY_LINES = 0x1,
	PARTICLE_TOPOLOGY_TRIS = 0x2,
	PARTICLE_TOPOLOGY_QUADS = 0x3,
	PARTICLE_TOPOLOGY_CUBES = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class AnimationType_t : uint32_t
{
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class HitboxLerpType_t : uint32_t
{
	HITBOX_LERP_LIFETIME = 0x0,
	HITBOX_LERP_CONSTANT = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class ParticleRotationLockType_t : uint32_t
{
	PARTICLE_ROTATION_LOCK_NONE = 0x0,
	PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
	PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
};

// Alignment: 4
// Size: 0x9
enum class VectorExpressionType_t : uint32_t
{
	VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	VECTOR_EXPRESSION_ADD = 0x0,
	VECTOR_EXPRESSION_SUBTRACT = 0x1,
	VECTOR_EXPRESSION_MUL = 0x2,
	VECTOR_EXPRESSION_DIVIDE = 0x3,
	VECTOR_EXPRESSION_INPUT_1 = 0x4,
	VECTOR_EXPRESSION_MIN = 0x5,
	VECTOR_EXPRESSION_MAX = 0x6,
	VECTOR_EXPRESSION_NORMALIZE_INPUT_1 = 0x7,
};

// Alignment: 4
// Size: 0x3
enum class ParticleFogType_t : uint32_t
{
	PARTICLE_FOG_GAME_DEFAULT = 0x0,
	PARTICLE_FOG_ENABLED = 0x1,
	PARTICLE_FOG_DISABLED = 0x2,
};

// Alignment: 4
// Size: 0xb
enum class ParticlePinDistance_t : uint32_t
{
	PARTICLE_PIN_DISTANCE_NONE = 0xffffffffffffffff,
	PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
	PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
	PARTICLE_PIN_DISTANCE_FIRST = 0x2,
	PARTICLE_PIN_DISTANCE_LAST = 0x3,
	PARTICLE_PIN_DISTANCE_CENTER = 0x5,
	PARTICLE_PIN_DISTANCE_CP = 0x6,
	PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
	PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
	PARTICLE_PIN_SPEED = 0x9,
	PARTICLE_PIN_COLLECTION_AGE = 0xa,
};

// Alignment: 4
// Size: 0x6
enum class ParticleControlPointAxis_t : uint32_t
{
	PARTICLE_CP_AXIS_X = 0x0,
	PARTICLE_CP_AXIS_Y = 0x1,
	PARTICLE_CP_AXIS_Z = 0x2,
	PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
	PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
	PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5,
};

// Alignment: 4
// Size: 0x2
enum class ParticleHitboxBiasType_t : uint32_t
{
	PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
	PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class ParticleDirectionNoiseType_t : uint32_t
{
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	PARTICLE_DIR_NOISE_CURL = 0x1,
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class PFNoiseType_t : uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class ParticleLightingQuality_t : uint32_t
{
	PARTICLE_LIGHTING_PER_VERTEX = 0x0,
	PARTICLE_LIGHTING_PER_PIXEL = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	LIGHT_STYLE_OLD = 0x0,
	LIGHT_STYLE_NEW = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
};

// Alignment: 4
// Size: 0xe
enum class SpriteCardPerParticleScale_t : uint32_t
{
	SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
	SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
	SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
	SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
	SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xa,
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xb,
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xc,
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xd,
};

// Alignment: 4
// Size: 0x8
enum class ScalarExpressionType_t : uint32_t
{
	SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	SCALAR_EXPRESSION_ADD = 0x0,
	SCALAR_EXPRESSION_SUBTRACT = 0x1,
	SCALAR_EXPRESSION_MUL = 0x2,
	SCALAR_EXPRESSION_DIVIDE = 0x3,
	SCALAR_EXPRESSION_INPUT_1 = 0x4,
	SCALAR_EXPRESSION_MIN = 0x5,
	SCALAR_EXPRESSION_MAX = 0x6,
};

// Alignment: 4
// Size: 0x4
enum class DetailCombo_t : uint32_t
{
	DETAIL_COMBO_OFF = 0x0,
	DETAIL_COMBO_ADD = 0x1,
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_COMBO_MOD2X = 0x3,
};

// Alignment: 4
// Size: 0xd
enum class ParticleColorBlendType_t : uint32_t
{
	PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
	PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
	PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
	PARTICLE_COLOR_BLEND_ADD = 0x3,
	PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
	PARTICLE_COLOR_BLEND_MOD2X = 0x5,
	PARTICLE_COLOR_BLEND_SCREEN = 0x6,
	PARTICLE_COLOR_BLEND_MAX = 0x7,
	PARTICLE_COLOR_BLEND_MIN = 0x8,
	PARTICLE_COLOR_BLEND_REPLACE = 0x9,
	PARTICLE_COLOR_BLEND_AVERAGE = 0xa,
	PARTICLE_COLOR_BLEND_NEGATE = 0xb,
	PARTICLE_COLOR_BLEND_LUMINANCE = 0xc,
};

// Alignment: 4
// Size: 0x5
enum class ParticleColorBlendMode_t : uint32_t
{
	PARTICLEBLEND_DEFAULT = 0x0,
	PARTICLEBLEND_OVERLAY = 0x1,
	PARTICLEBLEND_DARKEN = 0x2,
	PARTICLEBLEND_LIGHTEN = 0x3,
	PARTICLEBLEND_MULTIPLY = 0x4,
};

// Alignment: 4
// Size: 0x6
enum class PFNoiseTurbulence_t : uint32_t
{
	PF_NOISE_TURB_NONE = 0x0,
	PF_NOISE_TURB_HIGHLIGHT = 0x1,
	PF_NOISE_TURB_FEEDBACK = 0x2,
	PF_NOISE_TURB_LOOPY = 0x3,
	PF_NOISE_TURB_CONTRAST = 0x4,
	PF_NOISE_TURB_ALTERNATE = 0x5,
};

// Alignment: 4
// Size: 0x6
enum class ParticlePostProcessPriorityGroup_t : uint32_t
{
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
	PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
};

// Alignment: 4
// Size: 0x12
enum class ParticleFloatType_t : uint32_t
{
	PF_TYPE_INVALID = 0xffffffffffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_RANDOM_UNIFORM = 0x1,
	PF_TYPE_RANDOM_BIASED = 0x2,
	PF_TYPE_COLLECTION_AGE = 0x3,
	PF_TYPE_ENDCAP_AGE = 0x4,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x5,
	PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x6,
	PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x7,
	PF_TYPE_PARTICLE_NOISE = 0x8,
	PF_TYPE_PARTICLE_AGE = 0x9,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0xa,
	PF_TYPE_PARTICLE_FLOAT = 0xb,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0xc,
	PF_TYPE_PARTICLE_SPEED = 0xd,
	PF_TYPE_PARTICLE_NUMBER = 0xe,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0xf,
	PF_TYPE_COUNT = 0x10,
};

// Alignment: 4
// Size: 0x3
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class ParticleVRHandChoiceList_t : uint32_t
{
	PARTICLE_VRHAND_LEFT = 0x0,
	PARTICLE_VRHAND_RIGHT = 0x1,
	PARTICLE_VRHAND_CP = 0x2,
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

// Alignment: 4
// Size: 0x7
enum class PFuncVisualizationType_t : uint32_t
{
	PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
	PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
	PFUNC_VISUALIZATION_BOX = 0x2,
	PFUNC_VISUALIZATION_RING = 0x3,
	PFUNC_VISUALIZATION_PLANE = 0x4,
	PFUNC_VISUALIZATION_LINE = 0x5,
	PFUNC_VISUALIZATION_CYLINDER = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class ParticleTraceMissBehavior_t : uint32_t
{
	PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
	PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
	PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class ParticleFloatBiasType_t : uint32_t
{
	PF_BIAS_TYPE_INVALID = 0xffffffffffffffff,
	PF_BIAS_TYPE_STANDARD = 0x0,
	PF_BIAS_TYPE_GAIN = 0x1,
	PF_BIAS_TYPE_EXPONENTIAL = 0x2,
	PF_BIAS_TYPE_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class Detail2Combo_t : uint32_t
{
	DETAIL_2_COMBO_UNINITIALIZED = 0xffffffffffffffff,
	DETAIL_2_COMBO_OFF = 0x0,
	DETAIL_2_COMBO_ADD = 0x1,
	DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_2_COMBO_MOD2X = 0x3,
	DETAIL_2_COMBO_MUL = 0x4,
	DETAIL_2_COMBO_CROSSFADE = 0x5,
};

// Alignment: 4
// Size: 0x6
enum class ParticleSetMethod_t : uint32_t
{
	PARTICLE_SET_REPLACE_VALUE = 0x0,
	PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
	PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
	PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
	PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
	PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
};

// Alignment: 1
// Size: 0xe
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0x0,
	MOVETYPE_OBSOLETE = 0x1,
	MOVETYPE_WALK = 0x2,
	MOVETYPE_STEP = 0x3,
	MOVETYPE_FLY = 0x4,
	MOVETYPE_FLYGRAVITY = 0x5,
	MOVETYPE_VPHYSICS = 0x6,
	MOVETYPE_PUSH = 0x7,
	MOVETYPE_NOCLIP = 0x8,
	MOVETYPE_LADDER = 0x9,
	MOVETYPE_OBSERVER = 0xa,
	MOVETYPE_CUSTOM = 0xb,
	MOVETYPE_LAST = 0xb,
	MOVETYPE_MAX_BITS = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class EModifierScriptedEvent : uint32_t
{
	MODIFIER_SCRIPTED_EVENT_INVALID = 0x0,
	MODIFIER_SCRIPTED_EVENT_TEST = 0x1,
	MODIFIER_SCRIPTED_EVENT_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class NPCAbilityTaskHandling_t : uint32_t
{
	TASK_START = 0x0,
	TASK_RUN = 0x1,
	TASK_END = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class FuncDoorSpawnPos_t : uint32_t
{
	FUNC_DOOR_SPAWN_CLOSED = 0x0,
	FUNC_DOOR_SPAWN_OPEN = 0x1,
};

// Alignment: 4
// Size: 0x9
enum class ObserverMode_t : uint32_t
{
	OBS_MODE_NONE = 0x0,
	OBS_MODE_DEATHCAM = 0x1,
	OBS_MODE_FREEZECAM = 0x2,
	OBS_MODE_FIXED = 0x3,
	OBS_MODE_IN_EYE = 0x4,
	OBS_MODE_CHASE = 0x5,
	OBS_MODE_ROAMING = 0x6,
	OBS_MODE_DIRECTED = 0x7,
	NUM_OBSERVER_MODES = 0x8,
};

// Alignment: 4
// Size: 0x2
enum class ENPCAbilityMeleeAttackEvaluationTest : uint32_t
{
	NPC_ABILITY_MELEE_ATTACK_EVAL_TEST_HULL = 0x0,
	NPC_ABILITY_MELEE_ATTACK_EVAL_TEST_LOS = 0x1,
};

// Alignment: 4
// Size: 0x15
enum class sound_states : uint32_t
{
	SS_NONE = 0x0,
	SS_SHUTDOWN = 0x1,
	SS_SHUTDOWN_WATER = 0x2,
	SS_START_WATER = 0x3,
	SS_START_IDLE = 0x4,
	SS_IDLE = 0x5,
	SS_GEAR_0 = 0x6,
	SS_GEAR_1 = 0x7,
	SS_GEAR_2 = 0x8,
	SS_GEAR_3 = 0x9,
	SS_GEAR_4 = 0xa,
	SS_SLOWDOWN = 0xb,
	SS_SLOWDOWN_HIGHSPEED = 0xc,
	SS_GEAR_0_RESUME = 0xd,
	SS_GEAR_1_RESUME = 0xe,
	SS_GEAR_2_RESUME = 0xf,
	SS_GEAR_3_RESUME = 0x10,
	SS_GEAR_4_RESUME = 0x11,
	SS_TURBO = 0x12,
	SS_REVERSE = 0x13,
	SS_NUM_STATES = 0x14,
};

// Alignment: 4
// Size: 0x3
enum class CanPlaySequence_t : uint32_t
{
	CANNOT_PLAY = 0x0,
	CAN_PLAY_NOW = 0x1,
	CAN_PLAY_ENQUEUED = 0x2,
};

// Alignment: 4
// Size: 0xa
enum class Disposition_t : uint32_t
{
	D_ER = 0x0,
	D_HT = 0x1,
	D_FR = 0x2,
	D_LI = 0x3,
	D_NU = 0x4,
	D_ERROR = 0x0,
	D_HATE = 0x1,
	D_FEAR = 0x2,
	D_LIKE = 0x3,
	D_NEUTRAL = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
};

// Alignment: 4
// Size: 0x6
enum class SteamPal_Projectile_Tag_Marker_Type_t : uint32_t
{
	STEAMPAL_PROJECTILE_TAG_MARKER_WORLD = 0x0,
	STEAMPAL_PROJECTILE_TAG_MARKER_NPC = 0x1,
	STEAMPAL_PROJECTILE_TAG_MARKER_PHYSICS_PROP = 0x2,
	STEAMPAL_PROJECTILE_TAG_MARKER_RAGDOLL = 0x3,
	STEAMPAL_PROJECTILE_TAG_MARKER_BASE_ANIMATING = 0x4,
	STEAMPAL_PROJECTILE_TAG_MARKER_TYPE_COUNT = 0x5,
};

// Alignment: 2
// Size: 0xc
enum class TakeDamageFlags_t : uint16_t
{
	DFLAG_NONE = 0x0,
	DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
	DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
	DFLAG_SUPPRESS_EFFECTS = 0x4,
	DFLAG_PREVENT_DEATH = 0x8,
	DFLAG_FORCE_DEATH = 0x10,
	DFLAG_ALWAYS_GIB = 0x20,
	DFLAG_NEVER_GIB = 0x40,
	DFLAG_REMOVE_NO_RAGDOLL = 0x80,
	DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
	DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
	DMG_LASTDFLAG = 0x200,
};

// Alignment: 4
// Size: 0xe
enum class WeaponSound_t : uint32_t
{
	WEAPON_SOUND_EMPTY = 0x0,
	WEAPON_SOUND_SINGLE = 0x1,
	WEAPON_SOUND_DOUBLE = 0x2,
	WEAPON_SOUND_RELOAD = 0x3,
	WEAPON_SOUND_MELEE_MISS = 0x4,
	WEAPON_SOUND_MELEE_HIT = 0x5,
	WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
	WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
	WEAPON_SOUND_SPECIAL1 = 0x8,
	WEAPON_SOUND_SPECIAL2 = 0x9,
	WEAPON_SOUND_SPECIAL3 = 0xa,
	WEAPON_SOUND_NEARLYEMPTY = 0xb,
	WEAPON_SOUND_IMPACT1 = 0xc,
	WEAPON_SOUND_NUM_TYPES = 0xd,
};

// Alignment: 4
// Size: 0x1
enum class FlexWeight_t : uint32_t
{
	FLEX_END = 0x7fffffff,
};

// Alignment: 4
// Size: 0x2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ModifyDamageReturn_t : uint32_t
{
	CONTINUE_TO_APPLY_DAMAGE = 0x0,
	ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
};

// Alignment: 4
// Size: 0x1
enum class PoseParameter_t : uint32_t
{
	POSE_END = 0x7fffffff,
};

// Alignment: 4
// Size: 0x3
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class RagdollBlendDirection : uint32_t
{
	RAGDOLL_BLEND_IN = 0x0,
	RAGDOLL_BLEND_OUT = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class TRAIN_CODE : uint32_t
{
	TRAIN_SAFE = 0x0,
	TRAIN_BLOCKING = 0x1,
	TRAIN_FOLLOWING = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class AI_Posture_t : uint32_t
{
	AIP_INDIFFERENT = 0x0,
	AIP_STANDING = 0x1,
	AIP_CROUCHING = 0x2,
	AIP_PEEKING = 0x3,
};

// Alignment: 4
// Size: 0x6
enum class ShakeCommand_t : uint32_t
{
	SHAKE_START = 0x0,
	SHAKE_STOP = 0x1,
	SHAKE_AMPLITUDE = 0x2,
	SHAKE_FREQUENCY = 0x3,
	SHAKE_START_RUMBLEONLY = 0x4,
	SHAKE_START_NORUMBLE = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class PointWorldTextJustifyHorizontal_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class ModifierVariantType_t : uint32_t
{
	Variant_Null = 0x0,
	Variant_Float = 0x1,
	Variant_String = 0x2,
	Variant_Entity = 0x3,
	Variant_Vector = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class WeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class ValueRemapperOutputType_t : uint32_t
{
	OutputType_AnimationCycle = 0x0,
	OutputType_RotationX = 0x1,
	OutputType_RotationY = 0x2,
	OutputType_RotationZ = 0x3,
};

// Alignment: 4
// Size: 0x8
enum class ModifierAttribute_t : uint32_t
{
	MODIFIER_ATTRIBUTE_NONE = 0x0,
	MODIFIER_ATTRIBUTE_PERMANENT = 0x1,
	MODIFIER_ATTRIBUTE_MULTIPLE = 0x2,
	MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE = 0x4,
	MODIFIER_ATTRIBUTE_AURA_PRIORITY = 0x8,
	MODIFIER_ATTRIBUTE_CANNOT_BE_PURGED = 0x10,
	MODIFIER_ATTRIBUTE_INTRINSIC = 0x20,
	MODIFIER_ATTRIBUTE_TRANSFER_TO_RAGDOLL = 0x40,
};

// Alignment: 4
// Size: 0xd
enum class DeskButtonGroups_t : uint32_t
{
	DESK_BUTTON_GROUP_BUMPERS = 0x0,
	DESK_BUTTON_GROUP_DPAD = 0x1,
	DESK_BUTTON_GROUP_MICS = 0x2,
	DESK_BUTTON_GROUP_PADDLES = 0x3,
	DESK_BUTTON_GROUP_STICK_L = 0x4,
	DESK_BUTTON_GROUP_STICK_R = 0x5,
	DESK_BUTTON_GROUP_TRACKPADS = 0x6,
	DESK_BUTTON_GROUP_TRACKBALLS = 0x7,
	DESK_BUTTON_GROUP_TRIGGER_L = 0x8,
	DESK_BUTTON_GROUP_TRIGGER_R = 0x9,
	DESK_BUTTON_GROUP_XYAB = 0xa,
	DESK_BUTTON_GROUP_TOUCHSCREEN = 0xb,
	DESK_BUTTON_GROUP_COUNT = 0xc,
};

// Alignment: 4
// Size: 0x2
enum class AI_MoveEfficiency_t : uint32_t
{
	AIME_NORMAL = 0x0,
	AIME_EFFICIENT = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class IChoreoServices__ChoreoState_t : uint32_t
{
	STATE_PRE_SCRIPT = 0x0,
	STATE_WAIT_FOR_SCRIPT = 0x1,
	STATE_WALK_TO_MARK = 0x2,
	STATE_SYNCHRONIZE_SCRIPT = 0x3,
	STATE_PLAY_SCRIPT = 0x4,
	STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
	STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
};

// Alignment: 1
// Size: 0x6
enum class MoveCollide_t : uint8_t
{
	MOVECOLLIDE_DEFAULT = 0x0,
	MOVECOLLIDE_FLY_BOUNCE = 0x1,
	MOVECOLLIDE_FLY_CUSTOM = 0x2,
	MOVECOLLIDE_FLY_SLIDE = 0x3,
	MOVECOLLIDE_COUNT = 0x4,
	MOVECOLLIDE_MAX_BITS = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class TargetOriginType_t : uint32_t
{
	eTargetOriginType_AbsOrigin = 0x0,
	eTargetOriginType_PredictedAbsOrigin = 0x1,
	eTargetOriginType_LastKnownPosition = 0x2,
	eTargetOriginType_LastSeenPosition = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class ModifierRemoveTargets_t : uint32_t
{
	MODIFIER_REMOVE_ALL = 0x0,
	MODIFIER_REMOVE_ENEMY = 0x1,
	MODIFIER_REMOVE_ALLY = 0x2,
	MODIFIER_REMOVE_INTRINSIC = 0x3,
};

// Alignment: 4
// Size: 0x8
enum class SteampalUltraToiletAttachedModel_t : uint32_t
{
	ULTRA_ATTACHMENT_AAGUN_L = 0x0,
	ULTRA_ATTACHMENT_AAGUN_R = 0x1,
	ULTRA_ATTACHMENT_MINIGUN = 0x2,
	ULTRA_ATTACHMENT_SMG = 0x3,
	ULTRA_ATTACHMENT_QUAD_ROCKET_L = 0x4,
	ULTRA_ATTACHMENT_QUAD_ROCKET_R = 0x5,
	ULTRA_ATTACHMENT_RADAR = 0x6,
	ULTRA_ATTACHED_MODEL_COUNT = 0x7,
};

// Alignment: 4
// Size: 0x16
enum class DamageTypes_t : uint32_t
{
	DMG_GENERIC = 0x0,
	DMG_CRUSH = 0x1,
	DMG_BULLET = 0x2,
	DMG_SLASH = 0x4,
	DMG_BURN = 0x8,
	DMG_VEHICLE = 0x10,
	DMG_FALL = 0x20,
	DMG_BLAST = 0x40,
	DMG_CLUB = 0x80,
	DMG_SHOCK = 0x100,
	DMG_SONIC = 0x200,
	DMG_ENERGYBEAM = 0x400,
	DMG_DROWN = 0x4000,
	DMG_POISON = 0x8000,
	DMG_RADIATION = 0x10000,
	DMG_DROWNRECOVER = 0x20000,
	DMG_ACID = 0x40000,
	DMG_PHYSGUN = 0x100000,
	DMG_DISSOLVE = 0x200000,
	DMG_BLAST_SURFACE = 0x400000,
	DMG_BUCKSHOT = 0x1000000,
	DMG_LASTGENERICFLAG = 0x1000000,
};

// Alignment: 1
// Size: 0x9
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0x0,
	SOLID_BSP = 0x1,
	SOLID_BBOX = 0x2,
	SOLID_OBB = 0x3,
	SOLID_SPHERE = 0x4,
	SOLID_POINT = 0x5,
	SOLID_VPHYSICS = 0x6,
	SOLID_CAPSULE = 0x7,
	SOLID_LAST = 0x8,
};

// Alignment: 4
// Size: 0x2
enum class GatherConditionsResult_t : uint32_t
{
	GATHER_CONDITIONS_CANNOT_USE_ABILITY = 0x0,
	GATHER_CONDITIONS_CAN_USE_ABILITY = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class ActorClasses_t : uint32_t
{
	ACTOR_CLASS_DEFAULT = 0x0,
	ACTOR_CLASS_ALYX = 0x0,
	ACTOR_CLASS_CITIZEN = 0x1,
	ACTOR_CLASS_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class Interruptability_t : uint32_t
{
	GENERAL_INTERRUPTABILITY = 0x0,
	DAMAGEORDEATH_INTERRUPTABILITY = 0x1,
	DEATH_INTERRUPTABILITY = 0x2,
	COMBAT_INTERRUPTABILITY = 0x3,
};

// Alignment: 4
// Size: 0x3f
enum class Hint_e : uint32_t
{
	HINT_ANY = 0xffffffffffffffff,
	HINT_NONE = 0x0,
	HINT_NOT_USED_WORLD_DOOR = 0x1,
	HINT_WORLD_WINDOW = 0x2,
	HINT_NOT_USED_WORLD_BUTTON = 0x3,
	HINT_NOT_USED_WORLD_MACHINERY = 0x4,
	HINT_NOT_USED_WORLD_LEDGE = 0x5,
	HINT_NOT_USED_WORLD_LIGHT_SOURCE = 0x6,
	HINT_NOT_USED_WORLD_HEAT_SOURCE = 0x7,
	HINT_NOT_USED_WORLD_BLINKING_LIGHT = 0x8,
	HINT_NOT_USED_WORLD_BRIGHT_COLORS = 0x9,
	HINT_NOT_USED_WORLD_HUMAN_BLOOD = 0xa,
	HINT_NOT_USED_WORLD_ALIEN_BLOOD = 0xb,
	HINT_WORLD_WORK_POSITION = 0xc,
	HINT_WORLD_VISUALLY_INTERESTING = 0xd,
	HINT_WORLD_VISUALLY_INTERESTING_DONT_AIM = 0xe,
	HINT_WORLD_INHIBIT_COMBINE_MINES = 0xf,
	HINT_WORLD_VISUALLY_INTERESTING_STEALTH = 0x10,
	HINT_GENERIC = 0x11,
	HINT_TACTICAL_COVER_MED = 0x64,
	HINT_TACTICAL_COVER_LOW = 0x65,
	HINT_TACTICAL_HIDE = 0x66,
	HINT_TACTICAL_PINCH = 0x67,
	HINT_TACTICAL_SENTRY = 0x68,
	HINT_TACTICAL_ENEMY_DISADVANTAGED = 0x69,
	HINT_NOT_USED_HEALTH_KIT = 0x6a,
	HINT_TACTICAL_HIGH_GROUND = 0x6b,
	HINT_TACTICAL_WALL_COVER_LEFT = 0x6c,
	HINT_TACTICAL_WALL_COVER_RIGHT = 0x6d,
	HINT_TACTICAL_WALL_COVER_BOTH = 0x6e,
	HINT_NOT_USED_URBAN_STREETCORNER = 0xc8,
	HINT_NOT_USED_URBAN_STREETLAMP = 0xc9,
	HINT_NOT_USED_URBAN_DARK_SPOT = 0xca,
	HINT_NOT_USED_URBAN_POSTER = 0xcb,
	HINT_NOT_USED_URBAN_SHELTER = 0xcc,
	HINT_NOT_USED_ASSASSIN_SECLUDED = 0x12c,
	HINT_NOT_USED_ASSASSIN_RAFTERS = 0x12d,
	HINT_NOT_USED_ASSASSIN_GROUND = 0x12e,
	HINT_NOT_USED_ASSASSIN_MONKEYBARS = 0x12f,
	HINT_ANTLION_BURROW_POINT = 0x190,
	HINT_ANTLION_THUMPER_FLEE_POINT = 0x191,
	HINT_HEADCRAB_BURROW_POINT = 0x1c2,
	HINT_HEADCRAB_EXIT_POD_POINT = 0x1c3,
	HINT_NOT_USED_ROLLER_PATROL_POINT = 0x1f4,
	HINT_NOT_USED_ROLLER_CLEANUP_POINT = 0x1f5,
	HINT_NOT_USED_PSTORM_ROCK_SPAWN = 0x258,
	HINT_CROW_FLYTO_POINT = 0x2bc,
	HINT_BUG_PATROL_POINT = 0x320,
	HINT_FOLLOW_WAIT_POINT = 0x384,
	HINT_JUMP_OVERRIDE = 0x385,
	HINT_PLAYER_SQUAD_TRANSITON_POINT = 0x386,
	HINT_NPC_EXIT_POINT = 0x387,
	HINT_STRIDER_NODE = 0x388,
	HINT_PLAYER_ALLY_MOVE_AWAY_DEST = 0x3b6,
	HINT_PLAYER_ALLY_FEAR_DEST = 0x3b7,
	HINT_CSTRIKE_HOSTAGE_ESCAPE = 0x44c,
	HINT_COMBINE_FALLBACK = 0x578,
	HINT_COMBINE_SIGNAL = 0x579,
	HINT_AGENT_WORK = 0x5dc,
	HINT_INSTIGATOR_LURK = 0x640,
	HINT_FLYGUY_JUMP = 0x6a4,
	HINT_HOLDOUT_DEFENSIVE_POSITION = 0x708,
	HINT_HOLDOUT_AMMO_RESUPPLY = 0x709,
};

// Alignment: 4
// Size: 0x12
enum class EModifierValue : uint32_t
{
	MODIFIER_VALUE_MATERIAL_OVERRIDE = 0x0,
	MODIFIER_VALUE_PROC_BUILDUP_PERCENTAGE = 0x1,
	MODIFIER_VALUE_INCOMING_DAMAGE_PERCENTAGE = 0x2,
	MODIFIER_VALUE_OUTGOING_DAMAGE_PERCENTAGE = 0x3,
	MODIFIER_VALUE_ABILITY_MIN_BURST_SIZE_CONSTANT = 0x4,
	MODIFIER_VALUE_ABILITY_MAX_BURST_SIZE_CONSTANT = 0x5,
	MODIFIER_VALUE_ABILITY_POST_USE_MIN_ATTACK_DELAY_CONSTANT = 0x6,
	MODIFIER_VALUE_ABILITY_POST_USE_MAX_ATTACK_DELAY_CONSTANT = 0x7,
	MODIFIER_VALUE_ABILITY_SPREAD_X_BASE_OVERRIDE = 0x8,
	MODIFIER_VALUE_ABILITY_SPREAD_Y_BASE_OVERRIDE = 0x9,
	MODIFIER_VALUE_ABILITY_SPREAD_Z_BASE_OVERRIDE = 0xa,
	MODIFIER_VALUE_ABILITY_SPREAD_MULTIPLIER = 0xb,
	MODIFIER_VALUE_MOVESPEED_BASE_OVERRIDE = 0xc,
	MODIFIER_VALUE_MOVESPEED_PERCENTAGE = 0xd,
	MODIFIER_VALUE_GRAVITY_SCALE = 0xe,
	MODIFIER_VALUE_MOUSE_SENSITIVITY_PERCENTAGE = 0xf,
	MODIFIER_VALUE_COUNT = 0x10,
	MODIFIER_VALUE_INVALID = 0xff,
};

// Alignment: 4
// Size: 0x7
enum class Flinch_DamageClasses_t : uint32_t
{
	AGE_DMG_INVALID = 0xffffffffffffffff,
	AGE_DMG_LIGHT = 0x0,
	AGE_DMG_HEAVY = 0x1,
	AGE_DMG_BLAST = 0x2,
	AGE_DMG_PHYSICS = 0x3,
	AGE_DMG_MELEE = 0x4,
	AGE_DMG_SHOCK = 0x5,
};

// Alignment: 4
// Size: 0x1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class AI_Efficiency_t : uint32_t
{
	AIE_NORMAL = 0x0,
	AIE_EFFICIENT = 0x1,
	AIE_VERY_EFFICIENT = 0x2,
	AIE_SUPER_EFFICIENT = 0x3,
	AIE_DORMANT = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint32_t
{
	kMIN_THRESHOLD = 0x0,
	kMIN_FULL = 0x1,
	kHIGHWATER = 0x2,
};

// Alignment: 4
// Size: 0x6
enum class PlayerConnectedState : uint32_t
{
	PlayerNeverConnected = 0xffffffffffffffff,
	PlayerConnected = 0x0,
	PlayerConnecting = 0x1,
	PlayerReconnecting = 0x2,
	PlayerDisconnecting = 0x3,
	PlayerDisconnected = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class ChatIgnoreType_t : uint32_t
{
	CHAT_IGNORE_NONE = 0x0,
	CHAT_IGNORE_ALL = 0x1,
	CHAT_IGNORE_TEAM = 0x2,
};

// Alignment: 4
// Size: 0x11
enum class EModifierEvent : uint32_t
{
	MODIFIER_EVENT_PRE_DAMAGE_TAKEN_BROADCAST = 0x0,
	MODIFIER_EVENT_DAMAGE_TAKEN_BROADCAST = 0x1,
	MODIFIER_EVENT_HEALTH_TAKEN_BROADCAST = 0x2,
	MODIFIER_EVENT_PLAYER_DUMMY_BROADCAST = 0x3,
	MODIFIER_EVENT_BROADCAST_EVENT_COUNT = 0x4,
	MODIFIER_EVENT_MODIFIER_GAINED = 0x4,
	MODIFIER_EVENT_MODIFIER_LOST = 0x5,
	MODIFIER_EVENT_SCRIPTED_EVENT = 0x6,
	MODIFIER_EVENT_PRE_DAMAGE_TAKEN = 0x7,
	MODIFIER_EVENT_DAMAGE_TAKEN = 0x8,
	MODIFIER_EVENT_HEALTH_TAKEN = 0x9,
	MODIFIER_EVENT_PARENT_ACTIVATED = 0xa,
	MODIFIER_EVENT_ON_STUNNED = 0xb,
	MODIFIER_EVENT_ON_PLAYER_ACTIVE_WEAPON_CHANGED = 0xc,
	MODIFIER_EVENT_ON_PLAYER_USE = 0xd,
	MODIFIER_EVENT_COUNT = 0xe,
	MODIFIER_EVENT_INVALID = 0xff,
};

// Alignment: 4
// Size: 0x5
enum class DoorState_t : uint32_t
{
	DOOR_STATE_CLOSED = 0x0,
	DOOR_STATE_OPENING = 0x1,
	DOOR_STATE_OPEN = 0x2,
	DOOR_STATE_CLOSING = 0x3,
	DOOR_STATE_AJAR = 0x4,
};

// Alignment: 4
// Size: 0x6
enum class LatchDirtyPermission_t : uint32_t
{
	LATCH_DIRTY_DISALLOW = 0x0,
	LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
	LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
	LATCH_DIRTY_PREDICTION = 0x3,
	LATCH_DIRTY_FRAMESIMULATE = 0x4,
	LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
};

// Alignment: 4
// Size: 0x5
enum class AbilityPickupBehaviorType_t : uint32_t
{
	eAbilityPickupBehavior_GrantDroppedAmmo = 0x0,
	eAbilityPickupBehavior_GrantSpecifiedAmmo = 0x1,
	eAbilityPickupBehavior_GrantDroppedNPCAbility = 0x2,
	eAbilityPickupBehavior_GrantSpecifiedNPCAbility = 0x3,
	eAbilityPickupBehavior_GrantPlayerWeapon = 0x4,
};

// Alignment: 4
// Size: 0x1b
enum class RumbleEffect_t : uint32_t
{
	RUMBLE_INVALID = 0xffffffffffffffff,
	RUMBLE_STOP_ALL = 0x0,
	RUMBLE_PISTOL = 0x1,
	RUMBLE_357 = 0x2,
	RUMBLE_SMG1 = 0x3,
	RUMBLE_AR2 = 0x4,
	RUMBLE_SHOTGUN_SINGLE = 0x5,
	RUMBLE_SHOTGUN_DOUBLE = 0x6,
	RUMBLE_AR2_ALT_FIRE = 0x7,
	RUMBLE_RPG_MISSILE = 0x8,
	RUMBLE_CROWBAR_SWING = 0x9,
	RUMBLE_AIRBOAT_GUN = 0xa,
	RUMBLE_JEEP_ENGINE_LOOP = 0xb,
	RUMBLE_FLAT_LEFT = 0xc,
	RUMBLE_FLAT_RIGHT = 0xd,
	RUMBLE_FLAT_BOTH = 0xe,
	RUMBLE_DMG_LOW = 0xf,
	RUMBLE_DMG_MED = 0x10,
	RUMBLE_DMG_HIGH = 0x11,
	RUMBLE_FALL_LONG = 0x12,
	RUMBLE_FALL_SHORT = 0x13,
	RUMBLE_PHYSCANNON_OPEN = 0x14,
	RUMBLE_PHYSCANNON_PUNT = 0x15,
	RUMBLE_PHYSCANNON_LOW = 0x16,
	RUMBLE_PHYSCANNON_MEDIUM = 0x17,
	RUMBLE_PHYSCANNON_HIGH = 0x18,
	NUM_RUMBLE_EFFECTS = 0x19,
};

// Alignment: 4
// Size: 0x10
enum class vote_create_failed_t : uint32_t
{
	VOTE_FAILED_GENERIC = 0x0,
	VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
	VOTE_FAILED_RATE_EXCEEDED = 0x2,
	VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
	VOTE_FAILED_QUORUM_FAILURE = 0x4,
	VOTE_FAILED_ISSUE_DISABLED = 0x5,
	VOTE_FAILED_MAP_NOT_FOUND = 0x6,
	VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
	VOTE_FAILED_FAILED_RECENTLY = 0x8,
	VOTE_FAILED_TEAM_CANT_CALL = 0x9,
	VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
	VOTE_FAILED_PLAYERNOTFOUND = 0xb,
	VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
	VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
	VOTE_FAILED_SPECTATOR = 0xe,
	VOTE_FAILED_MAX = 0xf,
};

// Alignment: 1
// Size: 0x14
enum class RenderFx_t : uint8_t
{
	kRenderFxNone = 0x0,
	kRenderFxPulseSlow = 0x1,
	kRenderFxPulseFast = 0x2,
	kRenderFxPulseSlowWide = 0x3,
	kRenderFxPulseFastWide = 0x4,
	kRenderFxFadeSlow = 0x5,
	kRenderFxFadeFast = 0x6,
	kRenderFxSolidSlow = 0x7,
	kRenderFxSolidFast = 0x8,
	kRenderFxStrobeSlow = 0x9,
	kRenderFxStrobeFast = 0xa,
	kRenderFxStrobeFaster = 0xb,
	kRenderFxFlickerSlow = 0xc,
	kRenderFxFlickerFast = 0xd,
	kRenderFxNoDissipation = 0xe,
	kRenderFxFadeOut = 0xf,
	kRenderFxFadeIn = 0x10,
	kRenderFxPulseFastWider = 0x11,
	kRenderFxGlowShell = 0x12,
	kRenderFxMax = 0x13,
};

// Alignment: 4
// Size: 0x3
enum class EModifierScriptVariantType : uint32_t
{
	MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT = 0x0,
	MODIFIER_SCRIPT_VARIANT_MODEL = 0x1,
	MODIFIER_SCRIPT_VARIANT_PARTICLE = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class ScriptedMovementType_t : uint32_t
{
	SCRIPT_WALK = 0x0,
	SCRIPT_RUN = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class CRR_Response__ResponseEnum_t : uint32_t
{
	MAX_RESPONSE_NAME = 0xc0,
	MAX_RULE_NAME = 0x80,
};

// Alignment: 4
// Size: 0x5
enum class NavDirType : uint32_t
{
	NORTH = 0x0,
	EAST = 0x1,
	SOUTH = 0x2,
	WEST = 0x3,
	NUM_DIRECTIONS = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class BodyLocations_t : uint32_t
{
	BODYLOC_INVALID = 0xffffffffffffffff,
	BODYLOC_EYES = 0x0,
	BODYLOC_MUZZLE = 0x1,
	BODYLOC_ABSORIGIN = 0x2,
	BODYLOC_BODYTARGET = 0x3,
	BODYLOC_HEADTARGET = 0x4,
	NUM_BODYLOCS = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class TrackOrientationType_t : uint32_t
{
	TrackOrientation_Fixed = 0x0,
	TrackOrientation_FacePath = 0x1,
	TrackOrientation_FacePathAngles = 0x2,
};

// Alignment: 1
// Size: 0x5
enum class ShatterGlassStressType : uint8_t
{
	SHATTERGLASS_BLUNT = 0x0,
	SHATTERGLASS_BALLISTIC = 0x1,
	SHATTERGLASS_PULSE = 0x2,
	SHATTERDRYWALL_CHUNKS = 0x3,
	SHATTERGLASS_EXPLOSIVE = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class AbilityPathType_t : uint32_t
{
	eAbilityPathType_None = 0x0,
	eAbilityPathType_Target = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class HintIgnoreFacing_t : uint32_t
{
	HIF_NO = 0x0,
	HIF_YES = 0x1,
	HIF_DEFAULT = 0x2,
};

// Alignment: 4
// Size: 0x9
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	SUBCLASS_SCOPE_MISC = 0x0,
	SUBCLASS_SCOPE_PRECIPITATION = 0x1,
	SUBCLASS_SCOPE_GRENADES = 0x2,
	SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x3,
	SUBCLASS_SCOPE_MODIFIERS = 0x4,
	SUBCLASS_SCOPE_NPC_UNITS = 0x5,
	SUBCLASS_SCOPE_NPC_ABILITIES = 0x6,
	SUBCLASS_SCOPE_COUNT = 0x7,
};

// Alignment: 4
// Size: 0x8
enum class SteampalUltraToiletGunType_t : uint32_t
{
	ULTRA_GUN_MINIGUN = 0x0,
	ULTRA_GUN_AAGUN_L1 = 0x1,
	ULTRA_GUN_AAGUN_L2 = 0x2,
	ULTRA_GUN_AAGUN_R1 = 0x3,
	ULTRA_GUN_AAGUN_R2 = 0x4,
	ULTRA_GUN_SMG = 0x5,
	ULTRA_GUN_ROCKET = 0x6,
	ULTRA_GUN_TYPE_COUNT = 0x7,
};

// Alignment: 4
// Size: 0x7
enum class BeamType_t : uint32_t
{
	BEAM_INVALID = 0x0,
	BEAM_POINTS = 0x1,
	BEAM_ENTPOINT = 0x2,
	BEAM_ENTS = 0x3,
	BEAM_HOSE = 0x4,
	BEAM_SPLINE = 0x5,
	BEAM_LASER = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class doorCheck_e : uint32_t
{
	DOOR_CHECK_FORWARD = 0x0,
	DOOR_CHECK_BACKWARD = 0x1,
	DOOR_CHECK_FULL = 0x2,
};

// Alignment: 4
// Size: 0x6
enum class HierarchyType_t : uint32_t
{
	HIERARCHY_NONE = 0x0,
	HIERARCHY_BONE_MERGE = 0x1,
	HIERARCHY_ATTACHMENT = 0x2,
	HIERARCHY_ABSORIGIN = 0x3,
	HIERARCHY_BONE = 0x4,
	HIERARCHY_TYPE_COUNT = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class AmmoFlags_t : uint32_t
{
	AMMO_FORCE_DROP_IF_CARRIED = 0x1,
	AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
	AMMO_FLAG_MAX = 0x2,
};

// Alignment: 8
// Size: 0x28
enum class DebugOverlayBits_t : uint64_t
{
	OVERLAY_TEXT_BIT = 0x1,
	OVERLAY_NAME_BIT = 0x2,
	OVERLAY_BBOX_BIT = 0x4,
	OVERLAY_PIVOT_BIT = 0x8,
	OVERLAY_MESSAGE_BIT = 0x10,
	OVERLAY_ABSBOX_BIT = 0x20,
	OVERLAY_RBOX_BIT = 0x40,
	OVERLAY_SHOW_BLOCKSLOS = 0x80,
	OVERLAY_ATTACHMENTS_BIT = 0x100,
	OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
	OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
	OVERLAY_SKELETON_BIT = 0x800,
	OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
	OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
	OVERLAY_HITBOX_BIT = 0x4000,
	OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
	OVERLAY_AUTOAIM_BIT = 0x10000,
	OVERLAY_NPC_SELECTED_BIT = 0x20000,
	OVERLAY_JOINT_INFO_BIT = 0x40000,
	OVERLAY_NPC_ROUTE_BIT = 0x80000,
	OVERLAY_NPC_TRIANGULATE_BIT = 0x100000,
	OVERLAY_NPC_ZAP_BIT = 0x200000,
	OVERLAY_NPC_ENEMIES_BIT = 0x400000,
	OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
	OVERLAY_NPC_COMBAT_BIT = 0x1000000,
	OVERLAY_NPC_TASK_BIT = 0x2000000,
	OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
	OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
	OVERLAY_NPC_KILL_BIT = 0x10000000,
	OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
	OVERLAY_BUDDHA_MODE = 0x40000000,
	OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
	OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
	OVERLAY_PROP_DEBUG = 0x200000000,
	OVERLAY_NPC_RELATION_BIT = 0x400000000,
	OVERLAY_VIEWOFFSET = 0x800000000,
	OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
	OVERLAY_NPC_NEAREST_NODE_BIT = 0x2000000000,
	OVERLAY_ACTORNAME_BIT = 0x4000000000,
	OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
};

// Alignment: 4
// Size: 0x2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class CGameChoreoServices__ChoreoState_t : uint32_t
{
	STATE_PRE_SCRIPT = 0x0,
	STATE_WAIT_FOR_SCRIPT = 0x1,
	STATE_WALK_TO_MARK = 0x2,
	STATE_SYNCHRONIZE_SCRIPT = 0x3,
	STATE_PLAY_SCRIPT = 0x4,
	STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
	STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
};

// Alignment: 4
// Size: 0xd
enum class HitGroup_t : uint32_t
{
	HITGROUP_INVALID = 0xffffffffffffffff,
	HITGROUP_GENERIC = 0x0,
	HITGROUP_HEAD = 0x1,
	HITGROUP_CHEST = 0x2,
	HITGROUP_STOMACH = 0x3,
	HITGROUP_LEFTARM = 0x4,
	HITGROUP_RIGHTARM = 0x5,
	HITGROUP_LEFTLEG = 0x6,
	HITGROUP_RIGHTLEG = 0x7,
	HITGROUP_NECK = 0x8,
	HITGROUP_UNUSED = 0x9,
	HITGROUP_GEAR = 0xa,
	HITGROUP_SPECIAL = 0xb,
};

// Alignment: 4
// Size: 0x5
enum class EntityDisolveType_t : uint32_t
{
	ENTITY_DISSOLVE_INVALID = 0xffffffffffffffff,
	ENTITY_DISSOLVE_NORMAL = 0x0,
	ENTITY_DISSOLVE_ELECTRICAL = 0x1,
	ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
	ENTITY_DISSOLVE_CORE = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class AI_HintChangeReaction_t : uint32_t
{
	AIHCR_DEFAULT_AI = 0x0,
	AIHCR_MOVE_ON_COVER = 0x1,
	AIHCR_MOVE_IMMEDIATE = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class SteamPalPaintType : uint32_t
{
	STEAMPAL_PAINT_BOUNCE = 0x0,
	STEAMPAL_PAINT_SPEED = 0x1,
	STEAMPAL_PAINT_POWER_TYPE_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class ScriptedConflictResponse_t : uint32_t
{
	SS_CONFLICT_ENQUEUE = 0x0,
	SS_CONFLICT_INTERRUPT = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class ModifierDisableGroup_t : uint32_t
{
	MODIFIER_DISABLE_GROUP_MIN = 0x0,
	MODIFIER_DISABLE_GROUP_ACTIVE_WEAPON = 0x1,
	MODIFIER_DISABLE_GROUP_TIME_LOCKED = 0x2,
	MODIFIER_DISABLE_GROUP_MAX_BIT = 0x1,
	MODIFIER_DISABLE_GROUP_MAX = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class Flinch_Displacement_t : uint32_t
{
	FLINCH_DISP_STATIONARY = 0x0,
	FLINCH_DISP_SMALL = 0x1,
	FLINCH_DISP_LARGE = 0x2,
};

// Alignment: 4
// Size: 0xb
enum class DeskState_t : uint32_t
{
	DESK_STATE_NONE = 0x0,
	DESK_STATE_ALL_BUTTONS = 0x1,
	DESK_STATE_BUTTONS_EMPTY = 0x2,
	DESK_STATE_BUTTONS_DISCOVERY = 0x3,
	DESK_STATE_BUTTONS_TOILET_CALIBRATION = 0x4,
	DESK_STATE_BUTTONS_TURRET_INTRO = 0x5,
	DESK_STATE_BUTTONS_PRISON = 0x6,
	DESK_STATE_BUTTONS_SHOOTING_GALLERY = 0x7,
	DESK_STATE_BUTTONS_ASCENT = 0x8,
	DESK_STATE_BUTTONS_CAVE_OFFICE = 0x9,
	DESK_STATE_BUTTONS_TOILET_OUTRO = 0xa,
};

// Alignment: 4
// Size: 0x9
enum class AttachType_t : uint32_t
{
	ATTACH_TYPE_NONE = 0xffffffffffffffff,
	ATTACH_TYPE_RIGID = 0x0,
	ATTACH_TYPE_SOFT = 0x1,
	ATTACH_TYPE_LOOSE = 0x2,
	ATTACH_TYPE_HOVER = 0x3,
	ATTACH_TYPE_RAGDOLL = 0x4,
	ATTACH_TYPE_RAGDOLL_LARGE_CREATURE = 0x5,
	ATTACH_TYPE_RAGDOLL_LARGE = 0x6,
	ATTACH_TYPE_LOCKED = 0x7,
};

// Alignment: 4
// Size: 0x4
enum class ScriptedOnDeath_t : uint32_t
{
	SS_ONDEATH_NOT_APPLICABLE = 0xffffffffffffffff,
	SS_ONDEATH_UNDEFINED = 0x0,
	SS_ONDEATH_RAGDOLL = 0x1,
	SS_ONDEATH_ANIMATED_DEATH = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class Steampal_TurretType_t : uint32_t
{
	STEAMPAL_TURRETTYPE_BADTURRET = 0x0,
	STEAMPAL_TURRETTYPE_GOODTURRET = 0x1,
	STEAMPAL_TURRETTYPE_ACTUALTURRET = 0x2,
	STEAMPAL_TURRETTYPE_INTROTURRET = 0x3,
};

// Alignment: 1
// Size: 0x5
enum class ShatterDamageCause : uint8_t
{
	SHATTERDAMAGE_BULLET = 0x0,
	SHATTERDAMAGE_MELEE = 0x1,
	SHATTERDAMAGE_THROWN = 0x2,
	SHATTERDAMAGE_SCRIPT = 0x3,
	SHATTERDAMAGE_EXPLOSIVE = 0x4,
};

// Alignment: 4
// Size: 0x4
enum class InternalWeaponState_t : uint32_t
{
	INTERNALWEAPONSTATE_HOLSTERED = 0x0,
	INTERNALWEAPONSTATE_UNHOLSTERED = 0x1,
	INTERNALWEAPONSTATE_CHANGING = 0x2,
	INTERNALWEAPONSTATE_CHANGING_DESTROY = 0x3,
};

// Alignment: 4
// Size: 0xb
enum class SquadSlotId_t : uint32_t
{
	SQUAD_SLOT_NONE = 0xffffffffffffffff,
	SQUAD_SLOT_ATTACK1 = 0x0,
	SQUAD_SLOT_ATTACK2 = 0x1,
	SQUAD_SLOT_ATTACK3 = 0x2,
	SQUAD_SLOT_INVESTIGATE_SOUND = 0x3,
	SQUAD_SLOT_EXCLUSIVE_HANDSIGN = 0x4,
	SQUAD_SLOT_EXCLUSIVE_RELOAD = 0x5,
	SQUAD_SLOT_PICKUP_WEAPON1 = 0x6,
	SQUAD_SLOT_PICKUP_WEAPON2 = 0x7,
	SQUAD_SLOT_SPECIAL_ATTACK = 0x8,
	SQUAD_SLOT_COUNT = 0x9,
};

// Alignment: 4
// Size: 0x4
enum class CommandExecMode_t : uint32_t
{
	EXEC_MANUAL = 0x0,
	EXEC_LEVELSTART = 0x1,
	EXEC_PERIODIC = 0x2,
	EXEC_MODES_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class NPCAbilityCategory_t : uint32_t
{
	NPC_ABILITY_CATEGORY_INVALID = 0xffffffffffffffff,
	NPC_ABILITY_CATEGORY_RANGED = 0x0,
	NPC_ABILITY_CATEGORY_MELEE = 0x1,
	NPC_ABILITY_CATEGORY_OTHER = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ModifierDebuffType_t : uint32_t
{
	MODIFIER_DEBUFF_ENEMY_TEAM_ONLY = 0x0,
	MODIFIER_DEBUFF_YES = 0x1,
	MODIFIER_DEBUFF_NO = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class NPCAbilityUsageQuery_t : uint32_t
{
	NPC_ABILITY_ONLY_BEING_PERFORMED = 0x0,
	NPC_ABILITY_PERFORMING_OR_RESOLUTION = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class NPCAbilityTaskPhase_t : uint32_t
{
	TASK_PRE_ATTACK = 0x0,
	TASK_ATTACK = 0x1,
	TASK_POST_ATTACK = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
};

// Alignment: 4
// Size: 0xb
enum class Hull_t : uint32_t
{
	HULL_HUMAN = 0x0,
	HULL_SMALL_CENTERED = 0x1,
	HULL_WIDE_HUMAN = 0x2,
	HULL_TINY = 0x3,
	HULL_MEDIUM = 0x4,
	HULL_TINY_CENTERED = 0x5,
	HULL_LARGE = 0x6,
	HULL_LARGE_CENTERED = 0x7,
	HULL_MEDIUM_TALL = 0x8,
	NUM_HULLS = 0x9,
	HULL_NONE = 0xa,
};

// Alignment: 4
// Size: 0x4
enum class NPCAbilityLOSMethod_t : uint32_t
{
	NPC_ABILITY_LOS_IGNORE = 0x0,
	NPC_ABILITY_LOS_USE_DEFAULT = 0x1,
	NPC_ABILITY_LOS_CUSTOM = 0x2,
	NPC_ABILITY_LOS_TEST_FRIENDLIES_ONLY = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Alignment: 4
// Size: 0x13
enum class NavAttributeEnum : uint32_t
{
	NAV_MESH_AVOID = 0x80,
	NAV_MESH_STAIRS = 0x1000,
	NAV_MESH_NON_ZUP = 0x8000,
	NAV_MESH_SHORT_HEIGHT = 0x10000,
	NAV_MESH_CROUCH = 0x10000,
	NAV_MESH_JUMP = 0x2,
	NAV_MESH_PRECISE = 0x4,
	NAV_MESH_NO_JUMP = 0x8,
	NAV_MESH_STOP = 0x10,
	NAV_MESH_RUN = 0x20,
	NAV_MESH_WALK = 0x40,
	NAV_MESH_TRANSIENT = 0x100,
	NAV_MESH_DONT_HIDE = 0x200,
	NAV_MESH_STAND = 0x400,
	NAV_MESH_NO_HOSTAGES = 0x800,
	NAV_MESH_NO_MERGE = 0x2000,
	NAV_MESH_OBSTACLE_TOP = 0x4000,
	NAV_ATTR_FIRST_GAME_INDEX = 0x13,
	NAV_ATTR_LAST_INDEX = 0x1f,
};

// Alignment: 4
// Size: 0x4
enum class BodyLocationAnimgraphAttachments_t : uint32_t
{
	BODYLOC_PITCH_MIDDLE = 0x0,
	BODYLOC_PITCH_DOWN = 0x1,
	BODYLOC_PITCH_UP = 0x2,
	NUM_BODYLOC_PITCH = 0x3,
};

// Alignment: 4
// Size: 0x8
enum class TOGGLE_STATE : uint32_t
{
	TS_AT_TOP = 0x0,
	TS_AT_BOTTOM = 0x1,
	TS_GOING_UP = 0x2,
	TS_GOING_DOWN = 0x3,
	DOOR_OPEN = 0x0,
	DOOR_CLOSED = 0x1,
	DOOR_OPENING = 0x2,
	DOOR_CLOSING = 0x3,
};

// Alignment: 4
// Size: 0x4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

// Alignment: 1
// Size: 0xd
enum class RenderMode_t : uint8_t
{
	kRenderNormal = 0x0,
	kRenderTransColor = 0x1,
	kRenderTransTexture = 0x2,
	kRenderGlow = 0x3,
	kRenderTransAlpha = 0x4,
	kRenderTransAdd = 0x5,
	kRenderEnvironmental = 0x6,
	kRenderTransAddFrameBlend = 0x7,
	kRenderTransAlphaAdd = 0x8,
	kRenderWorldGlow = 0x9,
	kRenderNone = 0xa,
	kRenderDevVisualizer = 0xb,
	kRenderModeCount = 0xc,
};

// Alignment: 1
// Size: 0x2
enum class ShardSolid_t : uint8_t
{
	SHARD_SOLID = 0x0,
	SHARD_DEBRIS = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class PropDoorRotatingSpawnPos_t : uint32_t
{
	DOOR_SPAWN_CLOSED = 0x0,
	DOOR_SPAWN_OPEN_FORWARD = 0x1,
	DOOR_SPAWN_OPEN_BACK = 0x2,
	DOOR_SPAWN_AJAR = 0x3,
};

// Alignment: 4
// Size: 0xb
enum class NPCAbilitySound_t : uint32_t
{
	NPC_ABILITY_SOUND_EMPTY = 0x0,
	NPC_ABILITY_SOUND_SINGLE = 0x1,
	NPC_ABILITY_SOUND_RELOAD = 0x2,
	NPC_ABILITY_SOUND_MELEE_HIT = 0x3,
	NPC_ABILITY_SOUND_MELEE_HIT_WORLD = 0x4,
	NPC_ABILITY_SOUND_MELEE_HIT_PLAYER = 0x5,
	NPC_ABILITY_SOUND_SPECIAL1 = 0x6,
	NPC_ABILITY_SOUND_ANNOUNCE = 0x7,
	NPC_ABILITY_SOUND_TARGET_REACQUIRE = 0x8,
	NPC_ABILITY_SOUND_INTERRUPT = 0x9,
	NPC_ABILITY_SOUND_NUM_TYPES = 0xa,
};

// Alignment: 4
// Size: 0x6
enum class AI_SleepState_t : uint32_t
{
	AISS_AWAKE = 0x0,
	AISS_WAITING_FOR_THREAT = 0x1,
	AISS_WAITING_FOR_PVS = 0x2,
	AISS_WAITING_FOR_INPUT = 0x3,
	AISS_AUTO_PVS = 0x4,
	AISS_AUTO_PVS_AFTER_PVS = 0x5,
};

// Alignment: 4
// Size: 0x5
enum class TaskStatus_e : uint32_t
{
	TASKSTATUS_NEW = 0x0,
	TASKSTATUS_RUN_MOVE_AND_TASK = 0x1,
	TASKSTATUS_RUN_MOVE = 0x2,
	TASKSTATUS_RUN_TASK = 0x3,
	TASKSTATUS_COMPLETE = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class TrainVelocityType_t : uint32_t
{
	TrainVelocity_Instantaneous = 0x0,
	TrainVelocity_LinearBlend = 0x1,
	TrainVelocity_EaseInEaseOut = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class Touch_t : uint32_t
{
	touch_none = 0x0,
	touch_player_only = 0x1,
	touch_npc_only = 0x2,
	touch_player_or_npc = 0x3,
	touch_player_or_npc_or_physicsprop = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class CommandEntitySpecType_t : uint32_t
{
	SPEC_SEARCH = 0x0,
	SPEC_TYPES_COUNT = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class IChoreoServices__ScriptState_t : uint32_t
{
	SCRIPT_PLAYING = 0x0,
	SCRIPT_WAIT = 0x1,
	SCRIPT_POST_IDLE = 0x2,
	SCRIPT_CLEANUP = 0x3,
	SCRIPT_WALK_TO_MARK = 0x4,
	SCRIPT_RUN_TO_MARK = 0x5,
	SCRIPT_CUSTOM_MOVE_TO_MARK = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class AbilityDropBehaviorType_t : uint32_t
{
	eAbilityDropBehavior_AddIntAttributeToAbilityModel = 0x0,
	eAbilityDropBehavior_CreateEntityBySubclass = 0x1,
	eAbilityDropBehavior_SetGravityScale = 0x2,
};

// Alignment: 4
// Size: 0x54
enum class GameAnimEventIndex_t : uint32_t
{
	AE_EMPTY = 0x0,
	AE_CL_PLAYSOUND = 0x1,
	AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
	AE_CL_PLAYSOUND_POSITION = 0x3,
	AE_SV_PLAYSOUND = 0x4,
	AE_CL_STOPSOUND = 0x5,
	AE_CL_PLAYSOUND_LOOPING = 0x6,
	AE_CLIENT_EFFECT_ATTACH = 0x7,
	AE_CL_CREATE_PARTICLE_EFFECT = 0x8,
	AE_CL_STOP_PARTICLE_EFFECT = 0x9,
	AE_CL_ADD_PARTICLE_EFFECT_CP = 0xa,
	AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0xb,
	AE_CL_SUPPRESS_EVENTS_WITH_TAG = 0xc,
	AE_START_SCRIPTED_EFFECT = 0xd,
	AE_STOP_SCRIPTED_EFFECT = 0xe,
	AE_MUZZLEFLASH = 0xf,
	AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0x10,
	AE_SV_STOP_PARTICLE_EFFECT = 0x11,
	AE_CL_HIDE_PARTICLE_EFFECT = 0x12,
	AE_CL_SHOW_PARTICLE_EFFECT = 0x13,
	AE_FOOTSTEP = 0x14,
	AE_CL_FOOTSTEP_LEFT = 0x15,
	AE_CL_FOOTSTEP_RIGHT = 0x16,
	AE_CL_MFOOTSTEP_LEFT = 0x17,
	AE_CL_MFOOTSTEP_RIGHT = 0x18,
	AE_CL_MFOOTSTEP_LEFT_LOUD = 0x19,
	AE_CL_MFOOTSTEP_RIGHT_LOUD = 0x1a,
	AE_RAGDOLL = 0x1b,
	AE_CL_ENABLE_BODYGROUP = 0x1c,
	AE_CL_DISABLE_BODYGROUP = 0x1d,
	AE_CL_BODYGROUP_SET_VALUE = 0x1e,
	AE_SV_BODYGROUP_SET_VALUE = 0x1f,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x20,
	AE_WPN_PRIMARYATTACK = 0x21,
	AE_WPN_PLAYWPNSOUND = 0x22,
	AE_WPN_SECONDARYATTACK = 0x23,
	AE_CL_SPEECH = 0x24,
	AE_FIRE_INPUT = 0x25,
	AE_IK_SET_LOCK_ROTATION_ALPHA = 0x26,
	AE_IK_ALLOW_PLANE_TILT_NORMAL_UPDATES = 0x27,
	AE_IK_SET_MASTER_BLEND_AMOUNT = 0x28,
	AE_IK_SET_CHAIN_BLEND_AMOUNT = 0x29,
	AE_CL_CLOTH_ATTR = 0x2a,
	AE_CL_CLOTH_GROUND_OFFSET = 0x2b,
	AE_CL_CLOTH_STIFFEN = 0x2c,
	AE_CL_CLOTH_EFFECT = 0x2d,
	AE_CL_CREATE_ANIM_SCOPE_PROP = 0x2e,
	AE_HAPTIC_PULSE = 0x2f,
	AE_NPC_LEFTFOOT = 0x30,
	AE_NPC_RIGHTFOOT = 0x31,
	AE_NPC_BODYDROP_LIGHT = 0x32,
	AE_NPC_BODYDROP_HEAVY = 0x33,
	AE_NPC_SWISHSOUND = 0x34,
	AE_NPC_WEAPON_DROP = 0x35,
	AE_NPC_RAGDOLL = 0x36,
	AE_NPC_ATTACK_BROADCAST = 0x37,
	AE_NPC_GIB = 0x38,
	AE_NPC_BECOME_TEMPORARY_RAGDOLL = 0x39,
	AE_NPC_START_POWERED_RAGDOLL = 0x3a,
	AE_NPC_END_POWERED_RAGDOLL = 0x3b,
	AE_NPC_HURT_INTERACTION_PARTNER = 0x3c,
	AE_NPC_SET_INTERACTION_CANTDIE = 0x3d,
	AE_SOUND_EMITTED = 0x3e,
	AE_NPC_ITEM_PICKUP = 0x3f,
	AE_TOSS_ITEM = 0x40,
	AE_NPC_HOLSTER = 0x41,
	AE_NPC_DRAW = 0x42,
	AE_NPC_WEAPON_FIRE = 0x43,
	AE_NPC_WEAPON_FIRE_SHARED = 0x44,
	AE_WEAPON_MELEE_HIT = 0x45,
	AE_WEAPON_RELOAD = 0x46,
	AE_ABILITY_PERFORM_ABILITY = 0x47,
	AE_ABILITY_PERFORM_ABILITY2 = 0x48,
	AE_ABILITY_PERFORM_ABILITY3 = 0x49,
	AE_ABILITY_WEAPON_ACTIVATE = 0x4a,
	AE_ABILITY_WEAPON_DEACTIVATE = 0x4b,
	AE_SCRIPT_EVENT_NOINTERRUPT = 0x4c,
	AE_SCRIPT_EVENT_CANINTERRUPT = 0x4d,
	AE_SCRIPT_EVENT_FIREEVENT = 0x4e,
	AE_SCRIPT_EVENT_DEAD = 0x4f,
	AE_SCRIPT_EVENT_NOT_DEAD = 0x50,
	AE_SCRIPT_EVENT_FIRE_INPUT = 0x51,
	AE_SCRIPT_EVENT_CUSTOMINTERRUPT_START = 0x52,
	AE_SCRIPT_EVENT_CUSTOMINTERRUPT_END = 0x53,
};

// Alignment: 4
// Size: 0x4
enum class WeaponStateMode_t : uint32_t
{
	WSM_AI = 0x0,
	WSM_FORCED_HOLSTERED = 0x1,
	WSM_FORCED_UNHOLSTERED = 0x2,
	WSM_FORCED_HOLSTERED_DESTROY = 0x3,
};

// Alignment: 4
// Size: 0x11
enum class BaseExplosionTypes_t : uint32_t
{
	EXPLOSION_TYPE_DEFAULT = 0x0,
	EXPLOSION_TYPE_GRENADE = 0x1,
	EXPLOSION_TYPE_MOLOTOV = 0x2,
	EXPLOSION_TYPE_FIREWORKS = 0x3,
	EXPLOSION_TYPE_GASCAN = 0x4,
	EXPLOSION_TYPE_GASCYLINDER = 0x5,
	EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
	EXPLOSION_TYPE_ELECTRICAL = 0x7,
	EXPLOSION_TYPE_EMP = 0x8,
	EXPLOSION_TYPE_SHRAPNEL = 0x9,
	EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
	EXPLOSION_TYPE_FLASHBANG = 0xb,
	EXPLOSION_TYPE_TRIPMINE = 0xc,
	EXPLOSION_TYPE_ICE = 0xd,
	EXPLOSION_TYPE_NONE = 0xe,
	EXPLOSION_TYPE_CUSTOM = 0xf,
	EXPLOSION_TYPE_COUNT = 0x10,
};

// Alignment: 4
// Size: 0x2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Alignment: 4
// Size: 0x8
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	CLASS_MODIFIER_THINKER = 0x3,
	CLASS_BULLSEYE = 0x4,
	CLASS_GENERIC_ACTOR = 0x5,
	CLASS_ENEMY_APPLIANCE = 0x6,
	NUM_CLASSIFY_CLASSES = 0x7,
};

// Alignment: 4
// Size: 0x17
enum class SoundFlags_t : uint32_t
{
	SOUND_NONE = 0x0,
	SOUND_COMBAT = 0x1,
	SOUND_WORLD = 0x2,
	SOUND_PLAYER = 0x4,
	SOUND_DANGER = 0x8,
	SOUND_BULLET_IMPACT = 0x10,
	SOUND_THUMPER = 0x20,
	SOUND_PHYSICS_DANGER = 0x40,
	SOUND_MOVE_AWAY = 0x80,
	SOUND_PLAYER_VEHICLE = 0x100,
	SOUND_GLASS_BREAK = 0x200,
	SOUND_PHYSICS_OBJECT = 0x400,
	SOUND_CONTEXT_GUNFIRE = 0x100000,
	SOUND_CONTEXT_COMBINE_ONLY = 0x200000,
	SOUND_CONTEXT_REACT_TO_SOURCE = 0x400000,
	SOUND_CONTEXT_EXPLOSION = 0x800000,
	SOUND_CONTEXT_EXCLUDE_COMBINE = 0x1000000,
	SOUND_CONTEXT_DANGER_APPROACH = 0x2000000,
	SOUND_CONTEXT_ALLIES_ONLY = 0x4000000,
	SOUND_CONTEXT_PANIC_NPCS = 0x8000000,
	ALL_CONTEXTS = 0xfffffffffff00000,
	ALL_SCENTS = 0x0,
	ALL_SOUNDS = 0xfffff,
};

// Alignment: 4
// Size: 0x4
enum class Flinch_Direction_t : uint32_t
{
	FLINCH_DIR_NORTH = 0x0,
	FLINCH_DIR_EAST = 0x1,
	FLINCH_DIR_SOUTH = 0x2,
	FLINCH_DIR_WEST = 0x3,
};

// Alignment: 4
// Size: 0xc
enum class Materials : uint32_t
{
	matGlass = 0x0,
	matWood = 0x1,
	matMetal = 0x2,
	matFlesh = 0x3,
	matCinderBlock = 0x4,
	matCeilingTile = 0x5,
	matComputer = 0x6,
	matUnbreakableGlass = 0x7,
	matRocks = 0x8,
	matWeb = 0x9,
	matNone = 0xa,
	matLastMaterial = 0xb,
};

// Alignment: 1
// Size: 0x3
enum class OnFrame : uint8_t
{
	ONFRAME_UNKNOWN = 0x0,
	ONFRAME_TRUE = 0x1,
	ONFRAME_FALSE = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class WorldTextAttachmentType_t : uint32_t
{
	ATTACHED_NONE = 0x0,
	ATTACHED_PRIMARY_HAND = 0x1,
	ATTACHED_OFF_HAND = 0x2,
	ATTACHED_ENTITY = 0x3,
	ATTACHED_HMD = 0x4,
	ATTACHED_ENTITY_LARGE = 0x5,
	ATTACHED_HAND_SPECIFIED_IN_EVENT = 0x6,
};

// Alignment: 4
// Size: 0x8
enum class NPC_STATE : uint32_t
{
	NPC_STATE_INVALID = 0xffffffffffffffff,
	NPC_STATE_NONE = 0x0,
	NPC_STATE_IDLE = 0x1,
	NPC_STATE_ALERT = 0x2,
	NPC_STATE_COMBAT = 0x3,
	NPC_STATE_SCRIPT = 0x4,
	NPC_STATE_DEAD = 0x5,
	NUM_NPC_STATES = 0x6,
};

// Alignment: 4
// Size: 0x7
enum class PoseController_FModType_t : uint32_t
{
	POSECONTROLLER_FMODTYPE_NONE = 0x0,
	POSECONTROLLER_FMODTYPE_SINE = 0x1,
	POSECONTROLLER_FMODTYPE_SQUARE = 0x2,
	POSECONTROLLER_FMODTYPE_TRIANGLE = 0x3,
	POSECONTROLLER_FMODTYPE_SAWTOOTH = 0x4,
	POSECONTROLLER_FMODTYPE_NOISE = 0x5,
	POSECONTROLLER_FMODTYPE_TOTAL = 0x6,
};

// Alignment: 4
// Size: 0x404
enum class BaseActivity_t : uint32_t
{
	ACT_RESET = 0x0,
	ACT_IDLE = 0x1,
	ACT_TRANSITION = 0x2,
	ACT_COVER = 0x3,
	ACT_COVER_MED = 0x4,
	ACT_COVER_LOW = 0x5,
	ACT_WALK = 0x6,
	ACT_WALK_AIM = 0x7,
	ACT_WALK_CROUCH = 0x8,
	ACT_WALK_CROUCH_AIM = 0x9,
	ACT_RUN = 0xa,
	ACT_RUN_AIM = 0xb,
	ACT_RUN_CROUCH = 0xc,
	ACT_RUN_CROUCH_AIM = 0xd,
	ACT_RUN_PROTECTED = 0xe,
	ACT_SCRIPT_CUSTOM_MOVE = 0xf,
	ACT_RANGE_ATTACK1 = 0x10,
	ACT_RANGE_ATTACK2 = 0x11,
	ACT_RANGE_ATTACK1_LOW = 0x12,
	ACT_RANGE_ATTACK2_LOW = 0x13,
	ACT_DIESIMPLE = 0x14,
	ACT_DIEBACKWARD = 0x15,
	ACT_DIEFORWARD = 0x16,
	ACT_DIEVIOLENT = 0x17,
	ACT_DIERAGDOLL = 0x18,
	ACT_FLY = 0x19,
	ACT_HOVER = 0x1a,
	ACT_GLIDE = 0x1b,
	ACT_SWIM = 0x1c,
	ACT_JUMP = 0x1d,
	ACT_HOP = 0x1e,
	ACT_LEAP = 0x1f,
	ACT_LAND = 0x20,
	ACT_CLIMB_UP = 0x21,
	ACT_CLIMB_DOWN = 0x22,
	ACT_CLIMB_DISMOUNT = 0x23,
	ACT_SHIPLADDER_UP = 0x24,
	ACT_SHIPLADDER_DOWN = 0x25,
	ACT_STRAFE_LEFT = 0x26,
	ACT_STRAFE_RIGHT = 0x27,
	ACT_ROLL_LEFT = 0x28,
	ACT_ROLL_RIGHT = 0x29,
	ACT_TURN_LEFT = 0x2a,
	ACT_TURN_RIGHT = 0x2b,
	ACT_CROUCH = 0x2c,
	ACT_CROUCHIDLE = 0x2d,
	ACT_STAND = 0x2e,
	ACT_USE = 0x2f,
	ACT_ALIEN_BURROW_IDLE = 0x30,
	ACT_ALIEN_BURROW_OUT = 0x31,
	ACT_SIGNAL1 = 0x32,
	ACT_SIGNAL2 = 0x33,
	ACT_SIGNAL3 = 0x34,
	ACT_SIGNAL_ADVANCE = 0x35,
	ACT_SIGNAL_FORWARD = 0x36,
	ACT_SIGNAL_GROUP = 0x37,
	ACT_SIGNAL_HALT = 0x38,
	ACT_SIGNAL_LEFT = 0x39,
	ACT_SIGNAL_RIGHT = 0x3a,
	ACT_SIGNAL_TAKECOVER = 0x3b,
	ACT_LOOKBACK_RIGHT = 0x3c,
	ACT_LOOKBACK_LEFT = 0x3d,
	ACT_COWER = 0x3e,
	ACT_SMALL_FLINCH = 0x3f,
	ACT_BIG_FLINCH = 0x40,
	ACT_MELEE_ATTACK1 = 0x41,
	ACT_MELEE_ATTACK2 = 0x42,
	ACT_RELOAD = 0x43,
	ACT_RELOAD_START = 0x44,
	ACT_RELOAD_FINISH = 0x45,
	ACT_RELOAD_LOW = 0x46,
	ACT_ARM = 0x47,
	ACT_DISARM = 0x48,
	ACT_DROP_WEAPON = 0x49,
	ACT_DROP_WEAPON_SHOTGUN = 0x4a,
	ACT_PICKUP_GROUND = 0x4b,
	ACT_PICKUP_RACK = 0x4c,
	ACT_IDLE_ANGRY = 0x4d,
	ACT_IDLE_RELAXED = 0x4e,
	ACT_IDLE_STIMULATED = 0x4f,
	ACT_IDLE_AGITATED = 0x50,
	ACT_IDLE_STEALTH = 0x51,
	ACT_IDLE_HURT = 0x52,
	ACT_WALK_RELAXED = 0x53,
	ACT_WALK_STIMULATED = 0x54,
	ACT_WALK_AGITATED = 0x55,
	ACT_WALK_STEALTH = 0x56,
	ACT_RUN_RELAXED = 0x57,
	ACT_RUN_STIMULATED = 0x58,
	ACT_RUN_AGITATED = 0x59,
	ACT_RUN_STEALTH = 0x5a,
	ACT_IDLE_AIM_RELAXED = 0x5b,
	ACT_IDLE_AIM_STIMULATED = 0x5c,
	ACT_IDLE_AIM_AGITATED = 0x5d,
	ACT_IDLE_AIM_STEALTH = 0x5e,
	ACT_WALK_AIM_RELAXED = 0x5f,
	ACT_WALK_AIM_STIMULATED = 0x60,
	ACT_WALK_AIM_AGITATED = 0x61,
	ACT_WALK_AIM_STEALTH = 0x62,
	ACT_RUN_AIM_RELAXED = 0x63,
	ACT_RUN_AIM_STIMULATED = 0x64,
	ACT_RUN_AIM_AGITATED = 0x65,
	ACT_RUN_AIM_STEALTH = 0x66,
	ACT_CROUCHIDLE_STIMULATED = 0x67,
	ACT_CROUCHIDLE_AIM_STIMULATED = 0x68,
	ACT_CROUCHIDLE_AGITATED = 0x69,
	ACT_WALK_HURT = 0x6a,
	ACT_RUN_HURT = 0x6b,
	ACT_SPECIAL_ATTACK1 = 0x6c,
	ACT_SPECIAL_ATTACK2 = 0x6d,
	ACT_COMBAT_IDLE = 0x6e,
	ACT_WALK_SCARED = 0x6f,
	ACT_RUN_SCARED = 0x70,
	ACT_VICTORY_DANCE = 0x71,
	ACT_DIE_HEADSHOT = 0x72,
	ACT_DIE_CHESTSHOT = 0x73,
	ACT_DIE_GUTSHOT = 0x74,
	ACT_DIE_BACKSHOT = 0x75,
	ACT_FLINCH_HEAD = 0x76,
	ACT_FLINCH_CHEST = 0x77,
	ACT_FLINCH_STOMACH = 0x78,
	ACT_FLINCH_LEFTARM = 0x79,
	ACT_FLINCH_RIGHTARM = 0x7a,
	ACT_FLINCH_LEFTLEG = 0x7b,
	ACT_FLINCH_RIGHTLEG = 0x7c,
	ACT_FLINCH_PHYSICS = 0x7d,
	ACT_FLINCH_HEAD_BACK = 0x7e,
	ACT_FLINCH_CHEST_BACK = 0x7f,
	ACT_FLINCH_STOMACH_BACK = 0x80,
	ACT_FLINCH_CROUCH_FRONT = 0x81,
	ACT_FLINCH_CROUCH_BACK = 0x82,
	ACT_FLINCH_CROUCH_LEFT = 0x83,
	ACT_FLINCH_CROUCH_RIGHT = 0x84,
	ACT_IDLE_ON_FIRE = 0x85,
	ACT_WALK_ON_FIRE = 0x86,
	ACT_RUN_ON_FIRE = 0x87,
	ACT_180_LEFT = 0x89,
	ACT_180_RIGHT = 0x8a,
	ACT_90_LEFT = 0x8b,
	ACT_90_RIGHT = 0x8c,
	ACT_STEP_LEFT = 0x8d,
	ACT_STEP_RIGHT = 0x8e,
	ACT_STEP_BACK = 0x8f,
	ACT_STEP_FORE = 0x90,
	ACT_GESTURE_RANGE_ATTACK1 = 0x91,
	ACT_GESTURE_RANGE_ATTACK2 = 0x92,
	ACT_GESTURE_MELEE_ATTACK1 = 0x93,
	ACT_GESTURE_MELEE_ATTACK2 = 0x94,
	ACT_GESTURE_RANGE_ATTACK1_LOW = 0x95,
	ACT_GESTURE_RANGE_ATTACK2_LOW = 0x96,
	ACT_MELEE_ATTACK_SWING_GESTURE = 0x97,
	ACT_GESTURE_SMALL_FLINCH = 0x98,
	ACT_GESTURE_BIG_FLINCH = 0x99,
	ACT_GESTURE_FLINCH_BLAST = 0x9a,
	ACT_GESTURE_FLINCH_BLAST_SHOTGUN = 0x9b,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED = 0x9c,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED_SHOTGUN = 0x9d,
	ACT_GESTURE_FLINCH_HEAD = 0x9e,
	ACT_GESTURE_FLINCH_CHEST = 0x9f,
	ACT_GESTURE_FLINCH_STOMACH = 0xa0,
	ACT_GESTURE_FLINCH_LEFTARM = 0xa1,
	ACT_GESTURE_FLINCH_RIGHTARM = 0xa2,
	ACT_GESTURE_FLINCH_LEFTLEG = 0xa3,
	ACT_GESTURE_FLINCH_RIGHTLEG = 0xa4,
	ACT_GESTURE_TURN_LEFT = 0xa5,
	ACT_GESTURE_TURN_RIGHT = 0xa6,
	ACT_GESTURE_TURN_LEFT45 = 0xa7,
	ACT_GESTURE_TURN_RIGHT45 = 0xa8,
	ACT_GESTURE_TURN_LEFT90 = 0xa9,
	ACT_GESTURE_TURN_RIGHT90 = 0xaa,
	ACT_GESTURE_TURN_LEFT45_FLAT = 0xab,
	ACT_GESTURE_TURN_RIGHT45_FLAT = 0xac,
	ACT_GESTURE_TURN_LEFT90_FLAT = 0xad,
	ACT_GESTURE_TURN_RIGHT90_FLAT = 0xae,
	ACT_BARNACLE_HIT = 0xaf,
	ACT_BARNACLE_PULL = 0xb0,
	ACT_BARNACLE_CHOMP = 0xb1,
	ACT_BARNACLE_CHEW = 0xb2,
	ACT_DO_NOT_DISTURB = 0xb3,
	ACT_SPECIFIC_SEQUENCE = 0xb4,
	ACT_VM_DEPLOY = 0xb5,
	ACT_VM_RELOAD_EMPTY = 0xb6,
	ACT_VM_DRAW = 0xb7,
	ACT_VM_HOLSTER = 0xb8,
	ACT_VM_IDLE = 0xb9,
	ACT_VM_FIDGET = 0xba,
	ACT_VM_PULLBACK = 0xbb,
	ACT_VM_PULLBACK_HIGH = 0xbc,
	ACT_VM_PULLBACK_LOW = 0xbd,
	ACT_VM_THROW = 0xbe,
	ACT_VM_DROP = 0xbf,
	ACT_VM_PULLPIN = 0xc0,
	ACT_VM_PRIMARYATTACK = 0xc1,
	ACT_VM_SECONDARYATTACK = 0xc2,
	ACT_VM_RELOAD = 0xc3,
	ACT_VM_DRYFIRE = 0xc4,
	ACT_VM_HITLEFT = 0xc5,
	ACT_VM_HITLEFT2 = 0xc6,
	ACT_VM_HITRIGHT = 0xc7,
	ACT_VM_HITRIGHT2 = 0xc8,
	ACT_VM_HITCENTER = 0xc9,
	ACT_VM_HITCENTER2 = 0xca,
	ACT_VM_MISSLEFT = 0xcb,
	ACT_VM_MISSLEFT2 = 0xcc,
	ACT_VM_MISSRIGHT = 0xcd,
	ACT_VM_MISSRIGHT2 = 0xce,
	ACT_VM_MISSCENTER = 0xcf,
	ACT_VM_MISSCENTER2 = 0xd0,
	ACT_VM_HAULBACK = 0xd1,
	ACT_VM_SWINGHARD = 0xd2,
	ACT_VM_SWINGMISS = 0xd3,
	ACT_VM_SWINGHIT = 0xd4,
	ACT_VM_IDLE_TO_LOWERED = 0xd5,
	ACT_VM_IDLE_LOWERED = 0xd6,
	ACT_VM_LOWERED_TO_IDLE = 0xd7,
	ACT_VM_RECOIL1 = 0xd8,
	ACT_VM_RECOIL2 = 0xd9,
	ACT_VM_RECOIL3 = 0xda,
	ACT_VM_PICKUP = 0xdb,
	ACT_VM_RELEASE = 0xdc,
	ACT_VM_MAUL_LOOP = 0xdd,
	ACT_VM_ATTACH_SILENCER = 0xde,
	ACT_VM_DETACH_SILENCER = 0xdf,
	ACT_SLAM_STICKWALL_IDLE = 0xe0,
	ACT_SLAM_STICKWALL_ND_IDLE = 0xe1,
	ACT_SLAM_STICKWALL_ATTACH = 0xe2,
	ACT_SLAM_STICKWALL_ATTACH2 = 0xe3,
	ACT_SLAM_STICKWALL_ND_ATTACH = 0xe4,
	ACT_SLAM_STICKWALL_ND_ATTACH2 = 0xe5,
	ACT_SLAM_STICKWALL_DETONATE = 0xe6,
	ACT_SLAM_STICKWALL_DETONATOR_HOLSTER = 0xe7,
	ACT_SLAM_STICKWALL_DRAW = 0xe8,
	ACT_SLAM_STICKWALL_ND_DRAW = 0xe9,
	ACT_SLAM_STICKWALL_TO_THROW = 0xea,
	ACT_SLAM_STICKWALL_TO_THROW_ND = 0xeb,
	ACT_SLAM_STICKWALL_TO_TRIPMINE_ND = 0xec,
	ACT_SLAM_THROW_IDLE = 0xed,
	ACT_SLAM_THROW_ND_IDLE = 0xee,
	ACT_SLAM_THROW_THROW = 0xef,
	ACT_SLAM_THROW_THROW2 = 0xf0,
	ACT_SLAM_THROW_THROW_ND = 0xf1,
	ACT_SLAM_THROW_THROW_ND2 = 0xf2,
	ACT_SLAM_THROW_DRAW = 0xf3,
	ACT_SLAM_THROW_ND_DRAW = 0xf4,
	ACT_SLAM_THROW_TO_STICKWALL = 0xf5,
	ACT_SLAM_THROW_TO_STICKWALL_ND = 0xf6,
	ACT_SLAM_THROW_DETONATE = 0xf7,
	ACT_SLAM_THROW_DETONATOR_HOLSTER = 0xf8,
	ACT_SLAM_THROW_TO_TRIPMINE_ND = 0xf9,
	ACT_SLAM_TRIPMINE_IDLE = 0xfa,
	ACT_SLAM_TRIPMINE_DRAW = 0xfb,
	ACT_SLAM_TRIPMINE_ATTACH = 0xfc,
	ACT_SLAM_TRIPMINE_ATTACH2 = 0xfd,
	ACT_SLAM_TRIPMINE_TO_STICKWALL_ND = 0xfe,
	ACT_SLAM_TRIPMINE_TO_THROW_ND = 0xff,
	ACT_SLAM_DETONATOR_IDLE = 0x100,
	ACT_SLAM_DETONATOR_DRAW = 0x101,
	ACT_SLAM_DETONATOR_DETONATE = 0x102,
	ACT_SLAM_DETONATOR_HOLSTER = 0x103,
	ACT_SLAM_DETONATOR_STICKWALL_DRAW = 0x104,
	ACT_SLAM_DETONATOR_THROW_DRAW = 0x105,
	ACT_SHOTGUN_RELOAD_START = 0x106,
	ACT_SHOTGUN_RELOAD_FINISH = 0x107,
	ACT_SHOTGUN_PUMP = 0x108,
	ACT_SMG2_IDLE2 = 0x109,
	ACT_SMG2_FIRE2 = 0x10a,
	ACT_SMG2_DRAW2 = 0x10b,
	ACT_SMG2_RELOAD2 = 0x10c,
	ACT_SMG2_DRYFIRE2 = 0x10d,
	ACT_SMG2_TOAUTO = 0x10e,
	ACT_SMG2_TOBURST = 0x10f,
	ACT_PHYSCANNON_UPGRADE = 0x110,
	ACT_RANGE_ATTACK_AR1 = 0x111,
	ACT_RANGE_ATTACK_AR2 = 0x112,
	ACT_RANGE_ATTACK_AR2_LOW = 0x113,
	ACT_RANGE_ATTACK_AR2_GRENADE = 0x114,
	ACT_RANGE_ATTACK_HMG1 = 0x115,
	ACT_RANGE_ATTACK_ML = 0x116,
	ACT_RANGE_ATTACK_SMG1 = 0x117,
	ACT_RANGE_ATTACK_SMG1_LOW = 0x118,
	ACT_RANGE_ATTACK_SMG2 = 0x119,
	ACT_RANGE_ATTACK_SHOTGUN = 0x11a,
	ACT_RANGE_ATTACK_SHOTGUN_LOW = 0x11b,
	ACT_RANGE_ATTACK_PISTOL = 0x11c,
	ACT_RANGE_ATTACK_PISTOL_LOW = 0x11d,
	ACT_RANGE_ATTACK_SLAM = 0x11e,
	ACT_RANGE_ATTACK_TRIPWIRE = 0x11f,
	ACT_RANGE_ATTACK_THROW = 0x120,
	ACT_RANGE_ATTACK_SNIPER_RIFLE = 0x121,
	ACT_RANGE_ATTACK_RPG = 0x122,
	ACT_MELEE_ATTACK_SWING = 0x123,
	ACT_RANGE_AIM_LOW = 0x124,
	ACT_RANGE_AIM_SMG1_LOW = 0x125,
	ACT_RANGE_AIM_PISTOL_LOW = 0x126,
	ACT_RANGE_AIM_AR2_LOW = 0x127,
	ACT_COVER_PISTOL_LOW = 0x128,
	ACT_COVER_SMG1_LOW = 0x129,
	ACT_GESTURE_RANGE_ATTACK_AR1 = 0x12a,
	ACT_GESTURE_RANGE_ATTACK_AR2 = 0x12b,
	ACT_GESTURE_RANGE_ATTACK_AR2_GRENADE = 0x12c,
	ACT_GESTURE_RANGE_ATTACK_HMG1 = 0x12d,
	ACT_GESTURE_RANGE_ATTACK_ML = 0x12e,
	ACT_GESTURE_RANGE_ATTACK_SMG1 = 0x12f,
	ACT_GESTURE_RANGE_ATTACK_SMG1_LOW = 0x130,
	ACT_GESTURE_RANGE_ATTACK_SMG2 = 0x131,
	ACT_GESTURE_RANGE_ATTACK_SHOTGUN = 0x132,
	ACT_GESTURE_RANGE_ATTACK_PISTOL = 0x133,
	ACT_GESTURE_RANGE_ATTACK_PISTOL_LOW = 0x134,
	ACT_GESTURE_RANGE_ATTACK_SLAM = 0x135,
	ACT_GESTURE_RANGE_ATTACK_TRIPWIRE = 0x136,
	ACT_GESTURE_RANGE_ATTACK_THROW = 0x137,
	ACT_GESTURE_RANGE_ATTACK_SNIPER_RIFLE = 0x138,
	ACT_GESTURE_MELEE_ATTACK_SWING = 0x139,
	ACT_IDLE_RIFLE = 0x13a,
	ACT_IDLE_SMG1 = 0x13b,
	ACT_IDLE_ANGRY_SMG1 = 0x13c,
	ACT_IDLE_PISTOL = 0x13d,
	ACT_IDLE_ANGRY_PISTOL = 0x13e,
	ACT_IDLE_ANGRY_SHOTGUN = 0x13f,
	ACT_IDLE_STEALTH_PISTOL = 0x140,
	ACT_IDLE_PACKAGE = 0x141,
	ACT_WALK_PACKAGE = 0x142,
	ACT_IDLE_SUITCASE = 0x143,
	ACT_WALK_SUITCASE = 0x144,
	ACT_IDLE_SMG1_RELAXED = 0x145,
	ACT_IDLE_SMG1_STIMULATED = 0x146,
	ACT_WALK_RIFLE_RELAXED = 0x147,
	ACT_RUN_RIFLE_RELAXED = 0x148,
	ACT_WALK_RIFLE_STIMULATED = 0x149,
	ACT_RUN_RIFLE_STIMULATED = 0x14a,
	ACT_IDLE_AIM_RIFLE_STIMULATED = 0x14b,
	ACT_WALK_AIM_RIFLE_STIMULATED = 0x14c,
	ACT_RUN_AIM_RIFLE_STIMULATED = 0x14d,
	ACT_IDLE_SHOTGUN_RELAXED = 0x14e,
	ACT_IDLE_SHOTGUN_STIMULATED = 0x14f,
	ACT_IDLE_SHOTGUN_AGITATED = 0x150,
	ACT_WALK_ANGRY = 0x151,
	ACT_POLICE_HARASS1 = 0x152,
	ACT_POLICE_HARASS2 = 0x153,
	ACT_IDLE_MANNEDGUN = 0x154,
	ACT_IDLE_MELEE = 0x155,
	ACT_IDLE_ANGRY_MELEE = 0x156,
	ACT_IDLE_RPG_RELAXED = 0x157,
	ACT_IDLE_RPG = 0x158,
	ACT_IDLE_ANGRY_RPG = 0x159,
	ACT_COVER_LOW_RPG = 0x15a,
	ACT_WALK_RPG = 0x15b,
	ACT_RUN_RPG = 0x15c,
	ACT_WALK_CROUCH_RPG = 0x15d,
	ACT_RUN_CROUCH_RPG = 0x15e,
	ACT_WALK_RPG_RELAXED = 0x15f,
	ACT_RUN_RPG_RELAXED = 0x160,
	ACT_WALK_RIFLE = 0x161,
	ACT_WALK_AIM_RIFLE = 0x162,
	ACT_WALK_CROUCH_RIFLE = 0x163,
	ACT_WALK_CROUCH_AIM_RIFLE = 0x164,
	ACT_RUN_RIFLE = 0x165,
	ACT_RUN_AIM_RIFLE = 0x166,
	ACT_RUN_CROUCH_RIFLE = 0x167,
	ACT_RUN_CROUCH_AIM_RIFLE = 0x168,
	ACT_RUN_STEALTH_PISTOL = 0x169,
	ACT_WALK_AIM_SHOTGUN = 0x16a,
	ACT_RUN_AIM_SHOTGUN = 0x16b,
	ACT_WALK_PISTOL = 0x16c,
	ACT_RUN_PISTOL = 0x16d,
	ACT_WALK_AIM_PISTOL = 0x16e,
	ACT_RUN_AIM_PISTOL = 0x16f,
	ACT_WALK_STEALTH_PISTOL = 0x170,
	ACT_WALK_AIM_STEALTH_PISTOL = 0x171,
	ACT_RUN_AIM_STEALTH_PISTOL = 0x172,
	ACT_RELOAD_PISTOL = 0x173,
	ACT_RELOAD_PISTOL_LOW = 0x174,
	ACT_RELOAD_SMG1 = 0x175,
	ACT_RELOAD_SMG1_LOW = 0x176,
	ACT_RELOAD_SHOTGUN = 0x177,
	ACT_RELOAD_SHOTGUN_LOW = 0x178,
	ACT_GESTURE_RELOAD = 0x179,
	ACT_GESTURE_RELOAD_PISTOL = 0x17a,
	ACT_GESTURE_RELOAD_SMG1 = 0x17b,
	ACT_GESTURE_RELOAD_SHOTGUN = 0x17c,
	ACT_BUSY_LEAN_LEFT = 0x17d,
	ACT_BUSY_LEAN_LEFT_ENTRY = 0x17e,
	ACT_BUSY_LEAN_LEFT_EXIT = 0x17f,
	ACT_BUSY_LEAN_BACK = 0x180,
	ACT_BUSY_LEAN_BACK_ENTRY = 0x181,
	ACT_BUSY_LEAN_BACK_EXIT = 0x182,
	ACT_BUSY_SIT_GROUND = 0x183,
	ACT_BUSY_SIT_GROUND_ENTRY = 0x184,
	ACT_BUSY_SIT_GROUND_EXIT = 0x185,
	ACT_BUSY_SIT_CHAIR = 0x186,
	ACT_BUSY_SIT_CHAIR_ENTRY = 0x187,
	ACT_BUSY_SIT_CHAIR_EXIT = 0x188,
	ACT_BUSY_STAND = 0x189,
	ACT_BUSY_QUEUE = 0x18a,
	ACT_DUCK_DODGE = 0x18b,
	ACT_DIE_BARNACLE_SWALLOW = 0x18c,
	ACT_GESTURE_BARNACLE_STRANGLE = 0x18d,
	ACT_PHYSCANNON_DETACH = 0x18e,
	ACT_PHYSCANNON_ANIMATE = 0x18f,
	ACT_PHYSCANNON_ANIMATE_PRE = 0x190,
	ACT_PHYSCANNON_ANIMATE_POST = 0x191,
	ACT_DIE_FRONTSIDE = 0x192,
	ACT_DIE_RIGHTSIDE = 0x193,
	ACT_DIE_BACKSIDE = 0x194,
	ACT_DIE_LEFTSIDE = 0x195,
	ACT_DIE_CROUCH_FRONTSIDE = 0x196,
	ACT_DIE_CROUCH_RIGHTSIDE = 0x197,
	ACT_DIE_CROUCH_BACKSIDE = 0x198,
	ACT_DIE_CROUCH_LEFTSIDE = 0x199,
	ACT_DIE_INCAP = 0x19a,
	ACT_DIE_STANDING = 0x19b,
	ACT_OPEN_DOOR = 0x19c,
	ACT_DI_ALYX_ZOMBIE_MELEE = 0x19d,
	ACT_DI_ALYX_ZOMBIE_TORSO_MELEE = 0x19e,
	ACT_DI_ALYX_HEADCRAB_MELEE = 0x19f,
	ACT_DI_ALYX_ANTLION = 0x1a0,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN64 = 0x1a1,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN26 = 0x1a2,
	ACT_READINESS_RELAXED_TO_STIMULATED = 0x1a3,
	ACT_READINESS_RELAXED_TO_STIMULATED_WALK = 0x1a4,
	ACT_READINESS_AGITATED_TO_STIMULATED = 0x1a5,
	ACT_READINESS_STIMULATED_TO_RELAXED = 0x1a6,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED = 0x1a7,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED_WALK = 0x1a8,
	ACT_READINESS_PISTOL_AGITATED_TO_STIMULATED = 0x1a9,
	ACT_READINESS_PISTOL_STIMULATED_TO_RELAXED = 0x1aa,
	ACT_IDLE_CARRY = 0x1ab,
	ACT_WALK_CARRY = 0x1ac,
	ACT_STARTDYING = 0x1ad,
	ACT_DYINGLOOP = 0x1ae,
	ACT_DYINGTODEAD = 0x1af,
	ACT_RIDE_MANNED_GUN = 0x1b0,
	ACT_VM_SPRINT_ENTER = 0x1b1,
	ACT_VM_SPRINT_IDLE = 0x1b2,
	ACT_VM_SPRINT_LEAVE = 0x1b3,
	ACT_FIRE_START = 0x1b4,
	ACT_FIRE_LOOP = 0x1b5,
	ACT_FIRE_END = 0x1b6,
	ACT_CROUCHING_GRENADEIDLE = 0x1b7,
	ACT_CROUCHING_GRENADEREADY = 0x1b8,
	ACT_CROUCHING_PRIMARYATTACK = 0x1b9,
	ACT_OVERLAY_GRENADEIDLE = 0x1ba,
	ACT_OVERLAY_GRENADEREADY = 0x1bb,
	ACT_OVERLAY_PRIMARYATTACK = 0x1bc,
	ACT_OVERLAY_SHIELD_UP = 0x1bd,
	ACT_OVERLAY_SHIELD_DOWN = 0x1be,
	ACT_OVERLAY_SHIELD_UP_IDLE = 0x1bf,
	ACT_OVERLAY_SHIELD_ATTACK = 0x1c0,
	ACT_OVERLAY_SHIELD_KNOCKBACK = 0x1c1,
	ACT_SHIELD_UP = 0x1c2,
	ACT_SHIELD_DOWN = 0x1c3,
	ACT_SHIELD_UP_IDLE = 0x1c4,
	ACT_SHIELD_ATTACK = 0x1c5,
	ACT_SHIELD_KNOCKBACK = 0x1c6,
	ACT_CROUCHING_SHIELD_UP = 0x1c7,
	ACT_CROUCHING_SHIELD_DOWN = 0x1c8,
	ACT_CROUCHING_SHIELD_UP_IDLE = 0x1c9,
	ACT_CROUCHING_SHIELD_ATTACK = 0x1ca,
	ACT_CROUCHING_SHIELD_KNOCKBACK = 0x1cb,
	ACT_TURNRIGHT45 = 0x1cc,
	ACT_TURNLEFT45 = 0x1cd,
	ACT_TURN = 0x1ce,
	ACT_OBJ_ASSEMBLING = 0x1cf,
	ACT_OBJ_DISMANTLING = 0x1d0,
	ACT_OBJ_STARTUP = 0x1d1,
	ACT_OBJ_RUNNING = 0x1d2,
	ACT_OBJ_IDLE = 0x1d3,
	ACT_OBJ_PLACING = 0x1d4,
	ACT_OBJ_DETERIORATING = 0x1d5,
	ACT_OBJ_UPGRADING = 0x1d6,
	ACT_DEPLOY = 0x1d7,
	ACT_DEPLOY_IDLE = 0x1d8,
	ACT_UNDEPLOY = 0x1d9,
	ACT_CROSSBOW_DRAW_UNLOADED = 0x1da,
	ACT_GAUSS_SPINUP = 0x1db,
	ACT_GAUSS_SPINCYCLE = 0x1dc,
	ACT_VM_PRIMARYATTACK_SILENCED = 0x1dd,
	ACT_VM_RELOAD_SILENCED = 0x1de,
	ACT_VM_DRYFIRE_SILENCED = 0x1df,
	ACT_VM_IDLE_SILENCED = 0x1e0,
	ACT_VM_DRAW_SILENCED = 0x1e1,
	ACT_VM_IDLE_EMPTY_LEFT = 0x1e2,
	ACT_VM_DRYFIRE_LEFT = 0x1e3,
	ACT_VM_IS_DRAW = 0x1e4,
	ACT_VM_IS_HOLSTER = 0x1e5,
	ACT_VM_IS_IDLE = 0x1e6,
	ACT_VM_IS_PRIMARYATTACK = 0x1e7,
	ACT_PLAYER_IDLE_FIRE = 0x1e8,
	ACT_PLAYER_CROUCH_FIRE = 0x1e9,
	ACT_PLAYER_CROUCH_WALK_FIRE = 0x1ea,
	ACT_PLAYER_WALK_FIRE = 0x1eb,
	ACT_PLAYER_RUN_FIRE = 0x1ec,
	ACT_IDLETORUN = 0x1ed,
	ACT_RUNTOIDLE = 0x1ee,
	ACT_VM_DRAW_DEPLOYED = 0x1ef,
	ACT_HL2MP_IDLE_MELEE = 0x1f0,
	ACT_HL2MP_RUN_MELEE = 0x1f1,
	ACT_HL2MP_IDLE_CROUCH_MELEE = 0x1f2,
	ACT_HL2MP_WALK_CROUCH_MELEE = 0x1f3,
	ACT_HL2MP_GESTURE_RANGE_ATTACK_MELEE = 0x1f4,
	ACT_HL2MP_GESTURE_RELOAD_MELEE = 0x1f5,
	ACT_HL2MP_JUMP_MELEE = 0x1f6,
	ACT_MP_STAND_IDLE = 0x1f7,
	ACT_MP_CROUCH_IDLE = 0x1f8,
	ACT_MP_CROUCH_DEPLOYED_IDLE = 0x1f9,
	ACT_MP_CROUCH_DEPLOYED = 0x1fa,
	ACT_MP_DEPLOYED_IDLE = 0x1fb,
	ACT_MP_RUN = 0x1fc,
	ACT_MP_WALK = 0x1fd,
	ACT_MP_AIRWALK = 0x1fe,
	ACT_MP_CROUCHWALK = 0x1ff,
	ACT_MP_SPRINT = 0x200,
	ACT_MP_JUMP = 0x201,
	ACT_MP_JUMP_START = 0x202,
	ACT_MP_JUMP_FLOAT = 0x203,
	ACT_MP_JUMP_LAND = 0x204,
	ACT_MP_DOUBLEJUMP = 0x205,
	ACT_MP_SWIM = 0x206,
	ACT_MP_DEPLOYED = 0x207,
	ACT_MP_SWIM_DEPLOYED = 0x208,
	ACT_MP_VCD = 0x209,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE = 0x20a,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE_DEPLOYED = 0x20b,
	ACT_MP_ATTACK_STAND_SECONDARYFIRE = 0x20c,
	ACT_MP_ATTACK_STAND_GRENADE = 0x20d,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE = 0x20e,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE_DEPLOYED = 0x20f,
	ACT_MP_ATTACK_CROUCH_SECONDARYFIRE = 0x210,
	ACT_MP_ATTACK_CROUCH_GRENADE = 0x211,
	ACT_MP_ATTACK_SWIM_PRIMARYFIRE = 0x212,
	ACT_MP_ATTACK_SWIM_SECONDARYFIRE = 0x213,
	ACT_MP_ATTACK_SWIM_GRENADE = 0x214,
	ACT_MP_ATTACK_AIRWALK_PRIMARYFIRE = 0x215,
	ACT_MP_ATTACK_AIRWALK_SECONDARYFIRE = 0x216,
	ACT_MP_ATTACK_AIRWALK_GRENADE = 0x217,
	ACT_MP_RELOAD_STAND = 0x218,
	ACT_MP_RELOAD_STAND_LOOP = 0x219,
	ACT_MP_RELOAD_STAND_END = 0x21a,
	ACT_MP_RELOAD_CROUCH = 0x21b,
	ACT_MP_RELOAD_CROUCH_LOOP = 0x21c,
	ACT_MP_RELOAD_CROUCH_END = 0x21d,
	ACT_MP_RELOAD_SWIM = 0x21e,
	ACT_MP_RELOAD_SWIM_LOOP = 0x21f,
	ACT_MP_RELOAD_SWIM_END = 0x220,
	ACT_MP_RELOAD_AIRWALK = 0x221,
	ACT_MP_RELOAD_AIRWALK_LOOP = 0x222,
	ACT_MP_RELOAD_AIRWALK_END = 0x223,
	ACT_MP_ATTACK_STAND_PREFIRE = 0x224,
	ACT_MP_ATTACK_STAND_POSTFIRE = 0x225,
	ACT_MP_ATTACK_STAND_STARTFIRE = 0x226,
	ACT_MP_ATTACK_CROUCH_PREFIRE = 0x227,
	ACT_MP_ATTACK_CROUCH_POSTFIRE = 0x228,
	ACT_MP_ATTACK_SWIM_PREFIRE = 0x229,
	ACT_MP_ATTACK_SWIM_POSTFIRE = 0x22a,
	ACT_MP_STAND_PRIMARY = 0x22b,
	ACT_MP_CROUCH_PRIMARY = 0x22c,
	ACT_MP_RUN_PRIMARY = 0x22d,
	ACT_MP_WALK_PRIMARY = 0x22e,
	ACT_MP_AIRWALK_PRIMARY = 0x22f,
	ACT_MP_CROUCHWALK_PRIMARY = 0x230,
	ACT_MP_JUMP_PRIMARY = 0x231,
	ACT_MP_JUMP_START_PRIMARY = 0x232,
	ACT_MP_JUMP_FLOAT_PRIMARY = 0x233,
	ACT_MP_JUMP_LAND_PRIMARY = 0x234,
	ACT_MP_SWIM_PRIMARY = 0x235,
	ACT_MP_DEPLOYED_PRIMARY = 0x236,
	ACT_MP_SWIM_DEPLOYED_PRIMARY = 0x237,
	ACT_MP_ATTACK_STAND_PRIMARY = 0x238,
	ACT_MP_ATTACK_STAND_PRIMARY_DEPLOYED = 0x239,
	ACT_MP_ATTACK_CROUCH_PRIMARY = 0x23a,
	ACT_MP_ATTACK_CROUCH_PRIMARY_DEPLOYED = 0x23b,
	ACT_MP_ATTACK_SWIM_PRIMARY = 0x23c,
	ACT_MP_ATTACK_AIRWALK_PRIMARY = 0x23d,
	ACT_MP_RELOAD_STAND_PRIMARY = 0x23e,
	ACT_MP_RELOAD_STAND_PRIMARY_LOOP = 0x23f,
	ACT_MP_RELOAD_STAND_PRIMARY_END = 0x240,
	ACT_MP_RELOAD_CROUCH_PRIMARY = 0x241,
	ACT_MP_RELOAD_CROUCH_PRIMARY_LOOP = 0x242,
	ACT_MP_RELOAD_CROUCH_PRIMARY_END = 0x243,
	ACT_MP_RELOAD_SWIM_PRIMARY = 0x244,
	ACT_MP_RELOAD_SWIM_PRIMARY_LOOP = 0x245,
	ACT_MP_RELOAD_SWIM_PRIMARY_END = 0x246,
	ACT_MP_RELOAD_AIRWALK_PRIMARY = 0x247,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_LOOP = 0x248,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_END = 0x249,
	ACT_MP_ATTACK_STAND_GRENADE_PRIMARY = 0x24a,
	ACT_MP_ATTACK_CROUCH_GRENADE_PRIMARY = 0x24b,
	ACT_MP_ATTACK_SWIM_GRENADE_PRIMARY = 0x24c,
	ACT_MP_ATTACK_AIRWALK_GRENADE_PRIMARY = 0x24d,
	ACT_MP_STAND_SECONDARY = 0x24e,
	ACT_MP_CROUCH_SECONDARY = 0x24f,
	ACT_MP_RUN_SECONDARY = 0x250,
	ACT_MP_WALK_SECONDARY = 0x251,
	ACT_MP_AIRWALK_SECONDARY = 0x252,
	ACT_MP_CROUCHWALK_SECONDARY = 0x253,
	ACT_MP_JUMP_SECONDARY = 0x254,
	ACT_MP_JUMP_START_SECONDARY = 0x255,
	ACT_MP_JUMP_FLOAT_SECONDARY = 0x256,
	ACT_MP_JUMP_LAND_SECONDARY = 0x257,
	ACT_MP_SWIM_SECONDARY = 0x258,
	ACT_MP_ATTACK_STAND_SECONDARY = 0x259,
	ACT_MP_ATTACK_CROUCH_SECONDARY = 0x25a,
	ACT_MP_ATTACK_SWIM_SECONDARY = 0x25b,
	ACT_MP_ATTACK_AIRWALK_SECONDARY = 0x25c,
	ACT_MP_RELOAD_STAND_SECONDARY = 0x25d,
	ACT_MP_RELOAD_STAND_SECONDARY_LOOP = 0x25e,
	ACT_MP_RELOAD_STAND_SECONDARY_END = 0x25f,
	ACT_MP_RELOAD_CROUCH_SECONDARY = 0x260,
	ACT_MP_RELOAD_CROUCH_SECONDARY_LOOP = 0x261,
	ACT_MP_RELOAD_CROUCH_SECONDARY_END = 0x262,
	ACT_MP_RELOAD_SWIM_SECONDARY = 0x263,
	ACT_MP_RELOAD_SWIM_SECONDARY_LOOP = 0x264,
	ACT_MP_RELOAD_SWIM_SECONDARY_END = 0x265,
	ACT_MP_RELOAD_AIRWALK_SECONDARY = 0x266,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_LOOP = 0x267,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_END = 0x268,
	ACT_MP_ATTACK_STAND_GRENADE_SECONDARY = 0x269,
	ACT_MP_ATTACK_CROUCH_GRENADE_SECONDARY = 0x26a,
	ACT_MP_ATTACK_SWIM_GRENADE_SECONDARY = 0x26b,
	ACT_MP_ATTACK_AIRWALK_GRENADE_SECONDARY = 0x26c,
	ACT_MP_STAND_MELEE = 0x26d,
	ACT_MP_CROUCH_MELEE = 0x26e,
	ACT_MP_RUN_MELEE = 0x26f,
	ACT_MP_WALK_MELEE = 0x270,
	ACT_MP_AIRWALK_MELEE = 0x271,
	ACT_MP_CROUCHWALK_MELEE = 0x272,
	ACT_MP_JUMP_MELEE = 0x273,
	ACT_MP_JUMP_START_MELEE = 0x274,
	ACT_MP_JUMP_FLOAT_MELEE = 0x275,
	ACT_MP_JUMP_LAND_MELEE = 0x276,
	ACT_MP_SWIM_MELEE = 0x277,
	ACT_MP_ATTACK_STAND_MELEE = 0x278,
	ACT_MP_ATTACK_STAND_MELEE_SECONDARY = 0x279,
	ACT_MP_ATTACK_CROUCH_MELEE = 0x27a,
	ACT_MP_ATTACK_CROUCH_MELEE_SECONDARY = 0x27b,
	ACT_MP_ATTACK_SWIM_MELEE = 0x27c,
	ACT_MP_ATTACK_AIRWALK_MELEE = 0x27d,
	ACT_MP_ATTACK_STAND_GRENADE_MELEE = 0x27e,
	ACT_MP_ATTACK_CROUCH_GRENADE_MELEE = 0x27f,
	ACT_MP_ATTACK_SWIM_GRENADE_MELEE = 0x280,
	ACT_MP_ATTACK_AIRWALK_GRENADE_MELEE = 0x281,
	ACT_MP_STAND_ITEM1 = 0x282,
	ACT_MP_CROUCH_ITEM1 = 0x283,
	ACT_MP_RUN_ITEM1 = 0x284,
	ACT_MP_WALK_ITEM1 = 0x285,
	ACT_MP_AIRWALK_ITEM1 = 0x286,
	ACT_MP_CROUCHWALK_ITEM1 = 0x287,
	ACT_MP_JUMP_ITEM1 = 0x288,
	ACT_MP_JUMP_START_ITEM1 = 0x289,
	ACT_MP_JUMP_FLOAT_ITEM1 = 0x28a,
	ACT_MP_JUMP_LAND_ITEM1 = 0x28b,
	ACT_MP_SWIM_ITEM1 = 0x28c,
	ACT_MP_ATTACK_STAND_ITEM1 = 0x28d,
	ACT_MP_ATTACK_STAND_ITEM1_SECONDARY = 0x28e,
	ACT_MP_ATTACK_CROUCH_ITEM1 = 0x28f,
	ACT_MP_ATTACK_CROUCH_ITEM1_SECONDARY = 0x290,
	ACT_MP_ATTACK_SWIM_ITEM1 = 0x291,
	ACT_MP_ATTACK_AIRWALK_ITEM1 = 0x292,
	ACT_MP_STAND_ITEM2 = 0x293,
	ACT_MP_CROUCH_ITEM2 = 0x294,
	ACT_MP_RUN_ITEM2 = 0x295,
	ACT_MP_WALK_ITEM2 = 0x296,
	ACT_MP_AIRWALK_ITEM2 = 0x297,
	ACT_MP_CROUCHWALK_ITEM2 = 0x298,
	ACT_MP_JUMP_ITEM2 = 0x299,
	ACT_MP_JUMP_START_ITEM2 = 0x29a,
	ACT_MP_JUMP_FLOAT_ITEM2 = 0x29b,
	ACT_MP_JUMP_LAND_ITEM2 = 0x29c,
	ACT_MP_SWIM_ITEM2 = 0x29d,
	ACT_MP_ATTACK_STAND_ITEM2 = 0x29e,
	ACT_MP_ATTACK_STAND_ITEM2_SECONDARY = 0x29f,
	ACT_MP_ATTACK_CROUCH_ITEM2 = 0x2a0,
	ACT_MP_ATTACK_CROUCH_ITEM2_SECONDARY = 0x2a1,
	ACT_MP_ATTACK_SWIM_ITEM2 = 0x2a2,
	ACT_MP_ATTACK_AIRWALK_ITEM2 = 0x2a3,
	ACT_MP_GESTURE_FLINCH = 0x2a4,
	ACT_MP_GESTURE_FLINCH_PRIMARY = 0x2a5,
	ACT_MP_GESTURE_FLINCH_SECONDARY = 0x2a6,
	ACT_MP_GESTURE_FLINCH_MELEE = 0x2a7,
	ACT_MP_GESTURE_FLINCH_ITEM1 = 0x2a8,
	ACT_MP_GESTURE_FLINCH_ITEM2 = 0x2a9,
	ACT_MP_GESTURE_FLINCH_HEAD = 0x2aa,
	ACT_MP_GESTURE_FLINCH_CHEST = 0x2ab,
	ACT_MP_GESTURE_FLINCH_STOMACH = 0x2ac,
	ACT_MP_GESTURE_FLINCH_LEFTARM = 0x2ad,
	ACT_MP_GESTURE_FLINCH_RIGHTARM = 0x2ae,
	ACT_MP_GESTURE_FLINCH_LEFTLEG = 0x2af,
	ACT_MP_GESTURE_FLINCH_RIGHTLEG = 0x2b0,
	ACT_MP_GRENADE1_DRAW = 0x2b1,
	ACT_MP_GRENADE1_IDLE = 0x2b2,
	ACT_MP_GRENADE1_ATTACK = 0x2b3,
	ACT_MP_GRENADE2_DRAW = 0x2b4,
	ACT_MP_GRENADE2_IDLE = 0x2b5,
	ACT_MP_GRENADE2_ATTACK = 0x2b6,
	ACT_MP_PRIMARY_GRENADE1_DRAW = 0x2b7,
	ACT_MP_PRIMARY_GRENADE1_IDLE = 0x2b8,
	ACT_MP_PRIMARY_GRENADE1_ATTACK = 0x2b9,
	ACT_MP_PRIMARY_GRENADE2_DRAW = 0x2ba,
	ACT_MP_PRIMARY_GRENADE2_IDLE = 0x2bb,
	ACT_MP_PRIMARY_GRENADE2_ATTACK = 0x2bc,
	ACT_MP_SECONDARY_GRENADE1_DRAW = 0x2bd,
	ACT_MP_SECONDARY_GRENADE1_IDLE = 0x2be,
	ACT_MP_SECONDARY_GRENADE1_ATTACK = 0x2bf,
	ACT_MP_SECONDARY_GRENADE2_DRAW = 0x2c0,
	ACT_MP_SECONDARY_GRENADE2_IDLE = 0x2c1,
	ACT_MP_SECONDARY_GRENADE2_ATTACK = 0x2c2,
	ACT_MP_MELEE_GRENADE1_DRAW = 0x2c3,
	ACT_MP_MELEE_GRENADE1_IDLE = 0x2c4,
	ACT_MP_MELEE_GRENADE1_ATTACK = 0x2c5,
	ACT_MP_MELEE_GRENADE2_DRAW = 0x2c6,
	ACT_MP_MELEE_GRENADE2_IDLE = 0x2c7,
	ACT_MP_MELEE_GRENADE2_ATTACK = 0x2c8,
	ACT_MP_ITEM1_GRENADE1_DRAW = 0x2c9,
	ACT_MP_ITEM1_GRENADE1_IDLE = 0x2ca,
	ACT_MP_ITEM1_GRENADE1_ATTACK = 0x2cb,
	ACT_MP_ITEM1_GRENADE2_DRAW = 0x2cc,
	ACT_MP_ITEM1_GRENADE2_IDLE = 0x2cd,
	ACT_MP_ITEM1_GRENADE2_ATTACK = 0x2ce,
	ACT_MP_ITEM2_GRENADE1_DRAW = 0x2cf,
	ACT_MP_ITEM2_GRENADE1_IDLE = 0x2d0,
	ACT_MP_ITEM2_GRENADE1_ATTACK = 0x2d1,
	ACT_MP_ITEM2_GRENADE2_DRAW = 0x2d2,
	ACT_MP_ITEM2_GRENADE2_IDLE = 0x2d3,
	ACT_MP_ITEM2_GRENADE2_ATTACK = 0x2d4,
	ACT_MP_STAND_BUILDING = 0x2d5,
	ACT_MP_CROUCH_BUILDING = 0x2d6,
	ACT_MP_RUN_BUILDING = 0x2d7,
	ACT_MP_WALK_BUILDING = 0x2d8,
	ACT_MP_AIRWALK_BUILDING = 0x2d9,
	ACT_MP_CROUCHWALK_BUILDING = 0x2da,
	ACT_MP_JUMP_BUILDING = 0x2db,
	ACT_MP_JUMP_START_BUILDING = 0x2dc,
	ACT_MP_JUMP_FLOAT_BUILDING = 0x2dd,
	ACT_MP_JUMP_LAND_BUILDING = 0x2de,
	ACT_MP_SWIM_BUILDING = 0x2df,
	ACT_MP_ATTACK_STAND_BUILDING = 0x2e0,
	ACT_MP_ATTACK_CROUCH_BUILDING = 0x2e1,
	ACT_MP_ATTACK_SWIM_BUILDING = 0x2e2,
	ACT_MP_ATTACK_AIRWALK_BUILDING = 0x2e3,
	ACT_MP_ATTACK_STAND_GRENADE_BUILDING = 0x2e4,
	ACT_MP_ATTACK_CROUCH_GRENADE_BUILDING = 0x2e5,
	ACT_MP_ATTACK_SWIM_GRENADE_BUILDING = 0x2e6,
	ACT_MP_ATTACK_AIRWALK_GRENADE_BUILDING = 0x2e7,
	ACT_MP_STAND_PDA = 0x2e8,
	ACT_MP_CROUCH_PDA = 0x2e9,
	ACT_MP_RUN_PDA = 0x2ea,
	ACT_MP_WALK_PDA = 0x2eb,
	ACT_MP_AIRWALK_PDA = 0x2ec,
	ACT_MP_CROUCHWALK_PDA = 0x2ed,
	ACT_MP_JUMP_PDA = 0x2ee,
	ACT_MP_JUMP_START_PDA = 0x2ef,
	ACT_MP_JUMP_FLOAT_PDA = 0x2f0,
	ACT_MP_JUMP_LAND_PDA = 0x2f1,
	ACT_MP_SWIM_PDA = 0x2f2,
	ACT_MP_ATTACK_STAND_PDA = 0x2f3,
	ACT_MP_ATTACK_SWIM_PDA = 0x2f4,
	ACT_MP_GESTURE_VC_HANDMOUTH = 0x2f5,
	ACT_MP_GESTURE_VC_FINGERPOINT = 0x2f6,
	ACT_MP_GESTURE_VC_FISTPUMP = 0x2f7,
	ACT_MP_GESTURE_VC_THUMBSUP = 0x2f8,
	ACT_MP_GESTURE_VC_NODYES = 0x2f9,
	ACT_MP_GESTURE_VC_NODNO = 0x2fa,
	ACT_MP_GESTURE_VC_HANDMOUTH_PRIMARY = 0x2fb,
	ACT_MP_GESTURE_VC_FINGERPOINT_PRIMARY = 0x2fc,
	ACT_MP_GESTURE_VC_FISTPUMP_PRIMARY = 0x2fd,
	ACT_MP_GESTURE_VC_THUMBSUP_PRIMARY = 0x2fe,
	ACT_MP_GESTURE_VC_NODYES_PRIMARY = 0x2ff,
	ACT_MP_GESTURE_VC_NODNO_PRIMARY = 0x300,
	ACT_MP_GESTURE_VC_HANDMOUTH_SECONDARY = 0x301,
	ACT_MP_GESTURE_VC_FINGERPOINT_SECONDARY = 0x302,
	ACT_MP_GESTURE_VC_FISTPUMP_SECONDARY = 0x303,
	ACT_MP_GESTURE_VC_THUMBSUP_SECONDARY = 0x304,
	ACT_MP_GESTURE_VC_NODYES_SECONDARY = 0x305,
	ACT_MP_GESTURE_VC_NODNO_SECONDARY = 0x306,
	ACT_MP_GESTURE_VC_HANDMOUTH_MELEE = 0x307,
	ACT_MP_GESTURE_VC_FINGERPOINT_MELEE = 0x308,
	ACT_MP_GESTURE_VC_FISTPUMP_MELEE = 0x309,
	ACT_MP_GESTURE_VC_THUMBSUP_MELEE = 0x30a,
	ACT_MP_GESTURE_VC_NODYES_MELEE = 0x30b,
	ACT_MP_GESTURE_VC_NODNO_MELEE = 0x30c,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM1 = 0x30d,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM1 = 0x30e,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM1 = 0x30f,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM1 = 0x310,
	ACT_MP_GESTURE_VC_NODYES_ITEM1 = 0x311,
	ACT_MP_GESTURE_VC_NODNO_ITEM1 = 0x312,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM2 = 0x313,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM2 = 0x314,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM2 = 0x315,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM2 = 0x316,
	ACT_MP_GESTURE_VC_NODYES_ITEM2 = 0x317,
	ACT_MP_GESTURE_VC_NODNO_ITEM2 = 0x318,
	ACT_MP_GESTURE_VC_HANDMOUTH_BUILDING = 0x319,
	ACT_MP_GESTURE_VC_FINGERPOINT_BUILDING = 0x31a,
	ACT_MP_GESTURE_VC_FISTPUMP_BUILDING = 0x31b,
	ACT_MP_GESTURE_VC_THUMBSUP_BUILDING = 0x31c,
	ACT_MP_GESTURE_VC_NODYES_BUILDING = 0x31d,
	ACT_MP_GESTURE_VC_NODNO_BUILDING = 0x31e,
	ACT_MP_GESTURE_VC_HANDMOUTH_PDA = 0x31f,
	ACT_MP_GESTURE_VC_FINGERPOINT_PDA = 0x320,
	ACT_MP_GESTURE_VC_FISTPUMP_PDA = 0x321,
	ACT_MP_GESTURE_VC_THUMBSUP_PDA = 0x322,
	ACT_MP_GESTURE_VC_NODYES_PDA = 0x323,
	ACT_MP_GESTURE_VC_NODNO_PDA = 0x324,
	ACT_VM_UNUSABLE = 0x325,
	ACT_VM_UNUSABLE_TO_USABLE = 0x326,
	ACT_VM_USABLE_TO_UNUSABLE = 0x327,
	ACT_PRIMARY_VM_DRAW = 0x328,
	ACT_PRIMARY_VM_HOLSTER = 0x329,
	ACT_PRIMARY_VM_IDLE = 0x32a,
	ACT_PRIMARY_VM_PULLBACK = 0x32b,
	ACT_PRIMARY_VM_PRIMARYATTACK = 0x32c,
	ACT_PRIMARY_VM_SECONDARYATTACK = 0x32d,
	ACT_PRIMARY_VM_RELOAD = 0x32e,
	ACT_PRIMARY_VM_DRYFIRE = 0x32f,
	ACT_PRIMARY_VM_IDLE_TO_LOWERED = 0x330,
	ACT_PRIMARY_VM_IDLE_LOWERED = 0x331,
	ACT_PRIMARY_VM_LOWERED_TO_IDLE = 0x332,
	ACT_SECONDARY_VM_DRAW = 0x333,
	ACT_SECONDARY_VM_HOLSTER = 0x334,
	ACT_SECONDARY_VM_IDLE = 0x335,
	ACT_SECONDARY_VM_PULLBACK = 0x336,
	ACT_SECONDARY_VM_PRIMARYATTACK = 0x337,
	ACT_SECONDARY_VM_SECONDARYATTACK = 0x338,
	ACT_SECONDARY_VM_RELOAD = 0x339,
	ACT_SECONDARY_VM_DRYFIRE = 0x33a,
	ACT_SECONDARY_VM_IDLE_TO_LOWERED = 0x33b,
	ACT_SECONDARY_VM_IDLE_LOWERED = 0x33c,
	ACT_SECONDARY_VM_LOWERED_TO_IDLE = 0x33d,
	ACT_MELEE_VM_DRAW = 0x33e,
	ACT_MELEE_VM_HOLSTER = 0x33f,
	ACT_MELEE_VM_IDLE = 0x340,
	ACT_MELEE_VM_PULLBACK = 0x341,
	ACT_MELEE_VM_PRIMARYATTACK = 0x342,
	ACT_MELEE_VM_SECONDARYATTACK = 0x343,
	ACT_MELEE_VM_RELOAD = 0x344,
	ACT_MELEE_VM_DRYFIRE = 0x345,
	ACT_MELEE_VM_IDLE_TO_LOWERED = 0x346,
	ACT_MELEE_VM_IDLE_LOWERED = 0x347,
	ACT_MELEE_VM_LOWERED_TO_IDLE = 0x348,
	ACT_PDA_VM_DRAW = 0x349,
	ACT_PDA_VM_HOLSTER = 0x34a,
	ACT_PDA_VM_IDLE = 0x34b,
	ACT_PDA_VM_PULLBACK = 0x34c,
	ACT_PDA_VM_PRIMARYATTACK = 0x34d,
	ACT_PDA_VM_SECONDARYATTACK = 0x34e,
	ACT_PDA_VM_RELOAD = 0x34f,
	ACT_PDA_VM_DRYFIRE = 0x350,
	ACT_PDA_VM_IDLE_TO_LOWERED = 0x351,
	ACT_PDA_VM_IDLE_LOWERED = 0x352,
	ACT_PDA_VM_LOWERED_TO_IDLE = 0x353,
	ACT_ITEM1_VM_DRAW = 0x354,
	ACT_ITEM1_VM_HOLSTER = 0x355,
	ACT_ITEM1_VM_IDLE = 0x356,
	ACT_ITEM1_VM_PULLBACK = 0x357,
	ACT_ITEM1_VM_PRIMARYATTACK = 0x358,
	ACT_ITEM1_VM_SECONDARYATTACK = 0x359,
	ACT_ITEM1_VM_RELOAD = 0x35a,
	ACT_ITEM1_VM_DRYFIRE = 0x35b,
	ACT_ITEM1_VM_IDLE_TO_LOWERED = 0x35c,
	ACT_ITEM1_VM_IDLE_LOWERED = 0x35d,
	ACT_ITEM1_VM_LOWERED_TO_IDLE = 0x35e,
	ACT_ITEM2_VM_DRAW = 0x35f,
	ACT_ITEM2_VM_HOLSTER = 0x360,
	ACT_ITEM2_VM_IDLE = 0x361,
	ACT_ITEM2_VM_PULLBACK = 0x362,
	ACT_ITEM2_VM_PRIMARYATTACK = 0x363,
	ACT_ITEM2_VM_SECONDARYATTACK = 0x364,
	ACT_ITEM2_VM_RELOAD = 0x365,
	ACT_ITEM2_VM_DRYFIRE = 0x366,
	ACT_ITEM2_VM_IDLE_TO_LOWERED = 0x367,
	ACT_ITEM2_VM_IDLE_LOWERED = 0x368,
	ACT_ITEM2_VM_LOWERED_TO_IDLE = 0x369,
	ACT_RELOAD_SUCCEED = 0x36a,
	ACT_RELOAD_FAIL = 0x36b,
	ACT_WALK_AIM_AUTOGUN = 0x36c,
	ACT_RUN_AIM_AUTOGUN = 0x36d,
	ACT_IDLE_AUTOGUN = 0x36e,
	ACT_IDLE_AIM_AUTOGUN = 0x36f,
	ACT_RELOAD_AUTOGUN = 0x370,
	ACT_CROUCH_IDLE_AUTOGUN = 0x371,
	ACT_RANGE_ATTACK_AUTOGUN = 0x372,
	ACT_JUMP_AUTOGUN = 0x373,
	ACT_IDLE_AIM_PISTOL = 0x374,
	ACT_WALK_AIM_DUAL = 0x375,
	ACT_RUN_AIM_DUAL = 0x376,
	ACT_IDLE_DUAL = 0x377,
	ACT_IDLE_AIM_DUAL = 0x378,
	ACT_RELOAD_DUAL = 0x379,
	ACT_CROUCH_IDLE_DUAL = 0x37a,
	ACT_RANGE_ATTACK_DUAL = 0x37b,
	ACT_JUMP_DUAL = 0x37c,
	ACT_IDLE_AIM_SHOTGUN = 0x37d,
	ACT_CROUCH_IDLE_SHOTGUN = 0x37e,
	ACT_IDLE_AIM_RIFLE = 0x37f,
	ACT_CROUCH_IDLE_RIFLE = 0x380,
	ACT_RANGE_ATTACK_RIFLE = 0x381,
	ACT_SLEEP = 0x382,
	ACT_WAKE = 0x383,
	ACT_FLICK_LEFT = 0x384,
	ACT_FLICK_LEFT_MIDDLE = 0x385,
	ACT_FLICK_RIGHT_MIDDLE = 0x386,
	ACT_FLICK_RIGHT = 0x387,
	ACT_SPINAROUND = 0x388,
	ACT_PREP_TO_FIRE = 0x389,
	ACT_FIRE = 0x38a,
	ACT_FIRE_RECOVER = 0x38b,
	ACT_SPRAY = 0x38c,
	ACT_PREP_EXPLODE = 0x38d,
	ACT_EXPLODE = 0x38e,
	ACT_SCRIPT_CUSTOM_0 = 0x38f,
	ACT_SCRIPT_CUSTOM_1 = 0x390,
	ACT_SCRIPT_CUSTOM_2 = 0x391,
	ACT_SCRIPT_CUSTOM_3 = 0x392,
	ACT_SCRIPT_CUSTOM_4 = 0x393,
	ACT_SCRIPT_CUSTOM_5 = 0x394,
	ACT_SCRIPT_CUSTOM_6 = 0x395,
	ACT_SCRIPT_CUSTOM_7 = 0x396,
	ACT_SCRIPT_CUSTOM_8 = 0x397,
	ACT_SCRIPT_CUSTOM_9 = 0x398,
	ACT_SCRIPT_CUSTOM_10 = 0x399,
	ACT_SCRIPT_CUSTOM_11 = 0x39a,
	ACT_SCRIPT_CUSTOM_12 = 0x39b,
	ACT_SCRIPT_CUSTOM_13 = 0x39c,
	ACT_SCRIPT_CUSTOM_14 = 0x39d,
	ACT_SCRIPT_CUSTOM_15 = 0x39e,
	ACT_SCRIPT_CUSTOM_16 = 0x39f,
	ACT_SCRIPT_CUSTOM_17 = 0x3a0,
	ACT_SCRIPT_CUSTOM_18 = 0x3a1,
	ACT_SCRIPT_CUSTOM_19 = 0x3a2,
	ACT_SCRIPT_CUSTOM_20 = 0x3a3,
	ACT_SCRIPT_CUSTOM_21 = 0x3a4,
	ACT_SCRIPT_CUSTOM_22 = 0x3a5,
	ACT_SCRIPT_CUSTOM_23 = 0x3a6,
	ACT_SCRIPT_CUSTOM_24 = 0x3a7,
	ACT_SCRIPT_CUSTOM_25 = 0x3a8,
	ACT_SCRIPT_CUSTOM_26 = 0x3a9,
	ACT_SCRIPT_CUSTOM_27 = 0x3aa,
	ACT_SCRIPT_CUSTOM_28 = 0x3ab,
	ACT_SCRIPT_CUSTOM_29 = 0x3ac,
	ACT_SCRIPT_CUSTOM_30 = 0x3ad,
	ACT_SCRIPT_CUSTOM_31 = 0x3ae,
	ACT_VR_PISTOL_LAST_SHOT = 0x3af,
	ACT_VR_PISTOL_SLIDE_RELEASE = 0x3b0,
	ACT_VR_PISTOL_CLIP_OUT_CHAMBERED = 0x3b1,
	ACT_VR_PISTOL_CLIP_OUT_SLIDE_BACK = 0x3b2,
	ACT_VR_PISTOL_CLIP_IN_CHAMBERED = 0x3b3,
	ACT_VR_PISTOL_CLIP_IN_SLIDE_BACK = 0x3b4,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK = 0x3b5,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK_CLIP_READY = 0x3b6,
	ACT_RAGDOLL_RECOVERY_FRONT = 0x3b7,
	ACT_RAGDOLL_RECOVERY_BACK = 0x3b8,
	ACT_RAGDOLL_RECOVERY_LEFT = 0x3b9,
	ACT_RAGDOLL_RECOVERY_RIGHT = 0x3ba,
	ACT_GRABBITYGLOVES_GRAB = 0x3bb,
	ACT_GRABBITYGLOVES_RELEASE = 0x3bc,
	ACT_GRABBITYGLOVES_GRAB_IDLE = 0x3bd,
	ACT_GRABBITYGLOVES_ACTIVE = 0x3be,
	ACT_GRABBITYGLOVES_ACTIVE_IDLE = 0x3bf,
	ACT_GRABBITYGLOVES_DEACTIVATE = 0x3c0,
	ACT_GRABBITYGLOVES_PULL = 0x3c1,
	ACT_HEADCRAB_SMOKE_BOMB = 0x3c2,
	ACT_HEADCRAB_SPIT = 0x3c3,
	ACT_ZOMBIE_TRIP = 0x3c4,
	ACT_ZOMBIE_LUNGE = 0x3c5,
	ACT_NEUTRAL_REF_POSE = 0x3c6,
	ACT_ANTLION_SCUTTLE_FORWARD = 0x3c7,
	ACT_ANTLION_SCUTTLE_BACK = 0x3c8,
	ACT_ANTLION_SCUTTLE_LEFT = 0x3c9,
	ACT_ANTLION_SCUTTLE_RIGHT = 0x3ca,
	ACT_VR_PISTOL_EMPTY_CLIP_IN_SLIDE_BACK = 0x3cb,
	ACT_VR_SHOTGUN_IDLE = 0x3cc,
	ACT_VR_SHOTGUN_OPEN_CHAMBER = 0x3cd,
	ACT_VR_SHOTGUN_RELOAD_1 = 0x3ce,
	ACT_VR_SHOTGUN_RELOAD_2 = 0x3cf,
	ACT_VR_SHOTGUN_RELOAD_3 = 0x3d0,
	ACT_VR_SHOTGUN_CLOSE_CHAMBER = 0x3d1,
	ACT_VR_SHOTGUN_TRIGGER_SQUEEZE = 0x3d2,
	ACT_VR_SHOTGUN_SHOOT = 0x3d3,
	ACT_VR_SHOTGUN_SLIDE_BACK = 0x3d4,
	ACT_VR_SHOTGUN_SLIDE_FORWARD = 0x3d5,
	ACT_VR_PISTOL_LONG_CLIP_IN_CHAMBERED = 0x3d6,
	ACT_VR_PISTOL_LONG_CLIP_IN_SLIDE_BACK = 0x3d7,
	ACT_VR_PISTOL_BURST_TOGGLE = 0x3d8,
	ACT_VR_PISTOL_LOW_KICK = 0x3d9,
	ACT_VR_PISTOL_BURST_ATTACK = 0x3da,
	ACT_VR_SHOTGUN_GRENADE_TWIST = 0x3db,
	ACT_DIE_STAND = 0x3dc,
	ACT_DIE_STAND_HEADSHOT = 0x3dd,
	ACT_DIE_CROUCH = 0x3de,
	ACT_DIE_CROUCH_HEADSHOT = 0x3df,
	ACT_CSGO_NULL = 0x3e0,
	ACT_CSGO_DEFUSE = 0x3e1,
	ACT_CSGO_DEFUSE_WITH_KIT = 0x3e2,
	ACT_CSGO_FLASHBANG_REACTION = 0x3e3,
	ACT_CSGO_FIRE_PRIMARY = 0x3e4,
	ACT_CSGO_FIRE_PRIMARY_OPT_1 = 0x3e5,
	ACT_CSGO_FIRE_PRIMARY_OPT_2 = 0x3e6,
	ACT_CSGO_FIRE_SECONDARY = 0x3e7,
	ACT_CSGO_FIRE_SECONDARY_OPT_1 = 0x3e8,
	ACT_CSGO_FIRE_SECONDARY_OPT_2 = 0x3e9,
	ACT_CSGO_RELOAD = 0x3ea,
	ACT_CSGO_RELOAD_START = 0x3eb,
	ACT_CSGO_RELOAD_LOOP = 0x3ec,
	ACT_CSGO_RELOAD_END = 0x3ed,
	ACT_CSGO_OPERATE = 0x3ee,
	ACT_CSGO_DEPLOY = 0x3ef,
	ACT_CSGO_CATCH = 0x3f0,
	ACT_CSGO_SILENCER_DETACH = 0x3f1,
	ACT_CSGO_SILENCER_ATTACH = 0x3f2,
	ACT_CSGO_TWITCH = 0x3f3,
	ACT_CSGO_TWITCH_BUYZONE = 0x3f4,
	ACT_CSGO_PLANT_BOMB = 0x3f5,
	ACT_CSGO_IDLE_TURN_BALANCEADJUST = 0x3f6,
	ACT_CSGO_IDLE_ADJUST_STOPPEDMOVING = 0x3f7,
	ACT_CSGO_ALIVE_LOOP = 0x3f8,
	ACT_CSGO_FLINCH = 0x3f9,
	ACT_CSGO_FLINCH_HEAD = 0x3fa,
	ACT_CSGO_FLINCH_MOLOTOV = 0x3fb,
	ACT_CSGO_JUMP = 0x3fc,
	ACT_CSGO_FALL = 0x3fd,
	ACT_CSGO_CLIMB_LADDER = 0x3fe,
	ACT_CSGO_LAND_LIGHT = 0x3ff,
	ACT_CSGO_LAND_HEAVY = 0x400,
	ACT_CSGO_EXIT_LADDER_TOP = 0x401,
	ACT_CSGO_EXIT_LADDER_BOTTOM = 0x402,
	ACT_CSGO_PARACHUTE = 0x403,
	ACT_CSGO_TAUNT = 0x404,
};

// Alignment: 4
// Size: 0x5
enum class LifeState_t : uint32_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
};

// Alignment: 1
// Size: 0x9
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0x0,
	USE_BEST_COLLISION_BOUNDS = 0x1,
	USE_HITBOXES = 0x2,
	USE_SPECIFIED_BOUNDS = 0x3,
	USE_GAME_CODE = 0x4,
	USE_ROTATION_EXPANDED_BOUNDS = 0x5,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x6,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x7,
	SURROUNDING_TYPE_BIT_COUNT = 0x3,
};

// Alignment: 1
// Size: 0x2
enum class ShatterPanelMode : uint8_t
{
	SHATTER_GLASS = 0x0,
	SHATTER_DRYWALL = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class TestHullMode_t : uint32_t
{
	TEST_HULL_EVER_PASSABLE = 0x0,
	TEST_HULL_CURRENTLY_PASSABLE = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class DesiredWeaponState_t : uint32_t
{
	DESIREDWEAPONSTATE_IGNORE = 0x0,
	DESIREDWEAPONSTATE_HOLSTERED = 0x1,
	DESIREDWEAPONSTATE_HOLSTERED_DESTROYED = 0x2,
	DESIREDWEAPONSTATE_UNHOLSTERED = 0x3,
};

// Alignment: 1
// Size: 0x9
enum class ItemFlagTypes_t : uint8_t
{
	ITEM_FLAG_NONE = 0x0,
	ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 0x1,
	ITEM_FLAG_NOAUTORELOAD = 0x2,
	ITEM_FLAG_NOAUTOSWITCHEMPTY = 0x4,
	ITEM_FLAG_LIMITINWORLD = 0x8,
	ITEM_FLAG_EXHAUSTIBLE = 0x10,
	ITEM_FLAG_DOHITLOCATIONDMG = 0x20,
	ITEM_FLAG_NOAMMOPICKUPS = 0x40,
	ITEM_FLAG_NOITEMPICKUP = 0x80,
};

// Alignment: 4
// Size: 0x6
enum class ApplianceWeaponState : uint32_t
{
	APPLIANCE_WEAPON_CLOSED = 0x0,
	APPLIANCE_WEAPON_OPENING = 0x1,
	APPLIANCE_WEAPON_READY_TO_ATTACK = 0x2,
	APPLIANCE_WEAPON_ATTACKING = 0x3,
	APPLIANCE_WEAPON_STUNNED = 0x4,
	APPLIANCE_WEAPON_CLOSING = 0x5,
};

// Alignment: 4
// Size: 0x4
enum class TrainOrientationType_t : uint32_t
{
	TrainOrientation_Fixed = 0x0,
	TrainOrientation_AtPathTracks = 0x1,
	TrainOrientation_LinearBlend = 0x2,
	TrainOrientation_EaseInEaseOut = 0x3,
};

// Alignment: 4
// Size: 0x5
enum class EModifierPriority : uint32_t
{
	MODIFIER_PRIORITY_LOW = 0x0,
	MODIFIER_PRIORITY_NORMAL = 0x1,
	MODIFIER_PRIORITY_HIGH = 0x2,
	MODIFIER_PRIORITY_ULTRA = 0x3,
	MODIFIER_PRIORITY_SUPER_ULTRA = 0x4,
};

// Alignment: 4
// Size: 0x7
enum class GoalType_t : uint32_t
{
	GOALTYPE_NONE = 0x0,
	GOALTYPE_ENTITY = 0x1,
	GOALTYPE_PATHCORNER = 0x2,
	GOALTYPE_LOCATION = 0x3,
	GOALTYPE_COVER = 0x4,
	GOALTYPE_LOS = 0x5,
	GOALTYPE_INVALID = 0x6,
};

// Alignment: 4
// Size: 0x3
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
};

// Alignment: 4
// Size: 0xb
enum class EModifierState : uint32_t
{
	MODIFIER_STATE_MATERIAL_OVERRIDE = 0x0,
	MODIFIER_STATE_INVULNERABLE = 0x1,
	MODIFIER_STATE_BLIND = 0x2,
	MODIFIER_STATE_INVISIBLE = 0x3,
	MODIFIER_STATE_STUNNED = 0x4,
	MODIFIER_STATE_IMMUNE_TO_STUN = 0x5,
	MODIFIER_STATE_ROOTED = 0x6,
	MODIFIER_STATE_DISARMED = 0x7,
	MODIFIER_STATE_RAGDOLL_DAMAGE = 0x8,
	MODIFIER_STATE_COUNT = 0x9,
	MODIFIER_STATE_INVALID = 0xff,
};

// Alignment: 4
// Size: 0x4
enum class ModifierSoundRecipients_t : uint32_t
{
	MODIFIER_SOUND_RECIPIENT_ALWAYS = 0x0,
	MODIFIER_SOUND_RECIPIENT_PARENT_IS_LOCAL_PLAYER = 0x1,
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_SAME_TEAM_AS_LOCAL_PLAYER = 0x2,
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_OPPOSITE_TEAM_AS_LOCAL_PLAYER = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class Explosions : uint32_t
{
	expRandom = 0x0,
	expDirected = 0x1,
	expUsePrecise = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class StanceType_t : uint32_t
{
	STANCE_CURRENT = 0xffffffffffffffff,
	STANCE_DEFAULT = 0x0,
	STANCE_CROUCHING = 0x1,
	NUM_STANCES = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class SubclassVDataChangeType_t : uint32_t
{
	SUBCLASS_VDATA_CREATED = 0x0,
	SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
	SUBCLASS_VDATA_RELOADED = 0x2,
};

// Alignment: 4
// Size: 0x8
enum class eDryEraseMarkerType : uint32_t
{
	k_DRY_ERASE_MARKER_ROUND_TIP = 0x0,
	k_DRY_ERASE_MARKER_CHISEL_TIP = 0x1,
	k_DRY_ERASE_MARKER_CHALK = 0x2,
	k_DRY_ERASE_MARKER_DIRTY = 0x3,
	k_DRY_ERASE_MARKER_DRIED_OUT = 0x4,
	k_DRY_ERASE_MARKER_ERASER = 0x5,
	k_DRY_ERASE_MARKER_HAND_ERASER = 0x6,
	k_DRY_ERASE_MARKER_COUNT = 0x7,
};

// Alignment: 4
// Size: 0x2
enum class EAIScheduleFlags : uint32_t
{
	SCHEDULE_FLAGS_NONE = 0x0,
	SCHEDULE_FLAGS_ABILITY = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class DeskDeployButtonGroups_t : uint32_t
{
	DESK_DEPLOY_BUTTON_GROUP_MICS = 0x0,
	DESK_DEPLOY_BUTTON_GROUP_STICKS = 0x1,
	DESK_DEPLOY_BUTTON_GROUP_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x5
enum class TimelineCompression_t : uint32_t
{
	TIMELINE_COMPRESSION_SUM = 0x0,
	TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
	TIMELINE_COMPRESSION_AVERAGE = 0x2,
	TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
	TIMELINE_COMPRESSION_TOTAL = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class LessonPanelLayoutFileTypes_t : uint32_t
{
	LAYOUT_HAND_DEFAULT = 0x0,
	LAYOUT_WORLD_DEFAULT = 0x1,
	LAYOUT_CUSTOM = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Alignment: 4
// Size: 0x3
enum class PropDoorRotatingOpenDirection_e : uint32_t
{
	DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
	DOOR_ROTATING_OPEN_FORWARD = 0x1,
	DOOR_ROTATING_OPEN_BACKWARD = 0x2,
};

// Alignment: 4
// Size: 0xe
enum class EStyleNodeType : uint32_t
{
	ROOT = 0x0,
	EXPRESSION = 0x1,
	PROPERTY = 0x2,
	DEFINE = 0x3,
	IMPORT = 0x4,
	KEYFRAMES = 0x5,
	SELECTOR = 0x6,
	WHITESPACE = 0x7,
	EXPRESSION_TEXT = 0x8,
	EXPRESSION_URL = 0x9,
	EXPRESSION_CONCAT = 0xa,
	REFERENCE_CONTENT = 0xb,
	REFERENCE_COMPILED = 0xc,
	REFERENCE_PASSTHROUGH = 0xd,
};

// Alignment: 4
// Size: 0xd
enum class ELayoutNodeType : uint32_t
{
	ROOT = 0x0,
	STYLES = 0x1,
	SCRIPT_BODY = 0x2,
	SCRIPTS = 0x3,
	SNIPPETS = 0x4,
	INCLUDE = 0x5,
	SNIPPET = 0x6,
	PANEL = 0x7,
	PANEL_ATTRIBUTE = 0x8,
	PANEL_ATTRIBUTE_VALUE = 0x9,
	REFERENCE_CONTENT = 0xa,
	REFERENCE_COMPILED = 0xb,
	REFERENCE_PASSTHROUGH = 0xc,
};

struct EngineLoopState_t;
struct CEntityComponentHelper;
struct ChangeAccessorFieldPathIndex_t;
struct EntComponentInfo_t;
struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct PostProcessingLocalContrastParameters_t;
struct CAnimUpdateNodeRef;
struct AnimTagID;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct CAnimNodeConnection;
struct CAnimInputDamping;
struct CSeqAutoLayerFlag;
struct AnimParamID;
struct AnimScriptHandle;
struct CAnimAttachment;
struct CAnimParamHandle;
struct VPhysics2ShapeDef_t;
struct TwoBoneIKSettings_t;
struct IKBoneNameAndIndex_t;
struct CAnimGraphSettingsManager;
struct CAnimNodePath;
struct CSeqSeqDescFlag;
struct CSeqTransition;
struct SolveIKChainPoseOpFixedSettings_t;
struct AnimStateID;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct CAnimNodeManager;
struct HSequence;
struct SkeletonBoneBounds_t;
struct CRenderSkeleton;
struct CSeqMultiFetch;
struct CMotionDataSet;
struct CBlendCurve;
struct AnimNodeOutputID;
struct AnimComponentID;
struct CAnimKeyData;
struct CAnimRetargetData;
struct CSeqMultiFetchFlag;
struct CAnimComponentManager;
struct CAnimCycle;
struct CFootCycle;
struct CompValues;
struct AnimNodeID;
struct CFootCycleDefinition;
struct CFootTrajectories;
struct FollowAttachmentSettings_t;
struct CRangeFloat;
struct LookAtOpFixedSettings_t;
struct HitReactFixedSettings_t;
struct SkeletalInputOpFixedSettings_t;
struct AimMatrixOpFixedSettings_t;
struct CAnimStateMachineUpdater;
struct PermModelInfo_t;
struct ModelSkeletonData_t;
struct CModelConfigList;
struct ClipIndex;
struct JiggleBoneSettingsList_t;
struct FootLockPoseOpFixedSettings;
struct CPhysSurfacePropertiesPhysics;
struct CPhysSurfacePropertiesSoundNames;
struct CPhysSurfacePropertiesAudio;
struct AnimationDecodeDebugDumpElement_t;
struct VPhysXConstraintParams_t;
struct CAnimClipDataManager;
struct CRenderBufferBinding;
struct StaticPoseCacheHandle;
struct StateComparisonValue;
struct PhysFeModelDesc_t;
struct TraceSettings_t;
struct VPhysXRange_t;
struct CAnimEncodeDifference;
struct FourVectors2D;
struct AABB_t;
struct CRegionSVM;
struct RnPlane_t;
struct RnHull_t;
struct FourQuaternions;
struct CFeJiggleBone;
struct constraint_axislimit_t;
struct constraint_breakableparams_t;
struct RnMesh_t;
struct RnSphere_t;
struct RnCapsule_t;
struct VMixFilterDesc_t;
struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
struct SceneViewId_t;
struct voxel_vis_cluster_t;
struct WorldBuilderParams_t;
struct BakedLightingInfo_t;
struct ParticleAttributeIndex_t;
struct CParticleCollectionVecInput;
struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct CPerParticleVecInput;
struct ParticlePreviewState_t;
struct CPiecewiseCurveSchemaWrapper;
struct TextureControls_t;
struct CPathParameters;
struct ControlPointReference_t;
struct CParticleVisibilityInputs;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CParticleFloatInput;
struct CSimTimer;
struct AttachmentHandle_t;
struct CResponseCriteriaSet;
struct CRR_Response;
struct CTakeDamageInfo;
struct CBaseAnimating;
struct BodyLocationListVData_t;
struct AI_StandoffParams_t;
struct CAI_MoveMonitor;
struct CRandSimTimer;
struct ModifierRenderAttribute_t;
struct ResponseFollowup;
struct AIScheduleState_t;
struct AmmoIndex_t;
struct ResponseParams;
struct CTakeDamageResult;
struct CRandStopwatch;
struct CSimpleSimTimer;
struct CSoundEnvelope;
struct CCopyRecipientFilter;
struct CFourWheelServerVehicle;
struct vehicle_controlparams_t;
struct ConditionId_t;
struct CNetworkVarChainer;
struct CSteamPal_Ultra_Toilet_Gun_VData_t;
struct CRangeInt;
struct CAI_BehaviorBase;
struct CBaseEntity;
struct vehiclesounds_t;
struct AI_FreePassParams_t;
struct CAI_DefaultNPC;
struct VelocitySampler;
struct SimpleConstraintSoundProfile;
struct LastIncomingHit_t;
struct ModifierTrackedSound_t;
struct CBaseFlex;
struct CSkeletonInstance;
struct CModifierLevelFloat;
struct ViewSmoothingData_t;
struct AbilityLOSResult_t;
struct CAI_ScheduleBits;
struct ModifierTrackedBodyGroup_t;
struct CSkillFloat;
struct ParticleIndex_t;
struct ModifierTrackedGraphParameter_t;
struct ragdoll_t;
struct ViewLockData_t;
struct ModifierTrackedParticle_t;
struct C_BaseAnimating;
struct C_FireSmoke;
struct CDecalInfo;

// Alignment: 2
// Size: 0x8
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0	
	int32_t m_nExample2; // 0x4	
};

// Alignment: 1
// Size: 0x8
struct ResourceId_t
{
public:
	uint64_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 1
// Size: 0x10
class CExampleSchemaVData_PolymorphicBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nBase; // 0x8	
};

// Alignment: 1
// Size: 0x18
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10	
};

// Alignment: 1
// Size: 0x18
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10	
};

// Alignment: 22
// Size: 0x180
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0	
	Vector m_Vector; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	VectorAligned m_VectorAligned; // 0x20	
	QuaternionAligned m_QuaternionAligned; // 0x30	
	QAngle m_QAngle; // 0x40	
	RotationVector m_RotationVector; // 0x4c	
	RadianEuler m_RadianEuler; // 0x58	
	DegreeEuler m_DegreeEuler; // 0x64	
	Quaternion m_Quaternion; // 0x70	
	matrix3x4_t m_matrix3x4_t; // 0x80	
	matrix3x4a_t m_matrix3x4a_t; // 0xb0	
	Color m_Color; // 0xe0	
	Vector4D m_Vector4D; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00f4[0xc]; // 0xf4
public:
	CTransform m_CTransform; // 0x100	
	KeyValues* m_pKeyValues; // 0x120	
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128	
	CUtlString m_CUtlString; // 0x140	
	CUtlSymbol m_CUtlSymbol; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014a[0x2]; // 0x14a
public:
	CUtlStringToken m_stringToken; // 0x14c	
	CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150	
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168	
	KeyValues3 m_KV3; // 0x170	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCResourceManifestInternal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDOTAPatchNotesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCEntityLump
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x10
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCModel
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVDataResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaDynamicImages
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIVectorGraphic
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIMaterial2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVMixListResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCCompositeMaterialKit
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCSmartProp
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCWorldNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaStyle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDACGameDefsData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundEventScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVSound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaLayout
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x40
class FourQuaternions
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
	fltx4 z; // 0x20	
	fltx4 w; // 0x30	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIParticleSnapshot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPostProcessingResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x18
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeProceduralTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeWorld_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPhysAggregateData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x8
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIAnimGraphModelBinding
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeManifestTestResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCVSoundStackScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCPanoramaScript
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCChoreoSceneFileData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCDotaItemDefinitionResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 7
// Size: 0x38
struct RenderInputLayoutField_t
{
public:
	uint8_t m_pSemanticName[32]; // 0x0	
	int32_t m_nSemanticIndex; // 0x20	
	uint32_t m_Format; // 0x24	
	int32_t m_nOffset; // 0x28	
	int32_t m_nSlot; // 0x2c	
	RenderSlotType_t m_nSlotType; // 0x30	
	int32_t m_nInstanceStepRate; // 0x34	
};

// Alignment: 1
// Size: 0x18
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0	
};

// Alignment: 4
// Size: 0xc4
struct VsInputSignatureElement_t
{
public:
	char m_pName[64]; // 0x0	
	char m_pSemantic[64]; // 0x40	
	char m_pD3DSemanticName[64]; // 0x80	
	int32_t m_nD3DSemanticIndex; // 0xc0	
};

// Alignment: 4
// Size: 0x28
struct EngineLoopState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	int32_t m_nPlatWindowWidth; // 0x18	
	int32_t m_nPlatWindowHeight; // 0x1c	
	int32_t m_nRenderWidth; // 0x20	
	int32_t m_nRenderHeight; // 0x24	
};

// Alignment: 3
// Size: 0x30
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	bool m_bFirstTick; // 0x28	
	bool m_bLastTick; // 0x29	
};

// Alignment: 1
// Size: 0x4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0	
};

// Alignment: 3
// Size: 0x30
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 8
// Size: 0x78
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
private:
	[[maybe_unused]] uint8_t __pad0038[0x38]; // 0x38
public:
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70	
};

// Alignment: 0
// Size: 0x8
class CEmptyEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x10
struct EntOutput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No members available
};

// Alignment: 8
// Size: 0x60
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	int32_t m_nClientOutputFrames; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	double m_flRealTime; // 0x30	
	double m_flRenderTime; // 0x38	
	double m_flRenderFrameTime; // 0x40	
	double m_flRenderFrameTimeUnbounded; // 0x48	
	double m_flRenderFrameTimeUnscaled; // 0x50	
	double m_flTickRemainder; // 0x58	
};

// Alignment: 4
// Size: 0x40
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nCurrentTickThisFrame; // 0x34	
	int32_t m_nTotalTicksThisFrame; // 0x38	
	int32_t m_nTotalTicks; // 0x3c	
};

// Alignment: 0
// Size: 0x1
struct EventClientSendInput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 3
// Size: 0x30
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 5
// Size: 0x48
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	double m_flRenderFrameTime; // 0x30	
	double m_flRenderFrameTimeUnbounded; // 0x38	
	bool m_bRenderOnly; // 0x40	
};

// Alignment: 0
// Size: 0x1
struct EventModInitialized_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CVariantDefaultAllocator
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x40
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nCurrentTickThisFrame; // 0x34	
	int32_t m_nTotalTicksThisFrame; // 0x38	
	int32_t m_nTotalTicks; // 0x3c	
};

// Alignment: 0
// Size: 0x1
struct EventSplitScreenStateChanged_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
struct EventServerAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct EventClientProcessNetworking_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class IHandleEntity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct EventProfileStorageAvailable_t
{
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x0	
};

// Alignment: 0
// Size: 0x40
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
struct EventServerSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0	
};

// Alignment: 3
// Size: 0x30
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 0
// Size: 0x1
struct EventClientPredictionPostNetupdate_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
struct EventPreDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0	
};

// Alignment: 3
// Size: 0x30
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	uint32_t m_nVRDisplayID; // 0x2c	
};

// Alignment: 5
// Size: 0x40
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	float m_flRenderFrameTime; // 0x30	
	float m_flRenderFrameTimeUnbounded; // 0x34	
	bool m_bRenderOnly; // 0x38	
};

// Alignment: 0
// Size: 0x30
struct EventClientSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0	
};

// Alignment: 0
// Size: 0x30
struct EntInput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
struct EventClientAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x28
class CEntityComponentHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint32_t m_flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	EntComponentInfo_t* m_pInfo; // 0x10	
	int32_t m_nPriority; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CEntityComponentHelper* m_pNext; // 0x20	
};

// Alignment: 0
// Size: 0x30
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x38
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRenderTime; // 0x28	
	float m_flRealTime; // 0x2c	
	float m_flRenderFrameTimeUnbounded; // 0x30	
	bool m_bRenderOnly; // 0x34	
};

// Alignment: 1
// Size: 0x1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0	
};

// Alignment: 1
// Size: 0x28
class CEntityIOOutput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18	
};

// Alignment: 0
// Size: 0x40
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x30
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Alignment: 0
// Size: 0x30
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x8
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0	
};

// Alignment: 1
// Size: 0x10
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8	
};

// Alignment: 10
// Size: 0x70
struct PostProcessingBloomParameters_t
{
public:
	BloomBlendMode_t m_blendMode; // 0x0	
	float m_flBloomStrength; // 0x4	
	float m_flScreenBloomStrength; // 0x8	
	float m_flBlurBloomStrength; // 0xc	
	float m_flBloomThreshold; // 0x10	
	float m_flBloomThresholdWidth; // 0x14	
	float m_flSkyboxBloomStrength; // 0x18	
	float m_flBloomStartValue; // 0x1c	
	float m_flBlurWeight[5]; // 0x20	
	Vector m_vBlurTint[5]; // 0x34	
};

// Alignment: 14
// Size: 0x130
struct MaterialResourceData_t
{
public:
	CUtlString m_materialName; // 0x0	
	CUtlString m_shaderName; // 0x8	
	CUtlVector< MaterialParamInt_t > m_intParams; // 0x10	
	CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28	
	CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40	
	CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58	
	CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70	
	CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88	
	CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xa0	
	CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xb8	
	CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xd0	
	CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xe8	
	CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100	
	CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118	
};

// Alignment: 1
// Size: 0x20
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8	
};

// Alignment: 8
// Size: 0x20
struct PostProcessingTonemapParameters_t
{
public:
	float m_flExposureBias; // 0x0	
	float m_flShoulderStrength; // 0x4	
	float m_flLinearStrength; // 0x8	
	float m_flLinearAngle; // 0xc	
	float m_flToeStrength; // 0x10	
	float m_flToeNum; // 0x14	
	float m_flToeDenom; // 0x18	
	float m_flWhitePoint; // 0x1c	
};

// Alignment: 5
// Size: 0x14
struct PostProcessingLocalContrastParameters_t
{
public:
	float m_flLocalContrastStrength; // 0x0	
	float m_flLocalContrastEdgeStrength; // 0x4	
	float m_flLocalContrastVignetteStart; // 0x8	
	float m_flLocalContrastVignetteEnd; // 0xc	
	float m_flLocalContrastVignetteBlur; // 0x10	
};

// Alignment: 6
// Size: 0x24
struct PostProcessingVignetteParameters_t
{
public:
	float m_flVignetteStrength; // 0x0	
	Vector2D m_vCenter; // 0x4	
	float m_flRadius; // 0xc	
	float m_flRoundness; // 0x10	
	float m_flFeather; // 0x14	
	Vector m_vColorTint; // 0x18	
};

// Alignment: 1
// Size: 0x10
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8	
};

// Alignment: 11
// Size: 0x100
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0	
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4	
	bool m_bHasBloomParams; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	PostProcessingBloomParameters_t m_bloomParams; // 0x28	
	bool m_bHasVignetteParams; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	PostProcessingVignetteParameters_t m_vignetteParams; // 0x9c	
	bool m_bHasLocalContrastParams; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xc4	
	int32_t m_nColorCorrectionVolumeDim; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00dc[0x4]; // 0xdc
public:
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xe0	
	bool m_bHasColorCorrection; // 0xf8	
};

// Alignment: 1
// Size: 0x10
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8	
};

// Alignment: 1
// Size: 0x18
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8	
};

// Alignment: 1
// Size: 0x10
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8	
};

// Alignment: 1
// Size: 0x18
class CNetworkVarChainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x10	
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

// Alignment: 2
// Size: 0x30
class CAnimNodePath
{
public:
	AnimNodeID m_path[11]; // 0x0	
	int32_t m_nCount; // 0x2c	
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

// Alignment: 1
// Size: 0x10
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0	
};

// Alignment: 1
// Size: 0x1
struct AttachmentHandle_t
{
public:
	uint8_t m_nBoxedTypeSafeInt; // 0x0	
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

// Alignment: 1
// Size: 0x4
class AnimTagID
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

// Alignment: 2
// Size: 0x8
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Alignment: 1
// Size: 0x4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 0
// Size: 0x28
class CBoneConstraintBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
class AnimNodeOutputID
{
public:
	uint32_t m_id; // 0x0	
};

// Alignment: 1
// Size: 0x68
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58	
};

// Alignment: 1
// Size: 0x4
class AnimScriptHandle
{
public:
	uint32_t m_id; // 0x0	
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
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0	
	uint8_t m_index; // 0x4	
};

// Alignment: 2
// Size: 0x8
class CAnimNodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0	
	AnimNodeOutputID m_outputID; // 0x4	
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

// Alignment: 2
// Size: 0x18
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0	
	Vector m_vecSize; // 0xc	
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

// Alignment: 1
// Size: 0x30
class CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	uint8_t m_comparisonOp; // 0x28	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48	
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
// Size: 0x10
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0	
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

// Alignment: 2
// Size: 0x70
class CSetFacingUpdateNode : public CUnaryUpdateNode
{
public:
	FacingMode m_facingMode; // 0x68	
	bool m_bResetChild; // 0x6c	
};

// Alignment: 2
// Size: 0x20
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0	
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8	
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
// Size: 0x30
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
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

// Alignment: 1
// Size: 0x4
class AnimComponentID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 0
// Size: 0x50
class CStringAnimTag : public CAnimTagBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x18
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0	
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
// Size: 0x30
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
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

// Alignment: 1
// Size: 0x1e0
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70	
};

// Alignment: 1
// Size: 0x30
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
};

// Alignment: 1
// Size: 0x18
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0	
};

// Alignment: 0
// Size: 0x58
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x70
class CRagdollUpdateNode : public CUnaryUpdateNode
{
public:
	int32_t m_nWeightListIndex; // 0x68	
};

// Alignment: 2
// Size: 0x8
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
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
// Size: 0x18
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0	
};

// Alignment: 1
// Size: 0x28
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:
	bool m_bLockToPath; // 0x20	
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

// Alignment: 1
// Size: 0x38
class CAnimClipDataManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18	
};

// Alignment: 1
// Size: 0x4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 2
// Size: 0x30
struct WristBone_t
{
public:
	CTransform m_xOffsetTransformMS; // 0x0	
	int32_t m_boneIndex; // 0x20	
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

// Alignment: 2
// Size: 0x8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0	
	float m_flTraceRadius; // 0x4	
};

// Alignment: 0
// Size: 0x70
class CPointConstraint : public CBaseConstraint
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x4
class ClipIndex
{
public:
	uint16_t m_groupIndex; // 0x0	
	uint16_t m_clipIndex; // 0x2	
};

// Alignment: 0
// Size: 0x70
class CGroupOutputAnimNode : public CProxyAnimNodeBase
{
public:
	// No members available
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
// Size: 0x18
class CFinishedConditionUpdater : public ConditionUpdater
{
public:
	FinishedConditionOption m_option; // 0x10	
	bool m_bIsFinished; // 0x14	
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

// Alignment: 2
// Size: 0x10
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0	
	StateActionBehavior m_eBehavior; // 0x8	
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

// Alignment: 1
// Size: 0x98
class CBoneConstraintPoseSpaceBone : public CBaseConstraint
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70	
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

// Alignment: 2
// Size: 0x18
class CForceFacingConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10	
	bool m_bComparisonValue; // 0x14	
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

// Alignment: 1
// Size: 0x4
class HSequence
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
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
// Size: 0xa0
class CTiltTwistConstraint : public CBaseConstraint
{
public:
	int32_t m_nTargetAxis; // 0x70	
	int32_t m_nSlaveAxis; // 0x74	
};

// Alignment: 1
// Size: 0x58
class CPostGraphIKTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_flBlendAmount" @ 0x40 because of the struct collision
};

// Alignment: 2
// Size: 0x20
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0	
	CUtlVector< CFlexOp > m_FlexOps; // 0x8	
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
// Size: 0x40
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10	
	float m_flAxisSize; // 0x30	
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

// Alignment: 1
// Size: 0x8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0	
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

// Alignment: 2
// Size: 0x8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0	
	float m_flFingerWeight; // 0x4	
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

// Alignment: 0
// Size: 0x78
class CGroupInputAnimNode : public CProxyAnimNodeBase
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0	
	float m_flControlPoint2; // 0x4	
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
	static CFootTrajectory &Get_Identity(){return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->m_static_fields[0]->m_instance);};
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

// Alignment: 0
// Size: 0x18
class CAnimActionUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
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
// Size: 0x58
class CAudioAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_clipName" @ 0x40 because of the struct collision
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

// Alignment: 2
// Size: 0x28
struct CBoneConstraintPoseSpaceBone__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< CTransform > m_outputTransformList; // 0x10	
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

// Alignment: 2
// Size: 0x18
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
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
// Size: 0x30
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	float m_flRadius; // 0x20	
	Color m_Color; // 0x24	
};

// Alignment: 2
// Size: 0x20
class CMotionDataSet
{
public:
	CUtlVector< CMotionClipGroupData > m_clipGroups; // 0x0	
	int32_t m_nDimensionCount; // 0x18	
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

// Alignment: 1
// Size: 0x28
class CAnimComponentManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8	
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

// Alignment: 2
// Size: 0x18
class CFacingHeadingConditionUpdater : public ConditionUpdater
{
public:
	float m_comparisonValue; // 0x10	
	Comparison_t m_operation; // 0x14	
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

// Alignment: 2
// Size: 0x38
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	FinishedConditionOption m_option; // 0x30	
	bool m_bIsFinished; // 0x34	
};

// Alignment: 2
// Size: 0x10
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0	
	uint32_t m_nBindOffsetBytes; // 0x8	
};

// Alignment: 1
// Size: 0x58
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
};

// Alignment: 2
// Size: 0x38
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	CAnimVariant m_value; // 0x20	
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

// Alignment: 1
// Size: 0x4
class CCycleBase
{
public:
	float m_flCycle; // 0x0	
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

// Alignment: 1
// Size: 0x50
class CLODComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_nServerLOD" @ 0x38 because of the struct collision
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

// Alignment: 3
// Size: 0x10
class CompValues
{
public:
	float m_fixedValue; // 0x0	
	ControlValue m_controlValue; // 0x4	
	CAnimParamHandle m_paramIndex; // 0x8	
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

// Alignment: 1
// Size: 0xd8
class CGroupAnimNode : public CContainerAnimNodeBase
{
	// Collision detected(0x80->0x90), output may be wrong.
public:
	// Skipped field "m_nodeMgr" @ 0x80 because of the struct collision
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

// Alignment: 1
// Size: 0x40
class CEmitTagAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_tag" @ 0x28 because of the struct collision
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

// Alignment: 2
// Size: 0x18
class CStateNodeStateData
{
public:
	CAnimUpdateNodeRef m_pChild; // 0x0	
	struct 
	{
		uint8_t m_bExclusiveRootMotion: 1; 		
		uint8_t __pad1: 1;
	}; // 2 bits
};

// Alignment: 1
// Size: 0x58
class CRootAnimNode : public CAnimNodeBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x40 because of the struct collision
};

// Alignment: 0
// Size: 0x4
class CFootCycle : public CCycleBase
{
public:
	// No members available
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

// Alignment: 3
// Size: 0x18
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0	
	int32_t m_nVersion; // 0x10	
	int32_t m_nType; // 0x14	
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
// Size: 0x58
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
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

// Alignment: 3
// Size: 0x20
class CTagConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_operation; // 0x10	
	int32_t m_tagIndex; // 0x14	
	bool m_comparisonValue; // 0x18	
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

// Alignment: 0
// Size: 0x28
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x50
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x58
class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48	
	int32_t m_nChoice; // 0x50	
};

// Alignment: 1
// Size: 0x70
class CSpeedScaleUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_paramIndex; // 0x68	
};

// Alignment: 1
// Size: 0x8
class CRangeFloat
{
public:
	float m_pValue[2]; // 0x0	
};

// Alignment: 2
// Size: 0x28
struct CBoneConstraintPoseSpaceMorph__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< float32 > m_outputWeightList; // 0x10	
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

// Alignment: 2
// Size: 0x10
class CRigidBodyWeight
{
public:
	CUtlString m_name; // 0x0	
	float m_flWeight; // 0x8	
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

// Alignment: 1
// Size: 0xa8
class CSkeletalInputUpdateNode : public CLeafUpdateNode
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58	
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
// Size: 0x38
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlString m_sName; // 0x28	
	AnimScriptHandle m_hScript; // 0x30	
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

// Alignment: 0
// Size: 0x38
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
	// No members available
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
// Size: 0x30
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0	
	CAnimParamHandle m_hParamIn; // 0x20	
	CAnimParamHandle m_hParamOut; // 0x28	
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
// Size: 0x70
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	bool m_bIgnoreSlope; // 0x68	
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

// Alignment: 3
// Size: 0xc
class ClipSampleInfo
{
public:
	ClipIndex m_clipIndex; // 0x0	
	float m_clipCycle; // 0x4	
	uint16_t m_clipSampleIndex; // 0x8	
};

// Alignment: 0
// Size: 0x70
class CParentConstraint : public CBaseConstraint
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x40
class CExpressionAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_expression" @ 0x28 because of the struct collision
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

// Alignment: 1
// Size: 0x30
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x28	
};

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

// Alignment: 1
// Size: 0x88
class CJiggleBoneUpdateNode : public CUnaryUpdateNode
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68	
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

// Alignment: 1
// Size: 0x60
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48	
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

// Alignment: 1
// Size: 0x58
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
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

// Alignment: 2
// Size: 0x8
struct FingerSource_t
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0	
	float m_flFingerWeight; // 0x4	
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
// Size: 0x60
class CNodeBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x48	
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
// Size: 0x58
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48	
	int32_t m_nChoice; // 0x50	
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

// Alignment: 2
// Size: 0x88
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x28	
	CUtlString m_sName; // 0x80	
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

// Alignment: 1
// Size: 0x20
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18	
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
// Size: 0x18
class CPathStatusConditionUpdater : public ConditionUpdater
{
public:
	PathStatusOptions m_optionToCheck; // 0x10	
	bool m_bComparisonValue; // 0x14	
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

// Alignment: 0
// Size: 0x4
class CAnimCycle : public CCycleBase
{
public:
	// No members available
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
// Size: 0x20
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18	
	bool m_bSetEnabled; // 0x1c	
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

// Alignment: 1
// Size: 0x18
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0	
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

// Alignment: 1
// Size: 0x60
class CRagdollComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_weightLists" @ 0x38 because of the struct collision
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

// Alignment: 2
// Size: 0x18
class CAnimUser
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
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

// Alignment: 0
// Size: 0x48
class CInputStreamAnimNode : public CAnimNodeBase
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x60
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
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

// Alignment: 0
// Size: 0x70
class COrientConstraint : public CBaseConstraint
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x40
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x28	
};

// Alignment: 2
// Size: 0x78
class CCycleControlUpdateNode : public CUnaryUpdateNode
{
public:
	AnimValueSource m_valueSource; // 0x68	
	CAnimParamHandle m_paramIndex; // 0x6c	
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

// Alignment: 2
// Size: 0x18
class CGroundConditionUpdater : public ConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10	
	bool m_bComparisonValue; // 0x14	
};

// Alignment: 1
// Size: 0x20
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x18	
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

// Alignment: 2
// Size: 0x10
struct PermModelDataAnimatedMaterialAttribute_t
{
public:
	CUtlString m_AttributeName; // 0x0	
	int32_t m_nNumChannels; // 0x8	
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

// Alignment: 3
// Size: 0xc
struct TagSpan_t
{
public:
	int32_t m_tagIndex; // 0x0	
	float m_startCycle; // 0x4	
	float m_endCycle; // 0x8	
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

// Alignment: 3
// Size: 0x28
class CCycleConditionUpdater : public ConditionUpdater
{
public:
	CompValues m_comparisonValue; // 0x10	
	ComparisonValueType m_comparisonValueType; // 0x20	
	Comparison_t m_operation; // 0x24	
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

// Alignment: 0
// Size: 0x48
class CAnimComponentStateTransition : public CAnimStateTransition
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x68
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
};

// Alignment: 0
// Size: 0x70
class CAnimComponentState : public CAnimState
{
public:
	// No members available
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
// Size: 0x68
class CJiggleBoneAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
	// Skipped field "m_items" @ 0x40 because of the struct collision
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
// Size: 0x70
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	float m_flMinStepsRemaining; // 0x68	
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

// Alignment: 1
// Size: 0x58
class CFootFallAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_foot" @ 0x40 because of the struct collision
};

// Alignment: 2
// Size: 0x88
class CAimConstraint : public CBaseConstraint
{
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
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

// Alignment: 0
// Size: 0x70
class CChoreoUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
class StaticPoseCacheHandle
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 1
// Size: 0x60
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
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

// Alignment: 2
// Size: 0x20
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8	
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

// Alignment: 2
// Size: 0x70
class CPathHelperUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flStoppingRadius; // 0x68	
	float m_flStoppingSpeedScale; // 0x6c	
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

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
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

// Alignment: 1
// Size: 0x40
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x28	
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
// Size: 0x28
class CAnimStateMachine
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x8	
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

// Alignment: 2
// Size: 0x38
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x30	
	bool m_bComparisonValue; // 0x34	
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
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0	
	float m_flMax; // 0x4	
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

// Alignment: 2
// Size: 0x40
class CToggleComponentAction : public CAnimActionBase
{
	// Collision detected(0x28->0x38), output may be wrong.
public:
	// Skipped field "m_componentID" @ 0x28 because of the struct collision
	// Skipped field "m_bSetEnabled" @ 0x2c because of the struct collision
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

// Alignment: 1
// Size: 0x38
class CFacingHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30	
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

// Alignment: 0
// Size: 0x30
class CPathAnimMotor : public CPathAnimMotorBase
{
public:
	// No members available
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
// Size: 0x28
class CAnimNodeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10	
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

// Alignment: 3
// Size: 0x10
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0	
	int8_t m_ConeAxis[3]; // 0xc	
	int8_t m_ConeCutoff; // 0xf	
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

// Alignment: 2
// Size: 0x20
class CMorphData
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8	
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
		uint8_t __pad3: 3;
	}; // 6 bits
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

// Alignment: 1
// Size: 0x38
class CGroundCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30	
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

// Alignment: 1
// Size: 0x60
class CSingleFrameUpdateNode : public CLeafUpdateNode
{
public:
	StaticPoseCacheHandle m_hPoseCacheHandle; // 0x58	
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

// Alignment: 1
// Size: 0x60
class CDampedValueComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_items" @ 0x38 because of the struct collision
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

// Alignment: 1
// Size: 0x110
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	FollowAttachmentSettings_t m_opFixedData; // 0x70	
};

// Alignment: 2
// Size: 0x20
class WeightList
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< float32 > m_weights; // 0x8	
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

// Alignment: 0
// Size: 0x68
class CRootUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
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

// Alignment: 3
// Size: 0x30
class CParamConditionUpdater : public ConditionUpdater
{
public:
	CAnimParamHandle m_paramIndex; // 0x10	
	CAnimVariant m_comparisonValue; // 0x18	
	Comparison_t m_operation; // 0x2c	
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

// Alignment: 2
// Size: 0x8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0	
	float m_weight; // 0x4	
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

// Alignment: 1
// Size: 0x28
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking"
	bool m_bNetworkingEnabled; // 0x20	
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

// Alignment: 1
// Size: 0x60
class CActionComponent : public CAnimComponentBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_actions" @ 0x38 because of the struct collision
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

// Alignment: 1
// Size: 0x48
class CAnimScriptManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CScriptModule > > m_compiledModules; // 0x10	
};

// Alignment: 0
// Size: 0x28
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x60
class CTaskStatusAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_identifierString" @ 0x40 because of the struct collision
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

// Alignment: 1
// Size: 0x38
class CForceFacingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30	
};

// Alignment: 1
// Size: 0x50
class CChoreoAnimNode : public CAnimNodeBase
{
	// Collision detected(0x38->0x48), output may be wrong.
public:
	// Skipped field "m_inputConnection" @ 0x38 because of the struct collision
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

// Alignment: 0
// Size: 0x60
class CInputStreamUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x58
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0	
	CFootTrajectories m_trajectories; // 0x40	
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

// Alignment: 1
// Size: 0x58
class CSequenceFinishedAnimTag : public CAnimTagBase
{
	// Collision detected(0x40->0x48), output may be wrong.
public:
	// Skipped field "m_sequenceName" @ 0x40 because of the struct collision
};

// Alignment: 1
// Size: 0x50
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x48	
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

// Alignment: 1
// Size: 0x70
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flSlowDownStrength; // 0x68	
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

// Alignment: 3
// Size: 0xc
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0	
	float flWeight; // 0x4	
	uint32_t nMatrixNode; // 0x8	
};

// Alignment: 1
// Size: 0x10
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0	
};

// Alignment: 2
// Size: 0x20
class FourVectors2D
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
};

// Alignment: 4
// Size: 0x4
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0	
	uint8_t m_nTwin; // 0x1	
	uint8_t m_nOrigin; // 0x2	
	uint8_t m_nFace; // 0x3	
};

// Alignment: 3
// Size: 0x8
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0	
	uint16_t nNode; // 0x4	
	uint16_t nDummy; // 0x6	
};

// Alignment: 5
// Size: 0x14
struct FeRodConstraint_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flMinDist; // 0x8	
	float flWeight0; // 0xc	
	float flRelaxationFactor; // 0x10	
};

// Alignment: 1
// Size: 0x4
struct FeTreeChildren_t
{
public:
	uint16_t nChild[2]; // 0x0	
};

// Alignment: 3
// Size: 0x10
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0	
	uint32_t m_nSurfacePropertyIndex; // 0x4	
	CUtlString m_UserFriendlyName; // 0x8	
};

// Alignment: 2
// Size: 0x8
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0	
	float flAlpha; // 0x4	
};

// Alignment: 6
// Size: 0x30
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4 vSphere[2]; // 0x0	
	float flStickiness; // 0x20	
	uint16_t nNode; // 0x24	
	uint16_t nCollisionMask; // 0x26	
	uint16_t nVertexMapIndex; // 0x28	
	uint16_t nFlags; // 0x2a	
};

// Alignment: 6
// Size: 0x20
struct FeSphereRigid_t
{
public:
	fltx4 vSphere; // 0x0	
	float flStickiness; // 0x10	
	uint16_t nNode; // 0x14	
	uint16_t nCollisionMask; // 0x16	
	uint16_t nVertexMapIndex; // 0x18	
	uint16_t nFlags; // 0x1a	
};

// Alignment: 5
// Size: 0x18
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0	
	float forceLimit; // 0x4	
	float torqueLimit; // 0x8	
	float bodyMassScale[2]; // 0xc	
	bool isActive; // 0x14	
};

// Alignment: 4
// Size: 0x60
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0	
	fltx4 m_flXY; // 0x30	
	fltx4 m_flXZ; // 0x40	
	fltx4 m_flYZ; // 0x50	
};

// Alignment: 5
// Size: 0x28
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0	
	float tv; // 0x4	
	float flDist; // 0x8	
	float flWeight[4]; // 0xc	
	uint16_t nNode[6]; // 0x1c	
};

// Alignment: 4
// Size: 0x8
struct FeNodeWindBase_t
{
public:
	uint16_t nNodeX0; // 0x0	
	uint16_t nNodeX1; // 0x2	
	uint16_t nNodeY0; // 0x4	
	uint16_t nNodeY1; // 0x6	
};

// Alignment: 4
// Size: 0xc
struct FeTwistConstraint_t
{
public:
	uint16_t nNodeOrient; // 0x0	
	uint16_t nNodeEnd; // 0x2	
	float flTwistRelax; // 0x4	
	float flSwingRelax; // 0x8	
};

// Alignment: 1
// Size: 0x4
struct FeSourceEdge_t
{
public:
	uint16_t nNode[2]; // 0x0	
};

// Alignment: 2
// Size: 0x4
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
};

// Alignment: 1
// Size: 0x1
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0	
};

// Alignment: 1
// Size: 0x68
struct Dop26_t
{
public:
	float m_flSupport[26]; // 0x0	
};

// Alignment: 4
// Size: 0x18
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0	
	float m_flXY; // 0xc	
	float m_flXZ; // 0x10	
	float m_flYZ; // 0x14	
};

// Alignment: 12
// Size: 0xd8
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0	
	float m_flMaxAngularRadius; // 0xc	
	AABB_t m_Bounds; // 0x10	
	Vector m_vOrthographicAreas; // 0x28	
	matrix3x4_t m_MassProperties; // 0x34	
	float m_flVolume; // 0x64	
	CUtlVector< Vector > m_Vertices; // 0x68	
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x80	
	CUtlVector< RnFace_t > m_Faces; // 0x98	
	CUtlVector< RnPlane_t > m_Planes; // 0xb0	
	uint32_t m_nFlags; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CRegionSVM* m_pRegionSVM; // 0xd0	
};

// Alignment: 5
// Size: 0x18
struct FeCollisionSphere_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	float m_flRFactor; // 0x4	
	Vector m_vOrigin; // 0x8	
	float flStickiness; // 0x14	
};

// Alignment: 5
// Size: 0x1c
struct FeTri_t
{
public:
	uint16_t nNode[3]; // 0x0	
	float w1; // 0x8	
	float w2; // 0xc	
	float v1x; // 0x10	
	Vector2D v2; // 0x14	
};

// Alignment: 1
// Size: 0x18
class CFeVertexMapBuildArray
{
public:
	CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0	
};

// Alignment: 4
// Size: 0x28
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0	
	uint32_t m_nNameHash; // 0x8	
	Color m_Color; // 0xc	
	CUtlVector< float32 > m_Weights; // 0x10	
};

// Alignment: 7
// Size: 0x20
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nDummy[3]; // 0x2	
	uint16_t nNodeX0; // 0x8	
	uint16_t nNodeX1; // 0xa	
	uint16_t nNodeY0; // 0xc	
	uint16_t nNodeY1; // 0xe	
	Quaternion qAdjust; // 0x10	
};

// Alignment: 0
// Size: 0x8
class IPhysicsPlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 3
// Size: 0x10
struct FeCtrlOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nCtrlParent; // 0xc	
	uint16_t nCtrlChild; // 0xe	
};

// Alignment: 8
// Size: 0x90
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
	uint32_t m_nFlags; // 0x88	
};

// Alignment: 8
// Size: 0x40
struct FeBoxRigid_t
{
public:
	CTransform tmFrame2; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	Vector vSize; // 0x24	
	float flStickiness; // 0x30	
	uint16_t nVertexMapIndex; // 0x34	
	uint16_t nFlags; // 0x36	
	float flReserved[2]; // 0x38	
};

// Alignment: 4
// Size: 0x1c
struct FeStiffHingeBuild_t
{
public:
	float flMaxAngle; // 0x0	
	float flStrength; // 0x4	
	float flMotionBias[3]; // 0x8	
	uint16_t nNode[3]; // 0x14	
};

// Alignment: 2
// Size: 0x10
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0	
	float m_flOffset; // 0xc	
};

// Alignment: 5
// Size: 0xc
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0	
	uint16_t m_nSphereRigidIndex; // 0x2	
	uint16_t m_nBoxRigidIndex; // 0x4	
	uint16_t m_nCollisionSphereIndex[2]; // 0x6	
	uint16_t m_nCollisionPlaneIndex; // 0xa	
};

// Alignment: 6
// Size: 0x30
struct CastSphereSATParams_t
{
public:
	Vector m_vRayStart; // 0x0	
	Vector m_vRayDelta; // 0xc	
	float m_flRadius; // 0x18	
	float m_flMaxFraction; // 0x1c	
	float m_flScale; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	RnHull_t* m_pHull; // 0x28	
};

// Alignment: 4
// Size: 0x18
struct FeKelagerBend2_t
{
public:
	float flWeight[3]; // 0x0	
	float flHeight0; // 0xc	
	uint16_t nNode[3]; // 0x10	
	uint16_t nReserved; // 0x16	
};

// Alignment: 5
// Size: 0x80
struct FeSimdTri_t
{
public:
	uint32_t nNode[3][4]; // 0x0	
	fltx4 w1; // 0x30	
	fltx4 w2; // 0x40	
	fltx4 v1x; // 0x50	
	FourVectors2D v2; // 0x60	
};

// Alignment: 5
// Size: 0x14
struct FeSpringIntegrator_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flSpringRestLength; // 0x4	
	float flSpringConstant; // 0x8	
	float flSpringDamping; // 0xc	
	float flNodeWeight0; // 0x10	
};

// Alignment: 4
// Size: 0x20
struct FeEffectDesc_t
{
public:
	CUtlString sName; // 0x0	
	uint32_t nNameHash; // 0x8	
	int32_t nType; // 0xc	
	KeyValues3 m_Params; // 0x10	
};

// Alignment: 2
// Size: 0x4
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nWeight; // 0x2	
};

// Alignment: 3
// Size: 0x4c
struct FeQuad_t
{
public:
	uint16_t nNode[4]; // 0x0	
	float flSlack; // 0x8	
	Vector4D vShape[4]; // 0xc	
};

// Alignment: 7
// Size: 0x70
struct FeSimdNodeBase_t
{
public:
	uint16_t nNode[4]; // 0x0	
	uint16_t nNodeX0[4]; // 0x8	
	uint16_t nNodeX1[4]; // 0x10	
	uint16_t nNodeY0[4]; // 0x18	
	uint16_t nNodeY1[4]; // 0x20	
	uint16_t nDummy[4]; // 0x28	
	FourQuaternions qAdjust; // 0x30	
};

// Alignment: 5
// Size: 0x50
struct FeSimdSpringIntegrator_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flSpringRestLength; // 0x10	
	fltx4 flSpringConstant; // 0x20	
	fltx4 flSpringDamping; // 0x30	
	fltx4 flNodeWeight0; // 0x40	
};

// Alignment: 4
// Size: 0x130
struct FeSimdQuad_t
{
public:
	uint16_t nNode[4][4]; // 0x0	
	fltx4 f4Slack; // 0x20	
	FourVectors vShape[4]; // 0x30	
	fltx4 f4Weights[4]; // 0xf0	
};

// Alignment: 5
// Size: 0x40
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0	
	Vector vCenter; // 0x20	
	uint16_t nEnd; // 0x2c	
	uint16_t nNode; // 0x2e	
	uint16_t nBeginDynamic; // 0x30	
};

// Alignment: 4
// Size: 0x20
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0	
	uint32_t m_nChildren; // 0xc	
	Vector m_vMax; // 0x10	
	uint32_t m_nTriangleOffset; // 0x1c	
};

// Alignment: 4
// Size: 0xc
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0	
	float flGroundFriction; // 0x4	
	uint16_t nListBegin; // 0x8	
	uint16_t nListEnd; // 0xa	
};

// Alignment: 2
// Size: 0x30
class CRegionSVM
{
public:
	CUtlVector< RnPlane_t > m_Planes; // 0x0	
	CUtlVector< uint32 > m_Nodes; // 0x18	
};

// Alignment: 35
// Size: 0x9c
class CFeJiggleBone
{
public:
	uint32_t m_nFlags; // 0x0	
	float m_flLength; // 0x4	
	float m_flTipMass; // 0x8	
	float m_flYawStiffness; // 0xc	
	float m_flYawDamping; // 0x10	
	float m_flPitchStiffness; // 0x14	
	float m_flPitchDamping; // 0x18	
	float m_flAlongStiffness; // 0x1c	
	float m_flAlongDamping; // 0x20	
	float m_flAngleLimit; // 0x24	
	float m_flMinYaw; // 0x28	
	float m_flMaxYaw; // 0x2c	
	float m_flYawFriction; // 0x30	
	float m_flYawBounce; // 0x34	
	float m_flMinPitch; // 0x38	
	float m_flMaxPitch; // 0x3c	
	float m_flPitchFriction; // 0x40	
	float m_flPitchBounce; // 0x44	
	float m_flBaseMass; // 0x48	
	float m_flBaseStiffness; // 0x4c	
	float m_flBaseDamping; // 0x50	
	float m_flBaseMinLeft; // 0x54	
	float m_flBaseMaxLeft; // 0x58	
	float m_flBaseLeftFriction; // 0x5c	
	float m_flBaseMinUp; // 0x60	
	float m_flBaseMaxUp; // 0x64	
	float m_flBaseUpFriction; // 0x68	
	float m_flBaseMinForward; // 0x6c	
	float m_flBaseMaxForward; // 0x70	
	float m_flBaseForwardFriction; // 0x74	
	float m_flRadius0; // 0x78	
	float m_flRadius1; // 0x7c	
	Vector m_vPoint0; // 0x80	
	Vector m_vPoint1; // 0x8c	
	uint16_t m_nCollisionMask; // 0x98	
};

// Alignment: 5
// Size: 0x1c
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	RnPlane_t m_Plane; // 0x4	
	float flStickiness; // 0x14	
	float flStrength; // 0x18	
};

// Alignment: 3
// Size: 0x10
struct FeNodeReverseOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nBoneCtrl; // 0xc	
	uint16_t nTargetNode; // 0xe	
};

// Alignment: 3
// Size: 0x10
struct FeEdgeDesc_t
{
public:
	uint16_t nEdge[2]; // 0x0	
	uint16_t nSide[2][2]; // 0x4	
	uint16_t nVirtElem[2]; // 0xc	
};

// Alignment: 3
// Size: 0xc
struct FeAnimStrayRadius_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flRelaxationFactor; // 0x8	
};

// Alignment: 2
// Size: 0x40
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x30	
	uint32_t m_nVertexMapHash; // 0x34	
};

// Alignment: 9
// Size: 0x28
struct FeVertexMapDesc_t
{
public:
	CUtlString sName; // 0x0	
	uint32_t nNameHash; // 0x8	
	uint32_t nColor; // 0xc	
	uint32_t nFlags; // 0x10	
	uint16_t nVertexBase; // 0x14	
	uint16_t nVertexCount; // 0x16	
	uint32_t nMapOffset; // 0x18	
	uint32_t nNodeListOffset; // 0x1c	
	uint16_t nNodeListCount; // 0x20	
};

// Alignment: 4
// Size: 0x14
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
	Vector vOffset; // 0x4	
	float flAlpha; // 0x10	
};

// Alignment: 7
// Size: 0x88
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
};

// Alignment: 8
// Size: 0x10
struct RnBlendVertex_t
{
public:
	uint16_t m_nWeight0; // 0x0	
	uint16_t m_nIndex0; // 0x2	
	uint16_t m_nWeight1; // 0x4	
	uint16_t m_nIndex1; // 0x6	
	uint16_t m_nWeight2; // 0x8	
	uint16_t m_nIndex2; // 0xa	
	uint16_t m_nFlags; // 0xc	
	uint16_t m_nTargetIndex; // 0xe	
};

// Alignment: 2
// Size: 0x18
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0	
	Vector m_vNormal; // 0xc	
};

// Alignment: 7
// Size: 0x88
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0	
	Vector m_vMax; // 0xc	
	CUtlVector< RnNode_t > m_Nodes; // 0x18	
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30	
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48	
	CUtlVector< uint8 > m_Materials; // 0x60	
	Vector m_vOrthographicAreas; // 0x78	
};

// Alignment: 3
// Size: 0x8
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0	
	uint16_t nChildNode; // 0x2	
	float flWeight; // 0x4	
};

// Alignment: 12
// Size: 0x48
struct OldFeEdge_t
{
public:
	float m_flK[3]; // 0x0	
	float invA; // 0xc	
	float t; // 0x10	
	float flThetaRelaxed; // 0x14	
	float flThetaFactor; // 0x18	
	float c01; // 0x1c	
	float c02; // 0x20	
	float c03; // 0x24	
	float c04; // 0x28	
	float flAxialModelDist; // 0x2c	
	float flAxialModelWeights[4]; // 0x30	
	uint16_t m_nNode[4]; // 0x40	
};

// Alignment: 4
// Size: 0xd0
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0	
	CTransform m_transform; // 0x10	
	uint32_t m_nJiggleParent; // 0x30	
	CFeJiggleBone m_jiggleBone; // 0x34	
};

// Alignment: 2
// Size: 0x1c
struct RnCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
};

// Alignment: 4
// Size: 0x10
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0	
	float flAnimationForceAttraction; // 0x4	
	float flAnimationVertexAttraction; // 0x8	
	float flGravity; // 0xc	
};

// Alignment: 2
// Size: 0x10
struct FeProxyVertexMap_t
{
public:
	CUtlString m_Name; // 0x0	
	float m_flWeight; // 0x8	
};

// Alignment: 1
// Size: 0xc
struct RnTriangle_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Alignment: 3
// Size: 0x30
struct FeSimdAnimStrayRadius_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flMaxDist; // 0x10	
	fltx4 flRelaxationFactor; // 0x20	
};

// Alignment: 2
// Size: 0x30
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20	
	uint32_t m_nVertexMapHash; // 0x24	
};

// Alignment: 2
// Size: 0x10
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0	
	float m_flRadius; // 0xc	
};

// Alignment: 4
// Size: 0x10
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0	
	float flMaxRotation; // 0x4	
	float flMotorTargetAngSpeed; // 0x8	
	float flMotorMaxTorque; // 0xc	
};

// Alignment: 5
// Size: 0x50
struct FeSimdRodConstraint_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 f4MaxDist; // 0x10	
	fltx4 f4MinDist; // 0x20	
	fltx4 f4Weight0; // 0x30	
	fltx4 f4RelaxationFactor; // 0x40	
};

// Alignment: 4
// Size: 0x40
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0	
	Vector worldAxisDirection; // 0xc	
	constraint_axislimit_t hingeAxis; // 0x18	
	constraint_breakableparams_t constraint; // 0x28	
};

// Alignment: 5
// Size: 0x14
struct FeTaperedCapsuleStretch_t
{
public:
	uint16_t nNode[2]; // 0x0	
	uint16_t nCollisionMask; // 0x4	
	// MPropertySuppressField
	uint16_t nDummy; // 0x6	
	float flRadius[2]; // 0x8	
	float flStickiness; // 0x10	
};

// Alignment: 3
// Size: 0x14
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0	
	float flDistMax; // 0x4	
	uint16_t nNode[6]; // 0x8	
};

// Alignment: 10
// Size: 0x18
struct vehicle_controlparams_t
{
public:
	float throttle; // 0x0	
	float steering; // 0x4	
	float brake; // 0x8	
	float boost; // 0xc	
	bool handbrake; // 0x10	
	bool handbrakeLeft; // 0x11	
	bool handbrakeRight; // 0x12	
	bool brakepedal; // 0x13	
	bool bHasBrakePedal; // 0x14	
	bool bAnalogSteering; // 0x15	
};

// Alignment: 3
// Size: 0xa4
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0	
	uint32_t m_nJiggleParent; // 0x4	
	CFeJiggleBone m_jiggleBone; // 0x8	
};

// Alignment: 2
// Size: 0x50
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x40	
	uint32_t m_nVertexMapHash; // 0x44	
};

// Alignment: 99
// Size: 0x600
struct PhysFeModelDesc_t
{
public:
	CUtlVector< uint32 > m_CtrlHash; // 0x0	
	CUtlVector< CUtlString > m_CtrlName; // 0x18	
	uint32_t m_nStaticNodeFlags; // 0x30	
	uint32_t m_nDynamicNodeFlags; // 0x34	
	float m_flLocalForce; // 0x38	
	float m_flLocalRotation; // 0x3c	
	uint16_t m_nNodeCount; // 0x40	
	uint16_t m_nStaticNodes; // 0x42	
	uint16_t m_nRotLockStaticNodes; // 0x44	
	uint16_t m_nSimdTriCount1; // 0x46	
	uint16_t m_nSimdTriCount2; // 0x48	
	uint16_t m_nSimdQuadCount1; // 0x4a	
	uint16_t m_nSimdQuadCount2; // 0x4c	
	uint16_t m_nQuadCount1; // 0x4e	
	uint16_t m_nQuadCount2; // 0x50	
	uint16_t m_nCollisionSphereInclusiveCount; // 0x52	
	uint16_t m_nTreeDepth; // 0x54	
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56	
	uint16_t m_nRopeCount; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005a[0x6]; // 0x5a
public:
	CUtlVector< uint16 > m_Ropes; // 0x60	
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78	
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90	
	CUtlVector< FeQuad_t > m_Quads; // 0xa8	
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc0	
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xd8	
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf0	
	CUtlVector< CTransform > m_InitPose; // 0x108	
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x120	
	CUtlVector< FeTwistConstraint_t > m_Twists; // 0x138	
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x150	
	CUtlVector< float32 > m_NodeInvMasses; // 0x168	
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x180	
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x198	
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1b0	
	CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1c8	
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1e0	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1f8	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x210	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x228	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x240	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x258	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x270	
	CUtlVector< float32 > m_DynNodeFriction; // 0x288	
	CUtlVector< float32 > m_LocalRotation; // 0x2a0	
	CUtlVector< float32 > m_LocalForce; // 0x2b8	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2d0	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2e8	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x300	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x318	
	CUtlVector< uint16 > m_TreeParents; // 0x330	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x348	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x360	
	CUtlVector< uint16 > m_FreeNodes; // 0x378	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x390	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3a8	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c0	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3d8	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f0	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x408	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x420	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x438	
	CUtlVector< uint16 > m_SourceElems; // 0x450	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x468	
	CUtlVector< FeTri_t > m_Tris; // 0x480	
	uint16_t m_nTriCount1; // 0x498	
	uint16_t m_nTriCount2; // 0x49a	
	uint8_t m_nReservedUint8; // 0x49c	
	uint8_t m_nExtraPressureIterations; // 0x49d	
	uint8_t m_nExtraGoalIterations; // 0x49e	
	uint8_t m_nExtraIterations; // 0x49f	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a0	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4b8	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d0	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4e8	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x500	
	CUtlVector< uint8 > m_MorphSetData; // 0x518	
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x530	
	CUtlVector< uint8 > m_VertexMapValues; // 0x548	
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x560	
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x578	
	CUtlVector< uint16 > m_LockToGoal; // 0x590	
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5a8	
	float m_flInternalPressure; // 0x5c0	
	float m_flDefaultTimeDilation; // 0x5c4	
	float m_flWindage; // 0x5c8	
	float m_flWindDrag; // 0x5cc	
	float m_flDefaultSurfaceStretch; // 0x5d0	
	float m_flDefaultThreadStretch; // 0x5d4	
	float m_flDefaultGravityScale; // 0x5d8	
	float m_flDefaultVelAirDrag; // 0x5dc	
	float m_flDefaultExpAirDrag; // 0x5e0	
	float m_flDefaultVelQuadAirDrag; // 0x5e4	
	float m_flDefaultExpQuadAirDrag; // 0x5e8	
	float m_flRodVelocitySmoothRate; // 0x5ec	
	float m_flQuadVelocitySmoothRate; // 0x5f0	
	float m_flAddWorldCollisionRadius; // 0x5f4	
	float m_flDefaultVolumetricSolveAmount; // 0x5f8	
	uint16_t m_nRodVelocitySmoothIterations; // 0x5fc	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x5fe	
};

// Alignment: 1
// Size: 0x98
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x10	
};

// Alignment: 1
// Size: 0x20
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x10	
};

// Alignment: 1
// Size: 0x30
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x10	
};

// Alignment: 3
// Size: 0x20
struct RnSoftbodyCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
	uint16_t m_nParticle[2]; // 0x1c	
};

// Alignment: 1
// Size: 0xe8
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10	
};

// Alignment: 1
// Size: 0x4
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0	
};

// Alignment: 2
// Size: 0x8
struct RnSoftbodySpring_t
{
public:
	uint16_t m_nParticle[2]; // 0x0	
	float m_flLength; // 0x4	
};

// Alignment: 12
// Size: 0x30
struct VMixDynamicsDesc_t
{
public:
	float m_fldbGain; // 0x0	
	float m_fldbNoiseGateThreshold; // 0x4	
	float m_fldbCompressionThreshold; // 0x8	
	float m_fldbLimiterThreshold; // 0xc	
	float m_fldbKneeWidth; // 0x10	
	float m_flRatio; // 0x14	
	float m_flLimiterRatio; // 0x18	
	float m_flAttackTimeMS; // 0x1c	
	float m_flReleaseTimeMS; // 0x20	
	float m_flRMSTimeMS; // 0x24	
	float m_flWetMix; // 0x28	
	bool m_bPeakMode; // 0x2c	
};

// Alignment: 6
// Size: 0x10
struct VMixFilterDesc_t
{
public:
	VMixFilterType_t m_nFilterType; // 0x0	
	VMixFilterSlope_t m_nFilterSlope; // 0x2	
	bool m_bEnabled; // 0x3	
	float m_fldbGain; // 0x4	
	float m_flCutoffFreq; // 0x8	
	float m_flQ; // 0xc	
};

// Alignment: 6
// Size: 0x18
struct VMixUtilityDesc_t
{
public:
	// MPropertyFriendlyName "Channels"
	VMixChannelOperation_t m_nOp; // 0x0	
	// MPropertyFriendlyName "Input Pan"
	// MPropertyAttributeRange "-1 1"
	float m_flInputPan; // 0x4	
	// MPropertyFriendlyName "Output Balance"
	// MPropertyAttributeRange "-1 1"
	float m_flOutputBalance; // 0x8	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0xc	
	bool m_bBassMono; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flBassFreq; // 0x14	
};

// Alignment: 10
// Size: 0x28
struct VMixVocoderDesc_t
{
public:
	int32_t m_nBandCount; // 0x0	
	float m_flBandwidth; // 0x4	
	float m_fldBModGain; // 0x8	
	float m_flFreqRangeStart; // 0xc	
	float m_flFreqRangeEnd; // 0x10	
	float m_fldBUnvoicedGain; // 0x14	
	float m_flAttackTimeMS; // 0x18	
	float m_flReleaseTimeMS; // 0x1c	
	int32_t m_nDebugBand; // 0x20	
	bool m_bPeakMode; // 0x24	
};

// Alignment: 3
// Size: 0x18
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

// Alignment: 10
// Size: 0x24
struct VMixDynamicsBand_t
{
public:
	// MPropertyFriendlyName "Input Gain (dB)"
	float m_fldbGainInput; // 0x0	
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbGainOutput; // 0x4	
	// MPropertyFriendlyName "Above Threshold(dB)"
	float m_fldbThresholdBelow; // 0x8	
	// MPropertyFriendlyName "Below Threshold(dB)"
	float m_fldbThresholdAbove; // 0xc	
	// MPropertyFriendlyName "Upward Ratio"
	float m_flRatioBelow; // 0x10	
	// MPropertyFriendlyName "Downward Ratio"
	float m_flRatioAbove; // 0x14	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x18	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x1c	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnable; // 0x20	
	// MPropertyFriendlyName "Solo"
	bool m_bSolo; // 0x21	
};

// Alignment: 8
// Size: 0x2c
struct VMixAutoFilterDesc_t
{
public:
	float m_flEnvelopeAmount; // 0x0	
	float m_flAttackTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
	VMixFilterDesc_t m_filter; // 0xc	
	float m_flLFOAmount; // 0x1c	
	float m_flLFORate; // 0x20	
	float m_flPhase; // 0x24	
	VMixLFOShape_t m_nLFOShape; // 0x28	
};

// Alignment: 3
// Size: 0x28
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

// Alignment: 3
// Size: 0xc
struct VMixEnvelopeDesc_t
{
public:
	float m_flAttackTimeMS; // 0x0	
	float m_flHoldTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
};

// Alignment: 5
// Size: 0x14
struct VMixShaperDesc_t
{
public:
	// MPropertyFriendlyName "Shape"
	// MPropertyAttributeRange "0 14"
	int32_t m_nShape; // 0x0	
	// MPropertyFriendlyName "Drive (dB)"
	// MPropertyAttributeRange "0 36"
	float m_fldbDrive; // 0x4	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0x8	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0xc	
	// MPropertyFriendlyName "Oversampling"
	int32_t m_nOversampleFactor; // 0x10	
};

// Alignment: 9
// Size: 0x24
struct VMixDynamicsCompressorDesc_t
{
public:
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbOutputGain; // 0x0	
	// MPropertyFriendlyName "Threshold (dB)"
	float m_fldbCompressionThreshold; // 0x4	
	// MPropertyFriendlyName "Knee Width (dB)"
	float m_fldbKneeWidth; // 0x8	
	// MPropertyFriendlyName "Compression Ratio"
	float m_flCompressionRatio; // 0xc	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x10	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x14	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTimeMS; // 0x18	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x1c	
	// MPropertyFriendlyName "Peak mode"
	bool m_bPeakMode; // 0x20	
};

// Alignment: 5
// Size: 0x30
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0	
	CUtlString itemName; // 0x8	
	CUtlString itemTypeName; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlString itemKVString; // 0x20	
	Vector2D itemPos; // 0x28	
};

// Alignment: 4
// Size: 0x10
class CSosGroupBranchPattern
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Event Name"
	bool m_bMatchEventName; // 0x8	
	// MPropertyFriendlyName "Sub-String"
	bool m_bMatchEventSubString; // 0x9	
	// MPropertyFriendlyName "Source Entity Index"
	bool m_bMatchEntIndex; // 0xa	
	// MPropertyFriendlyName "Operator Variable"
	bool m_bMatchOpvar; // 0xb	
};

// Alignment: 1
// Size: 0x18
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0	
};

// Alignment: 8
// Size: 0x20
struct VMixConvolutionDesc_t
{
public:
	// MPropertyFriendlyName "gain of wet signal (dB)"
	// MPropertyAttributeRange "-36 3"
	float m_fldbGain; // 0x0	
	// MPropertyFriendlyName "Pre-delay (ms)"
	float m_flPreDelayMS; // 0x4	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x8	
	// MPropertyFriendlyName "Low EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbLow; // 0xc	
	// MPropertyFriendlyName "Mid EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbMid; // 0x10	
	// MPropertyFriendlyName "High EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbHigh; // 0x14	
	// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
	float m_flLowCutoffFreq; // 0x18	
	// MPropertyFriendlyName "High Cutoff Freq (Hz)"
	float m_flHighCutoffFreq; // 0x1c	
};

// Alignment: 4
// Size: 0x10
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
	int32_t m_nQuality; // 0x8	
	int32_t m_nProcType; // 0xc	
};

// Alignment: 1
// Size: 0x8
class CSoundEventMetaData
{
public:
	CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0	
};

// Alignment: 1
// Size: 0x80
struct VMixEQ8Desc_t
{
public:
	VMixFilterDesc_t m_stages[8]; // 0x0	
};

// Alignment: 7
// Size: 0x28
struct VMixDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bEnableFilter; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flDelay; // 0x14	
	float m_flDirectGain; // 0x18	
	float m_flDelayGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flWidth; // 0x24	
};

// Alignment: 10
// Size: 0x90
struct VMixDynamics3BandDesc_t
{
public:
	float m_fldbGainOutput; // 0x0	
	float m_flRMSTimeMS; // 0x4	
	float m_fldbKneeWidth; // 0x8	
	float m_flDepth; // 0xc	
	float m_flWetMix; // 0x10	
	float m_flTimeScale; // 0x14	
	float m_flLowCutoffFreq; // 0x18	
	float m_flHighCutoffFreq; // 0x1c	
	bool m_bPeakMode; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	VMixDynamicsBand_t m_bandDesc[3]; // 0x24	
};

// Alignment: 4
// Size: 0x28
class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	CUtlString m_matchSoundEventName; // 0x10	
	// MPropertyFriendlyName "Sub-String"
	CUtlString m_matchSoundEventSubString; // 0x18	
	// MPropertyFriendlyName "Entity Index"
	float m_flEntIndex; // 0x20	
	// MPropertyFriendlyName "Operator Variable Value"
	float m_flOpvar; // 0x24	
};

// Alignment: 8
// Size: 0xd0
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	CSosGroupBranchPattern m_branchPattern; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0050[0x60]; // 0x50
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xb0	
};

// Alignment: 1
// Size: 0x20
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18	
};

// Alignment: 1
// Size: 0x18
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0	
};

// Alignment: 1
// Size: 0x18
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0	
};

// Alignment: 2
// Size: 0x10
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0	
	uint64_t m_nFrameCount; // 0x8	
};

// Alignment: 3
// Size: 0x30
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18	
};

// Alignment: 6
// Size: 0x38
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	int32_t m_nLayerIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	uint64_t m_nLayerId; // 0x20	
	CUtlString m_LayerName; // 0x28	
	CUtlString m_displayText; // 0x30	
};

// Alignment: 0
// Size: 0x38
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x38
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x10
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0	
	CUtlString m_ViewName; // 0x8	
};

// Alignment: 2
// Size: 0x18
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
};

// Alignment: 10
// Size: 0x30
class CSSDSMsg_ViewTarget
{
public:
	CUtlString m_Name; // 0x0	
	uint64_t m_TextureId; // 0x8	
	int32_t m_nWidth; // 0x10	
	int32_t m_nHeight; // 0x14	
	int32_t m_nRequestedWidth; // 0x18	
	int32_t m_nRequestedHeight; // 0x1c	
	int32_t m_nNumMipLevels; // 0x20	
	int32_t m_nDepth; // 0x24	
	int32_t m_nMultisampleNumSamples; // 0x28	
	int32_t m_nFormat; // 0x2c	
};

// Alignment: 2
// Size: 0x8
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0	
	uint32_t m_nOffsetIntoBlock; // 0x4	
};

// Alignment: 2
// Size: 0x30
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0	
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18	
};

// Alignment: 1
// Size: 0x4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0	
};

// Alignment: 10
// Size: 0x70
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0	
	float m_flWidth; // 0x30	
	float m_flHeight; // 0x34	
	float m_flDepth; // 0x38	
	Vector2D m_vUVStart; // 0x3c	
	Vector2D m_vUVEnd; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50	
	int32_t m_nRenderOrder; // 0x58	
	Vector4D m_vTintColor; // 0x5c	
	int32_t m_nSequenceOverride; // 0x6c	
};

// Alignment: 5
// Size: 0x30
struct BakedLightingInfo_t
{
public:
	uint32_t m_nLightmapVersionNumber; // 0x0	
	uint32_t m_nLightmapGameVersionNumber; // 0x4	
	Vector2D m_vLightmapUvScale; // 0x8	
	bool m_bHasLightmaps; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x7]; // 0x11
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18	
};

// Alignment: 9
// Size: 0x3c
struct AggregateMeshInfo_t
{
public:
	Vector m_vWorldBounds[2]; // 0x0	
	uint32_t m_nVisClusterMemberOffset; // 0x18	
	uint8_t m_nVisClusterMemberCount; // 0x1c	
	uint8_t m_nLODGroupMask; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	int32_t m_nCubeMapPrecomputedHandshake; // 0x20	
	ObjectTypeFlags_t m_objectFlags; // 0x24	
	Vector m_vLODOrigin; // 0x28	
	float m_fLODStartDrawDistance; // 0x34	
	float m_fLODEndDrawDistance; // 0x38	
};

// Alignment: 4
// Size: 0x38
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0	
	int32_t m_nElementSizeInBytes; // 0x4	
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8	
	CUtlVector< uint8 > m_pData; // 0x20	
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x8
struct voxel_vis_mergelist_t
{
public:
	uint32_t m_nFirstCluster; // 0x0	
	uint32_t m_nClusterCount; // 0x4	
};

// Alignment: 21
// Size: 0x68
struct WorldBuilderParams_t
{
public:
	int32_t m_nSizeBytesPerVoxel; // 0x0	
	float m_flMinDrawVolumeSize; // 0x4	
	float m_flMinDistToCamera; // 0x8	
	float m_flMinAtlasDist; // 0xc	
	float m_flMinSimplifiedDist; // 0x10	
	float m_flHorzFOV; // 0x14	
	float m_flHalfScreenWidth; // 0x18	
	int32_t m_nAtlasTextureSizeX; // 0x1c	
	int32_t m_nAtlasTextureSizeY; // 0x20	
	int32_t m_nUniqueTextureSizeX; // 0x24	
	int32_t m_nUniqueTextureSizeY; // 0x28	
	int32_t m_nCompressedAtlasSize; // 0x2c	
	float m_flGutterSize; // 0x30	
	float m_flUVMapThreshold; // 0x34	
	Vector m_vWorldUnitsPerTile; // 0x38	
	int32_t m_nMaxTexScaleSlots; // 0x44	
	bool m_bWrapInAtlas; // 0x48	
	bool m_bBuildBakedLighting; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	Vector2D m_vLightmapUvScale; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	uint64_t m_nCompileTimestamp; // 0x58	
	uint64_t m_nCompileFingerprint; // 0x60	
};

// Alignment: 14
// Size: 0xe0
class CVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	CUtlVector< uint32 > m_blockOffset; // 0x40	
	CUtlVector< voxel_vis_cluster_t > m_clusters; // 0x58	
	CUtlVector< uint16 > m_mergeClusters; // 0x70	
	CUtlVector< voxel_vis_mergelist_t > m_mergeLists; // 0x88	
	Vector m_vMinBounds; // 0xa0	
	Vector m_vMaxBounds; // 0xac	
	float m_flGridSize; // 0xb8	
	int32_t m_nNodeCount; // 0xbc	
	int32_t m_nRegionCount; // 0xc0	
	voxel_vis_cluster_t m_skyVisibilityCluster; // 0xc4	
	voxel_vis_cluster_t m_sunVisibilityCluster; // 0xcc	
	voxel_vis_compression_t m_nPVSCompression; // 0xd4	
	uint32_t m_nTreeSize; // 0xd8	
	uint32_t m_nPVSSizeCompressed; // 0xdc	
};

// Alignment: 7
// Size: 0x30
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0	
	uint32_t m_targetType; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_targetName; // 0x10	
	CUtlString m_inputName; // 0x18	
	CUtlString m_overrideParam; // 0x20	
	float m_flDelay; // 0x28	
	int32_t m_nTimesToFire; // 0x2c	
};

// Alignment: 3
// Size: 0x18
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10	
};

// Alignment: 13
// Size: 0x140
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0	
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18	
	CUtlVector< uint16 > m_visClusterMembership; // 0x30	
	CUtlVector< AABB_t > m_boundsGroups; // 0x48	
	CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x60	
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78	
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90	
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xa8	
	CUtlVector< CUtlString > m_layerNames; // 0xc0	
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xd8	
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xf0	
	CUtlString m_grassFileName; // 0x108	
	BakedLightingInfo_t m_nodeLightingInfo; // 0x110	
};

// Alignment: 4
// Size: 0x40
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_hammerUniqueId; // 0x8	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10	
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28	
};

// Alignment: 4
// Size: 0xc8
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x68	
	BakedLightingInfo_t m_worldLightingInfo; // 0x80	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0xb0	
};

// Alignment: 0
// Size: 0x1
struct VMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 8
// Size: 0x50
struct NodeData_t
{
public:
	int32_t m_Flags; // 0x0	
	int32_t m_nParent; // 0x4	
	Vector m_vOrigin; // 0x8	
	Vector m_vMinBounds; // 0x14	
	Vector m_vMaxBounds; // 0x20	
	float m_flMinimumDistance; // 0x2c	
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30	
	CUtlString m_worldNodePrefix; // 0x48	
};

// Alignment: 8
// Size: 0x60
struct AggregateSceneObject_t
{
public:
	Vector m_vWorldBounds[2]; // 0x0	
	ObjectTypeFlags_t m_allFlags; // 0x18	
	ObjectTypeFlags_t m_anyFlags; // 0x1c	
	int16_t m_nLayer; // 0x20	
	int16_t m_nBoundsGroupIndex; // 0x22	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x28	
	CUtlVector< uint16 > m_visClusterMembership; // 0x40	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x58	
};

// Alignment: 4
// Size: 0x20
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

// Alignment: 16
// Size: 0x90
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0	
	Vector4D m_vTransform[3]; // 0x4	
	float m_flFadeStartDistance; // 0x34	
	float m_flFadeEndDistance; // 0x38	
	Vector4D m_vTintColor; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_skin; // 0x50	
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58	
	Vector m_vLightingOrigin; // 0x5c	
	uint32_t m_nLightGroup; // 0x68	
	int16_t m_nOverlayRenderOrder; // 0x6c	
	int16_t m_nLODOverride; // 0x6e	
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74	
	int16_t m_nBoundsGroupIndex; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007a[0x6]; // 0x7a
public:
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80	
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88	
};

// Alignment: 0
// Size: 0x28
class CParticleProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct ParticleAttributeIndex_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 0
// Size: 0x40
class CPiecewiseCurveSchemaWrapper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	// No members available
};

// Alignment: 36
// Size: 0xe8
class CParticleFloatInput
{
public:
	ParticleFloatType_t m_nType; // 0x0	
	ParticleFloatMapType_t m_nMapType; // 0x4	
	float m_flLiteralValue; // 0x8	
	int32_t m_nControlPoint; // 0xc	
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x10	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14	
	int32_t m_nVectorComponent; // 0x18	
	float m_flRandomMin; // 0x1c	
	float m_flRandomMax; // 0x20	
	ParticleFloatRandomMode_t m_nRandomMode; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	float m_flLOD0; // 0x2c	
	float m_flLOD1; // 0x30	
	float m_flLOD2; // 0x34	
	float m_flLOD3; // 0x38	
	float m_flNoiseOutputMin; // 0x3c	
	float m_flNoiseOutputMax; // 0x40	
	float m_flNoiseScale; // 0x44	
	Vector m_vecNoiseOffsetRate; // 0x48	
	float m_flNoiseOffset; // 0x54	
	int32_t m_nNoiseOctaves; // 0x58	
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0x5c	
	PFNoiseType_t m_nNoiseType; // 0x60	
	PFNoiseModifier_t m_nNoiseModifier; // 0x64	
	float m_flNoiseTurbulenceScale; // 0x68	
	float m_flNoiseTurbulenceMix; // 0x6c	
	float m_flNoiseImgPreviewScale; // 0x70	
	bool m_bNoiseImgPreviewLive; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x7]; // 0x75
public:
	ParticleFloatInputMode_t m_nInputMode; // 0x7c	
	float m_flMultFactor; // 0x80	
	float m_flInput0; // 0x84	
	float m_flInput1; // 0x88	
	float m_flOutput0; // 0x8c	
	float m_flOutput1; // 0x90	
	ParticleFloatBiasType_t m_nBiasType; // 0x94	
	float m_flBiasParameter; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad009c[0x4]; // 0x9c
public:
	CPiecewiseCurveSchemaWrapper m_Curve; // 0xa0	
};

// Alignment: 0
// Size: 0xe8
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x180
class CParticleFunction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x8	
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0xc	
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x10	
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x14	
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x18	
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MPropertyStartGroup "Time Offset"
	// MPropertyFriendlyName "operator time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x20	
	// MPropertyFriendlyName "operator time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x24	
	// MPropertyFriendlyName "operator time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x28	
	// MPropertyStartGroup "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x2c	
	// MPropertyFriendlyName "operator time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x30	
	// MPropertyFriendlyName "operator time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0038[0x1]; // 0x38
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x39	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; // 0x3a
public:
	// MPropertyFriendlyName "operator end cap state"
	// MPropertySortPriority "-100"
	ParticleEndcapMode_t m_nOpEndCapState; // 0x3c	
	// MPropertyStartGroup "Strength Modifiers"
	// MPropertyFriendlyName "operator strength"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CParticleCollectionFloatInput m_flOpStrength; // 0x40	
	// MPropertyStartGroup
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x128	
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 12
// Size: 0x1b0
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x184	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x188	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x18c	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x19c	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1a0	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x1a1	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x1a2	
private:
	[[maybe_unused]] uint8_t __pad01a3[0x1]; // 0x1a3
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1a4	
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionOperator : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 18
// Size: 0x44
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "visibility camera depth bias"
	// MParticleAdvancedField
	float m_flCameraBias; // 0x0	
	// MPropertyFriendlyName "visibility input minimum"
	// MParticleAdvancedField
	float m_flInputMin; // 0x4	
	// MPropertyFriendlyName "visibility input maximum"
	// MParticleAdvancedField
	float m_flInputMax; // 0x8	
	// MPropertyFriendlyName "visibility alpha scale minimum"
	// MParticleAdvancedField
	float m_flAlphaScaleMin; // 0xc	
	// MPropertyFriendlyName "visibility alpha scale maximum"
	// MParticleAdvancedField
	float m_flAlphaScaleMax; // 0x10	
	// MPropertyFriendlyName "visibility radius scale minimum"
	// MParticleAdvancedField
	float m_flRadiusScaleMin; // 0x14	
	// MPropertyFriendlyName "visibility radius scale maximum"
	// MParticleAdvancedField
	float m_flRadiusScaleMax; // 0x18	
	// MPropertyFriendlyName "visibility radius FOV scale base"
	// MParticleAdvancedField
	float m_flRadiusScaleFOVBase; // 0x1c	
	// MPropertyFriendlyName "visibility proxy radius"
	// MParticleAdvancedField
	float m_flProxyRadius; // 0x20	
	// MPropertyFriendlyName "visibility input distance minimum"
	// MParticleAdvancedField
	float m_flDistanceInputMin; // 0x24	
	// MPropertyFriendlyName "visibility input distance maximum"
	// MParticleAdvancedField
	float m_flDistanceInputMax; // 0x28	
	// MPropertyFriendlyName "visibility input dot minimum"
	// MParticleAdvancedField
	float m_flDotInputMin; // 0x2c	
	// MPropertyFriendlyName "visibility input dot maximum"
	// MParticleAdvancedField
	float m_flDotInputMax; // 0x30	
	// MPropertyFriendlyName "Visibility input dot use CP angles"
	// MParticleAdvancedField
	bool m_bDotCPAngles; // 0x34	
	// MPropertyFriendlyName "Visibility input dot use Camera angles"
	// MParticleAdvancedField
	bool m_bDotCameraAngles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	// MPropertyFriendlyName "visibility unsupported hardware fallback value"
	// MParticleAdvancedField
	float m_flNoPixelVisibilityFallback; // 0x38	
	// MPropertyFriendlyName "visibility proxy input control point number"
	// MParticleAdvancedField
	int32_t m_nCPin; // 0x3c	
	// MPropertyFriendlyName "visibility vr camera right eye"
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40	
};

// Alignment: 10
// Size: 0x1b0
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x180	
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x184	
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x188	
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x18c	
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x190	
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x194	
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x198	
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x19c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a0	
};

// Alignment: 0
// Size: 0xe8
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x1d0
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MParticleAdvancedField
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x180	
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x1c4	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x1c5	
};

// Alignment: 8
// Size: 0x370
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x180	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x184	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x190	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x278	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0361[0x3]; // 0x361
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x364	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x368	
};

// Alignment: 18
// Size: 0x430
class CParticleVecInput
{
public:
	ParticleVecType_t m_nType; // 0x0	
	Vector m_vLiteralValue; // 0x4	
	Color m_LiteralColor; // 0x10	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14	
	Vector m_vVectorAttributeScale; // 0x18	
	int32_t m_nControlPoint; // 0x24	
	Vector m_vCPValueScale; // 0x28	
	Vector m_vCPRelativePosition; // 0x34	
	Vector m_vCPRelativeDir; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CParticleFloatInput m_FloatComponentX; // 0x50	
	CParticleFloatInput m_FloatComponentY; // 0x138	
	CParticleFloatInput m_FloatComponentZ; // 0x220	
	CParticleFloatInput m_FloatInterp; // 0x308	
	float m_flInterpInput0; // 0x3f0	
	float m_flInterpInput1; // 0x3f4	
	Vector m_vInterpOutput0; // 0x3f8	
	Vector m_vInterpOutput1; // 0x404	
	CColorGradient m_Gradient; // 0x410	
};

// Alignment: 5
// Size: 0x210
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x184	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x185	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x186	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x187	
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionForce : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x14
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_nControlPoint; // 0x0	
	// MPropertyFriendlyName "Use local coordinates for offset"
	bool m_bLocalCoords; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffset; // 0x8	
};

// Alignment: 3
// Size: 0x1a0
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x180	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x184	
private:
	[[maybe_unused]] uint8_t __pad0188[0x4]; // 0x188
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x18c	
};

// Alignment: 1
// Size: 0x190
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x180	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x180	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x184	
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x190	
};

// Alignment: 6
// Size: 0x30
struct ParticleControlPointDriver_t
{
public:
	int32_t m_iControlPoint; // 0x0	
	ParticleAttachment_t m_iAttachType; // 0x4	
	CUtlString m_attachmentName; // 0x8	
	Vector m_vecOffset; // 0x10	
	QAngle m_angOffset; // 0x1c	
	CUtlString m_entityName; // 0x28	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x184	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x190	
};

// Alignment: 7
// Size: 0x1b0
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x194	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x198	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x19c	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x1a0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1a4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1a8	
};

// Alignment: 2
// Size: 0x270
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
};

// Alignment: 7
// Size: 0x530
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x270	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x358	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x440	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x52c	
};

// Alignment: 0
// Size: 0x10
class IParticleCollection
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No members available
};

// Alignment: 7
// Size: 0x1b0
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x184	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x190	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x19c	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1a0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1a4	
};

// Alignment: 1
// Size: 0x1a0
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x190	
};

// Alignment: 6
// Size: 0x290
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x180	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x18c	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x198	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x280	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x284	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x288	
};

// Alignment: 5
// Size: 0x530
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x180	
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x268	
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x350	
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x438	
private:
	[[maybe_unused]] uint8_t __pad043c[0x4]; // 0x43c
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x440	
};

// Alignment: 11
// Size: 0x540
class C_OP_CylindricalDistanceToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x188	
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x270	
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x358	
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x440	
	// MPropertyFriendlyName "cylinder top control point"
	int32_t m_nStartCP; // 0x528	
	// MPropertyFriendlyName "cylinder bottom control point"
	int32_t m_nEndCP; // 0x52c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x530	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x534	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x535	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x536	
};

// Alignment: 2
// Size: 0x1a0
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x190	
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x194	
};

// Alignment: 7
// Size: 0x1d0
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x188	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x1a0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1c4	
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x190
class C_INIT_RemapInitialCPDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x188	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c	
};

// Alignment: 0
// Size: 0x430
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x1a0
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x184	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x188	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x190	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x194	
	// MPropertyFriendlyName "ignore delta time"
	// MParticleAdvancedField
	bool m_bIgnoreDelta; // 0x198	
};

// Alignment: 0
// Size: 0x180
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x10
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "particle field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0xc	
};

// Alignment: 4
// Size: 0x190
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184	
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x18c	
};

// Alignment: 15
// Size: 0x58
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0	
	uint32_t m_nModSpecificData; // 0x8	
	PetGroundType_t m_groundType; // 0xc	
	CUtlString m_sequenceName; // 0x10	
	int32_t m_nFireParticleOnSequenceFrame; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlString m_hitboxSetName; // 0x20	
	CUtlString m_materialGroupName; // 0x28	
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30	
	float m_flPlaybackSpeed; // 0x48	
	float m_flParticleSimulationRate; // 0x4c	
	bool m_bShouldDrawHitboxes; // 0x50	
	bool m_bShouldDrawAttachments; // 0x51	
	bool m_bShouldDrawAttachmentNames; // 0x52	
	bool m_bShouldDrawControlPointAxes; // 0x53	
	bool m_bAnimationNonLooping; // 0x54	
};

// Alignment: 7
// Size: 0x1c0
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x180	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x184	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x190	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x194	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x1a0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1ac	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1b0	
};

// Alignment: 0
// Size: 0x180
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 12
// Size: 0x1b0
class C_OP_PercentageBetweenCPLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x184	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x188	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x18c	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x190	
	// MPropertyFriendlyName "output starting control point number"
	int32_t m_nOutputStartCP; // 0x194	
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	int32_t m_nOutputStartField; // 0x198	
	// MPropertyFriendlyName "output ending control point number"
	int32_t m_nOutputEndCP; // 0x19c	
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	int32_t m_nOutputEndField; // 0x1a0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a4	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x1a8	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1a9	
};

// Alignment: 15
// Size: 0x6c0
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x188	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x270	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x358	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x440	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x528	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x52c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x52d	
private:
	[[maybe_unused]] uint8_t __pad05ad[0x3]; // 0x5ad
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b4[0x4]; // 0x5b4
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x5b8	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x6a0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x6a4	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x6a8	
private:
	[[maybe_unused]] uint8_t __pad06a9[0x3]; // 0x6a9
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x6ac	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x6b8	
};

// Alignment: 3
// Size: 0x280
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x194	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x198	
};

// Alignment: 3
// Size: 0x1e0
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x1d0	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x1d4	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x1d8	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x184	
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x188	
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x18c	
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x190	
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x194	
};

// Alignment: 9
// Size: 0x1b0
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x180	
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x184	
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x188	
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x18c	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x190	
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x194	
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x198	
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x19c	
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x1a0	
};

// Alignment: 4
// Size: 0x1c0
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x180	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x184	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x24]; // 0x18c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0	
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x180	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x188	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x190	
};

// Alignment: 4
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1b0	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x1b8	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x1c0	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1c8	
};

// Alignment: 10
// Size: 0x1c0
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0180[0x18]; // 0x180
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x198	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x19c	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1a0	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1a4	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x1a8	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x1ac	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x1b0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b4	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1b8	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x1bc	
};

// Alignment: 4
// Size: 0x2a0
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x180	
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x268	
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x26c	
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x270	
};

// Alignment: 5
// Size: 0x1b0
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1a0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1a4	
};

// Alignment: 57
// Size: 0x16f0
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x2b8	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x3a0	
private:
	[[maybe_unused]] uint8_t __pad03a4[0x4]; // 0x3a4
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x3a8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x7d8	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0x7dc	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0x7e0	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterXOffset; // 0x7e8	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterYOffset; // 0x8d0	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0x9b8	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0x9bc	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0x9c0	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0x9d8	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0x9dc	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0x9e0	
private:
	[[maybe_unused]] uint8_t __pad09e1[0x7]; // 0x9e1
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flSelfIllumAmount; // 0x9e8	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flDiffuseAmount; // 0xad0	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0xbb8	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0xbbc	
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	ParticleLightingQuality_t m_nLightingMode; // 0xbc0	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0xbc4	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0xbc8	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	bool m_bSaturateColorPreAlphaBlend; // 0xbc9	
private:
	[[maybe_unused]] uint8_t __pad0bca[0x6]; // 0xbca
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAddSelfAmount; // 0xbd0	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flDesaturation; // 0xcb8	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flOverbrightFactor; // 0xda0	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0xe88	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0xe8c	
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0xe90	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0xe94	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e9c[0x4]; // 0xe9c
public:
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAlphaReferenceSoftness; // 0xea0	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToZero; // 0xf88	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToOne; // 0x1070	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1158	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1159	
private:
	[[maybe_unused]] uint8_t __pad115a[0x6]; // 0x115a
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionFloatInput m_flRefractAmount; // 0x1160	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1248	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x124c	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1250	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1251	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x1252	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x12d2	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x12d3	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1353	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1354	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1355	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1356	
private:
	[[maybe_unused]] uint8_t __pad1357[0x1]; // 0x1357
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1358	
private:
	[[maybe_unused]] uint8_t __pad135c[0x4]; // 0x135c
public:
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMinDist; // 0x1360	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMaxDist; // 0x1448	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x1530	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x1534	
	// MPropertyStartGroup "Color and alpha adjustments/Dota Fog & Light"
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	bool m_bTintByFOW; // 0x1538	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	bool m_bTintByGlobalLight; // 0x1539	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x153a	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x153b	
};

// Alignment: 8
// Size: 0x310
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x188	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x18c	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x190	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x194	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x214	
private:
	[[maybe_unused]] uint8_t __pad0215[0x3]; // 0x215
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x220	
};

// Alignment: 1
// Size: 0x5b0
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x180	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x188	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1a0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1b8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
};

// Alignment: 2
// Size: 0x270
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x188	
};

// Alignment: 7
// Size: 0x1a0
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x184	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x188	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x18c	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x190	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x194	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x198	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x180	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x184	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x188	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x18c	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x190	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x194	
};

// Alignment: 4
// Size: 0x280
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x180	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x184	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x190	
};

// Alignment: 7
// Size: 0x370
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x180	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x18c	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x198	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x19c	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x19d	
private:
	[[maybe_unused]] uint8_t __pad019e[0x2]; // 0x19e
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1a0	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x288	
};

// Alignment: 2
// Size: 0x10
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0	
	// MPropertyFriendlyName "Relative probability"
	float m_flRelativeProbabilityOfSpawn; // 0x8	
};

// Alignment: 5
// Size: 0x450
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x190	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x278	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x360	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x448	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x449	
};

// Alignment: 4
// Size: 0x1a0
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x180	
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x181	
private:
	[[maybe_unused]] uint8_t __pad0182[0x2]; // 0x182
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x184	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x188	
};

// Alignment: 15
// Size: 0x1c0
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x180	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x184	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x188	
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x18c	
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x190	
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x194	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x198	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x199	
private:
	[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x19c	
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x1a0	
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x1a4	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1a8	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x1ac	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1b0	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1bc	
};

// Alignment: 8
// Size: 0x1a0
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x188	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x19c	
};

// Alignment: 12
// Size: 0x1d0
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x19c	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1a8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1ac	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1b0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b4	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x3]; // 0x1b9
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1bc	
};

// Alignment: 10
// Size: 0x1b0
class C_OP_PercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x184	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x188	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x190	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x194	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x198	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x19c	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x1a0	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1a1	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x190
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x180	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; // 0x181
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x188	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x18c	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x190	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x194	
};

// Alignment: 9
// Size: 0x230
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x180	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x184	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x188	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x18c	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x190	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x210	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x214	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0xc]; // 0x21c
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x228	
};

// Alignment: 4
// Size: 0x1a0
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x180	
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x184	
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x190	
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x194	
};

// Alignment: 15
// Size: 0x678
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleV; // 0xe8	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetU; // 0x1d0	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetV; // 0x2b8	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionFloatInput m_flFinalTextureUVRotation; // 0x3a0	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionFloatInput m_flZoomScale; // 0x488	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionFloatInput m_flDistortion; // 0x570	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x658	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x659	
private:
	[[maybe_unused]] uint8_t __pad065a[0x2]; // 0x65a
public:
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x65c	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x660	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x664	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x668	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x66c	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x670	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x190	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x194	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x198	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x184	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x190	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x194	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x198	
};

// Alignment: 5
// Size: 0x210
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x180	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x184	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x188	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x18c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x20c	
};

// Alignment: 1
// Size: 0x190
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
};

// Alignment: 6
// Size: 0x190
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x180	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x184	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x188	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x18c	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x18d	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x18e	
};

// Alignment: 4
// Size: 0x1b0
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x190	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x194	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x198	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x19c	
};

// Alignment: 5
// Size: 0x1b0
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x190	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x194	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x198	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x19c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1a0	
};

// Alignment: 9
// Size: 0x200
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x1d0	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x1d4	
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x1d8	
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x1dc	
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x1e0	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1e4	
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x1e8	
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x1ec	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x1f0	
};

// Alignment: 4
// Size: 0x190
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x180	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x184	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x188	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x18c	
};

// Alignment: 1
// Size: 0x280
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x190	
};

// Alignment: 3
// Size: 0x190
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x188	
};

// Alignment: 0
// Size: 0x430
class CPerParticleVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class IControlPointEditorData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 4
// Size: 0x1a0
class C_OP_RemapCPOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x184	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x190	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x191	
};

// Alignment: 4
// Size: 0x6b0
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x190	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x5c0	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x6a8	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x6ac	
};

// Alignment: 10
// Size: 0x1c0
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x190	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x194	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x198	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x19c	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1a0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1a4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1a8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1ac	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x1b0	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x3]; // 0x1b1
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x1b4	
};

// Alignment: 11
// Size: 0x1b0
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x180	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x184	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x19c	
private:
	[[maybe_unused]] uint8_t __pad019d[0x3]; // 0x19d
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1a4	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x1a5	
};

// Alignment: 7
// Size: 0x1b0
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x190	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x194	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x198	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x19c	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x1a0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1a4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1a8	
};

// Alignment: 2
// Size: 0x1a0
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x190	
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x194	
};

// Alignment: 17
// Size: 0x11e0
class C_INIT_CreateWithinSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x180	
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x268	
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x350	
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0x780	
	// MPropertyFriendlyName "randomly distribute between the control point and control point max"
	bool m_bDistributeInCPRange; // 0x78c	
private:
	[[maybe_unused]] uint8_t __pad078d[0x3]; // 0x78d
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x790	
	// MPropertyFriendlyName "max control point number"
	// MPropertySuppressExpr "m_bDistributeInCPRange != true"
	int32_t m_nControlPointNumberMax; // 0x794	
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x798	
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x880	
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0x968	
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0x96c	
private:
	[[maybe_unused]] uint8_t __pad096d[0x1]; // 0x96d
public:
	// MPropertyFriendlyName "randomly distribute to highest supplied control point"
	// MParticleMaxVersion
	bool m_bUseHighestEndCP; // 0x96e	
private:
	[[maybe_unused]] uint8_t __pad096f[0x1]; // 0x96f
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0974[0x4]; // 0x974
public:
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x978	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xda8	
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x11d8	
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x11dc	
};

// Alignment: 4
// Size: 0x190
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x188	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c	
};

// Alignment: 29
// Size: 0xdb0
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x1d8	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x610	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x7]; // 0x6f9
public:
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0x700	
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0x7e8	
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0x8d0	
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09bc[0x4]; // 0x9bc
public:
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0x9c0	
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xaa8	
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0xb90	
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0xc78	
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0xc79	
private:
	[[maybe_unused]] uint8_t __pad0c7a[0x6]; // 0xc7a
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0xc80	
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0xc88	
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0xc8c	
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionFloatInput m_flFogContribution; // 0xc90	
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0xd78	
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0xd7c	
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0xd80	
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0xd81	
private:
	[[maybe_unused]] uint8_t __pad0d82[0x2]; // 0xd82
public:
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0xd84	
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0xd88	
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0xd8c	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0xd94	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0xd98	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0xd9c	
};

// Alignment: 1
// Size: 0x190
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x180	
};

// Alignment: 2
// Size: 0xf0
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInput; // 0x8	
};

// Alignment: 0
// Size: 0x8
class IParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 11
// Size: 0x1b0
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x188	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x19c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1a0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a4	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1a8	
};

// Alignment: 6
// Size: 0x200
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x1d0	
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x1d8	
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x1e0	
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x1e8	
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x1f0	
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x1f8	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x184	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x190	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x40
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	int32_t m_nStartControlPointNumber; // 0x0	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nEndControlPointNumber; // 0x4	
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	int32_t m_nBulgeControl; // 0x8	
	// MPropertyFriendlyName "random bulge"
	float m_flBulge; // 0xc	
	// MPropertyFriendlyName "mid point position"
	float m_flMidPoint; // 0x10	
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14	
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20	
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c	
};

// Alignment: 0
// Size: 0x1a0
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x280
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x190	
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x278	
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x279	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x1e0
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x180	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x184	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x188	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x18c	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x190	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0xe]; // 0x192
public:
	CPathParameters m_PathParams; // 0x1a0	
};

// Alignment: 2
// Size: 0x1a0
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x190	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x194	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_ExternalGenericForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "strength"
	float m_flStrength; // 0x180	
	// MPropertyFriendlyName "curl strength"
	float m_flCurlStrength; // 0x184	
	// MPropertyFriendlyName "linear strength"
	float m_flLinearStrength; // 0x188	
	// MPropertyFriendlyName "radial strength"
	float m_flRadialStrength; // 0x18c	
	// MPropertyFriendlyName "rotation strength"
	float m_flRotationStrength; // 0x190	
};

// Alignment: 9
// Size: 0x1e0
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x188	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1a0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1b8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1d0	
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x1dc	
};

// Alignment: 1
// Size: 0x190
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Acceleration"
	float m_flAccel; // 0x180	
};

// Alignment: 10
// Size: 0x1d0
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x180	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x184	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x188	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x18c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x190	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x194	
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x24]; // 0x19c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1c4	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1c5	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0xc]; // 0x184
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x190	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x194	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x19c	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Alignment: 7
// Size: 0x1a0
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x180	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x184	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x188	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x18c	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x190	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x194	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x198	
};

// Alignment: 3
// Size: 0x190
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x180	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x184	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x188	
};

// Alignment: 7
// Size: 0x1a0
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x180	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x184	
	// MPropertyFriendlyName "maintain count scale control point"
	int32_t m_nScaleControlPoint; // 0x188	
	// MPropertyFriendlyName "maintain count scale control point field"
	int32_t m_nScaleControlPointField; // 0x18c	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x190	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x194	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x198	
};

// Alignment: 3
// Size: 0x190
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x180	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x184	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x188	
};

// Alignment: 3
// Size: 0x190
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x180	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x184	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x188	
};

// Alignment: 11
// Size: 0x220
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x1d0	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x1d1	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x1d2	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x1d3	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x1d8	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x1dc	
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x1e0	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x1e8	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x1ec	
private:
	[[maybe_unused]] uint8_t __pad01ed[0x3]; // 0x1ed
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1f0	
};

// Alignment: 6
// Size: 0x1b0
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x188	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1a0	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1a1	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1a2	
private:
	[[maybe_unused]] uint8_t __pad01a3[0x1]; // 0x1a3
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a4	
};

// Alignment: 3
// Size: 0x6a0
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x180	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x268	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x698	
};

// Alignment: 4
// Size: 0x190
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184	
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x188	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x18c	
};

// Alignment: 11
// Size: 0xa80
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x184	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x188	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x18c	
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x190	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0x5c0	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0x5c4	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x5c8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x9f8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xa78	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0xa79	
};

// Alignment: 3
// Size: 0x270
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x26c	
};

// Alignment: 4
// Size: 0x6a0
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x180	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x5b0	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x698	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x69c	
};

// Alignment: 15
// Size: 0x660
class C_OP_DistanceToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x184	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x188	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x190	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x194	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x198	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x199	
private:
	[[maybe_unused]] uint8_t __pad0219[0x3]; // 0x219
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x21c	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x220	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x224	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x228	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x22c	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x22d	
private:
	[[maybe_unused]] uint8_t __pad022e[0x2]; // 0x22e
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x230	
};

// Alignment: 12
// Size: 0x1e0
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x190	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x191	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x192	
private:
	[[maybe_unused]] uint8_t __pad0193[0x1]; // 0x193
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x194	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x198	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x19c	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x1a0	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1a4	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x1b0	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x1bc	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x1c8	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x1d4	
};

// Alignment: 5
// Size: 0x1b0
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x180	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x184	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x188	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x190	
};

// Alignment: 10
// Size: 0x540
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x180	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x184	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x190	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x278	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x360	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x448	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x530	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x531	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x532	
};

// Alignment: 5
// Size: 0x450
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x180	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x268	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x350	
private:
	[[maybe_unused]] uint8_t __pad0354[0x4]; // 0x354
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x358	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x440	
};

// Alignment: 13
// Size: 0x1d0
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x188	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x198	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1a4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1b0	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1bc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1c0	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x1c4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c8	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x1cc	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x1cd	
};

// Alignment: 12
// Size: 0xa60
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x188	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x3]; // 0x5b9
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x5bc	
	// MPropertyFriendlyName "particle number"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x5c0	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x6a8	
private:
	[[maybe_unused]] uint8_t __pad06ac[0x4]; // 0x6ac
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x6b0	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0x798	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0x880	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0x968	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0x96c	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x970	
};

// Alignment: 7
// Size: 0x230
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x180	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x18c	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x198	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x199	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x19a	
private:
	[[maybe_unused]] uint8_t __pad021a[0x2]; // 0x21a
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x21c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x220	
};

// Alignment: 9
// Size: 0x1d0
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x190	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x194	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x198	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x19c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1a0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1a4	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x1a8	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x1b0	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x1b8	
};

// Alignment: 7
// Size: 0x1b0
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x188	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x18c	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x190	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x19c	
private:
	[[maybe_unused]] uint8_t __pad019d[0x3]; // 0x19d
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x1a0	
};

// Alignment: 10
// Size: 0xda0
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x188	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x270	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x358	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x440	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x528	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0x958	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd88	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0xd8c	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0xd90	
};

// Alignment: 5
// Size: 0x280
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x180	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x184	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x190	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x278	
};

// Alignment: 2
// Size: 0x190
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x184	
};

// Alignment: 5
// Size: 0x9f0
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x180	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x5b0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9e0	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x9e4	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x9e5	
};

// Alignment: 2
// Size: 0x190
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x184	
};

// Alignment: 21
// Size: 0xde0
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x2b8	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x3a0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x7d8	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0x7e8	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0x8d0	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0x9b8	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xaa0	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xb88	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0xc70	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0xd5c	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0xd60	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0xd64	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0xd68	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0xd6c	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d74[0x4]; // 0xd74
public:
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d90[0x18]; // 0xd90
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0xda8	
};

// Alignment: 8
// Size: 0x1a0
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x184	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x188	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x18c	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x190	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x194	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x198	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x280
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x270	
};

// Alignment: 9
// Size: 0x1a0
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x198	
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x19c	
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x19d	
};

// Alignment: 3
// Size: 0x1b0
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x190	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x194	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x1a0	
};

// Alignment: 3
// Size: 0x190
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x184	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x188	
};

// Alignment: 13
// Size: 0x240
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x180	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x200	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x204	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x210	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x21c	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x220	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x221	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x222	
private:
	[[maybe_unused]] uint8_t __pad0223[0x1]; // 0x223
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x224	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x228	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x229	
private:
	[[maybe_unused]] uint8_t __pad022a[0x2]; // 0x22a
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x22c	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x230	
};

// Alignment: 4
// Size: 0x280
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x188	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x270	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x274	
};

// Alignment: 5
// Size: 0x360
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x184	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x7]; // 0x189
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x190	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x278	
};

// Alignment: 8
// Size: 0x650
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x184	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x190	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x5c0	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x5cc	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x5cd	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x5ce	
};

// Alignment: 3
// Size: 0x5c0
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5b4	
};

// Alignment: 1
// Size: 0x190
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x180	
};

// Alignment: 8
// Size: 0x1a0
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x188	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x19c	
};

// Alignment: 3
// Size: 0x440
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x180	
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x268	
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x350	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x180	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x184	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x188	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x18c	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x190	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x194	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x184	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x188	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x18c	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x194	
};

// Alignment: 2
// Size: 0x350
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x180	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x268	
};

// Alignment: 4
// Size: 0x190
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x180	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x184	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x188	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x18c	
};

// Alignment: 17
// Size: 0x1c0
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x180	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x3]; // 0x189
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x18c	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x190	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x191	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x192	
private:
	[[maybe_unused]] uint8_t __pad0193[0x1]; // 0x193
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x194	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x198	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x19c	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	int32_t m_nFullLoopIncrement; // 0x1a0	
	// MPropertyFriendlyName "Snapshot start point"
	int32_t m_nSnapShotStartPoint; // 0x1a4	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x1a8	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x1ac	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x1b0	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x1b1	
	// MPropertyFriendlyName "Set Radius"
	bool m_bCopyRadius; // 0x1b2	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x290
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x184	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x190	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x19c	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x1a0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1a4	
private:
	[[maybe_unused]] uint8_t __pad01a5[0x3]; // 0x1a5
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x1a8	
};

// Alignment: 2
// Size: 0x190
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x180	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x184	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x180	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x184	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x3]; // 0x189
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x18c	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x190	
};

// Alignment: 4
// Size: 0x6a0
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5b4	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x5b8	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x180	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x18c	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x190	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 14
// Size: 0x740
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control_point_number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x184	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x188	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x18c	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x190	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x194	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x214	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x215	
private:
	[[maybe_unused]] uint8_t __pad0216[0x2]; // 0x216
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x21c	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x220	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x224	
private:
	[[maybe_unused]] uint8_t __pad0225[0x3]; // 0x225
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x228	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x658	
};

// Alignment: 3
// Size: 0x14
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_controlPointNameString; // 0x0	
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffsetFromControlPoint; // 0x4	
	// MPropertyFriendlyName "Use local space offset"
	bool m_bOffsetInLocalSpace; // 0x10	
};

// Alignment: 4
// Size: 0x190
class C_OP_RemapCPOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x188	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x18c	
};

// Alignment: 3
// Size: 0x190
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x184	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x188	
};

// Alignment: 9
// Size: 0xd90
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x188	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x5b8	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x9e8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0xad0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0xbb8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0xca0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd88	
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0xd8c	
};

// Alignment: 6
// Size: 0x1b0
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "yaw offset min"
	float m_flDegreesMin; // 0x180	
	// MPropertyFriendlyName "yaw offset max"
	float m_flDegreesMax; // 0x184	
	// MPropertyFriendlyName "yaw initial"
	float m_flDegrees; // 0x188	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad0190[0xc]; // 0x190
public:
	// MPropertyFriendlyName "yaw random exponent"
	float m_flRotationRandExponent; // 0x19c	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x1a0	
};

// Alignment: 3
// Size: 0x190
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x188	
};

// Alignment: 8
// Size: 0x1b0
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x180	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x181	
private:
	[[maybe_unused]] uint8_t __pad0182[0x2]; // 0x182
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x184	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x188	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x18c	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x190	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x194	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x198	
};

// Alignment: 1
// Size: 0x18
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	float m_flTimeDuration; // 0x14	
};

// Alignment: 4
// Size: 0x380
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x26c	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x270	
};

// Alignment: 2
// Size: 0x190
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x180	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x184	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x180	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x188	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x190	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x9f0
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x180	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x5b0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x9e0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x9e4	
};

// Alignment: 2
// Size: 0x190
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x180	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x184	
};

// Alignment: 16
// Size: 0x330
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x180	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x268	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x26c	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x270	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x274	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x278	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2f8	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x2fc	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x300	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x304	
private:
	[[maybe_unused]] uint8_t __pad0308[0x8]; // 0x308
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x310	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x314	
private:
	[[maybe_unused]] uint8_t __pad0315[0x2]; // 0x315
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x317	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad0319[0x3]; // 0x319
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x31c	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x320	
};

// Alignment: 5
// Size: 0x1b0
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1a0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1a4	
};

// Alignment: 6
// Size: 0x290
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x190	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x194	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x198	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x280	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x281	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x282	
};

// Alignment: 1
// Size: 0x190
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x180	
};

// Alignment: 3
// Size: 0x1a0
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x184	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x190	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x360
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x188	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x270	
private:
	[[maybe_unused]] uint8_t __pad0274[0x4]; // 0x274
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x278	
};

// Alignment: 2
// Size: 0x1e0
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x1d8	
};

// Alignment: 4
// Size: 0x1a0
class C_INIT_RemapCPOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x184	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x190	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x191	
};

// Alignment: 5
// Size: 0x360
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x190	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x278	
};

// Alignment: 2
// Size: 0x8
struct SequenceWeightedList_t
{
public:
	// MPropertyFriendlyName "sequence"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequence; // 0x0	
	// MPropertyFriendlyName "weight"
	float m_flRelativeWeight; // 0x4	
};

// Alignment: 1
// Size: 0x190
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x180	
};

// Alignment: 4
// Size: 0x190
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x180	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x184	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x188	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x18c	
};

// Alignment: 1
// Size: 0x190
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x180	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x184	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x7]; // 0x189
public:
	CPathParameters m_PathParams; // 0x190	
};

// Alignment: 2
// Size: 0x438
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8	
};

// Alignment: 6
// Size: 0x1e0
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x180	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x184	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x188	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x189	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x18a	
private:
	[[maybe_unused]] uint8_t __pad018b[0x5]; // 0x18b
public:
	CPathParameters m_PathParams; // 0x190	
};

// Alignment: 7
// Size: 0x1a0
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x198	
};

// Alignment: 0
// Size: 0x1d0
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x1a0
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x180	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x184	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x188	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x18c	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x190	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x194	
};

// Alignment: 14
// Size: 0xd30
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x180	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x181	
private:
	[[maybe_unused]] uint8_t __pad0182[0x2]; // 0x182
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x188	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x190	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x278	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x6a8	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xad8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xadc	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xadd	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xade	
private:
	[[maybe_unused]] uint8_t __pad0b5e[0x2]; // 0xb5e
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xb60	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0xc48	
};

// Alignment: 3
// Size: 0x190
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x180	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x184	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x188	
};

// Alignment: 3
// Size: 0x190
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x180	
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x184	
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x188	
};

// Alignment: 3
// Size: 0x1b0
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x190	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x194	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x1a0	
};

// Alignment: 10
// Size: 0x700
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x180	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x268	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x350	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x438	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x520	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x608	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x6f0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x6f4	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x6f5	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x6f6	
};

// Alignment: 1
// Size: 0x1e0
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1d0	
};

// Alignment: 7
// Size: 0x1c0
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0180[0x18]; // 0x180
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x198	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x19c	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1a0	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1a4	
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x1a8	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1ac	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x1b0	
};

// Alignment: 24
// Size: 0x1a00
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionFloatInput m_nSequenceOverride; // 0x16f0	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x17d8	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x17dc	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x17e0	
private:
	[[maybe_unused]] uint8_t __pad17e1[0x3]; // 0x17e1
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual size"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x17e4	
	// MPropertyFriendlyName "maximum visual size"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x17e8	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x17ec	
	// MPropertyStartGroup
	// MPropertyFriendlyName "size at which to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x17f0	
	// MPropertyFriendlyName "size at which to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x18d8	
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "start dot product value for fading as the particle normal becomes aligned with the view vector"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x19c0	
	// MPropertyFriendlyName "end dot product value for fading as the particle normal becomes aligned with the view vector"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x19c4	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x19c8	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x19c9	
private:
	[[maybe_unused]] uint8_t __pad19ca[0x2]; // 0x19ca
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x19cc	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x19d0	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x19d4	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x19d5	
private:
	[[maybe_unused]] uint8_t __pad19d9[0x3]; // 0x19d9
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x19dc	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x19e0	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x19e4	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x19e8	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x19ec	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	bool m_bParticleShadows; // 0x19f0	
private:
	[[maybe_unused]] uint8_t __pad19f1[0x3]; // 0x19f1
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x19f4	
};

// Alignment: 1
// Size: 0x270
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x180	
};

// Alignment: 7
// Size: 0x200
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x1e0	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x1e4	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x1ec	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x1f0	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x1f4	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x1f8	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x1c0
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x18]; // 0x184
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x19c	
private:
	[[maybe_unused]] uint8_t __pad01a0[0xc]; // 0x1a0
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1ac	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1b0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b4	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1b8	
};

// Alignment: 7
// Size: 0x290
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x180	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x200	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x280	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x284	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x288	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x28c	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x28d	
};

// Alignment: 5
// Size: 0x1f0
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0xc]; // 0x184
public:
	CPathParameters m_PathParams; // 0x190	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x1d4	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1e0	
};

// Alignment: 4
// Size: 0x1a0
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x184	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x190	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x194	
};

// Alignment: 8
// Size: 0x1e0
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x180	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x184	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x188	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x18c	
	CPathParameters m_PathParameters; // 0x190	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x1d0	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x1d4	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x1d8	
};

// Alignment: 4
// Size: 0x1b0
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x190	
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x194	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x198	
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x1a4	
};

// Alignment: 14
// Size: 0x250
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x190	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x194	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x198	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x19c	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a1[0x3]; // 0x1a1
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x1a4	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x1a8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1ac	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1b0	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1b4	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x1b8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x1bc	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x1bd	
private:
	[[maybe_unused]] uint8_t __pad023d[0x3]; // 0x23d
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x240	
};

// Alignment: 10
// Size: 0x370
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x184	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x188	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x18c	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x190	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x194	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x198	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x280	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x368	
};

// Alignment: 3
// Size: 0x190
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x180	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184	
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x188	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x180	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x184	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x188	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x18c	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x190	
};

// Alignment: 4
// Size: 0x380
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x26c	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x270	
};

// Alignment: 5
// Size: 0x210
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x184	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x185	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x186	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x187	
};

// Alignment: 3
// Size: 0x5c0
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x184	
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x188	
};

// Alignment: 3
// Size: 0x78
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
};

// Alignment: 7
// Size: 0x1a0
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x184	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x188	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x190	
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x194	
private:
	[[maybe_unused]] uint8_t __pad0195[0x3]; // 0x195
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x198	
};

// Alignment: 2
// Size: 0x1a0
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x180	
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x18c	
};

// Alignment: 7
// Size: 0x210
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x1d0	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x1d8	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x1e0	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x1e8	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x1f0	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x1f8	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x200	
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0180[0x4]; // 0x180
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
};

// Alignment: 5
// Size: 0x1b0
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x190	
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x194	
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x1a0	
};

// Alignment: 2
// Size: 0x350
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x180	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x268	
};

// Alignment: 3
// Size: 0x280
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x270	
};

// Alignment: 5
// Size: 0x1c0
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x180	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x184	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x24]; // 0x18c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1b4	
};

// Alignment: 5
// Size: 0x1b0
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x180	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x184	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x188	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x189	
private:
	[[maybe_unused]] uint8_t __pad018a[0x6]; // 0x18a
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x190	
};

// Alignment: 6
// Size: 0x1d0
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x180	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x184	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x188	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad0190[0x30]; // 0x190
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1c0	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x1c1	
};

// Alignment: 13
// Size: 0x1b0
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x180	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x184	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x188	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x18c	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x190	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x194	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x195	
private:
	[[maybe_unused]] uint8_t __pad0196[0x2]; // 0x196
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x198	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x19c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1a0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1a4	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1a8	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1ac	
};

// Alignment: 5
// Size: 0x4a0
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionFloatInput m_cubeWidth; // 0x1d0	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionFloatInput m_cutoffRadius; // 0x2b8	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionFloatInput m_renderRadius; // 0x3a0	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad048c[0x4]; // 0x48c
public:
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x490	
};

// Alignment: 2
// Size: 0x5c0
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0	
};

// Alignment: 23
// Size: 0x6e0
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x184	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x190	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x194	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x1a0	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x288	
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x370	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x458	
	// MPropertyFriendlyName "control point movement distance tolerance"
	float m_flCpMovementTolerance; // 0x540	
	// MPropertyFriendlyName "trace accuracy tolerance"
	float m_flTraceTolerance; // 0x544	
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x548	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x54c	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x54d	
private:
	[[maybe_unused]] uint8_t __pad054e[0x2]; // 0x54e
public:
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	float m_flCollisionConfirmationSpeed; // 0x550	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x560	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x648	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x64c	
private:
	[[maybe_unused]] uint8_t __pad064d[0x3]; // 0x64d
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x650	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x654	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x6d4	
};

// Alignment: 3
// Size: 0x2d0
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x1d0	
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x2b8	
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x2c0	
};

// Alignment: 4
// Size: 0x190
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x180	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x184	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x188	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c	
};

// Alignment: 13
// Size: 0x400
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x180	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x268	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x350	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3d0	
private:
	[[maybe_unused]] uint8_t __pad03d4[0xc]; // 0x3d4
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3e0	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3e4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3e5	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x3e6	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x3e7	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x3e8	
private:
	[[maybe_unused]] uint8_t __pad03e9[0x3]; // 0x3e9
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x3ec	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3f0	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3f4	
};

// Alignment: 33
// Size: 0x690
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x480]; // 0x184
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x604	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x608	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x60c	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x610	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x614	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x620	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x62c	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x638	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x644	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x648	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x64c	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x650	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x654	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x658	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x65c	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x660	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x664	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x668	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x66c	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x670	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x674	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x675	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x676	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x677	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x678	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x679	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x67a	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x67b	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x67c	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x67d	
private:
	[[maybe_unused]] uint8_t __pad067e[0x4]; // 0x67e
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x682	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x683	
};

// Alignment: 2
// Size: 0x280
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x198	
};

// Alignment: 4
// Size: 0x9f0
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x180	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x5b0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9e0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9e4	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x180	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x184	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x188	
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x18c	
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x190	
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x194	
};

// Alignment: 2
// Size: 0x1e0
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x1d0	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x1d4	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 59
// Size: 0x350
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertySuppressField
	CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xa0	
	// MPropertySuppressField
	CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0xa8]; // 0xd0
public:
	// MPropertySuppressField
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178	
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x17c	
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x3c]; // 0x184
public:
	// MPropertyFriendlyName "bounding box min"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1c0	
	// MPropertyFriendlyName "bounding box max"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x1cc	
	// MPropertyFriendlyName "snapshot control point"
	int32_t m_nSnapshotControlPoint; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "snapshot"
	// MPropertyAttributeEditor "AssetBrowse( vsnap )"
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x1e0	
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x18]; // 0x1f0
public:
	// MPropertyFriendlyName "reference replacement definition"
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x208	
	// MPropertyFriendlyName "cull replacement definition"
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x210	
	// MPropertyFriendlyName "cull radius"
	// MParticleAdvancedField
	float m_flCullRadius; // 0x218	
	// MPropertyFriendlyName "cull cost"
	// MParticleAdvancedField
	float m_flCullFillCost; // 0x21c	
	// MPropertyFriendlyName "cull control point"
	// MParticleAdvancedField
	int32_t m_nCullControlPoint; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0xc]; // 0x224
public:
	// MPropertyFriendlyName "fallback replacement definition"
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x230	
	// MPropertyFriendlyName "fallback max count"
	// MParticleAdvancedField
	int32_t m_nFallbackMaxCount; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad023c[0x4]; // 0x23c
public:
	// MPropertyFriendlyName "low violence definition"
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x240	
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	Color m_ConstantColor; // 0x248	
	// MPropertyFriendlyName "normal"
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x24c	
	// MPropertyFriendlyName "radius"
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x258	
	// MPropertyFriendlyName "rotation"
	float m_flConstantRotation; // 0x25c	
	// MPropertyFriendlyName "rotation speed"
	float m_flConstantRotationSpeed; // 0x260	
	// MPropertyFriendlyName "lifetime"
	float m_flConstantLifespan; // 0x264	
	// MPropertyFriendlyName "sequence number"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x268	
	// MPropertyFriendlyName "sequence number 1"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x26c	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x270	
	// MPropertyFriendlyName "maximum time step"
	// MParticleAdvancedField
	float m_flMaximumTimeStep; // 0x274	
	// MPropertyFriendlyName "maximum sim tick rate"
	// MParticleAdvancedField
	float m_flMaximumSimTime; // 0x278	
	// MPropertyFriendlyName "minimum sim tick rate"
	// MParticleAdvancedField
	float m_flMinimumSimTime; // 0x27c	
	// MPropertyFriendlyName "minimum simulation time step"
	// MParticleAdvancedField
	float m_flMinimumTimeStep; // 0x280	
	// MPropertyFriendlyName "minimum rendered frames"
	// MParticleAdvancedField
	int32_t m_nMinimumFrames; // 0x284	
	// MPropertyFriendlyName "minimum CPU level"
	// MParticleAdvancedField
	int32_t m_nMinCPULevel; // 0x288	
	// MPropertyFriendlyName "minimum GPU level"
	// MParticleAdvancedField
	int32_t m_nMinGPULevel; // 0x28c	
	// MPropertyFriendlyName "view model effect"
	// MParticleAdvancedField
	bool m_bViewModelEffect; // 0x290	
	// MPropertyFriendlyName "screen space effect"
	// MParticleAdvancedField
	bool m_bScreenSpaceEffect; // 0x291	
private:
	[[maybe_unused]] uint8_t __pad0292[0x16]; // 0x292
public:
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x2a8	
	// MPropertyFriendlyName "time to sleep when not drawn"
	float m_flNoDrawTimeToGoToSleep; // 0x2c0	
	// MPropertyFriendlyName "maximum draw distance"
	float m_flMaxDrawDistance; // 0x2c4	
	// MPropertyFriendlyName "start fade distance"
	float m_flStartFadeDistance; // 0x2c8	
	// MPropertyFriendlyName "maximum creation distance"
	float m_flMaxCreationDistance; // 0x2cc	
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	// MParticleAdvancedField
	int32_t m_nSkipRenderControlPoint; // 0x2d0	
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	// MParticleAdvancedField
	int32_t m_nAllowRenderControlPoint; // 0x2d4	
	// MPropertyFriendlyName "minimum free particles to aggregate"
	// MParticleAdvancedField
	int32_t m_nAggregationMinAvailableParticles; // 0x2d8	
	// MPropertyFriendlyName "aggregation radius"
	// MParticleAdvancedField
	float m_flAggregateRadius; // 0x2dc	
	// MPropertyFriendlyName "freeze simulation after time"
	// MParticleAdvancedField
	float m_flStopSimulationAfterTime; // 0x2e0	
	// MPropertyFriendlyName "pre-simulation time"
	// MParticleAdvancedField
	float m_flPreSimulationTime; // 0x2e4	
private:
	[[maybe_unused]] uint8_t __pad02e8[0x38]; // 0x2e8
public:
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	bool m_bShouldSort; // 0x320	
	// MPropertyFriendlyName "batch particle systems"
	// MParticleAdvancedField
	bool m_bShouldBatch; // 0x321	
private:
	[[maybe_unused]] uint8_t __pad0322[0x2]; // 0x322
public:
	// MPropertyFriendlyName "depth sort bias"
	float m_flDepthSortBias; // 0x324	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x1]; // 0x329
public:
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	// MParticleAdvancedField
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x32a	
};

// Alignment: 8
// Size: 0x820
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x1d0	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x1d4	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1d8	
	// MPropertyFriendlyName "material override"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x1f0	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x1f8	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x2e0	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x710	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x7f8	
};

// Alignment: 11
// Size: 0x1b0
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x188	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x19c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1a0	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x1a4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a8	
};

// Alignment: 5
// Size: 0x5d0
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x190	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x194	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x198	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x5c8	
};

// Alignment: 2
// Size: 0x190
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; // 0x181
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x190
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
};

// Alignment: 3
// Size: 0x190
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x184	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x188	
};

// Alignment: 3
// Size: 0x190
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x184	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x188	
};

// Alignment: 8
// Size: 0x390
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x190	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x194	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x1a0	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x288	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x294	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x2a0	
};

// Alignment: 25
// Size: 0xb8
class CNewParticleEffect : public IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CNewParticleEffect* m_pNext; // 0x10	
	CNewParticleEffect* m_pPrev; // 0x18	
	IParticleCollection* m_pParticles; // 0x20	
	char* m_pDebugName; // 0x28	
	struct 
	{
		uint8_t m_bDontRemove: 1; 		
		uint8_t m_bRemove: 1; 		
		uint8_t m_bNeedsBBoxUpdate: 1; 		
		uint8_t m_bIsFirstFrame: 1; 		
		uint8_t m_bAutoUpdateBBox: 1; 		
		uint8_t m_bAllocated: 1; 		
		uint8_t m_bSimulate: 1; 		
		uint8_t m_bShouldPerformCullCheck: 1; 		
		uint8_t m_bForceNoDraw: 1; 		
		uint8_t m_bDisableAggregation: 1; 		
		uint8_t m_bShouldSimulateDuringGamePaused: 1; 		
		uint8_t m_bShouldCheckFoW: 1; 		
		uint256_t __pad4: 180;
	}; // 192 bits
	Vector m_vSortOrigin; // 0x40	
	float m_flScale; // 0x4c	
	PARTICLE_EHANDLE__* m_hOwner; // 0x50	
	CParticleProperty* m_pOwningParticleProperty; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x10]; // 0x60
public:
	Vector m_LastMin; // 0x70	
	Vector m_LastMax; // 0x7c	
	CSplitScreenSlot m_nSplitScreenUser; // 0x88	
	Vector m_vecAggregationCenter; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad0098[0x18]; // 0x98
public:
	int32_t m_RefCount; // 0xb0	
};

// Alignment: 1
// Size: 0x270
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x180	
};

// Alignment: 3
// Size: 0x1b0
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x190	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x194	
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x1a0	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x1c0
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x180	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x184	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x188	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x18c	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x190	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x19c	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x1a8	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x1b4	
};

// Alignment: 3
// Size: 0x190
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x184	
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x188	
};

// Alignment: 8
// Size: 0x1d0
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x180	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x184	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x188	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x18c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x190	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x194	
private:
	[[maybe_unused]] uint8_t __pad0198[0x28]; // 0x198
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1c4	
};

// Alignment: 6
// Size: 0x1d0
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x180	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x184	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x188	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x18c	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x194	
};

// Alignment: 11
// Size: 0x240
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x190	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x194	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x198	
	// MPropertyFriendlyName "max trace length"
	float m_flTraceLength; // 0x19c	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x1a0	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x1a4	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x1a8	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1b4	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x234	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x238	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x239	
};

// Alignment: 4
// Size: 0x2d0
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x1d0	
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x1d4	
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x1e0	
};

// Alignment: 15
// Size: 0x6d0
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x184	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x188	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x18c	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x190	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x194	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x198	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x19c	
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x1a0	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x288	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x28c	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0291[0x7]; // 0x291
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x298	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x6c8	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x6cc	
};

// Alignment: 14
// Size: 0x1d0
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x180	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x18c	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x198	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x1a4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1b0	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1b4	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1b5	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1b6	
private:
	[[maybe_unused]] uint8_t __pad01b7[0x1]; // 0x1b7
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1b8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1bc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1c0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1c4	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1c8	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1cc	
};

// Alignment: 9
// Size: 0x540
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x180	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x3]; // 0x189
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x18c	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x7]; // 0x191
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_flIncrement; // 0x198	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x280	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x368	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x450	
};

// Alignment: 8
// Size: 0x2a0
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x1]; // 0x191
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x192	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x193	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x194	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x198	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x19c	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01b4[0x4]; // 0x1b4
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1b8	
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x180	
	// MPropertyFriendlyName "comparison control point number"
	int32_t m_nControlPointCompare; // 0x184	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nControlPointLocal; // 0x188	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x18c	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x190	
};

// Alignment: 7
// Size: 0x18e0
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x16f0	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x16f4	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x16f8	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x16fc	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x1700	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x17e8	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x18d0	
};

// Alignment: 10
// Size: 0x1c0
class C_OP_PercentageBetweenCPsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x184	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x188	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x198	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1a4	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1a8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1ac	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x1b0	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1b1	
};

// Alignment: 8
// Size: 0x240
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x180	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x18c	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x190	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x194	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1a0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0xc]; // 0x224
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x230	
};

// Alignment: 2
// Size: 0x190
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x180	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x184	
};

// Alignment: 5
// Size: 0x360
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x180	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x268	
	// MPropertyFriendlyName "emission scale from killed parent particles"
	float m_flInitFromKilledParentParticles; // 0x350	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x354	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x358	
};

// Alignment: 42
// Size: 0x1840
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1d0	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x4]; // 0x1f0
public:
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x1f4	
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x1f8	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x1fc	
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x1fd	
private:
	[[maybe_unused]] uint8_t __pad01fe[0x2]; // 0x1fe
public:
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x200	
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x630	
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "450"
	bool m_bIgnoreRadius; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a61[0x3]; // 0xa61
public:
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "450"
	int32_t m_nModelScaleCP; // 0xa64	
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xa68	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e99[0x3]; // 0xe99
public:
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0xe9c	
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0xea0	
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0xea1	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0xea2	
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0xea3	
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0xea4	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0xea8	
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0xeac	
	// MPropertyFriendlyName "activity override"
	// MPropertySortPriority "500"
	char m_ActivityName[256]; // 0xeb0	
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0xfb0	
private:
	[[maybe_unused]] uint8_t __pad0fb1[0x7]; // 0xfb1
public:
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0xfb8	
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0x3]; // 0xfc1
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0xfc4	
	// MPropertyFriendlyName "skin override CP"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fcc[0x4]; // 0xfcc
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0xfd0	
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0xfe8	
	// MPropertyFriendlyName "model override CP"
	int32_t m_nModelCP; // 0xfec	
	// MPropertyFriendlyName "model override economy loadout slot type"
	char m_EconSlotName[256]; // 0xff0	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x10f0	
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x10f1	
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	bool m_bUseRawMeshGroup; // 0x10f2	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x10f3	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x10f4	
	// MPropertyFriendlyName "render attribute"
	char m_szRenderAttribute[260]; // 0x10f5	
private:
	[[maybe_unused]] uint8_t __pad11f9[0x7]; // 0x11f9
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1200	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x12e8	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x13d0	
private:
	[[maybe_unused]] uint8_t __pad13d4[0x4]; // 0x13d4
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x13d8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x1808	
};

// Alignment: 0
// Size: 0x1a0
class C_OP_Spin : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 10
// Size: 0x1b0
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x184	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x185	
private:
	[[maybe_unused]] uint8_t __pad0186[0x2]; // 0x186
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x188	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x18c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x190	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x194	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x198	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x19c	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1a8	
};

// Alignment: 8
// Size: 0x210
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01e8[0x4]; // 0x1e8
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x1ec	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x1f0	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x1f4	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x1f8	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x1fc	
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x200	
};

// Alignment: 3
// Size: 0x1c0
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a0	
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x1a4	
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x1b0	
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x180	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x18c	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x198	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x19c	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x19d	
};

// Alignment: 0
// Size: 0x180
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x1b0
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x190	
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x194	
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x1a0	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x1a4	
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x1a8	
};

// Alignment: 3
// Size: 0x1a0
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x180	
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad0198[0x1]; // 0x198
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x199	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad0180[0x4]; // 0x180
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x184	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x188	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	CPathParameters m_PathParams; // 0x190	
};

// Alignment: 2
// Size: 0x270
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
};

// Alignment: 2
// Size: 0x1a0
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x190	
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x191	
};

// Alignment: 4
// Size: 0x370
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x278	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x27c	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x280	
};

// Alignment: 4
// Size: 0x6b0
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x270	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x6a0	
};

// Alignment: 3
// Size: 0x9f0
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x188	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x5b8	
};

// Alignment: 4
// Size: 0x190
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x180	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x188	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x18c	
};

// Alignment: 4
// Size: 0x190
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x180	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x184	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c	
};

// Alignment: 2
// Size: 0x190
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "scale"
	Vector m_vecScale; // 0x184	
};

// Alignment: 6
// Size: 0x1a0
class C_INIT_RemapInitialDirectionToCPToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x188	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x18c	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x190	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x19c	
};

// Alignment: 5
// Size: 0x370
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x194	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x1a0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x288	
};

// Alignment: 10
// Size: 0xa00
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x180	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x5b0	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x9e0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9e4	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0x9e8	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0x9ec	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0x9f0	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0x9f4	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0x9f8	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0x9f9	
};

// Alignment: 1
// Size: 0x190
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x180	
};

// Alignment: 10
// Size: 0x1b0
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x188	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x18c	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x190	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x194	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x198	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x19c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a0	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x1a4	
};

// Alignment: 8
// Size: 0x1b0
class C_OP_RemapCPVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x180	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x184	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x1a0	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x1ac	
};

// Alignment: 13
// Size: 0x5d0
class C_OP_DistanceBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x184	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x190	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x278	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x360	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x448	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x530	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x534	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x538	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x5b8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x5bc	
private:
	[[maybe_unused]] uint8_t __pad05bd[0x3]; // 0x5bd
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5c0	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 15
// Size: 0xba0
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x190	
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x194	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x1a0	
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x288	
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x370	
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x458	
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x540	
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x628	
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0x710	
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0x7f8	
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e4[0x4]; // 0x8e4
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0x8e8	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0x9d0	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xab8	
};

// Alignment: 4
// Size: 0xa00
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x194	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x198	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x5c8	
};

// Alignment: 11
// Size: 0x1e0
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x180	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x18c	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x190	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x194	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x198	
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x19c	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x1b0	
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x1b4	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x1d0	
};

// Alignment: 9
// Size: 0x798
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyFriendlyName "Author Texture As Gradient"
	bool m_bReplaceTextureWithGradient; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
public:
	// MPropertyFriendlyName "Texture"
	// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8	
	// MPropertyFriendlyName "Gradient"
	// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
	CColorGradient m_Gradient; // 0x10	
	// MPropertyFriendlyName "Texture Type"
	SpriteCardTextureType_t m_nTextureType; // 0x28	
	// MPropertyFriendlyName "Channel Mix"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c	
	// MPropertyFriendlyName "Mix Blend Mode"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Blend Amount"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	CParticleCollectionFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x120	
};

// Alignment: 4
// Size: 0x190
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x180	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x184	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x188	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c	
};

// Alignment: 3
// Size: 0x190
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x180	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x184	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x188	
};

// Alignment: 5
// Size: 0x1a0
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x184	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x188	
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad0198[0x1]; // 0x198
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x199	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x380
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x188	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x270	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x358	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x35c	
};

// Alignment: 3
// Size: 0x190
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x180	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x184	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x188	
};

// Alignment: 7
// Size: 0x380
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad018c[0x4]; // 0x18c
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x190	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x278	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x27c	
	// MPropertyFriendlyName "scale in local space"
	bool m_bScaleLocal; // 0x280	
private:
	[[maybe_unused]] uint8_t __pad0281[0x7]; // 0x281
public:
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x288	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x370	
};

// Alignment: 14
// Size: 0x1b0
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x184	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x188	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x18c	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x190	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x194	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x198	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x19c	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x1a0	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x1a4	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x1a8	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x1ac	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x1ad	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x1ae	
};

// Alignment: 4
// Size: 0x1a0
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	Vector m_vecMin; // 0x180	
	// MPropertyFriendlyName "max coords"
	Vector m_vecMax; // 0x18c	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x198	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x19c	
};

// Alignment: 5
// Size: 0x1b0
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x194	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x198	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x19c	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1a0	
};

// Alignment: 8
// Size: 0x1a0
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x180	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x184	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x188	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x18c	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x190	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x194	
private:
	[[maybe_unused]] uint8_t __pad0195[0x3]; // 0x195
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x198	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x19c	
};

// Alignment: 4
// Size: 0x1a0
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x188	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x194	
};

// Alignment: 3
// Size: 0x190
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x180	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x184	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x185	
};

// Alignment: 11
// Size: 0x1b0
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x180	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x184	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x188	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x18c	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x190	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x194	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x198	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x19c	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1a0	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1a4	
};

// Alignment: 0
// Size: 0x1d0
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x210
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x180	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x1a0
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x180	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x18c	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x190	
};

// Alignment: 2
// Size: 0x290
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268	
};

// Alignment: 11
// Size: 0x1b0
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x198	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x19c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1a4	
private:
	[[maybe_unused]] uint8_t __pad01a5[0x3]; // 0x1a5
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1a8	
};

// Alignment: 7
// Size: 0x610
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x180	
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x268	
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x350	
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x438	
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x520	
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x608	
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x60c	
};

// Alignment: 1
// Size: 0x190
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x180	
};

// Alignment: 6
// Size: 0x1b0
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x180	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x18c	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x198	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x19c	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1a0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1a4	
};

// Alignment: 6
// Size: 0x450
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x180	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x268	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x350	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x438	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x43c	
	// MPropertyFriendlyName "emit particles for killed parent particles"
	bool m_bInitFromKilledParentParticles; // 0x440	
};

// Alignment: 3
// Size: 0x1b0
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a0	
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x1a4	
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x1a8	
};

// Alignment: 1
// Size: 0x190
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x180	
};

// Alignment: 6
// Size: 0x1d0
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x180	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x184	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x188	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x189	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x18a	
private:
	[[maybe_unused]] uint8_t __pad018b[0x5]; // 0x18b
public:
	CPathParameters m_PathParams; // 0x190	
};

// Alignment: 1
// Size: 0x270
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x180	
};

// Alignment: 8
// Size: 0x1a0
class C_OP_RemapCPVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x180	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x184	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x19c	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x18c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x190	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x194	
};

// Alignment: 3
// Size: 0x190
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x180	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x184	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x188	
};

// Alignment: 11
// Size: 0x8d0
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x188	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x270	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x358	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x440	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x528	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x610	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0x6f8	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0x7e0	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0x8c8	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0x8c9	
};

// Alignment: 9
// Size: 0x730
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x184	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x188	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x5b8	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x638	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x639	
private:
	[[maybe_unused]] uint8_t __pad063a[0x2]; // 0x63a
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x63c	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x640	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0x728	
};

// Alignment: 3
// Size: 0x190
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x184	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x188	
};

// Alignment: 4
// Size: 0x1e0
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x1d0	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x1d4	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x1d8	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x1dc	
};

// Alignment: 5
// Size: 0x460
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x198	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x280	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x368	
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x450	
};

// Alignment: 2
// Size: 0x190
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x180	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
};

// Alignment: 2
// Size: 0x190
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x184	
};

// Alignment: 4
// Size: 0x1a0
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x184	
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad018c[0x8]; // 0x18c
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x194	
};

// Alignment: 9
// Size: 0x5d0
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x194	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x1a0	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x288	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x370	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x458	
	// MPropertyFriendlyName "intersection height CP"
	int32_t m_nHeightControlPointNumber; // 0x540	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x544	
};

// Alignment: 5
// Size: 0x270
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x180	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x268	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x269	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x26a	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x26b	
};

// Alignment: 6
// Size: 0xff0
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x188	
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x5b8	
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0x9e8	
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0xe18	
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0xf00	
};

// Alignment: 2
// Size: 0x290
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	char m_ActivityName[256]; // 0x180	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x280	
};

// Alignment: 4
// Size: 0x190
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x180	
	// MPropertyFriendlyName "maintain count scale control point"
	int32_t m_nScaleControlPoint; // 0x184	
	// MPropertyFriendlyName "maintain count scale control point field"
	int32_t m_nScaleControlPointField; // 0x188	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x18c	
};

// Alignment: 3
// Size: 0x230
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x190	
	// MPropertyFriendlyName "time-of-day parameter"
	char m_pszTimeOfDayParameter[128]; // 0x194	
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x214	
};

// Alignment: 18
// Size: 0x2510
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x18e0	
private:
	[[maybe_unused]] uint8_t __pad18e1[0x3]; // 0x18e1
public:
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x18e4	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x18e8	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x18ec	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x18f0	
private:
	[[maybe_unused]] uint8_t __pad18f1[0x3]; // 0x18f1
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x18f4	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x18f8	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x18fc	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x1900	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x19e8	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x1e18	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x1f00	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x1fe8	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x2418	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x2500	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x2504	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x2508	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x250c	
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x540
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x190	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x194	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x198	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x19c	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x1a0	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x288	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x370	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x458	
};

// Alignment: 3
// Size: 0x190
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x180	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x184	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
};

// Alignment: 0
// Size: 0x180
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x1a10
class C_OP_RenderFogSprites : public C_OP_RenderSprites
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1a00	
};

// Alignment: 5
// Size: 0x5d0
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x194	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x198	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05c9[0x3]; // 0x5c9
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x5cc	
};

// Alignment: 13
// Size: 0x1e0
class C_INIT_RemapCPtoVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x188	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x194	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1a0	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1ac	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1b8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1bc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x1c4	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01c6[0x2]; // 0x1c6
public:
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1c8	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1cc	
};

// Alignment: 11
// Size: 0x1c0
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x180	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x184	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x188	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x18c	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x190	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x194	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x198	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x1a4	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x1a8	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x1ac	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x1b0	
};

// Alignment: 4
// Size: 0x1a0
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x180	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x184	
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x194	
};

// Alignment: 6
// Size: 0xbc0
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x188	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x270	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x358	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x788	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0xbb8	
};

// Alignment: 4
// Size: 0x1a0
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x180	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x184	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x194	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x190
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
};

// Alignment: 8
// Size: 0x1a0
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; // 0x181
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x18c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x190	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x194	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x198	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x19c	
};

// Alignment: 5
// Size: 0x20
struct ParticleChildrenInfo_t
{
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0	
	// MPropertyFriendlyName "delay"
	float m_flDelay; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x2]; // 0xc
public:
	// MPropertyFriendlyName "end cap effect"
	bool m_bEndCap; // 0xe	
	// MPropertySuppressField
	bool m_bDisableChild; // 0xf	
	// MPropertyFriendlyName "disable at detail levels below"
	ParticleDetailLevel_t m_nDetailLevel; // 0x10	
};

// Alignment: 11
// Size: 0x10f0
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x180	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x18c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x198	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x5c8	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x6b0	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xae0	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0xf10	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0xff8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x10e0	
	// MPropertyFriendlyName "apply velocity in local space (0/1)"
	bool m_bLocalSpace; // 0x10e4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x10e5	
};

// Alignment: 3
// Size: 0x1a0
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x180	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x18c	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198	
};

// Alignment: 5
// Size: 0x370
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x180	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x268	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x350	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x354	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x360	
};

// Alignment: 8
// Size: 0x230
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x180	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x18c	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x198	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x199	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x19a	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x19b	
private:
	[[maybe_unused]] uint8_t __pad021b[0x1]; // 0x21b
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x21c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x220	
};

// Alignment: 18
// Size: 0x1e0
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x180	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x184	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x188	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x18c	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x190	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x194	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x198	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x19c	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x1a0	
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x1a4	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x1a8	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x1ac	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x1b0	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x1b4	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x1b8	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x1bc	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x1c0	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x1c4	
};

// Alignment: 5
// Size: 0x1c0
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x180	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x184	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x188	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x18c	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x190	
};

// Alignment: 2
// Size: 0x10
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0	
	int32_t m_nValue; // 0x8	
};

// Alignment: 2
// Size: 0x270
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x188	
};

// Alignment: 4
// Size: 0x190
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x188	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x18c	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x180	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x184	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x188	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x18c	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x194	
};

// Alignment: 10
// Size: 0x200
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x1d0	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x1d4	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x1d8	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x1dc	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x1e0	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x1e4	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x1e8	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x1ec	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x1f0	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x1f4	
};

// Alignment: 12
// Size: 0x300
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x1d0	
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x1d4	
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x1d8	
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x1dc	
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x1e0	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1e4	
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x1e8	
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x1ec	
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x1f0	
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x1f4	
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x1f8	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x2f8	
};

// Alignment: 18
// Size: 0x1d0
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x180	
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x184	
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x188	
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x18c	
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x190	
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x194	
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x198	
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x19c	
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x1a0	
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x1a4	
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x1a8	
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x1ac	
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x1b0	
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x1b4	
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x1b8	
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x1bc	
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x1c0	
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x1c4	
};

// Alignment: 28
// Size: 0x1a10
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x16f0	
private:
	[[maybe_unused]] uint8_t __pad16f1[0x3]; // 0x16f1
public:
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x16f4	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x16f8	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x16fc	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x1700	
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x1704	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x1708	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x170c	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x1710	
private:
	[[maybe_unused]] uint8_t __pad1714[0x4]; // 0x1714
public:
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionFloatInput m_flTextureVWorldSize; // 0x1718	
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionFloatInput m_flTextureVScrollRate; // 0x1800	
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionFloatInput m_flTextureVOffset; // 0x18e8	
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x19d0	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x19d4	
private:
	[[maybe_unused]] uint8_t __pad19d5[0x3]; // 0x19d5
public:
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x19d8	
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x19dc	
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x19e0	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x19e4	
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x19e8	
private:
	[[maybe_unused]] uint8_t __pad19ec[0x1]; // 0x19ec
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x19ed	
private:
	[[maybe_unused]] uint8_t __pad19ee[0x2]; // 0x19ee
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x19f0	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x19f4	
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x19f8	
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x19f9	
private:
	[[maybe_unused]] uint8_t __pad19fa[0x2]; // 0x19fa
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x19fc	
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x1a00	
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x1a04	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x1a05	
};

// Alignment: 5
// Size: 0x950
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x180	
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x268	
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x350	
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x438	
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x520	
};

// Alignment: 2
// Size: 0x190
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x180	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
};

// Alignment: 5
// Size: 0x1b0
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x190	
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x194	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad0199[0x3]; // 0x199
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x19c	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1a0	
};

// Alignment: 1
// Size: 0x4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0	
};

// Alignment: 8
// Size: 0x1b0
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x190	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x194	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x198	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x19c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1a0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1a4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1a8	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x1ac	
};

// Alignment: 16
// Size: 0x640
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x1d0	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x1d4	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x1d8	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1dc	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1e0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x610	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x614	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x618	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x61c	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x620	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x624	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x628	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x62c	
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex )"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x630	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x638	
};

// Alignment: 1
// Size: 0x190
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x180	
};

// Alignment: 2
// Size: 0x8
struct Relationship_t
{
public:
	Disposition_t disposition; // 0x0	
	int32_t priority; // 0x4	
};

// Alignment: 0
// Size: 0x70
class CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x70]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x98
class CNavVolumeVector : public CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	bool m_bHasBeenPreFiltered; // 0x78	
};

// Alignment: 3
// Size: 0x60
class CNetworkVelocityVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Alignment: 2
// Size: 0x10
struct ScriptedNPCInteraction_Phases_t
{
public:
	CUtlSymbolLarge iszSequence; // 0x0	
	int32_t iActivity; // 0x8	
};

// Alignment: 10
// Size: 0x24
struct hudtextparms_t
{
public:
	Color color1; // 0x0	
	Color color2; // 0x4	
	uint8_t effect; // 0x8	
	uint8_t channel; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	float x; // 0xc	
	float y; // 0x10	
	float fadeinTime; // 0x14	
	float fadeoutTime; // 0x18	
	float holdTime; // 0x1c	
	float fxTime; // 0x20	
};

// Alignment: 0
// Size: 0x8
class IRagdoll
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 10
// Size: 0x40
struct SteampalConveyorSection_t
{
public:
	float m_flStartT; // 0x0	
	float m_flEndT; // 0x4	
	float m_flSectionLength; // 0x8	
	float m_flCurrentT; // 0xc	
	float m_flMaxSegmentLength; // 0x10	
	float m_flSegmentLengthT; // 0x14	
	int32_t m_nStartingSegmentIndex; // 0x18	
	Color m_DebugColor; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad0020[0x18]; // 0x20
public:
	CHandle< CSteamPalConveyorPathNode > m_hStartNode; // 0x38	
	CHandle< CSteamPalConveyorPathNode > m_hEndNode; // 0x3c	
};

// Alignment: 1
// Size: 0x4
struct ModifierSerialNumber_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 1
// Size: 0x4
class CSimpleSimTimer
{
public:
	float m_next; // 0x0	
};

// Alignment: 4
// Size: 0x10
struct ViewLockData_t
{
public:
	float flLockInterval; // 0x0	
	bool bLocked; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float flUnlockTime; // 0x8	
	float flUnlockBlendInterval; // 0xc	
};

// Alignment: 25
// Size: 0x64
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

// Alignment: 0
// Size: 0x98
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x90
class CGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	char m_szQuestName[128]; // 0x8	
	int32_t m_nQuestPhase; // 0x88	
};

// Alignment: 0
// Size: 0x28
class CEntitySubclassVDataBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x20
class CJiggleBones
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct ModelConfigHandle_t
{
public:
	uint32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 4
// Size: 0x40
class CPassengerSeat
{
public:
	CUtlSymbolLarge m_strSeatName; // 0x0	
	AttachmentHandle_t m_nAttachmentID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	CUtlVector< CPassengerSeatTransition > m_EntryTransitions; // 0x10	
	CUtlVector< CPassengerSeatTransition > m_ExitTransitions; // 0x28	
};

// Alignment: 8
// Size: 0x31
class ResponseFollowup
{
public:
	char* followup_concept; // 0x0	
	char* followup_contexts; // 0x8	
	float followup_delay; // 0x10	
	char* followup_target; // 0x14	
	char* followup_entityiotarget; // 0x1c	
	char* followup_entityioinput; // 0x24	
	float followup_entityiodelay; // 0x2c	
	bool bFired; // 0x30	
};

// Alignment: 10
// Size: 0x40
class CTempRagdollData
{
public:
	float flAutoUnragdollDuration; // 0x0	
	float flUnragdollTimeout; // 0x4	
	CTakeDamageInfo* pInfo; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	CBaseAnimating* pParentEntity; // 0x18	
	char* pBoneTransformsString; // 0x20	
	int32_t boneAttach; // 0x28	
	int32_t parentBoneAttach; // 0x2c	
	Vector boneOrigin; // 0x30	
	bool m_bInvertOrientation; // 0x3c	
	bool m_bCollideWithNPCClip; // 0x3d	
};

// Alignment: 0
// Size: 0x18
class CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0xb8
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector
{
private:
	[[maybe_unused]] uint8_t __pad0098[0x8]; // 0x98
public:
	Vector m_vStartPos; // 0xa0	
	float m_flSearchDist; // 0xac	
};

// Alignment: 0
// Size: 0x90
class CMultiplayRules : public CGameRules
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x2
struct ModifierPropRuntimeHandle_t
{
public:
	uint16_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 4
// Size: 0x40
class CAI_BodyLocationCache
{
public:
	CHandle< CAI_DefaultNPC > m_hOwner; // 0x0	
	CHandle< CBaseModelEntity > m_hAssociatedEntity; // 0x4	
	bool m_bOwnsBodyLocationDef; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	BodyLocationListVData_t* m_pBodyLocationDef; // 0x10	
};

// Alignment: 10
// Size: 0x24
struct AI_StandoffParams_t
{
public:
	AI_HintChangeReaction_t hintChangeReaction; // 0x0	
	bool fCoverOnReload; // 0x4	
	bool fPlayerIsBattleline; // 0x5	
private:
	[[maybe_unused]] uint8_t __pad0006[0x2]; // 0x6
public:
	float minTimeShots; // 0x8	
	float maxTimeShots; // 0xc	
	int32_t minShots; // 0x10	
	int32_t maxShots; // 0x14	
	int32_t oddsCover; // 0x18	
	bool fStayAtCover; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	float flAbandonTimeLimit; // 0x20	
};

// Alignment: 2
// Size: 0x8
class CAI_ProxTester
{
public:
	float m_distSq; // 0x0	
	bool m_fInside; // 0x4	
};

// Alignment: 2
// Size: 0x18
struct ModifierRenderAttribute_t
{
public:
	CUtlString m_sAttribute; // 0x0	
	Vector4D m_vValues; // 0x8	
};

// Alignment: 1
// Size: 0x20
class CTakeDamageSummaryScopeGuard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8	
	
	// Static fields:
	static SummaryTakeDamageInfo_t &Get_EmptySummary(){return *reinterpret_cast<SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0xc
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4	
	float m_maxInterval; // 0x8	
};

// Alignment: 9
// Size: 0x60
class CAI_Expresser
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	float m_flStopTalkTime; // 0x38	
	float m_flStopTalkTimeWithoutDelay; // 0x3c	
	float m_flBlockedTalkTime; // 0x40	
	int32_t m_voicePitch; // 0x44	
	float m_flLastTimeAcceptedSpeak; // 0x48	
	bool m_bAllowSpeakingInterrupts; // 0x4c	
	bool m_bConsiderSceneInvolvementAsSpeech; // 0x4d	
private:
	[[maybe_unused]] uint8_t __pad004e[0x2]; // 0x4e
public:
	int32_t m_nLastSpokenPriority; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CBaseFlex* m_pOuter; // 0x58	
};

// Alignment: 1
// Size: 0x4
struct ParticleIndex_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 5
// Size: 0x20
class CPassengerInfo
{
public:
	int32_t m_nRole; // 0x0	
	int32_t m_nSeat; // 0x4	
	CUtlSymbolLarge m_strRoleName; // 0x8	
	CUtlSymbolLarge m_strSeatName; // 0x10	
	CHandle< CBaseCombatCharacter > m_hPassenger; // 0x18	
};

// Alignment: 8
// Size: 0x20
struct AIScheduleState_t
{
public:
	int32_t iCurTask; // 0x0	
	TaskStatus_e nTaskStatus; // 0x4	
	float timeStarted; // 0x8	
	float timeCurTaskStarted; // 0xc	
	int64_t taskFailureCode; // 0x10	
	int32_t iTaskInterrupt; // 0x18	
	bool bTaskRanAutomovement; // 0x1c	
	bool bScheduleWasInterrupted; // 0x1d	
};

// Alignment: 1
// Size: 0x40
class COffscreenParticleHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1c]; // 0x0
public:
	RenderMultisampleType_t m_nMultisampleType; // 0x1c	
};

// Alignment: 2
// Size: 0x80
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70	
	float m_flRadius; // 0x7c	
};

// Alignment: 15
// Size: 0xc8
struct ScriptedNPCInteraction_t
{
public:
	CUtlSymbolLarge iszInteractionName; // 0x0	
	int32_t iFlags; // 0x8	
	int32_t iTriggerMethod; // 0xc	
	int32_t iLoopBreakTriggerMethod; // 0x10	
	Vector vecRelativeOrigin; // 0x14	
	QAngle angRelativeAngles; // 0x20	
	Vector vecRelativeVelocity; // 0x2c	
	float flDelay; // 0x38	
	float flDistSqr; // 0x3c	
	CUtlSymbolLarge iszMyWeapon; // 0x40	
	CUtlSymbolLarge iszTheirWeapon; // 0x48	
	ScriptedNPCInteraction_Phases_t sPhases[3]; // 0x50	
	VMatrix matDesiredLocalToWorld; // 0x80	
	bool bValidOnCurrentEnemy; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	float flNextAttemptTime; // 0xc4	
};

// Alignment: 1
// Size: 0x70
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60	
};

// Alignment: 0
// Size: 0x8
class IModifierTrackedObject
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 10
// Size: 0x60
class CAI_DynamicInteractions : public CAI_Component
{
public:
	CHandle< CBaseAnimating > m_hForcedInteractionPartner; // 0x18	
	int32_t m_iInteractionPlaying; // 0x1c	
	Vector m_vecForcedWorldPosition; // 0x20	
	float m_flForcedInteractionTimeout; // 0x2c	
	CHandle< CBaseAnimating > m_hInteractionPartner; // 0x30	
	CHandle< CBaseEntity > m_hLastInteractionTestTarget; // 0x34	
	bool m_bCannotDieDuringInteraction; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
public:
	int32_t m_iInteractionState; // 0x3c	
	CUtlVector< ScriptedNPCInteraction_t > m_ScriptedInteractions; // 0x40	
	float m_flInteractionYaw; // 0x58	
};

// Alignment: 4
// Size: 0x40
struct AI_ScheduleVData_t
{
public:
	CUtlString m_sSchedule; // 0x0	
	bool m_bFlag_Ability; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	CUtlVector< AI_TaskVData_t > m_vecTasks; // 0x10	
	CUtlVector< CUtlString > m_vecInterrupts; // 0x28	
};

// Alignment: 2
// Size: 0x18
class Extent
{
public:
	Vector lo; // 0x0	
	Vector hi; // 0xc	
};

// Alignment: 2
// Size: 0x20
struct NPCAbilityDesc_t
{
public:
	CSubclassName< 6 > m_sAbilityName; // 0x0	
	CSubclassName< 6 > m_sPrimaryLinkedAbilityName; // 0x10	
};

// Alignment: 2
// Size: 0x10
class CAI_MoveMonitor
{
public:
	Vector m_vMark; // 0x0	
	float m_flMarkTolerance; // 0xc	
};

// Alignment: 1
// Size: 0x1
struct AmmoIndex_t
{
public:
	int8_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 4
// Size: 0x40
class CConstantForceController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	Vector m_linear; // 0xc	
	RotationVector m_angular; // 0x18	
	Vector m_linearSave; // 0x24	
	RotationVector m_angularSave; // 0x30	
};

// Alignment: 4
// Size: 0x20
class ResponseParams
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int16_t odds; // 0x10	
	int16_t flags; // 0x12	
	uint8_t soundlevel; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	ResponseFollowup* m_pFollowup; // 0x18	
};

// Alignment: 2
// Size: 0x20
struct ModifierTrackedGraphParameter_t
{
public:
	CUtlString m_sParamName; // 0x0	
	CAnimVariant m_restoreValue; // 0x8	
};

// Alignment: 1
// Size: 0x4
struct NPCAbilityUseTriggerBase_t
{
public:
	// MPropertyDescription "When triggered, the ability is used"
	GameAnimEventIndex_t m_nAnimEventTrigger; // 0x0	
};

// Alignment: 3
// Size: 0xc
struct attached_item_t
{
public:
	CHandle< CBaseEntity > hItem; // 0x0	
	CUtlStringToken sAttachment; // 0x4	
	CUtlStringToken sAttachmentNormal; // 0x8	
};

// Alignment: 2
// Size: 0x8
class CTakeDamageResult
{
public:
	int32_t m_nHealthLost; // 0x0	
	int32_t m_nDamageTaken; // 0x4	
};

// Alignment: 0
// Size: 0x20
class CAI_ScheduleBits
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x8
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4	
};

// Alignment: 3
// Size: 0x60
struct BodyLocationVData_t
{
public:
	CUtlString m_sAttachmentName; // 0x0	
	bool m_bAttachmentIsOnAbilityModel; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	BodyLocationVDataForStance_t m_pStances[2]; // 0x10	
};

// Alignment: 4
// Size: 0x20
class CMotorController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_speed; // 0x8	
	float m_maxTorque; // 0xc	
	Vector m_axis; // 0x10	
	float m_inertiaFactor; // 0x1c	
};

// Alignment: 2
// Size: 0x20
class CPassengerRole
{
public:
	CUtlSymbolLarge m_strName; // 0x0	
	CUtlVector< CPassengerSeat > m_PassengerSeats; // 0x8	
};

// Alignment: 9
// Size: 0x9
struct HullFlags_t
{
public:
	bool m_bHull_Human; // 0x0	
	bool m_bHull_SmallCentered; // 0x1	
	bool m_bHull_WideHuman; // 0x2	
	bool m_bHull_Tiny; // 0x3	
	bool m_bHull_Medium; // 0x4	
	bool m_bHull_TinyCentered; // 0x5	
	bool m_bHull_Large; // 0x6	
	bool m_bHull_LargeCentered; // 0x7	
	bool m_bHull_MediumTall; // 0x8	
};

// Alignment: 4
// Size: 0x38
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0	
	CUtlVector< int32 > boneIndex; // 0x18	
	bool allowStretch; // 0x30	
	bool unused; // 0x31	
};

// Alignment: 5
// Size: 0x20
class CSmoothFunc
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_flSmoothAmplitude; // 0x8	
	float m_flSmoothBias; // 0xc	
	float m_flSmoothDuration; // 0x10	
	float m_flSmoothRemainingTime; // 0x14	
	int32_t m_nSmoothDir; // 0x18	
};

// Alignment: 1
// Size: 0x10
class CModifierLevelInt
{
public:
	int32_t m_pValue[4]; // 0x0	
};

// Alignment: 2
// Size: 0x28
class CCopyRecipientFilter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_Flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CPlayerSlot > m_Recipients; // 0x10	
};

// Alignment: 2
// Size: 0x10
struct AI_TaskVData_t
{
public:
	CUtlString m_sTask; // 0x0	
	CUtlString m_sParam; // 0x8	
};

// Alignment: 1
// Size: 0x18
struct ModifierVariant_t
{
public:
	ModifierVariantType_t m_eType; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct ModifierRuntimeHandle_t
{
public:
	uint32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 1
// Size: 0x10
class CStopwatchBase : public CSimpleSimTimer
{
private:
	[[maybe_unused]] uint8_t __pad0004[0x8]; // 0x4
public:
	bool m_fIsRunning; // 0xc	
};

// Alignment: 3
// Size: 0x20
struct locksound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge sLockedSound; // 0x8	
	CUtlSymbolLarge sUnlockedSound; // 0x10	
	float flwaitSound; // 0x18	
};

// Alignment: 2
// Size: 0x18
struct NPCApplianceProjectileAttachment_t
{
public:
	CUtlString m_sAttachmentName; // 0x0	
	CSubclassName< 0 > m_sProjectileName; // 0x8	
};

// Alignment: 4
// Size: 0x10
class CSoundEnvelope
{
public:
	float m_current; // 0x0	
	float m_target; // 0x4	
	float m_rate; // 0x8	
	bool m_forceupdate; // 0xc	
};

// Alignment: 17
// Size: 0x60
class CSceneEventInfo
{
public:
	int32_t m_iLayer; // 0x0	
	int32_t m_iPriority; // 0x4	
	HSequence m_hSequence; // 0x8	
	float m_flWeight; // 0xc	
	bool m_bIsMoving; // 0x10	
	bool m_bHasArrived; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	float m_flInitialYaw; // 0x14	
	float m_flTargetYaw; // 0x18	
	float m_flFacingYaw; // 0x1c	
	int32_t m_nType; // 0x20	
	float m_flNext; // 0x24	
	bool m_bIsGesture; // 0x28	
	bool m_bShouldRemove; // 0x29	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2a]; // 0x2a
public:
	CHandle< CBaseEntity > m_hTarget; // 0x54	
	uint32_t m_nSceneEventId; // 0x58	
	bool m_bClientSide; // 0x5c	
	bool m_bStarted; // 0x5d	
};

// Alignment: 1
// Size: 0x10
class CSkillFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Alignment: 3
// Size: 0x18
struct NPCAbilityBodyLocationOverride_t
{
public:
	// MPropertyDescription "Body location to inherit from in the owning NPC. If unspecified, the Ability Body Location is used."
	CUtlString m_sOwnerBodyLocationName; // 0x0	
	// MPropertyAttributeEditor "VDataModelAttachment( m_sModelName )"
	CUtlString m_sAttachmentName; // 0x8	
	bool m_bAttachmentIsOnAbilityModel; // 0x10	
};

// Alignment: 31
// Size: 0x158
class CFourWheelVehiclePhysics
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseAnimating > m_pOuter; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CFourWheelServerVehicle* m_pOuterServerVehicle; // 0x10	
	vehicle_controlparams_t m_controls; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	int32_t m_nSpeed; // 0x38	
	int32_t m_nLastSpeed; // 0x3c	
	int32_t m_nRPM; // 0x40	
	float m_fLastBoost; // 0x44	
	int32_t m_nBoostTimeLeft; // 0x48	
	bool m_bHasBoost; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_maxThrottle; // 0x50	
	float m_flMaxRevThrottle; // 0x54	
	float m_flMaxSpeed; // 0x58	
	float m_actionSpeed; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad0060[0x20]; // 0x60
public:
	int32_t m_wheelCount; // 0x80	
	Vector m_wheelPosition[4]; // 0x84	
	QAngle m_wheelRotation[4]; // 0xb4	
	float m_wheelBaseHeight[4]; // 0xe4	
	float m_wheelTotalHeight[4]; // 0xf4	
	int32_t m_poseParameters[12]; // 0x104	
	float m_actionValue; // 0x134	
	float m_actionScale; // 0x138	
	float m_debugRadius; // 0x13c	
	float m_throttleRate; // 0x140	
	float m_throttleStartTime; // 0x144	
	float m_throttleActiveTime; // 0x148	
	float m_turboTimer; // 0x14c	
	float m_flVehicleVolume; // 0x150	
	bool m_bIsOn; // 0x154	
	bool m_bLastThrottle; // 0x155	
	bool m_bLastBoost; // 0x156	
	bool m_bLastSkid; // 0x157	
};

// Alignment: 11
// Size: 0x40
class HintNodeData
{
public:
	CUtlSymbolLarge strEntityName; // 0x0	
	int16_t nHintType; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	int32_t nNodeID; // 0xc	
	CUtlSymbolLarge strGroup; // 0x10	
	int32_t iDisabled; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlSymbolLarge iszGenericType; // 0x20	
	CUtlSymbolLarge iszActivityName; // 0x28	
	HintIgnoreFacing_t fIgnoreFacing; // 0x30	
	NPC_STATE minState; // 0x34	
	NPC_STATE maxState; // 0x38	
	int32_t nRadius; // 0x3c	
};

// Alignment: 4
// Size: 0x20
struct thinkfunc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hFn; // 0x8	
	CUtlStringToken m_nContext; // 0x10	
	int32_t m_nNextThinkTick; // 0x14	
	int32_t m_nLastThinkTick; // 0x18	
};

// Alignment: 3
// Size: 0x78
class CAI_FightFromCoverBehavior
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CHandle< CAI_FightFromCoverGoal > m_hFightFromCoverGoal; // 0x28	
	CAI_MoveMonitor m_FrontMoveMonitor; // 0x2c	
	CSimpleSimTimer m_FrontTimer; // 0x3c	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_FFC_RUN_TO_HINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FFC_HOLD_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FFC_PEEK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FFC_HOLD_PEEK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FFC_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FFC_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FFC_GET_PATH_TO_HINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FFC_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FFC_PEEK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FFC_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[9]->m_instance);};
	static ConditionId_t &Get_COND_FFC_HINT_CHANGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FightFromCoverBehavior")->m_static_fields[10]->m_instance);};
};

// Alignment: 1
// Size: 0x10
class CSkillInt
{
public:
	int32_t m_pValue[4]; // 0x0	
};

// Alignment: 2
// Size: 0x18
struct NPCApplianceProjectileRuntime_t
{
public:
	QAngle m_qPreviousAngle; // 0x0	
	RotationVector m_vAngularVelocity; // 0xc	
};

// Alignment: 1
// Size: 0x98
class CSingleplayRules : public CGameRules
{
public:
	bool m_bSinglePlayerGameEnding; // 0x90	
};

// Alignment: 1
// Size: 0x10
struct magnetted_objects_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > hEntity; // 0x8	
};

// Alignment: 3
// Size: 0x60
class CNetworkOriginQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Alignment: 5
// Size: 0x170
struct vehiclesounds_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< vehicle_gear_t > pGears; // 0x8	
	CUtlVector< vehicle_crashsound_t > crashSounds; // 0x20	
	CUtlSymbolLarge iszSound[9]; // 0x38	
	CUtlSymbolLarge iszStateSounds[20]; // 0x80	
	float minStateTime[20]; // 0x120	
};

// Alignment: 1
// Size: 0x4
struct ConditionId_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 1
// Size: 0x18
struct CSteamPal_SequencerSequenceDef_t
{
public:
	CUtlVector< CUtlString > m_vMusicTracks; // 0x0	
};

// Alignment: 7
// Size: 0x68
class CNetworkOriginCellCoordQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x18	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x1a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x1c	
	// MNetworkEnable
	uint16_t m_nOutsideWorld; // 0x1e	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x20	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x38	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x50	
};

// Alignment: 4
// Size: 0x28
class CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0	
	bool m_bIsInSimulation; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flSimOrRenderTime; // 0x1c	
	float m_flInterpolatedTime; // 0x20	
};

// Alignment: 3
// Size: 0x28
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0	
	int32_t parentIndex; // 0x20	
	float m_flRadius; // 0x24	
};

// Alignment: 12
// Size: 0x50
struct CommandToolCommand_t
{
public:
	bool m_bEnabled; // 0x0	
	bool m_bOpened; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x2]; // 0x2
public:
	uint32_t m_InternalId; // 0x4	
	CUtlString m_ShortName; // 0x8	
	CommandExecMode_t m_ExecMode; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CUtlString m_SpawnGroup; // 0x18	
	float m_PeriodicExecDelay; // 0x20	
	CommandEntitySpecType_t m_SpecType; // 0x24	
	CUtlString m_EntitySpec; // 0x28	
	CUtlString m_Commands; // 0x30	
	DebugOverlayBits_t m_SetDebugBits; // 0x38	
	DebugOverlayBits_t m_ClearDebugBits; // 0x40	
};

// Alignment: 30
// Size: 0xc0
class CShatterGlassShard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint32_t m_hShardHandle; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< Vector2D > m_vecPanelVertices; // 0x10	
	Vector2D m_vLocalPanelSpaceOrigin; // 0x28	
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x30	
	CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity; // 0x38	
	CHandle< CFuncShatterglass > m_hParentPanel; // 0x3c	
	uint32_t m_hParentShard; // 0x40	
	ShatterGlassStressType m_ShatterStressType; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	Vector m_vecStressVelocity; // 0x48	
	bool m_bCreatedModel; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	float m_flLongestEdge; // 0x58	
	float m_flShortestEdge; // 0x5c	
	float m_flLongestAcross; // 0x60	
	float m_flShortestAcross; // 0x64	
	float m_flSumOfAllEdges; // 0x68	
	float m_flArea; // 0x6c	
	OnFrame m_nOnFrameEdge; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	int32_t m_nParentPanelsNthShard; // 0x74	
	int32_t m_nSubShardGeneration; // 0x78	
	Vector2D m_vecAverageVertPosition; // 0x7c	
	bool m_bAverageVertPositionIsValid; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	Vector2D m_vecPanelSpaceStressPositionA; // 0x88	
	Vector2D m_vecPanelSpaceStressPositionB; // 0x90	
	bool m_bStressPositionAIsValid; // 0x98	
	bool m_bStressPositionBIsValid; // 0x99	
	bool m_bFlaggedForRemoval; // 0x9a	
private:
	[[maybe_unused]] uint8_t __pad009b[0x1]; // 0x9b
public:
	float m_flPhysicsEntitySpawnedAtTime; // 0x9c	
	bool m_bShatterRateLimited; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a1[0x3]; // 0xa1
public:
	CHandle< CBaseEntity > m_hEntityHittingMe; // 0xa4	
	CUtlVector< uint32 > m_vecNeighbors; // 0xa8	
};

// Alignment: 0
// Size: 0x8
class IChoreoServices
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 3
// Size: 0x14
struct UnreachableEnt_t
{
public:
	CHandle< CBaseEntity > hUnreachableEnt; // 0x0	
	float fExpireTime; // 0x4	
	Vector vLocationWhenUnreachable; // 0x8	
};

// Alignment: 10
// Size: 0x1f0
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0	
	char m_szResponseName[192]; // 0x1	
	char m_szMatchingRule[128]; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad0141[0xf]; // 0x141
public:
	ResponseParams m_Params; // 0x150	
	float m_fMatchScore; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	char* m_szSpeakerContext; // 0x178	
	char* m_szWorldContext; // 0x180	
	ResponseFollowup m_Followup; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x7]; // 0x1b9
public:
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1c0	
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d8	
};

// Alignment: 8
// Size: 0x1f8
struct CSteamPal_Ultra_Toilet_Gun_VData_t
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sMuzzleFlashEffect; // 0x0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sTracerEffect; // 0xe0	
	CUtlString m_strMuzzleAttachment; // 0x1c0	
	int32_t m_nAmmo; // 0x1c8	
	float m_flRateOfFire; // 0x1cc	
	float m_flDamage; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	CSoundEventName m_sShootSound; // 0x1d8	
	CSoundEventName m_sEmptySound; // 0x1e8	
};

// Alignment: 1
// Size: 0xc0
struct BodyLocationListVData_t
{
public:
	BodyLocationVData_t* m_ppBodyLocationData[5]; // 0x0	
};

// Alignment: 1
// Size: 0x30
class CPlayerComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Alignment: 2
// Size: 0x18
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_minInterval; // 0x10	
	float m_maxInterval; // 0x14	
};

// Alignment: 5
// Size: 0x18
struct SteamPal_Ultra_Toilet_Gun_t
{
public:
	SteampalUltraToiletGunType_t m_eGunType; // 0x0	
	AttachmentHandle_t m_nMuzzleAttachment; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	int32_t m_nNumShotsFired; // 0x8	
	float m_flNextAttackTime; // 0xc	
	CSteamPal_Ultra_Toilet_Gun_VData_t* m_pGunVData; // 0x10	
};

// Alignment: 28
// Size: 0xc0
class CBaseAchievement
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
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
private:
	[[maybe_unused]] uint8_t __pad003a[0x6]; // 0x3a
public:
	char* m_pInflictorClassNameFilter; // 0x40	
	char* m_pInflictorEntityNameFilter; // 0x48	
	char* m_pVictimClassNameFilter; // 0x50	
	char* m_pAttackerClassNameFilter; // 0x58	
	char* m_pMapNameFilter; // 0x60	
	char* m_pGameDirFilter; // 0x68	
	char** m_pszComponentNames; // 0x70	
	char** m_pszComponentDisplayNames; // 0x78	
	int32_t m_iNumComponents; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	char* m_pszComponentPrefix; // 0x88	
	int32_t m_iComponentPrefixLen; // 0x90	
	bool m_bAchieved; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	int32_t m_iCount; // 0x98	
	int32_t m_iProgressShown; // 0x9c	
	uint64_t m_iComponentBits; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x8]; // 0xa8
public:
	int32_t m_nUserSlot; // 0xb0	
	int32_t m_iDisplayOrder; // 0xb4	
	bool m_bShowOnHUD; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x3]; // 0xb9
public:
	int32_t m_iAssetAwardID; // 0xbc	
};

// Alignment: 1
// Size: 0x20
class CTrackedObject_MODIFIER_TRACKED_RENDER_ATTRIBUTE : public IModifierTrackedObject
{
public:
	ModifierRenderAttribute_t m_objectData; // 0x8	
};

// Alignment: 1
// Size: 0x8
class CRangeInt
{
public:
	int32_t m_pValue[2]; // 0x0	
};

// Alignment: 0
// Size: 0x1
class CPhysicsComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x10
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0	
	int32_t m_nForceBone; // 0xc	
};

// Alignment: 0
// Size: 0x8
struct ModifierTrackedSound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x1a0
class CNetworkTransmitComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x16c]; // 0x0
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x16c	
	
	// Static fields:
	static int32_t &Get_s_nWatchTransmitEntity(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bUseNetworkVars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[1]->m_instance);};
	static bool &Get_s_bNetworkVarPerFieldTracking(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[2]->m_instance);};
	static bool &Get_s_bNetworkVarValidate(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[3]->m_instance);};
	static bool &Get_s_bUsingPVSConvars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[4]->m_instance);};
};

// Alignment: 5
// Size: 0x38
struct AmmoTypeInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int32_t m_nMaxCarry; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x8]; // 0x14
public:
	CRangeInt m_nSplashSize; // 0x1c	
	AmmoFlags_t m_nFlags; // 0x24	
	float m_flMass; // 0x28	
	CRangeFloat m_flSpeed; // 0x2c	
};

// Alignment: 2
// Size: 0x30
class CResponseCriteriaSet
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	int32_t m_nNumPrefixedContexts; // 0x28	
	bool m_bOverrideOnAppend; // 0x2c	
};

// Alignment: 2
// Size: 0x84
struct CBaseServerVehicle__entryanim_t
{
public:
	int32_t iHitboxGroup; // 0x0	
	char szAnimName[128]; // 0x4	
};

// Alignment: 12
// Size: 0x78
class CCommentarySystem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	uint64_t m_afPlayersLastButtons; // 0x18	
	bool m_bCommentaryConvarsChanging; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	int32_t m_iClearPressedButtons; // 0x24	
	bool m_bCommentaryEnabledMidGame; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	float m_flNextTeleportTime; // 0x2c	
	int32_t m_iTeleportStage; // 0x30	
	bool m_bCheatState; // 0x34	
	bool m_bIsFirstSpawnGroupToLoad; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x1a]; // 0x36
public:
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x50	
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x54	
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x60	
};

// Alignment: 5
// Size: 0x24
struct LastIncomingHit_t
{
public:
	Vector vecDir; // 0x0	
	Vector vecBoneLocalPos; // 0xc	
	int32_t nHitboxBoneIndex; // 0x18	
	float flHitStrength; // 0x1c	
	int32_t nDamageType; // 0x20	
};

// Alignment: 3
// Size: 0x30
class CFlightComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CAI_DefaultNPC > m_pOuter; // 0x8	
	Vector m_vCurrentVelocity; // 0xc	
	Vector m_vNoiseMod; // 0x18	
};

// Alignment: 6
// Size: 0x38
class CAI_EnemyServices : public CAI_Component
{
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x18	
	CHandle< CBaseEntity > m_hLastEnemy; // 0x1c	
	float m_flTimeEnemyAcquired; // 0x20	
	float m_flTimeLastHadEnemy; // 0x24	
	int32_t m_nEnemiesSerialNumber; // 0x28	
	CHandle< CBaseEntity > m_hEnemyOccluder; // 0x2c	
};

// Alignment: 19
// Size: 0xd0
class CAI_StandoffBehavior
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	bool m_fActive; // 0x28	
	bool m_fTestNoDamage; // 0x29	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	Vector m_vecStandoffGoalPosition; // 0x2c	
	AI_Posture_t m_posture; // 0x38	
	AI_StandoffParams_t m_params; // 0x3c	
	CHandle< CBaseEntity > m_hStandoffGoal; // 0x60	
	bool m_fTakeCover; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
public:
	float m_SavedDistTooFar; // 0x68	
	bool m_fForceNewEnemy; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	CAI_MoveMonitor m_PlayerMoveMonitor; // 0x70	
	CSimTimer m_TimeForceCoverHint; // 0x80	
	CSimTimer m_TimePreventForceNewEnemy; // 0x88	
	CRandSimTimer m_RandomCoverChangeTimer; // 0x90	
	int32_t m_nSavedMinShots; // 0x9c	
	int32_t m_nSavedMaxShots; // 0xa0	
	float m_flSavedMinRest; // 0xa4	
	float m_flSavedMaxRest; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x1c]; // 0xac
public:
	bool m_fIgnoreFronts; // 0xc8	
	bool m_bHasLowCoverActivity; // 0xc9	
	
	// Static fields:
	static ConditionId_t &Get_COND_ABANDON_TIME_EXPIRED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_StandoffBehavior")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x28
class CAI_BehaviorBase : public CAI_Component
{
public:
	bool m_bActive; // 0x18	
	bool m_bOverrode; // 0x19	
private:
	[[maybe_unused]] uint8_t __pad001a[0x6]; // 0x1a
public:
	CAI_BehaviorBase* m_pActiveChildBehavior; // 0x20	
};

// Alignment: 15
// Size: 0xa0
class CTakeDamageInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vecDamageForce; // 0x8	
	Vector m_vecDamagePosition; // 0x14	
	Vector m_vecReportedPosition; // 0x20	
	Vector m_vecDamageDirection; // 0x2c	
	CHandle< CBaseEntity > m_hInflictor; // 0x38	
	CHandle< CBaseEntity > m_hAttacker; // 0x3c	
	CHandle< CBaseEntity > m_hAbility; // 0x40	
	float m_flDamage; // 0x44	
	int32_t m_bitsDamageType; // 0x48	
	int32_t m_iDamageCustom; // 0x4c	
	AmmoIndex_t m_iAmmoType; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0xf]; // 0x51
public:
	float m_flOriginalDamage; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0xc]; // 0x64
public:
	TakeDamageFlags_t m_nDamageFlags; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	HSCRIPT m_hScriptInstance; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0080[0x18]; // 0x80
public:
	bool m_bInTakeDamageFlow; // 0x98	
	
	// Static fields:
	static CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x28
struct SquadModeInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< SquadSlotId_t > m_vecSlots; // 0x10	
};

// Alignment: 9
// Size: 0x58
class CAI_AssaultBehavior
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CHandle< CAssaultPoint > m_hAssaultPoint; // 0x28	
	CHandle< CRallyPoint > m_hRallyPoint; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	bool m_bHitRallyPoint; // 0x38	
	bool m_bHitAssaultPoint; // 0x39	
	bool m_bDiverting; // 0x3a	
private:
	[[maybe_unused]] uint8_t __pad003b[0x1]; // 0x3b
public:
	float m_flLastSawAnEnemyAt; // 0x3c	
	float m_flTimeDeferScheduleSelection; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CUtlSymbolLarge m_AssaultPointName; // 0x48	
	CHandle< CAI_AssaultGoal > m_hAssaultGoal; // 0x50	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_ASSAULT_FAILED_TO_MOVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FAIL_MOVE_TO_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_AT_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_HOLD_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_HOLD_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_WAIT_AND_CLEAR(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_ASSAULT_MOVE_AWAY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLEAR_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FACE_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FACE_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_HIT_ASSAULT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_HIT_RALLY_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_AWAIT_CUE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_AWAIT_ASSAULT_TIMEOUT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_ANNOUNCE_CLEAR(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_WAIT_ASSAULT_DELAY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_ASSAULT_MOVE_AWAY_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_ASSAULT_DEFER_SCHEDULE_SELECTION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AssaultBehavior")->m_static_fields[21]->m_instance);};
};

// Alignment: 3
// Size: 0x14
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0	
	float m_fPrevSampleTime; // 0xc	
	float m_fIdealSampleRate; // 0x10	
};

// Alignment: 1
// Size: 0x18
class CPhysicsShake
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_force; // 0x8	
};

// Alignment: 0
// Size: 0x90
class CTeamplayRules : public CMultiplayRules
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x118
struct NPCAttachmentDesc_t
{
public:
	CUtlString m_sAttachmentName; // 0x0	
	CUtlString m_sEntityName; // 0x8	
	Vector m_vOffset; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x20	
	CUtlVector< NPCAttachmentSpawnKV_t > m_vecSpawnKV; // 0x100	
};

// Alignment: 6
// Size: 0x38
struct NPCAbilityPickupBehavior_t
{
public:
	AbilityPickupBehaviorType_t m_behaviorType; // 0x0	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertySuppressExpr "m_behaviorType != eAbilityPickupBehavior_GrantSpecifiedAmmo"
	// MPropertyDescription "The type of ammo to grant to a player or NPC. Only grants it to players/NPCs who can use that ammo type."
	CUtlString m_sAmmoType; // 0x8	
	// MPropertySuppressExpr "m_behaviorType != eAbilityPickupBehavior_GrantDroppedAmmo"
	bool m_bAllowNPCsToPickUpDroppedAmmo; // 0x10	
	// MPropertySuppressExpr "m_behaviorType != eAbilityPickupBehavior_GrantSpecifiedAmmo"
	bool m_bAllowNPCsToPickUpSpecifiedAmmo; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x6]; // 0x12
public:
	// MPropertySuppressExpr "m_behaviorType != eAbilityPickupBehavior_GrantSpecifiedNPCAbility"
	// MPropertyDescription "The NPC ability type to grant. Only grants it to NPCs which have been marked as being able to use this ability type."
	CSubclassName< 6 > m_sNPCAbilityName; // 0x18	
	// MPropertySuppressExpr "m_behaviorType != eAbilityPickupBehavior_GrantPlayerWeapon"
	// MPropertyDescription "The player weapon to grant."
	CSubclassName< 3 > m_sPlayerWeaponName; // 0x28	
};

// Alignment: 0
// Size: 0x98
class CNavVolumeAll : public CNavVolumeVector
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class IVehicle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 23
// Size: 0x128
class CAI_FollowBehavior
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CHandle< CBaseEntity > m_hFollowTarget; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x38]; // 0x2c
public:
	float m_flTimeUpdatedFollowPosition; // 0x64	
	bool m_bFirstFacing; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	float m_flTimeFollowTargetVisible; // 0x6c	
	CAI_MoveMonitor m_TargetMonitor; // 0x70	
	bool m_bTargetUnreachable; // 0x80	
	bool m_bFollowNavFailed; // 0x81	
private:
	[[maybe_unused]] uint8_t __pad0082[0x2]; // 0x82
public:
	int32_t m_nFailedFollowAttempts; // 0x84	
	float m_flTimeFailFollowStarted; // 0x88	
	Vector m_vFollowMoveAnchor; // 0x8c	
	bool m_bMovingToCover; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	float m_flOriginalEnemyDiscardDuration; // 0x9c	
	float m_flOriginalEnemyFreeKnowledgeDuration; // 0xa0	
	float m_SavedDistTooFar; // 0xa4	
	float m_flLastIdleTalk; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
public:
	CRandStopwatch m_FollowDelay; // 0xb0	
	CSimpleSimTimer m_RepathOnFollowTimer; // 0xc8	
	int32_t m_CurrentFollowActivity; // 0xcc	
	CRandSimTimer m_TimeBlockUseWaitPoint; // 0xd0	
	CSimTimer m_TimeCheckForWaitPoint; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00e4[0xc]; // 0xe4
public:
	CRandSimTimer m_TimeBeforeSpreadFacing; // 0xf0	
	CRandSimTimer m_TimeNextSpreadFacing; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad0108[0x18]; // 0x108
public:
	CHandle< CAI_FollowGoal > m_hFollowGoalEnt; // 0x120	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_MOVE_AWAY_FAIL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_MOVE_AWAY_END(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOW(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_IDLE_STAND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_FACE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FACE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_COMBAT_FACE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_GO_TO_WAIT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_GO_TO_WAIT_POINT_FAIL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_FOLLOWER_STAND_AT_WAIT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CANT_FOLLOW(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FACE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MOVE_TO_FOLLOW_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_FOLLOW_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SET_FOLLOW_TARGET_MARK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FOLLOWER_FACE_TACTICAL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SET_FOLLOW_DELAY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_FOLLOW_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_ARRIVE_AT_FOLLOW_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SET_FOLLOW_POINT_STAND_SCHEDULE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BEGIN_STAND_AT_WAIT_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[20]->m_instance);};
	static ConditionId_t &Get_COND_TARGET_MOVED_FROM_MARK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[21]->m_instance);};
	static ConditionId_t &Get_COND_FOLLOW_DELAY_EXPIRED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[22]->m_instance);};
	static ConditionId_t &Get_COND_FOLLOW_TARGET_VISIBLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[23]->m_instance);};
	static ConditionId_t &Get_COND_FOLLOW_TARGET_NOT_VISIBLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[24]->m_instance);};
	static ConditionId_t &Get_COND_FOLLOW_WAIT_POINT_INVALID(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[25]->m_instance);};
	static ConditionId_t &Get_COND_FOUND_WAIT_POINT(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_FollowBehavior")->m_static_fields[26]->m_instance);};
};

// Alignment: 0
// Size: 0x64
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
	// No members available
};

// Alignment: 13
// Size: 0x90
class CSoundPatch
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CSoundEnvelope m_pitch; // 0x8	
	CSoundEnvelope m_volume; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	float m_shutdownTime; // 0x30	
	float m_flLastTime; // 0x34	
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38	
	CHandle< CBaseEntity > m_hEnt; // 0x40	
	CEntityIndex m_soundEntityIndex; // 0x44	
	Vector m_soundOrigin; // 0x48	
	int32_t m_isPlaying; // 0x54	
	CCopyRecipientFilter m_Filter; // 0x58	
	float m_flCloseCaptionDuration; // 0x80	
	bool m_bUpdatedSoundOrigin; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	CUtlSymbolLarge m_iszClassName; // 0x88	
	
	// Static fields:
	static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fields[0]->m_instance);};
};

// Alignment: 9
// Size: 0x30
struct AI_FreePassParams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float timeToTrigger; // 0x8	
	float duration; // 0xc	
	float moveTolerance; // 0x10	
	float refillRate; // 0x14	
	float coverDist; // 0x18	
	float peekTime; // 0x1c	
	float peekTimeAfterDamage; // 0x20	
	float peekEyeDist; // 0x24	
	float peekEyeDistZ; // 0x28	
};

// Alignment: 1
// Size: 0x10
class CModifierLevelFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Alignment: 4
// Size: 0x30
class CAI_BehaviorHost
{
public:
	CAI_BehaviorBase* m_pPrimaryBehavior; // 0x0	
	CAI_DefaultNPC* m_pOuter; // 0x8	
	CUtlVector< CAI_BehaviorBase* > m_Behaviors; // 0x10	
	bool m_bCalledBehaviorSelectSchedule; // 0x28	
};

// Alignment: 10
// Size: 0x60
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

// Alignment: 0
// Size: 0x8
class IServerVehicle : public IVehicle
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x20
class SimpleConstraintSoundProfile
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8	
	float m_keyPoints[2]; // 0xc	
	float m_reversalSoundThresholds[3]; // 0x14	
};

// Alignment: 2
// Size: 0x10
struct ModifierTrackedBodyGroup_t
{
public:
	CUtlString m_strBodygroupName; // 0x0	
	int32_t m_nRestoreValue; // 0x8	
};

// Alignment: 3
// Size: 0x28
struct BodyLocationVDataForStance_t
{
public:
	CUtlString m_pSpeculationAttachment[3]; // 0x0	
	bool m_bUsePitch; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	Vector m_vecSpeculationPosMiddle; // 0x1c	
};

// Alignment: 6
// Size: 0x88
class CAI_AnimGraphServices : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	float m_flMinFaceTolerance; // 0x20	
	CUtlStringToken m_sFinishTagThatTaskIsWaitingFor; // 0x24	
	CUtlSymbolLarge m_iszGraphVariableToSetOnTaskEnd; // 0x28	
	CUtlSymbolLarge m_iszGraphVariableToSetOnScheduleEnd; // 0x30	
	CUtlSymbolLarge m_iszGraphVariableToSetOnFinishTag; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0040[0x20]; // 0x40
public:
	LastIncomingHit_t m_LastIncomingHit; // 0x60	
	
	// Static fields:
	static CUtlSymbolLarge &Get_TASK_GRAPH_VARIABLE_SET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_VARIABLE_SET_ON_TAG(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_VARIABLE_SET_ON_SCHEDULEEND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_TAG(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_TAG_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_TAG_AND_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[5]->m_instance);};
};

// Alignment: 3
// Size: 0xc
struct SquadSlotNPCEntry_t
{
public:
	SquadSlotId_t nId; // 0x0	
	CHandle< CBaseEntity > hEnemy; // 0x4	
	bool bHoldForManualRelease; // 0x8	
};

// Alignment: 2
// Size: 0xc8
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0	
	bool m_bFailed; // 0xc1	
};

// Alignment: 5
// Size: 0x9c
struct CBaseServerVehicle__exitanim_t
{
public:
	bool bUpright; // 0x0	
	bool bEscapeExit; // 0x1	
	char szAnimName[128]; // 0x2	
private:
	[[maybe_unused]] uint8_t __pad0082[0x2]; // 0x82
public:
	Vector vecExitPointLocal; // 0x84	
	QAngle vecExitAnglesLocal; // 0x90	
};

// Alignment: 2
// Size: 0x8
struct ActiveScriptedCommand_t
{
public:
	CHandle< CAI_ScriptedBase > m_hCommand; // 0x0	
	CHandle< CBaseEntity > m_hTarget; // 0x4	
};

// Alignment: 2
// Size: 0x1f8
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0	
	CRR_Response m_response; // 0x8	
};

// Alignment: 1
// Size: 0x18
class CStopwatch : public CStopwatchBase
{
public:
	float m_interval; // 0x10	
};

// Alignment: 3
// Size: 0x18
struct vehicle_gear_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float flMinSpeed; // 0x8	
	float flMaxSpeed; // 0xc	
	float flSpeedApproachFactor; // 0x10	
};

// Alignment: 11
// Size: 0x80
class CAI_ChoreoServices : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CHandle< CScriptedSequence > m_hCine; // 0x20	
	IChoreoServices::ScriptState_t m_scriptState; // 0x24	
	ScriptedOnDeath_t m_scriptedOnDeathBehavior; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlVector< ActiveScriptedCommand_t > m_vecActiveScriptedCommands; // 0x30	
	bool m_abResumedPriorities[2]; // 0x48	
	bool m_bInAnimGraphChoreo; // 0x4a	
private:
	[[maybe_unused]] uint8_t __pad004b[0x1]; // 0x4b
public:
	FacingMode m_nPriorFacingMode; // 0x4c	
	bool m_bInChoreo; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	float m_flSceneTime; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0058[0x20]; // 0x58
public:
	CHandle< CBaseModelEntity > m_hChoreoPhysProxy; // 0x78	
	float m_flChoreoPhysProxyAttachOffset; // 0x7c	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_SCENE_GENERIC(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_WAIT_FOR_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_SCRIPTED_WALK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_SCRIPTED_RUN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_SCRIPTED_CUSTOM_MOVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_SCRIPTED_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_SCRIPTED_FACE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PLAY_SCENE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SCRIPT_WALK_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SCRIPT_RUN_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SCRIPT_CUSTOM_MOVE_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_WAIT_FOR_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PUSH_SCRIPT_ARRIVAL_ACTIVITY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PLAY_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PLAY_SCRIPT_POST_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_ENABLE_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PLANT_ON_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FACE_SCRIPT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_ChoreoServices")->m_static_fields[17]->m_instance);};
};

// Alignment: 1
// Size: 0x10
class CTrackedObject_MODIFIER_TRACKED_SOUND : public IModifierTrackedObject
{
public:
	ModifierTrackedSound_t m_objectData; // 0x8	
};

// Alignment: 5
// Size: 0x20
class CGameChoreoServices : public IChoreoServices
{
public:
	CHandle< CBaseAnimating > m_hOwner; // 0x8	
	CHandle< CScriptedSequence > m_hScriptedSequence; // 0xc	
	IChoreoServices::ScriptState_t m_scriptState; // 0x10	
	CGameChoreoServices::ChoreoState_t m_choreoState; // 0x14	
	float m_flTimeStartedState; // 0x18	
};

// Alignment: 4
// Size: 0x60
class CAI_FreePass : public CAI_Component
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x18	
	float m_FreePassTimeRemaining; // 0x1c	
	CAI_MoveMonitor m_FreePassMoveMonitor; // 0x20	
	AI_FreePassParams_t m_Params; // 0x30	
};

// Alignment: 1
// Size: 0x78
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:
	bool m_bAllowMultipleScenes; // 0x70	
};

// Alignment: 5
// Size: 0x248
class CResponseQueue::CDeferredResponse
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CResponseCriteriaSet m_contexts; // 0x10	
	float m_fDispatchTime; // 0x40	
	CHandle< CBaseEntity > m_hIssuer; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	CRR_Response m_response; // 0x50	
	bool m_bResponseValid; // 0x240	
};

// Alignment: 0
// Size: 0xd8
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
class CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8	
};

// Alignment: 4
// Size: 0x20
struct HitscanGatherData_t
{
public:
	CBitVec< 2 > m_FiringOccludedHere; // 0x0	
	Vector m_vecFiringAtPos; // 0x4	
	Vector m_vecFiringTargetPos; // 0x10	
	bool m_bWeaponFireOccludedLastTime; // 0x1c	
};

// Alignment: 10
// Size: 0x3c
class CGameScriptedMoveData
{
public:
	Vector m_vDest; // 0x0	
	Vector m_vSrc; // 0xc	
	QAngle m_angSrc; // 0x18	
	QAngle m_angDst; // 0x24	
	float m_flDuration; // 0x30	
	float m_flStartTime; // 0x34	
	MoveType_t m_nPrevMoveType; // 0x38	
	bool m_bFinished; // 0x39	
	bool m_bTeleportOnEnd; // 0x3a	
	bool m_bIgnoreRotation; // 0x3b	
};

// Alignment: 1
// Size: 0x88
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:
	float m_flRadiusInner; // 0x80	
};

// Alignment: 5
// Size: 0x1d8
struct ModifierScriptValue_t
{
public:
	EModifierValue m_eModifierValue; // 0x0	
	EModifierScriptVariantType m_eType; // 0x4	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT"
	CModifierLevelFloat m_value; // 0x8	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODEL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelValue; // 0x18	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_PARTICLE"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleValue; // 0xf8	
};

// Alignment: 3
// Size: 0x18
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0	
	CUtlSymbolLarge m_iszValue; // 0x8	
	float m_fExpirationTime; // 0x10	
};

// Alignment: 2
// Size: 0x20
struct ModifierScriptedEventHandler_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	EModifierScriptedEvent m_eEvent; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CEmbeddedSubclassGeneric< 4 > m_sModifierToAdd; // 0x10	
};

// Alignment: 5
// Size: 0x70
class CAI_Scheduler : public CAI_Component
{
public:
	AIScheduleState_t m_ScheduleState; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	CUtlSymbolLarge m_failSchedule; // 0x40	
	CUtlSymbolLarge m_untranslatedSchedule; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
public:
	char* m_szFailText; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	char* m_szInterruptText; // 0x68	
	
	// Static fields:
	static int32_t &Get_ms_nTasksRun(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_Scheduler")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x20
struct MeleeAttackUseTrigger_t : public NPCAbilityUseTriggerBase_t
{
public:
	// MPropertyDescription "The view angle punch applied to the player when they receive this hit. Angle is specifed as Pitch / Yaw / Roll."
	QAngle m_angViewPunch; // 0x4	
	// MPropertyDescription "Force applied to the player when they receive this hit. X is the push back, and Y is the push to the side, based on the attacker's facing."
	Vector m_vecShoveForce; // 0x10	
	// MPropertyDescription "MELEE Range of this hit. Generally should remain within the evaluation Min/Max ranges, unless you know the animation significantly moves the NPC before this hit occurs."
	float m_flRange; // 0x1c	
};

// Alignment: 3
// Size: 0xc
struct AbilityLOSResult_t
{
public:
	ConditionId_t m_nCondition; // 0x0	
	BodyLocations_t m_nTargetBodyLocation; // 0x4	
	CHandle< CBaseEntity > m_hOccluderEntity; // 0x8	
};

// Alignment: 2
// Size: 0x8
struct AI_SchedLoadStatus_t
{
public:
	bool bValid; // 0x0	
	int32_t nSignature; // 0x4	
};

// Alignment: 21
// Size: 0x250
class CBaseServerVehicle : public IServerVehicle
{
public:
	CUtlVector< CPassengerInfo > m_PassengerInfo; // 0x8	
	CUtlVector< CPassengerRole > m_PassengerRoles; // 0x20	
	CBaseEntity* m_pVehicle; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	int32_t m_nNPCButtons; // 0x48	
	int32_t m_nPrevNPCButtons; // 0x4c	
	float m_flTurnDegrees; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< CBaseServerVehicle::entryanim_t > m_EntryAnimations; // 0x58	
	CUtlVector< CBaseServerVehicle::exitanim_t > m_ExitAnimations; // 0x70	
	bool m_bParsedAnimations; // 0x88	
	bool m_bUseLegacyExitChecks; // 0x89	
private:
	[[maybe_unused]] uint8_t __pad008a[0x2]; // 0x8a
public:
	int32_t m_iCurrentExitAnim; // 0x8c	
	Vector m_vecCurrentExitEndPoint; // 0x90	
	Vector m_savedViewOffset; // 0x9c	
	CHandle< CEntityBlocker > m_hExitBlocker; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
public:
	vehiclesounds_t m_vehicleSounds; // 0xb0	
	float m_flVehicleVolume; // 0x220	
	int32_t m_iSoundGear; // 0x224	
	float m_flSpeedPercentage; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x14]; // 0x22c
public:
	sound_states m_soundState; // 0x240	
	float m_soundStateStartTime; // 0x244	
	float m_lastSpeed; // 0x248	
};

// Alignment: 4
// Size: 0x50
struct AWS_NPCAbilityInfo_t
{
public:
	int32_t m_nLastGatheredAtTick; // 0x0	
	AbilityLOSResult_t m_nLastGatherLOSResult; // 0x4	
	CAI_ScheduleBits m_nLastGatherConditions; // 0x10	
	CAI_ScheduleBits m_nNonGatherConditions; // 0x30	
};

// Alignment: 4
// Size: 0x20
struct CSteamPal_SequencerTrackDef_t
{
public:
	int32_t m_nStandardNoteHold; // 0x0	
	CUtlString m_sPlayerInputLeftPadNotes; // 0x8	
	CUtlString m_sPlayerInputRightPadNotes; // 0x10	
	CUtlString m_sName; // 0x18	
};

// Alignment: 4
// Size: 0xb8
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	CTakeDamageResult result; // 0xa8	
	CHandle< CBaseEntity > hTarget; // 0xb0	
};

// Alignment: 3
// Size: 0x60
class CNetworkViewOffsetVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Alignment: 2
// Size: 0xb8
class CSteamPalGameRules : public CSingleplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0098[0x18]; // 0x98
public:
	bool m_bIsInAscentSection; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b1[0x3]; // 0xb1
public:
	CHandle< CBaseEntity > m_hPlayerResource; // 0xb4	
};

// Alignment: 1
// Size: 0x18
class CTrackedObject_MODIFIER_TRACKED_BODYGROUP : public IModifierTrackedObject
{
public:
	ModifierTrackedBodyGroup_t m_objectData; // 0x8	
};

// Alignment: 2
// Size: 0x8
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0	
	float m_flClusterArea; // 0x4	
};

// Alignment: 3
// Size: 0x14
struct AISquadEnemyInfo_t
{
public:
	CHandle< CBaseEntity > hEnemy; // 0x0	
	CBitVec< 48 > slots; // 0x4	
	CBitVec< 48 > inactive_slots_by_mode; // 0xc	
};

// Alignment: 5
// Size: 0x30
struct NPCAbilityDropBehavior_t
{
public:
	AbilityDropBehaviorType_t m_behaviorType; // 0x0	
	// MPropertySuppressExpr "m_behaviorType != eAbilityDropBehavior_AddIntAttributeToAbilityModel"
	// MPropertyDescription "Name of the Int attribute to add to the ability model being dropped."
	CUtlString m_sIntAttrName; // 0x8	
	// MPropertySuppressExpr "m_behaviorType != eAbilityDropBehavior_AddIntAttributeToAbilityModel"
	// MPropertyDescription "Value of the Int attribute to add to the ability model being dropped."
	int32_t m_nIntAttrValue; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MPropertySuppressExpr "m_behaviorType != eAbilityDropBehavior_CreateEntityBySubclass"
	// MPropertyDescription "Name of the misc subclass to create"
	CSubclassNameGeneric m_sSubclass; // 0x18	
	// MPropertySuppressExpr "m_behaviorType != eAbilityDropBehavior_SetGravityScale"
	// MPropertyDescription "Name of the misc subclass to create"
	float m_flGravityScale; // 0x28	
};

// Alignment: 2
// Size: 0x10
struct NPCAttachmentSpawnKV_t
{
public:
	CUtlString m_sKey; // 0x0	
	CUtlString m_sValue; // 0x8	
};

// Alignment: 2
// Size: 0x14
class CSkillDamage
{
public:
	// MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill is used)"
	CSkillFloat m_flDamage; // 0x0	
	// MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used."
	float m_flPhysicsForceDamage; // 0x10	
};

// Alignment: 18
// Size: 0x80
struct ViewSmoothingData_t
{
public:
	CBaseAnimating* pVehicle; // 0x0	
	bool bClampEyeAngles; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
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
private:
	[[maybe_unused]] uint8_t __pad0043[0x1]; // 0x43
public:
	float flEnterExitStartTime; // 0x44	
	float flEnterExitDuration; // 0x48	
	QAngle vecAnglesSaved; // 0x4c	
	Vector vecOriginSaved; // 0x58	
	QAngle vecAngleDiffSaved; // 0x64	
	QAngle vecAngleDiffMin; // 0x70	
};

// Alignment: 3
// Size: 0x14
class CAI_ScriptConditionsElement
{
public:
	CHandle< CBaseEntity > m_hActor; // 0x0	
	CSimTimer m_Timer; // 0x4	
	CSimTimer m_Timeout; // 0xc	
};

// Alignment: 8
// Size: 0x88
class ConstraintSoundInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	VelocitySampler m_vSampler; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	SimpleConstraintSoundProfile m_soundProfile; // 0x20	
	Vector m_forwardAxis; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50	
	CUtlSymbolLarge m_iszTravelSoundBack; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68	
	bool m_bPlayTravelSound; // 0x80	
	bool m_bPlayReversalSound; // 0x81	
};

// Alignment: 1
// Size: 0x8
struct NPCApplianceBulletAttachment_t
{
public:
	CUtlString m_strAttachmentName; // 0x0	
};

// Alignment: 6
// Size: 0x34
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0	
	MoveType_t m_MoveType; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flStartTime; // 0x8	
	Vector m_vecStartOrigin; // 0xc	
	Quaternion m_qStartRot; // 0x18	
	ParticleIndex_t m_nFXIndex; // 0x28	
};

// Alignment: 1
// Size: 0x2
struct ModifierQueuedRefreshHandle_t
{
public:
	uint16_t m_nBoxedTypeSafeInt; // 0x0	
};

// Alignment: 2
// Size: 0xb8
class CScriptUniformRandomStream
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hScriptScope; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0xa0]; // 0x10
public:
	int32_t m_nInitialSeed; // 0xb0	
	
	// Static fields:
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams(){return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x68
class CResponseQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x50]; // 0x0
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x50	
};

// Alignment: 12
// Size: 0x34
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
private:
	[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
public:
	int32_t m_ownerChannelIndex; // 0x20	
	Vector m_vecOrigin; // 0x24	
	bool m_bHasOwner; // 0x30	
};

// Alignment: 1
// Size: 0x30
class CPlayerControllerComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Alignment: 4
// Size: 0x8
struct ModifierTrackedParticle_t
{
public:
	ParticleIndex_t m_nParticleIndex; // 0x0	
	bool m_bDestroyImmediately; // 0x4	
	bool m_bStatusEffect; // 0x5	
	int16_t m_nStatusEffectPriority; // 0x6	
};

// Alignment: 3
// Size: 0x28
class CThrustController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_thrustVector; // 0x8	
	RotationVector m_torqueVector; // 0x14	
	float m_thrust; // 0x20	
};

// Alignment: 0
// Size: 0x8
class CFootstepTableHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x28
class CTrackedObject_MODIFIER_TRACKED_GRAPH_PARAMETER : public IModifierTrackedObject
{
public:
	ModifierTrackedGraphParameter_t m_objectData; // 0x8	
};

// Alignment: 9
// Size: 0x80
class CRagdoll : public IRagdoll
{
public:
	ragdoll_t m_ragdoll; // 0x8	
	Vector m_mins; // 0x40	
	Vector m_maxs; // 0x4c	
	Vector m_origin; // 0x58	
	float m_lastUpdate; // 0x64	
	bool m_allAsleep; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	Vector m_vecLastOrigin; // 0x6c	
	float m_flLastOriginChangeTime; // 0x78	
	float m_flAwakeTime; // 0x7c	
	
	// Static fields:
	static uint32_t &Get_s_globalCount(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_static_fields[0]->m_instance);};
};

// Alignment: 6
// Size: 0x18
struct CSteamPal_Turret_Wing_t
{
public:
	float m_flPitchMin; // 0x0	
	float m_flPitchMax; // 0x4	
	float m_flPitchRate; // 0x8	
	float m_flYawMin; // 0xc	
	float m_flYawMax; // 0x10	
	float m_flYawRate; // 0x14	
};

// Alignment: 2
// Size: 0x10
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8	
	Class_T classType; // 0xc	
};

// Alignment: 1
// Size: 0x2d0
class CFourWheelServerVehicle : public CBaseServerVehicle
{
public:
	ViewSmoothingData_t m_ViewSmoothing; // 0x250	
};

// Alignment: 1
// Size: 0x10
class CTrackedObject_MODIFIER_TRACKED_PARTICLE : public IModifierTrackedObject
{
public:
	ModifierTrackedParticle_t m_objectData; // 0x8	
};

// Alignment: 22
// Size: 0x100
class CAI_LeadBehavior
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x68]; // 0x0
public:
	CHandle< CBaseEntity > m_hSinkImplementor; // 0x68	
	Vector m_goal; // 0x6c	
	float m_goalyaw; // 0x78	
	Vector m_waitpoint; // 0x7c	
	float m_waitdistance; // 0x88	
	float m_leaddistance; // 0x8c	
	float m_retrievedistance; // 0x90	
	float m_successdistance; // 0x94	
	CUtlSymbolLarge m_weaponname; // 0x98	
	bool m_run; // 0xa0	
	bool m_gagleader; // 0xa1	
	bool m_hasspokenstart; // 0xa2	
	bool m_hasspokenarrival; // 0xa3	
	bool m_hasPausedScenes; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a5[0x3]; // 0xa5
public:
	float m_flSpeakNextNagTime; // 0xa8	
	float m_flWeaponSafetyTimeOut; // 0xac	
	float m_flForceRetrieveTimeout; // 0xb0	
	float m_flNextLeadIdle; // 0xb4	
	bool m_bInitialAheadTest; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x3]; // 0xb9
public:
	CAI_MoveMonitor m_MoveMonitor; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CRandStopwatch m_LostTimer; // 0xd0	
	CRandStopwatch m_LostLOSTimer; // 0xe8	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_LEAD_PLAYER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_PAUSE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_PAUSE_COMBAT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_RETRIEVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_RETRIEVE_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_SUCCEED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_AWAIT_SUCCESS(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_WAITFORPLAYER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_WAITFORPLAYERIDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_PLAYERNEEDSWEAPON(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_SPEAK_START(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_SPEAK_THEN_RETRIEVE_PLAYER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_LEAD_SPEAK_THEN_LEAD_PLAYER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_LEAD_GOAL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_STOP_LEADING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_FACE_GOAL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_ARRIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_SUCCEED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_GET_PATH_TO_WAITPOINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_WAVE_TO_PLAYER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_PLAYER_NEEDS_WEAPON(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_SPEAK_START(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[21]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_MOVE_TO_RANGE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[22]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_RETRIEVE_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[23]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_LEAD_WALK_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[24]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_LOST(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[25]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_LAGGING(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[26]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_NOT_LAGGING(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[27]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_VERY_CLOSE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[28]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_SUCCESS(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[29]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_HAVE_FOLLOWER_LOS(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[30]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_MOVED_FROM_MARK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[31]->m_instance);};
	static ConditionId_t &Get_COND_LEAD_FOLLOWER_MOVING_TOWARDS_ME(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_LeadBehavior")->m_static_fields[32]->m_instance);};
};

// Alignment: 2
// Size: 0x10
class CPassengerSeatTransition
{
public:
	CUtlSymbolLarge m_strAnimationName; // 0x0	
	int32_t m_nPriority; // 0x8	
};

// Alignment: 4
// Size: 0x20
struct vehicle_crashsound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float flMinSpeed; // 0x8	
	float flMinDeltaSpeed; // 0xc	
	int32_t gearLimit; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CUtlSymbolLarge iszCrashSound; // 0x18	
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

// Alignment: 18
// Size: 0x80
struct C_ViewSmoothingData_t
{
public:
	C_BaseAnimating* pVehicle; // 0x0	
	bool bClampEyeAngles; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
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
private:
	[[maybe_unused]] uint8_t __pad0043[0x1]; // 0x43
public:
	float flEnterExitStartTime; // 0x44	
	float flEnterExitDuration; // 0x48	
	QAngle vecAnglesSaved; // 0x4c	
	Vector vecOriginSaved; // 0x58	
	QAngle vecAngleDiffSaved; // 0x64	
	QAngle vecAngleDiffMin; // 0x70	
};

// Alignment: 15
// Size: 0xd0
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	uint16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Alignment: 0
// Size: 0x8
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 13
// Size: 0x30
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nReserved: 6; 		
		uint8_t __pad5: 8;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	float m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Alignment: 0
// Size: 0x8
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class C_MultiplayRules : public C_GameRules
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x110
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0	
	Vector m_vBaseColors[4]; // 0xd8	
	float m_flScale; // 0x108	
	int32_t m_nGUID; // 0x10c	
};

// Alignment: 0
// Size: 0x8
class C_SingleplayRules : public C_GameRules
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x58
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x50	
};

// Alignment: 1
// Size: 0x38
class C_SteamPalGameRules : public C_SingleplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	bool m_bIsInAscentSection; // 0x10	
};

// Alignment: 4
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18	
};

// Alignment: 14
// Size: 0x2d0
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsOn; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0xf]; // 0x9
public:
	bool m_bMuzzleFlashEnabled; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flMuzzleFlashBrightness; // 0x1c	
	Quaternion m_quatMuzzleFlashOrientation; // 0x20	
	Vector m_vecMuzzleFlashOrigin; // 0x30	
	float m_flFov; // 0x3c	
	float m_flFarZ; // 0x40	
	float m_flLinearAtten; // 0x44	
	bool m_bCastsShadows; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	float m_flCurrentPullBackDist; // 0x4c	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x50	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x58	
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x60	
	char m_textureName[64]; // 0x68	
};

// Alignment: 2
// Size: 0x8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Alignment: 5
// Size: 0x14
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Alignment: 1
// Size: 0xd8
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0	
};

// Alignment: 7
// Size: 0xf8
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

// Alignment: 10
// Size: 0x98
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
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x58]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0x90	
};

// Alignment: 4
// Size: 0x28
class C_CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0	
	bool m_bIsInSimulation; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flSimOrRenderTime; // 0x1c	
	float m_flInterpolatedTime; // 0x20	
};

// Alignment: 0
// Size: 0x8
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No members available
};

