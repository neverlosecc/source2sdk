#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: !GlobalTypes
// Class Count: 1193
// Enum Count: 216
///////////////////////////////////////////

// Aligment: 4
// Size: 3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Aligment: 1
// Size: 69
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0,
	FIELD_FLOAT32 = 1,
	FIELD_STRING = 2,
	FIELD_VECTOR = 3,
	FIELD_QUATERNION = 4,
	FIELD_INT32 = 5,
	FIELD_BOOLEAN = 6,
	FIELD_INT16 = 7,
	FIELD_CHARACTER = 8,
	FIELD_COLOR32 = 9,
	FIELD_EMBEDDED = 10,
	FIELD_CUSTOM = 11,
	FIELD_CLASSPTR = 12,
	FIELD_EHANDLE = 13,
	FIELD_POSITION_VECTOR = 14,
	FIELD_TIME = 15,
	FIELD_TICK = 16,
	FIELD_SOUNDNAME = 17,
	FIELD_INPUT = 18,
	FIELD_FUNCTION = 19,
	FIELD_VMATRIX = 20,
	FIELD_VMATRIX_WORLDSPACE = 21,
	FIELD_MATRIX3X4_WORLDSPACE = 22,
	FIELD_INTERVAL = 23,
	FIELD_UNUSED = 24,
	FIELD_VECTOR2D = 25,
	FIELD_INT64 = 26,
	FIELD_VECTOR4D = 27,
	FIELD_RESOURCE = 28,
	FIELD_TYPEUNKNOWN = 29,
	FIELD_CSTRING = 30,
	FIELD_HSCRIPT = 31,
	FIELD_VARIANT = 32,
	FIELD_UINT64 = 33,
	FIELD_FLOAT64 = 34,
	FIELD_POSITIVEINTEGER_OR_NULL = 35,
	FIELD_HSCRIPT_NEW_INSTANCE = 36,
	FIELD_UINT32 = 37,
	FIELD_UTLSTRINGTOKEN = 38,
	FIELD_QANGLE = 39,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
	FIELD_HMATERIAL = 41,
	FIELD_HMODEL = 42,
	FIELD_NETWORK_QUANTIZED_VECTOR = 43,
	FIELD_NETWORK_QUANTIZED_FLOAT = 44,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
	FIELD_QANGLE_WORLDSPACE = 46,
	FIELD_QUATERNION_WORLDSPACE = 47,
	FIELD_HSCRIPT_LIGHTBINDING = 48,
	FIELD_V8_VALUE = 49,
	FIELD_V8_OBJECT = 50,
	FIELD_V8_ARRAY = 51,
	FIELD_V8_CALLBACK_INFO = 52,
	FIELD_UTLSTRING = 53,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
	FIELD_HRENDERTEXTURE = 55,
	FIELD_HPARTICLESYSTEMDEFINITION = 56,
	FIELD_UINT8 = 57,
	FIELD_UINT16 = 58,
	FIELD_CTRANSFORM = 59,
	FIELD_CTRANSFORM_WORLDSPACE = 60,
	FIELD_HPOSTPROCESSING = 61,
	FIELD_MATRIX3X4 = 62,
	FIELD_SHIM = 63,
	FIELD_CMOTIONTRANSFORM = 64,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
	FIELD_ATTACHMENT_HANDLE = 66,
	FIELD_AMMO_INDEX = 67,
	FIELD_TYPECOUNT = 68,
};

// Aligment: 4
// Size: 3
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

// Aligment: 4
// Size: 5
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
	INPUT_LAYOUT_VARIATION_STREAM1_DRAWINDIRECT_ID = 0x3,
	INPUT_LAYOUT_VARIATION_MAX = 0x4,
};

// Aligment: 4
// Size: 8
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

// Aligment: 4
// Size: 9
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

// Aligment: 4
// Size: 45
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

// Aligment: 4
// Size: 9
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

// Aligment: 4
// Size: 3
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Aligment: 4
// Size: 4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 3
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Aligment: 4
// Size: 3
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

// Aligment: 4
// Size: 3
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Aligment: 4
// Size: 4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 2
enum class MoodType_t : uint32_t
{
	eMoodType_Head = 0x0,
	eMoodType_Body = 0x1,
};

// Aligment: 4
// Size: 2
enum class BinaryNodeChildOption : uint32_t
{
	Child1 = 0x0,
	Child2 = 0x1,
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
// Size: 4
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Aligment: 4
// Size: 2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
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
// Size: 4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
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
// Size: 3
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_BoneMask = 0x2,
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
enum class VPhysXJoint_t::Flags_t : uint32_t
{
	VPhysXJoint_t::JOINT_FLAGS_NONE = 0x0,
	VPhysXJoint_t::JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
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
enum class MeshTranslucencyType_t : uint32_t
{
	MESH_TRANSLUCENCY_FULLY_OPAQUE = 0x0,
	MESH_TRANSLUCENCY_PARTIALLY_ALPHA_BLENDED = 0x1,
	MESH_TRANSLUCENCY_FULLY_ALPHA_BLENDED = 0x2,
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
// Size: 4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Aligment: 4
// Size: 4
enum class StateTagBehavior : uint32_t
{
	STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
	STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
	STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
	STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
};

// Aligment: 4
// Size: 2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
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
// Size: 3
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
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
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
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
// Size: 3
enum class MorphLookupType_t : uint32_t
{
	LOOKUP_TYPE_TEXCOORD = 0x0,
	LOOKUP_TYPE_VERTEX_ID = 0x1,
	LOOKUP_TYPE_COUNT = 0x2,
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
// Size: 23
enum class ModelSkeletonData_t::BoneFlags_t : uint32_t
{
	ModelSkeletonData_t::FLAG_NO_BONE_FLAGS = 0x0,
	ModelSkeletonData_t::FLAG_BONEFLEXDRIVER = 0x4,
	ModelSkeletonData_t::FLAG_CLOTH = 0x8,
	ModelSkeletonData_t::FLAG_PHYSICS = 0x10,
	ModelSkeletonData_t::FLAG_ATTACHMENT = 0x20,
	ModelSkeletonData_t::FLAG_ANIMATION = 0x40,
	ModelSkeletonData_t::FLAG_MESH = 0x80,
	ModelSkeletonData_t::FLAG_HITBOX = 0x100,
	ModelSkeletonData_t::FLAG_RETARGET_SRC = 0x200,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_READ = 0x40000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_WRITE = 0x80000,
	ModelSkeletonData_t::FLAG_ALL_BONE_FLAGS = 0xfffff,
	ModelSkeletonData_t::BLEND_PREALIGNED = 0x100000,
	ModelSkeletonData_t::FLAG_RIGIDLENGTH = 0x200000,
	ModelSkeletonData_t::FLAG_PROCEDURAL = 0x400000,
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
// Size: 4
enum class VPhysXConstraintParams_t::EnumFlags0_t : uint32_t
{
	VPhysXConstraintParams_t::FLAG0_SHIFT_INTERPENETRATE = 0x0,
	VPhysXConstraintParams_t::FLAG0_SHIFT_CONSTRAIN = 0x1,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class MotionSamplingMethod : uint32_t
{
	Uniform = 0x0,
	AtFootCycleStart = 0x1,
};

// Aligment: 4
// Size: 2
enum class ChoiceBlendMethod : uint32_t
{
	SingleBlendTime = 0x0,
	PerChoiceBlendTimes = 0x1,
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
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
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
// Size: 2
enum class FinishedConditionOption : uint32_t
{
	FinishedConditionOption_OnFinished = 0x0,
	FinishedConditionOption_OnAlmostFinished = 0x1,
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
// Size: 4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
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
// Size: 4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Aligment: 4
// Size: 3
enum class MorphEncodingType_t : uint32_t
{
	ENCODING_TYPE_OBJECT_SPACE = 0x0,
	ENCODING_TYPE_TANGENT_SPACE = 0x1,
	ENCODING_TYPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class ComparisonValueType : uint32_t
{
	COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
	COMPARISONVALUETYPE_CONTROLVALUE = 0x1,
	COMPARISONVALUETYPE_PARAMETER = 0x2,
};

// Aligment: 4
// Size: 15
enum class PermModelInfo_t::FlagEnum : uint32_t
{
	PermModelInfo_t::FLAG_TRANSLUCENT = 0x1,
	PermModelInfo_t::FLAG_TRANSLUCENT_TWO_PASS = 0x2,
	PermModelInfo_t::FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
	PermModelInfo_t::FLAG_SOURCE1_IMPORT = 0x8,
	PermModelInfo_t::FLAG_MODEL_PART_CHILD = 0x10,
	PermModelInfo_t::FLAG_NAV_GEN_NONE = 0x20,
	PermModelInfo_t::FLAG_NAV_GEN_HULL = 0x40,
	PermModelInfo_t::FLAG_NO_FORCED_FADE = 0x800,
	PermModelInfo_t::FLAG_HAS_SKINNED_MESHES = 0x400,
	PermModelInfo_t::FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
	PermModelInfo_t::FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
	PermModelInfo_t::FLAG_NO_ANIM_EVENTS = 0x100000,
	PermModelInfo_t::FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
	PermModelInfo_t::FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	PermModelInfo_t::FLAG_MODEL_DOC = 0x800000,
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
// Size: 8
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

// Aligment: 4
// Size: 5
enum class VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t
{
	VPhysXBodyPart_t::FLAG_STATIC = 0x1,
	VPhysXBodyPart_t::FLAG_KINEMATIC = 0x2,
	VPhysXBodyPart_t::FLAG_JOINT = 0x4,
	VPhysXBodyPart_t::FLAG_MASS = 0x8,
	VPhysXBodyPart_t::FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Aligment: 4
// Size: 3
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
	ClientPredicted = 0x2,
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
// Size: 2
enum class StepPhase : uint32_t
{
	StepPhase_OnGround = 0x0,
	StepPhase_InAir = 0x1,
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
enum class VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t
{
	VPhysXAggregateData_t::FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	VPhysXAggregateData_t::FLAG_LEVEL_COLLISION = 0x10,
	VPhysXAggregateData_t::FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20,
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
enum class PathStatusOptions : uint32_t
{
	PathStatus_HasPath = 0x0,
	PathStatus_WaypointIsGoal = 0x1,
	PathStatus_GoalHasChanged = 0x2,
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
// Size: 5
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
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
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

// Aligment: 4
// Size: 2
enum class SosGroupType_t : uint32_t
{
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Aligment: 4
// Size: 3
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
	SOS_ACTION_TIME_LIMIT = 0x2,
};

// Aligment: 4
// Size: 2
enum class SosActionSortType_t : uint32_t
{
	SOS_SORTTYPE_HIGHEST = 0x0,
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Aligment: 4
// Size: 6
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Aligment: 4
// Size: 3
enum class SosActionStopType_t : uint32_t
{
	SOS_STOPTYPE_NONE = 0x0,
	SOS_STOPTYPE_TIME = 0x1,
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Aligment: 2
// Size: 8
enum class vmix_filter_type_t : uint16_t
{
	FILTER_UNKNOWN = 18446744073709551615,
	FILTER_LOWPASS = 0,
	FILTER_HIGHPASS = 1,
	FILTER_BANDPASS = 2,
	FILTER_NOTCH = 3,
	FILTER_PEAKING_EQ = 4,
	FILTER_LOW_SHELF = 5,
	FILTER_HIGH_SHELF = 6,
};

// Aligment: 2
// Size: 16
enum class vmix_processor_type_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0,
	VPROCESSOR_STEAMAUDIO_REVERB = 1,
	VPROCESSOR_RT_PITCH = 2,
	VPROCESSOR_STEAMAUDIO_HRTF = 3,
	VPROCESSOR_DYNAMICS = 4,
	VPROCESSOR_PRESETDSP = 5,
	VPROCESSOR_DELAY = 6,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 7,
	VPROCESSOR_FILTER = 8,
	VPROCESSOR_STEAMAUDIO_PATHING = 9,
	VPROCESSOR_EQ8 = 10,
	VPROCESSOR_ENVELOPE = 11,
	VPROCESSOR_VOCODER = 12,
	VPROCESSOR_CONVOLUTION = 13,
	VPROCESSOR_DYNAMICS_3BAND = 14,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 15,
};

// Aligment: 1
// Size: 4
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0,
	kDisableShadows_All = 1,
	kDisableShadows_Baked = 2,
	kDisableShadows_Realtime = 3,
};

// Aligment: 4
// Size: 15
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
};

// Aligment: 4
// Size: 2
enum class voxel_vis_compression_t : uint32_t
{
	VOXVIS_COMPRESS_RAW = 0x0,
	VOXVIS_COMPRESS_RLE = 0x1,
};

// Aligment: 4
// Size: 1
enum class EntityLumpFlags_t : uint32_t
{
	ENTITY_LUMP_NONE = 0x0,
};

// Aligment: 4
// Size: 2
enum class TextureRepetitionMode_t : uint32_t
{
	TEXTURE_REPETITION_PARTICLE = 0x0,
	TEXTURE_REPETITION_PATH = 0x1,
};

// Aligment: 4
// Size: 3
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	PARTICLE_LIGHT_TYPE_FX = 0x2,
};

// Aligment: 4
// Size: 2
enum class SpriteCardShaderType_t : uint32_t
{
	SPRITECARD_SHADER_BASE = 0x0,
	SPRITECARD_SHADER_CUSTOM = 0x1,
};

// Aligment: 4
// Size: 6
enum class ParticleImpulseType_t : uint32_t
{
	IMPULSE_TYPE_NONE = 0x0,
	IMPULSE_TYPE_GENERIC = 0x1,
	IMPULSE_TYPE_ROPE = 0x2,
	IMPULSE_TYPE_EXPLOSION = 0x4,
	IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
	IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
};

// Aligment: 4
// Size: 3
enum class ParticleEndcapMode_t : uint32_t
{
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

// Aligment: 4
// Size: 2
enum class ParticleSortingChoiceList_t : uint32_t
{
	PARTICLE_SORTING_NEAREST = 0x0,
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

// Aligment: 4
// Size: 5
enum class ParticleCollisionMode_t : uint32_t
{
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	COLLISION_MODE_DISABLED = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 6
enum class ParticleOrientationChoiceList_t : uint32_t
{
	PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
	PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
	PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
	PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
	PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
	PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
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
// Size: 15
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

// Aligment: 4
// Size: 4
enum class ParticleAlphaReferenceType_t : uint32_t
{
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Aligment: 4
// Size: 7
enum class SpriteCardTextureType_t : uint32_t
{
	SPRITECARD_TEXTURE_DIFFUSE = 0x0,
	SPRITECARD_TEXTURE_ZOOM = 0x1,
	SPRITECARD_TEXTURE_UVDISTORTION = 0x2,
	SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x3,
	SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x4,
	SPRITECARD_TEXTURE_NORMALMAP = 0x5,
	SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
};

// Aligment: 4
// Size: 4
enum class ParticleDetailLevel_t : uint32_t
{
	PARTICLEDETAIL_LOW = 0x0,
	PARTICLEDETAIL_MEDIUM = 0x1,
	PARTICLEDETAIL_HIGH = 0x2,
	PARTICLEDETAIL_ULTRA = 0x3,
};

// Aligment: 4
// Size: 3
enum class ParticleFalloffFunction_t : uint32_t
{
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	PARTICLE_FALLOFF_LINEAR = 0x1,
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
};

// Aligment: 4
// Size: 12
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

// Aligment: 4
// Size: 4
enum class PFNoiseModifier_t : uint32_t
{
	PF_NOISE_MODIFIER_NONE = 0x0,
	PF_NOISE_MODIFIER_LINES = 0x1,
	PF_NOISE_MODIFIER_CLUMPS = 0x2,
	PF_NOISE_MODIFIER_RINGS = 0x3,
};

// Aligment: 4
// Size: 4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 4
enum class ParticleFloatInputMode_t : uint32_t
{
	PF_INPUT_MODE_INVALID = 0xffffffffffffffff,
	PF_INPUT_MODE_CLAMPED = 0x0,
	PF_INPUT_MODE_LOOPED = 0x1,
	PF_INPUT_MODE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class ParticleSelection_t : uint32_t
{
	PARTICLE_SELECTION_FIRST = 0x0,
	PARTICLE_SELECTION_LAST = 0x1,
	PARTICLE_SELECTION_NUMBER = 0x2,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 5
enum class ParticleTopology_t : uint32_t
{
	PARTICLE_TOPOLOGY_POINTS = 0x0,
	PARTICLE_TOPOLOGY_LINES = 0x1,
	PARTICLE_TOPOLOGY_TRIS = 0x2,
	PARTICLE_TOPOLOGY_QUADS = 0x3,
	PARTICLE_TOPOLOGY_CUBES = 0x4,
};

// Aligment: 4
// Size: 3
enum class AnimationType_t : uint32_t
{
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

// Aligment: 4
// Size: 2
enum class HitboxLerpType_t : uint32_t
{
	HITBOX_LERP_LIFETIME = 0x0,
	HITBOX_LERP_CONSTANT = 0x1,
};

// Aligment: 4
// Size: 3
enum class ParticleRotationLockType_t : uint32_t
{
	PARTICLE_ROTATION_LOCK_NONE = 0x0,
	PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
	PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
};

// Aligment: 4
// Size: 9
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

// Aligment: 4
// Size: 11
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

// Aligment: 4
// Size: 3
enum class ParticleDirectionNoiseType_t : uint32_t
{
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	PARTICLE_DIR_NOISE_CURL = 0x1,
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
};

// Aligment: 4
// Size: 4
enum class PFNoiseType_t : uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
};

// Aligment: 4
// Size: 2
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	LIGHT_STYLE_OLD = 0x0,
	LIGHT_STYLE_NEW = 0x1,
};

// Aligment: 4
// Size: 2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
};

// Aligment: 4
// Size: 14
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

// Aligment: 4
// Size: 8
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

// Aligment: 4
// Size: 4
enum class DetailCombo_t : uint32_t
{
	DETAIL_COMBO_OFF = 0x0,
	DETAIL_COMBO_ADD = 0x1,
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_COMBO_MOD2X = 0x3,
};

// Aligment: 4
// Size: 13
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

// Aligment: 4
// Size: 5
enum class ParticleColorBlendMode_t : uint32_t
{
	PARTICLEBLEND_DEFAULT = 0x0,
	PARTICLEBLEND_OVERLAY = 0x1,
	PARTICLEBLEND_DARKEN = 0x2,
	PARTICLEBLEND_LIGHTEN = 0x3,
	PARTICLEBLEND_MULTIPLY = 0x4,
};

// Aligment: 4
// Size: 6
enum class PFNoiseTurbulence_t : uint32_t
{
	PF_NOISE_TURB_NONE = 0x0,
	PF_NOISE_TURB_HIGHLIGHT = 0x1,
	PF_NOISE_TURB_FEEDBACK = 0x2,
	PF_NOISE_TURB_LOOPY = 0x3,
	PF_NOISE_TURB_CONTRAST = 0x4,
	PF_NOISE_TURB_ALTERNATE = 0x5,
};

// Aligment: 4
// Size: 6
enum class ParticlePostProcessPriorityGroup_t : uint32_t
{
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
	PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
};

// Aligment: 4
// Size: 18
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

// Aligment: 4
// Size: 3
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Aligment: 4
// Size: 4
enum class ParticleVRHandChoiceList_t : uint32_t
{
	PARTICLE_VRHAND_LEFT = 0x0,
	PARTICLE_VRHAND_RIGHT = 0x1,
	PARTICLE_VRHAND_CP = 0x2,
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 5
enum class ParticleFloatBiasType_t : uint32_t
{
	PF_BIAS_TYPE_INVALID = 0xffffffffffffffff,
	PF_BIAS_TYPE_STANDARD = 0x0,
	PF_BIAS_TYPE_GAIN = 0x1,
	PF_BIAS_TYPE_EXPONENTIAL = 0x2,
	PF_BIAS_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 6
enum class ParticleSetMethod_t : uint32_t
{
	PARTICLE_SET_REPLACE_VALUE = 0x0,
	PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
	PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
	PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
	PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
	PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
};

// Aligment: 1
// Size: 14
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0,
	MOVETYPE_ISOMETRIC = 1,
	MOVETYPE_WALK = 2,
	MOVETYPE_STEP = 3,
	MOVETYPE_FLY = 4,
	MOVETYPE_FLYGRAVITY = 5,
	MOVETYPE_VPHYSICS = 6,
	MOVETYPE_PUSH = 7,
	MOVETYPE_NOCLIP = 8,
	MOVETYPE_LADDER = 9,
	MOVETYPE_OBSERVER = 10,
	MOVETYPE_CUSTOM = 11,
	MOVETYPE_LAST = 11,
	MOVETYPE_MAX_BITS = 4,
};

// Aligment: 4
// Size: 10
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

// Aligment: 4
// Size: 2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
};

// Aligment: 4
// Size: 12
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
	WEAPON_SOUND_NUM_TYPES = 0xb,
};

// Aligment: 4
// Size: 2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Aligment: 4
// Size: 2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
};

// Aligment: 4
// Size: 3
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Aligment: 4
// Size: 6
enum class ShakeCommand_t : uint32_t
{
	SHAKE_START = 0x0,
	SHAKE_STOP = 0x1,
	SHAKE_AMPLITUDE = 0x2,
	SHAKE_FREQUENCY = 0x3,
	SHAKE_START_RUMBLEONLY = 0x4,
	SHAKE_START_NORUMBLE = 0x5,
};

// Aligment: 4
// Size: 3
enum class PointWorldTextJustifyHorizontal_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

// Aligment: 4
// Size: 3
enum class WeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Aligment: 4
// Size: 3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Aligment: 4
// Size: 4
enum class ValueRemapperOutputType_t : uint32_t
{
	OutputType_AnimationCycle = 0x0,
	OutputType_RotationX = 0x1,
	OutputType_RotationY = 0x2,
	OutputType_RotationZ = 0x3,
};

// Aligment: 1
// Size: 6
enum class MoveCollide_t : uint8_t
{
	MOVECOLLIDE_DEFAULT = 0,
	MOVECOLLIDE_FLY_BOUNCE = 1,
	MOVECOLLIDE_FLY_CUSTOM = 2,
	MOVECOLLIDE_FLY_SLIDE = 3,
	MOVECOLLIDE_COUNT = 4,
	MOVECOLLIDE_MAX_BITS = 3,
};

// Aligment: 4
// Size: 2
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Aligment: 4
// Size: 3
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Aligment: 4
// Size: 27
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
	DMG_PREVENT_PHYSICS_FORCE = 0x800,
	DMG_NEVERGIB = 0x1000,
	DMG_ALWAYSGIB = 0x2000,
	DMG_DROWN = 0x4000,
	DMG_POISON = 0x8000,
	DMG_RADIATION = 0x10000,
	DMG_DROWNRECOVER = 0x20000,
	DMG_ACID = 0x40000,
	DMG_REMOVENORAGDOLL = 0x80000,
	DMG_PHYSGUN = 0x100000,
	DMG_DISSOLVE = 0x200000,
	DMG_BLAST_SURFACE = 0x400000,
	DMG_DIRECT = 0x800000,
	DMG_BUCKSHOT = 0x1000000,
	DMG_LASTGENERICFLAG = 0x1000000,
};

// Aligment: 1
// Size: 9
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0,
	SOLID_BSP = 1,
	SOLID_BBOX = 2,
	SOLID_OBB = 3,
	SOLID_SPHERE = 4,
	SOLID_POINT = 5,
	SOLID_VPHYSICS = 6,
	SOLID_CAPSULE = 7,
	SOLID_LAST = 8,
};

// Aligment: 4
// Size: 4
enum class PetLevelup_Rule_t : uint32_t
{
	PETLEVELFROM_NOTHING = 0x0,
	PETLEVELFROM_KILLEATER = 0x1,
	PETLEVELFROM_COMPENDIUM_LEVEL = 0x2,
	NUM_PETLEVELUPRULES = 0x3,
};

// Aligment: 4
// Size: 1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Aligment: 4
// Size: 3
enum class SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t : uint32_t
{
	SimpleConstraintSoundProfile::kMIN_THRESHOLD = 0x0,
	SimpleConstraintSoundProfile::kMIN_FULL = 0x1,
	SimpleConstraintSoundProfile::kHIGHWATER = 0x2,
};

// Aligment: 4
// Size: 3
enum class PlayerConnectedState : uint32_t
{
	PlayerConnected = 0x0,
	PlayerDisconnecting = 0x1,
	PlayerDisconnected = 0x2,
};

// Aligment: 4
// Size: 5
enum class DoorState_t : uint32_t
{
	DOOR_STATE_CLOSED = 0x0,
	DOOR_STATE_OPENING = 0x1,
	DOOR_STATE_OPEN = 0x2,
	DOOR_STATE_CLOSING = 0x3,
	DOOR_STATE_AJAR = 0x4,
};

// Aligment: 4
// Size: 6
enum class LatchDirtyPermission_t : uint32_t
{
	LATCH_DIRTY_DISALLOW = 0x0,
	LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
	LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
	LATCH_DIRTY_PREDICTION = 0x3,
	LATCH_DIRTY_FRAMESIMULATE = 0x4,
	LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
};

// Aligment: 4
// Size: 27
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

// Aligment: 4
// Size: 16
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

// Aligment: 1
// Size: 20
enum class RenderFx_t : uint8_t
{
	kRenderFxNone = 0,
	kRenderFxPulseSlow = 1,
	kRenderFxPulseFast = 2,
	kRenderFxPulseSlowWide = 3,
	kRenderFxPulseFastWide = 4,
	kRenderFxFadeSlow = 5,
	kRenderFxFadeFast = 6,
	kRenderFxSolidSlow = 7,
	kRenderFxSolidFast = 8,
	kRenderFxStrobeSlow = 9,
	kRenderFxStrobeFast = 10,
	kRenderFxStrobeFaster = 11,
	kRenderFxFlickerSlow = 12,
	kRenderFxFlickerFast = 13,
	kRenderFxNoDissipation = 14,
	kRenderFxFadeOut = 15,
	kRenderFxFadeIn = 16,
	kRenderFxPulseFastWider = 17,
	kRenderFxGlowShell = 18,
	kRenderFxMax = 19,
};

// Aligment: 4
// Size: 2
enum class CRR_Response::ResponseEnum_t : uint32_t
{
	CRR_Response::MAX_RESPONSE_NAME = 0xc0,
	CRR_Response::MAX_RULE_NAME = 0x80,
};

// Aligment: 4
// Size: 5
enum class NavDirType : uint32_t
{
	NORTH = 0x0,
	EAST = 0x1,
	SOUTH = 0x2,
	WEST = 0x3,
	NUM_DIRECTIONS = 0x4,
};

// Aligment: 4
// Size: 2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
};

// Aligment: 4
// Size: 4
enum class SpeechPriorityType : uint32_t
{
	SPEECH_PRIORITY_LOW = 0x0,
	SPEECH_PRIORITY_NORMAL = 0x1,
	SPEECH_PRIORITY_MANUAL = 0x2,
	SPEECH_PRIORITY_UNINTERRUPTABLE = 0x3,
};

// Aligment: 4
// Size: 46
enum class eEconItemOrigin : uint32_t
{
	kEconItemOrigin_Invalid = 0xffffffffffffffff,
	kEconItemOrigin_Drop = 0x0,
	kEconItemOrigin_Achievement = 0x1,
	kEconItemOrigin_Purchased = 0x2,
	kEconItemOrigin_Traded = 0x3,
	kEconItemOrigin_Crafted = 0x4,
	kEconItemOrigin_StorePromotion = 0x5,
	kEconItemOrigin_Gifted = 0x6,
	kEconItemOrigin_SupportGranted = 0x7,
	kEconItemOrigin_FoundInCrate = 0x8,
	kEconItemOrigin_Earned = 0x9,
	kEconItemOrigin_ThirdPartyPromotion = 0xa,
	kEconItemOrigin_GiftWrapped = 0xb,
	kEconItemOrigin_HalloweenDrop = 0xc,
	kEconItemOrigin_PackageItem = 0xd,
	kEconItemOrigin_Foreign = 0xe,
	kEconItemOrigin_CDKey = 0xf,
	kEconItemOrigin_CollectionReward = 0x10,
	kEconItemOrigin_PreviewItem = 0x11,
	kEconItemOrigin_SteamWorkshopContribution = 0x12,
	kEconItemOrigin_PeriodicScoreReward = 0x13,
	kEconItemOrigin_Recycling = 0x14,
	kEconItemOrigin_TournamentDrop = 0x15,
	kEconItemOrigin_PassportReward = 0x16,
	kEconItemOrigin_TutorialDrop = 0x17,
	kEconItemOrigin_RecipeOutput = 0x18,
	kEconItemOrigin_GemExtract = 0x19,
	kEconItemOrigin_EventPointReward = 0x1a,
	kEconItemOrigin_ItemRedemption = 0x1b,
	kEconItemOrigin_FantasyTicketRefund = 0x1c,
	kEconItemOrigin_VictoryPredictionReward = 0x1d,
	kEconItemOrigin_AssassinEventReward = 0x1e,
	kEconItemOrigin_CompendiumReward = 0x1f,
	kEconItemOrigin_CompendiumDrop = 0x20,
	kEconItemOrigin_MysteryItem = 0x21,
	kEconItemOrigin_UnpackedFromBundle = 0x22,
	kEconItemOrigin_WonFromWeeklyGame = 0x23,
	kEconItemOrigin_SeasonalItemGrant = 0x24,
	kEconItemOrigin_PackOpening = 0x25,
	kEconItemOrigin_InitialGrant = 0x26,
	kEconItemOrigin_MarketPurchase = 0x27,
	kEconItemOrigin_MarketRefunded = 0x28,
	kEconItemOrigin_LimitedDraft = 0x29,
	kEconItemOrigin_GauntletReward = 0x2a,
	kEconItemOrigin_CompendiumGift = 0x2b,
	kEconItemOrigin_Max = 0x2c,
};

// Aligment: 4
// Size: 2
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Aligment: 4
// Size: 30
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

// Aligment: 4
// Size: 4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	SUBCLASS_SCOPE_MISC = 0x0,
	SUBCLASS_SCOPE_PRECIPITATION = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 6
enum class HierarchyType_t : uint32_t
{
	HIERARCHY_NONE = 0x0,
	HIERARCHY_BONE_MERGE = 0x1,
	HIERARCHY_ATTACHMENT = 0x2,
	HIERARCHY_ABSORIGIN = 0x3,
	HIERARCHY_BONE = 0x4,
	HIERARCHY_TYPE_COUNT = 0x5,
};

// Aligment: 4
// Size: 2
enum class AmmoFlags_t : uint32_t
{
	AMMO_FORCE_DROP_IF_CARRIED = 0x1,
	AMMO_FLAG_MAX = 0x1,
};

// Aligment: 4
// Size: 2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Aligment: 4
// Size: 5
enum class EntityDisolveType_t : uint32_t
{
	ENTITY_DISSOLVE_INVALID = 0xffffffffffffffff,
	ENTITY_DISSOLVE_NORMAL = 0x0,
	ENTITY_DISSOLVE_ELECTRICAL = 0x1,
	ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
	ENTITY_DISSOLVE_CORE = 0x3,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Aligment: 4
// Size: 4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
};

// Aligment: 4
// Size: 5
enum class SpawnDebugRestrictionOverrideState_t : uint32_t
{
	SPAWN_DEBUG_RESTRICT_NONE = 0x0,
	SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
	SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
};

// Aligment: 4
// Size: 11
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

// Aligment: 4
// Size: 4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Aligment: 4
// Size: 16
enum class NavAttributeEnum : uint32_t
{
	NAV_MESH_AVOID = 0x80,
	NAV_MESH_STAIRS = 0x1000,
	NAV_MESH_NON_ZUP = 0x8000,
	NAV_MESH_CROUCH = 0x1,
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
};

// Aligment: 4
// Size: 5
enum class WeaponProficiency_t : uint32_t
{
	WEAPON_PROFICIENCY_POOR = 0x0,
	WEAPON_PROFICIENCY_AVERAGE = 0x1,
	WEAPON_PROFICIENCY_GOOD = 0x2,
	WEAPON_PROFICIENCY_VERY_GOOD = 0x3,
	WEAPON_PROFICIENCY_PERFECT = 0x4,
};

// Aligment: 4
// Size: 8
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

// Aligment: 4
// Size: 4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

// Aligment: 1
// Size: 13
enum class RenderMode_t : uint8_t
{
	kRenderNormal = 0,
	kRenderTransColor = 1,
	kRenderTransTexture = 2,
	kRenderGlow = 3,
	kRenderTransAlpha = 4,
	kRenderTransAdd = 5,
	kRenderEnvironmental = 6,
	kRenderTransAddFrameBlend = 7,
	kRenderTransAlphaAdd = 8,
	kRenderWorldGlow = 9,
	kRenderNone = 10,
	kRenderDevVisualizer = 11,
	kRenderModeCount = 12,
};

// Aligment: 4
// Size: 3
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Aligment: 4
// Size: 5
enum class Touch_t : uint32_t
{
	touch_none = 0x0,
	touch_player_only = 0x1,
	touch_npc_only = 0x2,
	touch_player_or_npc = 0x3,
	touch_player_or_npc_or_physicsprop = 0x4,
};

// Aligment: 4
// Size: 3
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
};

// Flags: MEnumFlagsWithOverlappingBits
// Aligment: 4
// Size: 45
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
	AE_SV_DUSTTRAIL = 0x10,
	AE_FOOTSTEP = 0x11,
	AE_CL_FOOTSTEP_LEFT = 0x12,
	AE_CL_FOOTSTEP_RIGHT = 0x13,
	AE_CL_MFOOTSTEP_LEFT = 0x14,
	AE_CL_MFOOTSTEP_RIGHT = 0x15,
	AE_CL_MFOOTSTEP_LEFT_LOUD = 0x16,
	AE_CL_MFOOTSTEP_RIGHT_LOUD = 0x17,
	AE_RAGDOLL = 0x18,
	AE_CL_ENABLE_BODYGROUP = 0x19,
	AE_CL_DISABLE_BODYGROUP = 0x1a,
	AE_CL_BODYGROUP_SET_VALUE = 0x1b,
	AE_SV_BODYGROUP_SET_VALUE = 0x1c,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x1d,
	AE_WPN_PRIMARYATTACK = 0x1e,
	AE_WPN_PLAYWPNSOUND = 0x1f,
	AE_WPN_SECONDARYATTACK = 0x20,
	AE_CL_SPEECH = 0x21,
	AE_FIRE_INPUT = 0x22,
	AE_IK_SET_LOCK_ROTATION_ALPHA = 0x23,
	AE_IK_ALLOW_PLANE_TILT_NORMAL_UPDATES = 0x24,
	AE_IK_SET_MASTER_BLEND_AMOUNT = 0x25,
	AE_IK_SET_CHAIN_BLEND_AMOUNT = 0x26,
	AE_CL_CLOTH_ATTR = 0x27,
	AE_CL_CLOTH_GROUND_OFFSET = 0x28,
	AE_CL_CLOTH_STIFFEN = 0x29,
	AE_CL_CLOTH_EFFECT = 0x2a,
	AE_CL_CREATE_ANIM_SCOPE_PROP = 0x2b,
	AE_HAPTIC_PULSE = 0x2c,
};

// Aligment: 4
// Size: 17
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

// Aligment: 4
// Size: 2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Aligment: 4
// Size: 5
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	CLASS_BULLSEYE = 0x3,
	NUM_CLASSIFY_CLASSES = 0x4,
};

// Aligment: 4
// Size: 23
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

// Aligment: 4
// Size: 12
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

// Aligment: 1
// Size: 3
enum class DamageOptions_t : uint8_t
{
	DAMAGE_NO = 0,
	DAMAGE_EVENTS_ONLY = 1,
	DAMAGE_YES = 2,
};

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 7
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

// Aligment: 4
// Size: 1028
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

// Aligment: 4
// Size: 5
enum class LifeState_t : uint32_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
};

// Aligment: 1
// Size: 9
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0,
	USE_BEST_COLLISION_BOUNDS = 1,
	USE_HITBOXES = 2,
	USE_SPECIFIED_BOUNDS = 3,
	USE_GAME_CODE = 4,
	USE_ROTATION_EXPANDED_BOUNDS = 5,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 6,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 7,
	SURROUNDING_TYPE_BIT_COUNT = 3,
};

// Aligment: 1
// Size: 9
enum class ItemFlagTypes_t : uint8_t
{
	ITEM_FLAG_NONE = 0,
	ITEM_FLAG_SELECTONEMPTY = 1,
	ITEM_FLAG_NOAUTORELOAD = 2,
	ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
	ITEM_FLAG_LIMITINWORLD = 8,
	ITEM_FLAG_EXHAUSTIBLE = 16,
	ITEM_FLAG_DOHITLOCATIONDMG = 32,
	ITEM_FLAG_NOAMMOPICKUPS = 64,
	ITEM_FLAG_NOITEMPICKUP = 128,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Aligment: 4
// Size: 3
enum class EconEntityParticleDisableMode_t : uint32_t
{
	ECON_ENTITY_PARTICLES_ENABLED = 0x0,
	ECON_ENTITY_PARTICLES_DISABLED = 0x1,
	ECON_ENTITY_PARTICLES_DISABLED_BUT_PLAY_ENDCAPS_TO_STOP = 0x2,
};

// Aligment: 4
// Size: 3
enum class Explosions : uint32_t
{
	expRandom = 0x0,
	expDirected = 0x1,
	expUsePrecise = 0x2,
};

// Aligment: 4
// Size: 4
enum class StanceType_t : uint32_t
{
	STANCE_CURRENT = 0xffffffffffffffff,
	STANCE_DEFAULT = 0x0,
	STANCE_CROUCHING = 0x1,
	NUM_STANCES = 0x2,
};

// Aligment: 4
// Size: 5
enum class TimelineCompression_t : uint32_t
{
	TIMELINE_COMPRESSION_SUM = 0x0,
	TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
	TIMELINE_COMPRESSION_AVERAGE = 0x2,
	TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
	TIMELINE_COMPRESSION_TOTAL = 0x4,
};

// Aligment: 4
// Size: 3
enum class LessonPanelLayoutFileTypes_t : uint32_t
{
	LAYOUT_HAND_DEFAULT = 0x0,
	LAYOUT_WORLD_DEFAULT = 0x1,
	LAYOUT_CUSTOM = 0x2,
};

// Aligment: 4
// Size: 2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Aligment: 4
// Size: 15
enum class EGameZone : uint32_t
{
	DCG_ZONE_INVALID = 0x0,
	DCG_ZONE_GRAVEYARD = 0x1,
	DCG_ZONE_DECK = 0x2,
	DCG_ZONE_HAND = 0x3,
	DCG_ZONE_OVERDRAW = 0x4,
	DCG_ZONE_FOUNTAIN = 0x5,
	DCG_ZONE_DEPLOYMENT = 0x6,
	DCG_ZONE_COMBAT = 0x7,
	DCG_ZONE_SPELL_STACK = 0x8,
	DCG_ZONE_SHOP = 0x9,
	DCG_ZONE_EFFECTS = 0xa,
	DCG_ZONE_IMPROVEMENTS = 0xb,
	DCG_ZONE_LIFEBOAT = 0xc,
	DCG_ZONE_EVENTRECORDS = 0xd,
	DCG_ZONE_COUNT = 0xe,
};

// Aligment: 4
// Size: 679
enum class GameActivity_t : uint32_t
{
	ACT_DCG_CARD_IDLE = 0x5dc,
	ACT_DCG_CARD_IDLE_FACEDOWN = 0x5dd,
	ACT_DCG_CARD_FLIP_BACK_TO_FRONT = 0x5de,
	ACT_DCG_CARD_FLIP_FRONT_TO_BACK = 0x5df,
	ACT_DCG_CARD_SHUFFLE = 0x5e0,
	ACT_DCG_CARD_SPIN = 0x5e1,
	ACT_DCG_CARD_SPIN_TO_BACK = 0x5e2,
	ACT_DCG_CARD_FLOP_FLIP_FACEUP = 0x5e3,
	ACT_DCG_CARD_COMBAT_COLLAPSE_LEFT = 0x5e4,
	ACT_DCG_CARD_COMBAT_COLLAPSE_RIGHT = 0x5e5,
	ACT_DCG_CARD_COMBAT_LOCAL_IDLE = 0x5e6,
	ACT_DCG_CARD_COMBAT_LOCAL_CLASH = 0x5e7,
	ACT_DCG_CARD_COMBAT_LOCAL_DEPLOY = 0x5e8,
	ACT_DCG_CARD_COMBAT_LOCAL_DEPLOY_MED = 0x5e9,
	ACT_DCG_CARD_COMBAT_LOCAL_RETURN = 0x5ea,
	ACT_DCG_CARD_COMBAT_LOCAL_STUNNED_CLASH = 0x5eb,
	ACT_DCG_CARD_COMBAT_LOCAL_STUNNED_RETURN = 0x5ec,
	ACT_DCG_CARD_COMBAT_LOCAL_STUNNED_RETURN_DAMAGED = 0x5ed,
	ACT_DCG_CARD_COMBAT_LOCAL_IMMUNE_CLASH = 0x5ee,
	ACT_DCG_CARD_COMBAT_LOCAL_IMMUNE_RETURN = 0x5ef,
	ACT_DCG_CARD_COMBAT_LOCAL_IMMUNE_RETURN_DAMAGED = 0x5f0,
	ACT_DCG_CARD_COMBAT_LOCAL_TOWER_RETURN = 0x5f1,
	ACT_DCG_CARD_COMBAT_LOCAL_TOWER_CLASH = 0x5f2,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_TO_FOUNTAIN = 0x5f3,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_CREEP = 0x5f4,
	ACT_DCG_CARD_COMBAT_OPPONENT_IDLE = 0x5f5,
	ACT_DCG_CARD_COMBAT_OPPONENT_CLASH = 0x5f6,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEPLOY = 0x5f7,
	ACT_DCG_CARD_COMBAT_OPPONENT_RETURN = 0x5f8,
	ACT_DCG_CARD_COMBAT_OPPONENT_STUNNED_CLASH = 0x5f9,
	ACT_DCG_CARD_COMBAT_OPPONENT_STUNNED_RETURN = 0x5fa,
	ACT_DCG_CARD_COMBAT_OPPONENT_STUNNED_RETURN_DAMAGED = 0x5fb,
	ACT_DCG_CARD_COMBAT_OPPONENT_IMMUNE_CLASH = 0x5fc,
	ACT_DCG_CARD_COMBAT_OPPONENT_IMMUNE_RETURN = 0x5fd,
	ACT_DCG_CARD_COMBAT_OPPONENT_IMMUNE_RETURN_DAMAGED = 0x5fe,
	ACT_DCG_CARD_COMBAT_OPPONENT_TOWER_CLASH = 0x5ff,
	ACT_DCG_CARD_COMBAT_OPPONENT_TOWER_RETURN = 0x600,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_TO_FOUNTAIN = 0x601,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_CREEP = 0x602,
	ACT_DCG_CARD_COMBAT_LOCAL_FLANK_LEFT_CLASH = 0x603,
	ACT_DCG_CARD_COMBAT_LOCAL_FLANK_RIGHT_CLASH = 0x604,
	ACT_DCG_CARD_COMBAT_LOCAL_FLANK_LEFT_RETURN = 0x605,
	ACT_DCG_CARD_COMBAT_LOCAL_FLANK_RIGHT_RETURN = 0x606,
	ACT_DCG_CARD_COMBAT_OPPONENT_FLANK_LEFT_CLASH = 0x607,
	ACT_DCG_CARD_COMBAT_OPPONENT_FLANK_RIGHT_CLASH = 0x608,
	ACT_DCG_CARD_COMBAT_OPPONENT_FLANK_LEFT_RETURN = 0x609,
	ACT_DCG_CARD_COMBAT_OPPONENT_FLANK_RIGHT_RETURN = 0x60a,
	ACT_DCG_CARD_SHARED_CREEP_DEPLOY = 0x60b,
	ACT_DCG_CARD_SHARED_LIFT_IDLE = 0x60c,
	ACT_DCG_CARD_SHARED_LIFT_INTRO = 0x60d,
	ACT_DCG_CARD_SHARED_LIFT_OUTRO = 0x60e,
	ACT_DCG_CARD_SHARED_DEPLOY_IMPACT = 0x60f,
	ACT_DCG_CARD_SHARED_DEPLOY_IMPACT_MED = 0x610,
	ACT_DCG_CARD_SHARED_RATTLE_HEAVY = 0x611,
	ACT_DCG_CARD_HAND_POP_UP = 0x612,
	ACT_DCG_CARD_HAND_POP_UP_IDLE = 0x613,
	ACT_DCG_CARD_HAND_POP_DOWN = 0x614,
	ACT_DCG_CARD_OPPONENT_HAND_POP_DOWN = 0x615,
	ACT_DCG_CARD_DRAG_HOVER_IDLE = 0x616,
	ACT_DCG_CARD_SWAP_NEIGHBOR_LEFT = 0x617,
	ACT_DCG_CARD_SWAP_NEIGHBOR_RIGHT = 0x618,
	ACT_DCG_CARD_HIGHLIGHT_POP_UP = 0x619,
	ACT_DCG_CARD_HIGHLIGHT_POP_UP_IDLE = 0x61a,
	ACT_DCG_CARD_HIGHLIGHT_POP_DOWN = 0x61b,
	ACT_DCG_CARD_SUIT_UP_LOCAL = 0x61c,
	ACT_DCG_CARD_SUIT_UP_OPPONENT = 0x61d,
	ACT_DCG_CARD_SUIT_UP_LOCAL_PRE_IDLE = 0x61e,
	ACT_DCG_CARD_SUIT_UP_OPPONENT_PRE_IDLE = 0x61f,
	ACT_DCG_CARD_SUIT_UP_LOCAL_IDLE = 0x620,
	ACT_DCG_CARD_SUIT_UP_OPPONENT_IDLE = 0x621,
	ACT_DCG_CARD_INSPECT = 0x622,
	ACT_DCG_CARD_INSPECT_IDLE = 0x623,
	ACT_DCG_CARD_SPELL_STACK_ENTER = 0x624,
	ACT_DCG_CARD_SPELL_STACK_ENTER_LOCAL = 0x625,
	ACT_DCG_CARD_SPELL_STACK_EXIT = 0x626,
	ACT_DCG_CARD_SPELL_STACK_IDLE_OPP = 0x627,
	ACT_DCG_CARD_SPELL_STACK_IDLE_LOCAL = 0x628,
	ACT_DCG_CARD_SWAP_NEIGHBOR_RIGHT_TO_LEFT = 0x629,
	ACT_DCG_CARD_SWAP_NEIGHBOR_LEFT_TO_RIGHT = 0x62a,
	ACT_DCG_CARD_SWAP_NEIGHBOR_RIGHT_TO_LEFT_STATIC = 0x62b,
	ACT_DCG_CARD_SWAP_NEIGHBOR_LEFT_TO_RIGHT_STATIC = 0x62c,
	ACT_DCG_CARD_ATTACK_NEIGHBOR_RIGHT = 0x62d,
	ACT_DCG_CARD_ATTACK_NEIGHBOR_LEFT = 0x62e,
	ACT_DCG_CARD_ROT_360_HORIZ = 0x62f,
	ACT_DCG_CARD_ROT_360_VERT_L_TO_R = 0x630,
	ACT_DCG_CARD_ROT_360_VERT_R_TO_L = 0x631,
	ACT_DCG_CARD_TURN_FLOP = 0x632,
	ACT_DCG_CARD_DRAW_SINGLE = 0x633,
	ACT_DCG_CARD_DRAW_SINGLE_OPPONENT = 0x634,
	ACT_DCG_CARD_DRAW_MULTI = 0x635,
	ACT_DCG_CARD_DRAW_MULTI_OPPONENT = 0x636,
	ACT_DECK_IMP_OPPONENT_NO_UNITS_BROAD = 0x637,
	ACT_DECK_IMP_REACT_LAUGHT_AT_OPPONENT = 0x638,
	ACT_kDCG_CARD_EFFECT_DAMAGE_THUNDERGODSWRATH = 0x639,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK1 = 0x63a,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK2 = 0x63b,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK3 = 0x63c,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK4 = 0x63d,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK5 = 0x63e,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK6 = 0x63f,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK7 = 0x640,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK8 = 0x641,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK9 = 0x642,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK10 = 0x643,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK1 = 0x644,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK2 = 0x645,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK3 = 0x646,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK4 = 0x647,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK5 = 0x648,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK6 = 0x649,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK7 = 0x64a,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK8 = 0x64b,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK9 = 0x64c,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK10 = 0x64d,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK1_TO_FOUNTAIN1 = 0x64e,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK2_TO_FOUNTAIN2 = 0x64f,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK3_TO_FOUNTAIN3 = 0x650,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK4_TO_FOUNTAIN4 = 0x651,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK5_TO_FOUNTAIN5 = 0x652,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK6_TO_FOUNTAIN6 = 0x653,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK7_TO_FOUNTAIN7 = 0x654,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK8_TO_FOUNTAIN8 = 0x655,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK9_TO_FOUNTAIN9 = 0x656,
	ACT_DCG_CARD_COMBAT_LOCAL_DEATH_HERO_RACK10_TO_FOUNTAIN10 = 0x657,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK1_TO_FOUNTAIN1 = 0x658,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK2_TO_FOUNTAIN2 = 0x659,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK3_TO_FOUNTAIN3 = 0x65a,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK4_TO_FOUNTAIN4 = 0x65b,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK5_TO_FOUNTAIN5 = 0x65c,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK6_TO_FOUNTAIN6 = 0x65d,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK7_TO_FOUNTAIN7 = 0x65e,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK8_TO_FOUNTAIN8 = 0x65f,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK9_TO_FOUNTAIN9 = 0x660,
	ACT_DCG_CARD_COMBAT_OPPONENT_DEATH_HERO_RACK10_TO_FOUNTAIN10 = 0x661,
	ACT_DCG_CARD_HIT_REACTION_LOCAL = 0x662,
	ACT_DCG_CARD_HIT_REACTION_OPPONENT = 0x663,
	ACT_DCG_CARD_SPRINGTRAP_LOCAL_DEPLOY = 0x664,
	ACT_DCG_CARD_SPRINGTRAP_OPPONENT_DEPLOY = 0x665,
	ACT_DCG_CARD_TERRIFY_SHARED = 0x666,
	ACT_DCG_CARD_FISSURE_SHARED = 0x667,
	ACT_DCG_CARD_PREY_WEAK_SHARED = 0x668,
	ACT_DCG_CARD_ROUTED_SHARED = 0x669,
	ACT_DCG_CARD_WHIRLING_DEATH_LOCAL = 0x66a,
	ACT_DCG_CARD_WHIRLING_DEATH_OPPONENT = 0x66b,
	ACT_DCG_CARD_WHIRLING_DEATH_IMPACT = 0x66c,
	ACT_DCG_CARD_HACK_SPELLSTACK = 0x66d,
	ACT_DCG_CARD_HACK_SPELLSTACK_OPP = 0x66e,
	ACT_DCG_CARD_GOLDEN_TICKET_SPELLSTACK = 0x66f,
	ACT_DCG_CARD_GOLDEN_TICKET_SPELLSTACK_OPP = 0x670,
	ACT_DCG_CARD_GOLDEN_TICKET_IDLE = 0x671,
	ACT_DCG_CARD_SPELLSTACK_OPP = 0x672,
	ACT_DCG_CARD_SPELLSTACK_LOCAL = 0x673,
	ACT_DCG_CARD_VENTRILOQUY = 0x674,
	ACT_DCG_CARD_COUP_DE_GRACE_LIFT = 0x675,
	ACT_DCG_CARD_COUP_DE_GRACE_SLASH = 0x676,
	ACT_DCG_CARD_COUP_DE_GRACE_RECLAIM = 0x677,
	ACT_DCG_CARD_GANK_SLASH = 0x678,
	ACT_DCG_CARD_GANK_SLASH_TARGET = 0x679,
	ACT_DCG_CARD_FOUNTAIN_INTRO = 0x67a,
	ACT_DCG_CARD_FOUNTAIN_IDLE = 0x67b,
	ACT_DCG_CARD_FOUNTAIN_OUTRO = 0x67c,
	ACT_DCG_CARD_COMBATARROW_M_IDLE = 0x67d,
	ACT_DCG_CARD_COMBATARROW_R_IDLE = 0x67e,
	ACT_DCG_CARD_COMBATARROW_L_IDLE = 0x67f,
	ACT_DCG_CARD_COMBATARROW_M_R = 0x680,
	ACT_DCG_CARD_COMBATARROW_R_L = 0x681,
	ACT_DCG_CARD_COMBATARROW_R_M = 0x682,
	ACT_DCG_CARD_COMBATARROW_L_M = 0x683,
	ACT_DCG_CARD_COMBATARROW_M_L = 0x684,
	ACT_DCG_CARD_COMBATARROW_L_R = 0x685,
	ACT_DCG_CARD_PACKOPENING_REVEAL = 0x686,
	ACT_DCG_CARD_PACKOPENING_IDLE = 0x687,
	ACT_DCG_CARD_PACKOPENING_IDLE_FACEDOWN = 0x688,
	ACT_DCG_CARD_PACKOPENING_HOVER = 0x689,
	ACT_DCG_CARD_PACKOPENING_RARE_REVEAL = 0x68a,
	ACT_DCG_CARD_PACKOPENING_RARE_HOVER = 0x68b,
	ACT_PACK_OPENING_HOVER = 0x68c,
	ACT_PACK_OPENING_IDLE = 0x68d,
	ACT_PACK_OPENING_OPEN = 0x68e,
	ACT_PACK_OPENING_OPEN_IDLE = 0x68f,
	ACT_PACK_OPENING_OPEN_NPE = 0x690,
	ACT_PACK_OPENING_OPEN_IDLE_NPE = 0x691,
	ACT_PACK_OPENING_OUTRO = 0x692,
	ACT_PACK_OPENING_INTRO = 0x693,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_1 = 0x694,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_2 = 0x695,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_3 = 0x696,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_HOVER_1 = 0x697,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_HOVER_2 = 0x698,
	ACT_DCG_CARD_PACKOPENING_INCLUDE_HOVER_3 = 0x699,
	ACT_DCG_TOWER_IDLE_LOCAL = 0x69a,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_LEFT = 0x69b,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_LEFT_TRANSITION = 0x69c,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_LEFT_RETURN = 0x69d,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_RIGHT = 0x69e,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_RIGHT_TRANSITION = 0x69f,
	ACT_DCG_TOWER_IDLE_LOCAL_STRATEGIC_RIGHT_RETURN = 0x6a0,
	ACT_DCG_TOWER_IDLE_OPPONENT = 0x6a1,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_LEFT = 0x6a2,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_LEFT_TRANSITION = 0x6a3,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_LEFT_RETURN = 0x6a4,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_RIGHT = 0x6a5,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_RIGHT_TRANSITION = 0x6a6,
	ACT_DCG_TOWER_IDLE_OPPONENT_STRATEGIC_RIGHT_RETURN = 0x6a7,
	ACT_DCG_TOWER_HIT_LOCAL = 0x6a8,
	ACT_DCG_TOWER_HIT_LOW_LOCAL = 0x6a9,
	ACT_DCG_TOWER_HIT_OPPONENT = 0x6aa,
	ACT_DCG_TOWER_HIT_LOW_OPPONENT = 0x6ab,
	ACT_DCG_TOWER_DESTRUCTION_LVL1 = 0x6ac,
	ACT_DCG_TOWER_DESTRUCTION_FINAL = 0x6ad,
	ACT_DCG_TOWER_DESTRUCTION_LOCAL = 0x6ae,
	ACT_DCG_TOWER_DESTRUCTION_FX_LOCAL = 0x6af,
	ACT_DCG_TOWER_DESTRUCTION_OPPONENT = 0x6b0,
	ACT_DCG_TOWER_WAKE_LOCAL = 0x6b1,
	ACT_DCG_TOWER_SLEEP_LOCAL = 0x6b2,
	ACT_DCG_TOWER_WAKE_OPPONENT = 0x6b3,
	ACT_DCG_TOWER_SLEEP_OPPONENT = 0x6b4,
	ACT_DCG_TOWER_DIRE_ARMOR_LOCAL_STRATEGY = 0x6b5,
	ACT_DCG_TOWER_DIRE_ARMOR_OPPONENT_STRATEGY = 0x6b6,
	ACT_DCG_TOWER_DIRE_ANCIENT_ARMOR_LOCAL_STRATEGY = 0x6b7,
	ACT_DCG_TOWER_DIRE_ANCIENT_ARMOR_OPPONENT_STRATEGY = 0x6b8,
	ACT_DCG_TOWER_RADIANT_ARMOR_LOCAL_STRATEGY = 0x6b9,
	ACT_DCG_TOWER_RADIANT_ARMOR_OPPONENT_STRATEGY = 0x6ba,
	ACT_DCG_TOWER_RADIANT_ANCIENT_ARMOR_LOCAL_STRATEGY = 0x6bb,
	ACT_DCG_TOWER_RADIANT_ANCIENT_ARMOR_OPPONENT_STRATEGY = 0x6bc,
	ACT_DCG_TOWER_DIRE_ARMOR_LOCAL_STRATEGY_REVERSE = 0x6bd,
	ACT_DCG_TOWER_DIRE_ARMOR_OPPONENT_STRATEGY_REVERSE = 0x6be,
	ACT_DCG_TOWER_DIRE_ANCIENT_ARMOR_LOCAL_STRATEGY_REVERSE = 0x6bf,
	ACT_DCG_TOWER_DIRE_ANCIENT_ARMOR_OPPONENT_STRATEGY_REVERSE = 0x6c0,
	ACT_DCG_TOWER_RADIANT_ARMOR_LOCAL_STRATEGY_REVERSE = 0x6c1,
	ACT_DCG_TOWER_RADIANT_ARMOR_OPPONENT_STRATEGY_REVERSE = 0x6c2,
	ACT_DCG_TOWER_RADIANT_ANCIENT_ARMOR_LOCAL_STRATEGY_REVERSE = 0x6c3,
	ACT_DCG_TOWER_RADIANT_ANCIENT_ARMOR_OPPONENT_STRATEGY_REVERSE = 0x6c4,
	ACT_DCG_CARD_BLINK_REST_TO_IDLE = 0x6c5,
	ACT_DCG_CARD_BLINK_START = 0x6c6,
	ACT_DCG_CARD_BLINK_IDLE = 0x6c7,
	ACT_DCG_CARD_BLINK_END = 0x6c8,
	ACT_DCG_CARD_RAVAGE_IMPACT = 0x6c9,
	ACT_DCG_CARD_ENOUGH_MAGIC = 0x6ca,
	ACT_DCG_ROSHAN_TIME_OF_TRIUMPH = 0x6cb,
	ACT_DCG_SHIELD_LEFT_DEPLOY = 0x6cc,
	ACT_DCG_SHIELD_LEFT_IDLE = 0x6cd,
	ACT_DCG_SHIELD_LEFT_RETRACT = 0x6ce,
	ACT_DCG_SHIELD_LEFT_STOMPED = 0x6cf,
	ACT_DCG_SHIELD_RIGHT_DEPLOY = 0x6d0,
	ACT_DCG_SHIELD_RIGHT_IDLE = 0x6d1,
	ACT_DCG_SHIELD_RIGHT_RETRACT = 0x6d2,
	ACT_DCG_SHIELD_RIGHT_STOMPED = 0x6d3,
	ACT_DCG_CARD_ROLL_FOR_SHIELDS = 0x6d4,
	ACT_CAMERA_LANE1_IDLE = 0x6d5,
	ACT_CAMERA_LANE2_IDLE = 0x6d6,
	ACT_CAMERA_LANE3_IDLE = 0x6d7,
	ACT_CAMERA_MASTER_IDLE = 0x6d8,
	ACT_CAMERA_SHOP_IDLE = 0x6d9,
	ACT_CAMERA_STRATEGIC_IDLE = 0x6da,
	ACT_CAMERA_LANE1_TO_LANE2_USER = 0x6db,
	ACT_CAMERA_LANE1_TO_LANE3_USER = 0x6dc,
	ACT_CAMERA_LANE1_TO_STRATEGIC_USER = 0x6dd,
	ACT_CAMERA_LANE2_TO_LANE1_USER = 0x6de,
	ACT_CAMERA_LANE2_TO_LANE3_USER = 0x6df,
	ACT_CAMERA_LANE2_TO_STRATEGIC_USER = 0x6e0,
	ACT_CAMERA_LANE3_TO_LANE2_USER = 0x6e1,
	ACT_CAMERA_LANE3_TO_LANE1_USER = 0x6e2,
	ACT_CAMERA_LANE3_TO_STRATEGIC_USER = 0x6e3,
	ACT_CAMERA_STRATEGIC_TO_LANE1_USER = 0x6e4,
	ACT_CAMERA_STRATEGIC_TO_LANE2_USER = 0x6e5,
	ACT_CAMERA_STRATEGIC_TO_LANE3_USER = 0x6e6,
	ACT_CAMERA_LANE1_TO_LANE2_COMBAT_END = 0x6e7,
	ACT_CAMERA_LANE2_TO_LANE3_COMBAT_END = 0x6e8,
	ACT_CAMERA_LANE3_TO_STRATEGIC_COMBAT_END = 0x6e9,
	ACT_CAMERA_MASTER_TO_STRATEGIC = 0x6ea,
	ACT_CAMERA_SHOP_TO_STRATEGIC = 0x6eb,
	ACT_CAMERA_STRATEGIC_TO_LANE1 = 0x6ec,
	ACT_CAMERA_STRATEGIC_TO_SHOP = 0x6ed,
	ACT_CAMERA_GAME_START = 0x6ee,
	ACT_CAMERA_GAME_START_TO_STRATEGIC = 0x6ef,
	ACT_CAMERA_THUNDERGODSWRATH = 0x6f0,
	ACT_CAMERA_THUNDERGODSWRATH_V2 = 0x6f1,
	ACT_CAMERA_LANE1_TIME_OF_TRIUMPH_TILT_UP = 0x6f2,
	ACT_CAMERA_LANE1_TIME_OF_TRIUMPH_IDLE = 0x6f3,
	ACT_CAMERA_LANE1_TIME_OF_TRIUMPH_TILT_DOWN = 0x6f4,
	ACT_CAMERA_LANE2_TIME_OF_TRIUMPH_TILT_UP = 0x6f5,
	ACT_CAMERA_LANE2_TIME_OF_TRIUMPH_IDLE = 0x6f6,
	ACT_CAMERA_LANE2_TIME_OF_TRIUMPH_TILT_DOWN = 0x6f7,
	ACT_CAMERA_LANE3_TIME_OF_TRIUMPH_TILT_UP = 0x6f8,
	ACT_CAMERA_LANE3_TIME_OF_TRIUMPH_IDLE = 0x6f9,
	ACT_CAMERA_LANE3_TIME_OF_TRIUMPH_TILT_DOWN = 0x6fa,
	ACT_CAMERA_LANE1_BOLT_OF_DAMOCLES_IN = 0x6fb,
	ACT_CAMERA_LANE2_BOLT_OF_DAMOCLES_IN = 0x6fc,
	ACT_CAMERA_LANE3_BOLT_OF_DAMOCLES_IN = 0x6fd,
	ACT_CAMERA_LANE1_BOLT_OF_DAMOCLES_IN_OPP = 0x6fe,
	ACT_CAMERA_LANE2_BOLT_OF_DAMOCLES_IN_OPP = 0x6ff,
	ACT_CAMERA_LANE3_BOLT_OF_DAMOCLES_IN_OPP = 0x700,
	ACT_CAMERA_LANE1_BOLT_OF_DAMOCLES_OUT = 0x701,
	ACT_CAMERA_LANE2_BOLT_OF_DAMOCLES_OUT = 0x702,
	ACT_CAMERA_LANE3_BOLT_OF_DAMOCLES_OUT = 0x703,
	ACT_CAMERA_LANE1_BOLT_OF_DAMOCLES_OUT_OPP = 0x704,
	ACT_CAMERA_LANE2_BOLT_OF_DAMOCLES_OUT_OPP = 0x705,
	ACT_CAMERA_LANE3_BOLT_OF_DAMOCLES_OUT_OPP = 0x706,
	ACT_CAMERA_SPELLCAST_LANE_1_IDLE = 0x707,
	ACT_CAMERA_SPELLCAST_LANE_2_IDLE = 0x708,
	ACT_CAMERA_SPELLCAST_LANE_3_IDLE = 0x709,
	ACT_CAMERA_SPELLCAST_LANE_1_TO_2 = 0x70a,
	ACT_CAMERA_SPELLCAST_LANE_2_TO_3 = 0x70b,
	ACT_CAMERA_SPELLCAST_LANE_3_TO_2 = 0x70c,
	ACT_CAMERA_SPELLCAST_LANE_2_TO_1 = 0x70d,
	ACT_CAMERA_LANE_1_COMBAT = 0x70e,
	ACT_CAMERA_LANE_2_COMBAT = 0x70f,
	ACT_CAMERA_LANE_3_COMBAT = 0x710,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_PUSH_IN_OPPONENT = 0x711,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_DRIFT_OPPONENT = 0x712,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_PULL_OUT_OPPONENT = 0x713,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_PUSH_IN_OPPONENT = 0x714,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_DRIFT_OPPONENT = 0x715,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_PULL_OUT_OPPONENT = 0x716,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_PUSH_IN_OPPONENT = 0x717,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_DRIFT_OPPONENT = 0x718,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_PULL_OUT_OPPONENT = 0x719,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_PUSH_IN_PLAYER = 0x71a,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_DRIFT_PLAYER = 0x71b,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_PULL_OUT_PLAYER = 0x71c,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_PUSH_IN_PLAYER = 0x71d,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_DRIFT_PLAYER = 0x71e,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_PULL_OUT_PLAYER = 0x71f,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_PUSH_IN_PLAYER = 0x720,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_DRIFT_PLAYER = 0x721,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_PULL_OUT_PLAYER = 0x722,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_OPPONENT = 0x723,
	ACT_CAMERA_LANE1_TOWER_DESTRUCTION_PLAYER = 0x724,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_OPPONENT = 0x725,
	ACT_CAMERA_LANE2_TOWER_DESTRUCTION_PLAYER = 0x726,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_OPPONENT = 0x727,
	ACT_CAMERA_LANE3_TOWER_DESTRUCTION_PLAYER = 0x728,
	ACT_CAMERA_LANE1_ANCIENT_DESTRUCTION_OPPONENT = 0x729,
	ACT_CAMERA_LANE1_ANCIENT_DESTRUCTION_PLAYER = 0x72a,
	ACT_CAMERA_LANE2_ANCIENT_DESTRUCTION_OPPONENT = 0x72b,
	ACT_CAMERA_LANE2_ANCIENT_DESTRUCTION_PLAYER = 0x72c,
	ACT_CAMERA_LANE3_ANCIENT_DESTRUCTION_OPPONENT = 0x72d,
	ACT_CAMERA_LANE3_ANCIENT_DESTRUCTION_PLAYER = 0x72e,
	ACT_CAMERA_VICTORY_LANE_1 = 0x72f,
	ACT_CAMERA_VICTORY_LANE_1_IDLE = 0x730,
	ACT_CAMERA_VICTORY_LANE_2 = 0x731,
	ACT_CAMERA_VICTORY_LANE_2_IDLE = 0x732,
	ACT_CAMERA_VICTORY_LANE_3 = 0x733,
	ACT_CAMERA_VICTORY_LANE_3_IDLE = 0x734,
	ACT_CAMERA_DEFEAT_LANE_1 = 0x735,
	ACT_CAMERA_DEFEAT_LANE_1_IDLE = 0x736,
	ACT_CAMERA_DEFEAT_LANE_2 = 0x737,
	ACT_CAMERA_DEFEAT_LANE_2_IDLE = 0x738,
	ACT_CAMERA_DEFEAT_LANE_3 = 0x739,
	ACT_CAMERA_DEFEAT_LANE_3_IDLE = 0x73a,
	ACT_CAMERA_FIVE_V_FIVE_REVEAL = 0x73b,
	ACT_SHOP_APPEAR_MAXIMIZED = 0x73c,
	ACT_SHOP_APPEAR_MAXIMIZED_TRIGGER = 0x73d,
	ACT_SHOP_OPPONENT_SHOP_APPEAR_MAXIMIZED = 0x73e,
	ACT_SHOP_COIN_APPEAR_MAXIMIZED = 0x73f,
	ACT_SHOP_PLAYER_IMP_APPEAR_MAXIMIZED = 0x740,
	ACT_SHOP_OPPONENT_SHOP_OPPONENT_IMP_APPEAR_MAXIMIZED = 0x741,
	ACT_SHOP_MAXIMIZED_IDLE = 0x742,
	ACT_SHOP_PLAYER_IMP_MAXIMIZED_IDLE = 0x743,
	ACT_SHOP_COIN_MAXIMIZED_IDLE = 0x744,
	ACT_SHOP_APPEAR_MINIMIZED = 0x745,
	ACT_SHOP_FINISH_SHOPPING_MAXIMIZED = 0x746,
	ACT_SHOP_FINISH_SHOPPING_MINIMIZED = 0x747,
	ACT_SHOP_MAXIMIZE = 0x748,
	ACT_SHOP_MINIMIZE = 0x749,
	ACT_SHOP_IMP_MINIMIZE = 0x74a,
	ACT_SHOP_COIN_MINIMIZE = 0x74b,
	ACT_SHOP_MINIMIZED_IDLE = 0x74c,
	ACT_SHOP_IMP_MINIMIZED_IDLE = 0x74d,
	ACT_SHOP_COIN_MINIMIZED_IDLE = 0x74e,
	ACT_SHOP_IMP_MAXIMIZE = 0x74f,
	ACT_SHOP_COIN_MAXIMIZE = 0x750,
	ACT_SHOP_LANE_TO_STRATEGIC = 0x751,
	ACT_SHOP_STRATEGIC_TO_LANE = 0x752,
	ACT_SHOP_MOVE_LEFT_LANE = 0x753,
	ACT_SHOP_MOVE_RIGHT_LANE = 0x754,
	ACT_SHOP_HIDDEN = 0x755,
	ACT_SHOP_ON_TABLE_IDLE = 0x756,
	ACT_OPPONENT_SHOP_ON_TABLE_IDLE = 0x757,
	ACT_SHOP_FINISH_SHOPPING = 0x758,
	ACT_SHOP_OPPONENT_SHOP_FINISH_SHOPPING = 0x759,
	ACT_SHOP_IMP_SUIT_UP_IDLE = 0x75a,
	ACT_SHOP_IMP_DEAL_CREEPS_TO_SUIT_UP_IDLE = 0x75b,
	ACT_SHOP_IMP_DEAL_CREEPS = 0x75c,
	ACT_SHOP_IMP_FINISH_SHOPPING = 0x75d,
	ACT_SHOP_OPPONENT_IMP_SUIT_UP_IDLE = 0x75e,
	ACT_SHOP_OPPONENT_IMP_DEAL_CREEPS_TO_SUIT_UP_IDLE = 0x75f,
	ACT_SHOP_OPPONENT_IMP_DEAL_CREEPS = 0x760,
	ACT_SHOP_OPPONENT_IMP_FINISH_SHOPPING = 0x761,
	ACT_FLOP_IMP_COMMIT_COIN_INTRO = 0x762,
	ACT_FLOP_IMP_COMMIT_COIN_LOOP = 0x763,
	ACT_FLOP_OPPONENT_IMP_COMMIT_COIN_INTRO = 0x764,
	ACT_FLOP_IMP_DEPLOY_COMMIT = 0x765,
	ACT_FLOP_IMP_DEAL_PATHING_LOOP = 0x766,
	ACT_FLOP_IMP_DEAL_PATHING_TO_IDLE = 0x767,
	ACT_FLOP_IMP_PATHING_DECK_IDLE = 0x768,
	ACT_FLOP_OPPONENT_IMP_DEPLOY_COMMIT = 0x769,
	ACT_FLOP_OPPONENT_IMP_DEAL_PATHING_LOOP = 0x76a,
	ACT_FLOP_OPPONENT_IMP_DEAL_PATHING_TO_IDLE = 0x76b,
	ACT_FLOP_OPPONENT_IMP_PATHING_DECK_IDLE = 0x76c,
	ACT_FLOP_IMP_SHUFFLE_INTRO_LANE_1 = 0x76d,
	ACT_FLOP_IMP_SHUFFLE_LANE_1 = 0x76e,
	ACT_FLOP_IMP_SHUFFLE_FLOP_LANE_1 = 0x76f,
	ACT_FLOP_IMP_SHUFFLE_INTRO_LANE_2 = 0x770,
	ACT_FLOP_IMP_SHUFFLE_LANE_2 = 0x771,
	ACT_FLOP_IMP_SHUFFLE_FLOP_LANE_2 = 0x772,
	ACT_FLOP_IMP_SHUFFLE_INTRO_LANE_3 = 0x773,
	ACT_FLOP_IMP_SHUFFLE_LANE_3 = 0x774,
	ACT_FLOP_IMP_SHUFFLE_FLOP_LANE_3 = 0x775,
	ACT_FLOP_IMP_SHUFFLE_RETURN_TO_LANE_1 = 0x776,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_INTRO_LANE_1 = 0x777,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_LANE_1 = 0x778,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_FLOP_LANE_1 = 0x779,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_INTRO_LANE_2 = 0x77a,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_LANE_2 = 0x77b,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_FLOP_LANE_2 = 0x77c,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_INTRO_LANE_3 = 0x77d,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_LANE_3 = 0x77e,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_FLOP_LANE_3 = 0x77f,
	ACT_FLOP_OPPONENT_IMP_SHUFFLE_RETURN_TO_LANE_1 = 0x780,
	ACT_SHOP_CARD_PANEL_IDLE_LOCKED = 0x781,
	ACT_SHOP_CARD_PANEL_IDLE_UNLOCKED = 0x782,
	ACT_SHOP_CARD_PANEL_FLIP_LOCKED = 0x783,
	ACT_SHOP_CARD_PANEL_FLIP_UNLOCKED = 0x784,
	ACT_SHOP_CARD_PANEL_LOCK = 0x785,
	ACT_SHOP_CARD_PANEL_UNLOCK = 0x786,
	ACT_FLOP_IMP_SHUFFLE_AND_FLOP_RETURN_TO_LANE_1 = 0x787,
	ACT_FLOP_IMP_SHUFFLE_AND_FLOP_LANE_1 = 0x788,
	ACT_FLOP_IMP_SHUFFLE_AND_FLOP_LANE_2 = 0x789,
	ACT_FLOP_IMP_SHUFFLE_AND_FLOP_LANE_3 = 0x78a,
	ACT_DECK_IMP_IDLE = 0x78b,
	ACT_DECK_IMP_IDLE_OPPONENT = 0x78c,
	ACT_DECK_IMP_IDLE_VARIANT = 0x78d,
	ACT_DECK_IMP_FLY_ADVANCE_LANE = 0x78e,
	ACT_DECK_IMP_FLY_LANE3_TO_LANE1 = 0x78f,
	ACT_DECK_IMP_FLY_ADVANCE_LANE_OPPONENT = 0x790,
	ACT_DECK_IMP_FLY_LANE3_TO_LANE1_OPPONENT = 0x791,
	ACT_DECK_IMP_SPAWN = 0x792,
	ACT_DECK_IMP_SPAWN_OPPONENT = 0x793,
	ACT_DECK_IMP_TAUNT = 0x794,
	ACT_DECK_IMP_COMPLEMENT = 0x795,
	ACT_DECK_IMP_CELEBRATE = 0x796,
	ACT_DECK_IMP_DEFEAT = 0x797,
	ACT_DECK_IMP_PASS_TURN = 0x798,
	ACT_DECK_IMP_RECEIVE_TURN = 0x799,
	ACT_DECK_IMP_COMBAT = 0x79a,
	ACT_DECK_IMP_COMBAT_OPPONENT = 0x79b,
	ACT_DECK_IMP_DEAL_SINGLE = 0x79c,
	ACT_DECK_IMP_DEAL_SINGLE_OPPONENT = 0x79d,
	ACT_DECK_IMP_DEAL_MULTI_START = 0x79e,
	ACT_DECK_IMP_DEAL_MULTI_START_OPPONENT = 0x79f,
	ACT_DECK_IMP_DEAL_MULTI_LOOP = 0x7a0,
	ACT_DECK_IMP_DEAL_MULTI_LOOP_OPPONENT = 0x7a1,
	ACT_DECK_IMP_DEAL_MULTI_END = 0x7a2,
	ACT_DECK_IMP_DEAL_MULTI_END_OPPONENT = 0x7a3,
	ACT_DECK_IMP_10_SECS_REM_PLAYER_PLAYER = 0x7a4,
	ACT_DECK_IMP_10_SECS_REM_PLAYER_OPPONENT = 0x7a5,
	ACT_DECK_IMP_10_SECS_REM_OPPONENT_PLAYER = 0x7a6,
	ACT_DECK_IMP_10_SECS_REM_OPPONENT_OPPONENT = 0x7a7,
	ACT_DECK_IMP_0_SECS_REM_PLAYER_PLAYER = 0x7a8,
	ACT_DECK_IMP_0_SECS_REM_PLAYER_OPPONENT = 0x7a9,
	ACT_DECK_IMP_0_SECS_REM_OPPONENT_PLAYER = 0x7aa,
	ACT_DECK_IMP_0_SECS_REM_OPPONENT_OPPONENT = 0x7ab,
	ACT_DECK_IMP_REACT_SMALL_POSITIVE_PLAYER = 0x7ac,
	ACT_DECK_IMP_REACT_SMALL_POSITIVE_OPPONENT = 0x7ad,
	ACT_DECK_IMP_REACT_SMALL_NEGATIVE_PLAYER = 0x7ae,
	ACT_DECK_IMP_REACT_SMALL_NEGATIVE_OPPONENT = 0x7af,
	ACT_DECK_IMP_REACT_BROAD_POSITIVE_PLAYER = 0x7b0,
	ACT_DECK_IMP_REACT_BROAD_POSITIVE_OPPONENT = 0x7b1,
	ACT_DECK_IMP_REACT_BROAD_NEGATIVE_PLAYER = 0x7b2,
	ACT_DECK_IMP_REACT_BROAD_NEGATIVE_OPPONENT = 0x7b3,
	ACT_DECK_IMP_REACT_HERO_DEATH_POSITIVE_PLAYER = 0x7b4,
	ACT_DECK_IMP_REACT_HERO_DEATH_POSITIVE_OPPONENT = 0x7b5,
	ACT_DECK_IMP_REACT_HERO_DEATH_NEGATIVE_PLAYER = 0x7b6,
	ACT_DECK_IMP_REACT_HERO_DEATH_NEGATIVE_OPPONENT = 0x7b7,
	ACT_DECK_IMP_REACT_CONFUSED_POSITIVE_PLAYER = 0x7b8,
	ACT_DECK_IMP_REACT_CONFUSED_POSITIVE_OPPONENT = 0x7b9,
	ACT_DECK_IMP_REACT_CONFUSED_NEGATIVE_PLAYER = 0x7ba,
	ACT_DECK_IMP_REACT_CONFUSED_NEGATIVE_OPPONENT = 0x7bb,
	ACT_DECK_IMP_TEST_ANIMATION_PLAYER = 0x7bc,
	ACT_DECK_IMP_TEST_ANIMATION_OPPONENT = 0x7bd,
	ACT_DECK_IMP_CUSTOM_CARD_SILENCE_PLAYER = 0x7be,
	ACT_DECK_IMP_CUSTOM_CARD_SILENCE_OPPONENT = 0x7bf,
	ACT_DECK_IMP_CUSTOM_CARD_STUN_PLAYER = 0x7c0,
	ACT_DECK_IMP_CUSTOM_CARD_STUN_OPPONENT = 0x7c1,
	ACT_DECK_IMP_REACT_SMALL_DISGUST_PLAYER = 0x7c2,
	ACT_DECK_IMP_REACT_SMALL_DISGUST_OPPONENT = 0x7c3,
	ACT_DECK_IMP_CUSTOM_CARD_ATTACKBUFF_PLAYER = 0x7c4,
	ACT_DECK_IMP_CUSTOM_CARD_ARMORBUFF_PLAYER = 0x7c5,
	ACT_DECK_IMP_CUSTOM_CARD_CLEAVEBUFF_PLAYER = 0x7c6,
	ACT_DECK_IMP_CUSTOM_CARD_PIERCEBUFF_PLAYER = 0x7c7,
	ACT_DECK_IMP_CUSTOM_CARD_SIEGEBUFF_PLAYER = 0x7c8,
	ACT_DECK_IMP_CUSTOM_CARD_HEALBUFF_PLAYER = 0x7c9,
	ACT_DECK_IMP_CUSTOM_CARD_HEALBUFF_PLAYER_FLASK = 0x7ca,
	ACT_DECK_IMP_CUSTOM_CARD_IMMUNEBUFF_PLAYER = 0x7cb,
	ACT_DECK_IMP_CUSTOM_CARD_IMMUNEBUFF_OPPONENT = 0x7cc,
	ACT_DECK_IMP_REACT_BLOCKED_PLAYER = 0x7cd,
	ACT_DECK_IMP_REACT_NOTBLOCKED_PLAYER = 0x7ce,
	ACT_DECK_IMP_REACT_PLAYER_TOWER_DESTROYED_PLAYER = 0x7cf,
	ACT_DECK_IMP_POKED_PLAYER = 0x7d0,
	ACT_DECK_IMP_BLINK_RETURN_PLAYER = 0x7d1,
	ACT_DECK_IMP_CARD_PLAYED_POSITIVE_PLAYER = 0x7d2,
	ACT_DECK_IMP_CARD_PLAYED_NEGATIVE_PLAYER = 0x7d3,
	ACT_DECK_IMP_REACT_OPPONENT_PAUSE_START = 0x7d4,
	ACT_DECK_IMP_REACT_OPPONENT_PAUSE_LOOP = 0x7d5,
	ACT_DECK_IMP_REACT_OPPONENT_PAUSE_END = 0x7d6,
	ACT_DECK_IMP_REACT_PLAYER_PAUSE_START = 0x7d7,
	ACT_DECK_IMP_REACT_PLAYER_PAUSE_LOOP = 0x7d8,
	ACT_DECK_IMP_REACT_PLAYER_PAUSE_END = 0x7d9,
	ACT_DECK_IMP_REACT_VICTORY = 0x7da,
	ACT_DECK_IMP_REACT_DEFEAT = 0x7db,
	ACT_DECK_IMP_REACT_WAIT_PLAYER = 0x7dc,
	ACT_DECK_IMP_REACT_WAIT_OPPONENT = 0x7dd,
	ACT_DECK_IMP_REACT_VICTORY_OPPONENT = 0x7de,
	ACT_DECK_IMP_REACT_DEFEAT_OPPONENT = 0x7df,
	ACT_DECK_IMP_CUSTOM_CARD_ATTACKBUFF_OPPONENT = 0x7e0,
	ACT_DECK_IMP_CUSTOM_CARD_ARMORBUFF_OPPONENT = 0x7e1,
	ACT_DECK_IMP_CUSTOM_CARD_CLEAVEBUFF_OPPONENT = 0x7e2,
	ACT_DECK_IMP_CUSTOM_CARD_PIERCEBUFF_OPPONENT = 0x7e3,
	ACT_DECK_IMP_CUSTOM_CARD_SIEGEBUFF_OPPONENT = 0x7e4,
	ACT_DECK_IMP_CUSTOM_CARD_HEALBUFF_OPPONENT = 0x7e5,
	ACT_DECK_IMP_CUSTOM_CARD_HEALBUFF_OPPONENT_FLASK = 0x7e6,
	ACT_DECK_IMP_PLAYCARD_GENERIC_POSITIVE_PLAYER = 0x7e7,
	ACT_DECK_IMP_PLAYCARD_GENERIC_NEGATIVE_PLAYER = 0x7e8,
	ACT_DECK_IMP_PLAYCARD_GENERIC_POSITIVE_OPPONENT = 0x7e9,
	ACT_DECK_IMP_PLAYCARD_GENERIC_NEGATIVE_OPPONENT = 0x7ea,
	ACT_DECK_IMP_REACT_OPPONENT_NO_PLAYER_UNITS = 0x7eb,
	ACT_DECK_IMP_REACT_LOCAL_TOWER_DAMAGE_PLAYER = 0x7ec,
	ACT_DECK_IMP_BLUE_BUTTON_POSITIVE_PLAYER = 0x7ed,
	ACT_DECK_IMP_BLUE_BUTTON_POSITIVE_OPPONENT = 0x7ee,
	ACT_DECK_IMP_FINISH_DEPLOY_INTRO = 0x7ef,
	ACT_DECK_IMP_FINISH_DEPLOY_LOOP = 0x7f0,
	ACT_DECK_IMP_FINISH_DEPLOY_OUTRO = 0x7f1,
	ACT_DECK_IMP_IDLE_WINNING_PLAYER = 0x7f2,
	ACT_DECK_IMP_IDLE_WINNING_OPPONENT = 0x7f3,
	ACT_DECK_IMP_IDLE_OPPONENT_WINNING_OPPONENT_INTRO = 0x7f4,
	ACT_DECK_IMP_IDLE_OPPONENT_WINNING_OPPONENT_LOOP = 0x7f5,
	ACT_DECK_IMP_IDLE_LOSING_INTRO_PLAYER = 0x7f6,
	ACT_DECK_IMP_IDLE_LOSING_LOOP_PLAYER = 0x7f7,
	ACT_DECK_IMP_IDLE_LOSING_OPPONENT = 0x7f8,
	ACT_DECK_IMP_REACT_PLAYER_WHATEVER = 0x7f9,
	ACT_DECK_IMP_REACT_OPPONENT_WHATEVER = 0x7fa,
	ACT_DECK_IMP_REACT_PLAYER_CARD_SWAP = 0x7fb,
	ACT_DECK_IMP_REACT_LOCAL_TOWER_GAINED_SKULL_PLAYER = 0x7fc,
	ACT_DECK_IMP_REACT_OPPONENT_TOWER_GAINED_SKULL_PLAYER = 0x7fd,
	ACT_DECK_IMP_REACT_LOCAL_TOWER_HAS_DEATH_SKULL_IDLE_PLAYER = 0x7fe,
	ACT_DECK_IMP_REACT_LOCAL_TOWER_HAS_DEATH_SKULL_IDLE_OPPONENT = 0x7ff,
	ACT_DECK_IMP_REACT_OPPONENT_TOWER_HAS_DEATH_SKULL_IDLE_PLAYER = 0x800,
	ACT_DECK_IMP_REACT_OPPONENT_TOWER_HAS_DEATH_SKULL_IDLE_OPPONENT = 0x801,
	ACT_DECK_IMP_REACT_LOCAL_TOWER_GAINED_DEATH_SKULL_OPPONENT = 0x802,
	ACT_DECK_IMP_LOCAL_REMOVED_DEATH_SKULL_POSITIVE_PLAYER = 0x803,
	ACT_DECK_IMP_REMOVED_DEATH_SKULL_POSITIVE_OPPONENT = 0x804,
	ACT_DECK_IMP_PLAYERISCONFUSED_OPPONENT = 0x805,
	ACT_DECK_IMP_PLAYERISCONFUSED_PLAYER = 0x806,
	ACT_DECK_IMP_OPPONENTISCONFUSED_OPPONENT = 0x807,
	ACT_DECK_IMP_OPPONENTISCONFUSED_PLAYER = 0x808,
	ACT_DECK_IMP_REACT_NO_LOCAL_UNITS_PLAYER = 0x809,
	ACT_DECK_IMP_REACT_NO_LOCAL_UNITS_OPPONENT = 0x80a,
	ACT_DECK_IMP_REACT_NO_OPPONENT_UNITS_PLAYER = 0x80b,
	ACT_DECK_IMP_REACT_NO_OPPONENT_UNITS_OPPONENT = 0x80c,
	ACT_DECK_IMP_REACT_NO_LOCAL_UNITS_IDLE_LOOP_PLAYER = 0x80d,
	ACT_DECK_IMP_REACT_NO_LOCAL_UNITS_IDLE_LOOP_OPPONENT = 0x80e,
	ACT_DECK_IMP_REACT_NO_OPPONENT_UNITS_IDLE_LOOP_PLAYER = 0x80f,
	ACT_DECK_IMP_REACT_NO_OPPONENT_UNITS_IDLE_LOOP_OPPONENT = 0x810,
	ACT_DECK_IMP_TOWN_PORTAL_PLAYER = 0x811,
	ACT_DECK_IMP_SUMMON_IMPROVEMENT_POSITIVE_PLAYER = 0x812,
	ACT_DECK_IMP_LOCAL_TOWER_DESTROYED_PLAYER = 0x813,
	ACT_DECK_IMP_LOCAL_TOWER_DESTROYED_OPPONENT = 0x814,
	ACT_DECK_IMP_OPPONENT_TOWER_DESTROYED_PLAYER = 0x815,
	ACT_DECK_IMP_OPPONENT_TOWER_DESTROYED_OPPONENT = 0x816,
	ACT_DECK_IMP_TAUNT_CARD_PLAYER = 0x817,
	ACT_DECK_IMP_SILENCED_PLAYER = 0x818,
	ACT_DECK_IMP_BLINK_RETURN_LOCAL_NEGATIVE = 0x819,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_LOCAL = 0x81a,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_IDLE_LOCAL = 0x81b,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_EXIT_LOCAL = 0x81c,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_OPPONENT = 0x81d,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_IDLE_OPPONENT = 0x81e,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_EXIT_OPPONENT = 0x81f,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_CARD_TREE = 0x820,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_IDLE_CARD_TREE = 0x821,
	ACT_DECK_IMP_VS_DISPLAY_HERO_CARDS_EXIT_CARD_TREE = 0x822,
	ACT_DECK_IMP_PROGRESS_SOLID = 0x823,
	ACT_DECK_IMP_PROGRESS_SOLID4 = 0x824,
	ACT_DECK_IMP_PROGRESS_SOLID6 = 0x825,
	ACT_DECK_IMP_PROGRESS_SOLID8 = 0x826,
	ACT_DECK_IMP_PROGRESS_SOLID12 = 0x827,
	ACT_DECK_IMP_PROGRESS_SOLID20 = 0x828,
	ACT_DECK_IMP_PROGRESS_SOLID24 = 0x829,
	ACT_DCG_BOARDSKELETON_CLOSED = 0x82a,
	ACT_DCG_BOARDSKELETON_OPENING = 0x82b,
	ACT_DCG_BOARDSKELETON_OPEN = 0x82c,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_LOCAL = 0x82d,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_OPPONENT = 0x82e,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_CAMERA = 0x82f,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_POSITIVE_PLAYER = 0x830,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_POSITIVE_OPPONENT = 0x831,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_PLAYER = 0x832,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_OPPONENT = 0x833,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_COWER_PLAYER = 0x834,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_COWER_OPPONENT = 0x835,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_DISGUST_PLAYER = 0x836,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_DISGUST_PLAYER_UNDERGROUND = 0x837,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_DISGUST_OPPONENT = 0x838,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_HIDE_PLAYER = 0x839,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_HIDE_OPPONENT = 0x83a,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_POSITIVE_PLAYER = 0x83b,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_NEGATIVE_PLAYER = 0x83c,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_POSITIVE_OPPONENT = 0x83d,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_NEGATIVE_OPPONENT = 0x83e,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_HIDE_OPPONENT = 0x83f,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_POSITIVE_DUEL_PLAYER = 0x840,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_DUEL_OPPONENT = 0x841,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_LEGION_SUMMON_PLAYER = 0x842,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_LEGION_SUMMON_OPPONENT = 0x843,
	ACT_DCG_ANIMATED_ATTACH_1 = 0x844,
	ACT_DCG_ANIMATED_ATTACH_2 = 0x845,
	ACT_DCG_ANIMATED_ATTACH_3 = 0x846,
	ACT_DCG_ANIMATED_ATTACH_4 = 0x847,
	ACT_COIN_LOCAL_IDLE = 0x848,
	ACT_COIN_OPPONENT_IDLE = 0x849,
	ACT_COIN_TO_LOCAL = 0x84a,
	ACT_COIN_TO_OPPONENT = 0x84b,
	ACT_COIN_FIGHT_LOCAL = 0x84c,
	ACT_COIN_FIGHT_OPPONENT = 0x84d,
	ACT_COIN_SPAWN_LOCAL = 0x84e,
	ACT_COIN_SPAWN_OPPONENT = 0x84f,
	ACT_PLAYER_COIN_IDLE = 0x850,
	ACT_PLAYER_COIN_TURN = 0x851,
	ACT_PLAYER_COIN_TURN_PASS = 0x852,
	ACT_PLAYER_COIN_TURN_FIGHT = 0x853,
	ACT_PLAYER_COIN_JIGGLE = 0x854,
	ACT_DCG_DIE_LOCAL_IDLE = 0x855,
	ACT_DCG_DIE_LOCAL_SPAWN = 0x856,
	ACT_DCG_DIE_LOCAL_ACTIVATE = 0x857,
	ACT_DCG_DIE_LOCAL_DESTROYED = 0x858,
	ACT_DCG_DIE_COMBAT_LOCAL_CLASH = 0x859,
	ACT_DCG_DIE_COMBAT_LOCAL_RETURN = 0x85a,
	ACT_DCG_CARD_ABILITY_ACTIVE_IDLE = 0x85b,
	ACT_DCG_CARD_ABILITY_ACTIVE_CLICK = 0x85c,
	ACT_DCG_CARD_ABILITY_ACTIVE_RELEASE = 0x85d,
	ACT_DCG_CARD_ABILITY_ACTIVE_HOVER = 0x85e,
	ACT_DCG_TILE_LOCAL_IDLE = 0x85f,
	ACT_DCG_TILE_LOCAL_SPAWN = 0x860,
	ACT_DCG_TILE_LOCAL_DESTROYED = 0x861,
	ACT_DCG_TILE_COMBAT_LOCAL_CLASH = 0x862,
	ACT_DCG_TILE_COMBAT_LOCAL_WAIT = 0x863,
	ACT_DCG_IMPROVEMENT_IDLE = 0x864,
	ACT_DCG_IMPROVEMENT_SPAWN = 0x865,
	ACT_DCG_IMPROVEMENT_READY = 0x866,
	ACT_DCG_IMPROVEMENT_TRIGGERING = 0x867,
	ACT_DCG_IMPROVEMENT_DEATH = 0x868,
	ACT_DCG_IMPROVEMENT_ACTIVATED = 0x869,
	ACT_DCG_IMPROVEMENT_TARGETING = 0x86a,
	ACT_DCG_IMPROVEMENT_CARD_IDLE = 0x86b,
	ACT_DCG_ANCIENT_DESTROYED = 0x86c,
	ACT_DCG_ANCIENT_SPAWN = 0x86d,
	ACT_DCG_ANCIENT_SPAWN_LOCAL = 0x86e,
	ACT_DCG_ANCIENT_SPAWN_OPPONENT = 0x86f,
	ACT_DCG_ANCIENT_IDLE = 0x870,
	ACT_PLAYER_MATCH_CLOCK_IDLE = 0x871,
	ACT_DCG_BOARD_PROP_IDLE = 0x872,
	ACT_DCG_BOARD_PROP_IDLE_RARE = 0x873,
	ACT_DCG_BOARD_PROP_CLICK = 0x874,
	ACT_DCG_ASTROLABE_INTRO = 0x875,
	ACT_DCG_ASTROLABE_IDLE = 0x876,
	ACT_DCG_INITIATIVE_INTRO_LOCAL = 0x877,
	ACT_DCG_INITIATIVE_INTRO_OPPONENT = 0x878,
	ACT_DCG_INITIATIVE_LOCAL_IDLE = 0x879,
	ACT_DCG_INITIATIVE_OPPONENT_IDLE = 0x87a,
	ACT_DCG_INITIATIVE_LOCAL_ACTION_PREVIEW = 0x87b,
	ACT_DCG_INITIATIVE_OPPONENT_ACTION_PREVIEW = 0x87c,
	ACT_DCG_INITIATIVE_LOCAL_ACTION_QUICKCAST_PREVIEW = 0x87d,
	ACT_DCG_INITIATIVE_OPPONENT_ACTION_QUICKCAST_PREVIEW = 0x87e,
	ACT_DCG_INITIATIVE_LOCAL_ACTION_PASS = 0x87f,
	ACT_DCG_INITIATIVE_OPPONENT_ACTION_PASS = 0x880,
	ACT_DCG_INITIATIVE_LOCAL_ACTION_QUICKCAST_PASS = 0x881,
	ACT_DCG_INITIATIVE_OPPONENT_ACTION_QUICKCAST_PASS = 0x882,
};

// Aligment: 2
// Size: 8
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0
	int32_t m_nExample2; // 0x4
};

// Aligment: 1
// Size: 8
struct ResourceId_t
{
public:
	uint64_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10
};

// Aligment: 1
// Size: 16
class CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nBase; // 0x8
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10
};

// Aligment: 20
// Size: 368
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0
	Vector m_Vector; // 0x8
	VectorAligned m_VectorAligned; // 0x20
	QuaternionAligned m_QuaternionAligned; // 0x30
	QAngle m_QAngle; // 0x40
	RadianEuler m_RadianEuler; // 0x4c
	DegreeEuler m_DegreeEuler; // 0x58
	Quaternion m_Quaternion; // 0x64
	matrix3x4_t m_matrix3x4_t; // 0x74
	matrix3x4a_t m_matrix3x4a_t; // 0xb0
	Color m_Color; // 0xe0
	Vector4D m_Vector4D; // 0xe4
	CTransform m_CTransform; // 0x100
	KeyValues* m_pKeyValues; // 0x120
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128
	CUtlString m_CUtlString; // 0x140
	CUtlSymbol m_CUtlSymbol; // 0x148
	CUtlStringToken m_stringToken; // 0x14c
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x150
	KeyValues3 m_KV3; // 0x158
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResourceManifestInternal
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCEntityLump
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCSequenceGroupData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCTextureBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCModel
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVDataResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIVectorGraphic
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIMaterial2
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVMixListResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCWorldNode
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaStyle
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDACGameDefsData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimationGroup
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVSound_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaLayout
{
public:
// <no members described>
};

// Aligment: 4
// Size: 64
class FourQuaternions
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
	fltx4 z; // 0x20
	fltx4 w; // 0x30
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSnapshot
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPostProcessingResource
{
public:
// <no members described>
};

// Aligment: 2
// Size: 24
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeProceduralTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorld_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPhysAggregateData
{
public:
// <no members described>
};

// Aligment: 1
// Size: 8
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVoxelVisibility
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCRenderMesh
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIAnimGraphModelBinding
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeManifestTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCMorphSetData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
// <no members described>
};

// Aligment: 7
// Size: 56
struct RenderInputLayoutField_t
{
public:
	uint8[32] m_pSemanticName; // 0x0
	int32_t m_nSemanticIndex; // 0x20
	uint32_t m_Format; // 0x24
	int32_t m_nOffset; // 0x28
	int32_t m_nSlot; // 0x2c
	RenderSlotType_t m_nSlotType; // 0x30
	int32_t m_nInstanceStepRate; // 0x34
};

// Aligment: 1
// Size: 24
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0
};

// Aligment: 4
// Size: 196
struct VsInputSignatureElement_t
{
public:
	char[64] m_pName; // 0x0
	char[64] m_pSemantic; // 0x40
	char[64] m_pD3DSemanticName; // 0x80
	int32_t m_nD3DSemanticIndex; // 0xc0
};

// Aligment: 0
// Size: 48
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 3
// Size: 48
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 1
// Size: 4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0
};

// Aligment: 4
// Size: 40
struct EngineLoopState_t
{
public:
	int32_t m_nPlatWindowWidth; // 0x18
	int32_t m_nPlatWindowHeight; // 0x1c
	int32_t m_nRenderWidth; // 0x20
	int32_t m_nRenderHeight; // 0x24
};

// Aligment: 8
// Size: 120
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
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70
};

// Aligment: 0
// Size: 8
class CEmptyEntityInstance
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 3
// Size: 48
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	bool m_bFirstTick; // 0x28
	bool m_bLastTick; // 0x29
};

// Aligment: 0
// Size: 16
struct EntOutput_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 96
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	int32_t m_nClientOutputFrames; // 0x28
	double m_flRealTime; // 0x30
	double m_flRenderTime; // 0x38
	double m_flRenderFrameTime; // 0x40
	double m_flRenderFrameTimeUnbounded; // 0x48
	double m_flRenderFrameTimeUnscaled; // 0x50
	double m_flTickRemainder; // 0x58
};

// Aligment: 0
// Size: 64
struct EventServerAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct EventClientSendInput_t
{
public:
// <no members described>
};

// Aligment: 3
// Size: 48
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 5
// Size: 72
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	double m_flRenderFrameTime; // 0x30
	double m_flRenderFrameTimeUnbounded; // 0x38
	bool m_bRenderOnly; // 0x40
};

// Aligment: 0
// Size: 1
struct EventModInitialized_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class CVariantDefaultAllocator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct EventSplitScreenStateChanged_t
{
public:
// <no members described>
};

// Aligment: 4
// Size: 64
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nCurrentTickThisFrame; // 0x34
	int32_t m_nTotalTicksThisFrame; // 0x38
	int32_t m_nTotalTicks; // 0x3c
};

// Aligment: 0
// Size: 1
struct EventClientProcessNetworking_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IHandleEntity
{
public:
// <no members described>
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

// Aligment: 0
// Size: 48
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 1
// Size: 4
struct EventProfileStorageAvailable_t
{
public:
	int32_t m_nSplitScreenSlot; // 0x0
};

// Aligment: 0
// Size: 64
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0
};

// Aligment: 1
// Size: 4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0
};

// Aligment: 3
// Size: 48
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 1
// Size: 16
struct EventPreDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 3
// Size: 48
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	uint32_t m_nVRDisplayID; // 0x2c
};

// Aligment: 5
// Size: 64
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	float m_flRenderFrameTime; // 0x30
	float m_flRenderFrameTimeUnbounded; // 0x34
	bool m_bRenderOnly; // 0x38
};

// Aligment: 0
// Size: 48
struct EventClientSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CNetworkVarChainer
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x8
};

// Aligment: 0
// Size: 48
struct EntInput_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class CEntityComponent
{
public:
// <no members described>
};

// Aligment: 4
// Size: 40
class CEntityComponentHelper
{
public:
	uint32_t m_flags; // 0x8
	EntComponentInfo_t* m_pInfo; // 0x10
	int32_t m_nPriority; // 0x18
	CEntityComponentHelper* m_pNext; // 0x20
};

// Aligment: 0
// Size: 48
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 5
// Size: 56
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRenderTime; // 0x28
	float m_flRealTime; // 0x2c
	float m_flRenderFrameTimeUnbounded; // 0x30
	bool m_bRenderOnly; // 0x34
};

// Aligment: 1
// Size: 1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0
};

// Aligment: 1
// Size: 40
class CEntityIOOutput
{
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18
};

// Aligment: 4
// Size: 64
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nCurrentTickThisFrame; // 0x34
	int32_t m_nTotalTicksThisFrame; // 0x38
	int32_t m_nTotalTicks; // 0x3c
};

// Aligment: 3
// Size: 48
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 0
// Size: 48
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8
};

// Aligment: 1
// Size: 16
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8
};

// Aligment: 10
// Size: 112
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
	float32[5] m_flBlurWeight; // 0x20
	Vector[5] m_vBlurTint; // 0x34
};

// Aligment: 14
// Size: 304
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

// Aligment: 1
// Size: 32
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8
};

// Aligment: 8
// Size: 32
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

// Aligment: 5
// Size: 20
struct PostProcessingLocalContrastParameters_t
{
public:
	float m_flLocalContrastStrength; // 0x0
	float m_flLocalContrastEdgeStrength; // 0x4
	float m_flLocalContrastVignetteStart; // 0x8
	float m_flLocalContrastVignetteEnd; // 0xc
	float m_flLocalContrastVignetteBlur; // 0x10
};

// Aligment: 6
// Size: 36
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

// Aligment: 1
// Size: 16
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8
};

// Aligment: 10
// Size: 248
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
	bool m_bHasBloomParams; // 0x24
	PostProcessingBloomParameters_t m_bloomParams; // 0x28
	bool m_bHasVignetteParams; // 0x98
	PostProcessingVignetteParameters_t m_vignetteParams; // 0x9c
	bool m_bHasLocalContrastParams; // 0xc0
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xc4
	int32_t m_nColorCorrectionVolumeDim; // 0xd8
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xe0
};

// Aligment: 1
// Size: 16
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8
};

// Aligment: 1
// Size: 24
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8
};

// Aligment: 1
// Size: 8
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0
};

// Aligment: 1
// Size: 56
class CAnimTagManagerUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 11
// Size: 216
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
	bool m_bUserSpecifiedColor; // 0x8c
	bool m_bUserSpecifiedMaterialGroup; // 0x8d
	bool m_bAcceptParentMaterialDrivenDecals; // 0x8e
};

// Aligment: 3
// Size: 256
class CMoodVData
{
public:
	// MPropertyFriendlyName "Model"
	// MPropertyDescription "Model to get the animation list from"
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0
	// MPropertyFriendlyName "Mood Type"
	// MPropertyDescription "Type of mood"
	// MDefaultString
	MoodType_t m_nMoodType; // 0xe0
	// MPropertyFriendlyName "Layers"
	// MPropertyDescription "Layers for this mood"
	CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xe8
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

// Aligment: 2
// Size: 112
class CSetFacingUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FacingMode m_facingMode; // 0x68
	bool m_bResetChild; // 0x6c
};

// Aligment: 1
// Size: 16
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0
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
// Size: 8
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 3
// Size: 88
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

// Aligment: 7
// Size: 28
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
	// MDefaultString
	float m_hardVelocityThreshold; // 0x14
	// MKV3TransferName "staticImpactVolume"
	float m_flStaticImpactVolume; // 0x18
};

// Aligment: 1
// Size: 56
class CBlend2DItemBase
{
public:
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x18
};

// Aligment: 10
// Size: 168
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CBlend2DItemBase > > m_items; // 0x50
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendSourceX; // 0x68
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_paramX; // 0x6c
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendSourceY; // 0x70
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_paramY; // 0x74
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x78
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x79
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x7a
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x7c
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80
};

// Aligment: 0
// Size: 64
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 88
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 8
// Size: 224
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	CAnimInputDamping m_damping; // 0x80
	StaticPoseCacheHandle[10] m_poseCacheHandles; // 0x98
	AimMatrixBlendMode m_eBlendMode; // 0xc0
	float m_fAngleIncrement; // 0xc4
	int32_t m_nSequenceMaxFrame; // 0xc8
	int32_t m_nBoneMaskIndex; // 0xcc
	bool m_bTargetIsPosition; // 0xd0
};

// Aligment: 13
// Size: 184
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
	AnimValueSource m_facingTarget; // 0xa0
	CAnimParamHandle m_hParam; // 0xa4
	float m_flTurnToFaceOffset; // 0xac
	bool m_bTurnToFace; // 0xb0
};

// Aligment: 1
// Size: 80
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
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

// Aligment: 1
// Size: 480
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70
};

// Aligment: 2
// Size: 24
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0
	Vector m_vecSize; // 0xc
};

// Aligment: 13
// Size: 168
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

// Aligment: 5
// Size: 72
class CControlValueCondition : public CAnimStateConditionBase
{
public:
	ControlValue m_sourceControlValue; // 0x30
	int32_t m_comparisonValueType; // 0x34
	float m_comparisonFixedValue; // 0x38
	ControlValue m_comparisonControlValue; // 0x3c
	AnimParamID m_comparisonParamID; // 0x40
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48
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

// Aligment: 1
// Size: 40
class CMotionMetricBase
{
public:
	// MPropertyHideField
	float m_flWeight; // 0x20
};

// Aligment: 2
// Size: 136
class CFootStepTriggerUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< FootStepTrigger > m_triggers; // 0x68
	float m_flTolerance; // 0x84
};

// Aligment: 11
// Size: 168
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

// Aligment: 24
// Size: 184
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

// Aligment: 8
// Size: 176
class CDirectionalBlendUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	HSequence[8] m_hSequences; // 0x5c
	CAnimInputDamping m_damping; // 0x80
	AnimValueSource m_blendValueSource; // 0x98
	CAnimParamHandle m_paramIndex; // 0x9c
	float m_playbackSpeed; // 0xa4
	float m_duration; // 0xa8
	bool m_bLoop; // 0xac
	bool m_bLockBlendOnReset; // 0xad
};

// Aligment: 2
// Size: 32
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8
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

// Aligment: 1
// Size: 4
class AnimParamID
{
public:
	uint32_t m_id; // 0x0
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

// Aligment: 14
// Size: 144
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

// Aligment: 6
// Size: 72
class CRagdollAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x30
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x34
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x38
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x3c
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x40
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x44
};

// Aligment: 1
// Size: 56
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x30
};

// Aligment: 3
// Size: 24
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

// Aligment: 0
// Size: 48
class CStringAnimTag : public CAnimTagBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0
};

// Aligment: 1
// Size: 88
class CAnimParameterList
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x18
};

// Aligment: 7
// Size: 168
class CAnimUpdateSharedData
{
public:
	CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10
	CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28
	CUtlVector< CSmartPtr< IAnimManagerUpdater > > m_managers; // 0x48
	CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0x60
	CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0x68
	CAnimNodePath m_rootNodePath; // 0x70
	bool m_bNetworkingEnable; // 0xa0
};

// Aligment: 9
// Size: 136
class CBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children; // 0x38
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x50
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
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

// Aligment: 13
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
	CAnimParamHandle m_hRotationParam; // 0x12c
	bool m_bMatchTargetOrientation; // 0x134
	bool m_bAlwaysUseFallbackHinge; // 0x135
	VectorAligned m_vFallbackHingeAxis; // 0x140
	int32_t m_nFixedBoneIndex; // 0x150
	int32_t m_nMiddleBoneIndex; // 0x154
	int32_t m_nEndBoneIndex; // 0x158
};

// Aligment: 1
// Size: 48
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
};

// Aligment: 1
// Size: 24
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0
};

// Aligment: 0
// Size: 88
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 176
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

// Aligment: 2
// Size: 160
class CSolveIKChainUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80
};

// Aligment: 2
// Size: 152
class CSubtractUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyChannelsSeparately; // 0x90
};

// Aligment: 1
// Size: 24
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0
};

// Aligment: 2
// Size: 32
class CAnimMotorUpdaterBase
{
public:
	CUtlString m_name; // 0x10
	bool m_bDefault; // 0x18
};

// Aligment: 8
// Size: 160
class CMoverUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimInputDamping m_damping; // 0x70
	AnimValueSource m_facingTarget; // 0x88
	CAnimParamHandle m_hParam; // 0x8c
	float m_flTurnToFaceOffset; // 0x94
	bool m_bAdditive; // 0x98
	bool m_bApplyMovement; // 0x99
	bool m_bOrientMovement; // 0x9a
	bool m_bApplyRotation; // 0x9b
};

// Aligment: 0
// Size: 112
class COrientConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class CAnimClipDataManager
{
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18
};

// Aligment: 9
// Size: 80
class CStateUpdateData
{
public:
	CUtlString m_name; // 0x0
	CAnimUpdateNodeRef m_pChild; // 0x8
	CUtlVector< int32 > m_transitionIndices; // 0x18
	CUtlVector< CStateTag > m_tags; // 0x30
	AnimStateID m_stateID; // 0x48
	bitfield:1 m_bIsStartState; // 0x0
	bitfield:1 m_bIsEndState; // 0x0
	bitfield:1 m_bIsPassthrough; // 0x0
	bitfield:1 m_bExclusiveRootMotion; // 0x0
};

// Aligment: 0
// Size: 120
class CGroupInputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 48
struct WristBone_t
{
public:
	CTransform m_xOffsetTransformMS; // 0x0
	int32_t m_boneIndex; // 0x20
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
	Quaternion[2] m_axes; // 0x1c
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

// Aligment: 2
// Size: 24
class CLookHeadingConditionUpdater : public IConditionUpdater
{
public:
	float m_comparisonValue; // 0x10
	Comparison_t m_operation; // 0x14
};

// Aligment: 1
// Size: 48
class CAnimStateConditionBase
{
public:
	uint8_t m_comparisonOp; // 0x28
};

// Aligment: 2
// Size: 8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0
	float m_flTraceRadius; // 0x4
};

// Aligment: 0
// Size: 112
class CPointConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
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

// Aligment: 5
// Size: 20
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
	// MDefaultString
	float m_thickness; // 0xc
	// MKV3TransferName "dampening"
	float m_dampening; // 0x10
};

// Aligment: 2
// Size: 4
class ClipIndex
{
public:
	uint16_t m_groupIndex; // 0x0
	uint16_t m_clipIndex; // 0x2
};

// Aligment: 0
// Size: 112
class CGroupOutputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class CTagConditionUpdater : public IConditionUpdater
{
public:
	Comparison_t m_operation; // 0x10
	int32_t m_tagIndex; // 0x14
	bool m_comparisonValue; // 0x18
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
// Size: 12
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0
	float m_flAngleWeight; // 0x4
	int16_t m_nLocalBone; // 0x8
	bool m_bBonesOrientedAlongPositiveX; // 0xa
};

// Aligment: 1
// Size: 216
class CGroupAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeManager m_nodeMgr; // 0x80
};

// Aligment: 2
// Size: 24
class CFinishedConditionUpdater : public IConditionUpdater
{
public:
	FinishedConditionOption m_option; // 0x10
	bool m_bIsFinished; // 0x14
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

// Aligment: 0
// Size: 32
class CAnimGraphGeneralSettings : public CAnimGraphSettingsGroup
{
public:
// <no members described>
};

// Aligment: 6
// Size: 88
class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:
	CUtlVector< float32 > m_sampleTimes; // 0x20
	float m_flSpringConstant; // 0x3c
	float m_flAnticipationDistance; // 0x40
	CAnimParamHandle m_hAnticipationPosParam; // 0x44
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x4c
	bool m_bUseAcceleration; // 0x54
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
// Size: 24
class CLookPitchConditionUpdater : public IConditionUpdater
{
public:
	float m_comparisonValue; // 0x10
	Comparison_t m_operation; // 0x14
};

// Aligment: 1
// Size: 152
class CBoneConstraintPoseSpaceBone : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70
};

// Aligment: 2
// Size: 32
class CAnimGraphModelBinding
{
public:
	CUtlString m_modelName; // 0x8
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10
};

// Aligment: 1
// Size: 48
class CAnimGraphSettingsManager
{
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18
};

// Aligment: 9
// Size: 208
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

// Aligment: 3
// Size: 48
class CStaticPoseCache
{
public:
	CUtlVector< CCachedPose > m_poses; // 0x10
	int32_t m_nBoneCount; // 0x28
	int32_t m_nMorphCount; // 0x2c
};

// Aligment: 2
// Size: 24
class CForceFacingConditionUpdater : public IConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10
	bool m_bComparisonValue; // 0x14
};

// Aligment: 1
// Size: 56
class CLookPitchCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30
};

// Aligment: 2
// Size: 104
class CSequenceBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x38
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
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
// Size: 160
class CTiltTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	int32_t m_nTargetAxis; // 0x70
	int32_t m_nSlaveAxis; // 0x74
};

// Aligment: 1
// Size: 56
class CPostGraphIKTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Blend Amount"
	float m_flBlendAmount; // 0x30
};

// Aligment: 2
// Size: 32
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0
	CUtlVector< CFlexOp > m_FlexOps; // 0x8
};

// Aligment: 2
// Size: 112
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	bool m_bFinishEarly; // 0x6c
	bool m_bResetOnFinish; // 0x6d
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
// Size: 152
class CTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	bool m_bInverse; // 0x70
	Quaternion m_qParentBindRotation; // 0x74
	Quaternion m_qChildBindRotation; // 0x84
};

// Aligment: 2
// Size: 64
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10
	float m_flAxisSize; // 0x30
};

// Aligment: 8
// Size: 104
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
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x54
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x55
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x56
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

// Aligment: 6
// Size: 88
class CPlayerInputAnimMotor : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x28
	// MPropertyFriendlyName "Use Acceleration"
	// MPropertyAttrChangeCallback
	bool m_bUseAcceleraion; // 0x40
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

// Aligment: 7
// Size: 184
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
};

// Aligment: 3
// Size: 440
class CRenderMesh
{
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10
	CUtlVector< CBaseConstraint* > m_constraints; // 0x88
	CRenderSkeleton m_skeleton; // 0xa0
};

// Aligment: 1
// Size: 8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0
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

// Aligment: 2
// Size: 72
class CAnimClipData
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_clipName; // 0x38
};

// Aligment: 6
// Size: 96
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

// Aligment: 2
// Size: 8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
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

// Aligment: 1
// Size: 112
class CProxyAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "External Connections"
	// MPropertyAutoExpandSelf
	// MPropertyAttrChangeCallback
	CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x48
};

// Aligment: 23
// Size: 256
class CMotionMatchingUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CMotionDataSet m_dataSet; // 0x58
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78
	bool m_bSearchAtInterval; // 0x98
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
	float m_flSelectionThreshold; // 0xbc
	bool m_bGoalAssist; // 0xc0
	float m_flGoalAssistDistance; // 0xc4
	float m_flGoalAssistTolerance; // 0xc8
	CAnimInputDamping m_distanceScale_Damping; // 0xd0
	float m_flDistanceScale_OuterRadius; // 0xe8
	float m_flDistanceScale_InnerRadius; // 0xec
	float m_flDistanceScale_MaxScale; // 0xf0
	float m_flDistanceScale_MinScale; // 0xf4
	bool m_bEnableDistanceScaling; // 0xf8
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
	static CFootTrajectory &Get_Identity() { return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->m_static_fiels[0]->m_instance); }
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
// Size: 16
class CAnimationGraphVisualizerPrimitiveBase
{
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8
};

// Aligment: 13
// Size: 136
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
// Size: 56
class CMoveSpeedCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30
};

// Aligment: 2
// Size: 8
class CStateTag
{
public:
	int8_t m_tagIndex; // 0x0
	StateTagBehavior m_tagBehavior; // 0x4
};

// Aligment: 1
// Size: 72
class CAnimNodeManager
{
public:
	// MPropertyHideField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8
};

// Aligment: 3
// Size: 112
class CStateMachineAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x40
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x58
	// MPropertyFriendlyName "Lock State when Waning"
	bool m_bLockStateWhenWaning; // 0x59
};

// Aligment: 8
// Size: 384
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
	CAnimRetargetData m_retarget; // 0x110
	CUtlVector< CBufferString > m_szScripts; // 0x160
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

// Aligment: 1
// Size: 56
class CAudioAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Audio Clip"
	// MPropertyAttributeEditor "SoundPicker"
	CUtlString m_clipName; // 0x30
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

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceBone::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< CTransform > m_outputTransformList; // 0x10
};

// Aligment: 6
// Size: 96
class CDampedPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x48
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x54
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x58
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x5c
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

// Aligment: 10
// Size: 48
class CTransitionUpdateData
{
public:
	CUtlVector< CSmartPtr< IConditionUpdater > > m_conditions; // 0x0
	CBlendCurve m_curve; // 0x18
	int16_t m_srcStateIndex; // 0x20
	int16_t m_destStateIndex; // 0x22
	float m_blendDuration; // 0x24
	float m_resetCycleValue; // 0x28
	bitfield:1 m_bReset; // 0x0
	bitfield:3 m_resetCycleOption; // 0x0
	bitfield:1 m_bForceFootPlant; // 0x0
	bitfield:1 m_bDisabled; // 0x0
};

// Aligment: 2
// Size: 24
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
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

// Aligment: 2
// Size: 8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0
	float m_flControlPoint2; // 0x4
};

// Aligment: 7
// Size: 7
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

// Aligment: 3
// Size: 128
class CAnimationSubGraph
{
public:
	CAnimNodeManager m_nodeManager; // 0x10
	CSmartPtr< CAnimParameterList > m_pParameterList; // 0x58
	CSmartPtr< CAnimTagManager > m_pTagManager; // 0x60
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
// Size: 144
class CMorphConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlString m_sTargetMorph; // 0x70
	int32_t m_nSlaveChannel; // 0x78
	float m_flMin; // 0x7c
	float m_flMax; // 0x80
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

// Aligment: 2
// Size: 24
class CFacingHeadingConditionUpdater : public IConditionUpdater
{
public:
	float m_comparisonValue; // 0x10
	Comparison_t m_operation; // 0x14
};

// Aligment: 10
// Size: 160
class CMorphSetData
{
public:
	int32_t m_nWidth; // 0x10
	int32_t m_nHeight; // 0x14
	MorphLookupType_t m_nLookupType; // 0x18
	MorphEncodingType_t m_nEncodingType; // 0x1c
	CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x20
	CUtlVector< CMorphData > m_morphDatas; // 0x38
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x50
	CUtlVector< CFlexDesc > m_FlexDesc; // 0x58
	CUtlVector< CFlexController > m_FlexControllers; // 0x70
	CUtlVector< CFlexRule > m_FlexRules; // 0x88
};

// Aligment: 2
// Size: 56
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	FinishedConditionOption m_option; // 0x30
	bool m_bIsFinished; // 0x34
};

// Aligment: 2
// Size: 16
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0
	uint32_t m_nBindOffsetBytes; // 0x8
};

// Aligment: 1
// Size: 88
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
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

// Aligment: 4
// Size: 96
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
	float m_flStoppingDistance; // 0x54
	float m_flTargetSpeed; // 0x58
	bool m_bIgnoreDirection; // 0x5c
};

// Aligment: 3
// Size: 80
class CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_means; // 0x18
	CUtlVector< float32 > m_standardDeviations; // 0x30
	float m_flWeight; // 0x48
};

// Aligment: 3
// Size: 88
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

// Aligment: 10
// Size: 64
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0
	Vector m_vMidpointPositionMS; // 0xc
	float m_flStanceDirectionMS; // 0x18
	Vector m_vToStrideStartPos; // 0x1c
	float m_flMaxExtent; // 0x28
	CAnimCycle m_stanceCycle; // 0x2c
	CFootCycle m_footLiftCycle; // 0x30
	CFootCycle m_footOffCycle; // 0x34
	CFootCycle m_footStrikeCycle; // 0x38
	CFootCycle m_footLandCycle; // 0x3c
};

// Aligment: 3
// Size: 112
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

// Aligment: 5
// Size: 88
class CConstraintSlave
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vBasePosition; // 0x8
	Quaternion m_qBaseOrientation; // 0x14
	CUtlString m_sName; // 0x28
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

// Aligment: 4
// Size: 48
class CControlValueConditionUpdater : public IConditionUpdater
{
public:
	CompValues m_comparison; // 0x10
	ControlValue m_sourceControlValue; // 0x20
	ComparisonValueType m_comparisonValueType; // 0x24
	Comparison_t m_operation; // 0x28
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

// Aligment: 3
// Size: 144
class CContainerAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x58
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x5c
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x60
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

// Aligment: 1
// Size: 4
class AnimTagID
{
public:
	uint32_t m_id; // 0x0
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

// Aligment: 4
// Size: 80
class CFootstepLandedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x30
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x38
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x40
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x48
};

// Aligment: 1
// Size: 88
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40
};

// Aligment: 2
// Size: 88
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0
	CFootTrajectories m_trajectories; // 0x40
};

// Aligment: 2
// Size: 24
class CTimeConditionUpdater : public IConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10
	float m_flComparisonValue; // 0x14
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

// Aligment: 2
// Size: 152
class CAddUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyChannelsSeparately; // 0x90
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
// Size: 88
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 8
// Size: 104
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
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x54
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x55
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x56
};

// Aligment: 1
// Size: 272
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FollowAttachmentSettings_t m_opFixedData; // 0x70
};

// Aligment: 2
// Size: 64
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:
	CAnimInputDamping m_facingDamping; // 0x20
	bool m_bLockToPath; // 0x3c
};

// Aligment: 10
// Size: 168
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
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x90
};

// Aligment: 3
// Size: 96
class CAnimReplayFrame
{
public:
	CUtlBinaryBlock m_instanceData; // 0x10
	CTransform m_localToWorldTransform; // 0x30
	float m_timeStamp; // 0x50
};

// Aligment: 0
// Size: 80
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 1
// Size: 112
class CSpeedScaleUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_paramIndex; // 0x68
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
	// MDefaultString
	bool m_bActiveListening; // 0x8
	// MPropertyFriendlyName "Active When Talking"
	// MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
	// MDefaultString
	bool m_bActiveTalking; // 0x9
	// MPropertyFriendlyName "Animations"
	// MPropertyDescription "List of animations to choose from"
	CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10
	// MPropertyFriendlyName "Intensity"
	// MPropertyDescription "Intensity of the animation"
	// MPropertyAttributeRange "0 1"
	// MDefaultString
	CRangeFloat m_flIntensity; // 0x28
	// MPropertyFriendlyName "Duration Scale"
	// MPropertyDescription "Multiplier of the animation duration"
	// MDefaultString
	CRangeFloat m_flDurationScale; // 0x30
	// MPropertyFriendlyName "Duration scale as ints"
	// MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
	// MDefaultString
	bool m_bScaleWithInts; // 0x38
	// MPropertyFriendlyName "Next Animation Start"
	// MPropertyDescription "Time before the next animation can start"
	// MDefaultString
	CRangeFloat m_flNextStart; // 0x3c
	// MPropertyFriendlyName "Offset From Start"
	// MPropertyDescription "Time from the start of the mood before an animation can start"
	// MDefaultString
	CRangeFloat m_flStartOffset; // 0x44
	// MPropertyFriendlyName "Offset From End"
	// MPropertyDescription "Time from the end of the mood when an animation cannot play"
	// MDefaultString
	CRangeFloat m_flEndOffset; // 0x4c
	// MPropertyFriendlyName "Fade In Time"
	// MPropertyDescription "Fade in time of the animation"
	// MDefaultString
	float m_flFadeIn; // 0x54
	// MPropertyFriendlyName "Fade Out Time"
	// MPropertyDescription "Fade out time of the animation"
	// MDefaultString
	float m_flFadeOut; // 0x58
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceMorph::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< float32 > m_outputWeightList; // 0x10
};

// Aligment: 24
// Size: 240
class CMotionMatchingAnimNode : public CAnimNodeBase
{
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

// Aligment: 6
// Size: 72
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

// Aligment: 4
// Size: 48
class CAnimRetargetChainData
{
public:
	CBufferString m_sChainName; // 0x0
	int32_t m_nGroupType; // 0x10
	int32_t m_nChainType; // 0x14
	CUtlVector< int32 > m_nElement; // 0x18
};

// Aligment: 6
// Size: 352
class CLookAtUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x148
	CAnimParamHandle m_paramIndex; // 0x14c
	CAnimParamHandle m_weightParamIndex; // 0x154
	bool m_bResetChild; // 0x15c
	bool m_bLockWhenWaning; // 0x15d
};

// Aligment: 8
// Size: 232
class CHitReactUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68
	CAnimParamHandle m_triggerParam; // 0xb4
	CAnimParamHandle m_hitBoneParam; // 0xbc
	CAnimParamHandle m_hitOffsetParam; // 0xc4
	CAnimParamHandle m_hitDirectionParam; // 0xcc
	CAnimParamHandle m_hitStrengthParam; // 0xd4
	float m_flMinDelayBetweenHits; // 0xdc
	bool m_bResetChild; // 0xe0
};

// Aligment: 1
// Size: 168
class CSkeletalInputUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58
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
// Size: 96
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48
	KeyValues3 m_Args; // 0x50
};

// Aligment: 9
// Size: 96
class CAnimStateTransition
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateConditionBase > > m_conditions; // 0x28
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x40
	// MPropertyHideField
	AnimStateID m_destState; // 0x44
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x48
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x4c
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	float m_flFixedCycleValue; // 0x50
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x54
	// MPropertyFriendlyName "Park Feet"
	bool m_bForceFootPlant; // 0x5c
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x5d
};

// Aligment: 3
// Size: 80
class CMotionClip
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x40
};

// Aligment: 6
// Size: 368
class CAimMatrixUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x158
	CAnimParamHandle m_paramIndex; // 0x15c
	HSequence m_hSequence; // 0x164
	bool m_bResetChild; // 0x168
	bool m_bLockWhenWaning; // 0x169
};

// Aligment: 5
// Size: 160
class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CStateUpdateData > m_states; // 0x60
	CUtlVector< CTransitionUpdateData > m_transitions; // 0x78
	int32_t m_startStateIndex; // 0x94
	bool m_bBlockWaningTags; // 0x98
	bool m_bLockStateWhenWaning; // 0x99
};

// Aligment: 2
// Size: 72
class CAnimMovementManager
{
public:
	CAnimMotorList m_MotorList; // 0x18
	CAnimMovementSettings m_MovementSettings; // 0x38
};

// Aligment: 13
// Size: 288
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
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xb8
	CBufferString m_localNodeName; // 0xd0
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xe0
	KeyValues3 m_keyValues; // 0xf8
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x108
};

// Aligment: 1
// Size: 32
class CAnimMotorList
{
public:
	CUtlVector< CSmartPtr< CAnimMotorBase > > m_motors; // 0x8
};

// Aligment: 0
// Size: 56
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
class CAnimNodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0
	AnimNodeOutputID m_outputID; // 0x4
};

// Aligment: 22
// Size: 664
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
};

// Aligment: 2
// Size: 72
class CQuaternionAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x30
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x40
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

// Aligment: 11
// Size: 208
class CBlendUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58
	CUtlVector< uint8 > m_sortedOrder; // 0x70
	CUtlVector< float32 > m_targetValues; // 0x88
	AnimValueSource m_blendValueSource; // 0xa4
	CAnimParamHandle m_paramIndex; // 0xa8
	CAnimInputDamping m_damping; // 0xb0
	BlendKeyType m_blendKeyType; // 0xc8
	bool m_bLockBlendOnReset; // 0xcc
	bool m_bSyncCycles; // 0xcd
	bool m_bLoop; // 0xce
	bool m_bLockWhenWaning; // 0xcf
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

// Aligment: 1
// Size: 4
class HSequence
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 2
// Size: 112
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	bool m_bIgnoreSlope; // 0x68
};

// Aligment: 3
// Size: 12
class ClipSampleInfo
{
public:
	ClipIndex m_clipIndex; // 0x0
	float m_clipCycle; // 0x4
	uint16_t m_clipSampleIndex; // 0x8
};

// Aligment: 0
// Size: 112
class CParentConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
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

// Aligment: 7
// Size: 64
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

// Aligment: 0
// Size: 16
class IConditionUpdater
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
struct MoodAnimation_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Name of the animation"
	// MPropertyAttributeEditor "VDataModelAnim( ../../../m_sModelName )"
	CUtlString m_sName; // 0x0
	// MPropertyFriendlyName "Weight"
	// MPropertyDescription "Weight of the animation, higher numbers get picked more"
	// MDefaultString
	float m_flWeight; // 0x8
};

// Aligment: 11
// Size: 144
class CAnimState
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x40
	// MPropertySuppressField
	CUtlVector< uint8 > m_tagBehaviors; // 0x58
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x70
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x78
	// MPropertyHideField
	AnimStateID m_stateID; // 0x80
	// MPropertyHideField
	Vector2D m_position; // 0x84
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x8c
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x8d
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x8e
	// MPropertyFriendlyName "Exclusive Root Motion"
	bool m_bIsRootMotionExclusive; // 0x8f
};

// Aligment: 1
// Size: 136
class CJiggleBoneUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68
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

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48
};

// Aligment: 6
// Size: 20
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

// Aligment: 1
// Size: 88
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
};

// Aligment: 15
// Size: 96
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
	float m_flMaxFootHeight; // 0x3c
	float m_flExtensionScale; // 0x40
	bool m_bEnableLockBreaking; // 0x44
	float m_flLockBreakTolerance; // 0x48
	float m_flLockBlendTime; // 0x4c
	bool m_bEnableStretching; // 0x50
	float m_flMaxStretchAmount; // 0x54
	float m_flStretchExtensionScale; // 0x58
};

// Aligment: 1
// Size: 152
class CJumpHelperUpdateNode : public CSequenceUpdateNode, CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_hTargetParam; // 0x90
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

// Aligment: 2
// Size: 72
class CPathAnimMotorBase : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Facing Damping"
	// MPropertySortPriority "90"
	CAnimInputDamping m_facingDamping; // 0x28
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x40
};

// Aligment: 20
// Size: 328
class CFootLockUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68
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

// Aligment: 3
// Size: 112
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
class CNodeBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x40
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

// Aligment: 9
// Size: 120
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Generate Movement"
	bool m_bApplyMovement; // 0x40
	// MPropertyFriendlyName "Orient Movement"
	bool m_bOrientMovement; // 0x41
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x42
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x43
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x44
	// MPropertyFriendlyName "Face Direction"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x48
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x4c
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50
};

// Aligment: 7
// Size: 128
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x40
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x48
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
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
// Size: 88
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
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

// Aligment: 8
// Size: 160
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
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x40
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x80
};

// Aligment: 1
// Size: 16
class CAnimUpdateNodeRef
{
public:
	int32_t m_nodeIndex; // 0x8
};

// Aligment: 8
// Size: 168
class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58
	CUtlVector< int8 > m_tags; // 0x70
	CBlendCurve m_blendCurve; // 0x8c
	float m_flBlendTime; // 0x94
	CAnimParamHandle m_hParameter; // 0x98
	SelectorTagBehavior_t m_eTagBehavior; // 0xa0
	bool m_bResetOnChange; // 0xa4
	bool m_bSyncCyclesOnChange; // 0xa5
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
// Size: 104
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58
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
// Size: 24
class CPathStatusConditionUpdater : public IConditionUpdater
{
public:
	PathStatusOptions m_optionToCheck; // 0x10
	bool m_bComparisonValue; // 0x14
};

// Aligment: 1
// Size: 56
class CLookHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30
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

// Aligment: 1
// Size: 4
class CCycleBase
{
public:
	float m_flCycle; // 0x0
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

// Aligment: 3
// Size: 72
class CMotionClipGroup
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionClip > > m_clips; // 0x20
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38
	// MPropertyFriendlyName "Enable On Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x40
};

// Aligment: 4
// Size: 64
class CCycleCondition : public CAnimStateConditionBase
{
public:
	float m_comparisonValue; // 0x30
	int32_t m_comparisonValueType; // 0x34
	ControlValue m_comparisonControlValue; // 0x38
	AnimParamID m_comparisonParamID; // 0x3c
};

// Aligment: 2
// Size: 88
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x40
};

// Aligment: 1
// Size: 16
class CAnimMovementSettings
{
public:
	bool m_bShouldCalculateSlope; // 0x8
};

// Aligment: 1
// Size: 24
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0
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

// Aligment: 10
// Size: 240
class CLeanMatrixUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	int32[3][3] m_frameCorners; // 0x5c
	StaticPoseCacheHandle[9] m_poses; // 0x80
	CAnimInputDamping m_damping; // 0xa8
	AnimVectorSource m_blendSource; // 0xc0
	CAnimParamHandle m_paramIndex; // 0xc4
	Vector m_verticalAxis; // 0xcc
	Vector m_horizontalAxis; // 0xd8
	HSequence m_hSequence; // 0xe4
	float m_flMaxValue; // 0xe8
	int32_t m_nSequenceMaxFrame; // 0xec
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

// Aligment: 12
// Size: 208
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
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

// Aligment: 2
// Size: 24
class CAnimUser
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
};

// Aligment: 6
// Size: 112
class CConstraintTarget
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vOffset; // 0x8
	Quaternion m_qOffset; // 0x14
	bool m_bIsAttachment; // 0x24
	CUtlString m_sName; // 0x28
};

// Aligment: 0
// Size: 72
class CInputStreamAnimNode : public CAnimNodeBase
{
public:
// <no members described>
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

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 2
// Size: 224
class CSubGraphAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x90
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x98
};

// Aligment: 4
// Size: 144
class CAnimParameterListUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18
	CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30
	CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50
	CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70
};

// Aligment: 5
// Size: 104
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

// Aligment: 5
// Size: 56
struct BlendItem_t
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x0
	CAnimUpdateNodeRef m_pChild; // 0x18
	HSequence m_hSequence; // 0x28
	Vector2D m_vPos; // 0x2c
	float m_flDuration; // 0x34
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

// Aligment: 2
// Size: 120
class CCycleControlUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AnimValueSource m_valueSource; // 0x68
	CAnimParamHandle m_paramIndex; // 0x6c
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

// Aligment: 2
// Size: 24
class CGroundConditionUpdater : public IConditionUpdater
{
public:
	Comparison_t m_comparisonOperation; // 0x10
	bool m_bComparisonValue; // 0x14
};

// Aligment: 4
// Size: 224
class CAnimationGraph : public CAnimationSubGraph
{
public:
	CSmartPtr< CAnimMovementManager > m_pMovementManager; // 0x80
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0x88
	CAnimClipDataManager m_clipDataManager; // 0x90
	CUtlString m_modelName; // 0xc8
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

// Aligment: 2
// Size: 32
class CMotionDataSet
{
public:
	CUtlVector< CMotionClipGroupData > m_clipGroups; // 0x0
	int32_t m_nDimensionCount; // 0x18
};

// Aligment: 4
// Size: 88
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

// Aligment: 3
// Size: 12
struct TagSpan_t
{
public:
	int32_t m_tagIndex; // 0x0
	float m_startCycle; // 0x4
	float m_endCycle; // 0x8
};

// Aligment: 2
// Size: 120
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x48
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandSelf
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x50
};

// Aligment: 3
// Size: 40
class CCycleConditionUpdater : public IConditionUpdater
{
public:
	CompValues m_comparisonValue; // 0x10
	ComparisonValueType m_comparisonValueType; // 0x20
	Comparison_t m_operation; // 0x24
};

// Aligment: 14
// Size: 160
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x40
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x44
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x48
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
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x6c
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x70
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78
};

// Aligment: 2
// Size: 56
class CTagCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x30
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x34
};

// Aligment: 6
// Size: 144
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

// Aligment: 1
// Size: 104
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
};

// Aligment: 2
// Size: 104
class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandSelf
	CUtlVector< CJiggleBoneItem > m_items; // 0x40
};

// Aligment: 2
// Size: 112
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	float m_flMinStepsRemaining; // 0x68
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

// Aligment: 13
// Size: 192
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
	// MDefaultString
	Vector m_vTintColor; // 0x24
	int16_t m_CullDataIndex; // 0x32
	int32_t m_nMeshID; // 0x34
	CRenderBufferBinding m_indexBuffer; // 0xa0
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xb8
};

// Aligment: 1
// Size: 56
class CFootFallAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x30
};

// Aligment: 2
// Size: 136
class CAimConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	Quaternion m_qAimOffset; // 0x70
	uint32_t m_nUpType; // 0x80
};

// Aligment: 0
// Size: 112
class CChoreoUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 96
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
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

// Aligment: 2
// Size: 32
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8
};

// Aligment: 2
// Size: 40
class CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyHideField
	bool m_bDefault; // 0x20
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
// Size: 88
class CAnimTagManager
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 6
// Size: 48
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

// Aligment: 6
// Size: 104
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
	float m_flAnticipationTime; // 0x44
	CAnimParamHandle m_hAnticipationPosParam; // 0x48
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x50
	float m_flSpringConstant; // 0x58
	float m_flMinSpringTension; // 0x5c
	float m_flMaxSpringTension; // 0x60
};

// Aligment: 0
// Size: 4
class CAnimCycle : public CCycleBase
{
public:
// <no members described>
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

// Aligment: 6
// Size: 120
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

// Aligment: 2
// Size: 56
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x30
	bool m_bComparisonValue; // 0x34
};

// Aligment: 5
// Size: 152
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
// Size: 4
class StaticPoseCacheHandle
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 2
// Size: 8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0
	float m_flMax; // 0x4
};

// Aligment: 3
// Size: 16
class CompValues
{
public:
	float m_fixedValue; // 0x0
	ControlValue m_controlValue; // 0x4
	CAnimParamHandle m_paramIndex; // 0x8
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

// Aligment: 3
// Size: 40
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8
	bool m_bTopLevel; // 0x20
};

// Aligment: 1
// Size: 56
class CFacingHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30
};

// Aligment: 2
// Size: 72
class CParameterAnimCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_paramID; // 0x30
	// MPropertyFriendlyName "Comparison Value"
	CAnimVariant m_comparisonValue; // 0x34
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

// Aligment: 3
// Size: 48
class CAnimTagSpan
{
public:
	AnimTagID m_id; // 0x20
	float m_fStartCycle; // 0x24
	float m_fDuration; // 0x28
};

// Aligment: 0
// Size: 72
class CPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 40
class CAnimNodeList
{
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10
};

// Aligment: 4
// Size: 144
class CSequenceAnimNode : public CAnimNodeBase
{
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

// Aligment: 2
// Size: 72
class CModelConfigElement
{
public:
	CUtlString m_ElementName; // 0x8
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10
};

// Aligment: 36
// Size: 304
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
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x88
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa8
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xac
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xb0
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xb4
	// MPropertyFriendlyName "Tolerance"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakTolerance; // 0xb8
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xbc
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xc0
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

// Aligment: 1
// Size: 56
class CTimeCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_comparisonValue; // 0x30
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
class CSingleFrameAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
	// MPropertyFriendlyName "Frame"
	int32_t m_nFrameIndex; // 0x58
};

// Aligment: 10
// Size: 144
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x48
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
};

// Aligment: 9
// Size: 120
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

// Aligment: 23
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

// Aligment: 5
// Size: 56
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
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34
};

// Aligment: 8
// Size: 136
class CAttachment
{
public:
	CUtlString m_name; // 0x0
	CUtlString[3] m_influenceNames; // 0x8
	Vector[3] m_vInfluenceOffsets; // 0x20
	Quaternion[3] m_vInfluenceRotations; // 0x44
	float32[3] m_influenceWeights; // 0x74
	bool[3] m_bInfluenceRootTransform; // 0x80
	uint8_t m_nInfluences; // 0x83
	bool m_bIgnoreRotation; // 0x84
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

// Aligment: 2
// Size: 32
class CMorphData
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8
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

// Aligment: 1
// Size: 4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0
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

// Aligment: 1
// Size: 56
class CGroundCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30
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

// Aligment: 1
// Size: 96
class CSingleFrameUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	StaticPoseCacheHandle m_hPoseCacheHandle; // 0x58
};

// Aligment: 1
// Size: 40
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking "
	bool m_bNetworkingEnabled; // 0x20
};

// Aligment: 1
// Size: 4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0
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
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0
	uint8_t m_index; // 0x4
};

// Aligment: 0
// Size: 104
class CRootUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
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

// Aligment: 3
// Size: 48
class CParamConditionUpdater : public IConditionUpdater
{
public:
	CAnimParamHandle m_paramIndex; // 0x10
	CAnimVariant m_comparisonValue; // 0x18
	Comparison_t m_operation; // 0x2c
};

// Aligment: 2
// Size: 24
class CMoveSpeedConditionUpdater : public IConditionUpdater
{
public:
	float m_comparisonValue; // 0x10
	Comparison_t m_operation; // 0x14
};

// Aligment: 1
// Size: 40
class CAnimStateList
{
public:
	CUtlVector< CAnimState* > m_states; // 0x10
};

// Aligment: 2
// Size: 8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0
	float m_weight; // 0x4
};

// Aligment: 2
// Size: 24
class CMoveHeadingConditionUpdater : public IConditionUpdater
{
public:
	float m_comparisonValue; // 0x10
	Comparison_t m_operation; // 0x14
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

// Aligment: 4
// Size: 64
class CAnimMovementUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x18
	int32_t m_nDefaultMotorIndex; // 0x38
	bool m_bMoveVarsDisabled; // 0x3c
	bool m_bShouldCalculateSlope; // 0x3d
};

// Aligment: 0
// Size: 32
class CAnimGraphSettingsGroup
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 2
// Size: 288
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110
	CUtlString m_modelName; // 0x118
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

// Aligment: 0
// Size: 24
class IAnimManagerUpdater
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0
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

// Aligment: 5
// Size: 144
class CSequenceUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x60
	HSequence m_hSequence; // 0x7c
	float m_playbackSpeed; // 0x80
	float m_duration; // 0x84
	bool m_bLoop; // 0x88
};

// Aligment: 4
// Size: 80
class CMotionClipGroupData
{
public:
	CUtlVector< ClipInfo > m_clips; // 0x0
	CUtlVector< ClipSampleInfo > m_samplePoints; // 0x18
	CUtlVector< float32 > m_samplePointVectors; // 0x30
	int32_t m_activeTagIndex; // 0x48
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

// Aligment: 1
// Size: 152
class CJumpHelperAnimNode : public CSequenceAnimNode, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_targetParamID; // 0x80
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

// Aligment: 1
// Size: 56
class CMoveHeadingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x30
};

// Aligment: 0
// Size: 40
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
// <no members described>
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

// Aligment: 1
// Size: 64
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x30
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

// Aligment: 1
// Size: 56
class CForceFacingCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x30
};

// Aligment: 1
// Size: 4
class AnimNodeOutputID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 2
// Size: 48
class CAnimNodePath
{
public:
	AnimNodeID[11] m_path; // 0x0
	int32_t m_nCount; // 0x2c
};

// Aligment: 7
// Size: 152
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

// Aligment: 5
// Size: 80
class CAnimRetargetData
{
public:
	int32_t m_bEnableRetarget; // 0x0
	int32_t m_nRetargetStyle; // 0x4
	CUtlVector< CAnimRetargetElementData > m_element; // 0x8
	CUtlVector< CAnimRetargetChainData > m_chain; // 0x20
	CUtlVector< CBufferString > m_replicated; // 0x38
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

// Aligment: 0
// Size: 96
class CInputStreamUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 72
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

// Aligment: 0
// Size: 4
class CFootCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 104
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

// Aligment: 3
// Size: 88
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_valueSource; // 0x40
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x44
};

// Aligment: 5
// Size: 96
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x20
	CUtlVector< CDrawCullingData > m_drawCullData; // 0x38
	Vector4D m_vTintColor; // 0x50
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

// Aligment: 7
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
	// MPropertyFriendlyName "Predicted"
	bool m_bPredicted; // 0x2b
};

// Aligment: 3
// Size: 88
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

// Aligment: 1
// Size: 112
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flSlowDownStrength; // 0x68
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

// Aligment: 3
// Size: 12
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0
	float flWeight; // 0x4
	uint32_t nMatrixNode; // 0x8
};

// Aligment: 1
// Size: 16
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0
};

// Aligment: 5
// Size: 128
struct FeSimdTri_t
{
public:
	uint32[4][3] nNode; // 0x0
	fltx4 w1; // 0x30
	fltx4 w2; // 0x40
	fltx4 v1x; // 0x50
	FourVectors2D v2; // 0x60
};

// Aligment: 4
// Size: 4
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0
	uint8_t m_nTwin; // 0x1
	uint8_t m_nOrigin; // 0x2
	uint8_t m_nFace; // 0x3
};

// Aligment: 3
// Size: 8
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0
	uint16_t nNode; // 0x4
	uint16_t nDummy; // 0x6
};

// Aligment: 5
// Size: 20
struct FeRodConstraint_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flMinDist; // 0x8
	float flWeight0; // 0xc
	float flRelaxationFactor; // 0x10
};

// Aligment: 1
// Size: 4
struct FeTreeChildren_t
{
public:
	uint16[2] nChild; // 0x0
};

// Aligment: 3
// Size: 16
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0
	uint32_t m_nSurfacePropertyIndex; // 0x4
	CUtlString m_UserFriendlyName; // 0x8
};

// Aligment: 2
// Size: 8
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0
	float flAlpha; // 0x4
};

// Aligment: 2
// Size: 64
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x30
	uint32_t m_nVertexMapHash; // 0x34
};

// Aligment: 6
// Size: 32
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

// Aligment: 4
// Size: 96
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0
	fltx4 m_flXY; // 0x30
	fltx4 m_flXZ; // 0x40
	fltx4 m_flYZ; // 0x50
};

// Aligment: 5
// Size: 40
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0
	float tv; // 0x4
	float flDist; // 0x8
	float32[4] flWeight; // 0xc
	uint16[6] nNode; // 0x1c
};

// Aligment: 4
// Size: 8
struct FeNodeWindBase_t
{
public:
	uint16_t nNodeX0; // 0x0
	uint16_t nNodeX1; // 0x2
	uint16_t nNodeY0; // 0x4
	uint16_t nNodeY1; // 0x6
};

// Aligment: 1
// Size: 4
struct FeSourceEdge_t
{
public:
	uint16[2] nNode; // 0x0
};

// Aligment: 2
// Size: 4
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
};

// Aligment: 1
// Size: 1
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0
};

// Aligment: 1
// Size: 104
struct Dop26_t
{
public:
	float32[26] m_flSupport; // 0x0
};

// Aligment: 4
// Size: 24
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0
	float m_flXY; // 0xc
	float m_flXZ; // 0x10
	float m_flYZ; // 0x14
};

// Aligment: 13
// Size: 216
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0
	float m_flMaxAngularRadius; // 0xc
	CUtlVector< Vector > m_Vertices; // 0x10
	CUtlVector< RnPlane_t > m_Planes; // 0x28
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x40
	CUtlVector< RnFace_t > m_Faces; // 0x58
	Vector m_vOrthographicAreas; // 0x70
	matrix3x4_t m_MassProperties; // 0x7c
	float m_flVolume; // 0xac
	float m_flMaxMotionRadius; // 0xb0
	float m_flMinMotionThickness; // 0xb4
	AABB_t m_Bounds; // 0xb8
	uint32_t m_nFlags; // 0xd0
};

// Aligment: 5
// Size: 24
struct FeCollisionSphere_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	float m_flRFactor; // 0x4
	Vector m_vOrigin; // 0x8
	float flStickiness; // 0x14
};

// Aligment: 5
// Size: 28
struct FeTri_t
{
public:
	uint16[3] nNode; // 0x0
	float w1; // 0x8
	float w2; // 0xc
	float v1x; // 0x10
	Vector2D v2; // 0x14
};

// Aligment: 3
// Size: 40
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< float32 > m_Weights; // 0x10
};

// Aligment: 7
// Size: 32
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0
	uint16[3] nDummy; // 0x2
	uint16_t nNodeX0; // 0x8
	uint16_t nNodeX1; // 0xa
	uint16_t nNodeY0; // 0xc
	uint16_t nNodeY1; // 0xe
	Quaternion qAdjust; // 0x10
};

// Aligment: 3
// Size: 16
struct FeCtrlOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
	Vector vOffset; // 0x4
};

// Aligment: 8
// Size: 144
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
	uint32_t m_nFlags; // 0x88
};

// Aligment: 8
// Size: 80
struct FeBoxRigid_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nCollisionMask; // 0x2
	Vector vSize; // 0x4
	float flStickiness; // 0x10
	uint16_t nVertexMapIndex; // 0x14
	uint16_t nFlags; // 0x16
	float32[2] flReserved; // 0x18
	matrix3x4a_t tmFrame; // 0x20
};

// Aligment: 2
// Size: 12
struct FeStiffHingeBuild_t
{
public:
	float flMaxAngle; // 0x0
	uint16[3] nNode; // 0x4
};

// Aligment: 4
// Size: 24
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	RnPlane_t m_Plane; // 0x4
	float flStickiness; // 0x14
};

// Aligment: 5
// Size: 12
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0
	uint16_t m_nSphereRigidIndex; // 0x2
	uint16_t m_nBoxRigidIndex; // 0x4
	uint16[2] m_nCollisionSphereIndex; // 0x6
	uint16_t m_nCollisionPlaneIndex; // 0xa
};

// Aligment: 4
// Size: 24
struct FeKelagerBend2_t
{
public:
	float32[3] flWeight; // 0x0
	float flHeight0; // 0xc
	uint16[3] nNode; // 0x10
	uint16_t nReserved; // 0x16
};

// Aligment: 2
// Size: 32
class FourVectors2D
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
};

// Aligment: 5
// Size: 20
struct FeSpringIntegrator_t
{
public:
	uint16[2] nNode; // 0x0
	float flSpringRestLength; // 0x4
	float flSpringConstant; // 0x8
	float flSpringDamping; // 0xc
	float flNodeWeight0; // 0x10
};

// Aligment: 4
// Size: 32
struct FeEffectDesc_t
{
public:
	CUtlString sName; // 0x0
	uint32_t nNameHash; // 0x8
	int32_t nType; // 0xc
	KeyValues3 m_Params; // 0x10
};

// Aligment: 2
// Size: 4
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nWeight; // 0x2
};

// Aligment: 3
// Size: 76
struct FeQuad_t
{
public:
	uint16[4] nNode; // 0x0
	float flSlack; // 0x8
	Vector4D[4] vShape; // 0xc
};

// Aligment: 7
// Size: 112
struct FeSimdNodeBase_t
{
public:
	uint16[4] nNode; // 0x0
	uint16[4] nNodeX0; // 0x8
	uint16[4] nNodeX1; // 0x10
	uint16[4] nNodeY0; // 0x18
	uint16[4] nNodeY1; // 0x20
	uint16[4] nDummy; // 0x28
	FourQuaternions qAdjust; // 0x30
};

// Aligment: 5
// Size: 80
struct FeSimdSpringIntegrator_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flSpringRestLength; // 0x10
	fltx4 flSpringConstant; // 0x20
	fltx4 flSpringDamping; // 0x30
	fltx4 flNodeWeight0; // 0x40
};

// Aligment: 4
// Size: 304
struct FeSimdQuad_t
{
public:
	uint16[4][4] nNode; // 0x0
	fltx4 f4Slack; // 0x20
	FourVectors[4] vShape; // 0x30
	fltx4[4] f4Weights; // 0xf0
};

// Aligment: 5
// Size: 64
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0
	Vector vCenter; // 0x20
	uint16_t nEnd; // 0x2c
	uint16_t nNode; // 0x2e
	uint16_t nBeginDynamic; // 0x30
};

// Aligment: 4
// Size: 32
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0
	uint32_t m_nChildren; // 0xc
	Vector m_vMax; // 0x10
	uint32_t m_nTriangleOffset; // 0x1c
};

// Aligment: 4
// Size: 12
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0
	float flGroundFriction; // 0x4
	uint16_t nListBegin; // 0x8
	uint16_t nListEnd; // 0xa
};

// Aligment: 35
// Size: 156
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

// Aligment: 2
// Size: 16
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0
	float m_flOffset; // 0xc
};

// Aligment: 3
// Size: 16
struct FeNodeReverseOffset_t
{
public:
	uint16_t nBoneCtrl; // 0x0
	uint16_t nTargetNode; // 0x2
	Vector vOffset; // 0x4
};

// Aligment: 3
// Size: 16
struct FeEdgeDesc_t
{
public:
	uint16[2] nEdge; // 0x0
	uint16[2][2] nSide; // 0x4
	uint16[2] nVirtElem; // 0xc
};

// Aligment: 3
// Size: 12
struct FeAnimStrayRadius_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flRelaxationFactor; // 0x8
};

// Aligment: 6
// Size: 48
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4[2] vSphere; // 0x0
	float flStickiness; // 0x20
	uint16_t nNode; // 0x24
	uint16_t nCollisionMask; // 0x26
	uint16_t nVertexMapIndex; // 0x28
	uint16_t nFlags; // 0x2a
};

// Aligment: 8
// Size: 32
struct FeVertexMapDesc_t
{
public:
	CUtlString sName; // 0x0
	uint32_t nNameHash; // 0x8
	uint32_t nFlags; // 0xc
	uint16_t nVertexBase; // 0x10
	uint16_t nVertexCount; // 0x12
	uint32_t nMapOffset; // 0x14
	uint32_t nNodeListOffset; // 0x18
	uint16_t nNodeListCount; // 0x1c
};

// Aligment: 4
// Size: 20
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
	Vector vOffset; // 0x4
	float flAlpha; // 0x10
};

// Aligment: 7
// Size: 136
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
};

// Aligment: 8
// Size: 16
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

// Aligment: 2
// Size: 24
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0
	Vector m_vNormal; // 0xc
};

// Aligment: 7
// Size: 136
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

// Aligment: 3
// Size: 8
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0
	uint16_t nChildNode; // 0x2
	float flWeight; // 0x4
};

// Aligment: 12
// Size: 72
struct OldFeEdge_t
{
public:
	float32[3] m_flK; // 0x0
	float invA; // 0xc
	float t; // 0x10
	float flThetaRelaxed; // 0x14
	float flThetaFactor; // 0x18
	float c01; // 0x1c
	float c02; // 0x20
	float c03; // 0x24
	float c04; // 0x28
	float flAxialModelDist; // 0x2c
	float32[4] flAxialModelWeights; // 0x30
	uint16[4] m_nNode; // 0x40
};

// Aligment: 4
// Size: 208
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0
	CTransform m_transform; // 0x10
	uint32_t m_nJiggleParent; // 0x30
	CFeJiggleBone m_jiggleBone; // 0x34
};

// Aligment: 2
// Size: 28
struct RnCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
};

// Aligment: 4
// Size: 16
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0
	float flAnimationForceAttraction; // 0x4
	float flAnimationVertexAttraction; // 0x8
	float flGravity; // 0xc
};

// Aligment: 2
// Size: 16
struct FeProxyVertexMap_t
{
public:
	CUtlString m_Name; // 0x0
	float m_flWeight; // 0x8
};

// Aligment: 1
// Size: 12
struct RnTriangle_t
{
public:
	int32[3] m_nIndex; // 0x0
};

// Aligment: 3
// Size: 48
struct FeSimdAnimStrayRadius_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flMaxDist; // 0x10
	fltx4 flRelaxationFactor; // 0x20
};

// Aligment: 2
// Size: 48
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20
	uint32_t m_nVertexMapHash; // 0x24
};

// Aligment: 2
// Size: 16
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0
	float m_flRadius; // 0xc
};

// Aligment: 5
// Size: 80
struct FeSimdRodConstraint_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 f4MaxDist; // 0x10
	fltx4 f4MinDist; // 0x20
	fltx4 f4Weight0; // 0x30
	fltx4 f4RelaxationFactor; // 0x40
};

// Aligment: 5
// Size: 20
struct FeTaperedCapsuleStretch_t
{
public:
	uint16[2] nNode; // 0x0
	uint16_t nCollisionMask; // 0x4
	// MPropertySuppressField
	uint16_t nDummy; // 0x6
	float32[2] flRadius; // 0x8
	float flStickiness; // 0x10
};

// Aligment: 3
// Size: 20
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0
	float flDistMax; // 0x4
	uint16[6] nNode; // 0x8
};

// Aligment: 3
// Size: 164
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0
	uint32_t m_nJiggleParent; // 0x4
	CFeJiggleBone m_jiggleBone; // 0x8
};

// Aligment: 2
// Size: 96
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x50
	uint32_t m_nVertexMapHash; // 0x54
};

// Aligment: 98
// Size: 1512
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
	CUtlVector< uint16 > m_Ropes; // 0x60
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90
	CUtlVector< FeQuad_t > m_Quads; // 0xa8
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc0
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xd8
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf0
	CUtlVector< CTransform > m_InitPose; // 0x108
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x120
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x138
	CUtlVector< float32 > m_NodeInvMasses; // 0x150
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x168
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x180
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x198
	CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1b0
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

// Aligment: 1
// Size: 152
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x10
};

// Aligment: 1
// Size: 32
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x10
};

// Aligment: 1
// Size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x10
};

// Aligment: 3
// Size: 32
struct RnSoftbodyCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
	uint16[2] m_nParticle; // 0x1c
};

// Aligment: 1
// Size: 232
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10
};

// Aligment: 1
// Size: 4
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0
};

// Aligment: 2
// Size: 8
struct RnSoftbodySpring_t
{
public:
	uint16[2] m_nParticle; // 0x0
	float m_flLength; // 0x4
};

// Aligment: 4
// Size: 16
struct vmix_pitch_shift_desc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0
	float m_flPitchShift; // 0x4
	int32_t m_nQuality; // 0x8
	int32_t m_nProcType; // 0xc
};

// Aligment: 1
// Size: 32
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18
};

// Aligment: 3
// Size: 40
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

// Aligment: 5
// Size: 16
struct vmix_filter_desc_t
{
public:
	vmix_filter_type_t m_nFilterType; // 0x0
	bool m_bEnabled; // 0x2
	float m_fldbGain; // 0x4
	float m_flCutoffFreq; // 0x8
	float m_flQ; // 0xc
};

// Aligment: 5
// Size: 48
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0
	CUtlString itemName; // 0x8
	CUtlString itemTypeName; // 0x10
	CUtlString itemKVString; // 0x20
	Vector2D itemPos; // 0x28
};

// Aligment: 4
// Size: 40
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

// Aligment: 1
// Size: 24
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0
};

// Aligment: 11
// Size: 148
struct vmix_dynamics_3band_desc_t
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
	int32_t m_nSoloBand; // 0x24
	vmix_dynamics_band_t[3] m_bandDesc; // 0x28
};

// Aligment: 12
// Size: 48
struct vmix_dynamics_desc_t
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

// Aligment: 4
// Size: 16
class CSosGroupBranchPattern
{
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

// Aligment: 8
// Size: 208
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
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14
	// MPropertyFriendlyName "Match Rules"
	CSosGroupMatchPattern m_matchPattern; // 0x18
	// MPropertyFriendlyName "Branch Rules"
	CSosGroupBranchPattern m_branchPattern; // 0x40
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema*[4] m_vActions; // 0xb0
};

// Aligment: 3
// Size: 24
class CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14
};

// Aligment: 9
// Size: 36
struct vmix_dynamics_compressor_desc_t
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

// Aligment: 3
// Size: 12
struct vmix_envelope_desc_t
{
public:
	float m_flAttackTimeMS; // 0x0
	float m_flHoldTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
};

// Aligment: 1
// Size: 24
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0
};

// Aligment: 8
// Size: 32
struct vmix_convolution_desc_t
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

// Aligment: 10
// Size: 36
struct vmix_dynamics_band_t
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

// Aligment: 10
// Size: 40
struct vmix_vocoder_desc_t
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

// Aligment: 1
// Size: 128
struct vmix_eq8_desc_t
{
public:
	vmix_filter_desc_t[8] m_stages; // 0x0
};

// Aligment: 7
// Size: 40
struct vmix_delay_desc_t
{
public:
	vmix_filter_desc_t m_feedbackFilter; // 0x0
	bool m_bEnableFilter; // 0x10
	float m_flDelay; // 0x14
	float m_flDirectGain; // 0x18
	float m_flDelayGain; // 0x1c
	float m_flFeedbackGain; // 0x20
	float m_flWidth; // 0x24
};

// Aligment: 1
// Size: 24
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0
};

// Aligment: 2
// Size: 24
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
};

// Aligment: 3
// Size: 48
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

// Aligment: 6
// Size: 56
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	int32_t m_nLayerIndex; // 0x18
	uint64_t m_nLayerId; // 0x20
	CUtlString m_LayerName; // 0x28
	CUtlString m_displayText; // 0x30
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0
	CUtlString m_ViewName; // 0x8
};

// Aligment: 2
// Size: 16
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0
	uint64_t m_nFrameCount; // 0x8
};

// Aligment: 10
// Size: 48
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

// Aligment: 13
// Size: 216
class CVoxelVisibility
{
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
	voxel_vis_compression_t m_nPVSCompression; // 0xcc
	uint32_t m_nTreeSize; // 0xd0
	uint32_t m_nPVSSizeCompressed; // 0xd4
};

// Aligment: 2
// Size: 48
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18
};

// Aligment: 3
// Size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10
};

// Aligment: 10
// Size: 112
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0
	float m_flWidth; // 0x30
	float m_flHeight; // 0x34
	float m_flDepth; // 0x38
	Vector2D m_vUVStart; // 0x3c
	Vector2D m_vUVEnd; // 0x44
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50
	int32_t m_nRenderOrder; // 0x58
	Vector4D m_vTintColor; // 0x5c
	int32_t m_nSequenceOverride; // 0x6c
};

// Aligment: 4
// Size: 200
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0
	CUtlVector< NodeData_t > m_worldNodes; // 0x68
	BakedLightingInfo_t m_worldLightingInfo; // 0x80
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0xb0
};

// Aligment: 9
// Size: 60
struct AggregateMeshInfo_t
{
public:
	Vector[2] m_vWorldBounds; // 0x0
	uint32_t m_nVisClusterMemberOffset; // 0x18
	uint8_t m_nVisClusterMemberCount; // 0x1c
	uint8_t m_nLODGroupMask; // 0x1d
	int32_t m_nCubeMapPrecomputedHandshake; // 0x20
	ObjectTypeFlags_t m_objectFlags; // 0x24
	Vector m_vLODOrigin; // 0x28
	float m_fLODStartDrawDistance; // 0x34
	float m_fLODEndDrawDistance; // 0x38
};

// Aligment: 4
// Size: 56
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0
	int32_t m_nElementSizeInBytes; // 0x4
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8
	CUtlVector< uint8 > m_pData; // 0x20
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct voxel_vis_mergelist_t
{
public:
	uint32_t m_nFirstCluster; // 0x0
	uint32_t m_nClusterCount; // 0x4
};

// Aligment: 5
// Size: 48
struct BakedLightingInfo_t
{
public:
	uint32_t m_nLightmapVersionNumber; // 0x0
	uint32_t m_nLightmapGameVersionNumber; // 0x4
	Vector2D m_vLightmapUvScale; // 0x8
	bool m_bHasLightmaps; // 0x10
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18
};

// Aligment: 2
// Size: 8
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0
	uint32_t m_nOffsetIntoBlock; // 0x4
};

// Aligment: 7
// Size: 48
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0
	uint32_t m_targetType; // 0x8
	CUtlString m_targetName; // 0x10
	CUtlString m_inputName; // 0x18
	CUtlString m_overrideParam; // 0x20
	float m_flDelay; // 0x28
	int32_t m_nTimesToFire; // 0x2c
};

// Aligment: 1
// Size: 4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0
};

// Aligment: 13
// Size: 320
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

// Aligment: 6
// Size: 80
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0
	CUtlString m_hammerUniqueId; // 0x8
	EntityLumpFlags_t m_flags; // 0x10
	CUtlString m_manifestName; // 0x18
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x20
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x38
};

// Aligment: 21
// Size: 104
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
	Vector2D m_vLightmapUvScale; // 0x4c
	uint64_t m_nCompileTimestamp; // 0x58
	uint64_t m_nCompileFingerprint; // 0x60
};

// Aligment: 0
// Size: 1
struct VMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 80
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

// Aligment: 8
// Size: 96
struct AggregateSceneObject_t
{
public:
	Vector[2] m_vWorldBounds; // 0x0
	ObjectTypeFlags_t m_allFlags; // 0x18
	ObjectTypeFlags_t m_anyFlags; // 0x1c
	int16_t m_nLayer; // 0x20
	int16_t m_nBoundsGroupIndex; // 0x22
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x28
	CUtlVector< uint16 > m_visClusterMembership; // 0x40
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x58
};

// Aligment: 4
// Size: 32
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
	CRenderBufferBinding m_extraBufferBinding; // 0x10
};

// Aligment: 16
// Size: 144
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0
	Vector4D[3] m_vTransform; // 0x4
	float m_flFadeStartDistance; // 0x34
	float m_flFadeEndDistance; // 0x38
	Vector4D m_vTintColor; // 0x3c
	CUtlString m_skin; // 0x50
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58
	Vector m_vLightingOrigin; // 0x5c
	uint32_t m_nLightGroup; // 0x68
	int16_t m_nOverlayRenderOrder; // 0x6c
	int16_t m_nLODOverride; // 0x6e
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74
	int16_t m_nBoundsGroupIndex; // 0x78
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88
};

// Aligment: 0
// Size: 40
class CParticleProperty
{
public:
// <no members described>
};

// Aligment: 3
// Size: 400
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	float m_flOutput; // 0x184
	// MPropertyFriendlyName "lerp time"
	// MDefaultString
	float m_flLerpTime; // 0x188
};

// Aligment: 11
// Size: 432
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x180
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x184
	// MPropertyFriendlyName "percentage bias"
	// MDefaultString
	float m_flInputBias; // 0x188
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x18c
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x190
	// MPropertyFriendlyName "offset control point"
	// MDefaultString
	int32_t m_nOffsetCP; // 0x194
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOuputCP; // 0x198
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInputCP; // 0x19c
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x1a0
	// MPropertyFriendlyName "treat offset as scale of total distance"
	// MDefaultString
	bool m_bScaleOffset; // 0x1a1
	// MPropertyFriendlyName "offset amount"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1a4
};

// Aligment: 4
// Size: 416
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "kill unused"
	// MDefaultString
	bool m_bKillUnused; // 0x180
	// MPropertyFriendlyName "offset propotional to radius"
	// MDefaultString
	bool m_bRadiusScale; // 0x181
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x184
	// MPropertyFriendlyName "per particle spatial offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x188
};

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1472
class C_INIT_InitVecCollection : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0
};

// Aligment: 7
// Size: 656
class C_OP_RotateVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "rotation axis min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x184
	// MPropertyFriendlyName "rotation axis max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x190
	// MPropertyFriendlyName "rotation rate min"
	// MDefaultString
	float m_flRotRateMin; // 0x19c
	// MPropertyFriendlyName "rotation rate max"
	// MDefaultString
	float m_flRotRateMax; // 0x1a0
	// MPropertyFriendlyName "normalize output"
	// MDefaultString
	bool m_bNormalize; // 0x1a4
	// MPropertyFriendlyName "per particle scale"
	// MDefaultString
	CPerParticleFloatInput m_flScale; // 0x1a8
};

// Aligment: 8
// Size: 464
class C_OP_RampScalarLinear : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	float m_RateMin; // 0x180
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	float m_RateMax; // 0x184
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x188
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x18c
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x190
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x194
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x1c4
};

// Aligment: 2
// Size: 240
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "input"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput; // 0x8
};

// Aligment: 2
// Size: 528
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	// MDefaultString
	int32_t m_nMaterialControlPoint; // 0x1d0
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1d8
};

// Aligment: 10
// Size: 432
class C_OP_CycleScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x180
	// MPropertyFriendlyName "Value at start of cycle"
	// MDefaultString
	float m_flStartValue; // 0x184
	// MPropertyFriendlyName "Value at end of cycle"
	// MDefaultString
	float m_flEndValue; // 0x188
	// MPropertyFriendlyName "Cycle time"
	// MDefaultString
	float m_flCycleTime; // 0x18c
	// MPropertyFriendlyName "Do not repeat cycle"
	// MDefaultString
	bool m_bDoNotRepeatCycle; // 0x190
	// MPropertyFriendlyName "Synchronize particles"
	// MDefaultString
	bool m_bSynchronizeParticles; // 0x191
	// MPropertyFriendlyName "Scale Start/End Control Point"
	// MDefaultString
	int32_t m_nCPScale; // 0x194
	// MPropertyFriendlyName "start scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x198
	// MPropertyFriendlyName "end scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x19c
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a0
};

// Aligment: 5
// Size: 896
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0x180
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CPerParticleFloatInput m_flInput1; // 0x188
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CPerParticleFloatInput m_flInput2; // 0x270
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x358
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x35c
};

// Aligment: 0
// Size: 384
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 10
// Size: 512
class C_OP_RenderTreeShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "peak strength"
	// MDefaultString
	float m_flPeakStrength; // 0x1d0
	// MPropertyFriendlyName "peak strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x1d4
	// MPropertyFriendlyName "radius"
	// MDefaultString
	float m_flRadius; // 0x1d8
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x1dc
	// MPropertyFriendlyName "shake duration after end"
	// MDefaultString
	float m_flShakeDuration; // 0x1e0
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	// MDefaultString
	float m_flTransitionTime; // 0x1e4
	// MPropertyFriendlyName "Twist amount (-1..1)"
	// MDefaultString
	float m_flTwistAmount; // 0x1e8
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	// MDefaultString
	float m_flRadialAmount; // 0x1ec
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	// MDefaultString
	float m_flControlPointOrientationAmount; // 0x1f0
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	// MDefaultString
	int32_t m_nControlPointForLinearDirection; // 0x1f4
};

// Aligment: 8
// Size: 880
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x184
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x188
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x190
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x278
	// MPropertyFriendlyName "set orientation from velocity"
	// MDefaultString
	bool m_bSetOrientation; // 0x360
	// MPropertyFriendlyName "orientation vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x364
	// MPropertyFriendlyName "set number of children based on particle count"
	// MDefaultString
	bool m_bNumBasedOnParticleCount; // 0x368
};

// Aligment: 24
// Size: 6608
class C_OP_RenderSprites : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence id override"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	CParticleCollectionFloatInput m_nSequenceOverride; // 0x16c0
	// MPropertyFriendlyName "orientation type"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x17a8
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x17ac
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x17b0
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x17b4
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x17b8
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x17bc
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x17c0
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x18a8
	// MPropertyFriendlyName "start dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x1990
	// MPropertyFriendlyName "end dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x1994
	// MPropertyFriendlyName "distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x1998
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x1999
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x199c
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x19a0
	// MPropertyFriendlyName "enable particle outlining"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x19a4
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x19a5
	// MPropertyFriendlyName "outline alpha"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x19ac
	// MPropertyFriendlyName "outline start 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x19b0
	// MPropertyFriendlyName "outline start 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x19b4
	// MPropertyFriendlyName "outline end 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x19b8
	// MPropertyFriendlyName "outline end 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x19bc
	// MPropertyFriendlyName "Particle Shadows"
	// MDefaultString
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	bool m_bParticleShadows; // 0x19c0
	// MPropertyFriendlyName "Shadow Density"
	// MDefaultString
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x19c4
};

// Aligment: 5
// Size: 528
class C_INIT_ModelCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "use only bounding box"
	// MDefaultString
	bool m_bBoundBox; // 0x184
	// MPropertyFriendlyName "cull outside instead of inside"
	// MDefaultString
	bool m_bCullOutside; // 0x185
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x186
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x187
};

// Aligment: 2
// Size: 400
class C_OP_ExternalWindForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "scale"
	// MDefaultString
	Vector m_vecScale; // 0x184
};

// Aligment: 1
// Size: 24
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	// MDefaultString
	float m_flTimeDuration; // 0x14
};

// Aligment: 0
// Size: 416
class C_OP_SpinYaw : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 416
class C_OP_ParentVortices : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_flForceScale; // 0x180
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x184
	// MPropertyFriendlyName "flip twist axis with yaw"
	// MDefaultString
	bool m_bFlipBasedOnYaw; // 0x190
};

// Aligment: 6
// Size: 48
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

// Aligment: 3
// Size: 416
class C_OP_SetToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "offset"
	// MDefaultString
	Vector m_vecOffset; // 0x184
	// MPropertyFriendlyName "offset in local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x190
};

// Aligment: 6
// Size: 416
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0x180
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x184
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
};

// Aligment: 2
// Size: 624
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
};

// Aligment: 7
// Size: 1328
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_nInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_nInputMax; // 0x270
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x358
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x440
	// MPropertyFriendlyName
	// MDefaultString
	bool m_bActiveRange; // 0x528
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x52c
};

// Aligment: 0
// Size: 16
class IParticleCollection
{
public:
// <no members described>
};

// Aligment: 7
// Size: 448
class C_OP_VectorNoise : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x184
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x190
	// MPropertyFriendlyName "noise coordinate scale"
	// MDefaultString
	fltx4 m_fl4NoiseScale; // 0x1a0
	// MPropertyFriendlyName "additive"
	// MDefaultString
	bool m_bAdditive; // 0x1b0
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x1b1
	// MPropertyFriendlyName "Noise animation time scale"
	// MDefaultString
	float m_flNoiseAnimationTimeScale; // 0x1b4
};

// Aligment: 1
// Size: 400
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_ControlPoint; // 0x180
};

// Aligment: 6
// Size: 656
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "warp min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x180
	// MPropertyFriendlyName "warp max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x18c
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x198
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x280
	// MPropertyFriendlyName "warp scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x284
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x288
};

// Aligment: 5
// Size: 1328
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "slack"
	// MDefaultString
	CParticleCollectionFloatInput m_flRestLength; // 0x180
	// MPropertyFriendlyName "minimum segment length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flMinDistance; // 0x268
	// MPropertyFriendlyName "maximum segment length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flMaxDistance; // 0x350
	// MPropertyFriendlyName "scale factor for spring correction"
	// MDefaultString
	float m_flAdjustmentScale; // 0x438
	// MPropertyFriendlyName "manual resting spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x440
};

// Aligment: 11
// Size: 1344
class C_OP_CylindricalDistanceToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "cylinder inner radius"
	// MDefaultString
	CPerParticleFloatInput m_flInputMin; // 0x188
	// MPropertyFriendlyName "cylinder outer radius"
	// MDefaultString
	CPerParticleFloatInput m_flInputMax; // 0x270
	// MPropertyFriendlyName "cylinder inner output"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMin; // 0x358
	// MPropertyFriendlyName "cylinder outer output"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMax; // 0x440
	// MPropertyFriendlyName "cylinder top control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x528
	// MPropertyFriendlyName "cylinder bottom control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x52c
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x530
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x534
	// MPropertyFriendlyName "output is additive"
	// MDefaultString
	bool m_bAdditive; // 0x535
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	// MDefaultString
	bool m_bCapsule; // 0x536
};

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 384
class CParticleFunctionEmitter : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 4
// Size: 400
class C_INIT_RemapInitialCPDirectionToRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x188
	// MPropertyFriendlyName "control point axis"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c
};

// Aligment: 38
// Size: 4048
class C_OP_RenderModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MDefaultString
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1d0
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d8
	// MPropertyFriendlyName "ignore normal"
	// MDefaultString
	// MPropertyGroupName "+Orientation"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x1f4
	// MPropertyFriendlyName "orient model z to normal"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x1f5
	// MPropertyFriendlyName "animated"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x1f6
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0x1f8
	// MPropertyFriendlyName "scale animation rate"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x1fc
	// MPropertyFriendlyName "force looping animations"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x1fd
	// MPropertyFriendlyName "reset animation frame on stop"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x1fe
	// MPropertyFriendlyName "set animation frame manually"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x1ff
	// MPropertyFriendlyName "animation rate scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x200
	// MPropertyFriendlyName "bodygroup field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x204
	// MPropertyFriendlyName "submodel field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x208
	// MPropertyFriendlyName "animation sequence field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x20c
	// MPropertyFriendlyName "manual animation frame field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x210
	// MPropertyFriendlyName "activity override"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	char[256] m_ActivityName; // 0x214
	// MPropertyFriendlyName "model LOD"
	// MDefaultString
	int32_t m_nLOD; // 0x314
	// MPropertyFriendlyName "material override"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyGroupName "Material"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x318
	// MPropertyFriendlyName "override translucent materials"
	// MDefaultString
	// MPropertyGroupName "Material"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x320
	// MPropertyFriendlyName "skin number"
	// MDefaultString
	// MPropertyGroupName "Material"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0x324
	// MPropertyFriendlyName "skin override CP"
	// MDefaultString
	// MPropertyGroupName "Material"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0x328
	// MPropertyFriendlyName "model override CP"
	// MDefaultString
	int32_t m_nModelCP; // 0x32c
	// MPropertyFriendlyName "ignore radius"
	// MDefaultString
	// MPropertyGroupName "Model Scale"
	// MPropertySortPriority "450"
	bool m_bIgnoreRadius; // 0x330
	// MPropertyFriendlyName "model scale CP"
	// MDefaultString
	// MPropertyGroupName "Model Scale"
	// MPropertySortPriority "450"
	int32_t m_nModelScaleCP; // 0x334
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	// MDefaultString
	bool m_bForceDrawInterlevedWithSiblings; // 0x338
	// MPropertyFriendlyName "model override economy loadout slot type"
	// MDefaultString
	char[256] m_EconSlotName; // 0x339
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	// MDefaultString
	bool m_bOriginalModel; // 0x439
	// MPropertyFriendlyName "suppress tinting of the model"
	// MDefaultString
	bool m_bSuppressTint; // 0x43a
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	// MDefaultString
	bool m_bUseRawMeshGroup; // 0x43b
	// MPropertyFriendlyName "disable shadows"
	// MDefaultString
	bool m_bDisableShadows; // 0x43c
	// MPropertyFriendlyName "render attribute"
	// MDefaultString
	char[260] m_szRenderAttribute; // 0x43d
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertyGroupName "Material"
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x548
	// MPropertyFriendlyName "Radius Scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x560
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x648
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x730
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x738
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb68
	// MPropertyFriendlyName "model component scale"
	// MDefaultString
	// MPropertyGroupName "Model Scale"
	// MPropertySortPriority "450"
	CPerParticleVecInput m_vecComponentScale; // 0xb70
};

// Aligment: 7
// Size: 416
class C_OP_RemapSpeed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x194
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bIgnoreDelta; // 0x198
};

// Aligment: 0
// Size: 384
class CParticleFunctionConstraint : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 16
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "particle field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0xc
};

// Aligment: 4
// Size: 400
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "attribute to read from"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184
	// MPropertyFriendlyName "attribute to cache to"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x18c
};

// Aligment: 3
// Size: 120
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8
	ParticlePreviewState_t m_previewState; // 0x20
};

// Aligment: 7
// Size: 448
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "min distance from plane"
	// MDefaultString
	float m_flMinDist; // 0x180
	// MPropertyFriendlyName "force at min distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x184
	// MPropertyFriendlyName "max distance from plane"
	// MDefaultString
	float m_flMaxDist; // 0x190
	// MPropertyFriendlyName "force at max distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x194
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x1a0
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x1ac
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x1b0
};

// Aligment: 0
// Size: 384
class C_OP_EndCapDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 12
// Size: 432
class C_OP_PercentageBetweenCPLerpCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x18c
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x190
	// MPropertyFriendlyName "output starting control point number"
	// MDefaultString
	int32_t m_nOutputStartCP; // 0x194
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	// MDefaultString
	int32_t m_nOutputStartField; // 0x198
	// MPropertyFriendlyName "output ending control point number"
	// MDefaultString
	int32_t m_nOutputEndCP; // 0x19c
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	// MDefaultString
	int32_t m_nOutputEndField; // 0x1a0
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a4
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1a8
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x1a9
};

// Aligment: 14
// Size: 576
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x194
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x198
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x199
	// MPropertyFriendlyName "Maximum Trace Length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x21c
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x220
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x224
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x228
	// MPropertyFriendlyName "distance component scale"
	// MDefaultString
	Vector m_vecDistanceScale; // 0x22c
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x238
};

// Aligment: 3
// Size: 624
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "first child to enable"
	// MDefaultString
	int32_t m_nFirstChild; // 0x184
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	// MDefaultString
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x188
};

// Aligment: 3
// Size: 480
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flattening strength"
	// MDefaultString
	float m_flFlattenStrength; // 0x1d0
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x1d4
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x1d8
};

// Aligment: 6
// Size: 416
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x184
	// MPropertyFriendlyName "scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x188
	// MPropertyFriendlyName "cache attribute to read from"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x18c
	// MPropertyFriendlyName "attribute to write to"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x190
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x194
};

// Aligment: 9
// Size: 432
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	// MDefaultString
	float m_flAParm; // 0x180
	// MPropertyFriendlyName "pickover B parameter"
	// MDefaultString
	float m_flBParm; // 0x184
	// MPropertyFriendlyName "pickover C parameter"
	// MDefaultString
	float m_flCParm; // 0x188
	// MPropertyFriendlyName "pickover D parameter"
	// MDefaultString
	float m_flDParm; // 0x18c
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x190
	// MPropertyFriendlyName "speed min"
	// MDefaultString
	float m_flSpeedMin; // 0x194
	// MPropertyFriendlyName "speed max"
	// MDefaultString
	float m_flSpeedMax; // 0x198
	// MPropertyFriendlyName "relative control point number"
	// MDefaultString
	int32_t m_nBaseCP; // 0x19c
	// MPropertyFriendlyName "uniform speed"
	// MDefaultString
	bool m_bUniformSpeed; // 0x1a0
};

// Aligment: 4
// Size: 448
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate"
	// MDefaultString
	float m_Rate; // 0x180
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x184
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x188
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0
};

// Aligment: 5
// Size: 416
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x188
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x18c
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x190
};

// Aligment: 12
// Size: 432
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	int32_t m_nInputMin; // 0x184
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	int32_t m_nInputMax; // 0x188
	// MPropertyFriendlyName "input scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x18c
	// MPropertyFriendlyName "input scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x19c
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1a0
	// MPropertyFriendlyName "invert input from total particle count"
	// MDefaultString
	bool m_bInvert; // 0x1a1
	// MPropertyFriendlyName "wrap input"
	// MDefaultString
	bool m_bWrap; // 0x1a2
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1a4
};

// Aligment: 10
// Size: 448
class C_INIT_RandomColor : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color1"
	// MDefaultString
	Color m_ColorMin; // 0x198
	// MPropertyFriendlyName "color2"
	// MDefaultString
	Color m_ColorMax; // 0x19c
	// MPropertyFriendlyName "tint clamp min"
	// MDefaultString
	Color m_TintMin; // 0x1a0
	// MPropertyFriendlyName "tint clamp max"
	// MDefaultString
	Color m_TintMax; // 0x1a4
	// MPropertyFriendlyName "tint perc"
	// MDefaultString
	float m_flTintPerc; // 0x1a8
	// MPropertyFriendlyName "tint update movement threshold"
	// MDefaultString
	float m_flUpdateThreshold; // 0x1ac
	// MPropertyFriendlyName "tint control point"
	// MDefaultString
	int32_t m_nTintCP; // 0x1b0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b4
	// MPropertyFriendlyName "tint blend mode"
	// MDefaultString
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1b8
	// MPropertyFriendlyName "light amplification amount"
	// MDefaultString
	float m_flLightAmplification; // 0x1bc
};

// Aligment: 3
// Size: 656
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x180
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x268
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x26c
};

// Aligment: 5
// Size: 432
class C_INIT_PointList : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188
	// MPropertyFriendlyName "space points along path"
	// MDefaultString
	bool m_bPlaceAlongPath; // 0x1a0
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x1a1
	// MPropertyFriendlyName "Numer of points along path"
	// MDefaultString
	int32_t m_nNumPointsAlongPath; // 0x1a4
};

// Aligment: 36
// Size: 232
class CParticleFloatInput
{
public:
	// MDefaultString
	ParticleFloatType_t m_nType; // 0x0
	// MDefaultString
	ParticleFloatMapType_t m_nMapType; // 0x4
	// MDefaultString
	float m_flLiteralValue; // 0x8
	// MDefaultString
	int32_t m_nControlPoint; // 0xc
	// MDefaultString
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x10
	// MDefaultString
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14
	// MDefaultString
	int32_t m_nVectorComponent; // 0x18
	// MDefaultString
	float m_flRandomMin; // 0x1c
	// MDefaultString
	float m_flRandomMax; // 0x20
	// MDefaultString
	ParticleFloatRandomMode_t m_nRandomMode; // 0x24
	// MDefaultString
	float m_flLOD0; // 0x2c
	// MDefaultString
	float m_flLOD1; // 0x30
	// MDefaultString
	float m_flLOD2; // 0x34
	// MDefaultString
	float m_flLOD3; // 0x38
	// MDefaultString
	float m_flNoiseOutputMin; // 0x3c
	// MDefaultString
	float m_flNoiseOutputMax; // 0x40
	// MDefaultString
	float m_flNoiseScale; // 0x44
	// MDefaultString
	Vector m_vecNoiseOffsetRate; // 0x48
	// MDefaultString
	float m_flNoiseOffset; // 0x54
	// MDefaultString
	int32_t m_nNoiseOctaves; // 0x58
	// MDefaultString
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0x5c
	// MDefaultString
	PFNoiseType_t m_nNoiseType; // 0x60
	// MDefaultString
	PFNoiseModifier_t m_nNoiseModifier; // 0x64
	// MDefaultString
	float m_flNoiseTurbulenceScale; // 0x68
	// MDefaultString
	float m_flNoiseTurbulenceMix; // 0x6c
	// MDefaultString
	float m_flNoiseImgPreviewScale; // 0x70
	// MDefaultString
	bool m_bNoiseImgPreviewLive; // 0x74
	// MDefaultString
	ParticleFloatInputMode_t m_nInputMode; // 0x7c
	// MDefaultString
	float m_flMultFactor; // 0x80
	// MDefaultString
	float m_flInput0; // 0x84
	// MDefaultString
	float m_flInput1; // 0x88
	// MDefaultString
	float m_flOutput0; // 0x8c
	// MDefaultString
	float m_flOutput1; // 0x90
	// MDefaultString
	ParticleFloatBiasType_t m_nBiasType; // 0x94
	// MDefaultString
	float m_flBiasParameter; // 0x98
	CPiecewiseCurveSchemaWrapper m_Curve; // 0xa0
};

// Aligment: 8
// Size: 784
class C_OP_MoveToHitbox : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "lifetime lerp start"
	// MDefaultString
	float m_flLifeTimeLerpStart; // 0x188
	// MPropertyFriendlyName "lifetime lerp end"
	// MDefaultString
	float m_flLifeTimeLerpEnd; // 0x18c
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x190
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x194
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x214
	// MPropertyFriendlyName "lerp type"
	// MDefaultString
	HitboxLerpType_t m_nLerpType; // 0x218
	// MPropertyFriendlyName "Constant Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x220
};

// Aligment: 7
// Size: 480
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x188
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1a0
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1b8
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x1d0
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
};

// Aligment: 2
// Size: 624
class C_OP_CPVelocityForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	CPerParticleFloatInput m_flScale; // 0x188
};

// Aligment: 7
// Size: 416
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	// MDefaultString
	int32_t m_nOverrideCP; // 0x184
	// MPropertyFriendlyName "density"
	// MDefaultString
	int32_t m_nDensity; // 0x188
	// MPropertyFriendlyName "initial radius"
	// MDefaultString
	float m_flInitialRadius; // 0x18c
	// MPropertyFriendlyName "min initial speed"
	// MDefaultString
	float m_flInitialSpeedMin; // 0x190
	// MPropertyFriendlyName "max initial speed"
	// MDefaultString
	float m_flInitialSpeedMax; // 0x194
	// MPropertyFriendlyName "use particle count as density scale"
	// MDefaultString
	bool m_bUseParticleCount; // 0x198
};

// Aligment: 6
// Size: 416
class C_OP_LockPoints : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	// MDefaultString
	int32_t m_nMinCol; // 0x180
	// MPropertyFriendlyName "max column/particle index to affect"
	// MDefaultString
	int32_t m_nMaxCol; // 0x184
	// MPropertyFriendlyName "min row/particle index to affect"
	// MDefaultString
	int32_t m_nMinRow; // 0x188
	// MPropertyFriendlyName "max row/particle index to affect"
	// MDefaultString
	int32_t m_nMaxRow; // 0x18c
	// MPropertyFriendlyName "control point to lock to"
	// MDefaultString
	int32_t m_nControlPoint; // 0x190
	// MPropertyFriendlyName "amount of current position to preserve"
	// MDefaultString
	float m_flBlendValue; // 0x194
};

// Aligment: 4
// Size: 640
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x180
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nMinCP; // 0x184
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x188
	// MPropertyFriendlyName "dynamic control point count"
	// MDefaultString
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x190
};

// Aligment: 7
// Size: 880
class C_OP_PlanarConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "plane point"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x180
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	Vector m_PlaneNormal; // 0x18c
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x198
	// MPropertyFriendlyName "global origin"
	// MDefaultString
	bool m_bGlobalOrigin; // 0x19c
	// MPropertyFriendlyName "global normal"
	// MDefaultString
	bool m_bGlobalNormal; // 0x19d
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusScale; // 0x1a0
	// MPropertyFriendlyName "falloff distance from control point"
	// MDefaultString
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x288
};

// Aligment: 2
// Size: 16
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0
	// MPropertyFriendlyName "Relative probability"
	// MDefaultString
	float m_flRelativeProbabilityOfSpawn; // 0x8
};

// Aligment: 5
// Size: 1088
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	CParticleCollectionFloatInput m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "first child to enable"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstChild; // 0x268
	// MPropertyFriendlyName "# of children to enable"
	// MDefaultString
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x350
	// MPropertyFriendlyName "play endcap when children are removed"
	// MDefaultString
	bool m_bPlayEndcapOnStop; // 0x438
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	// MDefaultString
	bool m_bDestroyImmediately; // 0x439
};

// Aligment: 0
// Size: 384
class CParticleFunctionInitializer : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 15
// Size: 448
class C_OP_NoiseEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "emission duration"
	// MDefaultString
	float m_flEmissionDuration; // 0x180
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	float m_flStartTime; // 0x184
	// MPropertyFriendlyName "scale emission to used control points"
	// MDefaultString
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x188
	// MPropertyFriendlyName "emission count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x18c
	// MPropertyFriendlyName "emission count scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x190
	// MPropertyFriendlyName "world noise scale control point"
	// MDefaultString
	int32_t m_nWorldNoisePoint; // 0x194
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x198
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x199
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x19c
	// MPropertyFriendlyName "emission minimum"
	// MDefaultString
	float m_flOutputMin; // 0x1a0
	// MPropertyFriendlyName "emission maximum"
	// MDefaultString
	float m_flOutputMax; // 0x1a4
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x1a8
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	// MDefaultString
	float m_flWorldNoiseScale; // 0x1ac
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1b0
	// MPropertyFriendlyName "world time noise coordinate scale"
	// MDefaultString
	float m_flWorldTimeScale; // 0x1bc
};

// Aligment: 8
// Size: 416
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "current anim time output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x19c
};

// Aligment: 12
// Size: 464
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x19c
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x1a8
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x1ac
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1b0
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x1b4
	// MPropertyFriendlyName "use local system"
	// MDefaultString
	bool m_bLocalCoords; // 0x1b8
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1bc
};

// Aligment: 10
// Size: 432
class C_OP_PercentageBetweenCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x194
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x198
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x19c
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1a0
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x1a1
};

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 400
class C_OP_RadiusDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum radius"
	// MDefaultString
	float m_flMinRadius; // 0x180
};

// Aligment: 6
// Size: 416
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate normals"
	// MDefaultString
	bool m_bTransformNormals; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
	// MPropertyFriendlyName "lifetime fade start"
	// MDefaultString
	float m_flLifeTimeFadeStart; // 0x188
	// MPropertyFriendlyName "lifetime fade end"
	// MDefaultString
	float m_flLifeTimeFadeEnd; // 0x18c
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x190
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x194
};

// Aligment: 8
// Size: 544
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "interpolation rate"
	// MDefaultString
	float m_flInterpRate; // 0x180
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x184
	// MPropertyFriendlyName "CP movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x188
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x18c
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x190
	// MPropertyFriendlyName "CP to trace from"
	// MDefaultString
	int32_t m_nInputCP; // 0x210
	// MPropertyFriendlyName "CP to set"
	// MDefaultString
	int32_t m_nOutputCP; // 0x214
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x21c
};

// Aligment: 4
// Size: 416
class C_OP_TimeVaryingForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "time to start transition"
	// MDefaultString
	float m_flStartLerpTime; // 0x180
	// MPropertyFriendlyName "starting force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x184
	// MPropertyFriendlyName "time to end transition"
	// MDefaultString
	float m_flEndLerpTime; // 0x190
	// MPropertyFriendlyName "ending force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x194
};

// Aligment: 9
// Size: 1944
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	// MDefaultString
	bool m_bEnabled; // 0x0
	// MPropertyFriendlyName "Author Texture As Gradient"
	bool m_bReplaceTextureWithGradient; // 0x1
	// MPropertyFriendlyName "Texture"
	// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8
	// MPropertyFriendlyName "Gradient"
	// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
	CColorGradient m_Gradient; // 0x10
	// MPropertyFriendlyName "Texture Type"
	// MDefaultString
	SpriteCardTextureType_t m_nTextureType; // 0x28
	// MPropertyFriendlyName "Channel Mix"
	// MDefaultString
	SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c
	// MPropertyFriendlyName "Mix Blend Mode"
	// MDefaultString
	ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30
	// MPropertyFriendlyName "Blend Amount"
	// MDefaultString
	CParticleCollectionFloatInput m_flTextureBlend; // 0x38
	// MPropertyFriendlyName "Texture Controls"
	TextureControls_t m_TextureControls; // 0x120
};

// Aligment: 3
// Size: 400
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source CP"
	// MDefaultString
	int32_t m_nSourceCP; // 0x180
	// MPropertyFriendlyName "dest CP"
	// MDefaultString
	int32_t m_nDestCP; // 0x184
	// MPropertyFriendlyName "dest control point component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x188
};

// Aligment: 5
// Size: 416
class C_OP_LerpVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x184
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x190
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x194
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x198
};

// Aligment: 5
// Size: 528
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "velocity minimum"
	// MDefaultString
	float m_flVelocityMin; // 0x180
	// MPropertyFriendlyName "velocity maximum"
	// MDefaultString
	float m_flVelocityMax; // 0x184
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x188
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x18c
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x20c
};

// Aligment: 1
// Size: 400
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x180
};

// Aligment: 6
// Size: 400
class C_INIT_GlobalScale : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale amount"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x184
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x188
	// MPropertyFriendlyName "scale radius"
	// MDefaultString
	bool m_bScaleRadius; // 0x18c
	// MPropertyFriendlyName "scale position"
	// MDefaultString
	bool m_bScalePosition; // 0x18d
	// MPropertyFriendlyName "scale velocity"
	// MDefaultString
	bool m_bScaleVelocity; // 0x18e
};

// Aligment: 4
// Size: 416
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Target color control point number"
	// MDefaultString
	int32_t m_nColorCP; // 0x180
	// MPropertyFriendlyName "Color Gem Enable control point number"
	// MDefaultString
	int32_t m_nColorGemEnableCP; // 0x184
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputCP; // 0x188
	// MPropertyFriendlyName "Default HSV Color"
	// MDefaultString
	Color m_DefaultHSVColor; // 0x18c
};

// Aligment: 5
// Size: 416
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x180
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
};

// Aligment: 9
// Size: 512
class C_OP_RenderScreenShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x1d0
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x1d4
	// MPropertyFriendlyName "frequence scale"
	// MDefaultString
	float m_flFrequencyScale; // 0x1d8
	// MPropertyFriendlyName "amplitude scale"
	// MDefaultString
	float m_flAmplitudeScale; // 0x1dc
	// MPropertyFriendlyName "radius field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x1e0
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1e4
	// MPropertyFriendlyName "frequency field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x1e8
	// MPropertyFriendlyName "amplitude field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x1ec
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	// MDefaultString
	int32_t m_nFilterCP; // 0x1f0
};

// Aligment: 4
// Size: 400
class C_OP_FadeIn : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "fade in time min"
	// MDefaultString
	float m_flFadeInTimeMin; // 0x180
	// MPropertyFriendlyName "fade in time max"
	// MDefaultString
	float m_flFadeInTimeMax; // 0x184
	// MPropertyFriendlyName "fade in time exponent"
	// MDefaultString
	float m_flFadeInTimeExp; // 0x188
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x18c
};

// Aligment: 1
// Size: 624
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "simulation timescale"
	// MDefaultString
	CParticleCollectionFloatInput m_flSimulationScale; // 0x180
};

// Aligment: 3
// Size: 400
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x188
};

// Aligment: 6
// Size: 4080
class C_OP_CurlNoiseForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "noise type"
	// MDefaultString
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x180
	// MPropertyFriendlyName "noise frequency"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x188
	// MPropertyFriendlyName "noise amplitude"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x5b8
	// MPropertyFriendlyName "offset rate"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0x9e8
	// MPropertyFriendlyName "worley seed"
	// MDefaultString
	CPerParticleFloatInput m_flWorleySeed; // 0xe18
	// MPropertyFriendlyName "worley jitter"
	// MDefaultString
	CPerParticleFloatInput m_flWorleyJitter; // 0xf00
};

// Aligment: 0
// Size: 8
class IControlPointEditorData
{
public:
// <no members described>
};

// Aligment: 4
// Size: 416
class C_OP_RemapCPOrientationToRotations : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	// MDefaultString
	Vector m_vecRotation; // 0x184
	// MPropertyFriendlyName "Use Quaternians Internally"
	// MDefaultString
	bool m_bUseQuat; // 0x190
	// MPropertyFriendlyName "Write normal instead of rotation"
	// MDefaultString
	bool m_bWriteNormal; // 0x191
};

// Aligment: 4
// Size: 1696
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MDefaultString
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x180
	// MPropertyFriendlyName "rotation rate"
	// MDefaultString
	CParticleCollectionFloatInput m_flRotRate; // 0x5b0
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x698
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nLocalCP; // 0x69c
};

// Aligment: 10
// Size: 432
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nInputControlPoint; // 0x180
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x184
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x188
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x18c
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x190
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x194
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x198
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x19c
	// MPropertyFriendlyName "use the derivative"
	// MDefaultString
	bool m_bDerivative; // 0x1a0
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	float m_flInterpRate; // 0x1a4
};

// Aligment: 11
// Size: 432
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0x180
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0x184
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "use particle velocity for first input"
	// MDefaultString
	bool m_bUseParticleVelocity; // 0x19c
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a0
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1a4
	// MPropertyFriendlyName "use particle normal for first input"
	// MDefaultString
	bool m_bUseParticleNormal; // 0x1a5
};

// Aligment: 7
// Size: 416
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x184
	// MPropertyFriendlyName "scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x188
	// MPropertyFriendlyName "input volume minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input volume maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
};

// Aligment: 2
// Size: 400
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number to set"
	// MDefaultString
	int32_t m_nCP1; // 0x180
	// MPropertyFriendlyName "center offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x184
};

// Aligment: 17
// Size: 4576
class C_INIT_CreateWithinSphere : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "distance min"
	// MDefaultString
	CPerParticleFloatInput m_fRadiusMin; // 0x180
	// MPropertyFriendlyName "distance max"
	// MDefaultString
	CPerParticleFloatInput m_fRadiusMax; // 0x268
	// MPropertyFriendlyName "distance bias"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x350
	// MPropertyFriendlyName "distance bias absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0x780
	// MPropertyFriendlyName "randomly distribute between the control point and control point max"
	// MDefaultString
	bool m_bDistributeInCPRange; // 0x78c
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x790
	// MPropertyFriendlyName "max control point number"
	// MDefaultString
	// MPropertySuppressExpr "m_bDistributeInCPRange != true"
	int32_t m_nControlPointNumberMax; // 0x794
	// MPropertyFriendlyName "speed min"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMin; // 0x798
	// MPropertyFriendlyName "speed max"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMax; // 0x880
	// MPropertyFriendlyName "speed random exponent"
	// MDefaultString
	float m_fSpeedRandExp; // 0x968
	// MPropertyFriendlyName "bias in local system"
	// MDefaultString
	bool m_bLocalCoords; // 0x96c
	// MPropertyFriendlyName "randomly distribute to highest supplied control point"
	// MDefaultString
	// MParticleMaxVersion
	bool m_bUseHighestEndCP; // 0x96e
	// MPropertyFriendlyName "randomly distribution growth time"
	// MDefaultString
	float m_flEndCPGrowthTime; // 0x970
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x978
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xda8
	// MPropertyFriendlyName "Output vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x11d8
	// MPropertyFriendlyName "Velocity vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x11dc
};

// Aligment: 4
// Size: 400
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x188
	// MPropertyFriendlyName "control point axis"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c
};

// Aligment: 16
// Size: 2768
class C_OP_RenderStandardLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "light type"
	// MDefaultString
	ParticleLightTypeChoiceList_t m_nLightType; // 0x1d0
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x1d8
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x608
	// MPropertyFriendlyName "intensity"
	// MDefaultString
	CParticleCollectionFloatInput m_flIntensity; // 0x610
	// MPropertyFriendlyName "cast shadows"
	// MDefaultString
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x6f8
	// MPropertyFriendlyName "inner cone angle"
	// MDefaultString
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	float m_flTheta; // 0x6fc
	// MPropertyFriendlyName "outer cone angle"
	// MDefaultString
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	float m_flPhi; // 0x700
	// MPropertyFriendlyName "light radius multiplier"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0x708
	// MPropertyFriendlyName "attenuation type"
	// MDefaultString
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0x7f0
	// MPropertyFriendlyName "falloff linearity"
	// MDefaultString
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0x7f8
	// MPropertyFriendlyName "falloff fifty percent"
	// MDefaultString
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0x8e0
	// MPropertyFriendlyName "falloff zero percent"
	// MDefaultString
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x9c8
	// MPropertyFriendlyName "render diffuse"
	// MDefaultString
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0xab0
	// MPropertyFriendlyName "render specular"
	// MDefaultString
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0xab1
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0xab8
	// MPropertyFriendlyName "light priority"
	// MDefaultString
	int32_t m_nPriority; // 0xac0
};

// Aligment: 1
// Size: 400
class C_OP_WindForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force to apply"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vForce; // 0x180
};

// Aligment: 0
// Size: 232
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 11
// Size: 432
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x19c
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x1a0
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a4
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1a8
};

// Aligment: 6
// Size: 512
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer, CParticleFunction
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

// Aligment: 3
// Size: 416
class C_OP_ClampVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x184
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x190
};

// Aligment: 7
// Size: 464
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x188
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x1a0
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1b8
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1c0
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x1c4
};

// Aligment: 4
// Size: 464
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade time"
	// MDefaultString
	float m_flFadeStart; // 0x184
	// MPropertyFriendlyName "end fade time"
	// MDefaultString
	float m_flFadeEnd; // 0x188
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x18c
	CPathParameters m_PathParams; // 0x190
};

// Aligment: 3
// Size: 416
class CGeneralSpin : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	// MDefaultString
	int32_t m_nSpinRateDegrees; // 0x180
	// MPropertyFriendlyName "spin rate min"
	// MDefaultString
	int32_t m_nSpinRateMinDegrees; // 0x184
	// MPropertyFriendlyName "spin stop time"
	// MDefaultString
	float m_fSpinRateStopTime; // 0x18c
};

// Aligment: 3
// Size: 624
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	// MDefaultString
	CParticleCollectionFloatInput m_flDuration; // 0x180
	// MPropertyFriendlyName "destroy all particles immediately"
	// MDefaultString
	bool m_bDestroyImmediately; // 0x268
	// MPropertyFriendlyName "play end cap effect"
	// MDefaultString
	bool m_bPlayEndCap; // 0x269
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 7
// Size: 480
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x180
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x184
	// MPropertyFriendlyName "cohesion strength"
	// MDefaultString
	float m_flCohesionStrength; // 0x188
	// MPropertyFriendlyName "control point movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x18c
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x190
	// MPropertyFriendlyName "use existing particle count"
	// MDefaultString
	bool m_bUseParticleCount; // 0x191
	CPathParameters m_PathParams; // 0x1a0
};

// Aligment: 2
// Size: 400
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nCPOutput; // 0x184
};

// Aligment: 5
// Size: 416
class C_OP_ExternalGenericForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "strength"
	// MDefaultString
	float m_flStrength; // 0x180
	// MPropertyFriendlyName "curl strength"
	// MDefaultString
	float m_flCurlStrength; // 0x184
	// MPropertyFriendlyName "linear strength"
	// MDefaultString
	float m_flLinearStrength; // 0x188
	// MPropertyFriendlyName "radial strength"
	// MDefaultString
	float m_flRadialStrength; // 0x18c
	// MPropertyFriendlyName "rotation strength"
	// MDefaultString
	float m_flRotationStrength; // 0x190
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 400
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "Acceleration"
	// MDefaultString
	float m_flAccel; // 0x180
};

// Aligment: 10
// Size: 464
class C_OP_RampScalarSpline : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	float m_RateMin; // 0x180
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	float m_RateMax; // 0x184
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x188
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x18c
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x190
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x194
	// MPropertyFriendlyName "bias"
	// MDefaultString
	float m_flBias; // 0x198
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x1c4
	// MPropertyFriendlyName "ease out"
	// MDefaultString
	bool m_bEaseOut; // 0x1c5
};

// Aligment: 5
// Size: 416
class C_OP_ColorInterpolate : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color fade"
	// MDefaultString
	Color m_ColorFade; // 0x180
	// MPropertyFriendlyName "fade start time"
	// MDefaultString
	float m_flFadeStartTime; // 0x190
	// MPropertyFriendlyName "fade end time"
	// MDefaultString
	float m_flFadeEndTime; // 0x194
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInOut; // 0x19c
};

// Aligment: 1
// Size: 4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 7
// Size: 416
class C_OP_FadeAndKill : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade in time"
	// MDefaultString
	float m_flStartFadeInTime; // 0x180
	// MPropertyFriendlyName "end fade in time"
	// MDefaultString
	float m_flEndFadeInTime; // 0x184
	// MPropertyFriendlyName "start fade out time"
	// MDefaultString
	float m_flStartFadeOutTime; // 0x188
	// MPropertyFriendlyName "end fade out time"
	// MDefaultString
	float m_flEndFadeOutTime; // 0x18c
	// MPropertyFriendlyName "start alpha"
	// MDefaultString
	float m_flStartAlpha; // 0x190
	// MPropertyFriendlyName "end alpha"
	// MDefaultString
	float m_flEndAlpha; // 0x194
	// MPropertyFriendlyName "force preserving particle order"
	// MDefaultString
	bool m_bForcePreserveParticleOrder; // 0x198
};

// Aligment: 3
// Size: 400
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "creation control point number"
	// MDefaultString
	int32_t m_nControlPointNumberStart; // 0x180
	// MPropertyFriendlyName "offset control point number"
	// MDefaultString
	int32_t m_nControlPointNumberEnd; // 0x184
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x188
};

// Aligment: 7
// Size: 416
class C_OP_MaintainEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "count to maintain"
	// MDefaultString
	int32_t m_nParticlesToMaintain; // 0x180
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	float m_flStartTime; // 0x184
	// MPropertyFriendlyName "maintain count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x188
	// MPropertyFriendlyName "maintain count scale control point field"
	// MDefaultString
	int32_t m_nScaleControlPointField; // 0x18c
	// MPropertyFriendlyName "emission rate"
	// MDefaultString
	float m_flEmissionRate; // 0x190
	// MPropertyFriendlyName "control point with snapshot data"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x194
	// MPropertyFriendlyName "group emission times for new particles"
	// MDefaultString
	bool m_bEmitInstantaneously; // 0x198
};

// Aligment: 3
// Size: 400
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0x180
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0x184
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x188
};

// Aligment: 3
// Size: 400
class C_OP_MaxVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum velocity"
	// MDefaultString
	float m_flMaxVelocity; // 0x180
	// MPropertyFriendlyName "override max velocity from this CP"
	// MDefaultString
	int32_t m_nOverrideCP; // 0x184
	// MPropertyFriendlyName "override CP field"
	// MDefaultString
	int32_t m_nOverrideCPField; // 0x188
};

// Aligment: 11
// Size: 544
class C_OP_RenderProjected : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "project on characters"
	// MDefaultString
	bool m_bProjectCharacter; // 0x1d0
	// MPropertyFriendlyName "project on world"
	// MDefaultString
	bool m_bProjectWorld; // 0x1d1
	// MPropertyFriendlyName "project on water"
	// MDefaultString
	bool m_bProjectWater; // 0x1d2
	// MPropertyFriendlyName "flip horizontal"
	// MDefaultString
	bool m_bFlipHorizontal; // 0x1d3
	// MPropertyFriendlyName "enable projected depth controls"
	// MDefaultString
	bool m_bEnableProjectedDepthControls; // 0x1d4
	// MPropertyFriendlyName "min projection depth"
	// MDefaultString
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x1d8
	// MPropertyFriendlyName "max projection depth"
	// MDefaultString
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x1dc
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x1e0
	// MPropertyFriendlyName "sheet animation time scale"
	// MDefaultString
	float m_flAnimationTimeScale; // 0x1e8
	// MPropertyFriendlyName "orient to normal"
	// MDefaultString
	bool m_bOrientToNormal; // 0x1ec
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1f0
};

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1696
class C_OP_PerParticleForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force scale"
	// MDefaultString
	CPerParticleFloatInput m_flForceScale; // 0x180
	// MPropertyFriendlyName "force to apply"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x268
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nCP; // 0x698
};

// Aligment: 4
// Size: 400
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "read field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "written field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184
	// MPropertyFriendlyName "particle neighbor increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x188
	// MPropertyFriendlyName "group id"
	// MDefaultString
	int32_t m_nGroupID; // 0x18c
};

// Aligment: 11
// Size: 1632
class C_INIT_CreateOnModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "force to be inside model"
	// MDefaultString
	int32_t m_nForceInModel; // 0x184
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x188
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	// MDefaultString
	int32_t m_nHitboxValueFromControlPointIndex; // 0x18c
	// MPropertyFriendlyName "hitbox scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x190
	// MPropertyFriendlyName "inherited velocity scale"
	// MDefaultString
	float m_flBoneVelocity; // 0x5c0
	// MPropertyFriendlyName "maximum inherited velocity"
	// MDefaultString
	float m_flMaxBoneVelocity; // 0x5c4
	// MPropertyFriendlyName "direction bias"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x5c8
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x5d4
	// MPropertyFriendlyName "bias in local space"
	// MDefaultString
	bool m_bLocalCoords; // 0x654
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x655
};

// Aligment: 3
// Size: 624
class C_INIT_InitFloat : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x26c
};

// Aligment: 4
// Size: 1696
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MDefaultString
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x180
	// MPropertyFriendlyName "rotation rate"
	// MDefaultString
	CParticleCollectionFloatInput m_flRotRate; // 0x5b0
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x698
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x69c
};

// Aligment: 14
// Size: 1632
class C_OP_DistanceToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x194
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x198
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x199
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x21c
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x220
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x224
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x228
	// MPropertyFriendlyName "output is additive"
	// MDefaultString
	bool m_bAdditive; // 0x229
	// MPropertyFriendlyName "component scale"
	// MDefaultString
	CPerParticleVecInput m_vecComponentScale; // 0x230
};

// Aligment: 12
// Size: 464
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x180
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0x181
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0x182
	// MPropertyFriendlyName "first control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x184
	// MPropertyFriendlyName "second control point number"
	// MDefaultString
	int32_t m_nCP2; // 0x188
	// MPropertyFriendlyName "third control point number"
	// MDefaultString
	int32_t m_nCP3; // 0x18c
	// MPropertyFriendlyName "fourth control point number"
	// MDefaultString
	int32_t m_nCP4; // 0x190
	// MPropertyFriendlyName "first control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x194
	// MPropertyFriendlyName "second control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x1a0
	// MPropertyFriendlyName "third control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x1ac
	// MPropertyFriendlyName "fourth control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x1b8
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x1c4
};

// Aligment: 5
// Size: 432
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x180
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_flMaxDistance; // 0x184
	// MPropertyFriendlyName "Time scale"
	// MDefaultString
	float m_flTimeScale; // 0x188
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bLoopedPath; // 0x18c
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x190
};

// Aligment: 11
// Size: 432
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x180
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x184
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x188
	// MPropertyFriendlyName "scale from conrol point (radius 1/radius 2/offset)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x18c
	// MPropertyFriendlyName "particle density"
	// MDefaultString
	float m_flParticleDensity; // 0x190
	// MPropertyFriendlyName "point offset"
	// MDefaultString
	float m_flOffset; // 0x194
	// MPropertyFriendlyName "radius 1"
	// MDefaultString
	float m_flRadius1; // 0x198
	// MPropertyFriendlyName "radius 2"
	// MDefaultString
	float m_flRadius2; // 0x19c
	// MPropertyFriendlyName "use particle count instead of creation time"
	// MDefaultString
	bool m_bUseCount; // 0x1a0
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bUseLocalCoords; // 0x1a1
	// MPropertyFriendlyName "offset from existing position"
	// MDefaultString
	bool m_bOffsetExistingPos; // 0x1a2
};

// Aligment: 5
// Size: 1104
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x180
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x268
	// MPropertyFriendlyName "force falloff function"
	// MDefaultString
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x350
	// MPropertyFriendlyName "exponential falloff exponent"
	// MDefaultString
	CPerParticleFloatInput m_InputFalloffExp; // 0x358
	// MPropertyFriendlyName "impulse type"
	// MDefaultString
	ParticleImpulseType_t m_nImpulseType; // 0x440
};

// Aligment: 13
// Size: 464
class C_OP_RemapCPtoVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x198
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1a4
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1b0
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x1bc
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x1c0
	// MPropertyFriendlyName "interpolation scale"
	// MDefaultString
	float m_flInterpRate; // 0x1c4
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1c8
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x1cc
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x1cd
};

// Aligment: 11
// Size: 2416
class C_OP_PinParticleToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "offset"
	// MDefaultString
	CParticleCollectionVecInput m_vecOffset; // 0x188
	// MPropertyFriendlyName "offset in local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x5b8
	// MPropertyFriendlyName "particle to use"
	// MDefaultString
	ParticleSelection_t m_nParticleSelection; // 0x5bc
	// MPropertyFriendlyName "particle number"
	// MDefaultString
	CParticleCollectionFloatInput m_nParticleNumber; // 0x5c0
	// MPropertyFriendlyName "pin break type"
	// MDefaultString
	ParticlePinDistance_t m_nPinBreakType; // 0x6a8
	// MPropertyFriendlyName "break length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flBreakDistance; // 0x6b0
	// MPropertyFriendlyName "break speed"
	// MDefaultString
	CParticleCollectionFloatInput m_flBreakSpeed; // 0x798
	// MPropertyFriendlyName "break age"
	// MDefaultString
	CParticleCollectionFloatInput m_flAge; // 0x880
	// MPropertyFriendlyName "break comparison control point 1"
	// MDefaultString
	int32_t m_nBreakControlPointNumber; // 0x968
	// MPropertyFriendlyName "break comparison control point 2"
	// MDefaultString
	int32_t m_nBreakControlPointNumber2; // 0x96c
};

// Aligment: 9
// Size: 448
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x198
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x1a0
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x1a8
};

// Aligment: 7
// Size: 432
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x188
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x18c
	// MPropertyFriendlyName "offset axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x190
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x19c
	// MPropertyFriendlyName "strength field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x1a0
};

// Aligment: 10
// Size: 3488
class C_OP_ChladniWave : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "wave minimum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMin; // 0x188
	// MPropertyFriendlyName "wave maximum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMax; // 0x270
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMin; // 0x358
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMax; // 0x440
	// MPropertyFriendlyName "wave length"
	// MDefaultString
	CPerParticleVecInput m_vecWaveLength; // 0x528
	// MPropertyFriendlyName "harmonics"
	// MDefaultString
	CPerParticleVecInput m_vecHarmonics; // 0x958
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0xd88
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nLocalSpaceControlPoint; // 0xd8c
	// MPropertyFriendlyName "3D"
	// MDefaultString
	bool m_b3D; // 0xd90
};

// Aligment: 5
// Size: 640
class C_OP_SetChildControlPoints : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x184
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x188
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x190
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x278
};

// Aligment: 1
// Size: 400
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
};

// Aligment: 5
// Size: 2544
class C_INIT_PositionOffset : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset min"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x180
	// MPropertyFriendlyName "offset max"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x5b0
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x9e0
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x9e4
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	// MDefaultString
	bool m_bProportional; // 0x9e5
};

// Aligment: 2
// Size: 400
class C_INIT_InheritVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x184
};

// Aligment: 21
// Size: 3552
class C_OP_RenderCables : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Radius Scale"
	// MDefaultString
	// MPropertyGroupName "Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	// MPropertyGroupName "Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x2b8
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	// MPropertyGroupName "Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x3a0
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	// MPropertyGroupName "Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x7d0
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x7d8
	// MPropertyFriendlyName "texture repetition mode"
	// MDefaultString
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0x7e0
	// MPropertyFriendlyName "texture repetitions"
	// MDefaultString
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0x7e8
	// MPropertyFriendlyName "texture repetitions around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0x8d0
	// MPropertyFriendlyName "color map offset along path"
	// MDefaultString
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0x9b8
	// MPropertyFriendlyName "color map offset around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xaa0
	// MPropertyFriendlyName "normal map offset along path"
	// MDefaultString
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xb88
	// MPropertyFriendlyName "normal map offset around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0xc70
	// MPropertyFriendlyName "draw caps at each end of the cable"
	// MDefaultString
	bool m_bDrawCableCaps; // 0xd58
	// MPropertyFriendlyName "cable end cap shape factor"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0xd5c
	// MPropertyFriendlyName "cable end cap offset amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0xd60
	// MPropertyFriendlyName "tessellation scale factor"
	// MDefaultString
	float m_flTessScale; // 0xd64
	// MPropertyFriendlyName "minimum steps between particles"
	// MDefaultString
	int32_t m_nMinTesselation; // 0xd68
	// MPropertyFriendlyName "maximum steps between particles"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0xd6c
	// MPropertyFriendlyName "roundness factor"
	// MDefaultString
	int32_t m_nRoundness; // 0xd70
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0xd78
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0xda8
};

// Aligment: 8
// Size: 416
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x184
	// MPropertyFriendlyName "field to write"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x188
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x18c
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x190
	// MPropertyFriendlyName "reverse order"
	// MDefaultString
	bool m_bReverse; // 0x191
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x194
	// MPropertyFriendlyName "local space angles"
	// MDefaultString
	bool m_bLocalSpaceAngles; // 0x198
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 9
// Size: 416
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "difference minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "difference maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x198
	// MPropertyFriendlyName "only active within specified difference"
	// MDefaultString
	bool m_bActiveRange; // 0x19c
	// MPropertyFriendlyName "also set ouput to previous particle"
	// MDefaultString
	bool m_bSetPreviousParticle; // 0x19d
};

// Aligment: 3
// Size: 416
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x180
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x184
	// MPropertyFriendlyName "use hmd orientation"
	// MDefaultString
	bool m_bOrientToHMD; // 0x190
};

// Aligment: 3
// Size: 400
class C_OP_ClampScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x184
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x188
};

// Aligment: 12
// Size: 560
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x180
	// MPropertyFriendlyName "minimum velocity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x200
	// MPropertyFriendlyName "maximum velocity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x20c
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x218
	// MPropertyFriendlyName "per particle world collision tests"
	// MDefaultString
	bool m_bPerParticle; // 0x21c
	// MPropertyFriendlyName "offset instead of accelerate"
	// MDefaultString
	bool m_bTranslate; // 0x21d
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	// MDefaultString
	bool m_bProportional; // 0x21e
	// MPropertyFriendlyName "trace length"
	// MDefaultString
	float m_flTraceLength; // 0x220
	// MPropertyFriendlyName "use radius for per particle trace length"
	// MDefaultString
	bool m_bPerParticleTR; // 0x224
	// MPropertyFriendlyName "inherit from parent"
	// MDefaultString
	bool m_bInherit; // 0x225
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	// MDefaultString
	int32_t m_nChildCP; // 0x228
	// MPropertyFriendlyName "child group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x22c
};

// Aligment: 4
// Size: 640
class C_OP_LerpScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	CPerParticleFloatInput m_flOutput; // 0x188
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x270
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x274
};

// Aligment: 5
// Size: 864
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x184
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x188
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x190
	// MPropertyFriendlyName "Snapshot Index T Value"
	// MDefaultString
	CPerParticleFloatInput m_flTValue; // 0x278
};

// Aligment: 8
// Size: 1616
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "force to be inside model"
	// MDefaultString
	int32_t m_nForceInModel; // 0x184
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x188
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x190
	// MPropertyFriendlyName "direction bias"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x5c0
	// MPropertyFriendlyName "maintain existing hitbox"
	// MDefaultString
	bool m_bMaintainHitbox; // 0x5cc
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x5cd
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x5ce
};

// Aligment: 3
// Size: 1472
class C_INIT_InitVec : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x5b4
};

// Aligment: 1
// Size: 400
class C_OP_AlphaDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum alpha"
	// MDefaultString
	float m_flMinAlpha; // 0x180
};

// Aligment: 8
// Size: 416
class C_OP_SequenceFromModel : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "current anim time output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x19c
};

// Aligment: 3
// Size: 1088
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "hue adjust"
	// MDefaultString
	CPerParticleFloatInput m_flHueAdjust; // 0x180
	// MPropertyFriendlyName "saturation adjust"
	// MDefaultString
	CPerParticleFloatInput m_flSaturationAdjust; // 0x268
	// MPropertyFriendlyName "lightness adjust"
	// MDefaultString
	CPerParticleFloatInput m_flLightnessAdjust; // 0x350
};

// Aligment: 6
// Size: 416
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade in time"
	// MDefaultString
	float m_flStartFadeInTime; // 0x180
	// MPropertyFriendlyName "end fade in time"
	// MDefaultString
	float m_flEndFadeInTime; // 0x184
	// MPropertyFriendlyName "start fade out time"
	// MDefaultString
	float m_flStartFadeOutTime; // 0x188
	// MPropertyFriendlyName "end fade out time"
	// MDefaultString
	float m_flEndFadeOutTime; // 0x18c
	// MPropertyFriendlyName "start alpha"
	// MDefaultString
	float m_flStartAlpha; // 0x190
	// MPropertyFriendlyName "end alpha"
	// MDefaultString
	float m_flEndAlpha; // 0x194
};

// Aligment: 6
// Size: 432
class C_OP_Noise : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x184
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x188
	// MPropertyFriendlyName "noise coordinate scale"
	// MDefaultString
	fltx4 m_fl4NoiseScale; // 0x190
	// MPropertyFriendlyName "additive"
	// MDefaultString
	bool m_bAdditive; // 0x1a0
	// MPropertyFriendlyName "Noise animation time scale"
	// MDefaultString
	float m_flNoiseAnimationTimeScale; // 0x1a4
};

// Aligment: 2
// Size: 848
class C_OP_CollideWithSelf : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "particle radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusScale; // 0x180
	// MPropertyFriendlyName "minimum speed for check"
	// MDefaultString
	CPerParticleFloatInput m_flMinimumSpeed; // 0x268
};

// Aligment: 4
// Size: 400
class C_OP_LagCompensation : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	// MDefaultString
	int32_t m_nDesiredVelocityCP; // 0x180
	// MPropertyFriendlyName "latency CP"
	// MDefaultString
	int32_t m_nLatencyCP; // 0x184
	// MPropertyFriendlyName "latency CP field"
	// MDefaultString
	int32_t m_nLatencyCPField; // 0x188
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	// MDefaultString
	int32_t m_nDesiredVelocityCPField; // 0x18c
};

// Aligment: 17
// Size: 448
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x188
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x18c
	// MPropertyFriendlyName "prepare for rigid lock"
	// MDefaultString
	bool m_bRigid; // 0x190
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x191
	// MPropertyFriendlyName "normal velocity ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x192
	// MPropertyFriendlyName "normal velocity min"
	// MDefaultString
	float m_flMinNormalVelocity; // 0x194
	// MPropertyFriendlyName "normal velocity max"
	// MDefaultString
	float m_flMaxNormalVelocity; // 0x198
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	float m_flIncrement; // 0x19c
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MDefaultString
	int32_t m_nFullLoopIncrement; // 0x1a0
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	int32_t m_nSnapShotStartPoint; // 0x1a4
	// MPropertyFriendlyName "inherited bone velocity"
	// MDefaultString
	float m_flBoneVelocity; // 0x1a8
	// MPropertyFriendlyName "max inherited bone velocity"
	// MDefaultString
	float m_flBoneVelocityMax; // 0x1ac
	// MPropertyFriendlyName "Set Color"
	// MDefaultString
	bool m_bCopyColor; // 0x1b0
	// MPropertyFriendlyName "Set Alpha"
	// MDefaultString
	bool m_bCopyAlpha; // 0x1b1
	// MPropertyFriendlyName "Set Radius"
	// MDefaultString
	bool m_bCopyRadius; // 0x1b2
};

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 232
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 2
// Size: 400
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x180
	// MPropertyFriendlyName "Second Control point to set"
	// MDefaultString
	int32_t m_nSecondControlPoint; // 0x184
};

// Aligment: 1
// Size: 4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleEffect
{
public:
// <no members described>
};

// Aligment: 5
// Size: 416
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x180
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	float m_flIncrement; // 0x184
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x188
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x18c
	// MPropertyFriendlyName "sub frame interpolation"
	// MDefaultString
	bool m_bSubFrame; // 0x190
};

// Aligment: 4
// Size: 1696
class C_OP_SetVec : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x5b0
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x5b4
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CPerParticleFloatInput m_Lerp; // 0x5b8
};

// Aligment: 3
// Size: 416
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "desired offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x180
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nCP; // 0x18c
	// MPropertyFriendlyName "scale by radius"
	// MDefaultString
	bool m_bRadiusScale; // 0x190
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 12
// Size: 1856
class C_OP_LockToBone : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control_point_number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "lifetime fade start"
	// MDefaultString
	float m_flLifeTimeFadeStart; // 0x184
	// MPropertyFriendlyName "lifetime fade end"
	// MDefaultString
	float m_flLifeTimeFadeEnd; // 0x188
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x18c
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x190
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x194
	// MPropertyFriendlyName "rigid lock"
	// MDefaultString
	bool m_bRigid; // 0x214
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x215
	// MPropertyFriendlyName "lock rotations to bone orientation"
	// MDefaultString
	// MPropertyGroupName "Set Rotations to Bones"
	ParticleRotationLockType_t m_nRotationSetType; // 0x218
	// MPropertyFriendlyName "rigid set rotation from bones"
	// MDefaultString
	// MPropertyGroupName "Set Rotations to Bones"
	bool m_bRigidRotationLock; // 0x21c
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	// MPropertyGroupName "Set Rotations to Bones"
	CPerParticleVecInput m_vecRotation; // 0x220
	// MPropertyFriendlyName "rigid rotation interpolation"
	// MDefaultString
	// MPropertyGroupName "Set Rotations to Bones"
	CPerParticleFloatInput m_flRotLerp; // 0x650
};

// Aligment: 11
// Size: 480
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start value"
	// MDefaultString
	Vector m_vStartValue; // 0x180
	// MPropertyFriendlyName "input field 1"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x18c
	// MPropertyFriendlyName "input scale 1"
	// MDefaultString
	float m_flInputScale1; // 0x190
	// MPropertyFriendlyName "input field 2"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x194
	// MPropertyFriendlyName "input scale 2"
	// MDefaultString
	float m_flInputScale2; // 0x198
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x19c
	// MPropertyFriendlyName "control point scale 1"
	// MDefaultString
	float m_flControlPointScale1; // 0x1b0
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x1b4
	// MPropertyFriendlyName "control point scale 2"
	// MDefaultString
	float m_flControlPointScale2; // 0x1c8
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc
	// MPropertyFriendlyName "final per component scale"
	// MDefaultString
	Vector m_vFinalOutputScale; // 0x1d0
};

// Aligment: 4
// Size: 400
class C_OP_RemapCPOrientationToYaw : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x188
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x18c
};

// Aligment: 3
// Size: 400
class C_OP_DampenToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "falloff range"
	// MDefaultString
	float m_flRange; // 0x184
	// MPropertyFriendlyName "dampen scale"
	// MDefaultString
	float m_flScale; // 0x188
};

// Aligment: 6
// Size: 432
class CGeneralRandomRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "yaw offset min"
	// MDefaultString
	float m_flDegreesMin; // 0x180
	// MPropertyFriendlyName "yaw offset max"
	// MDefaultString
	float m_flDegreesMax; // 0x184
	// MPropertyFriendlyName "yaw initial"
	// MDefaultString
	float m_flDegrees; // 0x188
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c
	// MPropertyFriendlyName "yaw random exponent"
	// MDefaultString
	float m_flRotationRandExponent; // 0x19c
	// MPropertyFriendlyName "randomly flip direction"
	// MDefaultString
	bool m_bRandomlyFlipDirection; // 0x1a0
};

// Aligment: 3
// Size: 400
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "Output Scalar"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "Vector Component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x188
};

// Aligment: 8
// Size: 432
class C_INIT_AgeNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x180
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x181
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x184
	// MPropertyFriendlyName "start age minimum"
	// MDefaultString
	float m_flAgeMin; // 0x188
	// MPropertyFriendlyName "start age maximum"
	// MDefaultString
	float m_flAgeMax; // 0x18c
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x190
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x194
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x198
};

// Aligment: 3
// Size: 20
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x0
	// MPropertyFriendlyName "Use local coordinates for offset"
	// MDefaultString
	bool m_bLocalCoords; // 0x4
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffset; // 0x8
};

// Aligment: 4
// Size: 896
class C_OP_SetFloatCollection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x26c
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_Lerp; // 0x270
};

// Aligment: 2
// Size: 400
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence min"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x180
	// MPropertyFriendlyName "sequence max"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x184
};

// Aligment: 5
// Size: 416
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x188
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x18c
	// MPropertyFriendlyName "behavior if parent particle dies"
	// MDefaultString
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x190
};

// Aligment: 0
// Size: 432
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2544
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x180
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x5b0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x9e0
	// MPropertyFriendlyName "normalize output"
	// MDefaultString
	bool m_bNormalize; // 0x9e4
};

// Aligment: 2
// Size: 400
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInputControlPoint; // 0x180
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x184
};

// Aligment: 15
// Size: 800
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset"
	// MDefaultString
	CPerParticleFloatInput m_flOffset; // 0x180
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x268
	// MPropertyFriendlyName "CP movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x26c
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x270
	// MPropertyFriendlyName "interpolation rate"
	// MDefaultString
	float m_flLerpRate; // 0x274
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x278
	// MPropertyFriendlyName "reference CP 1"
	// MDefaultString
	int32_t m_nRefCP1; // 0x2f8
	// MPropertyFriendlyName "reference CP 2"
	// MDefaultString
	int32_t m_nRefCP2; // 0x2fc
	// MPropertyFriendlyName "interploation distance tolerance cp"
	// MDefaultString
	int32_t m_nLerpCP; // 0x300
	// MPropertyFriendlyName "kill on no collision"
	// MDefaultString
	bool m_bKill; // 0x308
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x309
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x30c
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	// MDefaultString
	bool m_bScaleOffset; // 0x30d
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	// MDefaultString
	int32_t m_nPreserveOffsetCP; // 0x310
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x314
};

// Aligment: 5
// Size: 432
class C_OP_LockToPointList : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188
	// MPropertyFriendlyName "space points along path"
	// MDefaultString
	bool m_bPlaceAlongPath; // 0x1a0
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x1a1
	// MPropertyFriendlyName "Numer of points along path"
	// MDefaultString
	int32_t m_nNumPointsAlongPath; // 0x1a4
};

// Aligment: 3
// Size: 624
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "CP to point towards"
	// MDefaultString
	int32_t m_nInputCP; // 0x180
	// MPropertyFriendlyName "CP to set"
	// MDefaultString
	int32_t m_nOutputCP; // 0x184
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_flInterpolation; // 0x188
};

// Aligment: 1
// Size: 400
class C_OP_VelocityDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum velocity"
	// MDefaultString
	float m_flMinVelocity; // 0x180
};

// Aligment: 3
// Size: 416
class C_OP_LerpEndCapVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x184
	// MPropertyFriendlyName "lerp time"
	// MDefaultString
	float m_flLerpTime; // 0x190
};

// Aligment: 0
// Size: 432
class C_INIT_RandomRotation : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 4
// Size: 864
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x188
	// MPropertyFriendlyName "position cache attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x270
	// MPropertyFriendlyName "scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flScale; // 0x278
};

// Aligment: 2
// Size: 480
class C_OP_RenderText : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	Color m_OutlineColor; // 0x1d0
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x1d8
};

// Aligment: 4
// Size: 416
class C_INIT_RemapCPOrientationToRotations : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	// MDefaultString
	Vector m_vecRotation; // 0x184
	// MPropertyFriendlyName "Use Quaternians Internally"
	// MDefaultString
	bool m_bUseQuat; // 0x190
	// MPropertyFriendlyName "Write normal instead of rotation"
	// MDefaultString
	bool m_bWriteNormal; // 0x191
};

// Aligment: 5
// Size: 864
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "read field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "written field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x188
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	CPerParticleFloatInput m_DistanceCheck; // 0x190
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x278
};

// Aligment: 1
// Size: 400
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flip percentage"
	// MDefaultString
	float m_flPercent; // 0x180
};

// Aligment: 4
// Size: 400
class C_OP_Cull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "cull percentage"
	// MDefaultString
	float m_flCullPerc; // 0x180
	// MPropertyFriendlyName "cull start time"
	// MDefaultString
	float m_flCullStart; // 0x184
	// MPropertyFriendlyName "cull end time"
	// MDefaultString
	float m_flCullEnd; // 0x188
	// MPropertyFriendlyName "cull time exponent"
	// MDefaultString
	float m_flCullExp; // 0x18c
};

// Aligment: 1
// Size: 400
class C_OP_NormalLock : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
};

// Aligment: 4
// Size: 464
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade time"
	// MDefaultString
	float m_flFadeStart; // 0x180
	// MPropertyFriendlyName "end fade time"
	// MDefaultString
	float m_flFadeEnd; // 0x184
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x188
	CPathParameters m_PathParams; // 0x190
};

// Aligment: 2
// Size: 1080
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "input"
	// MDefaultString
	CParticleCollectionVecInput m_vecInput; // 0x8
};

// Aligment: 6
// Size: 480
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x180
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x184
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x188
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x189
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x18a
	CPathParameters m_PathParams; // 0x190
};

// Aligment: 7
// Size: 416
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x198
};

// Aligment: 0
// Size: 464
class C_OP_RenderClothForce : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 416
class C_OP_RestartAfterDuration : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum restart time"
	// MDefaultString
	float m_flDurationMin; // 0x180
	// MPropertyFriendlyName "maximum restart time"
	// MDefaultString
	float m_flDurationMax; // 0x184
	// MPropertyFriendlyName "control point to scale duration"
	// MDefaultString
	int32_t m_nCP; // 0x188
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x18c
	// MPropertyFriendlyName "child group ID"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x190
	// MPropertyFriendlyName "only restart children"
	// MDefaultString
	bool m_bOnlyChildren; // 0x194
};

// Aligment: 8
// Size: 1616
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x180
	// MPropertyFriendlyName "force creation height to desired height"
	// MDefaultString
	bool m_bForceZ; // 0x181
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
	// MPropertyFriendlyName "height override control point number"
	// MDefaultString
	int32_t m_nHeightCP; // 0x188
	// MPropertyFriendlyName "desired height is relative to water"
	// MDefaultString
	bool m_bUseWaterHeight; // 0x18c
	// MPropertyFriendlyName "relative desired height"
	// MDefaultString
	float m_flDesiredHeight; // 0x190
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x198
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x5c8
};

// Aligment: 3
// Size: 400
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x180
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x184
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x188
};

// Aligment: 3
// Size: 400
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "direction matching strength"
	// MDefaultString
	float m_flDirScale; // 0x180
	// MPropertyFriendlyName "speed matching strength"
	// MDefaultString
	float m_flSpdScale; // 0x184
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	// MDefaultString
	int32_t m_nCPBroadcast; // 0x188
};

// Aligment: 3
// Size: 416
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x180
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	Vector m_vecRateMin; // 0x184
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	Vector m_vecRateMax; // 0x190
};

// Aligment: 10
// Size: 1792
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nXCount; // 0x180
	// MPropertyFriendlyName "Y Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nYCount; // 0x268
	// MPropertyFriendlyName "Z Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nZCount; // 0x350
	// MPropertyFriendlyName "X Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nXSpacing; // 0x438
	// MPropertyFriendlyName "Y Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nYSpacing; // 0x520
	// MPropertyFriendlyName "Z Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nZSpacing; // 0x608
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x6f0
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x6f4
	// MPropertyFriendlyName "center around control point"
	// MDefaultString
	bool m_bCenter; // 0x6f5
	// MPropertyFriendlyName "hollow"
	// MDefaultString
	bool m_bHollow; // 0x6f6
};

// Aligment: 1
// Size: 480
class C_OP_RenderPoints : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1d0
};

// Aligment: 7
// Size: 448
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color1"
	// MDefaultString
	Color m_ColorMin; // 0x198
	// MPropertyFriendlyName "color2"
	// MDefaultString
	Color m_ColorMax; // 0x19c
	// MPropertyFriendlyName "tint clamp min"
	// MDefaultString
	Color m_TintMin; // 0x1a0
	// MPropertyFriendlyName "tint clamp max"
	// MDefaultString
	Color m_TintMax; // 0x1a4
	// MPropertyFriendlyName "light bias"
	// MDefaultString
	float m_flTintPerc; // 0x1a8
	// MPropertyFriendlyName "tint blend mode"
	// MDefaultString
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1ac
	// MPropertyFriendlyName "light amplification amount"
	// MDefaultString
	float m_flLightAmplification; // 0x1b0
};

// Aligment: 1
// Size: 6624
class C_OP_RenderFogSprites : public C_OP_RenderSprites, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x19d0
};

// Aligment: 1
// Size: 624
class C_OP_DecayClampCount : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Maximum Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nCount; // 0x180
};

// Aligment: 7
// Size: 512
class C_OP_RenderLights : public C_OP_RenderPoints, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	float m_flAnimationRate; // 0x1e0
	// MPropertyFriendlyName "animation type"
	// MDefaultString
	AnimationType_t m_nAnimationType; // 0x1e4
	// MPropertyFriendlyName "set animation value in FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x1e8
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	float m_flMinSize; // 0x1ec
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	float m_flMaxSize; // 0x1f0
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	float m_flStartFadeSize; // 0x1f4
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	float m_flEndFadeSize; // 0x1f8
};

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 448
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color fade min"
	// MDefaultString
	Color m_ColorFadeMin; // 0x180
	// MPropertyFriendlyName "color fade max"
	// MDefaultString
	Color m_ColorFadeMax; // 0x19c
	// MPropertyFriendlyName "fade start time"
	// MDefaultString
	float m_flFadeStartTime; // 0x1ac
	// MPropertyFriendlyName "fade end time"
	// MDefaultString
	float m_flFadeEndTime; // 0x1b0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b4
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInOut; // 0x1b8
};

// Aligment: 7
// Size: 656
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x180
	// MPropertyFriendlyName "attachment to follow"
	// MDefaultString
	char[128] m_AttachmentName; // 0x200
	// MPropertyFriendlyName "First control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x280
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x284
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x288
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	// MDefaultString
	bool m_bSkin; // 0x28c
	// MPropertyFriendlyName "follow attachment"
	// MDefaultString
	bool m_bAttachment; // 0x28d
};

// Aligment: 5
// Size: 496
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x180
	CPathParameters m_PathParams; // 0x190
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	// MDefaultString
	bool m_bUseRandomCPs; // 0x1d0
	// MPropertyFriendlyName "Offset from control point for path end"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x1d4
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x1e0
};

// Aligment: 4
// Size: 416
class C_OP_DistanceCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x180
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x184
	// MPropertyFriendlyName "cull distance"
	// MDefaultString
	float m_flDistance; // 0x190
	// MPropertyFriendlyName "cull inside instead of outside"
	// MDefaultString
	bool m_bCullInside; // 0x194
};

// Aligment: 8
// Size: 480
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x180
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_flMaxDistance0; // 0x184
	// MPropertyFriendlyName "maximum distance middle"
	// MDefaultString
	float m_flMaxDistanceMid; // 0x188
	// MPropertyFriendlyName "maximum distance end"
	// MDefaultString
	float m_flMaxDistance1; // 0x18c
	CPathParameters m_PathParameters; // 0x190
	// MPropertyFriendlyName "travel time"
	// MDefaultString
	float m_flTravelTime; // 0x1d0
	// MPropertyFriendlyName "travel time scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x1d4
	// MPropertyFriendlyName "manual time placement field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x1d8
};

// Aligment: 4
// Size: 416
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x180
	// MPropertyFriendlyName "hand"
	// MDefaultString
	int32_t m_nHand; // 0x184
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x188
	// MPropertyFriendlyName "use hand orientation"
	// MDefaultString
	bool m_bOrientToHand; // 0x194
};

// Aligment: 13
// Size: 560
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x180
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x184
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x188
	// MPropertyFriendlyName "output control point field"
	// MDefaultString
	int32_t m_nOutputCPField; // 0x18c
	// MPropertyFriendlyName "only set distance once"
	// MDefaultString
	bool m_bSetOnce; // 0x190
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x194
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x198
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x19c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x1a0
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x1a4
	// MPropertyFriendlyName "LOS Failure Scale"
	// MDefaultString
	float m_flLOSScale; // 0x1a8
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x1ac
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x1ad
};

// Aligment: 10
// Size: 880
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x184
	// MPropertyFriendlyName "field to write"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x188
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x18c
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x190
	// MPropertyFriendlyName "reverse order"
	// MDefaultString
	bool m_bReverse; // 0x191
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x194
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x198
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x280
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	// MDefaultString
	bool m_bSubSample; // 0x368
};

// Aligment: 3
// Size: 400
class C_OP_RemapVectortoCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x180
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184
	// MPropertyFriendlyName "particle number to read"
	// MDefaultString
	int32_t m_nParticleNumber; // 0x188
};

// Aligment: 3
// Size: 432
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a0
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	float m_flMinOutputValue; // 0x1a4
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	float m_flMaxOutputValue; // 0x1a8
};

// Aligment: 4
// Size: 896
class C_OP_SetFloat : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x26c
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CPerParticleFloatInput m_Lerp; // 0x270
};

// Aligment: 5
// Size: 528
class C_OP_ModelCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "use only bounding box"
	// MDefaultString
	bool m_bBoundBox; // 0x184
	// MPropertyFriendlyName "cull outside instead of inside"
	// MDefaultString
	bool m_bCullOutside; // 0x185
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x186
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x187
};

// Aligment: 3
// Size: 1472
class C_OP_LocalAccelerationForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "scale control point"
	// MDefaultString
	int32_t m_nScaleCP; // 0x184
	// MPropertyFriendlyName "local space acceleration"
	// MDefaultString
	CParticleCollectionVecInput m_vecAccel; // 0x188
};

// Aligment: 15
// Size: 88
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0
	uint32_t m_nModSpecificData; // 0x8
	// MDefaultString
	PetGroundType_t m_groundType; // 0xc
	CUtlString m_sequenceName; // 0x10
	int32_t m_nFireParticleOnSequenceFrame; // 0x18
	CUtlString m_hitboxSetName; // 0x20
	CUtlString m_materialGroupName; // 0x28
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30
	// MDefaultString
	float m_flPlaybackSpeed; // 0x48
	// MDefaultString
	float m_flParticleSimulationRate; // 0x4c
	bool m_bShouldDrawHitboxes; // 0x50
	bool m_bShouldDrawAttachments; // 0x51
	bool m_bShouldDrawAttachmentNames; // 0x52
	bool m_bShouldDrawControlPointAxes; // 0x53
	bool m_bAnimationNonLooping; // 0x54
};

// Aligment: 7
// Size: 416
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	int32_t m_nInputMin; // 0x184
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	int32_t m_nInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "count back from last particle"
	// MDefaultString
	bool m_bBackwards; // 0x194
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x198
};

// Aligment: 2
// Size: 416
class C_OP_RandomForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "min force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x180
	// MPropertyFriendlyName "max force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x18c
};

// Aligment: 7
// Size: 528
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer, CParticleFunction
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

// Aligment: 5
// Size: 416
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
};

// Aligment: 5
// Size: 432
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "component scale factor"
	// MDefaultString
	Vector m_vecScale; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x190
	// MPropertyFriendlyName "random offset min"
	// MDefaultString
	Vector m_vOffsetMin; // 0x194
	// MPropertyFriendlyName "random offset max"
	// MDefaultString
	Vector m_vOffsetMax; // 0x1a0
};

// Aligment: 2
// Size: 848
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flParentRadiusScale; // 0x180
	// MPropertyFriendlyName "particle radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusScale; // 0x268
};

// Aligment: 5
// Size: 448
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate"
	// MDefaultString
	float m_Rate; // 0x180
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x184
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x188
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0
	// MPropertyFriendlyName "ease out"
	// MDefaultString
	bool m_bEaseOut; // 0x1b4
};

// Aligment: 4
// Size: 400
class C_INIT_RandomSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence min"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x180
	// MPropertyFriendlyName "sequence max"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x184
	// MPropertyFriendlyName "shuffle"
	// MDefaultString
	bool m_bShuffle; // 0x188
	// MPropertyFriendlyName "linear"
	// MDefaultString
	bool m_bLinear; // 0x189
};

// Aligment: 6
// Size: 464
class C_OP_FadeOut : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "fade out time min"
	// MDefaultString
	float m_flFadeOutTimeMin; // 0x180
	// MPropertyFriendlyName "fade out time max"
	// MDefaultString
	float m_flFadeOutTimeMax; // 0x184
	// MPropertyFriendlyName "fade out time exponent"
	// MDefaultString
	float m_flFadeOutTimeExp; // 0x188
	// MPropertyFriendlyName "fade bias"
	// MDefaultString
	float m_flFadeBias; // 0x18c
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x1c0
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInAndOut; // 0x1c1
};

// Aligment: 13
// Size: 432
class C_OP_OscillateScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MDefaultString
	float m_RateMin; // 0x180
	// MPropertyFriendlyName "oscillation rate max"
	// MDefaultString
	float m_RateMax; // 0x184
	// MPropertyFriendlyName "oscillation frequency min"
	// MDefaultString
	float m_FrequencyMin; // 0x188
	// MPropertyFriendlyName "oscillation frequency max"
	// MDefaultString
	float m_FrequencyMax; // 0x18c
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x190
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x194
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x195
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x198
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x19c
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x1a0
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x1a4
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x1a8
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x1ac
};

// Aligment: 5
// Size: 1184
class C_OP_RenderBlobs : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "cube width"
	// MDefaultString
	CParticleCollectionFloatInput m_cubeWidth; // 0x1d0
	// MPropertyFriendlyName "cutoff radius"
	// MDefaultString
	CParticleCollectionFloatInput m_cutoffRadius; // 0x2b8
	// MPropertyFriendlyName "render radius"
	// MDefaultString
	CParticleCollectionFloatInput m_renderRadius; // 0x3a0
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x488
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x490
};

// Aligment: 0
// Size: 1072
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 22
// Size: 1744
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x184
	// MPropertyFriendlyName "collision mode"
	// MDefaultString
	ParticleCollisionMode_t m_nCollisionMode; // 0x190
	// MPropertyFriendlyName "minimum detail collision mode"
	// MDefaultString
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x194
	// MPropertyFriendlyName "amount of bounce"
	// MDefaultString
	CPerParticleFloatInput m_flBounceAmount; // 0x198
	// MPropertyFriendlyName "amount of slide"
	// MDefaultString
	CPerParticleFloatInput m_flSlideAmount; // 0x280
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusScale; // 0x368
	// MPropertyFriendlyName "Random Direction scale"
	// MDefaultString
	CPerParticleFloatInput m_flRandomDirScale; // 0x450
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MDefaultString
	float m_flCpMovementTolerance; // 0x538
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MDefaultString
	float m_flTraceTolerance; // 0x53c
	// MPropertyFriendlyName "minimum speed to kill on collision"
	// MDefaultString
	float m_flMinSpeed; // 0x540
	// MPropertyFriendlyName "Add Decay to Bounce"
	// MDefaultString
	bool m_bDecayBounce; // 0x544
	// MPropertyFriendlyName "kill particle on collision"
	// MDefaultString
	bool m_bKillonContact; // 0x545
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MDefaultString
	float m_flCollisionConfirmationSpeed; // 0x548
	// MPropertyFriendlyName "Set Normal"
	// MDefaultString
	bool m_bSetNormal; // 0x54c
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x550
	// MPropertyFriendlyName "Speed to stop when sticking"
	// MDefaultString
	CPerParticleFloatInput m_flStopSpeed; // 0x558
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x640
	// MPropertyFriendlyName "World Only"
	// MDefaultString
	bool m_bWorldOnly; // 0x644
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x648
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x64c
	// MPropertyFriendlyName "brush only"
	// MDefaultString
	bool m_bBrushOnly; // 0x6cc
};

// Aligment: 3
// Size: 720
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	// MDefaultString
	CPerParticleFloatInput m_flPostProcessStrength; // 0x1d0
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x2b8
	// MPropertyFriendlyName "Post Processing Priority Group"
	// MDefaultString
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x2c0
};

// Aligment: 4
// Size: 400
class C_INIT_RandomScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x180
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x184
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x188
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c
};

// Aligment: 11
// Size: 1008
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset"
	// MDefaultString
	CPerParticleFloatInput m_flOffset; // 0x180
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	CPerParticleFloatInput m_flMaxTraceLength; // 0x268
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x350
	// MPropertyFriendlyName "kill on no collision"
	// MDefaultString
	bool m_bKill; // 0x3d4
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x3d5
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x3d6
	// MPropertyFriendlyName "set Previous XYZ only"
	// MDefaultString
	bool m_bSetPXYZOnly; // 0x3d7
	// MPropertyFriendlyName "Trace along particle normal"
	// MDefaultString
	bool m_bTraceAlongNormal; // 0x3d8
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	// MDefaultString
	float m_flOffsetByRadiusFactor; // 0x3dc
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	// MDefaultString
	int32_t m_nPreserveOffsetCP; // 0x3e0
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x3e4
};

// Aligment: 33
// Size: 1728
class C_OP_ControlpointLight : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "initial color bias"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "light 1 control point"
	// MDefaultString
	int32_t m_nControlPoint1; // 0x634
	// MPropertyFriendlyName "light 2 control point"
	// MDefaultString
	int32_t m_nControlPoint2; // 0x638
	// MPropertyFriendlyName "light 3 control point"
	// MDefaultString
	int32_t m_nControlPoint3; // 0x63c
	// MPropertyFriendlyName "light 4 control point"
	// MDefaultString
	int32_t m_nControlPoint4; // 0x640
	// MPropertyFriendlyName "light 1 control point offset"
	// MDefaultString
	Vector m_vecCPOffset1; // 0x644
	// MPropertyFriendlyName "light 2 control point offset"
	// MDefaultString
	Vector m_vecCPOffset2; // 0x650
	// MPropertyFriendlyName "light 3 control point offset"
	// MDefaultString
	Vector m_vecCPOffset3; // 0x65c
	// MPropertyFriendlyName "light 4 control point offset"
	// MDefaultString
	Vector m_vecCPOffset4; // 0x668
	// MPropertyFriendlyName "light 1 50% distance"
	// MDefaultString
	float m_LightFiftyDist1; // 0x674
	// MPropertyFriendlyName "light 1 0% distance"
	// MDefaultString
	float m_LightZeroDist1; // 0x678
	// MPropertyFriendlyName "light 2 50% distance"
	// MDefaultString
	float m_LightFiftyDist2; // 0x67c
	// MPropertyFriendlyName "light 2 0% distance"
	// MDefaultString
	float m_LightZeroDist2; // 0x680
	// MPropertyFriendlyName "light 3 50% distance"
	// MDefaultString
	float m_LightFiftyDist3; // 0x684
	// MPropertyFriendlyName "light 3 0% distance"
	// MDefaultString
	float m_LightZeroDist3; // 0x688
	// MPropertyFriendlyName "light 4 50% distance"
	// MDefaultString
	float m_LightFiftyDist4; // 0x68c
	// MPropertyFriendlyName "light 4 0% distance"
	// MDefaultString
	float m_LightZeroDist4; // 0x690
	// MPropertyFriendlyName "light 1 color"
	// MDefaultString
	Color m_LightColor1; // 0x694
	// MPropertyFriendlyName "light 2 color"
	// MDefaultString
	Color m_LightColor2; // 0x698
	// MPropertyFriendlyName "light 3 color"
	// MDefaultString
	Color m_LightColor3; // 0x69c
	// MPropertyFriendlyName "light 4 color"
	// MDefaultString
	Color m_LightColor4; // 0x6a0
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType1; // 0x6a4
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType2; // 0x6a5
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType3; // 0x6a6
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType4; // 0x6a7
	// MPropertyFriendlyName "light 1 dynamic light"
	// MDefaultString
	bool m_bLightDynamic1; // 0x6a8
	// MPropertyFriendlyName "light 2 dynamic light"
	// MDefaultString
	bool m_bLightDynamic2; // 0x6a9
	// MPropertyFriendlyName "light 3 dynamic light"
	// MDefaultString
	bool m_bLightDynamic3; // 0x6aa
	// MPropertyFriendlyName "light 4 dynamic light"
	// MDefaultString
	bool m_bLightDynamic4; // 0x6ab
	// MPropertyFriendlyName "compute normals from control points"
	// MDefaultString
	bool m_bUseNormal; // 0x6ac
	// MPropertyFriendlyName "half-lambert normals"
	// MDefaultString
	bool m_bUseHLambert; // 0x6ad
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	// MDefaultString
	bool m_bClampLowerRange; // 0x6b2
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	// MDefaultString
	bool m_bClampUpperRange; // 0x6b3
};

// Aligment: 2
// Size: 624
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "Number of Children to Use"
	// MDefaultString
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x188
};

// Aligment: 5
// Size: 432
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecMin; // 0x180
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecMax; // 0x18c
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x198
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x19c
	// MPropertyFriendlyName "scale CP (.x= distance)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x1a0
};

// Aligment: 6
// Size: 416
class C_OP_UpdateLightSource : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color tint"
	// MDefaultString
	Color m_vColorTint; // 0x180
	// MPropertyFriendlyName "amount to multiply light brightness by"
	// MDefaultString
	float m_flBrightnessScale; // 0x184
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	// MDefaultString
	float m_flRadiusScale; // 0x188
	// MPropertyFriendlyName "minimum radius for created lights"
	// MDefaultString
	float m_flMinimumLightingRadius; // 0x18c
	// MPropertyFriendlyName "maximum radius for created lights"
	// MDefaultString
	float m_flMaximumLightingRadius; // 0x190
	// MPropertyFriendlyName "amount of damping of changes"
	// MDefaultString
	float m_flPositionDampingConstant; // 0x194
};

// Aligment: 2
// Size: 480
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	// MDefaultString
	float m_flRotateRateDegrees; // 0x1d0
	// MPropertyFriendlyName "forward angle"
	// MDefaultString
	float m_flForwardDegrees; // 0x1d4
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 58
// Size: 848
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MDefaultString
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8
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
	// MPropertySuppressField
	// MDefaultString
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178
	// MPropertyFriendlyName "initial particles"
	// MDefaultString
	int32_t m_nInitialParticles; // 0x17c
	// MPropertyFriendlyName "max particles"
	// MDefaultString
	int32_t m_nMaxParticles; // 0x180
	// MPropertyFriendlyName "bounding box min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1c0
	// MPropertyFriendlyName "bounding box max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x1cc
	// MPropertyFriendlyName "snapshot control point"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x1d8
	// MPropertyFriendlyName "snapshot"
	// MPropertyAttributeEditor "AssetBrowse( vsnap )"
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x1e0
	// MPropertyFriendlyName "target layer ID for rendering"
	// MDefaultString
	CUtlSymbolLarge m_pszTargetLayerID; // 0x1e8
	// MPropertyFriendlyName "reference replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x208
	// MPropertyFriendlyName "cull replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x210
	// MPropertyFriendlyName "cull radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullRadius; // 0x218
	// MPropertyFriendlyName "cull cost"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullFillCost; // 0x21c
	// MPropertyFriendlyName "cull control point"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCullControlPoint; // 0x220
	// MPropertyFriendlyName "fallback replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x230
	// MPropertyFriendlyName "fallback max count"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nFallbackMaxCount; // 0x238
	// MPropertyFriendlyName "low violence definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x240
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	// MDefaultString
	Color m_ConstantColor; // 0x248
	// MPropertyFriendlyName "normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x24c
	// MPropertyFriendlyName "radius"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x258
	// MPropertyFriendlyName "rotation"
	// MDefaultString
	float m_flConstantRotation; // 0x25c
	// MPropertyFriendlyName "rotation speed"
	// MDefaultString
	float m_flConstantRotationSpeed; // 0x260
	// MPropertyFriendlyName "lifetime"
	// MDefaultString
	float m_flConstantLifespan; // 0x264
	// MPropertyFriendlyName "sequence number"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x268
	// MPropertyFriendlyName "sequence number 1"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x26c
	// MPropertyFriendlyName "group id"
	// MDefaultString
	int32_t m_nGroupID; // 0x270
	// MPropertyFriendlyName "maximum time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumTimeStep; // 0x274
	// MPropertyFriendlyName "maximum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumSimTime; // 0x278
	// MPropertyFriendlyName "minimum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumSimTime; // 0x27c
	// MPropertyFriendlyName "minimum simulation time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumTimeStep; // 0x280
	// MPropertyFriendlyName "minimum rendered frames"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinimumFrames; // 0x284
	// MPropertyFriendlyName "minimum CPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinCPULevel; // 0x288
	// MPropertyFriendlyName "minimum GPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinGPULevel; // 0x28c
	// MPropertyFriendlyName "view model effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bViewModelEffect; // 0x290
	// MPropertyFriendlyName "screen space effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bScreenSpaceEffect; // 0x291
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x2a8
	// MPropertyFriendlyName "time to sleep when not drawn"
	// MDefaultString
	float m_flNoDrawTimeToGoToSleep; // 0x2c0
	// MPropertyFriendlyName "maximum draw distance"
	// MDefaultString
	float m_flMaxDrawDistance; // 0x2c4
	// MPropertyFriendlyName "start fade distance"
	// MDefaultString
	float m_flStartFadeDistance; // 0x2c8
	// MPropertyFriendlyName "maximum creation distance"
	// MDefaultString
	float m_flMaxCreationDistance; // 0x2cc
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nSkipRenderControlPoint; // 0x2d0
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAllowRenderControlPoint; // 0x2d4
	// MPropertyFriendlyName "minimum free particles to aggregate"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAggregationMinAvailableParticles; // 0x2d8
	// MPropertyFriendlyName "aggregation radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAggregateRadius; // 0x2dc
	// MPropertyFriendlyName "freeze simulation after time"
	// MDefaultString
	// MParticleAdvancedField
	float m_flStopSimulationAfterTime; // 0x2e0
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MDefaultString
	bool m_bShouldSort; // 0x31c
	// MPropertyFriendlyName "batch particle systems"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldBatch; // 0x31d
	// MPropertyFriendlyName "depth sort bias"
	// MDefaultString
	float m_flDepthSortBias; // 0x320
	// MPropertyFriendlyName "infinite bounds - don't cull"
	// MDefaultString
	bool m_bInfiniteBounds; // 0x324
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x326
};

// Aligment: 3
// Size: 464
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MParticleAdvancedField
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x180
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MDefaultString
	// MPropertyGroupName "Rendering filter"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x1c4
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MDefaultString
	// MPropertyGroupName "Rendering filter"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x1c5
};

// Aligment: 11
// Size: 432
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x19c
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x1a0
	// MPropertyFriendlyName "interpolation scale"
	// MDefaultString
	float m_flInterpRate; // 0x1a4
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a8
};

// Aligment: 5
// Size: 416
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x180
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0x181
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x184
	// MPropertyFriendlyName "control point location"
	// MDefaultString
	Vector m_vecCP1Pos; // 0x188
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x194
};

// Aligment: 2
// Size: 400
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate normals"
	// MDefaultString
	bool m_bTransformNormals; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
};

// Aligment: 0
// Size: 432
class C_INIT_RandomYaw : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 400
class C_OP_SetCPtoVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
};

// Aligment: 0
// Size: 384
class CParticleFunctionOperator : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 400
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x184
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x188
};

// Aligment: 8
// Size: 896
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x180
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0x181
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x184
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x188
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	// MDefaultString
	CParticleCollectionFloatInput m_flReRandomRate; // 0x190
	// MPropertyFriendlyName "control point min"
	// MDefaultString
	Vector m_vecCPMinPos; // 0x278
	// MPropertyFriendlyName "control point max"
	// MDefaultString
	Vector m_vecCPMaxPos; // 0x284
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_flInterpolation; // 0x290
};

// Aligment: 25
// Size: 184
class CNewParticleEffect : public IParticleEffect
{
public:
	CNewParticleEffect* m_pNext; // 0x10
	CNewParticleEffect* m_pPrev; // 0x18
	IParticleCollection* m_pParticles; // 0x20
	char* m_pDebugName; // 0x28
	bitfield:1 m_bDontRemove; // 0x0
	bitfield:1 m_bRemove; // 0x0
	bitfield:1 m_bNeedsBBoxUpdate; // 0x0
	bitfield:1 m_bIsFirstFrame; // 0x0
	bitfield:1 m_bAutoUpdateBBox; // 0x0
	bitfield:1 m_bAllocated; // 0x0
	bitfield:1 m_bSimulate; // 0x0
	bitfield:1 m_bShouldPerformCullCheck; // 0x0
	bitfield:1 m_bForceNoDraw; // 0x0
	bitfield:1 m_bDisableAggregation; // 0x0
	bitfield:1 m_bShouldSimulateDuringGamePaused; // 0x0
	bitfield:1 m_bShouldCheckFoW; // 0x0
	Vector m_vSortOrigin; // 0x40
	float m_flScale; // 0x4c
	PARTICLE_EHANDLE__* m_hOwner; // 0x50
	CParticleProperty* m_pOwningParticleProperty; // 0x58
	Vector m_LastMin; // 0x70
	Vector m_LastMax; // 0x7c
	CSplitScreenSlot m_nSplitScreenUser; // 0x88
	Vector m_vecAggregationCenter; // 0x8c
	int32_t m_RefCount; // 0xb0
};

// Aligment: 1
// Size: 624
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "freeze time"
	// MDefaultString
	CParticleCollectionFloatInput m_flFreezeTime; // 0x180
};

// Aligment: 3
// Size: 416
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x180
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x184
	// MPropertyFriendlyName "use eye orientation"
	// MDefaultString
	bool m_bOrientToEyes; // 0x190
};

// Aligment: 9
// Size: 480
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x188
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1a0
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1b8
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x1d0
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0x1d1
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0x1dc
};

// Aligment: 8
// Size: 448
class C_OP_TurbulenceForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "noise scale 0"
	// MDefaultString
	float m_flNoiseCoordScale0; // 0x180
	// MPropertyFriendlyName "noise scale 1"
	// MDefaultString
	float m_flNoiseCoordScale1; // 0x184
	// MPropertyFriendlyName "noise scale 2"
	// MDefaultString
	float m_flNoiseCoordScale2; // 0x188
	// MPropertyFriendlyName "noise scale 3"
	// MDefaultString
	float m_flNoiseCoordScale3; // 0x18c
	// MPropertyFriendlyName "noise amount 0"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x190
	// MPropertyFriendlyName "noise amount 1"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x19c
	// MPropertyFriendlyName "noise amount 2"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x1a8
	// MPropertyFriendlyName "noise amount 3"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x1b4
};

// Aligment: 3
// Size: 400
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "minimum"
	// MDefaultString
	float m_flOutputMin; // 0x184
	// MPropertyFriendlyName "maximum"
	// MDefaultString
	float m_flOutputMax; // 0x188
};

// Aligment: 6
// Size: 464
class C_OP_InterpolateRadius : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x180
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x184
	// MPropertyFriendlyName "radius start scale"
	// MDefaultString
	float m_flStartScale; // 0x188
	// MPropertyFriendlyName "radius end scale"
	// MDefaultString
	float m_flEndScale; // 0x18c
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInAndOut; // 0x190
	// MPropertyFriendlyName "scale bias"
	// MDefaultString
	float m_flBias; // 0x194
};

// Aligment: 8
// Size: 560
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nCPOut; // 0x180
	// MPropertyFriendlyName "control point to trace from"
	// MDefaultString
	int32_t m_nCPIn; // 0x184
	// MPropertyFriendlyName "trace update rate"
	// MDefaultString
	float m_flUpdateRate; // 0x188
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flTraceLength; // 0x18c
	// MPropertyFriendlyName "offset end point amount"
	// MDefaultString
	float m_flOffset; // 0x190
	// MPropertyFriendlyName "trace direction override"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x194
	// MPropertyFriendlyName "trace collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x1a0
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	// MDefaultString
	bool m_bSetToEndpoint; // 0x220
};

// Aligment: 4
// Size: 720
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "haptic hand"
	// MDefaultString
	ParticleVRHandChoiceList_t m_nHand; // 0x1d0
	// MPropertyFriendlyName "hand control point number"
	// MDefaultString
	int32_t m_nOutputHandCP; // 0x1d4
	// MPropertyFriendlyName "cp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1d8
	// MPropertyFriendlyName "amplitude"
	// MDefaultString
	CPerParticleFloatInput m_flAmplitude; // 0x1e0
};

// Aligment: 13
// Size: 448
class C_OP_PositionLock : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "start fadeout min"
	// MDefaultString
	float m_flStartTime_min; // 0x184
	// MPropertyFriendlyName "start fadeout max"
	// MDefaultString
	float m_flStartTime_max; // 0x188
	// MPropertyFriendlyName "start fadeout exponent"
	// MDefaultString
	float m_flStartTime_exp; // 0x18c
	// MPropertyFriendlyName "end fadeout min"
	// MDefaultString
	float m_flEndTime_min; // 0x190
	// MPropertyFriendlyName "end fadeout max"
	// MDefaultString
	float m_flEndTime_max; // 0x194
	// MPropertyFriendlyName "end fadeout exponent"
	// MDefaultString
	float m_flEndTime_exp; // 0x198
	// MPropertyFriendlyName "distance fade range"
	// MDefaultString
	float m_flRange; // 0x19c
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x1a0
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x1a4
	// MPropertyFriendlyName "lock rotation"
	// MDefaultString
	bool m_bLockRot; // 0x1a8
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1ac
	// MPropertyFriendlyName "output field prev"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x1b0
};

// Aligment: 14
// Size: 464
class C_OP_OscillateVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x180
	// MPropertyFriendlyName "oscillation rate max"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x18c
	// MPropertyFriendlyName "oscillation frequency min"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x198
	// MPropertyFriendlyName "oscillation frequency max"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x1a4
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1b0
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x1b4
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x1b5
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x1b6
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x1b8
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x1bc
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x1c0
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x1c4
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x1c8
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x1cc
};

// Aligment: 9
// Size: 1344
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x188
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x18c
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x190
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	CParticleCollectionFloatInput m_flIncrement; // 0x198
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MDefaultString
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x280
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x368
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x450
};

// Aligment: 8
// Size: 656
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x180
	// MPropertyFriendlyName "randomize"
	// MDefaultString
	bool m_bRandomize; // 0x182
	// MPropertyFriendlyName "only set orientation once"
	// MDefaultString
	bool m_bSetOnce; // 0x183
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x184
	// MPropertyFriendlyName "control point to offset orientation from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x188
	// MPropertyFriendlyName "pitch yaw roll"
	// MDefaultString
	QAngle m_vecRotation; // 0x18c
	// MPropertyFriendlyName "pitch yaw roll max"
	// MDefaultString
	QAngle m_vecRotationB; // 0x198
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_flInterpolation; // 0x1a8
};

// Aligment: 5
// Size: 416
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x180
	// MPropertyFriendlyName "comparison control point number"
	// MDefaultString
	int32_t m_nControlPointCompare; // 0x184
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nControlPointLocal; // 0x188
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x18c
	// MPropertyFriendlyName "direction only"
	// MDefaultString
	bool m_bDirectionOnly; // 0x190
};

// Aligment: 7
// Size: 6320
class CBaseTrailRenderer : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "orientation type"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x16c0
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x16c4
	// MPropertyFriendlyName "minimum visual screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x16c8
	// MPropertyFriendlyName "maximum visual screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x16cc
	// MPropertyFriendlyName "start fade screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x16d0
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x17b8
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	// MPropertyGroupName "Trail UV Controls"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x18a0
};

// Aligment: 10
// Size: 448
class C_OP_PercentageBetweenCPsVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x184
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x198
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x1a4
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x1a8
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1ac
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1b0
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x1b1
};

// Aligment: 7
// Size: 560
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "bias distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x180
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x18c
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x190
	// MPropertyFriendlyName "trace recycle tolerance"
	// MDefaultString
	float m_flTraceTolerance; // 0x194
	// MPropertyFriendlyName "maximum points to cache"
	// MDefaultString
	int32_t m_nMaxPlanes; // 0x198
	// MPropertyFriendlyName "trace collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x1a0
	// MPropertyFriendlyName "collide with water"
	// MDefaultString
	bool m_bIncludeWater; // 0x224
};

// Aligment: 2
// Size: 400
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum length"
	// MDefaultString
	float m_flMinDistance; // 0x180
	// MPropertyFriendlyName "maximum length"
	// MDefaultString
	float m_flMaxDistance; // 0x184
};

// Aligment: 5
// Size: 864
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "num to emit"
	// MDefaultString
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x180
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	CParticleCollectionFloatInput m_flStartTime; // 0x268
	// MPropertyFriendlyName "emission scale from killed parent particles"
	// MDefaultString
	float m_flInitFromKilledParentParticles; // 0x350
	// MPropertyFriendlyName "maximum emission per frame"
	// MDefaultString
	int32_t m_nMaxEmittedPerFrame; // 0x354
	// MPropertyFriendlyName "control point with snapshot data"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x358
};

// Aligment: 18
// Size: 1072
class CParticleVecInput
{
public:
	// MDefaultString
	ParticleVecType_t m_nType; // 0x0
	// MDefaultString
	Vector m_vLiteralValue; // 0x4
	// MDefaultString
	Color m_LiteralColor; // 0x10
	// MDefaultString
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14
	// MDefaultString
	Vector m_vVectorAttributeScale; // 0x18
	// MDefaultString
	int32_t m_nControlPoint; // 0x24
	// MDefaultString
	Vector m_vCPValueScale; // 0x28
	// MDefaultString
	Vector m_vCPRelativePosition; // 0x34
	// MDefaultString
	Vector m_vCPRelativeDir; // 0x40
	CParticleFloatInput m_FloatComponentX; // 0x50
	CParticleFloatInput m_FloatComponentY; // 0x138
	CParticleFloatInput m_FloatComponentZ; // 0x220
	CParticleFloatInput m_FloatInterp; // 0x308
	// MDefaultString
	float m_flInterpInput0; // 0x3f0
	// MDefaultString
	float m_flInterpInput1; // 0x3f4
	// MDefaultString
	Vector m_vInterpOutput0; // 0x3f8
	// MDefaultString
	Vector m_vInterpOutput1; // 0x404
	CColorGradient m_Gradient; // 0x410
};

// Aligment: 0
// Size: 416
class C_OP_Spin : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 10
// Size: 432
class C_INIT_CreationNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x184
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x185
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x188
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x18c
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x190
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x194
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x198
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x19c
	// MPropertyFriendlyName "world time noise coordinate scale"
	// MDefaultString
	float m_flWorldTimeScale; // 0x1a8
};

// Aligment: 8
// Size: 528
class C_OP_RenderAsModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d0
	// MPropertyFriendlyName "scale factor for radius"
	// MDefaultString
	float m_flModelScale; // 0x1ec
	// MPropertyFriendlyName "scale model to match particle size"
	// MDefaultString
	bool m_bFitToModelSize; // 0x1f0
	// MPropertyFriendlyName "non-uniform scaling"
	// MDefaultString
	bool m_bNonUniformScaling; // 0x1f1
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x1f4
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x1f8
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x1fc
	// MPropertyFriendlyName "model size cull bloat"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x200
};

// Aligment: 3
// Size: 448
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a0
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	Vector m_vMinOutputValue; // 0x1a4
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	Vector m_vMaxOutputValue; // 0x1b0
};

// Aligment: 5
// Size: 416
class C_INIT_NormalOffset : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x180
	// MPropertyFriendlyName "offset max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x18c
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x198
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x19c
	// MPropertyFriendlyName "normalize output 0/1"
	// MDefaultString
	bool m_bNormalize; // 0x19d
};

// Aligment: 0
// Size: 384
class C_OP_SpinUpdate : public CSpinUpdateBase, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 5
// Size: 416
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	// MDefaultString
	int32_t m_nCPIn; // 0x180
	// MPropertyFriendlyName "Source Control Point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x184
	// MPropertyFriendlyName "Set control point number"
	// MDefaultString
	int32_t m_nCPOut; // 0x190
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x194
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	// MDefaultString
	int32_t m_nCPSSPosOut; // 0x198
};

// Aligment: 3
// Size: 416
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "local offset min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x180
	// MPropertyFriendlyName "local offset max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x18c
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bUseNormal; // 0x199
};

// Aligment: 6
// Size: 416
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
};

// Aligment: 8
// Size: 64
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	// MDefaultString
	int32_t m_nStartControlPointNumber; // 0x0
	// MPropertyFriendlyName "end control point number"
	// MDefaultString
	int32_t m_nEndControlPointNumber; // 0x4
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	// MDefaultString
	int32_t m_nBulgeControl; // 0x8
	// MPropertyFriendlyName "random bulge"
	// MDefaultString
	float m_flBulge; // 0xc
	// MPropertyFriendlyName "mid point position"
	// MDefaultString
	float m_flMidPoint; // 0x10
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20
	// MPropertyFriendlyName "Offset from control point for path end"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c
};

// Aligment: 2
// Size: 624
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
};

// Aligment: 2
// Size: 400
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "play when emission ends"
	// MDefaultString
	bool m_bFireOnEmissionEnd; // 0x180
	// MPropertyFriendlyName "wait for children to finish"
	// MDefaultString
	bool m_bIncludeChildren; // 0x181
};

// Aligment: 4
// Size: 416
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flDistance; // 0x184
	// MPropertyFriendlyName "component scale"
	// MDefaultString
	Vector m_vecScale; // 0x188
	// MPropertyFriendlyName "distance squared output attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x194
};

// Aligment: 4
// Size: 400
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x188
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x18c
};

// Aligment: 4
// Size: 400
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x180
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x184
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x18c
};

// Aligment: 0
// Size: 384
class CParticleFunctionForce : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 416
class C_INIT_RemapInitialDirectionToCPToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x188
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x18c
	// MPropertyFriendlyName "offset axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x190
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x19c
};

// Aligment: 5
// Size: 864
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0x180
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x184
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x188
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput1; // 0x190
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput2; // 0x278
};

// Aligment: 10
// Size: 448
class C_INIT_PositionWarp : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "warp min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x180
	// MPropertyFriendlyName "warp max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x18c
	// MPropertyFriendlyName "warp scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x198
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x19c
	// MPropertyFriendlyName "radius scale component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0x1a0
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	// MDefaultString
	float m_flWarpTime; // 0x1a4
	// MPropertyFriendlyName "warp transition start time"
	// MDefaultString
	float m_flWarpStartTime; // 0x1a8
	// MPropertyFriendlyName "previous position sacale"
	// MDefaultString
	float m_flPrevPosScale; // 0x1ac
	// MPropertyFriendlyName "reverse warp (0/1)"
	// MDefaultString
	bool m_bInvertWarp; // 0x1b0
	// MPropertyFriendlyName "use particle count instead of time"
	// MDefaultString
	bool m_bUseCount; // 0x1b1
};

// Aligment: 1
// Size: 400
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x180
};

// Aligment: 10
// Size: 432
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x184
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x188
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x18c
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x190
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x194
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x198
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x19c
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a0
	// MPropertyFriendlyName "per particle"
	// MDefaultString
	bool m_bPerParticle; // 0x1a4
};

// Aligment: 8
// Size: 432
class C_OP_RemapCPVisibilityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x184
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "CP visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "CP visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	Vector m_vecOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	Vector m_vecOutputMax; // 0x1a0
	// MPropertyFriendlyName "visibility radius"
	// MDefaultString
	float m_flRadius; // 0x1ac
};

// Aligment: 12
// Size: 1472
class C_OP_DistanceBetweenCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x184
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x188
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMin; // 0x190
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMax; // 0x278
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMin; // 0x360
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMax; // 0x448
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x530
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x534
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x538
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x5b8
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x5bc
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2544
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	VectorExpressionType_t m_nExpression; // 0x180
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x184
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x188
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x5b8
};

// Aligment: 3
// Size: 20
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_controlPointNameString; // 0x0
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffsetFromControlPoint; // 0x4
	// MPropertyFriendlyName "Use local space offset"
	// MDefaultString
	bool m_bOffsetInLocalSpace; // 0x10
};

// Aligment: 15
// Size: 1656
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flFinalTextureScaleU; // 0x0
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flFinalTextureScaleV; // 0xe8
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	CParticleCollectionFloatInput m_flFinalTextureOffsetU; // 0x1d0
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	CParticleCollectionFloatInput m_flFinalTextureOffsetV; // 0x2b8
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flFinalTextureUVRotation; // 0x3a0
	// MPropertyFriendlyName "Infinite Zoom Scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flZoomScale; // 0x488
	// MPropertyFriendlyName "Distortion Amount"
	// MDefaultString
	CParticleCollectionFloatInput m_flDistortion; // 0x570
	// MPropertyFriendlyName "Randomize Initial Offset"
	// MDefaultString
	bool m_bRandomizeOffsets; // 0x658
	// MPropertyFriendlyName "Clamp UVs"
	// MDefaultString
	bool m_bClampUVs; // 0x659
	// MPropertyFriendlyName "per-particle scalar for scale"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x65c
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x660
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x664
	// MPropertyFriendlyName "per-particle scalar for rotation"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x668
	// MPropertyFriendlyName "per-particle scalar for zoom"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x66c
	// MPropertyFriendlyName "per-particle scalar for distortion"
	// MDefaultString
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x670
};

// Aligment: 4
// Size: 400
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x180
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x184
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x188
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c
};

// Aligment: 3
// Size: 400
class C_INIT_RandomRadius : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "radius min"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x180
	// MPropertyFriendlyName "radius max"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x184
	// MPropertyFriendlyName "radius random exponent"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x188
};

// Aligment: 5
// Size: 416
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0x184
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0x188
	// MPropertyFriendlyName "local space scale"
	// MDefaultString
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x18c
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDelta; // 0x199
};

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
class CPiecewiseCurveSchemaWrapper
{
public:
// <no members described>
};

// Aligment: 3
// Size: 400
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MDefaultString
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x180
	// MPropertyFriendlyName "lifetime max"
	// MDefaultString
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x184
	// MPropertyFriendlyName "lifetime random exponent"
	// MDefaultString
	float m_fLifetimeRandExponent; // 0x188
};

// Aligment: 7
// Size: 896
class C_OP_AttractToControlPoint : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "component scale"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x180
	// MPropertyFriendlyName "amount of force (or Max Force)"
	// MDefaultString
	CPerParticleFloatInput m_fForceAmount; // 0x190
	// MPropertyFriendlyName "falloff power"
	// MDefaultString
	float m_fFalloffPower; // 0x278
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x27c
	// MPropertyFriendlyName "scale in local space"
	// MDefaultString
	bool m_bScaleLocal; // 0x280
	// MPropertyFriendlyName "Min Pullforce"
	// MDefaultString
	CPerParticleFloatInput m_fForceAmountMin; // 0x288
	// MPropertyFriendlyName "Apply Min Pullforce"
	// MDefaultString
	bool m_bApplyMinForce; // 0x370
};

// Aligment: 14
// Size: 432
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "scale size multiplier from CP"
	// MDefaultString
	int32_t m_nScaleCP; // 0x184
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x188
	// MPropertyFriendlyName "center core radius"
	// MDefaultString
	float m_fRadCentCore; // 0x18c
	// MPropertyFriendlyName "radius multiplier"
	// MDefaultString
	float m_fRadPerPoint; // 0x190
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	// MDefaultString
	float m_fRadPerPointTo; // 0x194
	// MPropertyFriendlyName "golden angle (is 137.508)"
	// MDefaultString
	float m_fpointAngle; // 0x198
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	// MDefaultString
	float m_fsizeOverall; // 0x19c
	// MPropertyFriendlyName "radius bias"
	// MDefaultString
	float m_fRadBias; // 0x1a0
	// MPropertyFriendlyName "radius min "
	// MDefaultString
	float m_fMinRad; // 0x1a4
	// MPropertyFriendlyName "Distribution Bias"
	// MPropertyFriendlyName "distribution bias"
	// MDefaultString
	float m_fDistBias; // 0x1a8
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bUseLocalCoords; // 0x1ac
	// MPropertyFriendlyName "use continuous emission"
	// MDefaultString
	bool m_bUseWithContEmit; // 0x1ad
	// MPropertyFriendlyName "scale radius from initial value"
	// MDefaultString
	bool m_bUseOrigRadius; // 0x1ae
};

// Aligment: 4
// Size: 416
class C_OP_BoxConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "min coords"
	// MDefaultString
	Vector m_vecMin; // 0x180
	// MPropertyFriendlyName "max coords"
	// MDefaultString
	Vector m_vecMax; // 0x18c
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x198
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x19c
};

// Aligment: 5
// Size: 416
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nChildControlPoint; // 0x184
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x188
	// MPropertyFriendlyName "first parent control point to set from"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x18c
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x190
};

// Aligment: 8
// Size: 416
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x184
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x188
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nParticleIncrement; // 0x18c
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x190
	// MPropertyFriendlyName "set number of children based on particle count"
	// MDefaultString
	bool m_bNumBasedOnParticleCount; // 0x194
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x198
	// MPropertyFriendlyName "control point field for scalars"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x19c
};

// Aligment: 4
// Size: 416
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "output offset minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x188
	// MPropertyFriendlyName "output offset maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x194
};

// Aligment: 3
// Size: 400
class C_OP_GlobalLight : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "initial color bias"
	// MDefaultString
	float m_flScale; // 0x180
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	// MDefaultString
	bool m_bClampLowerRange; // 0x184
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	// MDefaultString
	bool m_bClampUpperRange; // 0x185
};

// Aligment: 16
// Size: 384
class CParticleFunction
{
public:
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x8
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator end fadein"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0xc
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator start fadeout"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x10
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator end fadeout"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x14
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator fade oscillate"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x18
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x1c
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset min"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x20
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset max"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x24
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset seed"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x28
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale seed"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x2c
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale min"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x30
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale max"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x34
	// MPropertySuppressField
	// MDefaultString
	bool m_bDisableOperator; // 0x39
	// MPropertyFriendlyName "operator end cap state"
	// MDefaultString
	// MPropertySortPriority "-100"
	ParticleEndcapMode_t m_nOpEndCapState; // 0x3c
	// MPropertyGroupName "Strength Modifiers"
	// MPropertyFriendlyName "operator strength"
	// MDefaultString
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CParticleCollectionFloatInput m_flOpStrength; // 0x40
	// MPropertyFriendlyName "operator help and notes"
	// MDefaultString
	// MParticleHelpField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x128
};

// Aligment: 0
// Size: 464
class C_OP_Callback : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 528
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "field to init"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x180
};

// Aligment: 6
// Size: 432
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x180
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x188
	// MPropertyFriendlyName "shuffle"
	// MDefaultString
	bool m_bShuffle; // 0x1a0
	// MPropertyFriendlyName "linear"
	// MDefaultString
	bool m_bLinear; // 0x1a1
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x1a2
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a4
};

// Aligment: 3
// Size: 416
class C_OP_BasicMovement : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "gravity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x180
	// MPropertyFriendlyName "drag"
	// MDefaultString
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x18c
	// MPropertyFriendlyName "max constraint passes"
	// MDefaultString
	int32_t m_nMaxConstraintPasses; // 0x190
};

// Aligment: 2
// Size: 656
class C_OP_QuantizeFloat : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x268
};

// Aligment: 11
// Size: 432
class C_INIT_RemapScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x198
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x19c
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1a0
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x1a4
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1a8
};

// Aligment: 7
// Size: 1552
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum speed"
	// MDefaultString
	CPerParticleFloatInput m_flSpeedMin; // 0x180
	// MPropertyFriendlyName "maximum speed"
	// MDefaultString
	CPerParticleFloatInput m_flSpeedMax; // 0x268
	// MPropertyFriendlyName "end spread"
	// MDefaultString
	CPerParticleFloatInput m_flEndSpread; // 0x350
	// MPropertyFriendlyName "start offset"
	// MDefaultString
	CPerParticleFloatInput m_flStartOffset; // 0x438
	// MPropertyFriendlyName "end offset"
	// MDefaultString
	CPerParticleFloatInput m_flEndOffset; // 0x520
	// MPropertyFriendlyName "end control point"
	// MDefaultString
	int32_t m_nEndControlPointNumber; // 0x608
	// MPropertyFriendlyName "bias lifetime by trail length"
	// MDefaultString
	bool m_bTrailBias; // 0x60c
};

// Aligment: 1
// Size: 400
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "frames per second"
	// MDefaultString
	float m_flFramerate; // 0x180
};

// Aligment: 6
// Size: 432
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x180
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	Vector m_Frequency; // 0x18c
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x198
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x19c
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x1a0
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x1a4
};

// Aligment: 6
// Size: 1104
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "emission duration"
	// MDefaultString
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x180
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	CParticleCollectionFloatInput m_flStartTime; // 0x268
	// MPropertyFriendlyName "emission rate"
	// MDefaultString
	CParticleCollectionFloatInput m_flEmitRate; // 0x350
	// MPropertyFriendlyName "scale emission to used control points"
	// MDefaultString
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x438
	// MPropertyFriendlyName "scale emission by parent particle count"
	// MDefaultString
	float m_flScalePerParentParticle; // 0x43c
	// MPropertyFriendlyName "emit particles for killed parent particles"
	// MDefaultString
	bool m_bInitFromKilledParentParticles; // 0x440
};

// Aligment: 5
// Size: 416
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point 0"
	// MDefaultString
	int32_t m_nCP0; // 0x180
	// MPropertyFriendlyName "control point 1"
	// MDefaultString
	int32_t m_nCP1; // 0x184
	// MPropertyFriendlyName "min distance value"
	// MDefaultString
	float m_flMinInputValue; // 0x188
	// MPropertyFriendlyName "max distance value"
	// MDefaultString
	float m_flMaxInputValue; // 0x18c
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	// MDefaultString
	bool m_bInfiniteLine; // 0x190
};

// Aligment: 1
// Size: 400
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "decay time"
	// MDefaultString
	float m_flDecayTime; // 0x180
};

// Aligment: 6
// Size: 464
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x180
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x184
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x188
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x189
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x18a
	CPathParameters m_PathParams; // 0x190
};

// Aligment: 1
// Size: 624
class C_OP_DecayOffscreen : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	// MDefaultString
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x180
};

// Aligment: 8
// Size: 416
class C_OP_RemapCPVisibilityToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x180
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x184
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "CP visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "CP visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "visibility radius"
	// MDefaultString
	float m_flRadius; // 0x19c
};

// Aligment: 6
// Size: 416
class C_OP_RemapScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x18c
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x190
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x194
};

// Aligment: 3
// Size: 400
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "length min"
	// MDefaultString
	float m_flMinLength; // 0x180
	// MPropertyFriendlyName "length max"
	// MDefaultString
	float m_flMaxLength; // 0x184
	// MPropertyFriendlyName "length random exponent"
	// MDefaultString
	float m_flLengthRandExponent; // 0x188
};

// Aligment: 11
// Size: 2256
class C_INIT_RingWave : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "even distribution count"
	// MDefaultString
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x188
	// MPropertyFriendlyName "initial radius"
	// MDefaultString
	CPerParticleFloatInput m_flInitialRadius; // 0x270
	// MPropertyFriendlyName "thickness"
	// MDefaultString
	CPerParticleFloatInput m_flThickness; // 0x358
	// MPropertyFriendlyName "min initial speed"
	// MDefaultString
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x440
	// MPropertyFriendlyName "max initial speed"
	// MDefaultString
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x528
	// MPropertyFriendlyName "roll"
	// MDefaultString
	CPerParticleFloatInput m_flRoll; // 0x610
	// MPropertyFriendlyName "pitch"
	// MDefaultString
	CPerParticleFloatInput m_flPitch; // 0x6f8
	// MPropertyFriendlyName "yaw"
	// MDefaultString
	CPerParticleFloatInput m_flYaw; // 0x7e0
	// MPropertyFriendlyName "even distribution"
	// MDefaultString
	bool m_bEvenDistribution; // 0x8c8
	// MPropertyFriendlyName "XY velocity only"
	// MDefaultString
	bool m_bXYVelocityOnly; // 0x8c9
};

// Aligment: 6
// Size: 1600
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x184
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x188
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char[128] m_HitboxSetName; // 0x5b8
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x638
	// MPropertyFriendlyName "get closest point on closest hitbox"
	// MDefaultString
	bool m_bUseClosestPointOnHitbox; // 0x639
};

// Aligment: 3
// Size: 400
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x184
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x188
};

// Aligment: 4
// Size: 480
class C_OP_RenderTonemapController : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	// MDefaultString
	float m_flTonemapLevel; // 0x1d0
	// MPropertyFriendlyName "tonemap weight scale"
	// MDefaultString
	float m_flTonemapWeight; // 0x1d4
	// MPropertyFriendlyName "tonemap level"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x1d8
	// MPropertyFriendlyName "tonemap weight"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x1dc
};

// Aligment: 4
// Size: 1088
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x188
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterSize; // 0x270
	// MPropertyFriendlyName "Cluster Cooldown Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x358
};

// Aligment: 2
// Size: 400
class C_OP_FadeInSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	// MDefaultString
	float m_flFadeInTime; // 0x180
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
};

// Aligment: 2
// Size: 400
class C_OP_NormalizeVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x184
};

// Aligment: 4
// Size: 416
class C_INIT_RandomAlpha : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "alpha min"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x184
	// MPropertyFriendlyName "alpha max"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x188
	// MPropertyFriendlyName "alpha random exponent"
	// MDefaultString
	float m_flAlphaRandExponent; // 0x194
};

// Aligment: 5
// Size: 624
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force scale"
	// MDefaultString
	CPerParticleFloatInput m_flForceScale; // 0x180
	// MPropertyFriendlyName "rope shake"
	// MDefaultString
	bool m_bRopes; // 0x268
	// MPropertyFriendlyName "limit rope impulses to Z"
	// MDefaultString
	bool m_bRopesZOnly; // 0x269
	// MPropertyFriendlyName "explosions"
	// MDefaultString
	bool m_bExplosions; // 0x26a
	// MPropertyFriendlyName "particle systems"
	// MDefaultString
	bool m_bParticles; // 0x26b
};

// Aligment: 0
// Size: 1072
class CPerParticleVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 2
// Size: 656
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "activity"
	// MDefaultString
	char[256] m_ActivityName; // 0x180
	// MPropertyFriendlyName "model"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x280
};

// Aligment: 4
// Size: 400
class C_OP_DecayMaintainCount : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "count to maintain"
	// MDefaultString
	int32_t m_nParticlesToMaintain; // 0x180
	// MPropertyFriendlyName "maintain count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x184
	// MPropertyFriendlyName "maintain count scale control point field"
	// MDefaultString
	int32_t m_nScaleControlPointField; // 0x188
	// MPropertyFriendlyName "decay delay"
	// MDefaultString
	float m_flDecayDelay; // 0x18c
};

// Aligment: 3
// Size: 544
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "time-of-day parameter"
	// MDefaultString
	char[128] m_pszTimeOfDayParameter; // 0x184
	// MPropertyFriendlyName "default value"
	// MDefaultString
	Vector m_vecDefaultValue; // 0x204
};

// Aligment: 18
// Size: 9440
class C_OP_RenderTrails : public CBaseTrailRenderer, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x18b0
	// MPropertyFriendlyName "Anchor point source"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertyGroupName "+Trail Length"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x18b4
	// MPropertyFriendlyName "max length"
	// MDefaultString
	// MPropertyGroupName "+Trail Length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x18b8
	// MPropertyFriendlyName "min length"
	// MDefaultString
	// MPropertyGroupName "Trail Length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x18bc
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	// MPropertyGroupName "Trail Length"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x18c0
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MDefaultString
	// MPropertyGroupName "Trail Length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x18c4
	// MPropertyFriendlyName "amount to scale trail length by"
	// MDefaultString
	// MPropertyGroupName "Trail Length"
	float m_flLengthScale; // 0x18c8
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MDefaultString
	// MPropertyGroupName "Trail Length"
	float m_flLengthFadeInTime; // 0x18cc
	// MPropertyFriendlyName "head taper scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x18d0
	// MPropertyFriendlyName "head color scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x19b8
	// MPropertyFriendlyName "head alpha scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	CParticleCollectionFloatInput m_flHeadAlphaScale; // 0x1de8
	// MPropertyFriendlyName "tail taper scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	CPerParticleFloatInput m_flRadiusTaper; // 0x1ed0
	// MPropertyFriendlyName "tail color scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x1fb8
	// MPropertyFriendlyName "tail alpha scale"
	// MDefaultString
	// MPropertyGroupName "Trail Head & Tail"
	CParticleCollectionFloatInput m_flTailAlphaScale; // 0x23e8
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Trail UV Controls"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x24d0
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Trail UV Controls"
	ParticleAttributeIndex_t m_nVertCropField; // 0x24d4
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	// MDefaultString
	// MPropertyGroupName "Trail UV Controls"
	float m_flForwardShift; // 0x24d8
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	// MDefaultString
	// MPropertyGroupName "Trail UV Controls"
	bool m_bFlipUVBasedOnPitchYaw; // 0x24dc
};

// Aligment: 4
// Size: 464
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1b0
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x1b8
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x1c0
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x1c8
};

// Aligment: 8
// Size: 1328
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0x180
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0x184
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x188
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x18c
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMin; // 0x190
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMax; // 0x278
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x360
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x448
};

// Aligment: 3
// Size: 400
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x180
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x184
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
};

// Aligment: 0
// Size: 384
class CSpinUpdateBase : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 55
// Size: 5824
class CBaseRendererSource2 : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x2b8
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x3a0
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x3a8
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x7d8
	// MPropertyFriendlyName "Shader"
	// MDefaultString
	// MPropertyGroupName "+Material"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0x7dc
	// MPropertyFriendlyName "Custom Shader"
	// MDefaultString
	// MPropertyGroupName "+Material"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0x7e0
	// MPropertyFriendlyName "X offset of center point"
	// MDefaultString
	// MPropertyGroupName "+Material"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterXOffset; // 0x7e8
	// MPropertyFriendlyName "Y offset of center point"
	// MDefaultString
	// MPropertyGroupName "+Material"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterYOffset; // 0x8d0
	// MPropertyFriendlyName "Bump Strength"
	// MDefaultString
	// MPropertyGroupName "+Material"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0x9b8
	// MPropertyFriendlyName "Textures"
	// MPropertyGroupName "+Material"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0x9c0
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0x9d8
	// MPropertyFriendlyName "animation type"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0x9dc
	// MPropertyFriendlyName "set animation value in FPS"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0x9e0
	// MPropertyFriendlyName "self illum amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flSelfIllumAmount; // 0x9e8
	// MPropertyFriendlyName "diffuse lighting amount"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flDiffuseAmount; // 0xad0
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MDefaultString
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0xbb8
	// MPropertyFriendlyName "self illum per-particle"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0xbbc
	// MPropertyFriendlyName "light per vertex"
	// MDefaultString
	// MPropertyGroupName "Lighting and Shadows"
	// MPropertySortPriority "400"
	bool m_bPerVertexLighting; // 0xbc0
	// MPropertyFriendlyName "output blend mode"
	// MDefaultString
	// MPropertyGroupName "+Color and alpha adjustments"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0xbc4
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0xbc8
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	bool m_bSaturateColorPreAlphaBlend; // 0xbc9
	// MPropertyFriendlyName "add self amount over alphablend"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAddSelfAmount; // 0xbd0
	// MPropertyFriendlyName "desaturation amount"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flDesaturation; // 0xcb8
	// MPropertyFriendlyName "overbright factor"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flOverbrightFactor; // 0xda0
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0xe88
	// MPropertyFriendlyName "alpha reference"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0xe8c
	// MPropertyFriendlyName "alpha reference window size"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0xe90
	// MPropertyFriendlyName "alpha reference type"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0xe94
	// MPropertyFriendlyName "alpha reference softness"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAlphaReferenceSoftness; // 0xe98
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToZero; // 0xf80
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments/Alpha Reference"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToOne; // 0x1068
	// MPropertyFriendlyName "refract background"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1150
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1151
	// MPropertyFriendlyName "refract amount"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	// MPropertyGroupName "Refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionFloatInput m_flRefractAmount; // 0x1158
	// MPropertyFriendlyName "refract blur radius"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1240
	// MPropertyFriendlyName "refract blur type"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1244
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MDefaultString
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1248
	// MPropertyFriendlyName "stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	// MPropertySortPriority "0"
	char[128] m_stencilTestID; // 0x1249
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x12c9
	// MPropertyFriendlyName "stencil write ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	// MPropertySortPriority "0"
	char[128] m_stencilWriteID; // 0x12ca
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x134a
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x134b
	// MPropertyFriendlyName "reverse z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x134c
	// MPropertyFriendlyName "disable z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x134d
	// MPropertyFriendlyName "Depth feathering mode"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1350
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMinDist; // 0x1358
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMaxDist; // 0x1440
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x1528
	// MPropertyFriendlyName "Sort Method"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x152c
	// MPropertyFriendlyName "Apply fog of war to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Dota Fog & Light"
	// MPropertySortPriority "300"
	bool m_bTintByFOW; // 0x1530
	// MPropertyFriendlyName "Apply fog to particle"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Dota Fog & Light"
	// MPropertySortPriority "300"
	bool m_bFogParticles; // 0x1531
	// MPropertyFriendlyName "Apply global light to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments/Dota Fog & Light"
	// MPropertySortPriority "300"
	bool m_bTintByGlobalLight; // 0x1532
	// MPropertyFriendlyName "blend sequence animation frames"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x1533
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MDefaultString
	// MPropertyGroupName "Animation"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x1534
};

// Aligment: 13
// Size: 480
class C_INIT_RemapCPtoVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x188
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x194
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x1a0
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x1ac
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x1b8
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x1bc
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1c0
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x1c4
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x1c5
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x1c8
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1cc
};

// Aligment: 11
// Size: 448
class C_OP_TeleportBeam : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Position Control Point"
	// MDefaultString
	int32_t m_nCPPosition; // 0x180
	// MPropertyFriendlyName "Velocity Control Point"
	// MDefaultString
	int32_t m_nCPVelocity; // 0x184
	// MPropertyFriendlyName "Misc Control Point"
	// MDefaultString
	int32_t m_nCPMisc; // 0x188
	// MPropertyFriendlyName "Color Control Point"
	// MDefaultString
	int32_t m_nCPColor; // 0x18c
	// MPropertyFriendlyName "Invalid Color Control Point"
	// MDefaultString
	int32_t m_nCPInvalidColor; // 0x190
	// MPropertyFriendlyName "Extra Arc Data Point"
	// MDefaultString
	int32_t m_nCPExtraArcData; // 0x194
	// MPropertyFriendlyName "Gravity"
	// MDefaultString
	Vector m_vGravity; // 0x198
	// MPropertyFriendlyName "Arc Duration Maximum"
	// MDefaultString
	float m_flArcMaxDuration; // 0x1a4
	// MPropertyFriendlyName "Segment Break"
	// MDefaultString
	float m_flSegmentBreak; // 0x1a8
	// MPropertyFriendlyName "Arc Speed"
	// MDefaultString
	float m_flArcSpeed; // 0x1ac
	// MPropertyFriendlyName "Alpha"
	// MDefaultString
	float m_flAlpha; // 0x1b0
};

// Aligment: 4
// Size: 416
class C_OP_TwistAroundAxis : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_fForceAmount; // 0x180
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x184
	// MPropertyFriendlyName "object local space axis 0/1"
	// MDefaultString
	bool m_bLocalSpace; // 0x190
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x194
};

// Aligment: 6
// Size: 3008
class C_INIT_VelocityRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMin; // 0x188
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMax; // 0x270
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x358
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x788
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	// MDefaultString
	bool m_bIgnoreDT; // 0xbb8
};

// Aligment: 4
// Size: 416
class C_OP_PlaneCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	// MDefaultString
	int32_t m_nPlaneControlPoint; // 0x180
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x184
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x190
	// MPropertyFriendlyName "cull plane offset"
	// MDefaultString
	float m_flPlaneOffset; // 0x194
};

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 400
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
};

// Aligment: 8
// Size: 416
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0x180
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x184
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0x19c
};

// Aligment: 5
// Size: 32
struct ParticleChildrenInfo_t
{
public:
	// MPropertySuppressField
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0
	// MPropertyFriendlyName "delay"
	// MDefaultString
	float m_flDelay; // 0x8
	// MPropertyFriendlyName "end cap effect"
	// MDefaultString
	bool m_bEndCap; // 0xe
	// MPropertySuppressField
	// MDefaultString
	bool m_bDisableChild; // 0xf
	// MPropertyFriendlyName "disable at detail levels below"
	// MDefaultString
	ParticleDetailLevel_t m_nDetailLevel; // 0x10
};

// Aligment: 11
// Size: 4336
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x180
	// MPropertyFriendlyName "invert abs value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x18c
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x198
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	CPerParticleFloatInput m_flOffset; // 0x5c8
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CPerParticleVecInput m_vecOutputMin; // 0x6b0
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CPerParticleVecInput m_vecOutputMax; // 0xae0
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	CPerParticleFloatInput m_flNoiseScale; // 0xf10
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0xff8
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x10e0
	// MPropertyFriendlyName "apply velocity in local space (0/1)"
	// MDefaultString
	bool m_bLocalSpace; // 0x10e4
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x10e5
};

// Aligment: 3
// Size: 416
class C_INIT_RandomVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x180
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x18c
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198
};

// Aligment: 6
// Size: 416
class C_OP_ConstrainDistance : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x180
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x184
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x188
	// MPropertyFriendlyName "distance scale control point (X/Y = Min/Max)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x18c
	// MPropertyFriendlyName "offset of center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x190
	// MPropertyFriendlyName "global center point"
	// MDefaultString
	bool m_bGlobalCenter; // 0x19c
};

// Aligment: 6
// Size: 544
class C_INIT_RtEnvCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "test direction"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x180
	// MPropertyFriendlyName "cull normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x18c
	// MPropertyFriendlyName "use velocity for test direction"
	// MDefaultString
	bool m_bUseVelocity; // 0x198
	// MPropertyFriendlyName "cull on miss"
	// MDefaultString
	bool m_bCullOnMiss; // 0x199
	// MPropertyFriendlyName "velocity test adjust lifespan"
	// MDefaultString
	bool m_bLifeAdjust; // 0x19a
	// MPropertyFriendlyName "ray trace environment name"
	// MDefaultString
	char[128] m_RtEnvName; // 0x19b
};

// Aligment: 18
// Size: 480
class C_INIT_StatusEffect : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	// MDefaultString
	Detail2Combo_t m_nDetail2Combo; // 0x180
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	// MDefaultString
	float m_flDetail2Rotation; // 0x184
	// MPropertyFriendlyName "$DETAIL2SCALE"
	// MDefaultString
	float m_flDetail2Scale; // 0x188
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	// MDefaultString
	float m_flDetail2BlendFactor; // 0x18c
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	// MDefaultString
	float m_flColorWarpIntensity; // 0x190
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	// MDefaultString
	float m_flDiffuseWarpBlendToFull; // 0x194
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	// MDefaultString
	float m_flEnvMapIntensity; // 0x198
	// MPropertyFriendlyName "$AMBIENTSCALE"
	// MDefaultString
	float m_flAmbientScale; // 0x19c
	// MPropertyFriendlyName "$SPECULARCOLOR"
	// MDefaultString
	Color m_specularColor; // 0x1a0
	// MPropertyFriendlyName "$SPECULARSCALE"
	// MDefaultString
	float m_flSpecularScale; // 0x1a4
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	// MDefaultString
	float m_flSpecularExponent; // 0x1a8
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	// MDefaultString
	float m_flSpecularExponentBlendToFull; // 0x1ac
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	// MDefaultString
	float m_flSpecularBlendToFull; // 0x1b0
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	// MDefaultString
	Color m_rimLightColor; // 0x1b4
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	// MDefaultString
	float m_flRimLightScale; // 0x1b8
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	// MDefaultString
	float m_flReflectionsTintByBaseBlendToNone; // 0x1bc
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	// MDefaultString
	float m_flMetalnessBlendToFull; // 0x1c0
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	// MDefaultString
	float m_flSelfIllumBlendToFull; // 0x1c4
};

// Aligment: 5
// Size: 448
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	float m_Rate; // 0x180
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	float m_Frequency; // 0x184
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x188
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x18c
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x190
};

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
};

// Aligment: 2
// Size: 624
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x188
};

// Aligment: 4
// Size: 400
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x180
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x188
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x18c
};

// Aligment: 5
// Size: 416
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x180
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x184
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x188
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x18c
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x190
};

// Aligment: 18
// Size: 68
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "visibility camera depth bias"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCameraBias; // 0x0
	// MPropertyFriendlyName "visibility input minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMin; // 0x4
	// MPropertyFriendlyName "visibility input maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMax; // 0x8
	// MPropertyFriendlyName "visibility alpha scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMin; // 0xc
	// MPropertyFriendlyName "visibility alpha scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMax; // 0x10
	// MPropertyFriendlyName "visibility radius scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMin; // 0x14
	// MPropertyFriendlyName "visibility radius scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMax; // 0x18
	// MPropertyFriendlyName "visibility radius FOV scale base"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleFOVBase; // 0x1c
	// MPropertyFriendlyName "visibility proxy radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flProxyRadius; // 0x20
	// MPropertyFriendlyName "visibility input distance minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMin; // 0x24
	// MPropertyFriendlyName "visibility input distance maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMax; // 0x28
	// MPropertyFriendlyName "visibility input dot minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMin; // 0x2c
	// MPropertyFriendlyName "visibility input dot maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMax; // 0x30
	// MPropertyFriendlyName "Visibility input dot use CP angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCPAngles; // 0x34
	// MPropertyFriendlyName "Visibility input dot use Camera angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCameraAngles; // 0x35
	// MPropertyFriendlyName "visibility unsupported hardware fallback value"
	// MDefaultString
	// MParticleAdvancedField
	float m_flNoPixelVisibilityFallback; // 0x38
	// MPropertyFriendlyName "visibility proxy input control point number"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCPin; // 0x3c
	// MPropertyFriendlyName "visibility vr camera right eye"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40
};

// Aligment: 12
// Size: 768
class C_OP_RenderSound : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x1d0
	// MPropertyFriendlyName "decibel level scale"
	// MDefaultString
	float m_flSndLvlScale; // 0x1d4
	// MPropertyFriendlyName "pitch scale"
	// MDefaultString
	float m_flPitchScale; // 0x1d8
	// MPropertyFriendlyName "volume scale"
	// MDefaultString
	float m_flVolumeScale; // 0x1dc
	// MPropertyFriendlyName "decibel level field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x1e0
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1e4
	// MPropertyFriendlyName "pitch field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x1e8
	// MPropertyFriendlyName "volume field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x1ec
	// MPropertyFriendlyName "sound channel"
	// MDefaultString
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x1f0
	// MPropertyFriendlyName "sound control point number"
	// MDefaultString
	int32_t m_nCPReference; // 0x1f4
	// MPropertyFriendlyName "sound"
	// MDefaultString
	// MPropertyAttributeEditor "SoundPicker()"
	char[256] m_pszSoundName; // 0x1f8
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x2f8
};

// Aligment: 18
// Size: 464
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	// MDefaultString
	float m_flSFXColorWarpAmount; // 0x180
	// MPropertyFriendlyName "$SFXNormalAmount"
	// MDefaultString
	float m_flSFXNormalAmount; // 0x184
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	// MDefaultString
	float m_flSFXMetalnessAmount; // 0x188
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	// MDefaultString
	float m_flSFXRoughnessAmount; // 0x18c
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	// MDefaultString
	float m_flSFXSelfIllumAmount; // 0x190
	// MPropertyFriendlyName "$SFXTextureScale"
	// MDefaultString
	float m_flSFXSScale; // 0x194
	// MPropertyFriendlyName "$SFXTextureScrollX"
	// MDefaultString
	float m_flSFXSScrollX; // 0x198
	// MPropertyFriendlyName "$SFXTextureScrollY"
	// MDefaultString
	float m_flSFXSScrollY; // 0x19c
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	// MDefaultString
	float m_flSFXSScrollZ; // 0x1a0
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	// MDefaultString
	float m_flSFXSOffsetX; // 0x1a4
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	// MDefaultString
	float m_flSFXSOffsetY; // 0x1a8
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	// MDefaultString
	float m_flSFXSOffsetZ; // 0x1ac
	// MPropertyFriendlyName "D_DETAIL"
	// MDefaultString
	DetailCombo_t m_nDetailCombo; // 0x1b0
	// MPropertyFriendlyName "$SFXDetailAmount"
	// MDefaultString
	float m_flSFXSDetailAmount; // 0x1b4
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	// MDefaultString
	float m_flSFXSDetailScale; // 0x1b8
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	// MDefaultString
	float m_flSFXSDetailScrollX; // 0x1bc
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	// MDefaultString
	float m_flSFXSDetailScrollY; // 0x1c0
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	// MDefaultString
	float m_flSFXSDetailScrollZ; // 0x1c4
};

// Aligment: 28
// Size: 6624
class C_OP_RenderRopes : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x16c0
	// MPropertyFriendlyName "minimum visual screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x16c4
	// MPropertyFriendlyName "maximum visual screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x16c8
	// MPropertyFriendlyName "start fade screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x16cc
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MDefaultString
	// MPropertyGroupName "Screenspace Fading and culling"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x16d0
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	// MDefaultString
	// MPropertyGroupName "Rope Tesselation"
	float m_flRadiusTaper; // 0x16d4
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MDefaultString
	// MPropertyGroupName "Rope Tesselation"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x16d8
	// MPropertyFriendlyName "maximum number of quads per render segment"
	// MDefaultString
	// MPropertyGroupName "Rope Tesselation"
	int32_t m_nMaxTesselation; // 0x16dc
	// MPropertyFriendlyName "tesselation resolution scale factor"
	// MDefaultString
	// MPropertyGroupName "Rope Tesselation"
	float m_flTessScale; // 0x16e0
	// MPropertyFriendlyName "global texture V World Size"
	// MDefaultString
	// MPropertyGroupName "+Rope Global UV Controls"
	// MPropertySortPriority "800"
	CParticleCollectionFloatInput m_flTextureVWorldSize; // 0x16e8
	// MPropertyFriendlyName "global texture V Scroll Rate"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	CParticleCollectionFloatInput m_flTextureVScrollRate; // 0x17d0
	// MPropertyFriendlyName "global texture V Offset"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	CParticleCollectionFloatInput m_flTextureVOffset; // 0x18b8
	// MPropertyFriendlyName "global texture V Params CP"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	int32_t m_nTextureVParamsCP; // 0x19a0
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	bool m_bClampV; // 0x19a4
	// MPropertyFriendlyName "scale CP start"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls/CP Scaling"
	int32_t m_nScaleCP1; // 0x19a8
	// MPropertyFriendlyName "scale CP end"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls/CP Scaling"
	int32_t m_nScaleCP2; // 0x19ac
	// MPropertyFriendlyName "scale V world size by CP distance"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls/CP Scaling"
	float m_flScaleVSizeByControlPointDistance; // 0x19b0
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls/CP Scaling"
	float m_flScaleVScrollByControlPointDistance; // 0x19b4
	// MPropertyFriendlyName "scale V offset by CP distance"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls/CP Scaling"
	float m_flScaleVOffsetByControlPointDistance; // 0x19b8
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	bool m_bUseScalarForTextureCoordinate; // 0x19bd
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Rope Global UV Controls"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x19c0
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Rope Global UV Controls"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x19c4
	// MPropertyFriendlyName "reverse point order"
	// MDefaultString
	// MPropertyGroupName "Rope Order Controls"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x19c8
	// MPropertyFriendlyName "Closed loop"
	// MDefaultString
	// MPropertyGroupName "Rope Order Controls"
	bool m_bClosedLoop; // 0x19c9
	// MPropertyFriendlyName "orientation_type"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x19cc
	// MPropertyFriendlyName "attribute to use for normal"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertyGroupName "Orientation"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x19d0
	// MPropertyFriendlyName "draw as opaque"
	// MDefaultString
	// MPropertyGroupName "Material"
	bool m_bDrawAsOpaque; // 0x19d4
	// MPropertyFriendlyName "generate normals for cylinder"
	// MDefaultString
	// MPropertyGroupName "Orientation"
	bool m_bGenerateNormals; // 0x19d5
};

// Aligment: 2
// Size: 400
class C_OP_FadeOutSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	// MDefaultString
	float m_flFadeOutTime; // 0x180
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184
};

// Aligment: 0
// Size: 384
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
	ParticleCollisionMode_t m_nCollisionModeInternal; // 0x4
};

// Aligment: 8
// Size: 416
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0x180
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x184
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x188
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x18c
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x190
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x194
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x198
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	// MDefaultString
	bool m_bUseDeltaV; // 0x19c
};

// Aligment: 16
// Size: 1600
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MDefaultString
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x1d0
	// MPropertyFriendlyName "projected texture light"
	// MDefaultString
	bool m_bUseTexture; // 0x1d1
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x1d4
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x1d8
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1dc
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1e0
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	// MPropertyGroupName "+Renderer Modifiers"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x610
	// MPropertyFriendlyName "spotlight distance"
	// MDefaultString
	float m_flLightDistance; // 0x614
	// MPropertyFriendlyName "light start falloff"
	// MDefaultString
	float m_flStartFalloff; // 0x618
	// MPropertyFriendlyName "spotlight distance falloff"
	// MDefaultString
	float m_flDistanceFalloff; // 0x61c
	// MPropertyFriendlyName "spotlight FoV"
	// MDefaultString
	float m_flSpotFoV; // 0x620
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x624
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x628
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x62c
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex )"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x630
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MDefaultString
	int32_t m_nHSVShiftControlPoint; // 0x638
};

// Aligment: 1
// Size: 400
class C_OP_Decay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	// MDefaultString
	bool m_bRopeDecay; // 0x180
};

// Aligment: 4
// Size: 16
struct Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x0
	Class_T classType; // 0x4
	Disposition_t disposition; // 0x8
	int32_t priority; // 0xc
};

// Aligment: 2
// Size: 128
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70
	float m_flRadius; // 0x7c
};

// Aligment: 0
// Size: 152
class CNavVolumeAll : public CNavVolumeVector, CNavVolume
{
public:
// <no members described>
};

// Aligment: 3
// Size: 96
class CNetworkVelocityVector
{
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 2
// Size: 48
struct CBaseAnimatingEasingFloat_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlString m_GraphParameterName; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	float m_flGoal; // 0x28
};

// Aligment: 1
// Size: 1
struct AttachmentHandle_t
{
public:
	uint8_t m_nBoxedTypeSafeInt; // 0x0
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

// Aligment: 0
// Size: 8
class IRagdoll
{
public:
// <no members described>
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
// Size: 144
struct sky3dparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
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
	CUtlStringToken m_nWorldGroupID; // 0x88
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
// Size: 280
class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28
	// MPropertyFriendlyName "Inner Distance"
	// MDefaultString
	float m_flInnerDistance; // 0x108
	// MPropertyFriendlyName "Effect Attach Type"
	// MDefaultString
	ParticleAttachment_t m_nAttachType; // 0x10c
	// MPropertyFriendlyName "Modifier"
	// MDefaultString
	CUtlString m_szModifier; // 0x110
};

// Aligment: 0
// Size: 100
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 184
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector, CNavVolume
{
public:
	Vector m_vStartPos; // 0xa0
	float m_flSearchDist; // 0xac
};

// Aligment: 0
// Size: 40
class CEntitySubclassVDataBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CJiggleBones
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct ModelConfigHandle_t
{
public:
	uint32_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 5
// Size: 592
class CResponseQueue::CDeferredResponse
{
public:
	CResponseCriteriaSet m_contexts; // 0x10
	float m_fDispatchTime; // 0x48
	CHandle< CBaseEntity > m_hIssuer; // 0x4c
	CRR_Response m_response; // 0x58
	bool m_bResponseValid; // 0x248
};

// Aligment: 1
// Size: 80
class CNetworkedIKContext
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CNetworkedIKProceduralTargetContext > m_ProceduralTargetContexts; // 0x8
};

// Aligment: 0
// Size: 152
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
// <no members described>
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

// Aligment: 0
// Size: 144
class CSingleplayRules : public CGameRules
{
public:
// <no members described>
};

// Aligment: 27
// Size: 568
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
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x70
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nDuckJumpTimeMsecs; // 0x74
	// MNetworkEnable
	// MNetworkEnable
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
	audioparams_t m_audio; // 0x140
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x1b8
	fogparams_t m_fog; // 0x1d0
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
// Size: 120
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x68
};

// Aligment: 1
// Size: 4
struct ParticleIndex_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 17
// Size: 824
class CBaseAnimatingController : public CSkeletonAnimationController
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
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8
	// MNetworkEnable
	// MNetworkEnable
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
	CSequenceTransitioner2 m_SequenceTransitioner; // 0x128
};

// Aligment: 0
// Size: 112
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 128
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup, CAI_Expresser
{
public:
	bool m_bAllowMultipleScenes; // 0x78
};

// Aligment: 1
// Size: 16
class CLevelFloat
{
public:
	float32[4] m_pValue; // 0x0
};

// Aligment: 0
// Size: 8
class IEconItemInterface
{
public:
// <no members described>
};

// Aligment: 15
// Size: 176
class CAnimationLayer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOpChanged"
	CNetworkedSequenceOperation m_op; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOrderChanged"
	int32_t m_nOrder; // 0x58
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkSendProxyRecipientsFilter
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	bool m_bLooping; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkChangeCallback "animationLayerCycleReset"
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nNewSequenceParity; // 0x7c
	// MNetworkDisable
	int32_t m_nFlags; // 0x80
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x84
	// MNetworkDisable
	float m_flKillRate; // 0x88
	// MNetworkDisable
	float m_flKillDelay; // 0x8c
	// MNetworkDisable
	float m_flLayerAnimtime; // 0x90
	// MNetworkDisable
	float m_flLayerFadeOuttime; // 0x94
	// MNetworkDisable
	int32_t m_nActivity; // 0x98
	// MNetworkDisable
	int32_t m_nPriority; // 0x9c
	// MNetworkDisable
	float m_flLastEventCycle; // 0xa0
	// MNetworkDisable
	float m_flLastAccess; // 0xa4
};

// Aligment: 1
// Size: 1
struct HeroPersona_t
{
public:
	int8_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 2
// Size: 12
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4
	float m_maxInterval; // 0x8
};

// Aligment: 21
// Size: 160
class CTakeDamageInfo
{
public:
	Vector m_vecDamageForce; // 0x8
	Vector m_vecDamagePosition; // 0x14
	Vector m_vecReportedPosition; // 0x20
	Vector m_vecDamageDirection; // 0x2c
	CHandle< CBaseEntity > m_hInflictor; // 0x38
	CHandle< CBaseEntity > m_hAttacker; // 0x3c
	CHandle< CBaseEntity > m_hAbility; // 0x40
	float m_flDamage; // 0x44
	float m_flMaxDamage; // 0x48
	int32_t m_bitsDamageType; // 0x4c
	int32_t m_iDamageCustom; // 0x50
	AmmoIndex_t m_iAmmoType; // 0x54
	float m_flRadius; // 0x58
	float m_flOriginalDamage; // 0x68
	int32_t m_nDamageTaken; // 0x6c
	int16_t m_iRecord; // 0x70
	float m_flStabilityDamage; // 0x74
	bool m_bAllowFriendlyFire; // 0x78
	bool m_bCanBeBlocked; // 0x79
	bool m_bCanHeadshot; // 0x7a
	HSCRIPT m_hScriptInstance; // 0x80
};

// Aligment: 4
// Size: 64
class CConstantForceController
{
public:
	Vector m_linear; // 0xc
	Vector m_angular; // 0x18
	Vector m_linearSave; // 0x24
	Vector m_angularSave; // 0x30
};

// Aligment: 10
// Size: 496
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0
	char[192] m_szResponseName; // 0x1
	char[128] m_szMatchingRule; // 0xc1
	ResponseParams m_Params; // 0x150
	float m_fMatchScore; // 0x170
	char* m_szSpeakerContext; // 0x178
	char* m_szWorldContext; // 0x180
	ResponseFollowup m_Followup; // 0x188
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1c0
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d8
};

// Aligment: 24
// Size: 104
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
	// MNetworkUserGroup "FogController"
	float blendtobackground; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	bool enable; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	bool blend; // 0x61
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x62
	bool m_bPadding; // 0x63
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

// Aligment: 1
// Size: 8
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4
};

// Aligment: 4
// Size: 32
class CMotorController
{
public:
	float m_speed; // 0x8
	float m_maxTorque; // 0xc
	Vector m_axis; // 0x10
	float m_inertiaFactor; // 0x1c
};

// Aligment: 9
// Size: 9
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

// Aligment: 0
// Size: 8
class IHasAttributes
{
public:
// <no members described>
};

// Aligment: 5
// Size: 32
class CSmoothFunc
{
public:
	float m_flSmoothAmplitude; // 0x8
	float m_flSmoothBias; // 0xc
	float m_flSmoothDuration; // 0x10
	float m_flSmoothRemainingTime; // 0x14
	int32_t m_nSmoothDir; // 0x18
};

// Aligment: 2
// Size: 40
class CCopyRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
};

// Aligment: 1
// Size: 4
struct item_definition_index_t
{
public:
	uint32_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 0
// Size: 8
class IPhysicsPlayerController
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
struct locksound_t
{
public:
	CUtlSymbolLarge sLockedSound; // 0x8
	CUtlSymbolLarge sUnlockedSound; // 0x10
	float flwaitSound; // 0x18
};

// Aligment: 8
// Size: 40
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
	float m_flRate; // 0x20
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x24
};

// Aligment: 10
// Size: 80
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
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowTime; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowStartTime; // 0x48
	bool m_bGlowing; // 0x4c
};

// Aligment: 1
// Size: 1
struct style_index_t
{
public:
	uint8_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 13
// Size: 144
class CSoundPatch
{
public:
	CSoundEnvelope m_pitch; // 0x8
	CSoundEnvelope m_volume; // 0x18
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
	CUtlSymbolLarge m_iszClassName; // 0x88
public:
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
};

// Aligment: 8
// Size: 64
class CNetworkedSequenceOperation
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "64"
	HSequence m_hSequence; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
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

// Aligment: 17
// Size: 96
class CSceneEventInfo
{
public:
	int32_t m_iLayer; // 0x0
	int32_t m_iPriority; // 0x4
	HSequence m_hSequence; // 0x8
	float m_flWeight; // 0xc
	bool m_bIsMoving; // 0x10
	bool m_bHasArrived; // 0x11
	float m_flInitialYaw; // 0x14
	float m_flTargetYaw; // 0x18
	float m_flFacingYaw; // 0x1c
	int32_t m_nType; // 0x20
	float m_flNext; // 0x24
	bool m_bIsGesture; // 0x28
	bool m_bShouldRemove; // 0x29
	CHandle< CBaseEntity > m_hTarget; // 0x54
	uint32_t m_nSceneEventId; // 0x58
	bool m_bClientSide; // 0x5c
	bool m_bStarted; // 0x5d
};

// Aligment: 1
// Size: 16
class CSkillFloat
{
public:
	float32[4] m_pValue; // 0x0
};

// Aligment: 1
// Size: 24
class CPlayerInfo : public IBotController
{
public:
	CBasePlayer* m_pParent; // 0x10
};

// Aligment: 1
// Size: 904
class CBaseAnimatingOverlayController : public CBaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x338
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

// Aligment: 1
// Size: 16
class CSkillInt
{
public:
	int32[4] m_pValue; // 0x0
};

// Aligment: 12
// Size: 1200
class CSkeletonInstance : public CGameSceneNode
{
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x160
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x3a0
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x3a1
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x3a2
	// MNetworkDisable
	bool m_bEnableIK; // 0x3a3
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x3a4
	// MNetworkDisable
	bitfield:1 m_bDirtyMotionType; // 0x0
	// MNetworkDisable
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x3a8
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x3ac
	// MNetworkEnable
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x3f8
	// MNetworkEnable
	// MNetworkEnable
	CNetworkedIKContext m_NetworkedIKContext; // 0x400
};

// Aligment: 2
// Size: 144
class CGameRules
{
public:
	char[128] m_szQuestName; // 0x8
	int32_t m_nQuestPhase; // 0x88
};

// Aligment: 1
// Size: 16
struct magnetted_objects_t
{
public:
	CHandle< CBaseEntity > hEntity; // 0x8
};

// Aligment: 3
// Size: 96
class CNetworkOriginQuantizedVector
{
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 6
// Size: 344
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyFriendlyName "Model Name"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
	// MPropertyFriendlyName "Head Damage Multiplier"
	// MDefaultString
	CSkillFloat m_flHeadDamageMultiplier; // 0x108
	// MPropertyFriendlyName "Chest Damage Multiplier"
	// MDefaultString
	CSkillFloat m_flChestDamageMultiplier; // 0x118
	// MPropertyFriendlyName "Stomach Damage Multiplier"
	// MDefaultString
	CSkillFloat m_flStomachDamageMultiplier; // 0x128
	// MPropertyFriendlyName "Arm Damage Multiplier"
	// MDefaultString
	CSkillFloat m_flArmDamageMultiplier; // 0x138
	// MPropertyFriendlyName "Leg Damage Multiplier"
	// MDefaultString
	CSkillFloat m_flLegDamageMultiplier; // 0x148
};

// Aligment: 2
// Size: 16
class CountdownTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_duration; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0xc
};

// Aligment: 7
// Size: 104
class CNetworkOriginCellCoordQuantizedVector
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x18
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x1a
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x1c
	// MNetworkEnable
	uint16_t m_nOutsideWorld; // 0x1e
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x20
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x38
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x50
};

// Aligment: 1
// Size: 56
struct CBaseAnimatingEasings_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasingFloat_t m_IKMasterBlendAmountEasing; // 0x8
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

// Aligment: 3
// Size: 40
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0
	int32_t parentIndex; // 0x20
	float m_flRadius; // 0x24
};

// Aligment: 0
// Size: 8
class IPlayerInfo
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
class IntervalTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0x8
};

// Aligment: 1
// Size: 8
struct itemid_t
{
public:
	uint64_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 2
// Size: 504
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0
	CRR_Response m_response; // 0x8
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
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

// Aligment: 2
// Size: 24
class CRandStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_minInterval; // 0x10
	float m_maxInterval; // 0x14
};

// Aligment: 1
// Size: 160
class CDCGGameRules : public CSingleplayRules, CGameRules
{
public:
	float m_fTimeOfDay; // 0x98
};

// Aligment: 32
// Size: 336
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
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "64"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xe8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "64"
	float m_flScale; // 0xf4
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xf8
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0x104
	// MNetworkDisable
	float m_flAbsScale; // 0x110
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0x114
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0x116
	// MNetworkDisable
	bool m_bDormant; // 0x117
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0x118
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
	bitfield:2 m_nLatchAbsOrigin; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0x11b
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0x11c
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x11d
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_name; // 0x120
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x138
	// MNetworkDisable
	float m_flZOffset; // 0x13c
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x140
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

// Aligment: 1
// Size: 8
class CRangeInt
{
public:
	int32[2] m_pValue; // 0x0
};

// Aligment: 31
// Size: 656
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
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	// MNetworkEnable
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
// Size: 1
class CPhysicsComponent
{
public:
// <no members described>
};

// Aligment: 1
// Size: 320
class CNetworkTransmitComponent
{
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x12c
public:
	static int32_t &Get_s_nWatchTransmitEntity() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[0]->m_instance); }
	static bool &Get_s_bUseNetworkVars() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[1]->m_instance); }
	static bool &Get_s_bNetworkVarPerFieldTracking() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[2]->m_instance); }
	static bool &Get_s_bNetworkVarValidate() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[3]->m_instance); }
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

// Aligment: 5
// Size: 56
struct AmmoTypeInfo_t
{
public:
	// MPropertyFriendlyName "Max Carry Amount"
	int32_t m_nMaxCarry; // 0x10
	// MPropertyFriendlyName "Water Splash Size"
	CRangeInt m_nSplashSize; // 0x1c
	// MPropertyFriendlyName "Flags"
	AmmoFlags_t m_nFlags; // 0x24
	// MPropertyFriendlyName "Bullet Mass"
	float m_flMass; // 0x28
	// MPropertyFriendlyName "Bullet Speed"
	CRangeFloat m_flSpeed; // 0x2c
};

// Aligment: 8
// Size: 49
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

// Aligment: 12
// Size: 120
class CCommentarySystem
{
public:
	uint64_t m_afPlayersLastButtons; // 0x18
	bool m_bCommentaryConvarsChanging; // 0x20
	int32_t m_iClearPressedButtons; // 0x24
	bool m_bCommentaryEnabledMidGame; // 0x28
	float m_flNextTeleportTime; // 0x2c
	int32_t m_iTeleportStage; // 0x30
	bool m_bCheatState; // 0x34
	bool m_bIsFirstSpawnGroupToLoad; // 0x35
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x50
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x54
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x58
	CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x60
};

// Aligment: 24
// Size: 1032
class CBasePlayerWeaponVData
{
public:
	// MPropertyFriendlyName "Weapon Entity Name"
	// MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
	CUtlString m_szClassName; // 0x10
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Localization token for name"
	CUtlString m_szPrintName; // 0x18
	// MPropertyFriendlyName "Model"
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x20
	// MPropertyFriendlyName "Right Handed"
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; // 0x100
	// MPropertyFriendlyName "Allow Flipping"
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; // 0x101
	// MPropertySuppressField
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x108
	// MPropertySuppressField
	CUtlString m_szAnimationPrefix; // 0x1e8
	// MPropertyFriendlyName "Muzzle Flash Particle"
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x1f0
	// MPropertyFriendlyName "Tracer Particle"
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0x2d0
	// MPropertyFriendlyName "Item Flags"
	ItemFlagTypes_t m_iFlags; // 0x3b0
	// MPropertyFriendlyName "Is Melee Weapon"
	bool m_bMeleeWeapon; // 0x3b1
	// MPropertyFriendlyName "Primary Ammo Type"
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nPrimaryAmmoType; // 0x3b2
	// MPropertyFriendlyName "Secondary Ammo Type"
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nSecondaryAmmoType; // 0x3b3
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MDefaultString
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; // 0x3b4
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MDefaultString
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x3b8
	// MPropertyFriendlyName "Primary Initial Clip (-1 means use clip size)"
	// MDefaultString
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x3bc
	// MPropertyFriendlyName "Secondary Initial Clip (-1 means use clip size)"
	// MDefaultString
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x3c0
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x3c4
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x3c8
	// MPropertyFriendlyName "Weight"
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; // 0x3cc
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MDefaultString
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; // 0x3d0
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MDefaultString
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; // 0x3d1
	// MPropertyFriendlyName "Which rumble effect to use when fired? (xbox)"
	// MDefaultString
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; // 0x3d4
	// MPropertyFriendlyName "Sounds"
	// MKV3TransferName "SoundData"
	CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x3e0
};

// Aligment: 2
// Size: 40
struct PhysicsRagdollPose_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	CUtlVector< CTransform > m_Transforms; // 0x8
	bool m_bDirty; // 0x20
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

// Aligment: 1
// Size: 24
class CPhysicsShake
{
public:
	Vector m_force; // 0x8
};

// Aligment: 1
// Size: 200
class CMultiplayRules : public CGameRules
{
public:
	float m_flIntermissionEndTime; // 0xa8
public:
	static int64_t &Get_m_nMapCycleTimeStamp() { return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_m_nMapCycleindex() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 152
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x78
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
	int32_t soundscapeIndex; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	uint8_t localBits; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70
};

// Aligment: 1
// Size: 16
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0xc
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

// Aligment: 1
// Size: 320
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CEconItemView m_Item; // 0x68
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

// Aligment: 2
// Size: 200
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0
	bool m_bFailed; // 0xc1
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 4
// Size: 32
class ResponseParams
{
public:
	int16_t odds; // 0x10
	int16_t flags; // 0x12
	uint8_t soundlevel; // 0x14
	ResponseFollowup* m_pFollowup; // 0x18
};

// Aligment: 1
// Size: 24
class CStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_interval; // 0x10
};

// Aligment: 9
// Size: 104
class CAI_Expresser
{
public:
	float m_flStopTalkTime; // 0x40
	float m_flStopTalkTimeWithoutDelay; // 0x44
	float m_flBlockedTalkTime; // 0x48
	int32_t m_voicePitch; // 0x4c
	float m_flLastTimeAcceptedSpeak; // 0x50
	bool m_bAllowSpeakingInterrupts; // 0x54
	bool m_bConsiderSceneInvolvementAsSpeech; // 0x55
	int32_t m_nLastSpokenPriority; // 0x58
	CBaseFlex* m_pOuter; // 0x60
};

// Aligment: 2
// Size: 56
class CResponseCriteriaSet
{
public:
	int32_t m_nNumPrefixedContexts; // 0x30
	bool m_bOverrideOnAppend; // 0x34
};

// Aligment: 0
// Size: 216
class CNavVolumeMarkupVolume : public CNavVolume
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

// Aligment: 1
// Size: 16
class CSkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8
};

// Aligment: 0
// Size: 8
class IBotController
{
public:
// <no members described>
};

// Aligment: 1
// Size: 136
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x80
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

// Aligment: 21
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
	uint8_t m_nPenetrate; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5e
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nColor; // 0x62
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_fFlags; // 0x63
	// MNetworkEnable
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6e
};

// Aligment: 1
// Size: 1
struct AmmoIndex_t
{
public:
	int8_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 3
// Size: 96
class CNetworkViewOffsetVector
{
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 21
// Size: 240
struct handposepair_t
{
public:
	matrix3x4_t[2] m_matHandOffset; // 0x0
	Vector[2] m_vMaxExtentOrigin; // 0x60
	Vector[2] m_vMinExtentOrigin; // 0x78
	Vector[2] m_vRotationAxisEndpoints; // 0x90
	float32[5] m_flHandPoseParams; // 0xa8
	CUtlSymbolLarge m_poseSequenceName; // 0xc0
	int32_t m_nUseRange; // 0xc8
	int32_t m_iBone; // 0xcc
	float m_flUseAnglesRange; // 0xd0
	float m_flPivotMin; // 0xd4
	float m_flPivotMax; // 0xd8
	float m_flRotateMin; // 0xdc
	float m_flRotateMax; // 0xe0
	bool m_bHasExtent; // 0xe4
	bool m_bHasRotation; // 0xe5
	bool m_bAllowFlip; // 0xe6
	bool m_bConformFingers; // 0xe7
	bool m_bSqueezable; // 0xe8
	bool m_bSqueezeTarget; // 0xe9
	bool m_bGlobal; // 0xea
	bool m_bHandPoseEntityData; // 0xeb
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

// Aligment: 2
// Size: 8
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0
	float m_flClusterArea; // 0x4
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

// Aligment: 7
// Size: 616
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float32[64] m_flValues; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	int32[64] m_nValueCounts; // 0x110
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210
	// MNetworkEnable
	// MNetworkEnable
	float m_flInterval; // 0x214
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinalValue; // 0x218
	// MNetworkEnable
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStopped; // 0x220
};

// Aligment: 2
// Size: 20
class CSkillDamage
{
public:
	// MPropertyFriendlyName "Damage"
	// MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill is used)"
	// MDefaultString
	CSkillFloat m_flDamage; // 0x0
	// MPropertyFriendlyName "Physics Force Damage"
	// MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used."
	float m_flPhysicsForceDamage; // 0x10
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

// Aligment: 1
// Size: 4
class CSimpleSimTimer
{
public:
	float m_next; // 0x0
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

// Aligment: 6
// Size: 52
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0
	MoveType_t m_MoveType; // 0x4
	float m_flStartTime; // 0x8
	Vector m_vecStartOrigin; // 0xc
	Quaternion m_qStartRot; // 0x18
	ParticleIndex_t m_nFXIndex; // 0x28
};

// Aligment: 2
// Size: 184
class CScriptUniformRandomStream
{
public:
	HSCRIPT m_hScriptScope; // 0x8
	int32_t m_nInitialSeed; // 0xb0
public:
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams() { return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fiels[0]->m_instance); }
};

// Aligment: 1
// Size: 112
class CResponseQueue
{
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x58
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

// Aligment: 0
// Size: 8
class CFootstepTableHandle
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
	static uint32_t &Get_s_globalCount() { return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_static_fiels[0]->m_instance); }
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
	uint8_t m_CollisionGroup; // 0x56
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x57
	float m_flBoundingRadius; // 0x58
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

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 1
// Size: 8
class CRangeFloat
{
public:
	float32[2] m_pValue; // 0x0
};

// Aligment: 0
// Size: 104
class CGameObjectView
{
public:
// <no members described>
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

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 29
// Size: 576
class C_EnvWindShared
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
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	// MNetworkEnable
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

// Aligment: 43
// Size: 1168
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
	Color m_AmbientColor1; // 0x6e
	Color m_AmbientColor2; // 0x72
	Color m_AmbientColor3; // 0x76
	float m_flSunDistance; // 0x7c
	float m_flFOV; // 0x80
	float m_flNearZ; // 0x84
	float m_flFarZ; // 0x88
	bool m_bEnableShadows; // 0x8c
	bool m_bOldEnableShadows; // 0x8d
	bool m_bBackgroundClearNotRequired; // 0x8e
	float m_flCloudScale; // 0x90
	float m_flCloud1Speed; // 0x94
	float m_flCloud1Direction; // 0x98
	float m_flCloud2Speed; // 0x9c
	float m_flCloud2Direction; // 0xa0
	float m_flAmbientScale1; // 0xa4
	float m_flAmbientScale2; // 0xa8
	float m_flGroundScale; // 0xac
	float m_flLightScale; // 0xb0
	float m_flFoWDarkness; // 0xb4
	bool m_bEnableSeparateSkyboxFog; // 0xb8
	Vector m_vFowColor; // 0xbc
	Vector m_ViewOrigin; // 0xc8
	QAngle m_ViewAngles; // 0xd4
	float m_flViewFoV; // 0xe0
	Vector[8] m_WorldPoints; // 0xe4
	Vector2D m_vFogOffsetLayer0; // 0x478
	Vector2D m_vFogOffsetLayer1; // 0x480
	CHandle< C_BaseEntity > m_hEnvWind; // 0x488
	CHandle< C_BaseEntity > m_hEnvSky; // 0x48c
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

// Aligment: 3
// Size: 24
class C_PlayerState
{
public:
	bool deadflag; // 0x8
	bool hltv; // 0x9
	QAngle v_angle; // 0xc
};

// Aligment: 9
// Size: 400
class CDeferredLightBase
{
public:
	// MNetworkEnable
	// MNetworkEnable
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

// Aligment: 0
// Size: 8
class C_SingleplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class C_CDCGGameRules : public C_SingleplayRules, C_GameRules
{
public:
	float m_fTimeOfDay; // 0x10
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

// Aligment: 0
// Size: 688
class CHeadlightEffect : public CFlashlightEffect
{
public:
// <no members described>
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

// Aligment: 0
// Size: 1104
class CDCGBaseAnimatingController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
// <no members described>
};

// Aligment: 2
// Size: 88
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x50
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
	static float &Get_m_flVisibleBBoxMinHeight() { return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CProjectedTextureBase")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 8
struct C_EnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 0
// Size: 8
class C_GameRules
{
public:
// <no members described>
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
// Size: 688
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

// Aligment: 2
// Size: 8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0
	float m_fNextEvent; // 0x4
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
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8
	// MNetworkEnable
	// MNetworkEnable
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

// Aligment: 29
// Size: 496
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
	uint32_t m_iHideHUD; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nDuckJumpTimeMsecs; // 0x64
	// MNetworkEnable
	// MNetworkEnable
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
	// MNetworkChangeCallback "OnPunchChanged"
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
	audioparams_t m_audio; // 0x148
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x1c0
	bool m_bInLanding; // 0x1dc
	float m_flLandingTime; // 0x1e0
	Vector m_vecClientBaseVelocity; // 0x1e4
};

// Aligment: 1
// Size: 1
struct PlayerSlot_t
{
public:
	uint8_t m_nBoxedTypeSafeInt; // 0x0
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

// Aligment: 1
// Size: 2
struct DCGEquipSubSlot_t
{
public:
	uint16_t m_nBoxedTypeSafeInt; // 0x0
};

// Aligment: 2
// Size: 8
struct C_EnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
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

// Aligment: 0
// Size: 32
class C_MultiplayRules : public C_GameRules
{
public:
// <no members described>
};

