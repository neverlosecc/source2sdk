#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: !GlobalTypes
// Class Count: 964
// Enum Count: 168
///////////////////////////////////////////

// Aligment: 4
// Size: 3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Aligment: 4
// Size: 7
enum class ResourceStructFlags_t : uint32_t
{
	STRUCT_HAS_VTABLE = 0x1,
	STRUCT_TREE_REQUIRES_SCATTER = 0x2,
	STRUCT_TREE_REQUIRES_CONSTRUCTOR = 0x4,
	STRUCT_TREE_REQUIRES_DESTRUCTOR = 0x8,
	STRUCT_TREE_REQUIRES_EXT_REFERENCES = 0x10,
	STRUCT_TREE_REQUIRES_UNUSED = 0x20,
	STRUCT_FLAGS_MAX = 0x20,
};

// Aligment: 4
// Size: 1
enum class LightSourceShape_t : uint32_t
{
	LIGHT_SOURCE_SHAPE_SPHERE = 0x0,
};

// Aligment: 4
// Size: 6
enum class LightType_t : uint32_t
{
	MATERIAL_LIGHT_DISABLE = 0x0,
	MATERIAL_LIGHT_POINT = 0x1,
	MATERIAL_LIGHT_DIRECTIONAL = 0x2,
	MATERIAL_LIGHT_SPOT = 0x3,
	MATERIAL_LIGHT_ORTHO = 0x4,
	MATERIAL_LIGHT_ENVIRONMENT_PROBE = 0x5,
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
// Size: 6
enum class CubeMapFace_t : uint32_t
{
	CUBEMAP_FACE_POSITIVE_X = 0x0,
	CUBEMAP_FACE_NEGATIVE_X = 0x1,
	CUBEMAP_FACE_POSITIVE_Y = 0x2,
	CUBEMAP_FACE_NEGATIVE_Y = 0x3,
	CUBEMAP_FACE_POSITIVE_Z = 0x4,
	CUBEMAP_FACE_NEGATIVE_Z = 0x5,
};

// Aligment: 4
// Size: 6
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_MAT3X4 = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x2,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_LIGHTMAP_PARAMS = 0x3,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x4,
	INPUT_LAYOUT_VARIATION_MAX = 0x5,
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
// Size: 8
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
};

// Aligment: 4
// Size: 20
enum class TextureSpecificationFlags_t : uint32_t
{
	TSPEC_FLAGS = 0x0,
	TSPEC_RENDER_TARGET = 0x1,
	TSPEC_VERTEX_TEXTURE = 0x2,
	TSPEC_UNFILTERABLE_OK = 0x4,
	TSPEC_RENDER_TARGET_SAMPLEABLE = 0x8,
	TSPEC_SUGGEST_CLAMPS = 0x10,
	TSPEC_SUGGEST_CLAMPT = 0x20,
	TSPEC_SUGGEST_CLAMPU = 0x40,
	TSPEC_NO_LOD = 0x80,
	TSPEC_CUBE_TEXTURE = 0x100,
	TSPEC_VOLUME_TEXTURE = 0x200,
	TSPEC_TEXTURE_ARRAY = 0x400,
	TSPEC_TEXTURE_GEN_MIP_MAPS = 0x800,
	TSPEC_LINE_TEXTURE_360 = 0x1000,
	TSPEC_LINEAR_ADDRESSING_360 = 0x2000,
	TSPEC_USE_TYPED_IMAGEFORMAT = 0x4000,
	TSPEC_SHARED_RESOURCE = 0x8000,
	TSPEC_UAV = 0x10000,
	TSPEC_INPUT_ATTACHMENT = 0x20000,
	TSPEC_CUBE_CAN_SAMPLE_AS_ARRAY = 0x40000,
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
// Size: 1
enum class VPhysXDiskShapeHeader_t::VersinEnum_t : uint32_t
{
	VPhysXDiskShapeHeader_t::VERSION = 0x81,
};

// Aligment: 4
// Size: 3
enum class MorphSetData_t::EncodingType_t : uint32_t
{
	MorphSetData_t::ENCODING_TYPE_OBJECT_SPACE = 0x0,
	MorphSetData_t::ENCODING_TYPE_TANGENT_SPACE = 0x1,
	MorphSetData_t::ENCODING_TYPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 2
enum class VPhysXJoint_t::Flags_t : uint32_t
{
	VPhysXJoint_t::JOINT_FLAGS_NONE = 0x0,
	VPhysXJoint_t::JOINT_FLAGS_BODY1_FIXED = 0x1,
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
// Size: 2
enum class AttachmentInfluenceFlags_t : uint32_t
{
	ATTACHMENT_INFLUENCE_FLAGS_NONE = 0x0,
	ATTACHMENT_INFLUENCE_FLAGS_ROOT_TRANSFORM = 0x1,
};

// Aligment: 4
// Size: 2
enum class RenderSkeletonData_t::FlagEnum_t : uint32_t
{
	RenderSkeletonData_t::FLAG_BLEND_WEIGHT_COUNT_SHIFT = 0x0,
	RenderSkeletonData_t::FLAG_BLEND_WEIGHT_COUNT_MASK = 0xf,
};

// Aligment: 4
// Size: 15
enum class ConstraintType_t : uint32_t
{
	CONSTRAINT_TYPE_INVALID = 0x0,
	CONSTRAINT_TYPE_HELPER_BONE = 0x1,
	CONSTRAINT_TYPE_TWIST = 0x2,
	CONSTRAINT_TYPE_AIM = 0x3,
	CONSTRAINT_TYPE_POINT = 0x4,
	CONSTRAINT_TYPE_ROTATION = 0x5,
	CONSTRAINT_TYPE_ORIENT = 0x6,
	CONSTRAINT_TYPE_2_BONE_IK = 0x7,
	CONSTRAINT_TYPE_JIGGLE_BONE = 0x8,
	CONSTRAINT_TYPE_TILT_TWIST = 0x9,
	CONSTRAINT_TYPE_MORPH = 0xa,
	CONSTRAINT_TYPE_PARENT = 0xb,
	CONSTRAINT_TYPE_POSE_SPACE_MORPH = 0xc,
	CONSTRAINT_TYPE_POSE_SPACE_BONE = 0xd,
	CONSTRAINT_TYPE_MAX = 0xe,
};

// Aligment: 4
// Size: 3
enum class MorphSetData_t::LookupType_t : uint32_t
{
	MorphSetData_t::LOOKUP_TYPE_TEXCOORD = 0x0,
	MorphSetData_t::LOOKUP_TYPE_VERTEX_ID = 0x1,
	MorphSetData_t::LOOKUP_TYPE_COUNT = 0x2,
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
enum class VPhysXConstraintParams_t::EnumFlags0_t : uint32_t
{
	VPhysXConstraintParams_t::FLAG0_SHIFT_INTERPENETRATE = 0x0,
	VPhysXConstraintParams_t::FLAG0_SHIFT_CONSTRAIN = 0x1,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
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
// Size: 10
enum class MeshDrawPrimitiveFlags_t : uint32_t
{
	MESH_DRAW_FLAGS_NONE = 0x0,
	MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
	MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
	MESH_DRAW_FLAGS_IS_OCCLUDER = 0x4,
	MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
	MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
	MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
	MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
	MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
	MESH_DRAW_FLAGS_HAS_LIGHTING_BASIS = 0x100,
};

// Aligment: 4
// Size: 8
enum class SignonState_t : uint32_t
{
	SIGNONSTATE_NONE = 0x0,
	SIGNONSTATE_CHALLENGE = 0x1,
	SIGNONSTATE_CONNECTED = 0x2,
	SIGNONSTATE_NEW = 0x3,
	SIGNONSTATE_PRESPAWN = 0x4,
	SIGNONSTATE_SPAWN = 0x5,
	SIGNONSTATE_FULL = 0x6,
	SIGNONSTATE_CHANGELEVEL = 0x7,
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
// Size: 4
enum class RenderMeshFlexControllerRemapType_t : uint32_t
{
	FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	FLEXCONTROLLER_REMAP_2WAY = 0x1,
	FLEXCONTROLLER_REMAP_NWAY = 0x2,
	FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Aligment: 4
// Size: 4
enum class BundleType_t : uint32_t
{
	BUNDLE_TYPE_NONE = 0x0,
	BUNDLE_TYPE_POSITION_SPEED = 0x1,
	BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	BUNDLE_TYPE_COUNT = 0x3,
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
enum class VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t
{
	VPhysXAggregateData_t::FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	VPhysXAggregateData_t::FLAG_LEVEL_COLLISION = 0x10,
	VPhysXAggregateData_t::FLAG_IGNORE_SCALE = 0x20,
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
// Size: 3
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
};

// Aligment: 4
// Size: 2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
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
	WayPointFacingDirection = 0x5,
	TargetMoveDirection = 0x6,
	Acceleration = 0x7,
	SlopeNormal = 0x8,
	LookTarget = 0x9,
	WayPointPosition = 0xa,
	GoalPosition = 0xb,
	GoalFacingDirection = 0xc,
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
// Size: 2
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_Additive = 0x0,
	AimMatrixBlendMode_BoneMask = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
};

// Aligment: 4
// Size: 3
enum class SelectorTagBehaior_t : uint32_t
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
// Size: 4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Aligment: 4
// Size: 4
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
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
// Size: 32
enum class AnimValueSource : uint32_t
{
	MoveHeading = 0x0,
	MoveSpeed = 0x1,
	ForwardSpeed = 0x2,
	StrafeSpeed = 0x3,
	FacingHeading = 0x4,
	LookHeading = 0x5,
	LookPitch = 0x6,
	Parameter = 0x7,
	WayPointHeading = 0x8,
	WayPointFacing = 0x9,
	WayPointDistance = 0xa,
	TargetMoveHeading = 0xb,
	TargetMoveSpeed = 0xc,
	AccelerationHeading = 0xd,
	AccelerationSpeed = 0xe,
	SlopeHeading = 0xf,
	SlopeAngle = 0x10,
	GoalDistance = 0x11,
	AccelerationLeftRight = 0x12,
	AccelerationFrontBack = 0x13,
	RootMotionSpeed = 0x14,
	RootMotionTurnSpeed = 0x15,
	MoveHeadingRelativeToLookHeading = 0x16,
	FingerCurl_Thumb = 0x17,
	FingerCurl_Index = 0x18,
	FingerCurl_Middle = 0x19,
	FingerCurl_Ring = 0x1a,
	FingerCurl_Pinky = 0x1b,
	FingerSplay_Thumb_Index = 0x1c,
	FingerSplay_Index_Middle = 0x1d,
	FingerSplay_Middle_Ring = 0x1e,
	FingerSplay_Ring_Pinky = 0x1f,
};

// Aligment: 4
// Size: 38
enum class ControlValue : uint32_t
{
	ControlValue_MoveHeading = 0x0,
	ControlValue_MoveSpeed = 0x1,
	ControlValue_FacingHeading = 0x2,
	ControlValue_LookHeading = 0x3,
	ControlValue_LookPitch = 0x4,
	ControlValue_WayPointHeading = 0x5,
	ControlValue_WayPointFacing = 0x6,
	ControlValue_WayPointDistance = 0x7,
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
	ControlValue_GoalDistance = 0x15,
	ControlValue_AccelerationLeftRight = 0x16,
	ControlValue_AccelerationFrontBack = 0x17,
	ControlValue_RootMotionSpeed = 0x18,
	ControlValue_RootMotionTurnSpeed = 0x19,
	ControlValue_MoveHeadingRelativeToLookHeading = 0x1a,
	ControlValue_FingerCurl_Thumb = 0x1b,
	ControlValue_FingerCurl_Index = 0x1c,
	ControlValue_FingerCurl_Middle = 0x1d,
	ControlValue_FingerCurl_Ring = 0x1e,
	ControlValue_FingerCurl_Pinky = 0x1f,
	ControlValue_FingerSplay_Thumb_Index = 0x20,
	ControlValue_FingerSplay_Index_Middle = 0x21,
	ControlValue_FingerSplay_Middle_Ring = 0x22,
	ControlValue_FingerSplay_Ring_Pinky = 0x23,
	ControlValue_Count = 0x24,
	ControlValue_Invalid = 0xff,
};

// Aligment: 4
// Size: 17
enum class SeqResourceCmdEnum : uint32_t
{
	SEQ_CMD_Nop = 0x0,
	SEQ_CMD_LinearDelta = 0x1,
	SEQ_CMD_FetchFrameRange = 0x2,
	SEQ_CMD_Slerp = 0x3,
	SEQ_CMD_Add = 0x4,
	SEQ_CMD_Subtract = 0x5,
	SEQ_CMD_Scale = 0x6,
	SEQ_CMD_Copy = 0x7,
	SEQ_CMD_Blend = 0x8,
	SEQ_CMD_Worldspace = 0x9,
	SEQ_CMD_Sequence = 0xa,
	SEQ_CMD_FetchCycle = 0xb,
	SEQ_CMD_FetchFrame = 0xc,
	SEQ_CMD_IKLockInPlace = 0xd,
	SEQ_CMD_IKRestoreAll = 0xe,
	SEQ_CMD_ReverseSequence = 0xf,
	SEQ_CMD_Transform = 0x10,
};

// Aligment: 1
// Size: 64
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
	FIELD_TYPECOUNT = 63,
};

// Aligment: 4
// Size: 24
enum class CGroundIKSolveAnimNode::DebugSkeletonBoneType_t : uint32_t
{
	CGroundIKSolveAnimNode::FLAG_NO_BONE_FLAGS = 0x0,
	CGroundIKSolveAnimNode::FLAG_BONEFLEXDRIVER = 0x4,
	CGroundIKSolveAnimNode::FLAG_CLOTH = 0x8,
	CGroundIKSolveAnimNode::FLAG_PHYSICS = 0x10,
	CGroundIKSolveAnimNode::FLAG_ATTACHMENT = 0x20,
	CGroundIKSolveAnimNode::FLAG_ANIMATION = 0x40,
	CGroundIKSolveAnimNode::FLAG_MESH = 0x80,
	CGroundIKSolveAnimNode::FLAG_HITBOX = 0x100,
	CGroundIKSolveAnimNode::FLAG_RETARGET_SRC = 0x200,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_READ = 0x40000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_WRITE = 0x80000,
	CGroundIKSolveAnimNode::BLEND_PREALIGNED = 0x100000,
	CGroundIKSolveAnimNode::FLAG_RIGIDLENGTH = 0x200000,
	CGroundIKSolveAnimNode::FLAG_PROCEDURAL = 0x400000,
	CGroundIKSolveAnimNode::FLAG_IK = 0x800000,
	CGroundIKSolveAnimNode::FLAG_ALL_BONE_FLAGS = 0xffffff,
};

// Aligment: 4
// Size: 2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
};

// Aligment: 4
// Size: 3
enum class GroundIKTiltSource_t : uint32_t
{
	TILT_None = 0x0,
	TILT_IK = 0x1,
	TILT_MovementManagerSlope = 0x2,
};

// Aligment: 4
// Size: 4
enum class SeqResourcePoseSettingEnum : uint32_t
{
	SEQ_POSE_CONSTANT = 0x0,
	SEQ_POSE_ROTATION = 0x1,
	SEQ_POSE_POSITION = 0x2,
	SEQ_POSE_VELOCITY = 0x3,
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
// Size: 2
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
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

// Aligment: 4
// Size: 2
enum class IrradVolumeFlags_t : uint32_t
{
	IRRADVOLUME_FLAGS_NONE = 0x0,
	IRRADVOLUME_FLAG_AUTO_GENERATED = 0x1,
};

// Aligment: 4
// Size: 4
enum class GlobalIlluminationMethod_t : uint32_t
{
	GLOBAL_ILLUMINATION_NONE = 0x0,
	GLOBAL_ILLUMINATION_BAKE = 0x1,
	GLOBAL_ILLUMINATION_AMBIENT_OCCLUSION = 0x2,
	GLOBAL_ILLUMINATION_REALTIME_RADIOSITY = 0x3,
};

// Aligment: 4
// Size: 10
enum class ObjectTypeFlags_t : uint32_t
{
	OBJECT_TYPE_IMAGE_LOD = 0x1,
	OBJECT_TYPE_GEOMETRY_LOD = 0x2,
	OBJECT_TYPE_DECAL = 0x4,
	OBJECT_TYPE_MODEL = 0x8,
	OBJECT_TYPE_BLOCK_LIGHT = 0x10,
	OBJECT_TYPE_NO_SHADOWS = 0x20,
	OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
	OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
	OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
	OBJECT_TYPE_EXCLUDE_FROM_IMPOSTORS = 0x200,
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
// Size: 3
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	PARTICLE_LIGHT_TYPE_FX = 0x2,
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
// Size: 16
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
	MAX_PATTACH_TYPES = 0xe,
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
// Size: 2
enum class HitboxLerpType_t : uint32_t
{
	HITBOX_LERP_LIFETIME = 0x0,
	HITBOX_LERP_CONSTANT = 0x1,
};

// Aligment: 4
// Size: 13
enum class SequenceCombineMode_t : uint32_t
{
	SEQUENCE_COMBINE_MODE_USE_SEQUENCE_0 = 0x0,
	SEQUENCE_COMBINE_MODE_USE_SEQUENCE_1 = 0x1,
	SEQUENCE_COMBINE_MODE_AVERAGE = 0x2,
	SEQUENCE_COMBINE_MODE_ADDITIVE = 0x3,
	SEQUENCE_COMBINE_MODE_ALPHA_FROM0_RGB_FROM_1 = 0x4,
	SEQUENCE_COMBINE_MODE_ALPHA_FROM1_RGB_FROM_0 = 0x5,
	SEQUENCE_COMBINE_MODE_WEIGHTED_BLEND = 0x6,
	SEQUENCE_COMBINE_MODE_ALPHA_BLEND_1_OVER_0 = 0x7,
	SEQUENCE_COMBINE_MODE_REPLICATEALPHA0 = 0x8,
	SEQUENCE_COMBINE_MODE_REPLICATEALPHA1 = 0x9,
	SEQUENCE_COMBINE_MODE_ALPHA_BLEND_0_OVER_1 = 0xa,
	SEQUENCE_COMBINE_MODE_REPLICATE_COLOR_0 = 0xb,
	SEQUENCE_COMBINE_MODE_REPLICATE_COLOR_1 = 0xc,
};

// Aligment: 4
// Size: 2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
};

// Aligment: 4
// Size: 6
enum class ScalarExpressionType_t : uint32_t
{
	SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	SCALAR_EXPRESSION_ADD = 0x0,
	SCALAR_EXPRESSION_SUBTRACT = 0x1,
	SCALAR_EXPRESSION_MUL = 0x2,
	SCALAR_EXPRESSION_DIVIDE = 0x3,
	SCALAR_EXPRESSION_INPUT_1 = 0x4,
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
// Size: 12
enum class ParticleFloatType_t : uint32_t
{
	PF_TYPE_INVALID = 0xffffffffffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_RANDOM_UNIFORM = 0x1,
	PF_TYPE_RANDOM_BIASED = 0x2,
	PF_TYPE_COLLECTION_AGE = 0x3,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x4,
	PF_TYPE_PARTICLE_AGE = 0x5,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x6,
	PF_TYPE_PARTICLE_FLOAT = 0x7,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x8,
	PF_TYPE_PARTICLE_SPEED = 0x9,
	PF_TYPE_COUNT = 0xa,
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
// Size: 17
enum class WeaponSound_t : uint32_t
{
	WEAPON_SOUND_EMPTY = 0x0,
	WEAPON_SOUND_SINGLE = 0x1,
	WEAPON_SOUND_SINGLE_NPC = 0x2,
	WEAPON_SOUND_DOUBLE = 0x3,
	WEAPON_SOUND_DOUBLE_NPC = 0x4,
	WEAPON_SOUND_BURST = 0x5,
	WEAPON_SOUND_RELOAD = 0x6,
	WEAPON_SOUND_RELOAD_NPC = 0x7,
	WEAPON_SOUND_MELEE_MISS = 0x8,
	WEAPON_SOUND_MELEE_HIT = 0x9,
	WEAPON_SOUND_MELEE_HIT_WORLD = 0xa,
	WEAPON_SOUND_SPECIAL1 = 0xb,
	WEAPON_SOUND_SPECIAL2 = 0xc,
	WEAPON_SOUND_SPECIAL3 = 0xd,
	WEAPON_SOUND_TAUNT = 0xe,
	WEAPON_SOUND_FAST_RELOAD = 0xf,
	WEAPON_SOUND_NUM_TYPES = 0x10,
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

// Aligment: 1
// Size: 8
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0,
	SOLID_BSP = 1,
	SOLID_BBOX = 2,
	SOLID_OBB = 3,
	SOLID_POINT = 5,
	SOLID_VPHYSICS = 6,
	SOLID_CAPSULE = 7,
	SOLID_LAST = 8,
};

// Aligment: 4
// Size: 9
enum class WeaponTexture_t : uint32_t
{
	WEAPON_TEXTURE_ICON_ACTIVE = 0x0,
	WEAPON_TEXTURE_ICON_INACTIVE = 0x1,
	WEAPON_TEXTURE_ICON_AMMO = 0x2,
	WEAPON_TEXTURE_ICON_AMMO2 = 0x3,
	WEAPON_TEXTURE_ICON_CROSSHAIR = 0x4,
	WEAPON_TEXTURE_ICON_AUTOAIM = 0x5,
	WEAPON_TEXTURE_ICON_ZOOMED_CROSSHAIR = 0x6,
	WEAPON_TEXTURE_ICON_ZOOMED_AUTOAIM = 0x7,
	WEAPON_TEXTURE_ICON_SMALL = 0x8,
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
// Size: 4
enum class MaterialModifyMode_t : uint32_t
{
	MATERIAL_MODIFY_MODE_NONE = 0x0,
	MATERIAL_MODIFY_MODE_SETVAR = 0x1,
	MATERIAL_MODIFY_MODE_ANIM_SEQUENCE = 0x2,
	MATERIAL_MODIFY_MODE_FLOAT_LERP = 0x3,
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
// Size: 15
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
// Size: 45
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
	kEconItemOrigin_Max = 0x2b,
};

// Aligment: 4
// Size: 1
enum class TakeHealthOptions_t : uint32_t
{
	TH_IGNORE_MAX_HITPOINTS = 0x1,
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
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Aligment: 4
// Size: 4
enum class explosion_t : uint32_t
{
	EXPLOSION_DEFAULT = 0x0,
	EXPLOSION_GRENADE = 0x1,
	EXPLOSION_MOLOTOV = 0x2,
	EXPLOSION_FIREWORKS = 0x3,
};

// Aligment: 4
// Size: 4
enum class eLiteralHandType : uint32_t
{
	LITERAL_HAND_TYPE_UNKNOWN = 0xffffffffffffffff,
	LITERAL_HAND_TYPE_RIGHT = 0x0,
	LITERAL_HAND_TYPE_LEFT = 0x1,
	LITERAL_HAND_TYPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 4
enum class EntityDisolveType_t : uint32_t
{
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

// Aligment: 1
// Size: 21
enum class gender_t : uint8_t
{
	GENDER_NONE = 0,
	GENDER_MALE = 1,
	GENDER_FEMALE = 2,
	GENDER_NAMVET = 3,
	GENDER_TEENGIRL = 4,
	GENDER_BIKER = 5,
	GENDER_MANAGER = 6,
	GENDER_GAMBLER = 7,
	GENDER_PRODUCER = 8,
	GENDER_COACH = 9,
	GENDER_MECHANIC = 10,
	GENDER_CEDA = 11,
	GENDER_CRAWLER = 12,
	GENDER_UNDISTRACTABLE = 13,
	GENDER_FALLEN = 14,
	GENDER_RIOT_CONTROL = 15,
	GENDER_CLOWN = 16,
	GENDER_JIMMY = 17,
	GENDER_HOSPITAL_PATIENT = 18,
	GENDER_BRIDE = 19,
	GENDER_LAST = 20,
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
// Size: 4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Aligment: 8
// Size: 9
enum class NavAttributeEnum : uint64_t
{
	NAV_MESH_CROUCH = 0x1,
	NAV_MESH_JUMP = 0x2,
	NAV_MESH_PRECISE = 0x4,
	NAV_MESH_NO_JUMP = 0x8,
	NAV_MESH_AVOID = 0x80,
	NAV_MESH_STAIRS = 0x1000,
	NAV_MESH_NO_MERGE = 0x2000,
	NAV_MESH_OBSTACLE_TOP = 0x4000,
	NAV_MESH_CLIFF = 0x8000,
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
// Size: 13
enum class PrecipitationType_t : uint32_t
{
	PRECIPITATION_TYPE_RAIN = 0x0,
	PRECIPITATION_TYPE_SNOW = 0x1,
	PRECIPITATION_TYPE_ASH = 0x2,
	PRECIPITATION_TYPE_SNOWFALL = 0x3,
	PRECIPITATION_TYPE_PARTICLERAIN = 0x4,
	PRECIPITATION_TYPE_PARTICLEASH = 0x5,
	PRECIPITATION_TYPE_PARTICLERAINSTORM = 0x6,
	PRECIPITATION_TYPE_PARTICLEBUGS = 0x7,
	PRECIPITATION_TYPE_PARTICLESMOKE = 0x8,
	PRECIPITATION_TYPE_PARTICLESNOW = 0x9,
	PRECIPITATION_TYPE_PARTICLEXENSPORES = 0xa,
	PRECIPITATION_TYPE_DUSTMOTES = 0xb,
	NUM_PRECIPITATION_TYPES = 0xc,
};

// Aligment: 4
// Size: 10
enum class interactions_t : uint32_t
{
	INTERACTION_NONE = 0xffffffffffffffff,
	INTERACTION_CLIP_TO_ENERGYGUN = 0x0,
	INTERACTION_LARGE_CLIP_TO_ENERGYGUN = 0x1,
	INTERACTION_CLIP_TO_SHOTGUN = 0x2,
	INTERACTION_MULTICLIP_TO_SHOTGUN = 0x3,
	INTERACTION_GRENADE_TO_SHOTGUN = 0x4,
	INTERACTION_XENGRENADE_TO_SHOTGUN = 0x5,
	INTERACTION_CHARGEDCLIP_TO_SHOTGUN = 0x6,
	INTERACTION_CLIP_TO_RAPIDFIRE = 0x7,
	NUM_HAND_INTERACTIONS = 0x8,
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
	LAST_SHARED_ENTITY_CLASS = 0x4,
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

// Aligment: 4
// Size: 4
enum class NetChannelBufType_t : uint32_t
{
	BUF_DEFAULT = 0xffffffffffffffff,
	BUF_UNRELIABLE = 0x0,
	BUF_RELIABLE = 0x1,
	BUF_VOICE = 0x2,
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
// Size: 3
enum class ScreenEffectType_t : uint32_t
{
	SCREENEFFECT_EP2_ADVISOR_STUN = 0x0,
	SCREENEFFECT_EP1_INTRO = 0x1,
	SCREENEFFECT_EP2_GROGGY = 0x2,
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
// Size: 2
enum class ShatterSurface_t : uint32_t
{
	SHATTERSURFACE_GLASS = 0x0,
	SHATTERSURFACE_TILE = 0x1,
};

// Aligment: 4
// Size: 988
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
	ACT_RAPPEL_LOOP = 0x88,
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

// Aligment: 4
// Size: 4
enum class eLogicalHandType : uint32_t
{
	LOGICAL_HAND_TYPE_UNKNOWN = 0xffffffffffffffff,
	LOGICAL_HAND_TYPE_PRIMARY_HAND = 0x0,
	LOGICAL_HAND_TYPE_OFF_HAND = 0x1,
	LOGICAL_HAND_TYPE_COUNT = 0x2,
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
// Size: 13
enum class EGameZone : uint32_t
{
	DCG_ZONE_INVALID = 0x0,
	DCG_ZONE_GRAVEYARD = 0x1,
	DCG_ZONE_DECK = 0x2,
	DCG_ZONE_HAND = 0x3,
	DCG_ZONE_FOUNTAIN = 0x4,
	DCG_ZONE_DEPLOYMENT = 0x5,
	DCG_ZONE_COMBAT = 0x6,
	DCG_ZONE_SPELL_STACK = 0x7,
	DCG_ZONE_SHOP = 0x8,
	DCG_ZONE_EFFECTS = 0x9,
	DCG_ZONE_IMPROVEMENTS = 0xa,
	DCG_ZONE_LIFEBOAT = 0xb,
	DCG_ZONE_COUNT = 0xc,
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
// Size: 651
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
	ACT_DCG_BOARDSKELETON_CLOSED = 0x823,
	ACT_DCG_BOARDSKELETON_OPENING = 0x824,
	ACT_DCG_BOARDSKELETON_OPEN = 0x825,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_LOCAL = 0x826,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_OPPONENT = 0x827,
	ACT_DECK_IMP_INITIAL_FLOP_LAYOUT_CAMERA = 0x828,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_POSITIVE_PLAYER = 0x829,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_POSITIVE_OPPONENT = 0x82a,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_PLAYER = 0x82b,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_OPPONENT = 0x82c,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_COWER_PLAYER = 0x82d,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_COWER_OPPONENT = 0x82e,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_DISGUST_PLAYER = 0x82f,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_DISGUST_PLAYER_UNDERGROUND = 0x830,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_DISGUST_OPPONENT = 0x831,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_HIDE_PLAYER = 0x832,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_HIDE_OPPONENT = 0x833,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_POSITIVE_PLAYER = 0x834,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_NEGATIVE_PLAYER = 0x835,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_POSITIVE_OPPONENT = 0x836,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_GROUND_SHAKE_NEGATIVE_OPPONENT = 0x837,
	ACT_DECK_IMP_PLAYCARD_RAZZLE_A_NEGATIVE_HIDE_OPPONENT = 0x838,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_POSITIVE_DUEL_PLAYER = 0x839,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_DUEL_OPPONENT = 0x83a,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_LEGION_SUMMON_PLAYER = 0x83b,
	ACT_DECK_IMP_PLAYCARD_SET_1_RAZZLE_A_LEGION_SUMMON_OPPONENT = 0x83c,
	ACT_DCG_ANIMATED_ATTACH_1 = 0x83d,
	ACT_DCG_ANIMATED_ATTACH_2 = 0x83e,
	ACT_DCG_ANIMATED_ATTACH_3 = 0x83f,
	ACT_DCG_ANIMATED_ATTACH_4 = 0x840,
	ACT_COIN_LOCAL_IDLE = 0x841,
	ACT_COIN_OPPONENT_IDLE = 0x842,
	ACT_COIN_TO_LOCAL = 0x843,
	ACT_COIN_TO_OPPONENT = 0x844,
	ACT_COIN_FIGHT_LOCAL = 0x845,
	ACT_COIN_FIGHT_OPPONENT = 0x846,
	ACT_COIN_SPAWN_LOCAL = 0x847,
	ACT_COIN_SPAWN_OPPONENT = 0x848,
	ACT_PLAYER_COIN_IDLE = 0x849,
	ACT_PLAYER_COIN_TURN = 0x84a,
	ACT_PLAYER_COIN_TURN_PASS = 0x84b,
	ACT_PLAYER_COIN_TURN_FIGHT = 0x84c,
	ACT_PLAYER_COIN_JIGGLE = 0x84d,
	ACT_DCG_DIE_LOCAL_IDLE = 0x84e,
	ACT_DCG_DIE_LOCAL_SPAWN = 0x84f,
	ACT_DCG_DIE_LOCAL_ACTIVATE = 0x850,
	ACT_DCG_DIE_LOCAL_DESTROYED = 0x851,
	ACT_DCG_DIE_COMBAT_LOCAL_CLASH = 0x852,
	ACT_DCG_DIE_COMBAT_LOCAL_RETURN = 0x853,
	ACT_DCG_TILE_LOCAL_IDLE = 0x854,
	ACT_DCG_TILE_LOCAL_SPAWN = 0x855,
	ACT_DCG_TILE_LOCAL_DESTROYED = 0x856,
	ACT_DCG_TILE_COMBAT_LOCAL_CLASH = 0x857,
	ACT_DCG_TILE_COMBAT_LOCAL_WAIT = 0x858,
	ACT_DCG_IMPROVEMENT_IDLE = 0x859,
	ACT_DCG_IMPROVEMENT_SPAWN = 0x85a,
	ACT_DCG_IMPROVEMENT_READY = 0x85b,
	ACT_DCG_IMPROVEMENT_TRIGGERING = 0x85c,
	ACT_DCG_IMPROVEMENT_DEATH = 0x85d,
	ACT_DCG_IMPROVEMENT_ACTIVATED = 0x85e,
	ACT_DCG_IMPROVEMENT_TARGETING = 0x85f,
	ACT_DCG_IMPROVEMENT_CARD_IDLE = 0x860,
	ACT_DCG_ANCIENT_DESTROYED = 0x861,
	ACT_DCG_ANCIENT_SPAWN = 0x862,
	ACT_DCG_ANCIENT_SPAWN_LOCAL = 0x863,
	ACT_DCG_ANCIENT_SPAWN_OPPONENT = 0x864,
	ACT_DCG_ANCIENT_IDLE = 0x865,
	ACT_PLAYER_MATCH_CLOCK_IDLE = 0x866,
};

// Aligment: 4
// Size: 304
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x110
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x118
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x120
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x128
};

// Aligment: 8
// Size: 784
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0xe0
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0xe4
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe8
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xec
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMin; // 0xf0
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMax; // 0x178
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x288
};

// Aligment: 17
// Size: 272
class C_OP_ClothMovement : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "gravity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_Gravity; // 0xe0
	// MPropertyFriendlyName "drag"
	// MDefaultString
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0xec
	// MPropertyFriendlyName "force triangulate"
	// MDefaultString
	bool m_bTriangulate; // 0xf0
	// MPropertyFriendlyName "constraints"
	// MDefaultString
	bool m_bConstraints; // 0xf1
	// MPropertyFriendlyName "add curvature"
	// MDefaultString
	float m_flAddCurvature; // 0xf4
	// MPropertyFriendlyName "add slack (not implemented)"
	// MDefaultString
	float m_flAddSlack; // 0xf8
	// MPropertyFriendlyName "add noise"
	// MDefaultString
	float m_flAddNoise; // 0xfc
	// MPropertyFriendlyName "max constraint passes"
	// MDefaultString
	int32_t m_nMaxConstraintPasses; // 0x100
	// MPropertyFriendlyName "lock the UL corner point in place"
	// MDefaultString
	bool m_bLockULCorner; // 0x104
	// MPropertyFriendlyName "lock the UR corner point in place"
	// MDefaultString
	bool m_bLockURCorner; // 0x105
	// MPropertyFriendlyName "lock the LL corner point in place"
	// MDefaultString
	bool m_bLockLLCorner; // 0x106
	// MPropertyFriendlyName "lock the LR corner point in place"
	// MDefaultString
	bool m_bLockLRCorner; // 0x107
	// MPropertyFriendlyName "lock upper row in place"
	// MDefaultString
	bool m_bLockURow; // 0x108
	// MPropertyFriendlyName "lock lower row in place"
	// MDefaultString
	bool m_bLockLRow; // 0x109
	// MPropertyFriendlyName "lock left column in place"
	// MDefaultString
	bool m_bLockLColumn; // 0x10a
	// MPropertyFriendlyName "lock right column in place"
	// MDefaultString
	bool m_bLockRColumn; // 0x10b
	// MPropertyFriendlyName "iterations"
	// MDefaultString
	int32_t m_nIterations; // 0x10c
};

// Aligment: 3
// Size: 240
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0xe0
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0xe4
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe8
};

// Aligment: 0
// Size: 224
class CSpinUpdateBase : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 47
// Size: 752
class CBaseRendererSource2 : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	float m_flAnimationRate; // 0x130
	// MPropertyFriendlyName "animation fit lifetime"
	// MDefaultString
	bool m_bFitCycleToLifetime; // 0x134
	// MPropertyFriendlyName "use animation rate as FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x135
	// MPropertyFriendlyName "light per vertex"
	// MDefaultString
	bool m_bPerVertexLighting; // 0x136
	// MPropertyFriendlyName "self illum amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flSelfIllumAmount; // 0x138
	// MPropertyFriendlyName "diffuse lighting amount"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	float m_flDiffuseAmount; // 0x13c
	// MPropertyFriendlyName "self illum per-particle"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x140
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToZero; // 0x144
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToOne; // 0x148
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bGammaCorrectVertexColors; // 0x14c
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bSaturateColorPreAlphaBlend; // 0x14d
	// MPropertyFriendlyName "dual sequence combine mode"
	// MDefaultString
	// MPropertyGroupName "Dual sequence controls"
	SequenceCombineMode_t m_nSequenceCombineMode; // 0x150
	// MPropertyFriendlyName "second sequence animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	// MPropertyGroupName "Dual sequence controls"
	float m_flAnimationRate2; // 0x154
	// MPropertyFriendlyName "RGB blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0RGBWeight; // 0x158
	// MPropertyFriendlyName "alpha blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0AlphaWeight; // 0x15c
	// MPropertyFriendlyName "RGB blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1RGBWeight; // 0x160
	// MPropertyFriendlyName "alpha blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1AlphaWeight; // 0x164
	// MPropertyFriendlyName "add self amount for combined additive and alpha blended"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flAddSelfAmount; // 0x168
	// MPropertyFriendlyName "use additive blending"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditive; // 0x16c
	// MPropertyFriendlyName "Additive alpha - write alpha during additive"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditiveAlpha; // 0x16d
	// MPropertyFriendlyName "Mod2x blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bMod2X; // 0x16e
	// MPropertyFriendlyName "'Lighten blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bLightenMode; // 0x16f
	// MPropertyFriendlyName "use max-luminance blending for sequence 0"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence0; // 0x170
	// MPropertyFriendlyName "use max-luminance blending for sequence 1"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence1; // 0x171
	// MPropertyFriendlyName "refract background"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	bool m_bRefract; // 0x172
	// MPropertyFriendlyName "refract amount"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	// MPropertyGroupName "Refraction"
	float m_flRefractAmount; // 0x174
	// MPropertyFriendlyName "refract blur radius"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	int32_t m_nRefractBlurRadius; // 0x178
	// MPropertyFriendlyName "refract blur type"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	BlurFilterType_t m_nRefractBlurType; // 0x17c
	// MPropertyFriendlyName "stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char[128] m_stencilTestID; // 0x180
	// MPropertyFriendlyName "stencil write ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char[128] m_stencilWriteID; // 0x200
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthPass; // 0x280
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthFail; // 0x281
	// MPropertyFriendlyName "reverse z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bReverseZBuffering; // 0x282
	// MPropertyFriendlyName "disable z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bDisableZBuffering; // 0x283
	// MPropertyFriendlyName "Depth feathering mode"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x284
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMinDist; // 0x288
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMaxDist; // 0x28c
	// MPropertyFriendlyName "overbright factor"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flOverbrightFactor; // 0x290
	// MPropertyFriendlyName "Apply fog of war to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByFOW; // 0x294
	// MPropertyFriendlyName "Apply fog to particle"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bFogParticles; // 0x295
	// MPropertyFriendlyName "Apply global light to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByGlobalLight; // 0x296
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MDefaultString
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hTexture; // 0x298
	// MPropertyFriendlyName "Apply motion vectors"
	// MDefaultString
	// MPropertyGroupName "Motion vectors"
	bool m_bMotionVectors; // 0x2a0
	// MPropertyFriendlyName "motion vectors texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MPropertyGroupName "Motion vectors"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hMotionVectorsTexture; // 0x2a8
	// MPropertyFriendlyName "blend sequence 0 animation frames"
	// MDefaultString
	bool m_bBlendFramesSeq0; // 0x2b0
	// MPropertyFriendlyName "right eye first seq offset"
	// MDefaultString
	int32_t m_nFirstSequenceOffsetForRightEye; // 0x2b4
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MDefaultString
	int32_t m_nHSVShiftControlPoint; // 0x2b8
};

// Aligment: 13
// Size: 304
class C_INIT_RemapCPtoVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0xe8
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0xf4
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x100
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x10c
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x118
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x11c
	// MPropertyFriendlyName "output is scalar of initial random range"
	// MDefaultString
	bool m_bScaleInitialRange; // 0x120
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x121
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x122
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x124
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x128
};

// Aligment: 11
// Size: 288
class C_OP_TeleportBeam : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Position Control Point"
	// MDefaultString
	int32_t m_nCPPosition; // 0xe0
	// MPropertyFriendlyName "Velocity Control Point"
	// MDefaultString
	int32_t m_nCPVelocity; // 0xe4
	// MPropertyFriendlyName "Misc Control Point"
	// MDefaultString
	int32_t m_nCPMisc; // 0xe8
	// MPropertyFriendlyName "Color Control Point"
	// MDefaultString
	int32_t m_nCPColor; // 0xec
	// MPropertyFriendlyName "Invalid Color Control Point"
	// MDefaultString
	int32_t m_nCPInvalidColor; // 0xf0
	// MPropertyFriendlyName "Extra Arc Data Point"
	// MDefaultString
	int32_t m_nCPExtraArcData; // 0xf4
	// MPropertyFriendlyName "Gravity"
	// MDefaultString
	Vector m_vGravity; // 0xf8
	// MPropertyFriendlyName "Arc Duration Maximum"
	// MDefaultString
	float m_flArcMaxDuration; // 0x104
	// MPropertyFriendlyName "Segment Break"
	// MDefaultString
	float m_flSegmentBreak; // 0x108
	// MPropertyFriendlyName "Arc Speed"
	// MDefaultString
	float m_flArcSpeed; // 0x10c
	// MPropertyFriendlyName "Alpha"
	// MDefaultString
	float m_flAlpha; // 0x110
};

// Aligment: 4
// Size: 256
class C_OP_TwistAroundAxis : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_fForceAmount; // 0xe0
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0xe4
	// MPropertyFriendlyName "object local space axis 0/1"
	// MDefaultString
	bool m_bLocalSpace; // 0xf0
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xf4
};

// Aligment: 6
// Size: 272
class C_INIT_VelocityRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe0
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0xe4
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0xe8
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMin; // 0xec
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMax; // 0xf8
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	// MDefaultString
	bool m_bIgnoreDT; // 0x104
};

// Aligment: 3
// Size: 256
class C_OP_PlaneCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	// MDefaultString
	int32_t m_nPlaneControlPoint; // 0xe0
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0xe4
	// MPropertyFriendlyName "cull plane offset"
	// MDefaultString
	float m_flPlaneOffset; // 0xf0
};

// Aligment: 0
// Size: 272
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 240
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0xe0
	bool m_bScaleCurrent; // 0xe4
};

// Aligment: 8
// Size: 256
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0xe0
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0xe4
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe8
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0xec
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0xf0
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf4
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf8
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0xfc
};

// Aligment: 4
// Size: 16
struct ParticleChildrenInfo_t
{
public:
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0
	// MPropertyFriendlyName "delay"
	// MDefaultString
	float m_flDelay; // 0x8
	// MPropertyFriendlyName "end cap effect"
	// MDefaultString
	bool m_bEndCap; // 0xe
	// MPropertyFriendlyName "disable child"
	// MDefaultString
	bool m_bDisableChild; // 0xf
};

// Aligment: 11
// Size: 304
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0xe0
	// MPropertyFriendlyName "invert abs value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0xec
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0xf8
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x104
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	Vector m_vecOutputMin; // 0x108
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	Vector m_vecOutputMax; // 0x114
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x120
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x124
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x128
	// MPropertyFriendlyName "apply velocity in local space (0/1)"
	// MDefaultString
	bool m_bLocalSpace; // 0x12c
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x12d
};

// Aligment: 0
// Size: 224
class C_OP_CodeDrivenEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 256
class C_INIT_RandomVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0xe0
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0xec
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xf8
};

// Aligment: 6
// Size: 256
class C_OP_ConstrainDistance : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0xe0
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0xe4
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe8
	// MPropertyFriendlyName "distance scale control point (X/Y = Min/Max)"
	// MDefaultString
	int32_t m_nScaleCP; // 0xec
	// MPropertyFriendlyName "offset of center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0xf0
	// MPropertyFriendlyName "global center point"
	// MDefaultString
	bool m_bGlobalCenter; // 0xfc
};

// Aligment: 6
// Size: 384
class C_INIT_RtEnvCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "test direction"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0xe0
	// MPropertyFriendlyName "cull normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0xec
	// MPropertyFriendlyName "use velocity for test direction"
	// MDefaultString
	bool m_bUseVelocity; // 0xf8
	// MPropertyFriendlyName "cull on miss"
	// MDefaultString
	bool m_bCullOnMiss; // 0xf9
	// MPropertyFriendlyName "velocity test adjust lifespan"
	// MDefaultString
	bool m_bLifeAdjust; // 0xfa
	// MPropertyFriendlyName "ray trace environment name"
	// MDefaultString
	char[128] m_RtEnvName; // 0xfb
};

// Aligment: 18
// Size: 320
class C_INIT_StatusEffect : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	// MDefaultString
	Detail2Combo_t m_nDetail2Combo; // 0xe0
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	// MDefaultString
	float m_flDetail2Rotation; // 0xe4
	// MPropertyFriendlyName "$DETAIL2SCALE"
	// MDefaultString
	float m_flDetail2Scale; // 0xe8
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	// MDefaultString
	float m_flDetail2BlendFactor; // 0xec
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	// MDefaultString
	float m_flColorWarpIntensity; // 0xf0
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	// MDefaultString
	float m_flDiffuseWarpBlendToFull; // 0xf4
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	// MDefaultString
	float m_flEnvMapIntensity; // 0xf8
	// MPropertyFriendlyName "$AMBIENTSCALE"
	// MDefaultString
	float m_flAmbientScale; // 0xfc
	// MPropertyFriendlyName "$SPECULARCOLOR"
	// MDefaultString
	Color m_specularColor; // 0x100
	// MPropertyFriendlyName "$SPECULARSCALE"
	// MDefaultString
	float m_flSpecularScale; // 0x104
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	// MDefaultString
	float m_flSpecularExponent; // 0x108
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	// MDefaultString
	float m_flSpecularExponentBlendToFull; // 0x10c
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	// MDefaultString
	float m_flSpecularBlendToFull; // 0x110
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	// MDefaultString
	Color m_rimLightColor; // 0x114
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	// MDefaultString
	float m_flRimLightScale; // 0x118
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	// MDefaultString
	float m_flReflectionsTintByBaseBlendToNone; // 0x11c
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	// MDefaultString
	float m_flMetalnessBlendToFull; // 0x120
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	// MDefaultString
	float m_flSelfIllumBlendToFull; // 0x124
};

// Aligment: 5
// Size: 288
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	float m_Rate; // 0xe0
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	float m_Frequency; // 0xe4
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0xe8
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0xec
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0xf0
};

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
};

// Aligment: 4
// Size: 240
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0xe8
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0xec
};

// Aligment: 5
// Size: 256
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0xe0
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0xe4
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0xe8
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0xec
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0xf0
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

// Aligment: 11
// Size: 608
class C_OP_RenderSound : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x130
	// MPropertyFriendlyName "decibel level scale"
	// MDefaultString
	float m_flSndLvlScale; // 0x134
	// MPropertyFriendlyName "pitch scale"
	// MDefaultString
	float m_flPitchScale; // 0x138
	// MPropertyFriendlyName "volume scale"
	// MDefaultString
	float m_flVolumeScale; // 0x13c
	// MPropertyFriendlyName "decibel level field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x140
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x144
	// MPropertyFriendlyName "pitch field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x148
	// MPropertyFriendlyName "volume field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x14c
	// MPropertyFriendlyName "sound channel"
	// MDefaultString
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x150
	// MPropertyFriendlyName "sound control point number"
	// MDefaultString
	int32_t m_nCPReference; // 0x154
	// MPropertyFriendlyName "sound"
	// MDefaultString
	// MPropertyAttributeEditor "SoundPicker()"
	char[256] m_pszSoundName; // 0x158
};

// Aligment: 33
// Size: 880
class C_OP_RenderRopes : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	bool m_bEnableFadingAndClamping; // 0x2f0
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x2f4
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x2f8
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeSize; // 0x2fc
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeSize; // 0x300
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	// MDefaultString
	float m_flRadiusTaper; // 0x304
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MDefaultString
	int32_t m_nMinTesselation; // 0x308
	// MPropertyFriendlyName "maximum number of quads per render segment"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0x30c
	// MPropertyFriendlyName "tesselation resolution scale factor"
	// MDefaultString
	float m_flTessScale; // 0x310
	// MPropertyFriendlyName "texture V World Size"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVWorldSize; // 0x314
	// MPropertyFriendlyName "texture V Scroll Rate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVScrollRate; // 0x318
	// MPropertyFriendlyName "texture V Offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVOffset; // 0x31c
	// MPropertyFriendlyName "texture V Params CP"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nTextureVParamsCP; // 0x320
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleU; // 0x324
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleV; // 0x328
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetU; // 0x32c
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetV; // 0x330
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bClampV; // 0x334
	// MPropertyFriendlyName "scale CP start"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP1; // 0x338
	// MPropertyFriendlyName "scale CP end"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP2; // 0x33c
	// MPropertyFriendlyName "scale V world size by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVSizeByControlPointDistance; // 0x340
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVScrollByControlPointDistance; // 0x344
	// MPropertyFriendlyName "scale V offset by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVOffsetByControlPointDistance; // 0x348
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bUseScalarForTextureCoordinate; // 0x34d
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Texture Coordinates"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x350
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScalarAttributeTextureCoordScale; // 0x354
	// MPropertyFriendlyName "orientation_type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nOrientationType; // 0x358
	// MPropertyFriendlyName "draw as opaque"
	// MDefaultString
	bool m_bDrawAsOpaque; // 0x35c
	// MPropertyFriendlyName "generate normals for cylinder"
	// MDefaultString
	bool m_bGenerateNormals; // 0x35d
	// MPropertyFriendlyName "reverse point order"
	// MDefaultString
	bool m_bReverseOrder; // 0x35e
	// MPropertyFriendlyName "scale factor to apply to input radius"
	// MDefaultString
	float m_flRadiusScale; // 0x360
	// MPropertyFriendlyName "Closed loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x364
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x368
};

// Aligment: 2
// Size: 240
class C_OP_FadeOutSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	// MDefaultString
	float m_flFadeOutTime; // 0xe0
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
};

// Aligment: 0
// Size: 224
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
};

// Aligment: 8
// Size: 256
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0xe0
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe4
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0xe8
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0xec
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0xf0
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf4
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf8
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	// MDefaultString
	bool m_bUseDeltaV; // 0xfc
};

// Aligment: 13
// Size: 368
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MDefaultString
	bool m_bUseAlphaTestWindow; // 0x130
	// MPropertyFriendlyName "projected texture light"
	// MDefaultString
	bool m_bUseTexture; // 0x131
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x134
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	float m_flAlphaScale; // 0x138
	// MPropertyFriendlyName "spotlight distance"
	// MDefaultString
	float m_flLightDistance; // 0x13c
	// MPropertyFriendlyName "light start falloff"
	// MDefaultString
	float m_flStartFalloff; // 0x140
	// MPropertyFriendlyName "spotlight distance falloff"
	// MDefaultString
	float m_flDistanceFalloff; // 0x144
	// MPropertyFriendlyName "spotlight FoV"
	// MDefaultString
	float m_flSpotFoV; // 0x148
	// MPropertyFriendlyName "color scale"
	// MPropertyColorWithNoAlpha
	// MDefaultString
	Color m_ColorScale; // 0x14c
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x15c
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x160
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x164
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hTexture; // 0x168
};

// Aligment: 0
// Size: 224
class C_OP_Decay : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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
// Size: 144
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x80
	float m_flRadius; // 0x8c
};

// Aligment: 0
// Size: 168
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

// Aligment: 0
// Size: 100
struct dynpitchvol_t : public dynpitchvol_base_t
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

// Aligment: 0
// Size: 8
class IDamageHandler
{
public:
// <no members described>
};

// Aligment: 3
// Size: 88
class CResponseQueue::CDeferredResponse
{
public:
	CResponseCriteriaSet m_contexts; // 0x10
	float m_fDispatchTime; // 0x48
	CHandle< CBaseEntity > m_hIssuer; // 0x4c
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
// Size: 168
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

// Aligment: 0
// Size: 272
struct GameFileWeaponInfo_t : public FileWeaponInfo_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 112
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60
};

// Aligment: 18
// Size: 928
class CBaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0xe0
	// MNetworkDisable
	float m_flGroundSpeed; // 0xe4
	// MNetworkDisable
	float m_flLastEventCycle; // 0xe8
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0xec
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0xf0
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x108
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x10c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x16c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x16d
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x170
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0x174
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x178
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x17c
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x180
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x184
	// MNetworkDisable
	CSequenceTransitioner2 m_SequenceTransitioner; // 0x198
};

// Aligment: 0
// Size: 128
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 120
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup, CAI_Expresser
{
public:
	bool m_bAllowMultipleScenes; // 0x70
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
	// MNetworkBitCount "3"
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

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 2
// Size: 4
struct cache_ragdoll_t
{
public:
	int16_t solidCount; // 0x0
	int16_t constraintCount; // 0x2
};

// Aligment: 2
// Size: 12
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4
	float m_maxInterval; // 0x8
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

// Aligment: 5
// Size: 184
class CRecipientFilter : public IRecipientFilter
{
public:
	NetChannelBufType_t m_nBufType; // 0x8
	bool m_bInitMessage; // 0xc
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
	bool m_bUsingPredictionRules; // 0xb0
	bool m_bIgnorePredictionCull; // 0xb1
};

// Aligment: 7
// Size: 512
class CModelState
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x178
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x1ec
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x1ed
	// MNetworkDisable
	bool m_bIsJiggleBonesEnabled; // 0x1ee
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x1ef
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

// Aligment: 8
// Size: 48
struct WeaponTextureData_t
{
public:
	CUtlString m_Name; // 0x0
	CUtlString m_Sprite; // 0x8
	CUtlString m_Font; // 0x10
	int32_t m_x; // 0x18
	int32_t m_y; // 0x1c
	int32_t m_width; // 0x20
	int32_t m_height; // 0x24
	int32_t m_FontCharacter; // 0x28
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

// Aligment: 2
// Size: 40
class CCopyRecipientFilter : public IRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
};

// Aligment: 14
// Size: 72
class CSoundParameters
{
public:
	int32_t channel; // 0x0
	float volume; // 0x4
	int32_t pitch; // 0x8
	int32_t pitchlow; // 0xc
	int32_t pitchhigh; // 0x10
	soundlevel_t soundlevel; // 0x14
	bool play_to_owner_only; // 0x18
	uint8_t m_nSpecialWaveFlags; // 0x19
	int32_t count; // 0x1c
	CUtlString soundname; // 0x20
	int32_t delay_msec; // 0x28
	KeyValues* m_pOperatorsKV; // 0x30
	int32_t m_nRandomSeed; // 0x38
	KeyValues* gameData; // 0x40
};

// Aligment: 0
// Size: 8
class IPhysicsPlayerController
{
public:
// <no members described>
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

// Aligment: 30
// Size: 272
struct FileWeaponInfo_t
{
public:
	bool m_bParsedScript; // 0x8
	bool m_bLoadedHudElements; // 0x9
	CUtlString m_szClassName; // 0x10
	CUtlString m_szPrintName; // 0x18
	CUtlString m_szViewModel; // 0x20
	CUtlString m_szWorldModel; // 0x28
	CUtlString m_szAnimationPrefix; // 0x30
	CUtlString m_szMuzzleFlashParticle; // 0x38
	CUtlString m_szTracerParticle; // 0x40
	int32_t m_iSlot; // 0x48
	int32_t m_iPosition; // 0x4c
	int32_t m_iMaxClip1; // 0x50
	int32_t m_iMaxClip2; // 0x54
	int32_t m_iDefaultClip1; // 0x58
	int32_t m_iDefaultClip2; // 0x5c
	int32_t m_iWeight; // 0x60
	int32_t m_iRumbleEffect; // 0x64
	bool m_bAutoSwitchTo; // 0x68
	bool m_bAutoSwitchFrom; // 0x69
	int32_t m_iFlags; // 0x6c
	CUtlString m_szAmmo1; // 0x70
	CUtlString m_szAmmo2; // 0x78
	CUtlString m_szAIAddOn; // 0x80
	bool m_bMeleeWeapon; // 0x88
	bool m_bBuiltRightHanded; // 0x89
	bool m_bAllowFlipping; // 0x8a
	int32_t m_iAmmoType; // 0x8c
	int32_t m_iAmmo2Type; // 0x90
	CUtlVector< WeaponTextureData_t > m_aTextureData; // 0x98
	CUtlVector< WeaponSoundData_t > m_aShootSounds; // 0xf8
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
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
};

// Aligment: 8
// Size: 64
class CNetworkedSequenceOperation
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
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

// Aligment: 1
// Size: 24
class CPlayerInfo : public IBotController
{
public:
	CBasePlayer* m_pParent; // 0x10
};

// Aligment: 1
// Size: 1008
class CBaseAnimatingOverlayController : public CBaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x3a0
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

// Aligment: 11
// Size: 1136
class CSkeletonInstance : public CGameSceneNode
{
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x170
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x370
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x371
	// MNetworkDisable
	bitfield:1 m_bDisableSolidCollisionsForHierarchy; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyMotionType; // 0x0
	// MNetworkDisable
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nHitboxSet; // 0x378
	// MNetworkDisable
	bool m_bEnableIK; // 0x3b8
	// MNetworkEnable
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x3bc
	// MNetworkEnable
	// MNetworkEnable
	CNetworkedIKContext m_NetworkedIKContext; // 0x3c0
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
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x18
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x1a
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x1c
	// MNetworkBitCount "3"
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

// Aligment: 3
// Size: 280
class CTimeOfDayDynamicValues
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUsed; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	float32[16] m_Floats; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	Vector[16] m_Vectors; // 0x54
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

// Aligment: 31
// Size: 352
class CGameSceneNode
{
public:
	// MNetworkDisable
	matrix3x4a_t m_mNodeToWorld; // 0x10
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x40
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x48
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x50
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "64"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xf8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "64"
	float m_flScale; // 0x104
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0x108
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0x114
	// MNetworkDisable
	float m_flAbsScale; // 0x120
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0x124
	// MNetworkDisable
	bool m_bDormant; // 0x126
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0x127
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
	uint8_t m_nHierarchicalDepth; // 0x12a
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0x12b
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x12c
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_name; // 0x130
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x140
	// MNetworkDisable
	float m_flZOffset; // 0x144
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x148
};

// Aligment: 2
// Size: 16
struct prevent_interaction_t
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x8
	float m_flUntilTime; // 0xc
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
// Size: 1
class CPhysicsComponent
{
public:
// <no members described>
};

// Aligment: 1
// Size: 80
class CNetworkTransmitComponent
{
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x3c
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

// Aligment: 14
// Size: 128
class CCommentarySystem
{
public:
	int32_t m_afPlayersLastButtons; // 0x14
	int32_t m_iCommentaryNodeCount; // 0x18
	bool m_bCommentaryConvarsChanging; // 0x1c
	int32_t m_iClearPressedButtons; // 0x20
	bool m_bCommentaryEnabledMidGame; // 0x24
	float m_flNextTeleportTime; // 0x28
	int32_t m_iTeleportStage; // 0x2c
	bool m_bCheatState; // 0x30
	bool m_bIsFirstSpawnGroupToLoad; // 0x31
	KeyValues* m_pkvSavedModifications; // 0x38
	CUtlVector< CHandle< CBaseEntity > > m_hSpawnedEntities; // 0x58
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x70
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x74
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x78
};

// Aligment: 2
// Size: 16
class CAI_MoveMonitor
{
public:
	Vector m_vMark; // 0x0
	float m_flMarkTolerance; // 0xc
};

// Aligment: 2
// Size: 16
struct WeaponSoundData_t
{
public:
	WeaponSound_t m_Type; // 0x0
	CUtlString m_Sound; // 0x8
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
	static int32_t &Get_m_nMapCycleTimeStamp() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_m_nMapCycleindex() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 168
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x88
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

// Aligment: 6
// Size: 96
class CAI_Expresser
{
public:
	float m_flStopTalkTime; // 0x40
	float m_flStopTalkTimeWithoutDelay; // 0x44
	float m_flBlockedTalkTime; // 0x48
	int32_t m_voicePitch; // 0x4c
	float m_flLastTimeAcceptedSpeak; // 0x50
	CBaseFlex* m_pOuter; // 0x58
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
// Size: 232
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

// Aligment: 2
// Size: 136
class CTimeOfDayDynamicKeys
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken[16] m_FloatIDs; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken[16] m_VectorIDs; // 0x48
};

// Aligment: 0
// Size: 8
class IBotController
{
public:
// <no members described>
};

// Aligment: 1
// Size: 152
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x90
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

// Aligment: 6
// Size: 176
struct handposepair_t
{
public:
	matrix3x4_t[2] m_matHandPoseOffset; // 0x0
	Vector[2] m_vExtentOrigin; // 0x60
	float32[5][2] m_flHandPoseParams; // 0x78
	CUtlSymbolLarge m_poseSequenceName; // 0xa0
	int32_t m_nUseRange; // 0xa8
	bool m_bHasExtent; // 0xac
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

// Aligment: 3
// Size: 48
class CHintMessage
{
public:
	char* m_hintString; // 0x8
	CUtlVector< char* > m_args; // 0x10
	float m_duration; // 0x28
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

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 0
// Size: 96
class CGameObjectView
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

// Aligment: 3
// Size: 48
class C_CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x8
	CUtlVector< CHintMessage* > m_messages; // 0x10
	C_BasePlayer* m_pPlayer; // 0x28
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

// Aligment: 0
// Size: 8
class C_SingleplayRules : public C_GameRules
{
public:
// <no members described>
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
// Size: 2112
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x7d8
};

// Aligment: 0
// Size: 2008
class CDCGBaseAnimatingController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
// <no members described>
};

// Aligment: 2
// Size: 824
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x330
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
	static float &Get_m_flVisibleBBoxMinHeight() { return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CProjectedTextureBase")->m_static_fiels[0]->m_instance); }
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

// Aligment: 22
// Size: 2008
class C_BaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x400
	// MNetworkDisable
	float m_flGroundSpeed; // 0x404
	// MNetworkDisable
	float m_flLastEventCycle; // 0x408
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x40c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x410
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x428
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x42c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x48c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x48d
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0x48e
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0x48f
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x490
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0x494
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x498
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x49c
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x4a0
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x4a4
	// MNetworkDisable
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x4b8
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x728
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x72c
};

// Aligment: 28
// Size: 464
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
	bool m_bInLanding; // 0x1b8
	float m_flLandingTime; // 0x1bc
	Vector m_vecClientBaseVelocity; // 0x1c0
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
struct C_CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 29
// Size: 560
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

// Aligment: 11
// Size: 152
class CDecalInfo
{
public:
	float m_flSpecExp; // 0x0
	float m_flAnimationScale; // 0x4
	float m_flAnimationLifeSpan; // 0x8
	float m_flPlaceTime; // 0xc
	float m_flFadeStartTime; // 0x10
	float m_flFadeDuration; // 0x14
	int32_t m_nVBSlot; // 0x18
	int32_t m_nBoneIndex; // 0x1c
	CDecalInfo* m_pNext; // 0x28
	CDecalInfo* m_pPrev; // 0x30
	int32_t m_nDecalMaterialIndex; // 0x90
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

// Aligment: 2
// Size: 8
struct C_CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 0
// Size: 32
class C_MultiplayRules : public C_GameRules
{
public:
// <no members described>
};

