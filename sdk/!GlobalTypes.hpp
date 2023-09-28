#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: !GlobalTypes
// Classes count: 1293
// Enums count: 303
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
// Size: 0x50
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
	FIELD_HVDATA = 0x49,
	FIELD_SCALE32 = 0x4a,
	FIELD_STRING_AND_TOKEN = 0x4b,
	FIELD_ENGINE_TIME = 0x4c,
	FIELD_ENGINE_TICK = 0x4d,
	FIELD_WORLD_GROUP_ID = 0x4e,
	FIELD_TYPECOUNT = 0x4f,
};

// Alignment: 1
// Size: 0x2
enum class FuseVariableAccess_t : uint8_t
{
	WRITABLE = 0x0,
	READ_ONLY = 0x1,
};

// Alignment: 1
// Size: 0x9
enum class FuseVariableType_t : uint8_t
{
	INVALID = 0x0,
	BOOL = 0x1,
	INT8 = 0x2,
	INT16 = 0x3,
	INT32 = 0x4,
	UINT8 = 0x5,
	UINT16 = 0x6,
	UINT32 = 0x7,
	FLOAT32 = 0x8,
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
// Size: 0x4
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
	INPUT_LAYOUT_VARIATION_MAX = 0x3,
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
// Size: 0xd
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
	RENDER_PRIM_COMPUTE_SHADER = 0xb,
	RENDER_PRIM_TYPE_COUNT = 0xc,
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
// Size: 0x4
enum class EntityIOTargetType_t : uint32_t
{
	ENTITY_IO_TARGET_INVALID = 0xffffffffffffffff,
	ENTITY_IO_TARGET_ENTITYNAME = 0x2,
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
// Size: 0x4
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
	AimMatrixBlendMode_BoneMask = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class FacingMode : uint32_t
{
	FacingMode_Manual = 0x0,
	FacingMode_Path = 0x1,
	FacingMode_LookTarget = 0x2,
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
// Size: 0x3
enum class VPhysXJoint_t__Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
	JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2,
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

// Alignment: 2
// Size: 0x3
enum class AnimScriptType : uint16_t
{
	ANIMSCRIPT_TYPE_INVALID = 0xffffffffffffffff,
	ANIMSCRIPT_FUSE_GENERAL = 0x0,
	ANIMSCRIPT_FUSE_STATEMACHINE = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class StanceOverrideMode : uint32_t
{
	Sequence = 0x0,
	Node = 0x1,
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
// Size: 0x3
enum class FootPinningTimingSource : uint32_t
{
	FootMotion = 0x0,
	Tag = 0x1,
	Parameter = 0x2,
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
enum class IKChannelMode : uint32_t
{
	TwoBone = 0x0,
	TwoBone_Translate = 0x1,
	OneBone = 0x2,
	OneBone_Translate = 0x3,
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
// Size: 0x2
enum class RagdollPoseControl : uint32_t
{
	Absolute = 0x0,
	Relative = 0x1,
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

// Alignment: 1
// Size: 0x3
enum class PoseType_t : uint8_t
{
	POSETYPE_STATIC = 0x0,
	POSETYPE_DYNAMIC = 0x1,
	POSETYPE_INVALID = 0xff,
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
// Size: 0x3
enum class AnimParamNetworkSetting : uint32_t
{
	Auto = 0x0,
	AlwaysNetwork = 0x1,
	NeverNetwork = 0x2,
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
// Size: 0x2
enum class EDemoBoneSelectionMode : uint32_t
{
	CaptureAllBones = 0x0,
	CaptureSelectedBones = 0x1,
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
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

// Alignment: 4
// Size: 0x4
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
	SOS_ACTION_TIME_LIMIT = 0x2,
	SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x3,
};

// Alignment: 1
// Size: 0x9
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_1POLE_6dB = 0x0,
	FILTER_SLOPE_1POLE_12dB = 0x1,
	FILTER_SLOPE_1POLE_18dB = 0x2,
	FILTER_SLOPE_1POLE_24dB = 0x3,
	FILTER_SLOPE_12dB = 0x4,
	FILTER_SLOPE_24dB = 0x5,
	FILTER_SLOPE_36dB = 0x6,
	FILTER_SLOPE_48dB = 0x7,
	FILTER_SLOPE_MAX = 0x7,
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
// Size: 0x2
enum class VMixPannerType_t : uint32_t
{
	PANNER_TYPE_LINEAR = 0x0,
	PANNER_TYPE_EQUAL_POWER = 0x1,
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
// Size: 0x1e
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
	VPROCESSOR_RT_PITCH = 0x2,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
	VPROCESSOR_DYNAMICS = 0x4,
	VPROCESSOR_PRESETDSP = 0x5,
	VPROCESSOR_DELAY = 0x6,
	VPROCESSOR_MOD_DELAY = 0x7,
	VPROCESSOR_DIFFUSOR = 0x8,
	VPROCESSOR_BOXVERB = 0x9,
	VPROCESSOR_FREEVERB = 0xa,
	VPROCESSOR_PLATEVERB = 0xb,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0xc,
	VPROCESSOR_FILTER = 0xd,
	VPROCESSOR_STEAMAUDIO_PATHING = 0xe,
	VPROCESSOR_EQ8 = 0xf,
	VPROCESSOR_ENVELOPE = 0x10,
	VPROCESSOR_VOCODER = 0x11,
	VPROCESSOR_CONVOLUTION = 0x12,
	VPROCESSOR_DYNAMICS_3BAND = 0x13,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 0x14,
	VPROCESSOR_SHAPER = 0x15,
	VPROCESSOR_PANNER = 0x16,
	VPROCESSOR_UTILITY = 0x17,
	VPROCESSOR_AUTOFILTER = 0x18,
	VPROCESSOR_OSC = 0x19,
	VPROCESSOR_STEREODELAY = 0x1a,
	VPROCESSOR_EFFECT_CHAIN = 0x1b,
	VPROCESSOR_SUBGRAPH_SWITCH = 0x1c,
	VPROCESSOR_STEAMAUDIO_DIRECT = 0x1d,
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
// Size: 0xa
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
	FILTER_ALLPASS = 0x7,
	FILTER_PASSTHROUGH = 0x8,
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
	OBJECT_TYPE_OVERLAY = 0x2000,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
	OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
};

// Alignment: 2
// Size: 0x41
enum class PulseInstructionCode_t : uint16_t
{
	INVALID = 0x0,
	IMMEDIATE_HALT = 0x1,
	RETURN_VOID = 0x2,
	RETURN_VALUE = 0x3,
	NOP = 0x4,
	JUMP = 0x5,
	JUMP_COND = 0x6,
	CHUNK_LEAP = 0x7,
	CHUNK_LEAP_COND = 0x8,
	PULSE_CALL_SYNC = 0x9,
	PULSE_CALL_ASYNC_FIRE = 0xa,
	CELL_INVOKE = 0xb,
	LIBRARY_INVOKE = 0xc,
	TARGET_INVOKE = 0xd,
	SET_VAR = 0xe,
	GET_VAR = 0xf,
	SET_REGISTER_LIT_BOOL = 0x10,
	SET_REGISTER_LIT_INT = 0x11,
	SET_REGISTER_LIT_FLOAT = 0x12,
	SET_REGISTER_LIT_STR = 0x13,
	SET_REGISTER_LIT_INVAL_EHANDLE = 0x14,
	SET_REGISTER_LIT_INVAL_SNDEVT_GUID = 0x15,
	SET_REGISTER_LIT_VEC3 = 0x16,
	SET_REGISTER_DOMAIN_VALUE = 0x17,
	COPY = 0x18,
	NOT = 0x19,
	NEGATE = 0x1a,
	ADD = 0x1b,
	SUB = 0x1c,
	MUL = 0x1d,
	DIV = 0x1e,
	MOD = 0x1f,
	LT = 0x20,
	LTE = 0x21,
	EQ = 0x22,
	NE = 0x23,
	AND = 0x24,
	OR = 0x25,
	CONVERT_VALUE = 0x26,
	LAST_SERIALIZED_CODE = 0x27,
	NEGATE_INT = 0x28,
	NEGATE_FLOAT = 0x29,
	ADD_INT = 0x2a,
	ADD_FLOAT = 0x2b,
	ADD_STRING = 0x2c,
	SUB_INT = 0x2d,
	SUB_FLOAT = 0x2e,
	MUL_INT = 0x2f,
	MUL_FLOAT = 0x30,
	DIV_INT = 0x31,
	DIV_FLOAT = 0x32,
	MOD_INT = 0x33,
	MOD_FLOAT = 0x34,
	LT_INT = 0x35,
	LT_FLOAT = 0x36,
	LTE_INT = 0x37,
	LTE_FLOAT = 0x38,
	EQ_BOOL = 0x39,
	EQ_INT = 0x3a,
	EQ_FLOAT = 0x3b,
	EQ_STRING = 0x3c,
	NE_BOOL = 0x3d,
	NE_INT = 0x3e,
	NE_FLOAT = 0x3f,
	NE_STRING = 0x40,
};

// Alignment: 4
// Size: 0xe
enum class PulseValueType_t : uint32_t
{
	PVAL_INVALID = 0xffffffffffffffff,
	PVAL_BOOL = 0x0,
	PVAL_INT = 0x1,
	PVAL_FLOAT = 0x2,
	PVAL_STRING = 0x3,
	PVAL_VEC3 = 0x4,
	PVAL_TRANSFORM = 0x5,
	PVAL_EHANDLE = 0x6,
	PVAL_RESOURCE = 0x7,
	PVAL_SNDEVT_GUID = 0x8,
	PVAL_SCHEMA_PTR = 0x9,
	PVAL_CURSOR_FLOW = 0xa,
	PVAL_ANY = 0xb,
	PVAL_COUNT = 0xc,
};

// Alignment: 4
// Size: 0x2
enum class PulseMethodCallMode_t : uint32_t
{
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	ASYNC_FIRE_AND_FORGET = 0x1,
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
enum class ParticleOmni2LightTypeChoiceList_t : uint32_t
{
	PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1,
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
// Size: 0x2
enum class ParticleHitboxDataSelection_t : uint32_t
{
	PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
	PARTICLE_HITBOX_COUNT = 0x1,
};

// Alignment: 4
// Size: 0x5
enum class ParticleTransformType_t : uint32_t
{
	PT_TYPE_INVALID = 0x0,
	PT_TYPE_NAMED_VALUE = 0x1,
	PT_TYPE_CONTROL_POINT = 0x2,
	PT_TYPE_CONTROL_POINT_RANGE = 0x3,
	PT_TYPE_COUNT = 0x4,
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
	SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
	SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
	SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
	SPRITECARD_TEXTURE_NORMALMAP = 0x5,
	SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
};

// Alignment: 4
// Size: 0x3
enum class BBoxVolumeType_t : uint32_t
{
	BBOX_VOLUME = 0x0,
	BBOX_DIMENSIONS = 0x1,
	BBOX_MINS_MAXS = 0x2,
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
// Size: 0x2
enum class ParticleLightUnitChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
	PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
};

// Alignment: 4
// Size: 0x13
enum class ParticleVecType_t : uint32_t
{
	PVEC_TYPE_INVALID = 0xffffffffffffffff,
	PVEC_TYPE_LITERAL = 0x0,
	PVEC_TYPE_LITERAL_COLOR = 0x1,
	PVEC_TYPE_NAMED_VALUE = 0x2,
	PVEC_TYPE_PARTICLE_VECTOR = 0x3,
	PVEC_TYPE_PARTICLE_VELOCITY = 0x4,
	PVEC_TYPE_CP_VALUE = 0x5,
	PVEC_TYPE_CP_RELATIVE_POSITION = 0x6,
	PVEC_TYPE_CP_RELATIVE_DIR = 0x7,
	PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x8,
	PVEC_TYPE_FLOAT_COMPONENTS = 0x9,
	PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xa,
	PVEC_TYPE_FLOAT_INTERP_OPEN = 0xb,
	PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xc,
	PVEC_TYPE_RANDOM_UNIFORM = 0xd,
	PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xe,
	PVEC_TYPE_CP_DELTA = 0xf,
	PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x10,
	PVEC_TYPE_COUNT = 0x11,
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
// Size: 0x4
enum class ParticleTraceSet_t : uint32_t
{
	PARTICLE_TRACE_SET_ALL = 0x0,
	PARTICLE_TRACE_SET_STATIC = 0x1,
	PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
	PARTICLE_TRACE_SET_DYNAMIC = 0x3,
};

// Alignment: 4
// Size: 0x8
enum class ParticleFloatMapType_t : uint32_t
{
	PF_MAP_TYPE_INVALID = 0xffffffffffffffff,
	PF_MAP_TYPE_DIRECT = 0x0,
	PF_MAP_TYPE_MULT = 0x1,
	PF_MAP_TYPE_REMAP = 0x2,
	PF_MAP_TYPE_REMAP_BIASED = 0x3,
	PF_MAP_TYPE_CURVE = 0x4,
	PF_MAP_TYPE_NOTCHED = 0x5,
	PF_MAP_TYPE_COUNT = 0x6,
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
	VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
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
// Size: 0x7
enum class VectorFloatExpressionType_t : uint32_t
{
	VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
	VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
	VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
	VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5,
};

// Alignment: 4
// Size: 0xc
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
	PARTICLE_PIN_FLOAT_VALUE = 0xb,
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
// Size: 0x3
enum class ParticleLightingQuality_t : uint32_t
{
	PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
	PARTICLE_LIGHTING_PER_VERTEX = 0x1,
	PARTICLE_LIGHTING_PER_PIXEL = 0xffffffffffffffff,
};

// Alignment: 4
// Size: 0x5
enum class ParticleModelType_t : uint32_t
{
	PM_TYPE_INVALID = 0x0,
	PM_TYPE_NAMED_VALUE_MODEL = 0x1,
	PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
	PM_TYPE_CONTROL_POINT = 0x3,
	PM_TYPE_COUNT = 0x4,
};

// Alignment: 4
// Size: 0x3
enum class ParticleParentSetMode_t : uint32_t
{
	PARTICLE_SET_PARENT_NO = 0x0,
	PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
	PARTICLE_SET_PARENT_ROOT = 0x1,
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
// Size: 0x9
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
	SCALAR_EXPRESSION_MOD = 0x7,
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
// Size: 0x18
enum class ParticleFloatType_t : uint32_t
{
	PF_TYPE_INVALID = 0xffffffffffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_NAMED_VALUE = 0x1,
	PF_TYPE_RANDOM_UNIFORM = 0x2,
	PF_TYPE_RANDOM_BIASED = 0x3,
	PF_TYPE_COLLECTION_AGE = 0x4,
	PF_TYPE_ENDCAP_AGE = 0x5,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
	PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
	PF_TYPE_CONTROL_POINT_SPEED = 0x8,
	PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
	PF_TYPE_CONCURRENT_DEF_COUNT = 0xa,
	PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xb,
	PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xc,
	PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xd,
	PF_TYPE_PARTICLE_NOISE = 0xe,
	PF_TYPE_PARTICLE_AGE = 0xf,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x10,
	PF_TYPE_PARTICLE_FLOAT = 0x11,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x12,
	PF_TYPE_PARTICLE_SPEED = 0x13,
	PF_TYPE_PARTICLE_NUMBER = 0x14,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x15,
	PF_TYPE_COUNT = 0x16,
};

// Alignment: 4
// Size: 0x3
enum class InheritableBoolType_t : uint32_t
{
	INHERITABLE_BOOL_INHERIT = 0x0,
	INHERITABLE_BOOL_FALSE = 0x1,
	INHERITABLE_BOOL_TRUE = 0x2,
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
// Size: 0x4
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
	MISSING_PARENT_SAME_INDEX = 0x2,
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

// Alignment: 4
// Size: 0xf
enum class EStyleNodeType : uint32_t
{
	ROOT = 0x0,
	EXPRESSION = 0x1,
	PROPERTY = 0x2,
	DEFINE = 0x3,
	IMPORT = 0x4,
	KEYFRAMES = 0x5,
	KEYFRAME_SELECTOR = 0x6,
	STYLE_SELECTOR = 0x7,
	WHITESPACE = 0x8,
	EXPRESSION_TEXT = 0x9,
	EXPRESSION_URL = 0xa,
	EXPRESSION_CONCAT = 0xb,
	REFERENCE_CONTENT = 0xc,
	REFERENCE_COMPILED = 0xd,
	REFERENCE_PASSTHROUGH = 0xe,
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
	MOVETYPE_OBSERVER = 0x9,
	MOVETYPE_LADDER = 0xa,
	MOVETYPE_CUSTOM = 0xb,
	MOVETYPE_LAST = 0xc,
	MOVETYPE_MAX_BITS = 0x5,
};

// Alignment: 4
// Size: 0x3
enum class EOverrideBlockLOS_t : uint32_t
{
	BLOCK_LOS_DEFAULT = 0x0,
	BLOCK_LOS_FORCE_FALSE = 0x1,
	BLOCK_LOS_FORCE_TRUE = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class FuncDoorSpawnPos_t : uint32_t
{
	FUNC_DOOR_SPAWN_CLOSED = 0x0,
	FUNC_DOOR_SPAWN_OPEN = 0x1,
};

// Alignment: 4
// Size: 0x7
enum class ObserverMode_t : uint32_t
{
	OBS_MODE_NONE = 0x0,
	OBS_MODE_FIXED = 0x1,
	OBS_MODE_IN_EYE = 0x2,
	OBS_MODE_CHASE = 0x3,
	OBS_MODE_ROAMING = 0x4,
	OBS_MODE_DIRECTED = 0x5,
	NUM_OBSERVER_MODES = 0x6,
};

// Alignment: 4
// Size: 0x5
enum class MedalRank_t : uint32_t
{
	MEDAL_RANK_NONE = 0x0,
	MEDAL_RANK_BRONZE = 0x1,
	MEDAL_RANK_SILVER = 0x2,
	MEDAL_RANK_GOLD = 0x3,
	MEDAL_RANK_COUNT = 0x4,
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
// Size: 0xe
enum class TakeDamageFlags_t : uint32_t
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
	DFLAG_RADIUS_DMG = 0x400,
	DMG_LASTDFLAG = 0x400,
	DFLAG_IGNORE_ARMOR = 0x800,
};

// Alignment: 4
// Size: 0x19
enum class WeaponSound_t : uint32_t
{
	WEAPON_SOUND_EMPTY = 0x0,
	WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
	WEAPON_SOUND_SINGLE = 0x2,
	WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
	WEAPON_SOUND_RELOAD = 0x4,
	WEAPON_SOUND_MELEE_MISS = 0x5,
	WEAPON_SOUND_MELEE_HIT = 0x6,
	WEAPON_SOUND_MELEE_HIT_WORLD = 0x7,
	WEAPON_SOUND_MELEE_HIT_PLAYER = 0x8,
	WEAPON_SOUND_MELEE_HIT_NPC = 0x9,
	WEAPON_SOUND_SPECIAL1 = 0xa,
	WEAPON_SOUND_SPECIAL2 = 0xb,
	WEAPON_SOUND_SPECIAL3 = 0xc,
	WEAPON_SOUND_NEARLYEMPTY = 0xd,
	WEAPON_SOUND_IMPACT = 0xe,
	WEAPON_SOUND_REFLECT = 0xf,
	WEAPON_SOUND_SECONDARY_IMPACT = 0x10,
	WEAPON_SOUND_SECONDARY_REFLECT = 0x11,
	WEAPON_SOUND_SINGLE_ACCURATE = 0x12,
	WEAPON_SOUND_ZOOM_IN = 0x13,
	WEAPON_SOUND_ZOOM_OUT = 0x14,
	WEAPON_SOUND_MOUSE_PRESSED = 0x15,
	WEAPON_SOUND_DROP = 0x16,
	WEAPON_SOUND_RADIO_USE = 0x17,
	WEAPON_SOUND_NUM_TYPES = 0x18,
};

// Alignment: 1
// Size: 0x8
enum class EKillTypes_t : uint8_t
{
	KILL_NONE = 0x0,
	KILL_DEFAULT = 0x1,
	KILL_HEADSHOT = 0x2,
	KILL_BLAST = 0x3,
	KILL_BURN = 0x4,
	KILL_SLASH = 0x5,
	KILL_SHOCK = 0x6,
	KILLTYPE_COUNT = 0x7,
};

// Alignment: 4
// Size: 0x2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Alignment: 4
// Size: 0x8
enum class GrenadeType_t : uint32_t
{
	GRENADE_TYPE_EXPLOSIVE = 0x0,
	GRENADE_TYPE_FLASH = 0x1,
	GRENADE_TYPE_FIRE = 0x2,
	GRENADE_TYPE_DECOY = 0x3,
	GRENADE_TYPE_SMOKE = 0x4,
	GRENADE_TYPE_SENSOR = 0x5,
	GRENADE_TYPE_SNOWBALL = 0x6,
	GRENADE_TYPE_TOTAL = 0x7,
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
// Size: 0xd
enum class QuestProgress__Reason : uint32_t
{
	QUEST_NONINITIALIZED = 0x0,
	QUEST_OK = 0x1,
	QUEST_NOT_ENOUGH_PLAYERS = 0x2,
	QUEST_WARMUP = 0x3,
	QUEST_NOT_CONNECTED_TO_STEAM = 0x4,
	QUEST_NONOFFICIAL_SERVER = 0x5,
	QUEST_NO_ENTITLEMENT = 0x6,
	QUEST_NO_QUEST = 0x7,
	QUEST_PLAYER_IS_BOT = 0x8,
	QUEST_WRONG_MAP = 0x9,
	QUEST_WRONG_MODE = 0xa,
	QUEST_NOT_SYNCED_WITH_SERVER = 0xb,
	QUEST_REASON_MAX = 0xc,
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
// Size: 0x3
enum class TRAIN_CODE : uint32_t
{
	TRAIN_SAFE = 0x0,
	TRAIN_BLOCKING = 0x1,
	TRAIN_FOLLOWING = 0x2,
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
// Size: 0x2
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
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
// Size: 0x18
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
	DMG_HEADSHOT = 0x2000000,
	DMG_DANGERZONE = 0x4000000,
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
// Size: 0x1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
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
// Size: 0x7
enum class PlayerConnectedState : uint32_t
{
	PlayerNeverConnected = 0xffffffffffffffff,
	PlayerConnected = 0x0,
	PlayerConnecting = 0x1,
	PlayerReconnecting = 0x2,
	PlayerDisconnecting = 0x3,
	PlayerDisconnected = 0x4,
	PlayerReserved = 0x5,
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
// Size: 0x23
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
	VOTE_FAILED_FAILED_RECENT_KICK = 0xf,
	VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 0x10,
	VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 0x11,
	VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
	VOTE_FAILED_FAILED_RECENT_RESTART = 0x13,
	VOTE_FAILED_SWAP_IN_PROGRESS = 0x14,
	VOTE_FAILED_DISABLED = 0x15,
	VOTE_FAILED_NEXTLEVEL_SET = 0x16,
	VOTE_FAILED_TOO_EARLY_SURRENDER = 0x17,
	VOTE_FAILED_MATCH_PAUSED = 0x18,
	VOTE_FAILED_MATCH_NOT_PAUSED = 0x19,
	VOTE_FAILED_NOT_IN_WARMUP = 0x1a,
	VOTE_FAILED_NOT_10_PLAYERS = 0x1b,
	VOTE_FAILED_TIMEOUT_ACTIVE = 0x1c,
	VOTE_FAILED_TIMEOUT_INACTIVE = 0x1d,
	VOTE_FAILED_TIMEOUT_EXHAUSTED = 0x1e,
	VOTE_FAILED_CANT_ROUND_END = 0x1f,
	VOTE_FAILED_REMATCH = 0x20,
	VOTE_FAILED_CONTINUE = 0x21,
	VOTE_FAILED_MAX = 0x22,
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
// Size: 0x4
enum class MoveMountingAmount_t : uint32_t
{
	MOVE_MOUNT_NONE = 0x0,
	MOVE_MOUNT_LOW = 0x1,
	MOVE_MOUNT_HIGH = 0x2,
	MOVE_MOUNT_MAXCOUNT = 0x3,
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
	NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4,
};

// Alignment: 4
// Size: 0x2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
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
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	SUBCLASS_SCOPE_PRECIPITATION = 0x0,
	SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
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
enum class ChickenActivity : uint32_t
{
	IDLE = 0x0,
	WALK = 0x1,
	RUN = 0x2,
	HOP = 0x3,
	JUMP = 0x4,
	GLIDE = 0x5,
	LAND = 0x6,
};

// Alignment: 4
// Size: 0xe
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
	HITGROUP_COUNT = 0xc,
};

// Alignment: 8
// Size: 0x15
enum class InputBitMask_t : uint64_t
{
	IN_NONE = 0x0,
	IN_ALL = 0xffffffffffffffff,
	IN_ATTACK = 0x1,
	IN_JUMP = 0x2,
	IN_DUCK = 0x4,
	IN_FORWARD = 0x8,
	IN_BACK = 0x10,
	IN_USE = 0x20,
	IN_TURNLEFT = 0x80,
	IN_TURNRIGHT = 0x100,
	IN_MOVELEFT = 0x200,
	IN_MOVERIGHT = 0x400,
	IN_ATTACK2 = 0x800,
	IN_RELOAD = 0x2000,
	IN_SPEED = 0x10000,
	IN_JOYAUTOSPRINT = 0x20000,
	IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
	IN_USEORRELOAD = 0x100000000,
	IN_SCORE = 0x200000000,
	IN_ZOOM = 0x400000000,
	IN_LOOK_AT_WEAPON = 0x800000000,
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
// Size: 0x4
enum class AmmoPosition_t : uint32_t
{
	AMMO_POSITION_INVALID = 0xffffffffffffffff,
	AMMO_POSITION_PRIMARY = 0x0,
	AMMO_POSITION_SECONDARY = 0x1,
	AMMO_POSITION_COUNT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Alignment: 1
// Size: 0x7
enum class WaterLevel_t : uint8_t
{
	WL_NotInWater = 0x0,
	WL_Feet = 0x1,
	WL_Knees = 0x2,
	WL_Waist = 0x3,
	WL_Chest = 0x4,
	WL_FullyUnderwater = 0x5,
	WL_Count = 0x6,
};

// Alignment: 4
// Size: 0x2
enum class ScriptedConflictResponse_t : uint32_t
{
	SS_CONFLICT_ENQUEUE = 0x0,
	SS_CONFLICT_INTERRUPT = 0x1,
};

// Alignment: 4
// Size: 0xa
enum class CSPlayerState : uint32_t
{
	STATE_ACTIVE = 0x0,
	STATE_WELCOME = 0x1,
	STATE_PICKINGTEAM = 0x2,
	STATE_PICKINGCLASS = 0x3,
	STATE_DEATH_ANIM = 0x4,
	STATE_DEATH_WAIT_FOR_KEY = 0x5,
	STATE_OBSERVER_MODE = 0x6,
	STATE_GUNGAME_RESPAWN = 0x7,
	STATE_DORMANT = 0x8,
	NUM_PLAYER_STATES = 0x9,
};

// Alignment: 4
// Size: 0x11
enum class gear_slot_t : uint32_t
{
	GEAR_SLOT_INVALID = 0xffffffffffffffff,
	GEAR_SLOT_RIFLE = 0x0,
	GEAR_SLOT_PISTOL = 0x1,
	GEAR_SLOT_KNIFE = 0x2,
	GEAR_SLOT_GRENADES = 0x3,
	GEAR_SLOT_C4 = 0x4,
	GEAR_SLOT_RESERVED_SLOT6 = 0x5,
	GEAR_SLOT_RESERVED_SLOT7 = 0x6,
	GEAR_SLOT_RESERVED_SLOT8 = 0x7,
	GEAR_SLOT_RESERVED_SLOT9 = 0x8,
	GEAR_SLOT_RESERVED_SLOT10 = 0x9,
	GEAR_SLOT_RESERVED_SLOT11 = 0xa,
	GEAR_SLOT_BOOSTS = 0xb,
	GEAR_SLOT_UTILITY = 0xc,
	GEAR_SLOT_COUNT = 0xd,
	GEAR_SLOT_FIRST = 0x0,
	GEAR_SLOT_LAST = 0xc,
};

// Alignment: 4
// Size: 0x4
enum class ScriptedMoveType_t : uint32_t
{
	SCRIPTED_MOVETYPE_NONE = 0x0,
	SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
	SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
	SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
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
enum class CommandExecMode_t : uint32_t
{
	EXEC_MANUAL = 0x0,
	EXEC_LEVELSTART = 0x1,
	EXEC_PERIODIC = 0x2,
	EXEC_MODES_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class CSWeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Alignment: 4
// Size: 0x12
enum class CSPlayerBlockingUseAction_t : uint32_t
{
	k_CSPlayerBlockingUseAction_None = 0x0,
	k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
	k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
	k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
	k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
	k_CSPlayerBlockingUseAction_OpeningSafe = 0x5,
	k_CSPlayerBlockingUseAction_EquippingParachute = 0x6,
	k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x7,
	k_CSPlayerBlockingUseAction_EquippingContract = 0x8,
	k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 0x9,
	k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0xa,
	k_CSPlayerBlockingUseAction_PayingToOpenDoor = 0xb,
	k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 0xc,
	k_CSPlayerBlockingUseAction_EquippingExoJump = 0xd,
	k_CSPlayerBlockingUseAction_PickingUpBumpMine = 0xe,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0xf,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x10,
	k_CSPlayerBlockingUseAction_MaxCount = 0x11,
};

// Alignment: 4
// Size: 0x4
enum class WeaponAttackType_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	ePrimary = 0x0,
	eSecondary = 0x1,
	eCount = 0x2,
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
// Size: 0x9
enum class EInButtonState : uint32_t
{
	IN_BUTTON_UP = 0x0,
	IN_BUTTON_DOWN = 0x1,
	IN_BUTTON_DOWN_UP = 0x2,
	IN_BUTTON_UP_DOWN = 0x3,
	IN_BUTTON_UP_DOWN_UP = 0x4,
	IN_BUTTON_DOWN_UP_DOWN = 0x5,
	IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
	IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
	IN_BUTTON_STATE_COUNT = 0x8,
};

// Alignment: 4
// Size: 0xc
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
	HULL_SMALL = 0x9,
	NUM_HULLS = 0xa,
	HULL_NONE = 0xb,
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
// Size: 0x3
enum class MoveLinearAuthoredPos_t : uint32_t
{
	MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
	MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
	MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2,
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
// Size: 0x49
enum class loadout_slot_t : uint32_t
{
	LOADOUT_SLOT_INVALID = 0xffffffffffffffff,
	LOADOUT_SLOT_MELEE = 0x0,
	LOADOUT_SLOT_C4 = 0x1,
	LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0x0,
	LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 0x1,
	LOADOUT_SLOT_SECONDARY0 = 0x2,
	LOADOUT_SLOT_SECONDARY1 = 0x3,
	LOADOUT_SLOT_SECONDARY2 = 0x4,
	LOADOUT_SLOT_SECONDARY3 = 0x5,
	LOADOUT_SLOT_SECONDARY4 = 0x6,
	LOADOUT_SLOT_SECONDARY5 = 0x7,
	LOADOUT_SLOT_SMG0 = 0x8,
	LOADOUT_SLOT_SMG1 = 0x9,
	LOADOUT_SLOT_SMG2 = 0xa,
	LOADOUT_SLOT_SMG3 = 0xb,
	LOADOUT_SLOT_SMG4 = 0xc,
	LOADOUT_SLOT_SMG5 = 0xd,
	LOADOUT_SLOT_RIFLE0 = 0xe,
	LOADOUT_SLOT_RIFLE1 = 0xf,
	LOADOUT_SLOT_RIFLE2 = 0x10,
	LOADOUT_SLOT_RIFLE3 = 0x11,
	LOADOUT_SLOT_RIFLE4 = 0x12,
	LOADOUT_SLOT_RIFLE5 = 0x13,
	LOADOUT_SLOT_HEAVY0 = 0x14,
	LOADOUT_SLOT_HEAVY1 = 0x15,
	LOADOUT_SLOT_HEAVY2 = 0x16,
	LOADOUT_SLOT_HEAVY3 = 0x17,
	LOADOUT_SLOT_HEAVY4 = 0x18,
	LOADOUT_SLOT_HEAVY5 = 0x19,
	LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 0x2,
	LOADOUT_SLOT_LAST_WHEEL_WEAPON = 0x19,
	LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 0x8,
	LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 0x19,
	LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 0x1a,
	LOADOUT_SLOT_GRENADE0 = 0x1a,
	LOADOUT_SLOT_GRENADE1 = 0x1b,
	LOADOUT_SLOT_GRENADE2 = 0x1c,
	LOADOUT_SLOT_GRENADE3 = 0x1d,
	LOADOUT_SLOT_GRENADE4 = 0x1e,
	LOADOUT_SLOT_GRENADE5 = 0x1f,
	LOADOUT_SLOT_LAST_WHEEL_GRENADE = 0x1f,
	LOADOUT_SLOT_EQUIPMENT0 = 0x20,
	LOADOUT_SLOT_EQUIPMENT1 = 0x21,
	LOADOUT_SLOT_EQUIPMENT2 = 0x22,
	LOADOUT_SLOT_EQUIPMENT3 = 0x23,
	LOADOUT_SLOT_EQUIPMENT4 = 0x24,
	LOADOUT_SLOT_EQUIPMENT5 = 0x25,
	LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 0x20,
	LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 0x25,
	LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
	LOADOUT_SLOT_PET = 0x27,
	LOADOUT_SLOT_CLOTHING_FACEMASK = 0x28,
	LOADOUT_SLOT_CLOTHING_HANDS = 0x29,
	LOADOUT_SLOT_FIRST_COSMETIC = 0x29,
	LOADOUT_SLOT_LAST_COSMETIC = 0x29,
	LOADOUT_SLOT_CLOTHING_EYEWEAR = 0x2a,
	LOADOUT_SLOT_CLOTHING_HAT = 0x2b,
	LOADOUT_SLOT_CLOTHING_LOWERBODY = 0x2c,
	LOADOUT_SLOT_CLOTHING_TORSO = 0x2d,
	LOADOUT_SLOT_CLOTHING_APPEARANCE = 0x2e,
	LOADOUT_SLOT_MISC0 = 0x2f,
	LOADOUT_SLOT_MISC1 = 0x30,
	LOADOUT_SLOT_MISC2 = 0x31,
	LOADOUT_SLOT_MISC3 = 0x32,
	LOADOUT_SLOT_MISC4 = 0x33,
	LOADOUT_SLOT_MISC5 = 0x34,
	LOADOUT_SLOT_MISC6 = 0x35,
	LOADOUT_SLOT_MUSICKIT = 0x36,
	LOADOUT_SLOT_FLAIR0 = 0x37,
	LOADOUT_SLOT_SPRAY0 = 0x38,
	LOADOUT_SLOT_FIRST_ALL_CHARACTER = 0x36,
	LOADOUT_SLOT_LAST_ALL_CHARACTER = 0x38,
	LOADOUT_SLOT_COUNT = 0x39,
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

// Alignment: 4
// Size: 0x3
enum class ForcedCrouchState_t : uint32_t
{
	FORCEDCROUCH_NONE = 0x0,
	FORCEDCROUCH_CROUCHED = 0x1,
	FORCEDCROUCH_UNCROUCHED = 0x2,
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
// Size: 0x3
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Alignment: 4
// Size: 0x14
enum class CSWeaponType : uint32_t
{
	WEAPONTYPE_KNIFE = 0x0,
	WEAPONTYPE_PISTOL = 0x1,
	WEAPONTYPE_SUBMACHINEGUN = 0x2,
	WEAPONTYPE_RIFLE = 0x3,
	WEAPONTYPE_SHOTGUN = 0x4,
	WEAPONTYPE_SNIPER_RIFLE = 0x5,
	WEAPONTYPE_MACHINEGUN = 0x6,
	WEAPONTYPE_C4 = 0x7,
	WEAPONTYPE_TASER = 0x8,
	WEAPONTYPE_GRENADE = 0x9,
	WEAPONTYPE_EQUIPMENT = 0xa,
	WEAPONTYPE_STACKABLEITEM = 0xb,
	WEAPONTYPE_FISTS = 0xc,
	WEAPONTYPE_BREACHCHARGE = 0xd,
	WEAPONTYPE_BUMPMINE = 0xe,
	WEAPONTYPE_TABLET = 0xf,
	WEAPONTYPE_MELEE = 0x10,
	WEAPONTYPE_SHIELD = 0x11,
	WEAPONTYPE_ZONE_REPULSOR = 0x12,
	WEAPONTYPE_UNKNOWN = 0x13,
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

// Alignment: 1
// Size: 0x3
enum class FixAngleSet_t : uint8_t
{
	None = 0x0,
	Absolute = 0x1,
	Relative = 0x2,
};

// Alignment: 4
// Size: 0x27
enum class GameAnimEventIndex_t : uint32_t
{
	AE_EMPTY = 0x0,
	AE_CL_PLAYSOUND = 0x1,
	AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
	AE_CL_PLAYSOUND_POSITION = 0x3,
	AE_SV_PLAYSOUND = 0x4,
	AE_CL_STOPSOUND = 0x5,
	AE_CL_PLAYSOUND_LOOPING = 0x6,
	AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
	AE_CL_STOP_PARTICLE_EFFECT = 0x8,
	AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
	AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xa,
	AE_SV_STOP_PARTICLE_EFFECT = 0xb,
	AE_FOOTSTEP = 0xc,
	AE_RAGDOLL = 0xd,
	AE_CL_STOP_RAGDOLL_CONTROL = 0xe,
	AE_CL_ENABLE_BODYGROUP = 0xf,
	AE_CL_DISABLE_BODYGROUP = 0x10,
	AE_CL_BODYGROUP_SET_VALUE = 0x11,
	AE_SV_BODYGROUP_SET_VALUE = 0x12,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x13,
	AE_WPN_PRIMARYATTACK = 0x14,
	AE_WPN_SECONDARYATTACK = 0x15,
	AE_FIRE_INPUT = 0x16,
	AE_CL_CLOTH_ATTR = 0x17,
	AE_CL_CLOTH_GROUND_OFFSET = 0x18,
	AE_CL_CLOTH_STIFFEN = 0x19,
	AE_CL_CLOTH_EFFECT = 0x1a,
	AE_CL_CREATE_ANIM_SCOPE_PROP = 0x1b,
	AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x1c,
	AE_CL_BODYGROUP_SET_TO_CLIP = 0x1d,
	AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x1e,
	AE_SV_SHOW_SILENCER = 0x1f,
	AE_SV_ATTACH_SILENCER_COMPLETE = 0x20,
	AE_SV_HIDE_SILENCER = 0x21,
	AE_SV_DETACH_SILENCER_COMPLETE = 0x22,
	AE_CL_EJECT_MAG = 0x23,
	AE_WPN_COMPLETE_RELOAD = 0x24,
	AE_WPN_HEALTHSHOT_INJECT = 0x25,
	AE_CL_C4_SCREEN_TEXT = 0x26,
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
// Size: 0x3
enum class CSWeaponSilencerType : uint32_t
{
	WEAPONSILENCER_NONE = 0x0,
	WEAPONSILENCER_DETACHABLE = 0x1,
	WEAPONSILENCER_INTEGRATED = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Alignment: 4
// Size: 0xa
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	CLASS_BOMB = 0x3,
	CLASS_FOOT_CONTACT_SHADOW = 0x4,
	CLASS_WEAPON = 0x5,
	CLASS_WATER_SPLASHER = 0x6,
	CLASS_WEAPON_VIEWMODEL = 0x7,
	CLASS_DOOR = 0x8,
	NUM_CLASSIFY_CLASSES = 0x9,
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
// Size: 0x5
enum class AnimLoopMode_t : uint32_t
{
	ANIM_LOOP_MODE_INVALID = 0xffffffffffffffff,
	ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
	ANIM_LOOP_MODE_LOOPING = 0x1,
	ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
	ANIM_LOOP_MODE_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x6
enum class ScriptedMoveTo_t : uint32_t
{
	CINE_MOVETO_WAIT = 0x0,
	CINE_MOVETO_WALK = 0x1,
	CINE_MOVETO_RUN = 0x2,
	CINE_MOVETO_CUSTOM = 0x3,
	CINE_MOVETO_TELEPORT = 0x4,
	CINE_MOVETO_WAIT_FACING = 0x5,
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
// Size: 0x3
enum class CSWeaponMode : uint32_t
{
	Primary_Mode = 0x0,
	Secondary_Mode = 0x1,
	WeaponMode_MAX = 0x2,
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
// Size: 0x18
enum class PlayerAnimEvent_t : uint32_t
{
	PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0x0,
	PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 0x1,
	PLAYERANIMEVENT_GRENADE_PULL_PIN = 0x2,
	PLAYERANIMEVENT_THROW_GRENADE = 0x3,
	PLAYERANIMEVENT_JUMP = 0x4,
	PLAYERANIMEVENT_RELOAD = 0x5,
	PLAYERANIMEVENT_CLEAR_FIRING = 0x6,
	PLAYERANIMEVENT_DEPLOY = 0x7,
	PLAYERANIMEVENT_SILENCER_STATE = 0x8,
	PLAYERANIMEVENT_SILENCER_TOGGLE = 0x9,
	PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 0xa,
	PLAYERANIMEVENT_CATCH_WEAPON = 0xb,
	PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 0xc,
	PLAYERANIMEVENT_RELOAD_CANCEL_LOOKATWEAPON = 0xd,
	PLAYERANIMEVENT_HAULBACK = 0xe,
	PLAYERANIMEVENT_IDLE = 0xf,
	PLAYERANIMEVENT_STRIKE_HIT = 0x10,
	PLAYERANIMEVENT_STRIKE_MISS = 0x11,
	PLAYERANIMEVENT_BACKSTAB = 0x12,
	PLAYERANIMEVENT_DRYFIRE = 0x13,
	PLAYERANIMEVENT_FIDGET = 0x14,
	PLAYERANIMEVENT_RELEASE = 0x15,
	PLAYERANIMEVENT_TAUNT = 0x16,
	PLAYERANIMEVENT_COUNT = 0x17,
};

// Alignment: 1
// Size: 0x3
enum class BeginDeathLifeStateTransition_t : uint8_t
{
	NO_CHANGE_IN_LIFESTATE = 0x0,
	TRANSITION_TO_LIFESTATE_DYING = 0x1,
	TRANSITION_TO_LIFESTATE_DEAD = 0x2,
};

// Alignment: 4
// Size: 0x7
enum class CSWeaponCategory : uint32_t
{
	WEAPONCATEGORY_OTHER = 0x0,
	WEAPONCATEGORY_MELEE = 0x1,
	WEAPONCATEGORY_SECONDARY = 0x2,
	WEAPONCATEGORY_SMG = 0x3,
	WEAPONCATEGORY_RIFLE = 0x4,
	WEAPONCATEGORY_HEAVY = 0x5,
	WEAPONCATEGORY_COUNT = 0x6,
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
// Size: 0x3
enum class SoundEventStartType_t : uint32_t
{
	SOUNDEVENT_START_PLAYER = 0x0,
	SOUNDEVENT_START_WORLD = 0x1,
	SOUNDEVENT_START_ENTITY = 0x2,
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
// Size: 0x3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Alignment: 4
// Size: 0x3
enum class ObserverInterpState_t : uint32_t
{
	OBSERVER_INTERP_NONE = 0x0,
	OBSERVER_INTERP_TRAVELING = 0x1,
	OBSERVER_INTERP_SETTLING = 0x2,
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
// Size: 0x5
enum class StanceType_t : uint32_t
{
	STANCE_CURRENT = 0xffffffffffffffff,
	STANCE_DEFAULT = 0x0,
	STANCE_CROUCHING = 0x1,
	STANCE_PRONE = 0x2,
	NUM_STANCES = 0x3,
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
// Size: 0x3
enum class EGrenadeThrowState : uint32_t
{
	NotThrowing = 0x0,
	Throwing = 0x1,
	ThrowComplete = 0x2,
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
// Size: 0x3
enum class CompMatPropertyMutatorConditionType_t : uint32_t
{
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
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

// Alignment: 4
// Size: 0x7
enum class CompositeMaterialInputTextureType_t : uint32_t
{
	INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
	INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
	INPUT_TEXTURE_TYPE_COLOR = 0x2,
	INPUT_TEXTURE_TYPE_MASKS = 0x3,
	INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
	INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
	INPUT_TEXTURE_TYPE_AO = 0x6,
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

struct FuseFunctionIndex_t;
struct FuseVariableIndex_t;
struct EngineLoopState_t;
struct CEntityComponentHelper;
struct ChangeAccessorFieldPathIndex_t;
struct EntComponentInfo_t;
struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct PostProcessingLocalContrastParameters_t;
struct CMotionSearchDB;
struct AnimScriptHandle;
struct CAnimUpdateNodeRef;
struct CSeqAutoLayerFlag;
struct CAnimAttachment;
struct CAnimInputDamping;
struct CAnimParamHandle;
struct VPhysics2ShapeDef_t;
struct TwoBoneIKSettings_t;
struct CMotionSearchNode;
struct CProductQuantizer;
struct IKBoneNameAndIndex_t;
struct AnimParamID;
struct AnimNodeID;
struct CAnimGraphSettingsManager;
struct CAnimNodePath;
struct CSeqSeqDescFlag;
struct CSeqTransition;
struct SolveIKChainPoseOpFixedSettings_t;
struct AnimStateID;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct HSequence;
struct SkeletonBoneBounds_t;
struct CRenderSkeleton;
struct CSeqMultiFetch;
struct CMotionDataSet;
struct CBlendCurve;
struct AnimComponentID;
struct CAnimKeyData;
struct CSeqMultiFetchFlag;
struct PackedAABB_t;
struct CDrawCullingData;
struct CAnimCycle;
struct CFootCycle;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct CFootCycleDefinition;
struct CFootTrajectories;
struct CAnimDemoCaptureSettings;
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
struct JiggleBoneSettingsList_t;
struct FootLockPoseOpFixedSettings;
struct CPhysSurfacePropertiesPhysics;
struct CPhysSurfacePropertiesSoundNames;
struct CPhysSurfacePropertiesAudio;
struct AnimationDecodeDebugDumpElement_t;
struct CParamSpanUpdater;
struct VPhysXConstraintParams_t;
struct CRenderBufferBinding;
struct CPoseHandle;
struct PhysFeModelDesc_t;
struct TraceSettings_t;
struct VPhysXRange_t;
struct FootPinningPoseOpFixedData_t;
struct AnimTagID;
struct CVectorQuantizer;
struct MotionIndex;
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
struct VoxelVisBlockOffset_t;
struct WorldBuilderParams_t;
struct BakedLightingInfo_t;
struct CPulse_OutflowConnection;
struct PulseRuntimeChunkIndex_t;
struct PulseRegisterMap_t;
struct PulseRuntimeRegisterIndex_t;
struct PulseDocNodeID_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeVarIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseTestEHandle_t;
struct CPulseGraphInstance_TestDomain;
struct CPulse_ResumePoint;
struct PulseRuntimeOutputIndex_t;
struct ParticleAttributeIndex_t;
struct CParticleCollectionVecInput;
struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct CParticleTransformInput;
struct CParticleCollectionRendererFloatInput;
struct CPerParticleVecInput;
struct CParticleModelInput;
struct ParticlePreviewState_t;
struct TextureControls_t;
struct CParticleVariableRef;
struct CPathParameters;
struct CParticleRemapFloatInput;
struct CRandomNumberGeneratorParameters;
struct ControlPointReference_t;
struct CParticleVisibilityInputs;
struct ParticleNamedValueConfiguration_t;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CParticleFloatInput;
struct CParticleCollectionRendererVecInput;
struct CResponseCriteriaSet;
struct CRR_Response;
struct ResponseFollowup;
struct AmmoIndex_t;
struct ResponseParams;
struct CTakeDamageInfo;
struct CTakeDamageResult;
struct CVoteController;
struct GameTime_t;
struct CSoundEnvelope;
struct CCopyRecipientFilter;
struct GameTick_t;
struct CBasePlayerController;
struct CRangeInt;
struct VelocitySampler;
struct SimpleConstraintSoundProfile;
struct CBaseFlex;
struct CSkeletonInstance;
struct CNetworkVarChainer;
struct CSkillFloat;
struct ParticleIndex_t;
struct CompositeMaterialInputLooseVariable_t;
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
	uint64_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ResourceId_t")->m_static_fields[0]->m_instance);};
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
	Quaternion m_Quaternion; // 0x30	
	QAngle m_QAngle; // 0x40	
	RotationVector m_RotationVector; // 0x4c	
	RadianEuler m_RadianEuler; // 0x58	
	DegreeEuler m_DegreeEuler; // 0x64	
	QuaternionStorage m_QuaternionStorage; // 0x70	
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

// Alignment: 1
// Size: 0x2
struct FuseVariableIndex_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("FuseVariableIndex_t")->m_static_fields[0]->m_instance);};
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
class InfoForResourceTypeCDOTANovelsList
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

// Alignment: 1
// Size: 0x2
struct FuseFunctionIndex_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("FuseFunctionIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeIPulseGraphDef
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

// Alignment: 4
// Size: 0x50
class CFuseProgram
{
public:
	CUtlVector< uint8 > m_programBuffer; // 0x0	
	CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18	
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30	
	int32_t m_nMaxTempVarsUsed; // 0x48	
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
class InfoForResourceTypeCCSGOEconItem
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
class InfoForResourceTypeCNmSkeleton
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCTypeScriptResource
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

// Alignment: 6
// Size: 0x18
struct VariableInfo_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlStringToken m_nameToken; // 0x8	
	FuseVariableIndex_t m_nIndex; // 0xc	
	uint8_t m_nNumComponents; // 0xe	
	FuseVariableType_t m_eVarType; // 0xf	
	FuseVariableAccess_t m_eAccess; // 0x10	
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
class InfoForResourceTypeCNmClip
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

// Alignment: 6
// Size: 0xb0
class CFuseSymbolTable
{
public:
	CUtlVector< ConstantInfo_t > m_constants; // 0x0	
	CUtlVector< VariableInfo_t > m_variables; // 0x18	
	CUtlVector< FunctionInfo_t > m_functions; // 0x30	
	CUtlHashtable< CUtlStringToken, int32 > m_constantMap; // 0x48	
	CUtlHashtable< CUtlStringToken, int32 > m_variableMap; // 0x68	
	CUtlHashtable< CUtlStringToken, int32 > m_functionMap; // 0x88	
};

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCJavaScriptResource
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

// Alignment: 5
// Size: 0x20
struct FunctionInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlStringToken m_nameToken; // 0x10	
	int32_t m_nParamCount; // 0x14	
	FuseFunctionIndex_t m_nIndex; // 0x18	
	bool m_bIsPure; // 0x1a	
};

// Alignment: 3
// Size: 0x10
struct ConstantInfo_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlStringToken m_nameToken; // 0x8	
	float m_flValue; // 0xc	
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

// Alignment: 2
// Size: 0x8
struct PackedAABB_t
{
public:
	uint32_t m_nPackedMin; // 0x0	
	uint32_t m_nPackedMax; // 0x4	
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

// Alignment: 0
// Size: 0x1
class InfoForResourceTypeCResponseRulesList
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

// Alignment: 2
// Size: 0x30
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
};

// Alignment: 7
// Size: 0x68
struct EntComponentInfo_t
{
public:
	char* m_pName; // 0x0	
	char* m_pCPPClassname; // 0x8	
	char* m_pNetworkDataReferencedDescription; // 0x10	
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x18	
	int32_t m_nRuntimeIndex; // 0x20	
	uint32_t m_nFlags; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
public:
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60	
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

// Alignment: 2
// Size: 0x8
struct EventClientSendInput_t
{
public:
	bool m_bFinalClientCommandTick; // 0x0	
	int32_t m_nAdditionalClientCommandsToCreate; // 0x4	
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

// Alignment: 6
// Size: 0x48
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	double m_flRenderFrameTime; // 0x30	
	double m_flRenderFrameTimeUnbounded; // 0x38	
	float m_flRealTime; // 0x40	
	bool m_bRenderOnly; // 0x44	
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

// Alignment: 2
// Size: 0x30
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
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

// Alignment: 15
// Size: 0x3c
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
	float m_flLuminanceSource; // 0x20	
	float m_flExposureBiasShadows; // 0x24	
	float m_flExposureBiasHighlights; // 0x28	
	float m_flMinShadowLum; // 0x2c	
	float m_flMaxShadowLum; // 0x30	
	float m_flMinHighlightLum; // 0x34	
	float m_flMaxHighlightLum; // 0x38	
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
// Size: 0x118
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0	
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4	
	bool m_bHasBloomParams; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	PostProcessingBloomParameters_t m_bloomParams; // 0x44	
	bool m_bHasVignetteParams; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8	
	bool m_bHasLocalContrastParams; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
public:
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0	
	int32_t m_nColorCorrectionVolumeDim; // 0xf4	
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8	
	bool m_bHasColorCorrection; // 0x110	
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
// Size: 0x28
class CNetworkVarChainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20	
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

// Alignment: 2
// Size: 0x20
class CProductQuantizer
{
public:
	CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0	
	int32_t m_nDimensions; // 0x18	
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
	uint8_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("AttachmentHandle_t")->m_static_fields[0]->m_instance);};
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
	AnimNodeNetworkMode m_networkMode; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_name; // 0x50	
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
class AnimComponentID
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

// Alignment: 1
// Size: 0x4
class AnimTagID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 2
// Size: 0x2
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0	
	uint8_t m_index; // 0x1	
};

// Alignment: 2
// Size: 0x18
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0	
	Vector m_vecSize; // 0xc	
};

// Alignment: 1
// Size: 0x4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 1
// Size: 0x4
class AnimParamID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 2
// Size: 0x70
class CSetFacingUpdateNode : public CUnaryUpdateNode
{
public:
	FacingMode m_facingMode; // 0x68	
	bool m_bResetChild; // 0x6c	
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

// Alignment: 2
// Size: 0x20
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0	
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8	
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

// Alignment: 0
// Size: 0x30
class CStringAnimTag : public CAnimTagBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x18
class CParamSpanUpdater
{
public:
	CUtlVector< ParamSpan_t > m_spans; // 0x0	
};

// Alignment: 1
// Size: 0x18
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0	
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

// Alignment: 1
// Size: 0x30
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
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

// Alignment: 2
// Size: 0x20
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0	
	bool m_bMatchTargetOrientation; // 0x18	
};

// Alignment: 0
// Size: 0x58
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CRagdollUpdateNode : public CUnaryUpdateNode
{
public:
	int32_t m_nWeightListIndex; // 0x68	
	RagdollPoseControl m_poseControlMethod; // 0x6c	
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
// Size: 0xa8
class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< CSolveIKTargetHandle_t > m_targetHandles; // 0x68	
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80	
};

// Alignment: 2
// Size: 0x4
class CPoseHandle
{
public:
	uint16_t m_nIndex; // 0x0	
	PoseType_t m_eType; // 0x2	
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
// Size: 0x4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 2
// Size: 0x18
struct ParamSpanSample_t
{
public:
	CAnimVariant m_value; // 0x0	
	float m_flCycle; // 0x14	
};

// Alignment: 2
// Size: 0x8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0	
	float m_flTraceRadius; // 0x4	
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
// Size: 0x70
class CPointConstraint : public CBaseConstraint
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x20
class CAnimParamHandleMap
{
public:
	CUtlHashtable< uint16, int16 > m_list; // 0x0	
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

// Alignment: 2
// Size: 0x10
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0	
	StateActionBehavior m_eBehavior; // 0x8	
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
// Size: 0x10
class MotionBlendItem
{
public:
	CSmartPtr< CMotionNode > m_pChild; // 0x0	
	float m_flKeyValue; // 0x8	
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
class CAnimGraphModelBinding
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_modelName; // 0x8	
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10	
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

// Alignment: 1
// Size: 0x4
class HSequence
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("HSequence")->m_static_fields[0]->m_instance);};
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

// Alignment: 2
// Size: 0x20
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0	
	CUtlVector< CFlexOp > m_FlexOps; // 0x8	
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
// Size: 0x70
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x40	
	float m_flAxisSize; // 0x60	
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

// Alignment: 0
// Size: 0x60
class CBindPoseUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x18
class CAnimActionUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
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

// Alignment: 2
// Size: 0x18
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
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

// Alignment: 2
// Size: 0x20
class CMotionDataSet
{
public:
	CUtlVector< CMotionGraphGroup > m_groups; // 0x0	
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

// Alignment: 3
// Size: 0x10
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0	
	int8_t m_ConeAxis[3]; // 0xc	
	int8_t m_ConeCutoff; // 0xf	
};

// Alignment: 2
// Size: 0x18
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0	
	uint32_t m_nBindOffsetBytes; // 0x10	
};

// Alignment: 1
// Size: 0x58
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
};

// Alignment: 2
// Size: 0x30
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	CAnimVariant m_value; // 0x1a	
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

// Alignment: 0
// Size: 0x50
class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
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
// Size: 0x4
class CCycleBase
{
public:
	float m_flCycle; // 0x0	
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

// Alignment: 0
// Size: 0x4
class CFootCycle : public CCycleBase
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x1
class CAnimEnum
{
public:
	uint8_t m_value; // 0x0	
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

// Alignment: 2
// Size: 0x58
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50	
	float m_flTime; // 0x54	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
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

// Alignment: 1
// Size: 0x38
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x30	
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

// Alignment: 2
// Size: 0x60
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48	
	KeyValues3 m_Args; // 0x50	
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

// Alignment: 0
// Size: 0x38
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
	// No members available
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
// Size: 0x20
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0	
	CAnimParamHandle m_hParamIn; // 0x18	
	CAnimParamHandle m_hParamOut; // 0x1a	
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

// Alignment: 0
// Size: 0x70
class CParentConstraint : public CBaseConstraint
{
public:
	// No members available
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
// Size: 0x38
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x30	
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

// Alignment: 1
// Size: 0x58
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50	
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

// Alignment: 3
// Size: 0x20
class FootStepTrigger
{
public:
	CUtlVector< int32 > m_tags; // 0x0	
	int32_t m_nFootIndex; // 0x18	
	StepPhase m_triggerPhase; // 0x1c	
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
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MKV3TransferName "audiosounds"
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48	
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x88	
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

// Alignment: 1
// Size: 0x88
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x30	
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

// Alignment: 2
// Size: 0x20
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18	
	bool m_bIsZeroDuration; // 0x1c	
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

// Alignment: 0
// Size: 0x4
class CAnimCycle : public CCycleBase
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x20
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18	
	bool m_bSetEnabled; // 0x1c	
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

// Alignment: 2
// Size: 0x20
class CDirectPlaybackTagData
{
public:
	CUtlString m_sequenceName; // 0x0	
	CUtlVector< TagSpan_t > m_tags; // 0x8	
};

// Alignment: 1
// Size: 0x4
class MotionDBIndex
{
public:
	uint32_t m_nIndex; // 0x0	
};

// Alignment: 1
// Size: 0x18
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0	
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

// Alignment: 1
// Size: 0x60
class CCPPScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	// MPropertyFriendlyName "Scripts"
	CUtlVector< CGlobalSymbol > m_scriptsToRun; // 0x30	
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

// Alignment: 2
// Size: 0x18
class CAnimUser
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
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

// Alignment: 2
// Size: 0x80
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
	CUtlVector< float32 > m_ChoiceWeights; // 0x60	
};

// Alignment: 1
// Size: 0x68
class CBoolAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x60	
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
// Size: 0x48
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x30	
};

// Alignment: 2
// Size: 0x70
class CCycleControlUpdateNode : public CUnaryUpdateNode
{
public:
	AnimValueSource m_valueSource; // 0x68	
	CAnimParamHandle m_paramIndex; // 0x6c	
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

// Alignment: 2
// Size: 0x10
struct PermModelDataAnimatedMaterialAttribute_t
{
public:
	CUtlString m_AttributeName; // 0x0	
	int32_t m_nNumChannels; // 0x8	
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

// Alignment: 1
// Size: 0x68
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
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
// Size: 0x70
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50	
	float m_flMinStepsRemaining; // 0x68	
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

// Alignment: 2
// Size: 0x90
class CAimConstraint : public CBaseConstraint
{
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
};

// Alignment: 0
// Size: 0x70
class CChoreoUpdateNode : public CUnaryUpdateNode
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x4
struct CSolveIKTargetHandle_t
{
public:
	CAnimParamHandle m_positionHandle; // 0x0	
	CAnimParamHandle m_orientationHandle; // 0x2	
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

// Alignment: 2
// Size: 0x70
class CPathHelperUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flStoppingRadius; // 0x68	
	float m_flStoppingSpeedScale; // 0x6c	
};

// Alignment: 1
// Size: 0x50
class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
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

// Alignment: 1
// Size: 0x48
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30	
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

// Alignment: 2
// Size: 0x8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0	
	float m_flMax; // 0x4	
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

// Alignment: 1
// Size: 0xa8
class CDemoSettingsComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimDemoCaptureSettings m_settings; // 0x30	
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

// Alignment: 3
// Size: 0x28
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0	
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8	
	bool m_bTopLevel; // 0x20	
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

// Alignment: 2
// Size: 0x18
class CMeshletDescriptor
{
public:
	PackedAABB_t m_PackedAABB; // 0x0	
	CDrawCullingData m_CullingData; // 0x8	
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

// Alignment: 0
// Size: 0x50
class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x20
class CAnimGraphSettingsGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No members available
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
// Size: 0x48
class CMotionNodeBlend1D : public CMotionNode
{
public:
	CUtlVector< MotionBlendItem > m_blendItems; // 0x28	
	int32_t m_nParamIndex; // 0x40	
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
// Size: 0x4
class MotionIndex
{
public:
	uint16_t m_nGroup; // 0x0	
	uint16_t m_nMotion; // 0x2	
};

// Alignment: 2
// Size: 0x20
class WeightList
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< float32 > m_weights; // 0x8	
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
// Size: 0x68
class CMotionGraphUpdateNode : public CLeafUpdateNode
{
public:
	CSmartPtr< CMotionGraph > m_pMotionGraph; // 0x58	
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

// Alignment: 2
// Size: 0x8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0	
	float m_weight; // 0x4	
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
	CUtlVector< CAnimEventDefinition > m_eventArray; // 0x48	
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

// Alignment: 0
// Size: 0x58
class CEditableMotionGraph : public CMotionGraph
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x70
class CStanceScaleUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_hParam; // 0x68	
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

// Alignment: 2
// Size: 0x10
struct StanceInfo_t
{
public:
	Vector m_vPosition; // 0x0	
	float m_flDirection; // 0xc	
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
// Size: 0x4
class ConfigIndex
{
public:
	uint16_t m_nGroup; // 0x0	
	uint16_t m_nConfig; // 0x2	
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
// Size: 0x1a0
class CAnimScriptManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10	
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

// Alignment: 0
// Size: 0x38
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// No members available
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

// Alignment: 1
// Size: 0x8
class SampleCode
{
public:
	uint8_t m_subCode[8]; // 0x0	
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
// Size: 0x4
class AnimNodeOutputID
{
public:
	uint32_t m_id; // 0x0	
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

// Alignment: 0
// Size: 0x60
class CInputStreamUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x58
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0	
	CFootTrajectories m_trajectories; // 0x40	
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

// Alignment: 1
// Size: 0x70
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:
	float m_flSlowDownStrength; // 0x68	
};

// Alignment: 0
// Size: 0x60
class CZeroPoseUpdateNode : public CLeafUpdateNode
{
public:
	// No members available
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

// Alignment: 5
// Size: 0x30
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4 vSphere[2]; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	uint16_t nVertexMapIndex; // 0x24	
	uint16_t nFlags; // 0x26	
};

// Alignment: 5
// Size: 0x20
struct FeSphereRigid_t
{
public:
	fltx4 vSphere; // 0x0	
	uint16_t nNode; // 0x10	
	uint16_t nCollisionMask; // 0x12	
	uint16_t nVertexMapIndex; // 0x14	
	uint16_t nFlags; // 0x16	
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

// Alignment: 6
// Size: 0x30
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0	
	uint32_t m_nNameHash; // 0x8	
	Color m_Color; // 0xc	
	float m_flVolumetricSolveStrength; // 0x10	
	int32_t m_nScaleSourceNode; // 0x14	
	CUtlVector< float32 > m_Weights; // 0x18	
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
	QuaternionStorage qAdjust; // 0x10	
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

// Alignment: 6
// Size: 0x40
struct FeBoxRigid_t
{
public:
	CTransform tmFrame2; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	Vector vSize; // 0x24	
	uint16_t nVertexMapIndex; // 0x30	
	uint16_t nFlags; // 0x32	
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

// Alignment: 4
// Size: 0x8
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0	
	uint16_t m_nSphereRigidIndex; // 0x2	
	uint16_t m_nBoxRigidIndex; // 0x4	
	uint16_t m_nCollisionPlaneIndex; // 0x6	
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

// Alignment: 1
// Size: 0xc
struct RnWing_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
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

// Alignment: 4
// Size: 0x18
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	RnPlane_t m_Plane; // 0x4	
	float flStrength; // 0x14	
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

// Alignment: 12
// Size: 0x38
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
	Vector vCenterOfMass; // 0x20	
	float flVolumetricSolveStrength; // 0x2c	
	int16_t nScaleSourceNode; // 0x30	
	uint16_t nNodeListCount; // 0x32	
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

// Alignment: 10
// Size: 0xa8
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0	
	Vector m_vMax; // 0xc	
	CUtlVector< RnNode_t > m_Nodes; // 0x18	
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30	
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48	
	CUtlVector< RnWing_t > m_Wings; // 0x60	
	CUtlVector< uint8 > m_Materials; // 0x78	
	Vector m_vOrthographicAreas; // 0x90	
	uint32_t m_nFlags; // 0x9c	
	uint32_t m_nDebugFlags; // 0xa0	
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

// Alignment: 35
// Size: 0xd0
struct RnBodyDesc_t
{
public:
	CUtlString m_sDebugName; // 0x0	
	Vector m_vPosition; // 0x8	
	QuaternionStorage m_qOrientation; // 0x14	
	Vector m_vLinearVelocity; // 0x24	
	Vector m_vAngularVelocity; // 0x30	
	Vector m_vLocalMassCenter; // 0x3c	
	Vector m_LocalInertiaInv[3]; // 0x48	
	float m_flMassInv; // 0x6c	
	float m_flGameMass; // 0x70	
	float m_flInertiaScaleInv; // 0x74	
	float m_flLinearDamping; // 0x78	
	float m_flAngularDamping; // 0x7c	
	float m_flLinearDrag; // 0x80	
	float m_flAngularDrag; // 0x84	
	float m_flLinearBuoyancyDrag; // 0x88	
	float m_flAngularBuoyancyDrag; // 0x8c	
	Vector m_vLastAwakeForceAccum; // 0x90	
	Vector m_vLastAwakeTorqueAccum; // 0x9c	
	float m_flBuoyancyFactor; // 0xa8	
	float m_flGravityScale; // 0xac	
	float m_flTimeScale; // 0xb0	
	int32_t m_nBodyType; // 0xb4	
	uint32_t m_nGameIndex; // 0xb8	
	uint32_t m_nGameFlags; // 0xbc	
	int8_t m_nMinVelocityIterations; // 0xc0	
	int8_t m_nMinPositionIterations; // 0xc1	
	int8_t m_nMassPriority; // 0xc2	
	bool m_bEnabled; // 0xc3	
	bool m_bSleeping; // 0xc4	
	bool m_bIsContinuousEnabled; // 0xc5	
	bool m_bDragEnabled; // 0xc6	
	bool m_bBuoyancyDragEnabled; // 0xc7	
	bool m_bGravityDisabled; // 0xc8	
	bool m_bSpeculativeEnabled; // 0xc9	
	bool m_bHasShadowController; // 0xca	
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

// Alignment: 4
// Size: 0x10
struct FeTaperedCapsuleStretch_t
{
public:
	uint16_t nNode[2]; // 0x0	
	uint16_t nCollisionMask; // 0x4	
	// MPropertySuppressField
	uint16_t nDummy; // 0x6	
	float flRadius[2]; // 0x8	
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

// Alignment: 1
// Size: 0xd8
struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t
{
public:
	uint64_t m_nOldPointer; // 0xd0	
};

// Alignment: 98
// Size: 0x5e8
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
	uint16_t m_nFirstPositionDrivenNode; // 0x46	
	uint16_t m_nSimdTriCount1; // 0x48	
	uint16_t m_nSimdTriCount2; // 0x4a	
	uint16_t m_nSimdQuadCount1; // 0x4c	
	uint16_t m_nSimdQuadCount2; // 0x4e	
	uint16_t m_nQuadCount1; // 0x50	
	uint16_t m_nQuadCount2; // 0x52	
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
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1c8	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1e0	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x1f8	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x210	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x228	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x240	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x258	
	CUtlVector< float32 > m_DynNodeFriction; // 0x270	
	CUtlVector< float32 > m_LocalRotation; // 0x288	
	CUtlVector< float32 > m_LocalForce; // 0x2a0	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2b8	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2d0	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x2e8	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x300	
	CUtlVector< uint16 > m_TreeParents; // 0x318	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x330	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x348	
	CUtlVector< uint16 > m_FreeNodes; // 0x360	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x378	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x390	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3a8	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3c0	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3d8	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x3f0	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x408	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x420	
	CUtlVector< uint16 > m_SourceElems; // 0x438	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x450	
	CUtlVector< FeTri_t > m_Tris; // 0x468	
	uint16_t m_nTriCount1; // 0x480	
	uint16_t m_nTriCount2; // 0x482	
	uint8_t m_nReservedUint8; // 0x484	
	uint8_t m_nExtraPressureIterations; // 0x485	
	uint8_t m_nExtraGoalIterations; // 0x486	
	uint8_t m_nExtraIterations; // 0x487	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x488	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4a0	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4b8	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4d0	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x4e8	
	CUtlVector< uint8 > m_MorphSetData; // 0x500	
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x518	
	CUtlVector< uint8 > m_VertexMapValues; // 0x530	
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x548	
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x560	
	CUtlVector< uint16 > m_LockToGoal; // 0x578	
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x590	
	float m_flInternalPressure; // 0x5a8	
	float m_flDefaultTimeDilation; // 0x5ac	
	float m_flWindage; // 0x5b0	
	float m_flWindDrag; // 0x5b4	
	float m_flDefaultSurfaceStretch; // 0x5b8	
	float m_flDefaultThreadStretch; // 0x5bc	
	float m_flDefaultGravityScale; // 0x5c0	
	float m_flDefaultVelAirDrag; // 0x5c4	
	float m_flDefaultExpAirDrag; // 0x5c8	
	float m_flDefaultVelQuadAirDrag; // 0x5cc	
	float m_flDefaultExpQuadAirDrag; // 0x5d0	
	float m_flRodVelocitySmoothRate; // 0x5d4	
	float m_flQuadVelocitySmoothRate; // 0x5d8	
	float m_flAddWorldCollisionRadius; // 0x5dc	
	float m_flDefaultVolumetricSolveAmount; // 0x5e0	
	uint16_t m_nRodVelocitySmoothIterations; // 0x5e4	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x5e6	
};

// Alignment: 1
// Size: 0xb8
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

// Alignment: 3
// Size: 0xc
struct VMixOscDesc_t
{
public:
	// MPropertyFriendlyName "Type"
	VMixLFOShape_t oscType; // 0x0	
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyAttributeRange "0.1 16000"
	float m_freq; // 0x4	
	// MPropertyFriendlyName "Phase (degrees)"
	// MPropertyAttributeRange "0 360"
	float m_flPhase; // 0x8	
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

// Alignment: 1
// Size: 0x4
struct VMixEffectChainDesc_t
{
public:
	// MPropertyFriendlyName "Crossfade Time (s)"
	// MPropertyAttributeRange "0.1 10"
	float m_flCrossfadeTime; // 0x0	
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
	// MPropertyFriendlyName "Below Threshold(dB)"
	float m_fldbThresholdBelow; // 0x8	
	// MPropertyFriendlyName "Above Threshold(dB)"
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
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
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

// Alignment: 4
// Size: 0x10
struct VMixDiffusorDesc_t
{
public:
	float m_flSize; // 0x0	
	float m_flComplexity; // 0x4	
	float m_flFeedback; // 0x8	
	float m_flOutputGain; // 0xc	
};

// Alignment: 7
// Size: 0x1c
struct VMixPlateverbDesc_t
{
public:
	float m_flPrefilter; // 0x0	
	float m_flInputDiffusion1; // 0x4	
	float m_flInputDiffusion2; // 0x8	
	float m_flDecay; // 0xc	
	float m_flDamp; // 0x10	
	float m_flFeedbackDiffusion1; // 0x14	
	float m_flFeedbackDiffusion2; // 0x18	
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

// Alignment: 2
// Size: 0x20
class CDspPresetModifierList
{
public:
	// MPropertyDescription "Name of the DSP effect / subgraph used."
	// MPropertyFriendlyName "DSP Effect Name"
	CUtlString m_dspName; // 0x0	
	// MPropertyDescription "Set of modifiers for individual mix groups"
	// MPropertyFriendlyName "Mixgroup Modifiers"
	CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8	
};

// Alignment: 6
// Size: 0x20
class CDSPMixgroupModifier
{
public:
	// MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
	// MPropertyFriendlyName "Mixgroup Name"
	CUtlString m_mixgroup; // 0x0	
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Max reverb gain amount for listener DSP."
	float m_flModifier; // 0x8	
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
	float m_flModifierMin; // 0xc	
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
	float m_flSourceModifier; // 0x10	
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
	float m_flSourceModifierMin; // 0x14	
	// MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
	// MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
	float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18	
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

// Alignment: 17
// Size: 0x50
struct VMixBoxverbDesc_t
{
public:
	float m_flSizeMax; // 0x0	
	float m_flSizeMin; // 0x4	
	float m_flComplexity; // 0x8	
	float m_flDiffusion; // 0xc	
	float m_flModDepth; // 0x10	
	float m_flModRate; // 0x14	
	bool m_bParallel; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	VMixFilterDesc_t m_filterType; // 0x1c	
	float m_flWidth; // 0x2c	
	float m_flHeight; // 0x30	
	float m_flDepth; // 0x34	
	float m_flFeedbackScale; // 0x38	
	float m_flFeedbackWidth; // 0x3c	
	float m_flFeedbackHeight; // 0x40	
	float m_flFeedbackDepth; // 0x44	
	float m_flOutputGain; // 0x48	
	float m_flTaps; // 0x4c	
};

// Alignment: 9
// Size: 0x30
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bPhaseInvert; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flGlideTime; // 0x14	
	float m_flDelay; // 0x18	
	float m_flOutputGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flModRate; // 0x24	
	float m_flModDepth; // 0x28	
	bool m_bApplyAntialiasing; // 0x2c	
};

// Alignment: 1
// Size: 0x18
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0	
};

// Alignment: 2
// Size: 0x8
struct VMixPannerDesc_t
{
public:
	VMixPannerType_t m_type; // 0x0	
	float m_flStrength; // 0x4	
};

// Alignment: 3
// Size: 0xc
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0	
	bool m_bOnlyTailsOnFadeOut; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flInterpolationTime; // 0x8	
};

// Alignment: 5
// Size: 0x38
class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Minimum Value"
	float m_flMinValue; // 0x1c	
	// MPropertyFriendlyName "Maximum Value"
	float m_flMaxValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Parameter Name"
	CUtlString m_opvarName; // 0x28	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x30	
};

// Alignment: 1
// Size: 0x18
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector< CDspPresetModifierList > m_table; // 0x0	
};

// Alignment: 4
// Size: 0x10
struct VMixFreeverbDesc_t
{
public:
	float m_flRoomSize; // 0x0	
	float m_flDamp; // 0x4	
	float m_flWidth; // 0x8	
	float m_flLateReflections; // 0xc	
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
struct VoxelVisBlockOffset_t
{
public:
	uint32_t m_nOffset; // 0x0	
	uint32_t m_nElementCount; // 0x4	
};

// Alignment: 2
// Size: 0x40
struct EntityKeyValueData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x8	
	CUtlBinaryBlock m_keyValuesData; // 0x20	
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
// Size: 0x18
struct AggregateMeshInfo_t
{
public:
	uint32_t m_nVisClusterMemberOffset; // 0x0	
	uint8_t m_nVisClusterMemberCount; // 0x4	
	bool m_bHasTransform; // 0x5	
	int16_t m_nDrawCallIndex; // 0x6	
	int16_t m_nLODSetupIndex; // 0x8	
	uint8_t m_nLODGroupMask; // 0xa	
	Color m_vTintColor; // 0xb	
private:
	[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
public:
	ObjectTypeFlags_t m_objectFlags; // 0x10	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14	
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

// Alignment: 13
// Size: 0xa0
class CVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	uint32_t m_nBaseClusterCount; // 0x40	
	uint32_t m_nPVSBytesPerCluster; // 0x44	
	Vector m_vMinBounds; // 0x48	
	Vector m_vMaxBounds; // 0x54	
	float m_flGridSize; // 0x60	
	uint32_t m_nSkyVisibilityCluster; // 0x64	
	uint32_t m_nSunVisibilityCluster; // 0x68	
	VoxelVisBlockOffset_t m_NodeBlock; // 0x6c	
	VoxelVisBlockOffset_t m_RegionBlock; // 0x74	
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c	
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84	
	VoxelVisBlockOffset_t m_MasksBlock; // 0x8c	
	VoxelVisBlockOffset_t m_nVisBlocks; // 0x94	
};

// Alignment: 5
// Size: 0x20
struct WorldBuilderParams_t
{
public:
	float m_flMinDrawVolumeSize; // 0x0	
	bool m_bBuildBakedLighting; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	Vector2D m_vLightmapUvScale; // 0x8	
	uint64_t m_nCompileTimestamp; // 0x10	
	uint64_t m_nCompileFingerprint; // 0x18	
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
	CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x48	
	CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects; // 0x60	
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
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlString m_hammerUniqueId; // 0x10	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x18	
	CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // 0x30	
};

// Alignment: 4
// Size: 0x80
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x20	
	BakedLightingInfo_t m_worldLightingInfo; // 0x38	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x68	
};

// Alignment: 8
// Size: 0xa0
struct ClutterSceneObject_t
{
public:
	AABB_t m_Bounds; // 0x0	
	ObjectTypeFlags_t m_flags; // 0x18	
	int16_t m_nLayer; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	CUtlVector< Vector > m_instancePositions; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	CUtlVector< float32 > m_instanceScales; // 0x50	
	CUtlVector< Color > m_instanceTintSrgb; // 0x68	
	CUtlVector< ClutterTile_t > m_tiles; // 0x80	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x98	
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

// Alignment: 7
// Size: 0x50
struct NodeData_t
{
public:
	int32_t m_nParent; // 0x0	
	Vector m_vOrigin; // 0x4	
	Vector m_vMinBounds; // 0x10	
	Vector m_vMaxBounds; // 0x1c	
	float m_flMinimumDistance; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30	
	CUtlString m_worldNodePrefix; // 0x48	
};

// Alignment: 8
// Size: 0x78
struct AggregateSceneObject_t
{
public:
	ObjectTypeFlags_t m_allFlags; // 0x0	
	ObjectTypeFlags_t m_anyFlags; // 0x4	
	int16_t m_nLayer; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
public:
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10	
	CUtlVector< AggregateLODSetup_t > m_lodSetups; // 0x28	
	CUtlVector< uint16 > m_visClusterMembership; // 0x40	
	CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x58	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x70	
};

// Alignment: 3
// Size: 0x20
struct ClutterTile_t
{
public:
	uint32_t m_nFirstInstance; // 0x0	
	uint32_t m_nLastInstance; // 0x4	
	AABB_t m_BoundsWs; // 0x8	
};

// Alignment: 4
// Size: 0x28
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

// Alignment: 3
// Size: 0x38
struct AggregateLODSetup_t
{
public:
	Vector m_vLODOrigin; // 0x0	
	float m_fMaxObjectScale; // 0xc	
	CUtlVectorFixedGrowable< float32 > m_fSwitchDistances; // 0x10	
};

// Alignment: 15
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
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80	
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88	
};

// Alignment: 0
// Size: 0x188
class CPulseExecCursor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x188]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct PulseDocNodeID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseDocNodeID_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x48
class CPulseCell_Base
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MFgdFromSchemaCompletelySkipField
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeStateOffset_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeStateOffset_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x50
class CPulseRuntimeMethodArg
{
public:
	CKV3MemberNameWithStorage m_Name; // 0x0	
	CUtlString m_Description; // 0x38	
	CPulseValueFullType m_Type; // 0x40	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseFlow : public CPulseCell_Base
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeChunkIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeChunkIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x10
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
};

// Alignment: 2
// Size: 0x68
class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	CPulse_OutflowConnection m_No; // 0x58	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCallInfoIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeCallInfoIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x20
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	KeyValues3 m_Outparams; // 0x10	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 9
// Size: 0xf8
class CPulseGraphDef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_DomainIdentifier; // 0x8	
	CUtlSymbolLarge m_ParentMapName; // 0x10	
	CUtlVector< CPulse_Chunk* > m_Chunks; // 0x18	
	CUtlVector< CPulseCell_Base* > m_Cells; // 0x30	
	CUtlVector< CPulse_Variable > m_Vars; // 0x48	
	CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // 0x60	
	CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // 0x78	
	CUtlVector< CPulse_CallInfo* > m_CallInfos; // 0x90	
	CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0xa8	
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 4
// Size: 0x1a0
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0x188	
	Vector2D m_vPos; // 0x18c	
	float m_flHeadingDeg; // 0x194	
	bool m_bPenUp; // 0x198	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCellIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeCellIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeRegisterIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseValue : public CPulseCell_Base
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x40
class CPulse_CallInfo
{
public:
	CUtlSymbolLarge m_PortName; // 0x0	
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	PulseRegisterMap_t m_RegisterMap; // 0x10	
	PulseDocNodeID_t m_CallMethodID; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34	
	int32_t m_nSrcInstruction; // 0x38	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	PulseRegisterMap_t m_RegisterMap; // 0x50	
};

// Alignment: 0
// Size: 0xd0
class CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xd0]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CPulseMathlib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeOutputIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeOutputIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 6
// Size: 0xf8
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xd0	
	bool m_bExplicitTimeStepping; // 0xd1	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xd2	
private:
	[[maybe_unused]] uint8_t __pad00d3[0x1]; // 0xd3
public:
	int32_t m_nNextValidateIndex; // 0xd4	
	CUtlVector< CUtlString > m_Tracepoints; // 0xd8	
	bool m_bTestYesOrNoPath; // 0xf0	
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

// Alignment: 5
// Size: 0xb0
class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_MethodName; // 0x70	
	CUtlString m_Description; // 0x78	
	bool m_bIsPublic; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x7]; // 0x81
public:
	CPulseValueFullType m_ReturnType; // 0x88	
	CUtlVector< CPulseRuntimeMethodArg > m_Args; // 0x98	
};

// Alignment: 5
// Size: 0x38
class CPulse_Variable
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_Type; // 0x10	
	KeyValues3 m_DefaultValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
public:
	bool m_bIsPublic; // 0x32	
};

// Alignment: 6
// Size: 0x48
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CPulseValueFullType m_InstanceType; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x40	
	int32_t m_nSrcInstruction; // 0x44	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeInvokeIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeInvokeIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct PulseTestEHandle_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseTestEHandle_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_SimultaneousParallel : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 0
// Size: 0xf0
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x68
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseFlow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x50	
};

// Alignment: 4
// Size: 0x20
class CPulse_OutputConnection
{
public:
	CUtlSymbolLarge m_SourceOutput; // 0x0	
	CUtlSymbolLarge m_TargetEntity; // 0x8	
	CUtlSymbolLarge m_TargetInput; // 0x10	
	CUtlSymbolLarge m_Param; // 0x18	
};

// Alignment: 3
// Size: 0x20
class CPulse_PublicOutput
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_ParamType; // 0x10	
};

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_EventName; // 0x70	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 0
// Size: 0x10
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x28
struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
{
public:
	CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0	
	int32_t m_nNextShuffle; // 0x20	
};

// Alignment: 7
// Size: 0x30
struct FakeEntity_t
{
public:
	PulseTestEHandle_t m_nHandle; // 0x0	
	CUtlString m_Name; // 0x8	
	CUtlString m_Class; // 0x10	
	bool m_bDestroyed; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	CPulseGraphInstance_TestDomain* m_pAssociatedGraphInstance; // 0x20	
	bool m_bFuncWasCalled; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	float m_fValue; // 0x2c	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_StringSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_MultiInflow_WithDefault : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x98
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_SourceEntity; // 0x70	
	CUtlSymbolLarge m_SourceOutput; // 0x78	
	CUtlSymbolLarge m_TargetInput; // 0x80	
	CPulseValueFullType m_ExpectedParamType; // 0x88	
};

// Alignment: 2
// Size: 0x190
class CTestDomainDerived_Cursor : public CPulseExecCursor
{
public:
	int32_t m_nCursorValueA; // 0x188	
	int32_t m_nCursorValueB; // 0x18c	
};

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_HookName; // 0x70	
};

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

// Alignment: 0
// Size: 0x1
class CPulseTestFuncs_DerivedDomain
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 1
// Size: 0x100
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	int32_t m_nInstanceValueX; // 0xf8	
};

// Alignment: 2
// Size: 0x68
class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_No; // 0x58	
};

// Alignment: 5
// Size: 0x58
class CPulse_RegisterInfo
{
public:
	PulseRuntimeRegisterIndex_t m_nReg; // 0x0	
	CPulseValueFullType m_Type; // 0x8	
	CKV3MemberNameWithStorage m_OriginName; // 0x18	
	int32_t m_nWrittenByInstruction; // 0x50	
	int32_t m_nLastReadByInstruction; // 0x54	
};

// Alignment: 0
// Size: 0x1
class CPulseTestScriptLib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct CPulseCell_Outflow_CycleOrdered__InstanceState_t
{
public:
	int32_t m_nNextIndex; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeVarIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeVarIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x60
class CPulse_Chunk
{
public:
	CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0	
	CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10	
	CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeEntrypointIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeEntrypointIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 16
// Size: 0x68
struct PGDInstruction_t
{
public:
	PulseInstructionCode_t m_nCode; // 0x0	
	PulseRuntimeVarIndex_t m_nVar; // 0x4	
	PulseRuntimeRegisterIndex_t m_nReg0; // 0x8	
	PulseRuntimeRegisterIndex_t m_nReg1; // 0xa	
	PulseRuntimeRegisterIndex_t m_nReg2; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10	
	PulseRuntimeChunkIndex_t m_nChunk; // 0x14	
	int32_t m_nDestInstruction; // 0x18	
	PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c	
	CUtlSymbolLarge m_Arg0Name; // 0x20	
	CUtlSymbolLarge m_Arg1Name; // 0x28	
	bool m_bLiteralBool; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	int32_t m_nLiteralInt; // 0x34	
	float m_flLiteralFloat; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	CBufferString m_LiteralString; // 0x40	
	Vector m_vLiteralVec3; // 0x50	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CPulseTestFuncs_LibraryA
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48	
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
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ParticleAttributeIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x10
class CParticleInput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No members available
};

// Alignment: 46
// Size: 0x158
class CParticleFloatInput : public CParticleInput
{
public:
	ParticleFloatType_t m_nType; // 0x10	
	ParticleFloatMapType_t m_nMapType; // 0x14	
	float m_flLiteralValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CParticleNamedValueRef m_NamedValue; // 0x20	
	int32_t m_nControlPoint; // 0x60	
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x64	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x68	
	int32_t m_nVectorComponent; // 0x6c	
	float m_flRandomMin; // 0x70	
	float m_flRandomMax; // 0x74	
	bool m_bHasRandomSignFlip; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	int32_t m_nRandomSeed; // 0x7c	
	ParticleFloatRandomMode_t m_nRandomMode; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	float m_flLOD0; // 0x88	
	float m_flLOD1; // 0x8c	
	float m_flLOD2; // 0x90	
	float m_flLOD3; // 0x94	
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x98	
	float m_flNoiseOutputMin; // 0x9c	
	float m_flNoiseOutputMax; // 0xa0	
	float m_flNoiseScale; // 0xa4	
	Vector m_vecNoiseOffsetRate; // 0xa8	
	float m_flNoiseOffset; // 0xb4	
	int32_t m_nNoiseOctaves; // 0xb8	
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xbc	
	PFNoiseType_t m_nNoiseType; // 0xc0	
	PFNoiseModifier_t m_nNoiseModifier; // 0xc4	
	float m_flNoiseTurbulenceScale; // 0xc8	
	float m_flNoiseTurbulenceMix; // 0xcc	
	float m_flNoiseImgPreviewScale; // 0xd0	
	bool m_bNoiseImgPreviewLive; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0xb]; // 0xd5
public:
	float m_flNoCameraFallback; // 0xe0	
	bool m_bUseBoundsCenter; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00e5[0x3]; // 0xe5
public:
	ParticleFloatInputMode_t m_nInputMode; // 0xe8	
	float m_flMultFactor; // 0xec	
	float m_flInput0; // 0xf0	
	float m_flInput1; // 0xf4	
	float m_flOutput0; // 0xf8	
	float m_flOutput1; // 0xfc	
	float m_flNotchedRangeMin; // 0x100	
	float m_flNotchedRangeMax; // 0x104	
	float m_flNotchedOutputOutside; // 0x108	
	float m_flNotchedOutputInside; // 0x10c	
	ParticleFloatBiasType_t m_nBiasType; // 0x110	
	float m_flBiasParameter; // 0x114	
	CPiecewiseCurve m_Curve; // 0x118	
};

// Alignment: 0
// Size: 0x158
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x1c0
class CParticleFunction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "operator strength"
	// MPropertySortPriority "-100"
	CParticleCollectionFloatInput m_flOpStrength; // 0x8	
	// MPropertyFriendlyName "operator end cap state"
	// MPropertySortPriority "-100"
	ParticleEndcapMode_t m_nOpEndCapState; // 0x160	
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x164	
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0x168	
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x16c	
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x170	
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x174	
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x178	
private:
	[[maybe_unused]] uint8_t __pad0179[0x3]; // 0x179
public:
	// MPropertyStartGroup "Operator Fade Time Offset"
	// MPropertyFriendlyName "operator fade time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x17c	
	// MPropertyFriendlyName "operator fade time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x180	
	// MPropertyFriendlyName "operator fade time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x184	
	// MPropertyStartGroup "Operator Fade Timescale Modifiers"
	// MPropertyFriendlyName "operator fade time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x188	
	// MPropertyFriendlyName "operator fade time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x18c	
	// MPropertyFriendlyName "operator fade time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x2]; // 0x194
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x196	
private:
	[[maybe_unused]] uint8_t __pad0197[0x1]; // 0x197
public:
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x198	
};

// Alignment: 1
// Size: 0x1c0
class CParticleFunctionInitializer : public CParticleFunction
{
	// Collision detected(0x1b8->0x1c0), output may be wrong.
public:
	// Skipped field "m_nAssociatedEmitterIndex" @ 0x1b8 because of the struct collision
};

// Alignment: 12
// Size: 0x1f0
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1c8	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x1cc	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1dc	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e0	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x1e1	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x1e2	
private:
	[[maybe_unused]] uint8_t __pad01e3[0x1]; // 0x1e3
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1e4	
};

// Alignment: 23
// Size: 0x658
class CParticleVecInput : public CParticleInput
{
public:
	ParticleVecType_t m_nType; // 0x10	
	Vector m_vLiteralValue; // 0x14	
	Color m_LiteralColor; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CParticleNamedValueRef m_NamedValue; // 0x28	
	bool m_bFollowNamedValue; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c	
	Vector m_vVectorAttributeScale; // 0x70	
	int32_t m_nControlPoint; // 0x7c	
	int32_t m_nDeltaControlPoint; // 0x80	
	Vector m_vCPValueScale; // 0x84	
	Vector m_vCPRelativePosition; // 0x90	
	Vector m_vCPRelativeDir; // 0x9c	
	CParticleFloatInput m_FloatComponentX; // 0xa8	
	CParticleFloatInput m_FloatComponentY; // 0x200	
	CParticleFloatInput m_FloatComponentZ; // 0x358	
	CParticleFloatInput m_FloatInterp; // 0x4b0	
	float m_flInterpInput0; // 0x608	
	float m_flInterpInput1; // 0x60c	
	Vector m_vInterpOutput0; // 0x610	
	Vector m_vInterpOutput1; // 0x61c	
	CColorGradient m_Gradient; // 0x628	
	Vector m_vRandomMin; // 0x640	
	Vector m_vRandomMax; // 0x64c	
};

// Alignment: 0
// Size: 0x1c0
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
	// MPropertyFriendlyName "camera depth bias"
	float m_flCameraBias; // 0x0	
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPin; // 0x4	
	// MPropertyFriendlyName "input proxy radius"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flProxyRadius; // 0x8	
	// MPropertyFriendlyName "input proxy visibility minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMin; // 0xc	
	// MPropertyFriendlyName "input proxy visibility maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMax; // 0x10	
	// MPropertyFriendlyName "input proxy unsupported hardware fallback value"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flNoPixelVisibilityFallback; // 0x14	
	// MPropertyFriendlyName "input distance minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMin; // 0x18	
	// MPropertyFriendlyName "input distance maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMax; // 0x1c	
	// MPropertyFriendlyName "input dot minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMin; // 0x20	
	// MPropertyFriendlyName "input dot maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMax; // 0x24	
	// MPropertyFriendlyName "input dot use CP angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCPAngles; // 0x28	
	// MPropertyFriendlyName "input dot use Camera angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCameraAngles; // 0x29	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MPropertyFriendlyName "output alpha scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMin; // 0x2c	
	// MPropertyFriendlyName "output alpha scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMax; // 0x30	
	// MPropertyFriendlyName "output radius scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMin; // 0x34	
	// MPropertyFriendlyName "output radius scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMax; // 0x38	
	// MPropertyFriendlyName "output radius FOV scale base"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleFOVBase; // 0x3c	
	// MPropertyFriendlyName "vr camera right eye"
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40	
};

// Alignment: 10
// Size: 0x1f0
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x1c0	
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x1c4	
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x1c8	
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x1cc	
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x1d0	
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x1d4	
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x1d8	
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x1dc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
};

// Alignment: 0
// Size: 0x158
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1c0
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x200
class CParticleFunctionRenderer : public CParticleFunction
{
	// Collision detected(0x1b8->0x1c0), output may be wrong.
public:
	// Skipped field "VisibilityInputs" @ 0x1b8 because of the struct collision
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x1fc	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x1fd	
};

// Alignment: 8
// Size: 0x490
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x1d0	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x328	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x3]; // 0x481
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x484	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x488	
};

// Alignment: 8
// Size: 0x68
class CParticleTransformInput : public CParticleInput
{
public:
	ParticleTransformType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	bool m_bFollowNamedValue; // 0x58	
	bool m_bSupportsDisabled; // 0x59	
	bool m_bUseOrientation; // 0x5a	
private:
	[[maybe_unused]] uint8_t __pad005b[0x1]; // 0x5b
public:
	int32_t m_nControlPoint; // 0x5c	
	int32_t m_nControlPointRangeMax; // 0x60	
	float m_flEndCPGrowthTime; // 0x64	
};

// Alignment: 0
// Size: 0x158
class CParticleCollectionRendererFloatInput : public CParticleCollectionFloatInput
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x250
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1c4	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1c5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c7	
};

// Alignment: 0
// Size: 0x1d0
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
// Size: 0x1e0
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x1c0	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x1cc	
};

// Alignment: 0
// Size: 0x658
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x1f0
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x1d4	
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x1e0	
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
// Size: 0x1e0
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x1c4	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x1d0	
};

// Alignment: 1
// Size: 0x1d0
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x1c0	
};

// Alignment: 2
// Size: 0x320
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
};

// Alignment: 7
// Size: 0x730
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x320	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad0729[0x3]; // 0x729
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x72c	
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
// Size: 0x1f0
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x1d0	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1dc	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1e0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1e4	
};

// Alignment: 1
// Size: 0x1e0
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x1d0	
};

// Alignment: 6
// Size: 0x340
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x1c0	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x1cc	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x1d8	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x330	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x334	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x338	
};

// Alignment: 5
// Size: 0x730
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x1c0	
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x318	
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x470	
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05cc[0x4]; // 0x5cc
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5d0	
};

// Alignment: 2
// Size: 0x1e0
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x1d0	
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x1d4	
};

// Alignment: 7
// Size: 0x210
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1c8	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x1e0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x200	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x204	
};

// Alignment: 1
// Size: 0x1c0
class CParticleFunctionEmitter : public CParticleFunction
{
	// Collision detected(0x1b8->0x1c0), output may be wrong.
public:
	// Skipped field "m_nEmitterIndex" @ 0x1b8 because of the struct collision
};

// Alignment: 0
// Size: 0x658
class CPerParticleVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x1e0
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x1d8	
};

// Alignment: 0
// Size: 0x1c0
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
// Size: 0x1d0
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x1cc	
};

// Alignment: 16
// Size: 0x68
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
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	Vector m_vecPreviewGravity; // 0x58	
};

// Alignment: 8
// Size: 0x1f0
class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x1c8	
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x1cc	
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x1d0	
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x1dc	
	// MPropertyFriendlyName "Use parent density instead of ours"
	bool m_bUseParentDensity; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
	int32_t m_nVoxelGridResolution; // 0x1ec	
};

// Alignment: 7
// Size: 0x210
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x1d0	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x1d4	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x1e0	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x1e4	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x1f0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1fc	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x200	
};

// Alignment: 0
// Size: 0x1c0
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 15
// Size: 0x930
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x320	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x728	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x72c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x72d	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x7b8	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x910	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x914	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x3]; // 0x919
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x91c	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x928	
};

// Alignment: 6
// Size: 0x340
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1d0	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x1d4	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1d8	
	// MPropertyFriendlyName "remove children when particle count lowers"
	bool m_bDisableChildren; // 0x330	
	// MPropertyFriendlyName "play endcap when children are removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bPlayEndcapOnStop; // 0x331	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bDestroyImmediately; // 0x332	
};

// Alignment: 7
// Size: 0xdd0
class C_OP_RenderLightBeam : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x200	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
public:
	// MPropertyFriendlyName "Lumens Per Meter"
	CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x860	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09b9[0x7]; // 0x9b9
public:
	// MPropertyFriendlyName "Skirt"
	CParticleCollectionFloatInput m_flSkirt; // 0x9c0	
	// MPropertyFriendlyName "Range"
	CParticleCollectionFloatInput m_flRange; // 0xb18	
	// MPropertyFriendlyName "Thickness"
	CParticleCollectionFloatInput m_flThickness; // 0xc70	
};

// Alignment: 3
// Size: 0x210
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x200	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x204	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x208	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x1c4	
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x1c8	
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1cc	
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0	
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x1d4	
};

// Alignment: 9
// Size: 0x1f0
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x1c0	
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x1c4	
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x1c8	
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x1cc	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1d0	
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x1d4	
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x1d8	
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x1dc	
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x1e0	
};

// Alignment: 4
// Size: 0x200
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
};

// Alignment: 5
// Size: 0x1e0
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1d0	
};

// Alignment: 4
// Size: 0x210
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x1f8	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x200	
	bool m_bModelFromRenderer; // 0x208	
};

// Alignment: 5
// Size: 0x340
class C_OP_SetGravityToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample gravity"
	int32_t m_nCPInput; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1d4	
	// MPropertyFriendlyName "gravity scale"
	CParticleCollectionFloatInput m_flScale; // 0x1d8	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x330	
	// MPropertyFriendlyName "set gravity orientation to Z Down (instead of X)"
	// MPropertySuppressExpr "!m_bSetOrientation"
	bool m_bSetZDown; // 0x331	
};

// Alignment: 10
// Size: 0x210
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x1c]; // 0x1c0
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x1dc	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x1e0	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1e4	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1e8	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x1ec	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x1f0	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x1f4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1fc	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x200	
};

// Alignment: 4
// Size: 0x350
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c0	
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x318	
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x31c	
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x320	
};

// Alignment: 5
// Size: 0x1f0
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1c8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1e0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1e4	
};

// Alignment: 5
// Size: 0x4a0
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x320	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x478	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x47c	
};

// Alignment: 3
// Size: 0x60
class CParticleModelInput : public CParticleInput
{
public:
	ParticleModelType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	int32_t m_nControlPoint; // 0x58	
};

// Alignment: 1
// Size: 0x820
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x1c0	
};

// Alignment: 7
// Size: 0x220
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1c8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1e0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1f8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
};

// Alignment: 2
// Size: 0x330
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x1d8	
};

// Alignment: 7
// Size: 0x1e0
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x1c4	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x1c8	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x1cc	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x1d0	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x1d4	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x1d8	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x1c0	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x1c4	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x1c8	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x1cc	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x1d0	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x1d4	
};

// Alignment: 4
// Size: 0x330
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x1c0	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x1c4	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1d0	
};

// Alignment: 7
// Size: 0x490
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x1c0	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x1dc	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x1dd	
private:
	[[maybe_unused]] uint8_t __pad01de[0x2]; // 0x1de
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1e0	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x338	
};

// Alignment: 2
// Size: 0x10
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0	
	// MPropertyFriendlyName "Relative probability"
	float m_flRelativeProbabilityOfSpawn; // 0x8	
};

// Alignment: 5
// Size: 0x5e0
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x1d0	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x328	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x480	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5d8	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5d9	
};

// Alignment: 4
// Size: 0x1e0
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x1c0	
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c4	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1c8	
};

// Alignment: 15
// Size: 0x200
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x1c8	
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x1cc	
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x1d0	
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x1d4	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1d8	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x2]; // 0x1da
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1dc	
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x1e0	
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x1e4	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1e8	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x1ec	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1f0	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1fc	
};

// Alignment: 8
// Size: 0x1e0
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1dc	
};

// Alignment: 12
// Size: 0x210
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x1dc	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1e8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1ec	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x3]; // 0x1f9
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1fc	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x1d0
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x1c0	
};

// Alignment: 14
// Size: 0x1ac0
class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x1c0	
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x318	
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x470	
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ad4[0x4]; // 0xad4
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0xad8	
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0xb40	
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0xc98	
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0xdf0	
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0xdf4	
private:
	[[maybe_unused]] uint8_t __pad0df5[0x3]; // 0xdf5
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0xdf8	
private:
	[[maybe_unused]] uint8_t __pad0dfc[0x4]; // 0xdfc
public:
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xe00	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1458	
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1ab0	
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x1ab4	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1c0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1c8	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1cc	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x1d0	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x1d4	
};

// Alignment: 9
// Size: 0x270
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x1c4	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x1c8	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1cc	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1d0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x250	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x254	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x268	
};

// Alignment: 4
// Size: 0x1f0
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x1d0	
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x1d4	
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x1e0	
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x1e4	
};

// Alignment: 16
// Size: 0x988
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x158	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2b0	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x408	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x560	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6b8	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionRendererFloatInput m_flDistortion; // 0x810	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x968	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x969	
private:
	[[maybe_unused]] uint8_t __pad096a[0x2]; // 0x96a
public:
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x96c	
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x970	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x974	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x978	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x97c	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x980	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x984	
};

// Alignment: 3
// Size: 0x1e0
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1d0	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x1d4	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1d8	
};

// Alignment: 5
// Size: 0x1e0
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1c4	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1d0	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1d4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
};

// Alignment: 5
// Size: 0x250
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x1c0	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1cc	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x24c	
};

// Alignment: 1
// Size: 0x1d0
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
};

// Alignment: 6
// Size: 0x1d0
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x1cc	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x1cd	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x1ce	
};

// Alignment: 4
// Size: 0x1f0
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x1d0	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x1d4	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x1d8	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x1dc	
};

// Alignment: 5
// Size: 0x1f0
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
};

// Alignment: 9
// Size: 0x230
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x200	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x204	
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x208	
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x20c	
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x210	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x214	
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x218	
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x21c	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x220	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x1c0	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x1c4	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x1c8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1cc	
};

// Alignment: 1
// Size: 0x330
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x1d0	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1c8	
};

// Alignment: 7
// Size: 0x1df0
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x1d8	
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x830	
	// MPropertyFriendlyName "offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffset; // 0xe88	
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0x14e0	
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0x1b38	
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0x1c90	
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
// Size: 0x990
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1d0	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x828	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x980	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x984	
};

// Alignment: 10
// Size: 0x200
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x1d0	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x1d4	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x1d8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1dc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1e0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1e4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1ec	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f1[0x3]; // 0x1f1
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x1f4	
};

// Alignment: 11
// Size: 0x1f0
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1c0	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1c4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e4	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x1e5	
};

// Alignment: 7
// Size: 0x1f0
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1d4	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x1dc	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x1e0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e8	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x1d0	
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d4	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x1e0	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1c8	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1cc	
};

// Alignment: 15
// Size: 0xe80
class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x320	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x728	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x790	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x791	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x814	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x818	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x81c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x820	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x824	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x825	
private:
	[[maybe_unused]] uint8_t __pad0826[0x2]; // 0x826
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x828	
};

// Alignment: 29
// Size: 0x1380
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x208	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x868	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x9c0	
private:
	[[maybe_unused]] uint8_t __pad09c1[0x7]; // 0x9c1
public:
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0x9c8	
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0xb20	
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xc78	
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xdd0	
private:
	[[maybe_unused]] uint8_t __pad0dd4[0x4]; // 0xdd4
public:
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0xdd8	
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xf30	
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x1088	
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0x11e0	
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0x11e1	
private:
	[[maybe_unused]] uint8_t __pad11e2[0x6]; // 0x11e2
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x11e8	
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0x11f0	
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x11f4	
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionRendererFloatInput m_flFogContribution; // 0x11f8	
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1350	
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0x1354	
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0x1358	
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0x1359	
private:
	[[maybe_unused]] uint8_t __pad135a[0x2]; // 0x135a
public:
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x135c	
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0x1360	
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0x1364	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0x1368	
private:
	[[maybe_unused]] uint8_t __pad1369[0x3]; // 0x1369
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0x136c	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0x1370	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0x1374	
};

// Alignment: 2
// Size: 0x40
class CParticleVariableRef
{
public:
	CKV3MemberNameWithStorage m_variableName; // 0x0	
	PulseValueType_t m_variableType; // 0x38	
};

// Alignment: 1
// Size: 0x1e0
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x1d0	
};

// Alignment: 2
// Size: 0x160
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
// Size: 0x1f0
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1dc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1e0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e4	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1e8	
};

// Alignment: 6
// Size: 0x230
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x200	
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x208	
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x210	
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x218	
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x220	
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x228	
};

// Alignment: 3
// Size: 0xe80
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMax; // 0x820	
};

// Alignment: 0
// Size: 0x210
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
// Size: 0x1e0
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x330
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x1d0	
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x328	
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x329	
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x220
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1c4	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x1c8	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x1cc	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1d0	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0xe]; // 0x1d2
public:
	CPathParameters m_PathParams; // 0x1e0	
};

// Alignment: 2
// Size: 0x1e0
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1d0	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x1d4	
};

// Alignment: 9
// Size: 0x220
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1c8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1e0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1f8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x210	
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x21c	
};

// Alignment: 10
// Size: 0x210
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1cc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1d4	
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x24]; // 0x1dc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x205	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0xc]; // 0x1c4
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1d0	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1dc	
	// MPropertyFriendlyName "use new code"
	bool m_bUseNewCode; // 0x1dd	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1c4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1c8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1cc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x1d0	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x1d4	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1d8	
};

// Alignment: 4
// Size: 0x240
class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x22c	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x230	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x1c0	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x1c4	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1c8	
};

// Alignment: 8
// Size: 0x5e0
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad031c[0x4]; // 0x31c
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x320	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x478	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x47c	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x480	
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x481	
private:
	[[maybe_unused]] uint8_t __pad0482[0x6]; // 0x482
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x488	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1c0	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1c4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1c8	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x1c0	
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1c4	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x1c8	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x1cc	
};

// Alignment: 11
// Size: 0x250
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x200	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x201	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x202	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x203	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x204	
private:
	[[maybe_unused]] uint8_t __pad0205[0x3]; // 0x205
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x208	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x20c	
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x210	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x218	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad021d[0x3]; // 0x21d
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x220	
};

// Alignment: 6
// Size: 0x1f0
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1c8	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1e0	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1e1	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1e2	
private:
	[[maybe_unused]] uint8_t __pad01e3[0x1]; // 0x1e3
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4	
};

// Alignment: 3
// Size: 0x990
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x328	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x980	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1cc	
};

// Alignment: 13
// Size: 0x1130
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input model"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "input transform for transforming local space bias vector"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x220	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x288	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x28c	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0294[0x4]; // 0x294
public:
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x298	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0x8f0	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0x8f4	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x8f8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xf50	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xfd0	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0xfd1	
private:
	[[maybe_unused]] uint8_t __pad0fd2[0x6]; // 0xfd2
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0xfd8	
};

// Alignment: 4
// Size: 0x480
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x31c	
	// MPropertyFriendlyName "per-particle strength"
	CPerParticleFloatInput m_InputStrength; // 0x320	
};

// Alignment: 4
// Size: 0x9e0
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1c0	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x818	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x970	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9d8	
};

// Alignment: 0
// Size: 0x158
class CParticleRemapFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 12
// Size: 0x220
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1d0	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1d1	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad01d3[0x1]; // 0x1d3
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x1d4	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x1d8	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x1dc	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x1e0	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1e4	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x1f0	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x1fc	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x208	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x214	
};

// Alignment: 5
// Size: 0x1f0
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1c4	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1c8	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1d0	
};

// Alignment: 10
// Size: 0x7a0
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1c0	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1c4	
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x230	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x388	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x4e0	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x638	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x790	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x791	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x792	
};

// Alignment: 3
// Size: 0x1e0
class C_OP_DensityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x1d4	
	// MPropertyFriendlyName "Target density"
	float m_flTargetDensity; // 0x1d8	
};

// Alignment: 5
// Size: 0x5e0
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x1c0	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x318	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x478	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5d0	
};

// Alignment: 13
// Size: 0x210
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1f0	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1fc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x200	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x204	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x20c	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x20d	
};

// Alignment: 13
// Size: 0x1050
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x1c8	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x824	
	// MPropertyFriendlyName "particle number/offset"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x828	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x988	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xae0	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xc38	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xd90	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xd94	
	// MPropertyFriendlyName "break value"
	CParticleCollectionFloatInput m_flBreakValue; // 0xd98	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xef0	
};

// Alignment: 7
// Size: 0x270
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1c0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1cc	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1d8	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x1d9	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1da	
private:
	[[maybe_unused]] uint8_t __pad025a[0x2]; // 0x25a
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x25c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x260	
};

// Alignment: 9
// Size: 0x210
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1d0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1d4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1dc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e4	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x1e8	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x1f0	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x1f8	
};

// Alignment: 7
// Size: 0x1f0
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1cc	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x1d0	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x1e0	
};

// Alignment: 10
// Size: 0x13f0
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x320	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x728	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xd80	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x13d8	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x13dc	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x13e0	
};

// Alignment: 6
// Size: 0x330
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1d0	
	// MPropertyFriendlyName "start as last particle"
	bool m_bReverse; // 0x328	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x329	
};

// Alignment: 1
// Size: 0x1d0
class C_OP_ShapeMatchingConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "shape restoration time"
	float m_flShapeRestorationTime; // 0x1c0	
};

// Alignment: 2
// Size: 0x230
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input"
	CParticleTransformInput m_transformInput; // 0x1c0	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x228	
};

// Alignment: 2
// Size: 0x8
class CRandomNumberGeneratorParameters
{
public:
	// MPropertyFriendlyName "Distribute evenly"
	bool m_bDistributeEvenly; // 0x0	
	// MPropertyFriendlyName "Seed (negative values=randomize)"
	// MPropertySuppressExpr "!m_bDistributeEvenly"
	int32_t m_nSeed; // 0x4	
};

// Alignment: 7
// Size: 0x350
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1d0	
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x1d4	
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x1d8	
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x1dc	
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x1e8	
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x340	
};

// Alignment: 2
// Size: 0x1d0
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1c4	
};

// Alignment: 22
// Size: 0x1420
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x200	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x358	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4b0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb10	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0x4]; // 0xb1c
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xb20	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xc78	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xdd0	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xf28	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1080	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x11d8	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x1330	
private:
	[[maybe_unused]] uint8_t __pad1331[0x3]; // 0x1331
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x1334	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x1338	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x133c	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x1340	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x1344	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x1348	
private:
	[[maybe_unused]] uint8_t __pad134c[0x4]; // 0x134c
public:
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleInputOptional
	CParticleTransformInput m_LightingTransform; // 0x1350	
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x13b8	
private:
	[[maybe_unused]] uint8_t __pad13d0[0x18]; // 0x13d0
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x13e8	
};

// Alignment: 10
// Size: 0x490
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1cc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d0	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1d8	
	// MPropertyFriendlyName "Manual Snapshot Index"
	CPerParticleFloatInput m_nManualSnapshotIndex; // 0x330	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x488	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x48c	
};

// Alignment: 0
// Size: 0x658
class CParticleCollectionRendererVecInput : public CParticleCollectionVecInput
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x330
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x320	
};

// Alignment: 10
// Size: 0x2b0
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1d8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x240	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2a8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2ac	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2ad	
};

// Alignment: 6
// Size: 0xff0
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x1d8	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x830	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xe88	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0xfe0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xfe4	
};

// Alignment: 9
// Size: 0x1e0
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x1dc	
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x1dd	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d4	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x1e0	
};

// Alignment: 3
// Size: 0x480
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x320	
};

// Alignment: 13
// Size: 0x280
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1c0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x240	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x244	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x250	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x25c	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x260	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x261	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x262	
private:
	[[maybe_unused]] uint8_t __pad0263[0x1]; // 0x263
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x264	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x268	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x269	
private:
	[[maybe_unused]] uint8_t __pad026a[0x2]; // 0x26a
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x26c	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x270	
};

// Alignment: 4
// Size: 0x330
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x1c8	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x320	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x324	
};

// Alignment: 6
// Size: 0x480
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1c8	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x6]; // 0x1ca
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1d0	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x328	
};

// Alignment: 9
// Size: 0xa10
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1c4	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d0	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x828	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x834	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x835	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x836	
private:
	[[maybe_unused]] uint8_t __pad08b6[0x2]; // 0x8b6
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x8b8	
};

// Alignment: 5
// Size: 0x830
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x818	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x81c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x820	
	// MPropertyFriendlyName "set previous position"
	// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
	bool m_bWritePreviousPosition; // 0x821	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Alignment: 1
// Size: 0x1d0
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x1c0	
};

// Alignment: 8
// Size: 0x1e0
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1dc	
};

// Alignment: 3
// Size: 0x5d0
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x1c0	
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x318	
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x470	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1c4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1c8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1cc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x1d0	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x1d4	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1c8	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1cc	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1d4	
};

// Alignment: 2
// Size: 0x470
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x318	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x1c0	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x1c4	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x1c8	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x1cc	
};

// Alignment: 17
// Size: 0x200
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x1d0	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d1	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad01d3[0x1]; // 0x1d3
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x1d4	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x1d8	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1dc	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	int32_t m_nFullLoopIncrement; // 0x1e0	
	// MPropertyFriendlyName "Snapshot start point"
	int32_t m_nSnapShotStartPoint; // 0x1e4	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x1e8	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x1ec	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x1f0	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x1f1	
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x1f2	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x340
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x1c4	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x1d0	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x1dc	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x1e0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1e4	
private:
	[[maybe_unused]] uint8_t __pad01e5[0x3]; // 0x1e5
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x1e8	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c0	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1c4	
};

// Alignment: 14
// Size: 0x11f0
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x208	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x860	
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x864	
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x868	
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x9c0	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x7]; // 0xb19
public:
	// MPropertyFriendlyName "Light Radius"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xb20	
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xc78	
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xdd0	
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0xf28	
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0x1080	
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x11d8	
	// MPropertyFriendlyName "Cookie is Spherically Mapped"
	bool m_bSphericalCookie; // 0x11e0	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Alignment: 0
// Size: 0x1f0
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
// Size: 0x1e0
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x1c0	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1c4	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x1d0	
};

// Alignment: 5
// Size: 0x980
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x818	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x81c	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x820	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x978	
};

// Alignment: 3
// Size: 0x1e0
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1c0	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x1cc	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x1d0	
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 15
// Size: 0xae0
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x220	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x288	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x28c	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x290	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x294	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x298	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x318	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x319	
private:
	[[maybe_unused]] uint8_t __pad031a[0x2]; // 0x31a
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x31c	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x320	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x324	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x7]; // 0x329
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x330	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x988	
};

// Alignment: 12
// Size: 0x2c0
class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1d0	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x238	
	// MPropertyFriendlyName "output starting control point number"
	int32_t m_nOutputStartCP; // 0x2a0	
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	int32_t m_nOutputStartField; // 0x2a4	
	// MPropertyFriendlyName "output ending control point number"
	int32_t m_nOutputEndCP; // 0x2a8	
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	int32_t m_nOutputEndField; // 0x2ac	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b0	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2b4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2b5	
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

// Alignment: 3
// Size: 0x1d0
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x1c4	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x1c8	
};

// Alignment: 9
// Size: 0x13e0
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1c8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x820	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0xe78	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0xfd0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1128	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x1280	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x13d8	
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0x13dc	
};

// Alignment: 6
// Size: 0x1e0
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x1c4	
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x1c8	
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x1cc	
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x1d0	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x1d4	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1c8	
};

// Alignment: 8
// Size: 0x1f0
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1c0	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1c4	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x1c8	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x1cc	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1d0	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1d4	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1d8	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_Diffusion : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
	int32_t m_nVoxelGridResolution; // 0x1c8	
};

// Alignment: 4
// Size: 0x340
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d0	
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x1d4	
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x1e0	
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
// Size: 0x4a0
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x31c	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x320	
};

// Alignment: 2
// Size: 0x1d0
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x1c0	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x1c4	
};

// Alignment: 5
// Size: 0x1e0
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1d0	
};

// Alignment: 0
// Size: 0x1e0
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 4
// Size: 0x240
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x228	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x234	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x235	
};

// Alignment: 4
// Size: 0xe80
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x1c0	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x818	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe70	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0xe74	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1c4	
};

// Alignment: 17
// Size: 0x3e0
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x318	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x31c	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x320	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x324	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x328	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3a8	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3ac	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3b0	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3b4	
private:
	[[maybe_unused]] uint8_t __pad03b8[0x8]; // 0x3b8
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3c0	
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3c4	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3c5	
private:
	[[maybe_unused]] uint8_t __pad03c6[0x2]; // 0x3c6
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3c8	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x3c9	
private:
	[[maybe_unused]] uint8_t __pad03ca[0x2]; // 0x3ca
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3cc	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3d0	
};

// Alignment: 5
// Size: 0x1f0
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1c8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1e0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1e4	
};

// Alignment: 6
// Size: 0x340
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x1d0	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x1d4	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1d8	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x330	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x331	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x332	
};

// Alignment: 1
// Size: 0x1d0
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1c0	
};

// Alignment: 3
// Size: 0x1e0
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1c4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1d0	
};

// Alignment: 0
// Size: 0x1e0
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 5
// Size: 0xae0
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c8	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0324[0x4]; // 0x324
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x328	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x480	
};

// Alignment: 2
// Size: 0x210
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x208	
};

// Alignment: 5
// Size: 0x480
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x1d0	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x328	
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
// Size: 0x1d0
class C_OP_RemapSDFGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
};

// Alignment: 1
// Size: 0x1d0
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x1c0	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x1c0	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x1c4	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x1c8	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x1cc	
};

// Alignment: 4
// Size: 0x240
class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x228	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x234	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x235	
};

// Alignment: 1
// Size: 0x1d0
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
};

// Alignment: 4
// Size: 0x210
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c0	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c4	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	CPathParameters m_PathParams; // 0x1d0	
};

// Alignment: 6
// Size: 0x250
class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x22c	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x230	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x234	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x240	
};

// Alignment: 2
// Size: 0x660
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8	
};

// Alignment: 6
// Size: 0x4d0
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x318	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x470	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x471	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x472	
private:
	[[maybe_unused]] uint8_t __pad0473[0xd]; // 0x473
public:
	CPathParameters m_PathParams; // 0x480	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x1d8	
};

// Alignment: 0
// Size: 0x200
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x1e0
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x1c0	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x1c4	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1cc	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x1d0	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x1d4	
};

// Alignment: 6
// Size: 0xa40
class C_OP_SetVariable : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Variable"
	CParticleVariableRef m_variableReference; // 0x1d0	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	CParticleTransformInput m_transformInput; // 0x210	
	// MPropertyFriendlyName "Position Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	Vector m_positionOffset; // 0x278	
	// MPropertyFriendlyName "Rotation Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	QAngle m_rotationOffset; // 0x284	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
	CParticleCollectionVecInput m_vecInput; // 0x290	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
	CParticleCollectionFloatInput m_floatInput; // 0x8e8	
};

// Alignment: 14
// Size: 0x1310
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c0	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1c8	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d0	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x328	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x980	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xfd8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xfdc	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xfdd	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xfde	
private:
	[[maybe_unused]] uint8_t __pad105e[0x2]; // 0x105e
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1060	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x11b8	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1c4	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1c8	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x1c0	
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x1c4	
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x1c8	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x1d4	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x1e0	
};

// Alignment: 10
// Size: 0x9e0
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1c0	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x318	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x470	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x5c8	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x720	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x878	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9d0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9d4	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x9d5	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x9d6	
};

// Alignment: 1
// Size: 0x210
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x200	
};

// Alignment: 7
// Size: 0x200
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x18]; // 0x1c0
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x1d8	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x1dc	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1e0	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1e4	
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x1e8	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1ec	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x1f0	
};

// Alignment: 6
// Size: 0xef0
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1c0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x818	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xe70	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xed8	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xed9	
private:
	[[maybe_unused]] uint8_t __pad0eda[0x2]; // 0xeda
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xedc	
};

// Alignment: 1
// Size: 0x320
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x1c0	
};

// Alignment: 7
// Size: 0x230
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x210	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x214	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x3]; // 0x219
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x21c	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x220	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x224	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x228	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x200
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x18]; // 0x1c4
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0xc]; // 0x1e0
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1ec	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1f8	
};

// Alignment: 7
// Size: 0x2d0
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c0	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x240	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x2c0	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x2c4	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x2c8	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x2cc	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x2cd	
};

// Alignment: 5
// Size: 0x230
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0xc]; // 0x1c4
public:
	CPathParameters m_PathParams; // 0x1d0	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x214	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x220	
};

// Alignment: 8
// Size: 0x9e0
class C_OP_RemapSDFDistanceToScalarAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x320	
	// MPropertyFriendlyName "Value for dist<min"
	CParticleCollectionFloatInput m_flValueBelowMin; // 0x478	
	// MPropertyFriendlyName "Value for dist=min"
	CParticleCollectionFloatInput m_flValueAtMin; // 0x5d0	
	// MPropertyFriendlyName "Value for dist=max"
	CParticleCollectionFloatInput m_flValueAtMax; // 0x728	
	// MPropertyFriendlyName "Value for dist>max"
	CParticleCollectionFloatInput m_flValueAboveMax; // 0x880	
};

// Alignment: 4
// Size: 0x1e0
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1c4	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x1d0	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x1d4	
};

// Alignment: 8
// Size: 0x220
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x1c4	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x1c8	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x1cc	
	CPathParameters m_PathParameters; // 0x1d0	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x210	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x214	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x218	
};

// Alignment: 4
// Size: 0x1f0
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d0	
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x1d4	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d8	
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x1e4	
};

// Alignment: 15
// Size: 0x290
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1d0	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1d4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1d8	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x1dc	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x1e4	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x1e8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1ec	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1f0	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1f4	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x1f8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x1fc	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x1fd	
private:
	[[maybe_unused]] uint8_t __pad027d[0x3]; // 0x27d
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x280	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x284	
};

// Alignment: 11
// Size: 0x5f0
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1cc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d0	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1d4	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1d8	
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x330	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x488	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x5e0	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x1c8	
};

// Alignment: 6
// Size: 0xfe0
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x820	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xe78	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0xfd0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xfd4	
};

// Alignment: 5
// Size: 0x1e0
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x1c0	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x1c4	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x1c8	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x1cc	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x1d0	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_SDFLighting : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Lighting dir"
	Vector m_vLightingDir; // 0x1c0	
	// MPropertyFriendlyName "shadow color"
	Vector m_vTint_0; // 0x1cc	
	// MPropertyFriendlyName "lit color"
	Vector m_vTint_1; // 0x1d8	
};

// Alignment: 13
// Size: 0x2e0
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8	
	// MPropertyFriendlyName "local space transform"
	// MParticleInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x260	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x2c8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x2cc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d0	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x2d4	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x2d5	
private:
	[[maybe_unused]] uint8_t __pad02d6[0x2]; // 0x2d6
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x2d8	
};

// Alignment: 5
// Size: 0x4a0
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x31c	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x320	
	// MPropertyFriendlyName "use new code"
	bool m_bUseNewCode; // 0x478	
};

// Alignment: 5
// Size: 0x250
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1c4	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1c5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c7	
};

// Alignment: 3
// Size: 0x830
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x1d0	
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x1d4	
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x1d8	
};

// Alignment: 3
// Size: 0x88
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
};

// Alignment: 2
// Size: 0x1f0
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x1d0	
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x1dc	
};

// Alignment: 7
// Size: 0x240
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x200	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x208	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x210	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x218	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x220	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x228	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x230	
};

// Alignment: 4
// Size: 0x240
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x22c	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x230	
};

// Alignment: 5
// Size: 0x1e0
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
};

// Alignment: 6
// Size: 0x200
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d0	
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x1d4	
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x1e0	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1ec	
};

// Alignment: 3
// Size: 0x980
class C_OP_ParticlePhysics : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_Gravity; // 0x1c0	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	CParticleCollectionFloatInput m_fDrag; // 0x818	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x970	
};

// Alignment: 6
// Size: 0xef0
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x820	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xe78	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xe7c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xe80	
};

// Alignment: 5
// Size: 0x830
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1c4	
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x1c8	
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x1d0	
};

// Alignment: 2
// Size: 0x470
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x318	
};

// Alignment: 3
// Size: 0x330
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x320	
};

// Alignment: 5
// Size: 0x200
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1f4	
};

// Alignment: 5
// Size: 0x1f0
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x1c0	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x1c4	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1c8	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x6]; // 0x1ca
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x1d0	
};

// Alignment: 6
// Size: 0x210
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x1c0	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x1c4	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x1c8	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x30]; // 0x1d0
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x200	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x201	
};

// Alignment: 13
// Size: 0x1f0
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x1c8	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x1cc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1d4	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1d5	
private:
	[[maybe_unused]] uint8_t __pad01d6[0x2]; // 0x1d6
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1d8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1dc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1e0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1e4	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1e8	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1ec	
};

// Alignment: 6
// Size: 0x650
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionRendererFloatInput m_cubeWidth; // 0x200	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x358	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionRendererFloatInput m_renderRadius; // 0x4b0	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0628[0x18]; // 0x628
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x640	
};

// Alignment: 2
// Size: 0x820
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x818	
};

// Alignment: 27
// Size: 0x950
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x1c4	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x1d0	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x1d4	
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x1d8	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1dc	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x25c	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x25d	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x25e	
private:
	[[maybe_unused]] uint8_t __pad025f[0x1]; // 0x25f
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x260	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x264	
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x268	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x26c	
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x270	
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x274	
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x278	
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x3d0	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x528	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x680	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x7d8	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x7d9	
private:
	[[maybe_unused]] uint8_t __pad07da[0x2]; // 0x7da
public:
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x7dc	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e1[0x3]; // 0x7e1
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x7e4	
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x7e8	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x940	
	// MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x944	
};

// Alignment: 3
// Size: 0x370
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x200	
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x358	
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x360	
};

// Alignment: 4
// Size: 0x1d0
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1c4	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
};

// Alignment: 13
// Size: 0x520
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x318	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x470	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0xc]; // 0x4f4
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x500	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x504	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x505	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x506	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x507	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x50c	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x510	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x514	
};

// Alignment: 11
// Size: 0x800
class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x320	
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName "cylindrical top transform"
	CParticleTransformInput m_TransformStart; // 0x728	
	// MPropertyFriendlyName "cylindrical bottom transform"
	CParticleTransformInput m_TransformEnd; // 0x790	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7f8	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x7fc	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x7fd	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x7fe	
};

// Alignment: 9
// Size: 0x990
class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "extra velocity field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c4	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1d0	
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x328	
	// MPropertyFriendlyName "Boundary Dampening"
	float m_flBoundaryDampening; // 0x980	
	// MPropertyFriendlyName "Set Velocity"
	bool m_bSetVelocity; // 0x984	
	// MPropertyFriendlyName "Lock to Surface"
	bool m_bLockToSurface; // 0x985	
private:
	[[maybe_unused]] uint8_t __pad0986[0x2]; // 0x986
public:
	// MPropertyFriendlyName "Vector Field Grid Spacing Override"
	float m_flGridSpacing; // 0x988	
};

// Alignment: 33
// Size: 0x710
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4cc]; // 0x1c4
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x690	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x694	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x698	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x69c	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x6a0	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x6ac	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x6b8	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x6c4	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x6d0	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x6d4	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x6d8	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x6dc	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x6e0	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x6e4	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x6e8	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x6ec	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x6f0	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x6f4	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x6f8	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x6fc	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x700	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x701	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x702	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x703	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x704	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x705	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x706	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x707	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x708	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x709	
private:
	[[maybe_unused]] uint8_t __pad070a[0x4]; // 0x70a
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x70e	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x70f	
};

// Alignment: 2
// Size: 0x330
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1d8	
};

// Alignment: 5
// Size: 0xe80
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x818	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xe70	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xe74	
private:
	[[maybe_unused]] uint8_t __pad0e75[0x3]; // 0xe75
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xe78	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x1c0	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x1c4	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x1c8	
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x1cc	
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x1d0	
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x1d4	
};

// Alignment: 2
// Size: 0x210
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x200	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x204	
};

// Alignment: 10
// Size: 0x2c0
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1e8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x250	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2bc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2bd	
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 64
// Size: 0x3e0
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
private:
	[[maybe_unused]] uint8_t __pad017c[0x94]; // 0x17c
public:
	// MPropertyStartGroup "+Collection Options"
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x210	
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x214	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x218	
	// MPropertyStartGroup "Bounding Box"
	// MPropertyFriendlyName "bounding box bloat min"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x21c	
	// MPropertyFriendlyName "bounding box bloat max"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x228	
	// MPropertyFriendlyName "bounding box depth sort bias"
	float m_flDepthSortBias; // 0x234	
	// MPropertyFriendlyName "sort override position CP"
	int32_t m_nSortOverridePositionCP; // 0x238	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x23c	
	// MPropertyStartGroup "Named Values"
	// MPropertyFriendlyName "Enable Named Values (EXPERIMENTAL)"
	bool m_bEnableNamedValues; // 0x23d	
private:
	[[maybe_unused]] uint8_t __pad023e[0x2]; // 0x23e
public:
	// MPropertyFriendlyName "Domain Class"
	// MPropertyAttributeChoiceName "particlefield_domain"
	// MPropertyAutoRebuildOnChange
	// MPropertySuppressExpr "!m_bEnableNamedValues"
	CUtlString m_NamedValueDomain; // 0x240	
	// MPropertySuppressField
	CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals; // 0x248	
	// MPropertyStartGroup "+Base Properties"
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	Color m_ConstantColor; // 0x260	
	// MPropertyFriendlyName "normal"
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x264	
	// MPropertyFriendlyName "radius"
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x270	
	// MPropertyFriendlyName "rotation"
	float m_flConstantRotation; // 0x274	
	// MPropertyFriendlyName "rotation speed"
	float m_flConstantRotationSpeed; // 0x278	
	// MPropertyFriendlyName "lifetime"
	float m_flConstantLifespan; // 0x27c	
	// MPropertyFriendlyName "sequence number"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x280	
	// MPropertyFriendlyName "sequence number 1"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x284	
	// MPropertyStartGroup "Snapshot Options"
	int32_t m_nSnapshotControlPoint; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x290	
	// MPropertyStartGroup "Replacement Options"
	// MPropertyFriendlyName "cull replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x298	
	// MPropertyFriendlyName "cull radius"
	float m_flCullRadius; // 0x2a0	
	// MPropertyFriendlyName "cull cost"
	float m_flCullFillCost; // 0x2a4	
	// MPropertyFriendlyName "cull control point"
	int32_t m_nCullControlPoint; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	// MPropertyFriendlyName "fallback replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x2b0	
	// MPropertyFriendlyName "fallback max count"
	int32_t m_nFallbackMaxCount; // 0x2b8	
private:
	[[maybe_unused]] uint8_t __pad02bc[0x4]; // 0x2bc
public:
	// MPropertyFriendlyName "low violence definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x2c0	
	// MPropertyFriendlyName "reference replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x2c8	
	// MPropertyStartGroup "Simulation Options"
	// MPropertyFriendlyName "pre-simulation time"
	float m_flPreSimulationTime; // 0x2d0	
	// MPropertyFriendlyName "freeze simulation after time"
	float m_flStopSimulationAfterTime; // 0x2d4	
	// MPropertyFriendlyName "maximum time step"
	float m_flMaximumTimeStep; // 0x2d8	
	// MPropertyFriendlyName "maximum sim tick rate"
	float m_flMaximumSimTime; // 0x2dc	
	// MPropertyFriendlyName "minimum sim tick rate"
	float m_flMinimumSimTime; // 0x2e0	
	// MPropertyFriendlyName "minimum simulation time step"
	float m_flMinimumTimeStep; // 0x2e4	
	// MPropertyFriendlyName "minimum required rendered frames"
	int32_t m_nMinimumFrames; // 0x2e8	
	// MPropertyStartGroup "Performance Options"
	// MPropertyFriendlyName "minimum CPU level"
	int32_t m_nMinCPULevel; // 0x2ec	
	// MPropertyFriendlyName "minimum GPU level"
	int32_t m_nMinGPULevel; // 0x2f0	
	// MPropertyFriendlyName "time to sleep when not drawn"
	float m_flNoDrawTimeToGoToSleep; // 0x2f4	
	// MPropertyFriendlyName "maximum draw distance"
	float m_flMaxDrawDistance; // 0x2f8	
	// MPropertyFriendlyName "start fade distance"
	float m_flStartFadeDistance; // 0x2fc	
	// MPropertyFriendlyName "maximum creation distance"
	float m_flMaxCreationDistance; // 0x300	
	// MPropertyFriendlyName "minimum free particles to aggregate"
	int32_t m_nAggregationMinAvailableParticles; // 0x304	
	// MPropertyFriendlyName "aggregation radius"
	float m_flAggregateRadius; // 0x308	
	// MPropertyFriendlyName "batch particle systems"
	bool m_bShouldBatch; // 0x30c	
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x30d	
	// MPropertyFriendlyName "Hitboxes fall back to snapshot"
	bool m_bShouldHitboxesFallbackToSnapshot; // 0x30e	
private:
	[[maybe_unused]] uint8_t __pad030f[0x1]; // 0x30f
public:
	// MPropertyStartGroup "Rendering Options"
	// MPropertyFriendlyName "view model effect"
	// MPropertySuppressExpr "m_bScreenSpaceEffect"
	InheritableBoolType_t m_nViewModelEffect; // 0x310	
	// MPropertyFriendlyName "screen space effect"
	// MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
	bool m_bScreenSpaceEffect; // 0x314	
private:
	[[maybe_unused]] uint8_t __pad0315[0x3]; // 0x315
public:
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x318	
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	int32_t m_nSkipRenderControlPoint; // 0x320	
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	int32_t m_nAllowRenderControlPoint; // 0x324	
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MParticleAdvancedField
	bool m_bShouldSort; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x47]; // 0x329
public:
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x370	
};

// Alignment: 8
// Size: 0xb50
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x200	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x204	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x208	
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x220	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x228	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x380	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x9d8	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb30	
};

// Alignment: 11
// Size: 0x1f0
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1dc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1e0	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x1e4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e8	
};

// Alignment: 1
// Size: 0x320
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x1c0	
};

// Alignment: 4
// Size: 0x8a0
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d4	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x1d8	
	// MPropertyFriendlyName "transform to offset positions from"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x830	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1c0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
};

// Alignment: 0
// Size: 0x1e0
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x38
struct ParticleNamedValueConfiguration_t
{
public:
	CUtlString m_ConfigName; // 0x0	
	KeyValues3 m_ConfigValue; // 0x8	
	ParticleAttachment_t m_iAttachType; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlString m_BoundEntityPath; // 0x20	
	CUtlString m_strEntityScope; // 0x28	
	CUtlString m_strAttachmentName; // 0x30	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Alignment: 5
// Size: 0xae0
class C_OP_DragRelativeToPlane : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "dampening"
	CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0	
	// MPropertyFriendlyName "falloff"
	CParticleCollectionFloatInput m_flFalloff; // 0x318	
	// MPropertyFriendlyName "dampen on only one side of plane"
	bool m_bDirectional; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0471[0x7]; // 0x471
public:
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecPlaneNormal; // 0x478	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xad0	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x1c4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1c8	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
};

// Alignment: 8
// Size: 0x250
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x234	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x238	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x240	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x244	
};

// Alignment: 8
// Size: 0x4b0
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1d0	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d4	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x1e0	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x338	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x344	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x350	
};

// Alignment: 32
// Size: 0xc8
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
		uint8_t m_bShouldSave: 1; 		
		uint8_t m_bDisableAggregation: 1; 		
		uint8_t m_bShouldSimulateDuringGamePaused: 1; 		
		uint8_t m_bShouldCheckFoW: 1; 		
		uint256_t __pad4: 179;
	}; // 192 bits
	Vector m_vSortOrigin; // 0x40	
	float m_flScale; // 0x4c	
	PARTICLE_EHANDLE__* m_hOwner; // 0x50	
	CParticleProperty* m_pOwningParticleProperty; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x10]; // 0x60
public:
	float m_flFreezeTransitionStart; // 0x70	
	float m_flFreezeTransitionDuration; // 0x74	
	float m_flFreezeTransitionOverride; // 0x78	
	bool m_bFreezeTransitionActive; // 0x7c	
	bool m_bFreezeTargetState; // 0x7d	
	bool m_bCanFreeze; // 0x7e	
private:
	[[maybe_unused]] uint8_t __pad007f[0x1]; // 0x7f
public:
	Vector m_LastMin; // 0x80	
	Vector m_LastMax; // 0x8c	
	CSplitScreenSlot m_nSplitScreenUser; // 0x98	
	Vector m_vecAggregationCenter; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x18]; // 0xa8
public:
	int32_t m_RefCount; // 0xc0	
};

// Alignment: 6
// Size: 0x620
class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer
{
public:
	// MPropertySortPriority "-1"
	// MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
	bool m_bUsePerParticleRadius; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x7]; // 0x201
public:
	CParticleCollectionRendererFloatInput m_fGridSize; // 0x208	
	CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x360	
	// MPropertyAttributeRange ".1 .95"
	CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4b8	
	// MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
	int32_t m_nScaleCP; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x618	
};

// Alignment: 1
// Size: 0x320
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x1c0	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1d0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d4	
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x1e0	
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x210
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x1d0	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x1d4	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x1d8	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x1dc	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x1e0	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x1ec	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x1f8	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x204	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x1c8	
};

// Alignment: 8
// Size: 0x210
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1cc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x28]; // 0x1d8
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
};

// Alignment: 6
// Size: 0x210
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c0	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c4	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x1c8	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x1cc	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x1d4	
};

// Alignment: 12
// Size: 0x3e0
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x1d0	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x1d4	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x1e0	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x338	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x33c	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x340	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x34c	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3cc	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x3d0	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x3d1	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3d2	
};

// Alignment: 4
// Size: 0x370
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x200	
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x204	
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x210	
};

// Alignment: 15
// Size: 0xa10
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x228	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x22c	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x230	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x234	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x238	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x23c	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
public:
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x248	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x3a0	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x3a4	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3a8	
private:
	[[maybe_unused]] uint8_t __pad03a9[0x7]; // 0x3a9
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3b0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xa08	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa0c	
};

// Alignment: 15
// Size: 0x610
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x1cc	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x1d8	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x1e4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1f4	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1f5	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1f6	
private:
	[[maybe_unused]] uint8_t __pad01f7[0x1]; // 0x1f7
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204	
	// MPropertyFriendlyName "oscillation multiplier"
	CPerParticleFloatInput m_flOscMult; // 0x208	
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x360	
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4b8	
};

// Alignment: 10
// Size: 0x740
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d0	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_flIncrement; // 0x1d8	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x330	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x488	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x5e0	
};

// Alignment: 8
// Size: 0x350
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x1]; // 0x1d1
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x1d2	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x1d3	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x1d4	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x1d8	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x1dc	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1f8	
};

// Alignment: 4
// Size: 0x890
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity"
	CParticleCollectionVecInput m_velocityInput; // 0x1c0	
	// MPropertyFriendlyName "local space"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x818	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x880	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x884	
};

// Alignment: 61
// Size: 0x2470
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x200	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x358	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRollScale; // 0x4b0	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionRendererVecInput m_vecColorScale; // 0x610	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xc68	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xc6c	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xc70	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xc78	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xdd0	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xf28	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xf2c	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xf30	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xf48	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xf4c	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x7]; // 0xf51
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xf58	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x10b0	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x1208	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x120c	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1210	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x1214	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x1215	
private:
	[[maybe_unused]] uint8_t __pad1216[0x2]; // 0x1216
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1218	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flDesaturation; // 0x1370	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x14c8	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1620	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1624	
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1628	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x1780	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x1781	
private:
	[[maybe_unused]] uint8_t __pad1782[0x2]; // 0x1782
public:
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x1784	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1788	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x178c	
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x1790	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x18e8	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1a40	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1b98	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1b99	
private:
	[[maybe_unused]] uint8_t __pad1b9a[0x6]; // 0x1b9a
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1ba0	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1cf8	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1cfc	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1d00	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1d01	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1d02	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x1d03	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x1d04	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1d84	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x1d85	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1e05	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1e06	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1e07	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1e08	
private:
	[[maybe_unused]] uint8_t __pad1e09[0x3]; // 0x1e09
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1e0c	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1e10	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x1f68	
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x20c0	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x2218	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x221c	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x2220	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x2221	
};

// Alignment: 8
// Size: 0x280
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1c0	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1cc	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1d0	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x1d4	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1e0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0xc]; // 0x264
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x270	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x1c4	
};

// Alignment: 6
// Size: 0x5e0
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x318	
	// MPropertyFriendlyName "emission scale from killed parent particles"
	float m_flInitFromKilledParentParticles; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	// MPropertyFriendlyName "emission scale from parent particle count"
	CParticleCollectionFloatInput m_flParentParticleScale; // 0x478	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x5d0	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5d4	
};

// Alignment: 7
// Size: 0x2740
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2470	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2474	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x2478	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x247c	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2480	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x25d8	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x2730	
};

// Alignment: 5
// Size: 0x60
struct ParticleNamedValueSource_t
{
public:
	CUtlString m_Name; // 0x0	
	bool m_IsPublic; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	// MPropertySuppressField
	PulseValueType_t m_ValueType; // 0xc	
	// MPropertySuppressField
	ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10	
	// MPropertySuppressField
	CUtlVector< ParticleNamedValueConfiguration_t > m_NamedConfigs; // 0x48	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_Spin : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 10
// Size: 0x1f0
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1c4	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01c6[0x2]; // 0x1c6
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1d4	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1d8	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1dc	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1e8	
};

// Alignment: 8
// Size: 0x240
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0218[0x4]; // 0x218
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x21c	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x220	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x224	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x228	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x22c	
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x230	
};

// Alignment: 3
// Size: 0x200
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0	
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x1e4	
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x1f0	
};

// Alignment: 5
// Size: 0x1e0
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x1c0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1dc	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x1dd	
};

// Alignment: 0
// Size: 0x1c0
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x1f0
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x1d0	
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d4	
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x1e0	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x1e4	
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x1e8	
};

// Alignment: 3
// Size: 0x1e0
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x1c0	
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x1]; // 0x1d8
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x1d9	
};

// Alignment: 6
// Size: 0x1e0
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
};

// Alignment: 4
// Size: 0x210
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c4	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c8	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	CPathParameters m_PathParams; // 0x1d0	
};

// Alignment: 2
// Size: 0x320
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
};

// Alignment: 2
// Size: 0x1e0
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x1d0	
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x1d1	
};

// Alignment: 4
// Size: 0x490
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x328	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x32c	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x330	
};

// Alignment: 4
// Size: 0x980
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x320	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x978	
};

// Alignment: 3
// Size: 0xe80
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1c8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x820	
};

// Alignment: 8
// Size: 0x260
class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x234	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x238	
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x248	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x254	
};

// Alignment: 6
// Size: 0xef0
class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x820	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xe78	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xe7c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xe80	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1cc	
};

// Alignment: 4
// Size: 0x1d0
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1c4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1cc	
};

// Alignment: 11
// Size: 0x1df0
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x1d0	
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x828	
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xe80	
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xe81	
	// MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
	// MPropertySuppressExpr "!m_bSampleWater"
	bool m_bDampenNearWaterPlane; // 0xe82	
	// MPropertyFriendlyName "sample local gravity"
	bool m_bSampleGravity; // 0xe83	
private:
	[[maybe_unused]] uint8_t __pad0e84[0x4]; // 0xe84
public:
	// MPropertyFriendlyName "gravity force"
	// MPropertySuppressExpr "m_bSampleGravity"
	CPerParticleVecInput m_vecGravityForce; // 0xe88	
	// MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	bool m_bUseBasicMovementGravity; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e1[0x7]; // 0x14e1
public:
	// MPropertyFriendlyName "local gravity scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalGravityScale; // 0x14e8	
	// MPropertyFriendlyName "local gravity buoyancy scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x1640	
	// MPropertyFriendlyName "buoyancy force"
	// MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
	CPerParticleVecInput m_vecBuoyancyForce; // 0x1798	
};

// Alignment: 6
// Size: 0x5f0
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x1d8	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x330	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x488	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5e0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5e4	
};

// Alignment: 3
// Size: 0x480
class C_OP_SDFConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min dist to sdf"
	CParticleCollectionFloatInput m_flMinDist; // 0x1c0	
	// MPropertyFriendlyName "max dist to sdf"
	CParticleCollectionFloatInput m_flMaxDist; // 0x318	
	// MPropertyFriendlyName "Max # of iterations"
	int32_t m_nMaxIterations; // 0x470	
};

// Alignment: 10
// Size: 0xe90
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x1c0	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x818	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xe70	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xe74	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xe78	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xe7c	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xe80	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xe84	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xe88	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xe89	
};

// Alignment: 1
// Size: 0x230
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
};

// Alignment: 10
// Size: 0x1f0
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1c8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1dc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x1e4	
};

// Alignment: 6
// Size: 0x840
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x1d0	
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x1d4	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x1dc	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1e8	
};

// Alignment: 0
// Size: 0x220
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 15
// Size: 0x10b0
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x1d0	
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x1d4	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x1e0	
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x338	
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x490	
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x5e8	
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x740	
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x898	
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0x9f0	
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0xb48	
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x4]; // 0xca4
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0xca8	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0xe00	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xf58	
};

// Alignment: 5
// Size: 0xe90
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1d4	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x1d8	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x830	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xe88	
};

// Alignment: 11
// Size: 0x220
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x1c0	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x1cc	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x1d0	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x1d4	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x1d8	
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x1dc	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x1f0	
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x1f4	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x208	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x20c	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x210	
};

// Alignment: 9
// Size: 0xb18
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyFriendlyName "Author Texture As Gradient"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
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
	CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x190	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1c0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1c4	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x1c0	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x1c4	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x1c8	
};

// Alignment: 5
// Size: 0x1e0
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1c4	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1c8	
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x1]; // 0x1d8
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x1d9	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x1c0	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x1c4	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x1c8	
};

// Alignment: 6
// Size: 0x510
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x1e0	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x340	
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x3a8	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x500	
};

// Alignment: 14
// Size: 0x1f0
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x1c4	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1c8	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x1cc	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x1d0	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x1d4	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x1d8	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x1dc	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x1e0	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x1e4	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x1e8	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x1ec	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x1ed	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x1ee	
};

// Alignment: 5
// Size: 0xe80
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	CParticleCollectionVecInput m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max coords"
	CParticleCollectionVecInput m_vecMax; // 0x818	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0xe70	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xe74	
	// MPropertyFriendlyName "Take radius into account"
	bool m_bAccountForRadius; // 0xe75	
};

// Alignment: 1
// Size: 0x1e0
class C_OP_SDFForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	float m_flForceScale; // 0x1d0	
};

// Alignment: 5
// Size: 0x1f0
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1d0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x1d4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1d8	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x1dc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1e0	
};

// Alignment: 8
// Size: 0x1e0
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x1cc	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1d0	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1d8	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1dc	
};

// Alignment: 5
// Size: 0x1f0
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x1d4	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e0	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x1c4	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x1c5	
};

// Alignment: 11
// Size: 0x1f0
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c0	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c4	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x1c8	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1cc	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1d0	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x1d4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x1d8	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x1dc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1e0	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1e4	
};

// Alignment: 0
// Size: 0x200
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x250
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1c0	
};

// Alignment: 0
// Size: 0x1f0
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x980
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_Gravity; // 0x1c0	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	CParticleCollectionFloatInput m_fDrag; // 0x818	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x970	
};

// Alignment: 0
// Size: 0x110
class CParticleCollectionBindingInstance : public CBasePulseGraphInstance
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x340
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x318	
};

// Alignment: 11
// Size: 0x1f0
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1d8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1dc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e4	
private:
	[[maybe_unused]] uint8_t __pad01e5[0x3]; // 0x1e5
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1e8	
};

// Alignment: 7
// Size: 0x880
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x1c0	
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x318	
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x470	
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x5c8	
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x720	
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x878	
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x87c	
};

// Alignment: 1
// Size: 0x1d0
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x1c0	
};

// Alignment: 6
// Size: 0x1f0
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x1cc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1dc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1e0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1e4	
};

// Alignment: 10
// Size: 0x5f0
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x318	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x470	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x5c8	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x5cc	
	// MPropertyFriendlyName "emit particles for killed parent particles"
	bool m_bInitFromKilledParentParticles; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d1[0x3]; // 0x5d1
public:
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5d4	
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5d8	
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x5dc	
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x5dd	
};

// Alignment: 3
// Size: 0x1f0
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0	
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x1e4	
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x1e8	
};

// Alignment: 1
// Size: 0x1d0
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x1c0	
};

// Alignment: 6
// Size: 0x210
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1c4	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1c8	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1c9	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1ca	
private:
	[[maybe_unused]] uint8_t __pad01cb[0x5]; // 0x1cb
public:
	CPathParameters m_PathParams; // 0x1d0	
};

// Alignment: 1
// Size: 0x320
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x1c0	
};

// Alignment: 13
// Size: 0x890
class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1c8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x230	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x298	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x3f0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x548	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x6a0	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x7f8	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x7fc	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x800	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x880	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x884	
private:
	[[maybe_unused]] uint8_t __pad0885[0x3]; // 0x885
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x888	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "use old code"
	bool m_bOldCode; // 0x1d8	
};

// Alignment: 3
// Size: 0x1d0
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x1c0	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x1c4	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x1c8	
};

// Alignment: 11
// Size: 0xcf0
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x228	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x380	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4d8	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x630	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x788	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x8e0	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0xa38	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xb90	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xce8	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xce9	
};

// Alignment: 9
// Size: 0xa10
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1c4	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1c8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x820	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x8a0	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x8a1	
private:
	[[maybe_unused]] uint8_t __pad08a2[0x2]; // 0x8a2
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x8a4	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x8a8	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0xa00	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1c8	
};

// Alignment: 4
// Size: 0x210
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x200	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x204	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x208	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x20c	
};

// Alignment: 5
// Size: 0x5f0
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1d8	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x330	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x488	
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x5e0	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
};

// Alignment: 4
// Size: 0x1e0
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x1c4	
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x8]; // 0x1cc
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x1d4	
};

// Alignment: 11
// Size: 0xe20
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d4	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "hitbox data"
	ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1dc	
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x1e0	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x338	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x490	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5e8	
	// MPropertyFriendlyName "intersection height CP"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	int32_t m_nHeightControlPointNumber; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MPropertyFriendlyName "comparison velocity"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x748	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xda0	
};

// Alignment: 5
// Size: 0x330
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x328	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x329	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x32a	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x32b	
};

// Alignment: 50
// Size: 0x25f0
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x200	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x201	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x202	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x203	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0220[0x4]; // 0x220
public:
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x224	
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x228	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x22c	
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x22d	
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x22e	
private:
	[[maybe_unused]] uint8_t __pad022f[0x1]; // 0x22f
public:
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x230	
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x888	
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "700"
	bool m_bIgnoreRadius; // 0xee0	
private:
	[[maybe_unused]] uint8_t __pad0ee1[0x3]; // 0xee1
public:
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "700"
	int32_t m_nModelScaleCP; // 0xee4	
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xee8	
	// MPropertyFriendlyName "apply scales in local model space"
	// MPropertySortPriority "700"
	bool m_bLocalScale; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1541[0x3]; // 0x1541
public:
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x1544	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x1548	
private:
	[[maybe_unused]] uint8_t __pad1549[0x3]; // 0x1549
public:
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0x154c	
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x1550	
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x1551	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x1552	
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x1553	
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x1554	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x1558	
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x155c	
	// MPropertyFriendlyName "activity override"
	// MPropertySuppressExpr "mod != dota"
	// MPropertySortPriority "500"
	char m_ActivityName[256]; // 0x1560	
	// MPropertyFriendlyName "sequence override"
	// MPropertySuppressExpr "mod == dota"
	// MPropertySortPriority "500"
	char m_SequenceName[256]; // 0x1660	
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0x1760	
private:
	[[maybe_unused]] uint8_t __pad1761[0x7]; // 0x1761
public:
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x1768	
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x1770	
private:
	[[maybe_unused]] uint8_t __pad1771[0x7]; // 0x1771
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	CPerParticleFloatInput m_nSkin; // 0x1778	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x18d0	
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "input model"
	CParticleModelInput m_modelInput; // 0x18e8	
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x1948	
	// MPropertyFriendlyName "model override economy loadout slot type"
	char m_EconSlotName[256]; // 0x194c	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x1a4c	
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x1a4d	
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	bool m_bUseRawMeshGroup; // 0x1a4e	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x1a4f	
	// MPropertyFriendlyName "accept decals"
	bool m_bAcceptsDecals; // 0x1a50	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x1a51	
	// MPropertyFriendlyName "do not draw in particle pass"
	bool m_bDoNotDrawInParticlePass; // 0x1a52	
	// MPropertyFriendlyName "render attribute"
	char m_szRenderAttribute[260]; // 0x1a53	
private:
	[[maybe_unused]] uint8_t __pad1b57[0x1]; // 0x1b57
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1b58	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x1cb0	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x1e08	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1f60	
private:
	[[maybe_unused]] uint8_t __pad1f64[0x4]; // 0x1f64
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1f68	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x25c0	
};

// Alignment: 3
// Size: 0x3d0
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MPropertySuppressExpr "mod != dota"
	char m_ActivityName[256]; // 0x1c0	
	// MPropertyFriendlyName "sequence"
	// MPropertySuppressExpr "mod == dota"
	char m_SequenceName[256]; // 0x2c0	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3c0	
};

// Alignment: 6
// Size: 0x330
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1c0	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1c4	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1c8	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x1d0	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x328	
};

// Alignment: 3
// Size: 0x270
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "time-of-day parameter"
	char m_pszTimeOfDayParameter[128]; // 0x1d4	
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x254	
};

// Alignment: 20
// Size: 0x3990
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2740	
private:
	[[maybe_unused]] uint8_t __pad2741[0x3]; // 0x2741
public:
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2744	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2748	
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x274c	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x2750	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x2754	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x2758	
private:
	[[maybe_unused]] uint8_t __pad2759[0x3]; // 0x2759
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x275c	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2760	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2764	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2768	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x28c0	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x2f18	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x3070	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x31c8	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x3820	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x3978	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x397c	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x3980	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x3984	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x740
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1d0	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1d4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1d8	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1dc	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x1e0	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x338	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x490	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5e8	
};

// Alignment: 3
// Size: 0x1d0
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1c0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1c4	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
};

// Alignment: 0
// Size: 0x1c0
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// No members available
};

// Alignment: 27
// Size: 0x2b90
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2470	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x25c8	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x25cc	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x25d0	
private:
	[[maybe_unused]] uint8_t __pad25d1[0x3]; // 0x25d1
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x25d4	
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x25d8	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x25dc	
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x25e0	
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2738	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2890	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2894	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x2898	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x2899	
private:
	[[maybe_unused]] uint8_t __pad289a[0x2]; // 0x289a
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x289c	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x28a0	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x28a4	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x28a5	
private:
	[[maybe_unused]] uint8_t __pad28a9[0x3]; // 0x28a9
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x28ac	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x28b0	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x28b4	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x28b8	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x28bc	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x28c0	
private:
	[[maybe_unused]] uint8_t __pad28c4[0x4]; // 0x28c4
public:
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x28c8	
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x2a20	
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bParticleShadows; // 0x2b78	
private:
	[[maybe_unused]] uint8_t __pad2b79[0x3]; // 0x2b79
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x2b7c	
};

// Alignment: 5
// Size: 0x840
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1d4	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x1d8	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x834	
};

// Alignment: 11
// Size: 0x200
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x1c0	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x1c4	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x1c8	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x1cc	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x1d0	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x1d4	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x1d8	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x1e4	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x1e8	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x1ec	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x1f0	
};

// Alignment: 4
// Size: 0x1f0
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x1d0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x1d4	
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1e4	
};

// Alignment: 7
// Size: 0x8b0
class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1c4	
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x1c5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c7	
private:
	[[maybe_unused]] uint8_t __pad0247[0x1]; // 0x247
public:
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x248	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x8a0	
};

// Alignment: 7
// Size: 0x1140
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1c8	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x320	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x478	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xad0	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0x1128	
private:
	[[maybe_unused]] uint8_t __pad1129[0x3]; // 0x1129
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x112c	
};

// Alignment: 4
// Size: 0x1e0
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x1c0	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x1c4	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x1d4	
};

// Alignment: 0
// Size: 0x1f0
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x1e0
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x3]; // 0x1c1
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x1dc	
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
	// MPropertyFriendlyName "end cap effect"
	bool m_bEndCap; // 0xc	
	// MPropertySuppressField
	bool m_bDisableChild; // 0xd	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	// MPropertyFriendlyName "disable at detail levels below"
	ParticleDetailLevel_t m_nDetailLevel; // 0x10	
};

// Alignment: 10
// Size: 0x1960
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x1c0	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x1cc	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x1d8	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x830	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x988	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xfe0	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x1638	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1790	
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleInputOptional
	CParticleTransformInput m_TransformInput; // 0x18e8	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1950	
};

// Alignment: 4
// Size: 0x1f0
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x1cc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1dc	
};

// Alignment: 5
// Size: 0x490
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x318	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x470	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x474	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x480	
};

// Alignment: 8
// Size: 0x270
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1c0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1cc	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x1d8	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1d9	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x1da	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1db	
private:
	[[maybe_unused]] uint8_t __pad025b[0x1]; // 0x25b
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x25c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x260	
};

// Alignment: 18
// Size: 0x220
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x1c0	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x1c4	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x1c8	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x1cc	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x1d0	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x1d4	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x1d8	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x1dc	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x1e0	
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x1e4	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x1e8	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x1ec	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x1f0	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x1f4	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x1f8	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x1fc	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x200	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x204	
};

// Alignment: 5
// Size: 0x200
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x1c4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1cc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1d0	
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
// Size: 0x320
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c8	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1cc	
};

// Alignment: 8
// Size: 0x4b0
class C_OP_RemapSDFDistanceToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x320	
	// MPropertyFriendlyName "Value for dist<min"
	Vector m_vValueBelowMin; // 0x478	
	// MPropertyFriendlyName "Value for dist=min"
	Vector m_vValueAtMin; // 0x484	
	// MPropertyFriendlyName "Value for dist=max"
	Vector m_vValueAtMax; // 0x490	
	// MPropertyFriendlyName "Value for dist>max"
	Vector m_vValueAboveMax; // 0x49c	
};

// Alignment: 7
// Size: 0x1e0
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1cc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x1d4	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x1d8	
};

// Alignment: 10
// Size: 0x230
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x200	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x204	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x208	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x20c	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x210	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x214	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x218	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x21c	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x220	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x224	
};

// Alignment: 12
// Size: 0x330
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x200	
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x204	
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x208	
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x20c	
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x210	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x214	
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x218	
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x21c	
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x220	
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x224	
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x228	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x328	
};

// Alignment: 19
// Size: 0x210
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x1c0	
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x1c4	
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x1c8	
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x1cc	
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x1d0	
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x1d4	
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x1d8	
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x1dc	
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x1e0	
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x1e4	
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x1e8	
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x1ec	
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x1f0	
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x1f4	
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x1f8	
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x1fc	
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x200	
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x204	
	// MPropertyFriendlyName "$SFXUseModelUVs"
	float m_flSFXSUseModelUVs; // 0x208	
};

// Alignment: 30
// Size: 0x28e0
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2470	
private:
	[[maybe_unused]] uint8_t __pad2471[0x3]; // 0x2471
public:
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x2474	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x2478	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x247c	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x2480	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2484	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2488	
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x248c	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x2490	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x2494	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x2498	
private:
	[[maybe_unused]] uint8_t __pad249c[0x4]; // 0x249c
public:
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x24a0	
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x25f8	
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2750	
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x28a8	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x28ac	
private:
	[[maybe_unused]] uint8_t __pad28ad[0x3]; // 0x28ad
public:
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x28b0	
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x28b4	
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x28b8	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x28bc	
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x28c0	
private:
	[[maybe_unused]] uint8_t __pad28c4[0x1]; // 0x28c4
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x28c5	
private:
	[[maybe_unused]] uint8_t __pad28c6[0x2]; // 0x28c6
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x28c8	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x28cc	
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x28d0	
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x28d1	
private:
	[[maybe_unused]] uint8_t __pad28d2[0x2]; // 0x28d2
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x28d4	
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x28d8	
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x28dc	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x28dd	
};

// Alignment: 5
// Size: 0xd80
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x1c0	
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x318	
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x470	
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x5c8	
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x720	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x1c0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Alignment: 9
// Size: 0x200
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output BBox Type"
	BBoxVolumeType_t m_nBBoxType; // 0x1d0	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1d4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "output max control point"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
	int32_t m_nOutControlPointMaxNumber; // 0x1dc	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	int32_t m_nField; // 0x1e0	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMin; // 0x1e4	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMax; // 0x1e8	
	// MPropertyFriendlyName "output minimum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMin; // 0x1ec	
	// MPropertyFriendlyName "output maximum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMax; // 0x1f0	
};

// Alignment: 9
// Size: 0x480
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0288[0x4]; // 0x288
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x28c	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x290	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x294	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x298	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad0319[0x3]; // 0x319
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x31c	
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x320	
};

// Alignment: 1
// Size: 0x4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0	
};

// Alignment: 1
// Size: 0x230
class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
};

// Alignment: 8
// Size: 0x1f0
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d4	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1dc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1e0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e8	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x1ec	
};

// Alignment: 16
// Size: 0x8a0
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x200	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x2]; // 0x202
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x204	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x208	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x20c	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x210	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x868	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x86c	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x870	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x874	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x878	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x87c	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x880	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x884	
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x888	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x890	
};

// Alignment: 2
// Size: 0x1d0
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x1c0	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1c1	
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
// Size: 0x28
class CNetworkVelocityVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Alignment: 0
// Size: 0x18
class CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
};

// Alignment: 6
// Size: 0x14
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

// Alignment: 5
// Size: 0x14
struct CSAdditionalPerRoundStats_t
{
public:
	int32_t m_numChickensKilled; // 0x0	
	int32_t m_killsWhileBlind; // 0x4	
	int32_t m_bombCarrierkills; // 0x8	
	int32_t m_iBurnDamageInflicted; // 0xc	
	int32_t m_iDinks; // 0x10	
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

// Alignment: 2
// Size: 0x18
class CBreakableStageHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nCurrentStage; // 0x8	
	int32_t m_nStageCount; // 0xc	
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

// Alignment: 1
// Size: 0x4
struct ModelConfigHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ModelConfigHandle_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 9
// Size: 0x38
struct CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t
{
public:
	int32_t m_numRoundsSurvived; // 0x14	
	int32_t m_maxNumRoundsSurvived; // 0x18	
	int32_t m_numRoundsSurvivedTotal; // 0x1c	
	int32_t m_iRoundsWonWithoutPurchase; // 0x20	
	int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x24	
	int32_t m_numFirstKills; // 0x28	
	int32_t m_numClutchKills; // 0x2c	
	int32_t m_numPistolKills; // 0x30	
	int32_t m_numSniperKills; // 0x34	
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

// Alignment: 0
// Size: 0x58
class CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x58]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x8
class CFiringModeInt
{
public:
	int32_t m_nValues[2]; // 0x0	
};

// Alignment: 2
// Size: 0x18
class CAnimGraphTagRef
{
public:
	int32_t m_nTagIndex; // 0x0	
	CGlobalSymbol m_tagName; // 0x10	
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

// Alignment: 0
// Size: 0x18
class CAnimEventListenerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
};

// Alignment: 11
// Size: 0x2c
class CNavHullVData
{
public:
	// MPropertyFriendlyName "Enabled"
	// MPropertyDescription "Is this agent enabled for generation? ( will result in 0 nav areas for this agent if not )."
	bool m_bAgentEnabled; // 0x0	
	// MPropertyFriendlyName "Radius"
	// MPropertyDescription "Radius of navigating agent capsule."
	float m_agentRadius; // 0x4	
	// MPropertyFriendlyName "Height"
	// MPropertyDescription "Height of navigating agent capsule."
	float m_agentHeight; // 0x8	
	// MPropertyFriendlyName "Enable Short Height"
	// MPropertyDescription "Enable shorter navigating agent capsules ( e.g. crouch ) in addition to regular height capsules."
	bool m_agentShortHeightEnabled; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Short height"
	// MPropertyDescription "Short Height of navigating agent capsules if enabled."
	float m_agentShortHeight; // 0x10	
	// MPropertyFriendlyName "Max Climb"
	// MPropertyDescription "Max vertical offset that the agent simply ignores and walks over."
	float m_agentMaxClimb; // 0x14	
	// MPropertyFriendlyName "Max Slope"
	// MPropertyDescription "Max ground slope to be considered walkable."
	int32_t m_agentMaxSlope; // 0x18	
	// MPropertyFriendlyName "Max Jump Down Distance"
	// MPropertyDescription "Max vertical offset at which to create a jump connection ( possibly one-way )."
	float m_agentMaxJumpDownDist; // 0x1c	
	// MPropertyFriendlyName "Max Horizontal Jump Distance"
	// MPropertyDescription "Max horizontal offset over which to create a jump connection ( actually a parameter into the true threshold function )."
	float m_agentMaxJumpHorizDistBase; // 0x20	
	// MPropertyFriendlyName "Max Jump Up Distance"
	// MPropertyDescription "Max vertical offset at which to make a jump connection two-way."
	float m_agentMaxJumpUpDist; // 0x24	
	// MPropertyFriendlyName "Border Erosion"
	// MPropertyDescription "Border erosion in voxel units ( -1 to use default value based on agent radius )."
	int32_t m_agentBorderErosion; // 0x28	
};

// Alignment: 1
// Size: 0x20
class CInButtonState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint64_t m_pButtonStates[3]; // 0x8	
};

// Alignment: 4
// Size: 0x18
class CIronSightController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIronSightAvailable; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	float m_flIronSightAmount; // 0xc	
	float m_flIronSightAmountGained; // 0x10	
	float m_flIronSightAmountBiased; // 0x14	
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

// Alignment: 1
// Size: 0x4
struct GameTime_t
{
public:
	float m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_FLOAT(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->m_static_fields[0]->m_instance);};
	static GameTime_t &Get_Zero(){return *reinterpret_cast<GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x4
struct ParticleIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ParticleIndex_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x1
class QuestProgress
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Value_FindEntByName : public CPulseCell_BaseValue
{
public:
	CUtlString m_EntityType; // 0x48	
};

// Alignment: 2
// Size: 0x80
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70	
	float m_flRadius; // 0x7c	
};

// Alignment: 9
// Size: 0x60
class CAI_Expresser
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	GameTime_t m_flStopTalkTime; // 0x38	
	GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3c	
	GameTime_t m_flBlockedTalkTime; // 0x40	
	int32_t m_voicePitch; // 0x44	
	GameTime_t m_flLastTimeAcceptedSpeak; // 0x48	
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

// Alignment: 0
// Size: 0x8
class IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x18
class Extent
{
public:
	Vector lo; // 0x0	
	Vector hi; // 0xc	
};

// Alignment: 0
// Size: 0x58
class CBtNodeComposite : public CBtNode
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8
class CSimpleSimTimer
{
public:
	GameTime_t m_next; // 0x0	
	WorldGroupId_t m_nWorldGroupId; // 0x4	
};

// Alignment: 1
// Size: 0x1
struct AmmoIndex_t
{
public:
	int8_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("AmmoIndex_t")->m_static_fields[0]->m_instance);};
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

// Alignment: 1
// Size: 0x4
struct AnimationUpdateListHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("AnimationUpdateListHandle_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x20
class ResponseParams
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int16_t odds; // 0x10	
	int16_t flags; // 0x12	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	ResponseFollowup* m_pFollowup; // 0x18	
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_SetAnimGraphParam : public CPulseCell_BaseFlow
{
public:
	CUtlString m_ParamName; // 0x48	
};

// Alignment: 2
// Size: 0x8
class CTakeDamageResult
{
public:
	int32_t m_nHealthLost; // 0x0	
	int32_t m_nDamageTaken; // 0x4	
};

// Alignment: 6
// Size: 0x178
class CBaseIssue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	char m_szTypeString[64]; // 0x20	
	char m_szDetailsString[260]; // 0x60	
	int32_t m_iNumYesVotes; // 0x164	
	int32_t m_iNumNoVotes; // 0x168	
	int32_t m_iNumPotentialVotes; // 0x16c	
	CVoteController* m_pVoteController; // 0x170	
};

// Alignment: 1
// Size: 0xc
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x8	
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

// Alignment: 1
// Size: 0x8
class CRangeInt
{
public:
	int32_t m_pValue[2]; // 0x0	
};

// Alignment: 0
// Size: 0x8
class ISkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 10
// Size: 0xa
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
	bool m_bHull_Small; // 0x9	
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
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

// Alignment: 0
// Size: 0x8
class IHasAttributes
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
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

// Alignment: 1
// Size: 0x8
class CFiringModeFloat
{
public:
	float m_flValues[2]; // 0x0	
};

// Alignment: 0
// Size: 0x58
class CBtNodeDecorator : public CBtNode
{
public:
	// No members available
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
	GameTime_t flwaitSound; // 0x18	
};

// Alignment: 3
// Size: 0x78
class CPulseCell_Outflow_PlayVCD : public CPulseCell_BaseFlow
{
public:
	CUtlString m_vcdFilename; // 0x48	
	CPulse_OutflowConnection m_OnFinished; // 0x50	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0x60	
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
	GameTime_t m_flNext; // 0x24	
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

// Alignment: 1
// Size: 0x18
class CNavHullPresetVData
{
public:
	// MPropertyFriendlyName "Nav Hulls"
	// MPropertyDescription "List of nav hulls belonging to this preset."
	// MPropertyAttributeEditor "VDataChoice( scripts/nav_hulls.vdata )"
	CUtlVector< CUtlString > m_vecNavHulls; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct GameTick_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTick_t")->m_static_fields[0]->m_instance);};
	static GameTick_t &Get_Zero(){return *reinterpret_cast<GameTick_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTick_t")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x10
class CSkillInt
{
public:
	int32_t m_pValue[4]; // 0x0	
};

// Alignment: 3
// Size: 0x30
class CHintMessageQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_tmMessageEnd; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHintMessage* > m_messages; // 0x10	
	CBasePlayerController* m_pPlayerController; // 0x28	
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
// Size: 0x28
class CNetworkOriginQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Alignment: 7
// Size: 0x30
class CNetworkOriginCellCoordQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x12	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x14	
	// MNetworkEnable
	uint16_t m_nOutsideWorld; // 0x16	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x20	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x28	
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

// Alignment: 0
// Size: 0x1
class CCSPulseServerFuncs_Globals
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
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
	GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x9c	
	bool m_bShatterRateLimited; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a1[0x3]; // 0xa1
public:
	CHandle< CBaseEntity > m_hEntityHittingMe; // 0xa4	
	CUtlVector< uint32 > m_vecNeighbors; // 0xa8	
};

// Alignment: 1
// Size: 0xc
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0x8	
};

// Alignment: 0
// Size: 0x8
class IChoreoServices
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static uint32_t &Get_ms_uSequenceId(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("IChoreoServices")->m_static_fields[0]->m_instance);};
};

// Alignment: 10
// Size: 0x1e8
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0	
	char m_szResponseName[192]; // 0x1	
	char m_szMatchingRule[128]; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad0141[0x7]; // 0x141
public:
	ResponseParams m_Params; // 0x148	
	float m_fMatchScore; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	char* m_szSpeakerContext; // 0x170	
	char* m_szWorldContext; // 0x178	
	ResponseFollowup m_Followup; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x7]; // 0x1b1
public:
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1b8	
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d0	
};

// Alignment: 2
// Size: 0x14
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_minInterval; // 0xc	
	float m_maxInterval; // 0x10	
};

// Alignment: 0
// Size: 0x1
class CPulseServerFuncs_Sounds
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
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
// Size: 0x10
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0	
	int32_t m_nForceBone; // 0xc	
};

// Alignment: 3
// Size: 0x20
class CNavLinkMovementVData
{
public:
	// MPropertyFriendlyName "Is Interpolated"
	// MPropertyDescription "Indicates that the animation has a segment that's interpolated. In general using this on navlinks that traverse +/- 50% of the recommended distance should look okay."
	bool m_bIsInterpolated; // 0x0	
	// MPropertyFriendlyName "Recommended Distance"
	// MPropertyDescription "Recommended distance this movement traverses"
	uint32_t m_unRecommendedDistance; // 0x4	
	// MPropertyFriendlyName "Animgraph Variables"
	// MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
	// MPropertyAutoExpandSelf
	CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0x8	
};

// Alignment: 1
// Size: 0x1b0
class CNetworkTransmitComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x16c]; // 0x0
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x16c	
	
	// Static fields:
	static int32_t &Get_s_nDebugStateChange(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_s_nWatchTransmitEntity(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[1]->m_instance);};
	static bool &Get_s_bUseNetworkVars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[2]->m_instance);};
	static bool &Get_s_bNetworkVarPerFieldTracking(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[3]->m_instance);};
	static bool &Get_s_bNetworkVarValidate(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[4]->m_instance);};
	static bool &Get_s_bUsingPVSConvars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[5]->m_instance);};
};

// Alignment: 2
// Size: 0x10
class CNavLinkAnimgraphVar
{
public:
	// MPropertyFriendlyName "Animgraph Variable"
	// MPropertyDescription "Animgraph variable to use for animation for this movement."
	CUtlString m_strAnimgraphVar; // 0x0	
	// MPropertyFriendlyName "Alignment Degrees"
	// MPropertyDescription "Amount of angular slack the animation has when aligning to the navlink. 0 indicates that it must be strictly aligned."
	uint32_t m_unAlignmentDegrees; // 0x8	
};

// Alignment: 2
// Size: 0x50
struct GameAmmoTypeInfo_t : public AmmoTypeInfo_t
{
public:
	int32_t m_nBuySize; // 0x38	
	int32_t m_nCost; // 0x3c	
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

// Alignment: 10
// Size: 0x60
class CCommentarySystem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x11]; // 0x0
public:
	bool m_bCommentaryConvarsChanging; // 0x11	
	bool m_bCommentaryEnabledMidGame; // 0x12	
private:
	[[maybe_unused]] uint8_t __pad0013[0x1]; // 0x13
public:
	GameTime_t m_flNextTeleportTime; // 0x14	
	int32_t m_iTeleportStage; // 0x18	
	bool m_bCheatState; // 0x1c	
	bool m_bIsFirstSpawnGroupToLoad; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x1a]; // 0x1e
public:
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x38	
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x3c	
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x48	
};

// Alignment: 18
// Size: 0x98
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
	bool m_bShouldBleed; // 0x64	
	bool m_bShouldSpark; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0xa]; // 0x66
public:
	TakeDamageFlags_t m_nDamageFlags; // 0x70	
	int32_t m_nNumObjectsPenetrated; // 0x74	
	HSCRIPT m_hScriptInstance; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0080[0x14]; // 0x80
public:
	bool m_bInTakeDamageFlow; // 0x94	
	
	// Static fields:
	static CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x14
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0	
	GameTime_t m_fPrevSampleTime; // 0xc	
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

// Alignment: 0
// Size: 0x98
class CNavVolumeAll : public CNavVolumeVector
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x88
class CPulseCell_Inflow_GameEvent : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CBufferString m_EventName; // 0x70	
};

// Alignment: 0
// Size: 0xc
class CSimpleStopwatch : public CStopwatchBase
{
public:
	// No members available
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

// Alignment: 4
// Size: 0x20
struct thinkfunc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hFn; // 0x8	
	CUtlStringToken m_nContext; // 0x10	
	GameTick_t m_nNextThinkTick; // 0x14	
	GameTick_t m_nLastThinkTick; // 0x18	
};

// Alignment: 2
// Size: 0x1f0
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0	
	CRR_Response m_response; // 0x8	
};

// Alignment: 1
// Size: 0x10
class CStopwatch : public CStopwatchBase
{
public:
	float m_interval; // 0xc	
};

// Alignment: 5
// Size: 0x20
class CGameChoreoServices : public IChoreoServices
{
public:
	CHandle< CBaseAnimGraph > m_hOwner; // 0x8	
	CHandle< CScriptedSequence > m_hScriptedSequence; // 0xc	
	IChoreoServices::ScriptState_t m_scriptState; // 0x10	
	IChoreoServices::ChoreoState_t m_choreoState; // 0x14	
	GameTime_t m_flTimeStartedState; // 0x18	
};

// Alignment: 1
// Size: 0x70
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60	
};

// Alignment: 5
// Size: 0x240
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
	bool m_bResponseValid; // 0x238	
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
class CSkeletonAnimationController : public ISkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8	
};

// Alignment: 17
// Size: 0x60
class CGameScriptedMoveData
{
public:
	Vector m_vDest; // 0x0	
	Vector m_vSrc; // 0xc	
	QAngle m_angSrc; // 0x18	
	QAngle m_angDst; // 0x24	
	QAngle m_angCurrent; // 0x30	
	float m_flAngRate; // 0x3c	
	float m_flDuration; // 0x40	
	GameTime_t m_flStartTime; // 0x44	
	MoveType_t m_nPrevMoveType; // 0x48	
	bool m_bActive; // 0x49	
	bool m_bTeleportOnEnd; // 0x4a	
	bool m_bEndOnDestinationReached; // 0x4b	
	bool m_bIgnoreRotation; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	ScriptedMoveType_t m_nType; // 0x50	
	bool m_bSuccess; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	ForcedCrouchState_t m_nForcedCrouchState; // 0x58	
	bool m_bIgnoreCollisions; // 0x5c	
};

// Alignment: 0
// Size: 0x518
class CCSGOPlayerAnimGraphState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x518]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x40
class CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Alignment: 1
// Size: 0x88
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:
	float m_flRadiusInner; // 0x80	
};

// Alignment: 3
// Size: 0x18
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0	
	CUtlSymbolLarge m_iszValue; // 0x8	
	GameTime_t m_fExpirationTime; // 0x10	
};

// Alignment: 4
// Size: 0xb0
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	CTakeDamageResult result; // 0xa0	
	CHandle< CBaseEntity > hTarget; // 0xa8	
};

// Alignment: 3
// Size: 0x28
class CNetworkViewOffsetVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Alignment: 1
// Size: 0x78
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:
	bool m_bAllowMultipleScenes; // 0x70	
};

// Alignment: 0
// Size: 0x20
class CAnimEventListener : public CAnimEventListenerBase
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x8
class IVehicle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x10
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x8	
	float m_maxInterval; // 0xc	
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

// Alignment: 6
// Size: 0x40
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0	
	MoveType_t m_MoveType; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	GameTime_t m_flStartTime; // 0x8	
	Vector m_vecStartOrigin; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	Quaternion m_qStartRot; // 0x20	
	ParticleIndex_t m_nFXIndex; // 0x30	
};

// Alignment: 2
// Size: 0xa0
class CScriptUniformRandomStream
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hScriptScope; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8c]; // 0x10
public:
	int32_t m_nInitialSeed; // 0x9c	
	
	// Static fields:
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams(){return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x50
class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow
{
public:
	SoundEventStartType_t m_Type; // 0x48	
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
	GameTime_t m_flExpireTime; // 0x18	
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
// Size: 0x40
class CPlayerControllerComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
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

// Alignment: 3
// Size: 0x30
class CHintMessage
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	char* m_hintString; // 0x8	
	CUtlVector< char* > m_args; // 0x10	
	float m_duration; // 0x28	
};

// Alignment: 0
// Size: 0x1
class CPulseServerFuncs
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
class CRemapFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Alignment: 2
// Size: 0x10
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8	
	Class_T classType; // 0xc	
};

// Alignment: 0
// Size: 0x38
class CAnimEventQueueListener : public CAnimEventListenerBase
{
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	// No members available
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

// Alignment: 4
// Size: 0x60
struct CompositeMaterial_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyGroupName "Target Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_TargetKVs; // 0x8	
	// MPropertyGroupName "Pre-Generated Output Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_PreGenerationKVs; // 0x18	
	// MPropertyGroupName "Generated Composite Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_FinalKVs; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Generated Textures"
	CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // 0x40	
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

// Alignment: 4
// Size: 0x20
struct CompositeMaterialMatchFilter_t
{
public:
	// MPropertyFriendlyName "Match Type"
	CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_strMatchFilter; // 0x8	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMatchValue; // 0x10	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x18	
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

// Alignment: 43
// Size: 0x4c0
class CGlobalLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bSpotLight; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
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
	Color m_AmbientColor1; // 0x6e	
	Color m_AmbientColor2; // 0x72	
	Color m_AmbientColor3; // 0x76	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	float m_flSunDistance; // 0x7c	
	float m_flFOV; // 0x80	
	float m_flNearZ; // 0x84	
	float m_flFarZ; // 0x88	
	bool m_bEnableShadows; // 0x8c	
	bool m_bOldEnableShadows; // 0x8d	
	bool m_bBackgroundClearNotRequired; // 0x8e	
private:
	[[maybe_unused]] uint8_t __pad008f[0x1]; // 0x8f
public:
	float m_flCloudScale; // 0x90	
	float m_flCloud1Speed; // 0x94	
	float m_flCloud1Direction; // 0x98	
	float m_flCloud2Speed; // 0x9c	
	float m_flCloud2Direction; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0xc]; // 0xa4
public:
	float m_flAmbientScale1; // 0xb0	
	float m_flAmbientScale2; // 0xb4	
	float m_flGroundScale; // 0xb8	
	float m_flLightScale; // 0xbc	
	float m_flFoWDarkness; // 0xc0	
	bool m_bEnableSeparateSkyboxFog; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c5[0x3]; // 0xc5
public:
	Vector m_vFowColor; // 0xc8	
	Vector m_ViewOrigin; // 0xd4	
	QAngle m_ViewAngles; // 0xe0	
	float m_flViewFoV; // 0xec	
	Vector m_WorldPoints[8]; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad0150[0x358]; // 0x150
public:
	Vector2D m_vFogOffsetLayer0; // 0x4a8	
	Vector2D m_vFogOffsetLayer1; // 0x4b0	
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4b8	
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4bc	
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
	GameTime_t m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Alignment: 3
// Size: 0x38
class CCompositeMaterialEditorDoc
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CompositeMaterialEditorPoint_t > m_Points; // 0x10	
	KeyValues3 m_KVthumbnail; // 0x28	
};

// Alignment: 2
// Size: 0x20
class CComicBook
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyDescription "Cover image to use. Likely starts with file://{images}/comics/..."
	CPanoramaImageName m_CoverImage; // 0x8	
	// MPropertyDescription "Comic book xml file.  The xml that defines the layout and flow of the comic book."
	// MPropertyCustomFGDType
	CUtlString m_XmlFile; // 0x18	
};

// Alignment: 34
// Size: 0x270
struct CompositeMaterialInputLooseVariable_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttrStateCallback
	CUtlString m_strName; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Expose Externally"
	bool m_bExposeExternally; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Exposed Friendly Name"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyName; // 0x10	
	// MPropertyFriendlyName "Exposed Friendly Group"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyGroupName; // 0x18	
	// MPropertyFriendlyName "Exposed Fixed Range"
	// MPropertyAttrStateCallback
	bool m_bExposedVariableIsFixedRange; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Exposed SetVisible When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedVisibleWhenTrue; // 0x28	
	// MPropertyFriendlyName "Exposed SetHidden When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedHiddenWhenTrue; // 0x30	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Type"
	CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x38	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	bool m_bValueBoolean; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntX; // 0x40	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntY; // 0x44	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntZ; // 0x48	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntW; // 0x4c	
	// MPropertyFriendlyName "Specify Min/Max"
	// MPropertyAttrStateCallback
	bool m_bHasFloatBounds; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatX; // 0x54	
	// MPropertyFriendlyName "X Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Min; // 0x58	
	// MPropertyFriendlyName "X Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Max; // 0x5c	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatY; // 0x60	
	// MPropertyFriendlyName "Y Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Min; // 0x64	
	// MPropertyFriendlyName "Y Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Max; // 0x68	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatZ; // 0x6c	
	// MPropertyFriendlyName "Z Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Min; // 0x70	
	// MPropertyFriendlyName "Z Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Max; // 0x74	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatW; // 0x78	
	// MPropertyFriendlyName "W Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Min; // 0x7c	
	// MPropertyFriendlyName "W Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Max; // 0x80	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	Color m_cValueColor4; // 0x84	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strResourceMaterial; // 0x90	
	// MPropertyFriendlyName "Texture"
	// MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
	// MPropertyAttrStateCallback
	CUtlString m_strTextureContentAssetPath; // 0x170	
	// MPropertyHideField
	CResourceName m_strTextureRuntimeResourcePath; // 0x178	
	// MPropertyHideField
	CUtlString m_strTextureCompilationVtexTemplate; // 0x258	
	// MPropertyFriendlyName "Texture Type"
	// MPropertyAttrStateCallback
	CompositeMaterialInputTextureType_t m_nTextureType; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "String"
	// MPropertyAttrStateCallback
	CUtlString m_strString; // 0x268	
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

// Alignment: 5
// Size: 0x28
struct CompMatMutatorCondition_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Condition"
	CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0	
	// MPropertyFriendlyName "Container Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerName; // 0x8	
	// MPropertyFriendlyName "Variable Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarName; // 0x10	
	// MPropertyFriendlyName "Variable Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarValue; // 0x18	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x20	
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

// Alignment: 13
// Size: 0xb0
class C_IronSightController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIronSightAvailable; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flIronSightAmount; // 0x14	
	float m_flIronSightAmountGained; // 0x18	
	float m_flIronSightAmountBiased; // 0x1c	
	float m_flIronSightAmount_Interpolated; // 0x20	
	float m_flIronSightAmountGained_Interpolated; // 0x24	
	float m_flIronSightAmountBiased_Interpolated; // 0x28	
	float m_flInterpolationLastUpdated; // 0x2c	
	QAngle m_angDeltaAverage[8]; // 0x30	
	QAngle m_angViewLast; // 0x90	
	Vector2D m_vecDotCoords; // 0x9c	
	float m_flDotBlur; // 0xa4	
	float m_flSpeedRatio; // 0xa8	
};

// Alignment: 0
// Size: 0x30
class CPlayerSprayDecalRenderHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No members available
};

// Alignment: 8
// Size: 0x218
struct CompositeMaterialEditorPoint_t
{
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Target Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceName m_ModelName; // 0x0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation"
	int32_t m_nSequenceIndex; // 0xe0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation Cycle"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flCycle; // 0xe4	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Model Preview State"
	// MPropertyAttributeEditor "CompositeMaterialUserModelStateSetting"
	KeyValues3 m_KVModelStateChoices; // 0xe8	
	// MPropertyAutoRebuildOnChange
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Enable Child Model"
	bool m_bEnableChildModel; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Child Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	// MPropertyAttrStateCallback
	CResourceName m_ChildModelName; // 0x100	
	// MPropertyGroupName "Composite Material Assembly"
	// MPropertyFriendlyName "Composite Material Assembly Procedures"
	CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; // 0x1e0	
	// MPropertyFriendlyName "Generated Composite Materials"
	CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; // 0x1f8	
};

// Alignment: 2
// Size: 0x80
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x78	
};

// Alignment: 0
// Size: 0x8
class C_SingleplayRules : public C_GameRules
{
public:
	// No members available
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

// Alignment: 13
// Size: 0x2e0
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIsOn; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
public:
	bool m_bMuzzleFlashEnabled; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	float m_flMuzzleFlashBrightness; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	Quaternion m_quatMuzzleFlashOrientation; // 0x30	
	Vector m_vecMuzzleFlashOrigin; // 0x40	
	float m_flFov; // 0x4c	
	float m_flFarZ; // 0x50	
	float m_flLinearAtten; // 0x54	
	bool m_bCastsShadows; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flCurrentPullBackDist; // 0x5c	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68	
	char m_textureName[64]; // 0x70	
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

// Alignment: 28
// Size: 0x368
struct CompMatPropertyMutator_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Mutator Command"
	// MPropertyAttrStateCallback
	CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4	
	// MPropertyFriendlyName "Container to Init With"
	// MPropertyAttrStateCallback
	CUtlString m_strInitWith_Container; // 0x8	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerSrc; // 0x10	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerProperty; // 0x18	
	// MPropertyFriendlyName "Target Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_TargetProperty; // 0x20	
	// MPropertyFriendlyName "Seed Input Var"
	// MPropertyAttrStateCallback
	CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28	
	// MPropertyFriendlyName "Input Vars"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // 0x30	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50	
	// MPropertyFriendlyName "Find Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58	
	// MPropertyFriendlyName "Replace Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68	
	// MPropertyFriendlyName "Target Texture Param"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_TargetParam; // 0x2d8	
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; // 0x2e0	
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; // 0x2e8	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Scratch Target"
	// MPropertyAttrStateCallback
	bool m_bIsScratchTarget; // 0x2ec	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; // 0x2ed	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; // 0x2ee	
private:
	[[maybe_unused]] uint8_t __pad02ef[0x1]; // 0x2ef
public:
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x2f0	
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x308	
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; // 0x320	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; // 0x328	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; // 0x330	
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; // 0x338	
	// MPropertyFriendlyName "Text Color"
	// MPropertyAttrStateCallback
	Color m_colDrawText_Color; // 0x340	
private:
	[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
public:
	// MPropertyFriendlyName "Font"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_Font; // 0x348	
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x350	
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
// Size: 0x60
struct CompositeMaterialAssemblyProcedure_t
{
public:
	// MPropertyFriendlyName "Includes"
	// MPropertyAttributeEditor "AssetBrowse( vcompmat )"
	CUtlVector< CResourceName > m_vecCompMatIncludes; // 0x0	
	// MPropertyFriendlyName "Match Filters"
	CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // 0x18	
	// MPropertyFriendlyName "Composite Inputs"
	CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // 0x30	
	// MPropertyFriendlyName "Property Mutators"
	CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // 0x48	
};

// Alignment: 8
// Size: 0x138
struct CompositeMaterialInputContainer_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Input Container Source"
	// MPropertyAttrStateCallback
	CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4	
	// MPropertyFriendlyName "Specific Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strSpecificContainerMaterial; // 0x8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrName; // 0xe8	
	// MPropertyFriendlyName "Alias"
	// MPropertyAttrStateCallback
	CUtlString m_strAlias; // 0xf0	
	// MPropertyFriendlyName "Variables"
	// MPropertyAttrStateCallback
	CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; // 0xf8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrNameForVar; // 0x110	
	// MPropertyFriendlyName "Expose Externally"
	// MPropertyAttrStateCallback
	bool m_bExposeExternally; // 0x118	
};

// Alignment: 0
// Size: 0x8
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
struct GeneratedTextureHandle_t
{
public:
	// MPropertyFriendlyName "Generated Texture"
	// MPropertyAttributeEditor "CompositeMaterialTextureViewer"
	CUtlString m_strBitmapName; // 0x0	
};

// Alignment: 1
// Size: 0x10
class CAnimScriptBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsValid; // 0x8	
};

// Alignment: 1
// Size: 0x20
class EmptyTestScript : public CAnimScriptBase
{
public:
	CAnimScriptParam< float32 > m_hTest; // 0x10	
};

