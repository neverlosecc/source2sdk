#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: particles.dll
// Classes count: 489
// Enums count: 70
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

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
enum class ParticleFalloffFunction_t : uint32_t
{
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	PARTICLE_FALLOFF_LINEAR = 0x1,
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
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
// Size: 0x3
enum class ClosestPointTestType_t : uint32_t
{
	PARTICLE_CLOSEST_TYPE_BOX = 0x0,
	PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
	PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
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
// Size: 0x2
enum class ParticleHitboxBiasType_t : uint32_t
{
	PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
	PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
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
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class SpriteCardShaderType_t : uint32_t
{
	SPRITECARD_SHADER_BASE = 0x0,
	SPRITECARD_SHADER_CUSTOM = 0x1,
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
enum class ParticleTraceSet_t : uint32_t
{
	PARTICLE_TRACE_SET_ALL = 0x0,
	PARTICLE_TRACE_SET_STATIC = 0x1,
	PARTICLE_TRACE_SET_DYNAMIC = 0x2,
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
// Size: 0x4
enum class DetailCombo_t : uint32_t
{
	DETAIL_COMBO_OFF = 0x0,
	DETAIL_COMBO_ADD = 0x1,
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_COMBO_MOD2X = 0x3,
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
// Size: 0x4
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
	MISSING_PARENT_SAME_INDEX = 0x2,
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
enum class ParticleSelection_t : uint32_t
{
	PARTICLE_SELECTION_FIRST = 0x0,
	PARTICLE_SELECTION_LAST = 0x1,
	PARTICLE_SELECTION_NUMBER = 0x2,
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
// Size: 0x3
enum class ParticleDirectionNoiseType_t : uint32_t
{
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	PARTICLE_DIR_NOISE_CURL = 0x1,
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
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
// Size: 0x3
enum class ParticleEndcapMode_t : uint32_t
{
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
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
// Size: 0x2
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	LIGHT_STYLE_OLD = 0x0,
	LIGHT_STYLE_NEW = 0x1,
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
// Size: 0x2
enum class ParticleOrientationSetMode_t : uint32_t
{
	PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
	PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ParticleLightnintBranchBehavior_t : uint32_t
{
	PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
	PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
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
// Size: 0x3
enum class ParticleSequenceCropOverride_t : uint32_t
{
	PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffffffffffff,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
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
enum class MaterialProxyType_t : uint32_t
{
	MATERIAL_PROXY_STATUS_EFFECT = 0x0,
	MATERIAL_PROXY_TINT = 0x1,
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
enum class ParticleAlphaReferenceType_t : uint32_t
{
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
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
// Size: 0x2
enum class ParticleLightUnitChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
	PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ParticleOmni2LightTypeChoiceList_t : uint32_t
{
	PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1,
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
// Size: 0x3
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
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
// Size: 0x2
enum class ParticleSortingChoiceList_t : uint32_t
{
	PARTICLE_SORTING_NEAREST = 0x0,
	PARTICLE_SORTING_CREATION_TIME = 0x1,
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
// Size: 0x3
enum class ParticleFogType_t : uint32_t
{
	PARTICLE_FOG_GAME_DEFAULT = 0x0,
	PARTICLE_FOG_ENABLED = 0x1,
	PARTICLE_FOG_DISABLED = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class TextureRepetitionMode_t : uint32_t
{
	TEXTURE_REPETITION_PARTICLE = 0x0,
	TEXTURE_REPETITION_PATH = 0x1,
};

// Alignment: 2
// Size: 0x24
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
	SET_VAR_REG_BOOL = 0xd,
	SET_VAR_REG_INT = 0xe,
	SET_VAR_REG_FLOAT = 0xf,
	SET_VAR_REG_STR = 0x10,
	SET_VAR_REG_EHANDLE = 0x11,
	SET_VAR_REG_SNDEVT_GUID = 0x12,
	SET_VAR_REG_VEC3 = 0x13,
	GET_VAR_REG_BOOL = 0x14,
	GET_VAR_REG_INT = 0x15,
	GET_VAR_REG_FLOAT = 0x16,
	GET_VAR_REG_STR = 0x17,
	GET_VAR_REG_EHANDLE = 0x18,
	GET_VAR_REG_SNDEVT_GUID = 0x19,
	GET_VAR_REG_VEC3 = 0x1a,
	SET_REGISTER_LIT_BOOL = 0x1b,
	SET_REGISTER_LIT_INT = 0x1c,
	SET_REGISTER_LIT_FLOAT = 0x1d,
	SET_REGISTER_LIT_STR = 0x1e,
	SET_REGISTER_LIT_INVAL_EHANDLE = 0x1f,
	SET_REGISTER_LIT_INVAL_SNDEVT_GUID = 0x20,
	SET_REGISTER_LIT_VEC3 = 0x21,
	SET_REGISTER_DOMAIN_VALUE = 0x22,
	COUNT = 0x23,
};

// Alignment: 4
// Size: 0x2
enum class PulseMethodCallMode_t : uint32_t
{
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	ASYNC_FIRE_AND_FORGET = 0x1,
};

// Alignment: 4
// Size: 0xd
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
	PVAL_CURSOR_FLOW = 0x9,
	PVAL_ANY = 0xa,
	PVAL_COUNT = 0xb,
};

// Alignment: 4
// Size: 0x16
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
	PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xa,
	PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xb,
	PF_TYPE_PARTICLE_NOISE = 0xc,
	PF_TYPE_PARTICLE_AGE = 0xd,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0xe,
	PF_TYPE_PARTICLE_FLOAT = 0xf,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x10,
	PF_TYPE_PARTICLE_SPEED = 0x11,
	PF_TYPE_PARTICLE_NUMBER = 0x12,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x13,
	PF_TYPE_COUNT = 0x14,
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
enum class PFNoiseType_t : uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
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
// Size: 0x4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
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
// Size: 0x11
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
	PVEC_TYPE_COUNT = 0xf,
};

struct ParticleAttributeIndex_t;
struct ParticlePreviewState_t;
struct CParticleCollectionFloatInput;
struct CParticleVisibilityInputs;
struct CParticleCollectionRendererFloatInput;
struct TextureControls_t;
struct CParticleCollectionRendererVecInput;
struct CParticleCollectionVecInput;
struct CParticleTransformInput;
struct PulseRuntimeRegisterIndex_t;
struct PulseRegisterMap_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeChunkIndex_t;
struct PulseDocNodeID_t;
struct PulseRuntimeVarIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseRuntimeOutputIndex_t;
struct CPulse_ResumePoint;
struct CPulse_OutflowConnection;
struct CParticleFloatInput;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CPerParticleFloatInput;
struct CPathParameters;
struct CPerParticleVecInput;
struct CRandomNumberGeneratorParameters;
struct CParticleRemapFloatInput;
struct ControlPointReference_t;
struct CParticleModelInput;

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

// Alignment: 1
// Size: 0x4
struct ParticleAttributeIndex_t
{
public:
	int32_t m_Value; // 0x0	
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

// Alignment: 2
// Size: 0x10
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0	
	int32_t m_nValue; // 0x8	
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
// Size: 0x78
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
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

// Alignment: 0
// Size: 0x8
class IControlPointEditorData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
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
// Size: 0x4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0	
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

// Alignment: 1
// Size: 0x18
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	float m_flTimeDuration; // 0x14	
};

// Alignment: 3
// Size: 0x10
struct ParticleNamedValueSource_t
{
public:
	CUtlString m_Name; // 0x0	
	// MPropertyAttributeChoiceName "particlefield_namedvaluetype"
	PulseValueType_t m_Type; // 0x8	
	bool m_IsPublic; // 0xc	
};

// Alignment: 63
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
	// MPropertyFriendlyName "Variables"
	// MPropertySuppressExpr "!m_bEnableNamedValues"
	CUtlVector< ParticleNamedValueSource_t > m_NamedValueLocals; // 0x248	
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
private:
	[[maybe_unused]] uint8_t __pad030e[0x2]; // 0x30e
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
	[[maybe_unused]] uint8_t __pad0329[0x3f]; // 0x329
public:
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x368	
};

// Alignment: 44
// Size: 0x140
class CParticleFloatInput
{
public:
	ParticleFloatType_t m_nType; // 0x0	
	ParticleFloatMapType_t m_nMapType; // 0x4	
	float m_flLiteralValue; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CKV3MemberNameWithStorage m_NamedValue; // 0x10	
	int32_t m_nControlPoint; // 0x48	
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x4c	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x50	
	int32_t m_nVectorComponent; // 0x54	
	float m_flRandomMin; // 0x58	
	float m_flRandomMax; // 0x5c	
	bool m_bHasRandomSignFlip; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	ParticleFloatRandomMode_t m_nRandomMode; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	float m_flLOD0; // 0x6c	
	float m_flLOD1; // 0x70	
	float m_flLOD2; // 0x74	
	float m_flLOD3; // 0x78	
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x7c	
	float m_flNoiseOutputMin; // 0x80	
	float m_flNoiseOutputMax; // 0x84	
	float m_flNoiseScale; // 0x88	
	Vector m_vecNoiseOffsetRate; // 0x8c	
	float m_flNoiseOffset; // 0x98	
	int32_t m_nNoiseOctaves; // 0x9c	
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xa0	
	PFNoiseType_t m_nNoiseType; // 0xa4	
	PFNoiseModifier_t m_nNoiseModifier; // 0xa8	
	float m_flNoiseTurbulenceScale; // 0xac	
	float m_flNoiseTurbulenceMix; // 0xb0	
	float m_flNoiseImgPreviewScale; // 0xb4	
	bool m_bNoiseImgPreviewLive; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x8]; // 0xb9
public:
	bool m_bUseBoundsCenter; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	ParticleFloatInputMode_t m_nInputMode; // 0xc4	
	float m_flMultFactor; // 0xc8	
	float m_flInput0; // 0xcc	
	float m_flInput1; // 0xd0	
	float m_flOutput0; // 0xd4	
	float m_flOutput1; // 0xd8	
	float m_flNotchedRangeMin; // 0xdc	
	float m_flNotchedRangeMax; // 0xe0	
	float m_flNotchedOutputOutside; // 0xe4	
	float m_flNotchedOutputInside; // 0xe8	
	ParticleFloatBiasType_t m_nBiasType; // 0xec	
	float m_flBiasParameter; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f4[0x4]; // 0xf4
public:
	CPiecewiseCurve m_Curve; // 0xf8	
};

// Alignment: 0
// Size: 0x140
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x210
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
	ParticleEndcapMode_t m_nOpEndCapState; // 0x148	
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x14c	
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0x150	
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x154	
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x158	
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x15c	
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x160	
private:
	[[maybe_unused]] uint8_t __pad0161[0x3]; // 0x161
public:
	// MPropertyStartGroup "Operator Fade Time Offset"
	// MPropertyFriendlyName "operator fade time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x164	
	// MPropertyFriendlyName "operator fade time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x168	
	// MPropertyFriendlyName "operator fade time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x16c	
	// MPropertyStartGroup "Operator Fade Timescale Modifiers"
	// MPropertyFriendlyName "operator fade time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x170	
	// MPropertyFriendlyName "operator fade time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x174	
	// MPropertyFriendlyName "operator fade time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x178	
private:
	[[maybe_unused]] uint8_t __pad017c[0x1]; // 0x17c
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x17d	
private:
	[[maybe_unused]] uint8_t __pad017e[0x2]; // 0x17e
public:
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x180	
};

// Alignment: 0
// Size: 0x210
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class CParticleFunctionForce : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class CParticleFunctionOperator : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x220
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x210	
};

// Alignment: 3
// Size: 0x260
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x210	
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x254	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x255	
};

// Alignment: 0
// Size: 0x140
class CParticleCollectionRendererFloatInput : public CParticleCollectionFloatInput
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x8e0
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x140	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x280	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x3c0	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x500	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionRendererFloatInput m_flZoomScale; // 0x640	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionRendererFloatInput m_flDistortion; // 0x780	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x8c0	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x8c1	
private:
	[[maybe_unused]] uint8_t __pad08c2[0x2]; // 0x8c2
public:
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x8c4	
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x8c8	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x8cc	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x8d0	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x8d4	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x8d8	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x8dc	
};

// Alignment: 22
// Size: 0x5e8
class CParticleVecInput
{
public:
	ParticleVecType_t m_nType; // 0x0	
	Vector m_vLiteralValue; // 0x4	
	Color m_LiteralColor; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CKV3MemberNameWithStorage m_NamedValue; // 0x18	
	bool m_bFollowNamedValue; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x54	
	Vector m_vVectorAttributeScale; // 0x58	
	int32_t m_nControlPoint; // 0x64	
	Vector m_vCPValueScale; // 0x68	
	Vector m_vCPRelativePosition; // 0x74	
	Vector m_vCPRelativeDir; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CParticleFloatInput m_FloatComponentX; // 0x90	
	CParticleFloatInput m_FloatComponentY; // 0x1d0	
	CParticleFloatInput m_FloatComponentZ; // 0x310	
	CParticleFloatInput m_FloatInterp; // 0x450	
	float m_flInterpInput0; // 0x590	
	float m_flInterpInput1; // 0x594	
	Vector m_vInterpOutput0; // 0x598	
	Vector m_vInterpOutput1; // 0x5a4	
	CColorGradient m_Gradient; // 0x5b0	
	Vector m_vRandomMin; // 0x5c8	
	Vector m_vRandomMax; // 0x5d4	
};

// Alignment: 0
// Size: 0x5e8
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x148
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInput; // 0x8	
};

// Alignment: 0
// Size: 0x5e8
class CParticleCollectionRendererVecInput : public CParticleCollectionVecInput
{
public:
	// No members available
};

// Alignment: 8
// Size: 0x50
class CParticleTransformInput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x4]; // 0x0
public:
	ParticleTransformType_t m_nType; // 0x4	
	CKV3MemberNameWithStorage m_NamedValue; // 0x8	
	bool m_bFollowNamedValue; // 0x40	
	bool m_bSupportsDisabled; // 0x41	
	bool m_bUseOrientation; // 0x42	
private:
	[[maybe_unused]] uint8_t __pad0043[0x1]; // 0x43
public:
	int32_t m_nControlPoint; // 0x44	
	int32_t m_nControlPointRangeMax; // 0x48	
	float m_flEndCPGrowthTime; // 0x4c	
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
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

// Alignment: 2
// Size: 0x10
class CPulse_PublicOutput
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
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

// Alignment: 1
// Size: 0x4
struct PulseRuntimeChunkIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseDocNodeID_t
{
public:
	int32_t m_Value; // 0x0	
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

// Alignment: 0
// Size: 0xd0
class CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xd0]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCellIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeCallInfoIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeVarIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeOutputIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 1
// Size: 0x2
struct PulseRuntimeStateOffset_t
{
public:
	uint16_t m_Value; // 0x0	
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

// Alignment: 2
// Size: 0x20
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	KeyValues3 m_Outparams; // 0x10	
};

// Alignment: 1
// Size: 0x4
struct PulseRuntimeInvokeIndex_t
{
public:
	int32_t m_Value; // 0x0	
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

// Alignment: 1
// Size: 0x4
struct PulseRuntimeEntrypointIndex_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 5
// Size: 0x38
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c	
	int32_t m_nSrcInstruction; // 0x30	
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

// Alignment: 3
// Size: 0x10
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
};

// Alignment: 0
// Size: 0x10
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseFlow : public CPulseCell_Base
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

// Alignment: 10
// Size: 0x138
class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_MethodName; // 0x70	
	CUtlString m_Description; // 0x78	
	bool m_bIsPublic; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x7]; // 0x81
public:
	// MFgdFromSchemaCompletelySkipField
	CPulseValueFullType m_ReturnType; // 0x88	
	CKV3MemberNameWithStorage m_Arg0Name; // 0x98	
	CUtlString m_Arg0Description; // 0xd0	
	// MFgdFromSchemaCompletelySkipField
	CPulseValueFullType m_Arg0Type; // 0xd8	
	CKV3MemberNameWithStorage m_Arg1Name; // 0xe8	
	CUtlString m_Arg1Description; // 0x120	
	// MFgdFromSchemaCompletelySkipField
	CPulseValueFullType m_Arg1Type; // 0x128	
};

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_EventName; // 0x70	
};

// Alignment: 1
// Size: 0x78
class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_HookName; // 0x70	
};

// Alignment: 4
// Size: 0x98
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	// MFgdFromSchemaCompletelySkipField
	CUtlSymbolLarge m_SourceEntity; // 0x70	
	// MFgdFromSchemaCompletelySkipField
	CUtlSymbolLarge m_SourceOutput; // 0x78	
	// MFgdFromSchemaCompletelySkipField
	CUtlSymbolLarge m_TargetInput; // 0x80	
	// MFgdFromSchemaCompletelySkipField
	CPulseValueFullType m_ExpectedParamType; // 0x88	
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_BaseValue : public CPulseCell_Base
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x68
class CPulseCell_Value_Expression : public CPulseCell_BaseValue
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

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

// Alignment: 1
// Size: 0x58
class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_StringSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 2
// Size: 0x70
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x58	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 1
// Size: 0x4
struct CPulseCell_Outflow_CycleOrdered__InstanceState_t
{
public:
	int32_t m_nNextIndex; // 0x0	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Alignment: 2
// Size: 0x28
struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
{
public:
	CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0	
	int32_t m_nNextShuffle; // 0x20	
};

// Alignment: 1
// Size: 0x60
class CPulseCell_Outflow_SimultaneousParallel : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
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

// Alignment: 0
// Size: 0x48
class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue
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

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xc0
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseFlow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CKV3MemberNameWithStorage m_Arg0Name; // 0x50	
	CKV3MemberNameWithStorage m_Arg1Name; // 0x88	
};

// Alignment: 1
// Size: 0x4
struct PulseTestEHandle_t
{
public:
	int32_t m_Value; // 0x0	
};

// Alignment: 5
// Size: 0x108
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
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("particles.dll")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x48
class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow
{
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
class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue
{
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

// Alignment: 0
// Size: 0x108
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	// No members available
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

// Alignment: 0
// Size: 0x48
class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow
{
public:
	// No members available
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
class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xf0
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
class CPulseTurtleGraphicsLib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 1
// Size: 0x220
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Emitter Index"
	int32_t m_nEmitterIndex; // 0x210	
};

// Alignment: 0
// Size: 0x140
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x220
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Associated emitter Index"
	int32_t m_nAssociatedEmitterIndex; // 0x210	
};

// Alignment: 9
// Size: 0xa58
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
	TextureControls_t m_TextureControls; // 0x178	
};

// Alignment: 0
// Size: 0x140
class CParticleRemapFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 61
// Size: 0x2270
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x260	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x3a0	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRollScale; // 0x4e0	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0624[0x4]; // 0x624
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionRendererVecInput m_vecColorScale; // 0x628	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xc10	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xc14	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xc18	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xc20	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xd60	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xea0	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xea4	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xea8	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xec0	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xec4	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xec8	
private:
	[[maybe_unused]] uint8_t __pad0ec9[0x7]; // 0xec9
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xed0	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x1010	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x1150	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x1154	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1158	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x115c	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x115d	
private:
	[[maybe_unused]] uint8_t __pad115e[0x2]; // 0x115e
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1160	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flDesaturation; // 0x12a0	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x13e0	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1520	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1524	
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1528	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x1668	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x1669	
private:
	[[maybe_unused]] uint8_t __pad166a[0x2]; // 0x166a
public:
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x166c	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1670	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1674	
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x1678	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x17b8	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x18f8	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1a38	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1a39	
private:
	[[maybe_unused]] uint8_t __pad1a3a[0x6]; // 0x1a3a
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1a40	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1b80	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1b84	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1b88	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1b89	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1b8a	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x1b8b	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x1b8c	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1c0c	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x1c0d	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1c8d	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1c8e	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1c8f	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1c90	
private:
	[[maybe_unused]] uint8_t __pad1c91[0x3]; // 0x1c91
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1c94	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1c98	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x1dd8	
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x1f18	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x2058	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x205c	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x2060	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x2061	
};

// Alignment: 3
// Size: 0x48
class CParticleModelInput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x4]; // 0x0
public:
	ParticleModelType_t m_nType; // 0x4	
	CKV3MemberNameWithStorage m_NamedValue; // 0x8	
	int32_t m_nControlPoint; // 0x40	
};

// Alignment: 22
// Size: 0x1330
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x260	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x3a0	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4e0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xad0	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0adc[0x4]; // 0xadc
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xae0	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xc20	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xd60	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xea0	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xfe0	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1120	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x1260	
private:
	[[maybe_unused]] uint8_t __pad1261[0x3]; // 0x1261
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x1264	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x1268	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x126c	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x1270	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x1274	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x1278	
private:
	[[maybe_unused]] uint8_t __pad127c[0x4]; // 0x127c
public:
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LightingTransform; // 0x1280	
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x12d0	
private:
	[[maybe_unused]] uint8_t __pad12e8[0x18]; // 0x12e8
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x1300	
};

// Alignment: 0
// Size: 0x5e8
class CPerParticleVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x5f0
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8	
};

// Alignment: 27
// Size: 0x2910
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2270	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x23b0	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x23b4	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x23b8	
private:
	[[maybe_unused]] uint8_t __pad23b9[0x3]; // 0x23b9
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x23bc	
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x23c0	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x23c4	
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x23c8	
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2508	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2648	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x264c	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x2650	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x2651	
private:
	[[maybe_unused]] uint8_t __pad2652[0x2]; // 0x2652
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x2654	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x2658	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x265c	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x265d	
private:
	[[maybe_unused]] uint8_t __pad2661[0x3]; // 0x2661
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x2664	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x2668	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x266c	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x2670	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x2674	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x2678	
private:
	[[maybe_unused]] uint8_t __pad267c[0x4]; // 0x267c
public:
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x2680	
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x27c0	
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	bool m_bParticleShadows; // 0x2900	
private:
	[[maybe_unused]] uint8_t __pad2901[0x3]; // 0x2901
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x2904	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Alignment: 1
// Size: 0x4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0	
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

// Alignment: 0
// Size: 0x108
class CParticleCollectionBindingInstance : public CBasePulseGraphInstance
{
public:
	// No members available
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
		uint256_t __pad0: 179;
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

// Alignment: 5
// Size: 0x4b0
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x210	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x350	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x490	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x494	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x4a0	
};

// Alignment: 2
// Size: 0x490
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x350	
};

// Alignment: 2
// Size: 0x490
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x210	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x350	
};

// Alignment: 8
// Size: 0x270
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x210	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x214	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x218	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x21c	
	CPathParameters m_PathParameters; // 0x220	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x260	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x264	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x268	
};

// Alignment: 5
// Size: 0x240
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x210	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x214	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x218	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad021d[0x3]; // 0x21d
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x220	
};

// Alignment: 7
// Size: 0x4b0
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x210	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x21c	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x228	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x22c	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x22d	
private:
	[[maybe_unused]] uint8_t __pad022e[0x2]; // 0x22e
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x230	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x370	
};

// Alignment: 0
// Size: 0x210
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// No members available
};

// Alignment: 26
// Size: 0x920
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x210	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x214	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x220	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x224	
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x228	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x22c	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x2ac	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x2ad	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x2ae	
private:
	[[maybe_unused]] uint8_t __pad02af[0x1]; // 0x2af
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x2b0	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x2b4	
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x2b8	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x2bc	
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x2c0	
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x2c4	
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x2c8	
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x408	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x548	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x688	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x7c8	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x7c9	
private:
	[[maybe_unused]] uint8_t __pad07ca[0x2]; // 0x7ca
public:
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x7cc	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x7d4	
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x7d8	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x918	
};

// Alignment: 4
// Size: 0x230
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	Vector m_vecMin; // 0x210	
	// MPropertyFriendlyName "max coords"
	Vector m_vecMax; // 0x21c	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x228	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x22c	
};

// Alignment: 5
// Size: 0x720
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x210	
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x350	
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x490	
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d4[0x4]; // 0x5d4
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5d8	
};

// Alignment: 5
// Size: 0xd00
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x210	
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x350	
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x490	
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x5d0	
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x710	
};

// Alignment: 2
// Size: 0x220
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x210	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x214	
};

// Alignment: 11
// Size: 0xc80
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x220	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x270	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x3b0	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4f0	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x630	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x770	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x8b0	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0x9f0	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xb30	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xc70	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xc71	
};

// Alignment: 7
// Size: 0x240
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x224	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x228	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x22c	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x230	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x234	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x238	
};

// Alignment: 10
// Size: 0x780
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x220	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x224	
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x228	
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x278	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x3b8	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x4f8	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x638	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x778	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x779	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x77a	
};

// Alignment: 14
// Size: 0x250
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x224	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x228	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x22c	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x230	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x234	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x238	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x23c	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x240	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x244	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x248	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x24c	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x24d	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x24e	
};

// Alignment: 12
// Size: 0xfd0
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x224	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x228	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x22c	
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x230	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0x818	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0x81c	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x820	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xe08	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xe88	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0xe89	
private:
	[[maybe_unused]] uint8_t __pad0e8a[0x6]; // 0xe8a
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0xe90	
};

// Alignment: 14
// Size: 0x1250
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x220	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x224	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x228	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x230	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x370	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x958	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xf40	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xf44	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xf45	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xf46	
private:
	[[maybe_unused]] uint8_t __pad0fc6[0x2]; // 0xfc6
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xfc8	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1108	
};

// Alignment: 9
// Size: 0x9e0
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x224	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x228	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x810	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x890	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x891	
private:
	[[maybe_unused]] uint8_t __pad0892[0x2]; // 0x892
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x894	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x898	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0x9d8	
};

// Alignment: 9
// Size: 0x9f0
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x224	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x230	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x818	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x824	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x825	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x826	
private:
	[[maybe_unused]] uint8_t __pad08a6[0x2]; // 0x8a6
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x8a8	
};

// Alignment: 14
// Size: 0x1950
class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x220	
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x360	
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x4a0	
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0xa88	
private:
	[[maybe_unused]] uint8_t __pad0a94[0x4]; // 0xa94
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0xa98	
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0xae8	
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0xc28	
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0xd68	
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0xd6c	
private:
	[[maybe_unused]] uint8_t __pad0d6d[0x3]; // 0xd6d
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d74[0x4]; // 0xd74
public:
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xd78	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1360	
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1948	
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x194c	
};

// Alignment: 5
// Size: 0xe00
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x220	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x808	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xdf0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xdf4	
private:
	[[maybe_unused]] uint8_t __pad0df5[0x3]; // 0xdf5
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xdf8	
};

// Alignment: 10
// Size: 0x9b0
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x220	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x360	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x4a0	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x5e0	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x720	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x860	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x9a0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9a4	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x9a5	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x9a6	
};

// Alignment: 6
// Size: 0xe50
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x220	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x808	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xdf0	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xe40	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xe41	
private:
	[[maybe_unused]] uint8_t __pad0e42[0x2]; // 0xe42
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xe44	
};

// Alignment: 3
// Size: 0x230
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x220	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x224	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x228	
};

// Alignment: 13
// Size: 0x550
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x220	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x360	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x4a0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0xc]; // 0x524
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x530	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x534	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x535	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x536	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x537	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x53c	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x540	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x544	
};

// Alignment: 3
// Size: 0x230
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x220	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x224	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x228	
};

// Alignment: 7
// Size: 0x1090
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x228	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x368	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x4a8	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xa90	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad1079[0x3]; // 0x1079
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x107c	
};

// Alignment: 10
// Size: 0x1810
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x220	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x22c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x238	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x820	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x960	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xf48	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x1530	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1670	
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleTransformInputOptional
	CParticleTransformInput m_TransformInput; // 0x17b0	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1800	
};

// Alignment: 5
// Size: 0x2b0
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x220	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x224	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x228	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x22c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x2ac	
};

// Alignment: 5
// Size: 0x240
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x224	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x228	
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad0238[0x1]; // 0x238
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x239	
};

// Alignment: 3
// Size: 0x230
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x220	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x224	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x228	
};

// Alignment: 4
// Size: 0x230
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x220	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x224	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x228	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x22c	
};

// Alignment: 4
// Size: 0x250
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x220	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x22c	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x238	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x23c	
};

// Alignment: 4
// Size: 0x230
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x220	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x224	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x22c	
};

// Alignment: 6
// Size: 0x260
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x22c	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x230	
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x234	
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x240	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x24c	
};

// Alignment: 3
// Size: 0x230
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x220	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x224	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x228	
};

// Alignment: 3
// Size: 0x230
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x220	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x224	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x228	
};

// Alignment: 4
// Size: 0x240
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x224	
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x8]; // 0x22c
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x234	
};

// Alignment: 6
// Size: 0x240
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x224	
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x228	
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x22c	
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x230	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x234	
};

// Alignment: 0
// Size: 0x240
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x230
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x220	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x228	
};

// Alignment: 0
// Size: 0x240
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x240
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 10
// Size: 0x270
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0220[0x1c]; // 0x220
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x23c	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x240	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x244	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x248	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x24c	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x250	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x254	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x258	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x25c	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x260	
};

// Alignment: 7
// Size: 0x260
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0220[0x18]; // 0x220
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x238	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x23c	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x240	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x244	
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x248	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x24c	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x250	
};

// Alignment: 3
// Size: 0x230
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x220	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x224	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x228	
};

// Alignment: 5
// Size: 0x250
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x220	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x224	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x228	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x229	
private:
	[[maybe_unused]] uint8_t __pad022a[0x6]; // 0x22a
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x230	
};

// Alignment: 4
// Size: 0x240
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x220	
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x224	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x228	
};

// Alignment: 3
// Size: 0x430
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MPropertySuppressExpr "mod != dota"
	char m_ActivityName[256]; // 0x220	
	// MPropertyFriendlyName "sequence"
	// MPropertySuppressExpr "mod == dota"
	char m_SequenceName[256]; // 0x320	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x420	
};

// Alignment: 1
// Size: 0x810
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x220	
};

// Alignment: 10
// Size: 0xe10
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x220	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x808	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xdf0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xdf4	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xdf8	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xdfc	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xe00	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xe04	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xe08	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xe09	
};

// Alignment: 6
// Size: 0x390
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x220	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x22c	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x238	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x378	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x37c	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x380	
};

// Alignment: 10
// Size: 0x250
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x224	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x225	
private:
	[[maybe_unused]] uint8_t __pad0226[0x2]; // 0x226
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x228	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x22c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x230	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x234	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x238	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x23c	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x248	
};

// Alignment: 5
// Size: 0x290
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0xc]; // 0x224
public:
	CPathParameters m_PathParams; // 0x230	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x270	
private:
	[[maybe_unused]] uint8_t __pad0271[0x3]; // 0x271
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x274	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x280	
};

// Alignment: 7
// Size: 0x870
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x220	
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x360	
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x4a0	
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x5e0	
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x720	
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x860	
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x864	
};

// Alignment: 11
// Size: 0x250
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x228	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x22c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x230	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x234	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x238	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x23c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x240	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0245[0x3]; // 0x245
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x248	
};

// Alignment: 12
// Size: 0x250
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x224	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x228	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x22c	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x23c	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x240	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x241	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x242	
private:
	[[maybe_unused]] uint8_t __pad0243[0x1]; // 0x243
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x244	
};

// Alignment: 4
// Size: 0x270
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x250	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x258	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x260	
	bool m_bModelFromRenderer; // 0x268	
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x230
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x224	
};

// Alignment: 5
// Size: 0x240
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x220	
	// MPropertyFriendlyName "comparison control point number"
	int32_t m_nControlPointCompare; // 0x224	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nControlPointLocal; // 0x228	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x22c	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x230	
};

// Alignment: 8
// Size: 0x250
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x220	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x224	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x228	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x22c	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x230	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x234	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x238	
};

// Alignment: 1
// Size: 0x230
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x220	
};

// Alignment: 12
// Size: 0x270
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x228	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x22c	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x230	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x23c	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x248	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x24c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x250	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x254	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad0259[0x3]; // 0x259
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x25c	
};

// Alignment: 5
// Size: 0x250
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x228	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x234	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x240	
};

// Alignment: 6
// Size: 0x500
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x220	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x360	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x4a0	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x4a1	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x4a2	
private:
	[[maybe_unused]] uint8_t __pad04a3[0xd]; // 0x4a3
public:
	CPathParameters m_PathParams; // 0x4b0	
};

// Alignment: 6
// Size: 0x270
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x220	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x224	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x228	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x229	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x22a	
private:
	[[maybe_unused]] uint8_t __pad022b[0x5]; // 0x22b
public:
	CPathParameters m_PathParams; // 0x230	
};

// Alignment: 13
// Size: 0x2e0
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x220	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2a0	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x2a4	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x2b0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x2bc	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x2c0	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x2c1	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x2c2	
private:
	[[maybe_unused]] uint8_t __pad02c3[0x1]; // 0x2c3
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x2c4	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x2c8	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x2c9	
private:
	[[maybe_unused]] uint8_t __pad02ca[0x2]; // 0x2ca
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x2cc	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x2d0	
};

// Alignment: 1
// Size: 0x230
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x220	
};

// Alignment: 2
// Size: 0x230
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x220	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x224	
};

// Alignment: 11
// Size: 0x250
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x228	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x23c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x240	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x244	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x248	
};

// Alignment: 13
// Size: 0x310
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x224	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0254[0x4]; // 0x254
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x258	
	// MPropertyFriendlyName "local space transform"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x2a8	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x2f8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x2fc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x300	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x304	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x305	
private:
	[[maybe_unused]] uint8_t __pad0306[0x2]; // 0x306
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x308	
};

// Alignment: 9
// Size: 0x250
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x220	
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x224	
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x228	
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x22c	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x230	
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x234	
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x238	
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x23c	
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x240	
};

// Alignment: 5
// Size: 0x240
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x220	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x224	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0229[0x3]; // 0x229
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x22c	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x230	
};

// Alignment: 5
// Size: 0x240
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x220	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x228	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x230	
};

// Alignment: 4
// Size: 0x370
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x220	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x224	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x230	
};

// Alignment: 15
// Size: 0x920
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x228	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x368	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x4a8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5e8	
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
	float m_flLOSScale; // 0x8f8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x8fc	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0901[0x3]; // 0x901
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x904	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x910	
};

// Alignment: 8
// Size: 0x2e0
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x220	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x22c	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x230	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x234	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad023c[0x4]; // 0x23c
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x240	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2c0	
private:
	[[maybe_unused]] uint8_t __pad02c4[0xc]; // 0x2c4
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x2d0	
};

// Alignment: 3
// Size: 0x240
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x220	
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad0238[0x1]; // 0x238
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x239	
};

// Alignment: 5
// Size: 0x2b0
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x224	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x225	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x226	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x227	
};

// Alignment: 3
// Size: 0x370
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x228	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x368	
};

// Alignment: 3
// Size: 0x370
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x228	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x368	
};

// Alignment: 1
// Size: 0x360
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x220	
};

// Alignment: 8
// Size: 0x2d0
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x220	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x22c	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x238	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x239	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x23a	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x23b	
private:
	[[maybe_unused]] uint8_t __pad02bb[0x1]; // 0x2bb
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x2bc	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x2c0	
};

// Alignment: 2
// Size: 0x230
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x224	
};

// Alignment: 5
// Size: 0x240
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x220	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x22c	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x238	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x23c	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x23d	
};

// Alignment: 10
// Size: 0x250
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x224	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x228	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x22c	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x230	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x234	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x238	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x23c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x240	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x244	
};

// Alignment: 9
// Size: 0x380
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x224	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x228	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x22c	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x230	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x6]; // 0x232
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x238	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x378	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x37c	
};

// Alignment: 17
// Size: 0x260
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x220	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x224	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0229[0x3]; // 0x229
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x22c	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x230	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x231	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x232	
private:
	[[maybe_unused]] uint8_t __pad0233[0x1]; // 0x233
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x234	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x238	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x23c	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	int32_t m_nFullLoopIncrement; // 0x240	
	// MPropertyFriendlyName "Snapshot start point"
	int32_t m_nSnapShotStartPoint; // 0x244	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x248	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x24c	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x250	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x251	
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x252	
};

// Alignment: 1
// Size: 0x2b0
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x220	
};

// Alignment: 5
// Size: 0x820
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x224	
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x228	
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x230	
};

// Alignment: 6
// Size: 0x290
class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x270	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x274	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x278	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x27c	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x288	
};

// Alignment: 4
// Size: 0x280
class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x220	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x270	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x274	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x278	
};

// Alignment: 1
// Size: 0x270
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x220	
};

// Alignment: 4
// Size: 0x280
class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x220	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x270	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x27c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x27d	
};

// Alignment: 4
// Size: 0x230
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x224	
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x22c	
};

// Alignment: 5
// Size: 0x240
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0220[0x4]; // 0x220
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x228	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x22c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x230	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x234	
};

// Alignment: 1
// Size: 0x230
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x220	
};

// Alignment: 8
// Size: 0x240
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x228	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x23c	
};

// Alignment: 6
// Size: 0x230
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x220	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x224	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x228	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x22c	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x22d	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x22e	
};

// Alignment: 5
// Size: 0x250
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x228	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x240	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x241	
private:
	[[maybe_unused]] uint8_t __pad0242[0x2]; // 0x242
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x244	
};

// Alignment: 6
// Size: 0x250
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x220	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x228	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x240	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x241	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x242	
private:
	[[maybe_unused]] uint8_t __pad0243[0x1]; // 0x243
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x244	
};

// Alignment: 0
// Size: 0x250
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x270
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x220	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x228	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x240	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x258	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x25c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x260	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x264	
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 18
// Size: 0x280
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x220	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x224	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x228	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x22c	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x230	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x234	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x238	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x23c	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x240	
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x244	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x248	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x24c	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x250	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x254	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x258	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x25c	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x260	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x264	
};

// Alignment: 19
// Size: 0x270
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x220	
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x224	
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x228	
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x22c	
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x230	
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x234	
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x238	
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x23c	
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x240	
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x244	
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x248	
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x24c	
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x250	
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x254	
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x258	
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x25c	
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x260	
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x264	
	// MPropertyFriendlyName "$SFXUseModelUVs"
	float m_flSFXSUseModelUVs; // 0x268	
};

// Alignment: 5
// Size: 0x5f0
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x220	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x360	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x4a0	
private:
	[[maybe_unused]] uint8_t __pad04a4[0x4]; // 0x4a4
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x4a8	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5e8	
};

// Alignment: 2
// Size: 0x370
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x360	
};

// Alignment: 6
// Size: 0xe70
class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x228	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x810	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xdf8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xdfc	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xe00	
};

// Alignment: 2
// Size: 0x370
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x360	
};

// Alignment: 4
// Size: 0x4b0
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x360	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x364	
	// MPropertyFriendlyName "per-particle strength"
	CPerParticleFloatInput m_InputStrength; // 0x368	
};

// Alignment: 2
// Size: 0x810
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x808	
};

// Alignment: 5
// Size: 0x820
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x808	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x80c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x810	
	// MPropertyFriendlyName "set previous position"
	// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
	bool m_bWritePreviousPosition; // 0x811	
};

// Alignment: 5
// Size: 0x4b0
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x220	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x360	
	// MPropertyFriendlyName "emission scale from killed parent particles"
	float m_flInitFromKilledParentParticles; // 0x4a0	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x4a4	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x4a8	
};

// Alignment: 10
// Size: 0x600
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x220	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x360	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x4a0	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x5e0	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x5e4	
	// MPropertyFriendlyName "emit particles for killed parent particles"
	bool m_bInitFromKilledParentParticles; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05e9[0x3]; // 0x5e9
public:
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5ec	
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5f0	
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x5f4	
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x5f5	
};

// Alignment: 15
// Size: 0x260
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x220	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x224	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x228	
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x22c	
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x230	
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x234	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x238	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x239	
private:
	[[maybe_unused]] uint8_t __pad023a[0x2]; // 0x23a
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x23c	
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x240	
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x244	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x248	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x24c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x250	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x25c	
};

// Alignment: 8
// Size: 0x4c0
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x220	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x224	
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x228	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x368	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x36c	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x370	
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x371	
private:
	[[maybe_unused]] uint8_t __pad0372[0x6]; // 0x372
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x378	
};

// Alignment: 2
// Size: 0x230
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x210	
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x21c	
};

// Alignment: 2
// Size: 0x360
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x218	
};

// Alignment: 3
// Size: 0x230
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x210	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x214	
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x220	
};

// Alignment: 4
// Size: 0x230
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x210	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x214	
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x224	
};

// Alignment: 6
// Size: 0x500
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x220	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0364[0x4]; // 0x364
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x368	
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x3b8	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x4f8	
};

// Alignment: 7
// Size: 0x250
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x210	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x214	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x220	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x224	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x230	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x23c	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x240	
};

// Alignment: 4
// Size: 0x230
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x210	
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x214	
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x220	
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x224	
};

// Alignment: 8
// Size: 0x250
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x210	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x214	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x218	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x21c	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x220	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x22c	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x238	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x244	
};

// Alignment: 6
// Size: 0x1650
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x218	
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x800	
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0xde8	
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0x13d0	
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0x1510	
};

// Alignment: 3
// Size: 0x940
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x210	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x350	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x938	
};

// Alignment: 1
// Size: 0x220
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x210	
};

// Alignment: 4
// Size: 0xdf0
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x210	
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x7f8	
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xde0	
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xde1	
};

// Alignment: 5
// Size: 0x360
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x210	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x350	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x351	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x352	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x353	
};

// Alignment: 3
// Size: 0x800
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x210	
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x214	
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x218	
};

// Alignment: 1
// Size: 0x220
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Acceleration"
	float m_flAccel; // 0x210	
};

// Alignment: 5
// Size: 0x230
class C_OP_ExternalGenericForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "strength"
	float m_flStrength; // 0x210	
	// MPropertyFriendlyName "curl strength"
	float m_flCurlStrength; // 0x214	
	// MPropertyFriendlyName "linear strength"
	float m_flLinearStrength; // 0x218	
	// MPropertyFriendlyName "radial strength"
	float m_flRadialStrength; // 0x21c	
	// MPropertyFriendlyName "rotation strength"
	float m_flRotationStrength; // 0x220	
};

// Alignment: 2
// Size: 0x220
class C_OP_DensityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x214	
};

// Alignment: 3
// Size: 0x230
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x210	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x21c	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x220	
};

// Alignment: 7
// Size: 0x230
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x210	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x214	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x218	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x21c	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x220	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x224	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x228	
};

// Alignment: 6
// Size: 0x230
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x210	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x214	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x218	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x21c	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x220	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x224	
};

// Alignment: 4
// Size: 0x220
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x210	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x214	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x218	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x21c	
};

// Alignment: 6
// Size: 0x260
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x210	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x214	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x218	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad0220[0x30]; // 0x220
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x250	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x251	
};

// Alignment: 2
// Size: 0x220
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x210	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
};

// Alignment: 2
// Size: 0x220
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x210	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
};

// Alignment: 3
// Size: 0x4a0
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x218	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x358	
};

// Alignment: 3
// Size: 0xdf0
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMin; // 0x218	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMax; // 0x800	
};

// Alignment: 13
// Size: 0x240
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x210	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x214	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x218	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x21c	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x220	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x224	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x225	
private:
	[[maybe_unused]] uint8_t __pad0226[0x2]; // 0x226
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x228	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x22c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x230	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x234	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x238	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x23c	
};

// Alignment: 5
// Size: 0x250
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x210	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x214	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x218	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x21c	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x220	
};

// Alignment: 15
// Size: 0x620
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x210	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x21c	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x228	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x234	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x240	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x244	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x245	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x246	
private:
	[[maybe_unused]] uint8_t __pad0247[0x1]; // 0x247
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x248	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x24c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x250	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x254	
	// MPropertyFriendlyName "oscillation multiplier"
	CPerParticleFloatInput m_flOscMult; // 0x258	
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x398	
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4d8	
};

// Alignment: 6
// Size: 0x240
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x210	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x21c	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x228	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x22c	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x230	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x234	
};

// Alignment: 9
// Size: 0x230
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x218	
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x21c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x220	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x224	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x228	
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x22c	
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x22d	
};

// Alignment: 2
// Size: 0x360
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x218	
};

// Alignment: 6
// Size: 0x230
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x218	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x21c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x220	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x224	
};

// Alignment: 6
// Size: 0x240
class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x218	
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x21c	
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x220	
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x22c	
};

// Alignment: 6
// Size: 0x230
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x218	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x21c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x220	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x224	
};

// Alignment: 3
// Size: 0x220
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x214	
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x218	
};

// Alignment: 8
// Size: 0x230
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x21c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x220	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x224	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x228	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x22c	
};

// Alignment: 7
// Size: 0x230
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x214	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x218	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x21c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x220	
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x224	
private:
	[[maybe_unused]] uint8_t __pad0225[0x3]; // 0x225
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x228	
};

// Alignment: 7
// Size: 0x720
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x218	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x358	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5d8	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad0719[0x3]; // 0x719
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x71c	
};

// Alignment: 7
// Size: 0x230
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x218	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x21c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x220	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x224	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x228	
};

// Alignment: 8
// Size: 0x280
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x218	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x268	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x26c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x270	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x274	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x278	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x27c	
};

// Alignment: 8
// Size: 0x290
class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x218	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x268	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x26c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x270	
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x274	
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x280	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x28c	
};

// Alignment: 4
// Size: 0x360
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x218	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x358	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x35c	
};

// Alignment: 3
// Size: 0x220
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x214	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x218	
};

// Alignment: 3
// Size: 0x230
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x214	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x220	
};

// Alignment: 5
// Size: 0x230
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x214	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x220	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x224	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x228	
};

// Alignment: 4
// Size: 0x380
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x210	
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x350	
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x354	
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x358	
};

// Alignment: 7
// Size: 0x230
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x214	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x218	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x21c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x220	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x224	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x228	
};

// Alignment: 3
// Size: 0x220
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x210	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x218	
};

// Alignment: 8
// Size: 0x260
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x210	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x214	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x218	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x21c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x220	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x224	
private:
	[[maybe_unused]] uint8_t __pad0228[0x28]; // 0x228
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x250	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x254	
};

// Alignment: 10
// Size: 0x260
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x210	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x214	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x218	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x21c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x220	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x224	
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x24]; // 0x22c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x250	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x254	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x255	
};

// Alignment: 4
// Size: 0x250
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x210	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x214	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x24]; // 0x21c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x240	
};

// Alignment: 5
// Size: 0x250
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x210	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x214	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x24]; // 0x21c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x240	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x244	
};

// Alignment: 10
// Size: 0x1300
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x218	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x358	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d8	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x718	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xd00	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x12e8	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x12ec	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x12f0	
};

// Alignment: 6
// Size: 0x230
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x21c	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x224	
};

// Alignment: 7
// Size: 0x240
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x220	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x22c	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x230	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x234	
};

// Alignment: 2
// Size: 0x220
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x210	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x211	
};

// Alignment: 1
// Size: 0x350
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x210	
};

// Alignment: 1
// Size: 0x350
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x210	
};

// Alignment: 1
// Size: 0x220
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x210	
};

// Alignment: 0
// Size: 0x210
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x220
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x210	
};

// Alignment: 1
// Size: 0x220
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x210	
};

// Alignment: 1
// Size: 0x220
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x210	
};

// Alignment: 6
// Size: 0x370
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x210	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x214	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x218	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad021d[0x3]; // 0x21d
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x220	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x360	
};

// Alignment: 1
// Size: 0x350
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x210	
};

// Alignment: 4
// Size: 0x220
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x210	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x214	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x218	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x21c	
};

// Alignment: 3
// Size: 0x230
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x210	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x214	
private:
	[[maybe_unused]] uint8_t __pad0218[0x4]; // 0x218
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x21c	
};

// Alignment: 0
// Size: 0x210
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x230
class C_OP_Spin : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x230
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x260
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x210	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x214	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x218	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x21c	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x224	
};

// Alignment: 5
// Size: 0x230
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0xc]; // 0x214
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x220	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x224	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x22c	
};

// Alignment: 6
// Size: 0x250
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x18]; // 0x214
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad0230[0xc]; // 0x230
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x23c	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x240	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x244	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x248	
};

// Alignment: 15
// Size: 0x9c0
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x210	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x260	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x264	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x268	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x26c	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x270	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x274	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x278	
private:
	[[maybe_unused]] uint8_t __pad027c[0x4]; // 0x27c
public:
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x280	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x3c0	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x3c4	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3c8	
private:
	[[maybe_unused]] uint8_t __pad03c9[0x7]; // 0x3c9
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3d0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x9b8	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x9bc	
};

// Alignment: 33
// Size: 0x760
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4cc]; // 0x214
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x6e0	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x6e4	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x6e8	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x6ec	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x6f0	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x6fc	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x708	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x714	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x720	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x724	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x728	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x72c	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x730	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x734	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x738	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x73c	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x740	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x744	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x748	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x74c	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x750	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x751	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x752	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x753	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x754	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x755	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x756	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x757	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x758	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x759	
private:
	[[maybe_unused]] uint8_t __pad075a[0x4]; // 0x75a
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x75e	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x75f	
};

// Alignment: 3
// Size: 0x220
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x210	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x214	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x215	
};

// Alignment: 5
// Size: 0x370
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x210	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x214	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x220	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x360	
};

// Alignment: 7
// Size: 0x230
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x210	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x214	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x218	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x21c	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x224	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x228	
};

// Alignment: 7
// Size: 0x320
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x210	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x290	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x310	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x314	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x318	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x31c	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x31d	
};

// Alignment: 8
// Size: 0x4b0
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x210	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x214	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x220	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x360	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x4a0	
private:
	[[maybe_unused]] uint8_t __pad04a1[0x3]; // 0x4a1
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x4a4	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x4a8	
};

// Alignment: 8
// Size: 0x230
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x210	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x214	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x218	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x21c	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x220	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x224	
private:
	[[maybe_unused]] uint8_t __pad0225[0x3]; // 0x225
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x228	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x22c	
};

// Alignment: 4
// Size: 0x270
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x210	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x260	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x264	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x268	
};

// Alignment: 3
// Size: 0x220
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x214	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x218	
};

// Alignment: 3
// Size: 0x230
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x214	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x220	
};

// Alignment: 12
// Size: 0xe60
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x218	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x804	
	// MPropertyFriendlyName "particle number"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x808	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad094c[0x4]; // 0x94c
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x950	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xa90	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xbd0	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xd10	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xd14	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xd18	
};

// Alignment: 6
// Size: 0x230
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x214	
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x218	
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x21c	
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x224	
};

// Alignment: 5
// Size: 0xa90
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x218	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x358	
private:
	[[maybe_unused]] uint8_t __pad035c[0x4]; // 0x35c
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x360	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x4a0	
};

// Alignment: 13
// Size: 0x850
class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x218	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x268	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x2b8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x3f8	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x538	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x678	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x7b8	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x7bc	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x7c0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x840	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x844	
private:
	[[maybe_unused]] uint8_t __pad0845[0x3]; // 0x845
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x848	
};

// Alignment: 10
// Size: 0x2d0
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x214	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x218	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x21c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x228	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x278	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2c8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2cc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2cd	
};

// Alignment: 10
// Size: 0x2e0
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x214	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x218	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x21c	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x238	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x288	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2dc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2dd	
};

// Alignment: 12
// Size: 0x2e0
class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x214	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x220	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x270	
	// MPropertyFriendlyName "output starting control point number"
	int32_t m_nOutputStartCP; // 0x2c0	
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	int32_t m_nOutputStartField; // 0x2c4	
	// MPropertyFriendlyName "output ending control point number"
	int32_t m_nOutputEndCP; // 0x2c8	
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	int32_t m_nOutputEndField; // 0x2cc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d0	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2d4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2d5	
};

// Alignment: 9
// Size: 0x12f0
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x218	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x800	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0xde8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0xf28	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1068	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x11a8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x12e8	
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0x12ec	
};

// Alignment: 3
// Size: 0xdf0
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x218	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x800	
};

// Alignment: 15
// Size: 0xdf0
class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x218	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x358	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x718	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x768	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x769	
private:
	[[maybe_unused]] uint8_t __pad07e9[0x3]; // 0x7e9
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7ec	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x7f0	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x7f4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7f8	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x7fc	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x7fd	
private:
	[[maybe_unused]] uint8_t __pad07fe[0x2]; // 0x7fe
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x800	
};

// Alignment: 11
// Size: 0x7c0
class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x218	
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x358	
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x5d8	
	// MPropertyFriendlyName "cylindrical top transform"
	CParticleTransformInput m_TransformStart; // 0x718	
	// MPropertyFriendlyName "cylindrical bottom transform"
	CParticleTransformInput m_TransformEnd; // 0x768	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7b8	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x7bc	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x7bd	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x7be	
};

// Alignment: 7
// Size: 0x2c0
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x210	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x21c	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x228	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x229	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x22a	
private:
	[[maybe_unused]] uint8_t __pad02aa[0x2]; // 0x2aa
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x2ac	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x2b0	
};

// Alignment: 4
// Size: 0x950
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x218	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x358	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x940	
};

// Alignment: 8
// Size: 0x3f0
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x218	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x21c	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x220	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x224	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x2a4	
private:
	[[maybe_unused]] uint8_t __pad02a5[0x3]; // 0x2a5
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x2b0	
};

// Alignment: 14
// Size: 0x9e0
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control_point_number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x214	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x218	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x21c	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x220	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x224	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x2a4	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x2a5	
private:
	[[maybe_unused]] uint8_t __pad02a6[0x2]; // 0x2a6
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x2a8	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x2ac	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x2b0	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x2b4	
private:
	[[maybe_unused]] uint8_t __pad02b5[0x3]; // 0x2b5
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x2b8	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x8a0	
};

// Alignment: 3
// Size: 0x220
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x210	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x214	
};

// Alignment: 7
// Size: 0x230
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x210	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x214	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x218	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x21c	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x220	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x224	
};

// Alignment: 11
// Size: 0x240
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x210	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x214	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x218	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x21c	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x220	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x224	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x228	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x22c	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x230	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x234	
};

// Alignment: 4
// Size: 0x230
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x210	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x214	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x224	
};

// Alignment: 4
// Size: 0x230
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x210	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x214	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x220	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x224	
};

// Alignment: 5
// Size: 0x2a0
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x214	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x215	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x216	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x217	
};

// Alignment: 7
// Size: 0x890
class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x214	
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x215	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x216	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x217	
private:
	[[maybe_unused]] uint8_t __pad0297[0x1]; // 0x297
public:
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x298	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x880	
};

// Alignment: 8
// Size: 0x230
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x218	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x21c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x220	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x224	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x228	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x22c	
};

// Alignment: 3
// Size: 0x220
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x210	
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x214	
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x218	
};

// Alignment: 3
// Size: 0x230
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x210	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x21c	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x220	
};

// Alignment: 17
// Size: 0x410
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x210	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x350	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x354	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x358	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x35c	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x360	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3e0	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3e4	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3e8	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3ec	
private:
	[[maybe_unused]] uint8_t __pad03f0[0x8]; // 0x3f0
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3f8	
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3fc	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3fd	
private:
	[[maybe_unused]] uint8_t __pad03fe[0x2]; // 0x3fe
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x400	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x401	
private:
	[[maybe_unused]] uint8_t __pad0402[0x2]; // 0x402
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x404	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x408	
};

// Alignment: 4
// Size: 0x220
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x210	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x218	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x21c	
};

// Alignment: 5
// Size: 0x230
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x210	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x218	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad021d[0x3]; // 0x21d
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x220	
};

// Alignment: 5
// Size: 0x4a0
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x220	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x360	
};

// Alignment: 4
// Size: 0x220
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x218	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x21c	
};

// Alignment: 3
// Size: 0x220
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x210	
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x218	
};

// Alignment: 3
// Size: 0x220
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x210	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x214	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
};

// Alignment: 6
// Size: 0x230
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x210	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x214	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x218	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x21c	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x220	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x224	
};

// Alignment: 4
// Size: 0x220
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x210	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x214	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x218	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x21c	
};

// Alignment: 4
// Size: 0x990
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x210	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x7f8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x938	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x988	
};

// Alignment: 7
// Size: 0x380
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x214	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x220	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x22c	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x230	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x234	
private:
	[[maybe_unused]] uint8_t __pad0235[0x3]; // 0x235
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x238	
};

// Alignment: 3
// Size: 0x220
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x210	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x214	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x218	
};

// Alignment: 4
// Size: 0x220
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x210	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x214	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x218	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x21c	
};

// Alignment: 7
// Size: 0x270
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x210	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x214	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x218	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x21c	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x220	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0xe]; // 0x222
public:
	CPathParameters m_PathParams; // 0x230	
};

// Alignment: 4
// Size: 0x260
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x210	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x214	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x7]; // 0x219
public:
	CPathParameters m_PathParams; // 0x220	
};

// Alignment: 4
// Size: 0x260
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad0210[0x4]; // 0x210
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x214	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x218	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x21c	
private:
	[[maybe_unused]] uint8_t __pad021d[0x3]; // 0x21d
public:
	CPathParameters m_PathParams; // 0x220	
};

// Alignment: 11
// Size: 0x240
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x210	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x21c	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x220	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x224	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x228	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x230	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x234	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x235	
};

// Alignment: 11
// Size: 0x240
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x218	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x21c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x220	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x224	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x228	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x22c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x230	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x234	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x238	
};

// Alignment: 1
// Size: 0x220
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
};

// Alignment: 13
// Size: 0x260
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x218	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x21c	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x228	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x240	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x24c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x250	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x254	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x258	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x25c	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x25d	
};

// Alignment: 2
// Size: 0x220
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
};

// Alignment: 1
// Size: 0x260
class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x210	
};

// Alignment: 3
// Size: 0x220
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x214	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x218	
};

// Alignment: 4
// Size: 0x220
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x218	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x21c	
};

// Alignment: 2
// Size: 0x220
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x210	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x214	
};

// Alignment: 7
// Size: 0x240
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x218	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x21c	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x220	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x230	
};

// Alignment: 4
// Size: 0xdf0
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x210	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x7f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xde0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0xde4	
};

// Alignment: 2
// Size: 0x220
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x214	
};

// Alignment: 3
// Size: 0x220
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x214	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x218	
};

// Alignment: 9
// Size: 0x2c0
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x210	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x214	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x218	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x21c	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x220	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2a0	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x2a4	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0xc]; // 0x2ac
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x2b8	
};

// Alignment: 4
// Size: 0x270
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x210	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x260	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x26c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x26d	
};

// Alignment: 4
// Size: 0x220
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x210	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x218	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x21c	
};

// Alignment: 5
// Size: 0x240
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x218	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x230	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x234	
};

// Alignment: 9
// Size: 0x270
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x210	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x218	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x230	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x248	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x260	
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x261	
private:
	[[maybe_unused]] uint8_t __pad0262[0x2]; // 0x262
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x264	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x268	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x26c	
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x270
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x210	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x218	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x230	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x248	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0261[0x3]; // 0x261
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x264	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x268	
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x270
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x5f0
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x214	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x218	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x21c	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x220	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x224	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x228	
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x368	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x4a8	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x5e8	
};

// Alignment: 9
// Size: 0x960
class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "extra velocity field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x214	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x220	
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x360	
	// MPropertyFriendlyName "Boundary Dampening"
	float m_flBoundaryDampening; // 0x948	
	// MPropertyFriendlyName "Set Velocity"
	bool m_bSetVelocity; // 0x94c	
	// MPropertyFriendlyName "Lock to Surface"
	bool m_bLockToSurface; // 0x94d	
private:
	[[maybe_unused]] uint8_t __pad094e[0x2]; // 0x94e
public:
	// MPropertyFriendlyName "Vector Field Grid Spacing Override"
	float m_flGridSpacing; // 0x950	
};

// Alignment: 5
// Size: 0x4c0
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x218	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x358	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x498	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x49c	
};

// Alignment: 6
// Size: 0xe60
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x218	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x800	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xde8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xdec	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xdf0	
};

// Alignment: 6
// Size: 0xf30
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x218	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x800	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xde8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0xf28	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xf2c	
};

// Alignment: 10
// Size: 0x730
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x210	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x214	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x3]; // 0x219
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x21c	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x220	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x6]; // 0x222
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_flIncrement; // 0x228	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x368	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x4a8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x5e8	
};

// Alignment: 6
// Size: 0x4a0
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x210	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x214	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x218	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x219	
private:
	[[maybe_unused]] uint8_t __pad021a[0x6]; // 0x21a
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x220	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x360	
};

// Alignment: 2
// Size: 0x380
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x350	
};

// Alignment: 4
// Size: 0x4c0
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x350	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x354	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x358	
};

// Alignment: 4
// Size: 0x4c0
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x350	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x354	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x358	
};

// Alignment: 5
// Size: 0x950
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7f8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7fc	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x800	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x940	
};

// Alignment: 3
// Size: 0x940
class C_OP_DragRelativeToPlane : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "dampening"
	CParticleCollectionFloatInput m_flDragAtPlane; // 0x210	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecPlaneNormal; // 0x350	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x938	
};

// Alignment: 2
// Size: 0x220
class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
};

// Alignment: 6
// Size: 0x230
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x210	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x214	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x218	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x21c	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x220	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x224	
};

// Alignment: 5
// Size: 0x230
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x210	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x214	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x218	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x21c	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x220	
};

// Alignment: 3
// Size: 0x240
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x234	
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x238	
};

// Alignment: 3
// Size: 0x250
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x234	
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x240	
};

// Alignment: 11
// Size: 0x250
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x210	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x214	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x218	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x21c	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x220	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x224	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x228	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x234	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x238	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x23c	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x240	
};

// Alignment: 10
// Size: 0x240
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x210	
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x214	
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x218	
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x21c	
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x220	
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x224	
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x228	
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x22c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x230	
};

// Alignment: 11
// Size: 0x270
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x210	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x21c	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x220	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x224	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x228	
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x22c	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x240	
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x244	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x258	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x25c	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x260	
};

// Alignment: 3
// Size: 0x5d0
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x210	
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x350	
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x490	
};

// Alignment: 2
// Size: 0x220
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x210	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x214	
};

// Alignment: 6
// Size: 0x230
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x210	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x214	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x218	
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x21c	
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x220	
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x224	
};

// Alignment: 8
// Size: 0x240
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x224	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x228	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x23c	
};

// Alignment: 10
// Size: 0xda0
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x224	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x230	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x370	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x4b0	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5f0	
	// MPropertyFriendlyName "intersection height CP"
	int32_t m_nHeightControlPointNumber; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x738	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xd20	
};

// Alignment: 8
// Size: 0x730
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x220	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x224	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x228	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x22c	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x230	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x370	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x4b0	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5f0	
};

// Alignment: 6
// Size: 0x5f0
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x228	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x368	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x4a8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5e8	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5ec	
};

// Alignment: 6
// Size: 0xf40
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x228	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x810	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xdf8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0xf38	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xf3c	
};

// Alignment: 5
// Size: 0xe00
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x224	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x228	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x810	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xdf8	
};

// Alignment: 7
// Size: 0x240
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x224	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x228	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
};

// Alignment: 5
// Size: 0x240
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x220	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x224	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x228	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x22c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x230	
};

// Alignment: 7
// Size: 0x240
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x224	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x228	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
};

// Alignment: 3
// Size: 0x240
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x220	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x224	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x230	
};

// Alignment: 5
// Size: 0x240
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x220	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x224	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x228	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x22c	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x230	
};

// Alignment: 12
// Size: 0x270
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x220	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x221	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x222	
private:
	[[maybe_unused]] uint8_t __pad0223[0x1]; // 0x223
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x224	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x228	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x22c	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x230	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x234	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x240	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x24c	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x258	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x264	
};

// Alignment: 5
// Size: 0x820
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x220	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x224	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x228	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x810	
};

// Alignment: 4
// Size: 0x370
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x220	
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x224	
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x230	
};

// Alignment: 8
// Size: 0x4d0
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x220	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x2]; // 0x222
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x224	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x230	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x370	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x37c	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x388	
};

// Alignment: 8
// Size: 0x390
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x1]; // 0x221
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x222	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x223	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x224	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x228	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x22c	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x248	
};

// Alignment: 2
// Size: 0x230
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x220	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x224	
};

// Alignment: 15
// Size: 0x2e0
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x220	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x224	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x228	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x22c	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0231[0x3]; // 0x231
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x234	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x238	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x240	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x244	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x248	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x24c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x24d	
private:
	[[maybe_unused]] uint8_t __pad02cd[0x3]; // 0x2cd
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2d0	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x2d4	
};

// Alignment: 3
// Size: 0x240
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x220	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x224	
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x230	
};

// Alignment: 4
// Size: 0x240
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x220	
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x224	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x228	
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x234	
};

// Alignment: 3
// Size: 0x240
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x220	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x224	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x230	
};

// Alignment: 3
// Size: 0x2c0
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x220	
	// MPropertyFriendlyName "time-of-day parameter"
	char m_pszTimeOfDayParameter[128]; // 0x224	
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x2a4	
};

// Alignment: 2
// Size: 0x230
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x220	
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x224	
};

// Alignment: 6
// Size: 0x820
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x220	
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x224	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0229[0x3]; // 0x229
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x22c	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x238	
};

// Alignment: 2
// Size: 0x230
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x220	
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x224	
};

// Alignment: 3
// Size: 0x370
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x220	
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x360	
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x361	
};

// Alignment: 4
// Size: 0x950
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x220	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x808	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x948	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x94c	
};

// Alignment: 10
// Size: 0x250
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x220	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x224	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x228	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x22c	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x230	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x234	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x238	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x23c	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0241[0x3]; // 0x241
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x244	
};

// Alignment: 4
// Size: 0x240
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x220	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x224	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x228	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x22c	
};

// Alignment: 11
// Size: 0x410
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x220	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x224	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x230	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x370	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x374	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x378	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x384	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x404	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x408	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x409	
};

// Alignment: 6
// Size: 0x370
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x220	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x224	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x228	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x368	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x369	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x36a	
};

// Alignment: 3
// Size: 0x370
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x220	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x224	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x228	
};

// Alignment: 5
// Size: 0x5f0
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x220	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x360	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x4a0	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5e0	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5e1	
};

// Alignment: 2
// Size: 0x230
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x220	
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x221	
};

// Alignment: 1
// Size: 0x230
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x220	
};

// Alignment: 9
// Size: 0x260
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x224	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x228	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x22c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x230	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x234	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x238	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x240	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x248	
};

// Alignment: 3
// Size: 0x230
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x220	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x224	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x228	
};

// Alignment: 7
// Size: 0x380
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x220	
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x224	
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x228	
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x22c	
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x238	
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x378	
};

// Alignment: 5
// Size: 0x5f0
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x228	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x368	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x4a8	
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x5e8	
};

// Alignment: 2
// Size: 0x370
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x228	
};

// Alignment: 1
// Size: 0x360
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x220	
};

// Alignment: 5
// Size: 0x240
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x220	
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x224	
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x230	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x234	
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x238	
};

// Alignment: 15
// Size: 0x1000
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x220	
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x224	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x230	
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x370	
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x4b0	
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x5f0	
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x730	
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x870	
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0x9b0	
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0xaf0	
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x4]; // 0xc34
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0xc38	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0xd78	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xeb8	
};

// Alignment: 5
// Size: 0x820
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x224	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x228	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x814	
};

// Alignment: 4
// Size: 0x4b0
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x220	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x360	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x364	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x368	
};

// Alignment: 1
// Size: 0x270
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x260	
};

// Alignment: 7
// Size: 0x2510
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2270	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2274	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x2278	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x227c	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2280	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x23c0	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x2500	
};

// Alignment: 20
// Size: 0x3620
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2510	
private:
	[[maybe_unused]] uint8_t __pad2511[0x3]; // 0x2511
public:
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2514	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2518	
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x251c	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x2520	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x2524	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x2528	
private:
	[[maybe_unused]] uint8_t __pad2529[0x3]; // 0x2529
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x252c	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2530	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2534	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2538	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x2678	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x2c60	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x2da0	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x2ee0	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x34c8	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x3608	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x360c	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x3610	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x3614	
};

// Alignment: 30
// Size: 0x26a0
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2270	
private:
	[[maybe_unused]] uint8_t __pad2271[0x3]; // 0x2271
public:
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x2274	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x2278	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x227c	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x2280	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2284	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2288	
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x228c	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x2290	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x2294	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x2298	
private:
	[[maybe_unused]] uint8_t __pad229c[0x4]; // 0x229c
public:
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x22a0	
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x23e0	
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2520	
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x2660	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x2664	
private:
	[[maybe_unused]] uint8_t __pad2665[0x3]; // 0x2665
public:
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x2668	
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x266c	
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x2670	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x2674	
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x2678	
private:
	[[maybe_unused]] uint8_t __pad267c[0x1]; // 0x267c
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x267d	
private:
	[[maybe_unused]] uint8_t __pad267e[0x2]; // 0x267e
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2680	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x2684	
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x2688	
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x2689	
private:
	[[maybe_unused]] uint8_t __pad268a[0x2]; // 0x268a
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x268c	
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2690	
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x2694	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x2695	
};

// Alignment: 8
// Size: 0x2a0
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0278[0x4]; // 0x278
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x27c	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x280	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x281	
private:
	[[maybe_unused]] uint8_t __pad0282[0x2]; // 0x282
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x284	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x288	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x28c	
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x290	
};

// Alignment: 7
// Size: 0x290
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x270	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x274	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x278	
private:
	[[maybe_unused]] uint8_t __pad0279[0x3]; // 0x279
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x27c	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x280	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x284	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x288	
};

// Alignment: 5
// Size: 0x630
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionRendererFloatInput m_cubeWidth; // 0x260	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x3a0	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionRendererFloatInput m_renderRadius; // 0x4e0	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0624[0x4]; // 0x624
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x628	
};

// Alignment: 2
// Size: 0x270
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x260	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x264	
};

// Alignment: 48
// Size: 0x22e0
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x260	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x261	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x262	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x263	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad0280[0x4]; // 0x280
public:
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x284	
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x288	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x28c	
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x28d	
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x28e	
private:
	[[maybe_unused]] uint8_t __pad028f[0x1]; // 0x28f
public:
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x290	
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x878	
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "700"
	bool m_bIgnoreRadius; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e61[0x3]; // 0xe61
public:
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "700"
	int32_t m_nModelScaleCP; // 0xe64	
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xe68	
	// MPropertyFriendlyName "apply scales in local model space"
	// MPropertySortPriority "700"
	bool m_bLocalScale; // 0x1450	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x1451	
private:
	[[maybe_unused]] uint8_t __pad1452[0x2]; // 0x1452
public:
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0x1454	
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x1458	
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x1459	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x145a	
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x145b	
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x145c	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x1460	
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x1464	
	// MPropertyFriendlyName "activity override"
	// MPropertySuppressExpr "mod != dota"
	// MPropertySortPriority "500"
	char m_ActivityName[256]; // 0x1468	
	// MPropertyFriendlyName "sequence override"
	// MPropertySuppressExpr "mod == dota"
	// MPropertySortPriority "500"
	char m_SequenceName[256]; // 0x1568	
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0x1668	
private:
	[[maybe_unused]] uint8_t __pad1669[0x7]; // 0x1669
public:
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x1670	
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x1678	
private:
	[[maybe_unused]] uint8_t __pad1679[0x3]; // 0x1679
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0x167c	
	// MPropertyFriendlyName "skin override CP"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0x1680	
private:
	[[maybe_unused]] uint8_t __pad1684[0x4]; // 0x1684
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1688	
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "input model"
	CParticleModelInput m_modelInput; // 0x16a0	
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x16e8	
	// MPropertyFriendlyName "model override economy loadout slot type"
	char m_EconSlotName[256]; // 0x16ec	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x17ec	
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x17ed	
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	bool m_bUseRawMeshGroup; // 0x17ee	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x17ef	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x17f0	
	// MPropertyFriendlyName "render attribute"
	char m_szRenderAttribute[260]; // 0x17f1	
private:
	[[maybe_unused]] uint8_t __pad18f5[0x3]; // 0x18f5
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x18f8	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x1a38	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x1b78	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1cb8	
private:
	[[maybe_unused]] uint8_t __pad1cbc[0x4]; // 0x1cbc
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1cc0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x22a8	
};

// Alignment: 8
// Size: 0xb10
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x260	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x264	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x268	
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x280	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x288	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x3c8	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x9b0	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xaf0	
};

// Alignment: 11
// Size: 0x2b0
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x260	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x261	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x262	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x263	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x264	
private:
	[[maybe_unused]] uint8_t __pad0265[0x3]; // 0x265
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x268	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x26c	
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x270	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x278	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x27c	
private:
	[[maybe_unused]] uint8_t __pad027d[0x3]; // 0x27d
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x280	
};

// Alignment: 16
// Size: 0x890
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x260	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x261	
private:
	[[maybe_unused]] uint8_t __pad0262[0x2]; // 0x262
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x264	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x268	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x26c	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x270	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x858	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x85c	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x860	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x864	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x868	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x86c	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x870	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x874	
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x878	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x880	
};

// Alignment: 29
// Size: 0x12b0
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x268	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0854[0x4]; // 0x854
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x858	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x7]; // 0x999
public:
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0x9a0	
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0xae0	
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xc20	
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d64[0x4]; // 0xd64
public:
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0xd68	
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xea8	
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0xfe8	
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0x1128	
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0x1129	
private:
	[[maybe_unused]] uint8_t __pad112a[0x6]; // 0x112a
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x1130	
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0x1138	
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x113c	
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1140	
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1280	
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0x1284	
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0x1288	
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0x1289	
private:
	[[maybe_unused]] uint8_t __pad128a[0x2]; // 0x128a
public:
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x128c	
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0x1290	
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0x1294	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0x1298	
private:
	[[maybe_unused]] uint8_t __pad1299[0x3]; // 0x1299
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0x129c	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0x12a0	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0x12a4	
};

// Alignment: 13
// Size: 0x1130
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x268	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x850	
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x854	
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x858	
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x998	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0ad9[0x7]; // 0xad9
public:
	// MPropertyFriendlyName "Light Radius"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xae0	
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xc20	
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xd60	
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0xea0	
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0xfe0	
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x1120	
};

// Alignment: 7
// Size: 0xd60
class C_OP_RenderLightBeam : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x260	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	// MPropertyFriendlyName "Lumens Per Meter"
	CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x850	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0991[0x7]; // 0x991
public:
	// MPropertyFriendlyName "Skirt"
	CParticleCollectionFloatInput m_flSkirt; // 0x998	
	// MPropertyFriendlyName "Range"
	CParticleCollectionFloatInput m_flRange; // 0xad8	
	// MPropertyFriendlyName "Thickness"
	CParticleCollectionFloatInput m_flThickness; // 0xc18	
};

// Alignment: 0
// Size: 0x260
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x260
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 9
// Size: 0x290
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x260	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x264	
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x268	
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x26c	
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x270	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x274	
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x278	
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x27c	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x280	
};

// Alignment: 4
// Size: 0x270
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x260	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x264	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x268	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x26c	
};

// Alignment: 3
// Size: 0x3b0
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x260	
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x3a0	
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x3a8	
};

// Alignment: 12
// Size: 0x390
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x260	
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x264	
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x268	
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x26c	
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x270	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x274	
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x278	
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x27c	
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x280	
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x284	
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x288	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x388	
};

// Alignment: 7
// Size: 0x2a0
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x260	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x268	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x270	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x278	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x280	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x288	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x290	
};

// Alignment: 6
// Size: 0x290
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x260	
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x268	
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x270	
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x278	
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x280	
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x288	
};

// Alignment: 3
// Size: 0x270
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x260	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x264	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x268	
};

// Alignment: 10
// Size: 0x290
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x260	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x264	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x268	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x26c	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x270	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x274	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x278	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x27c	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x280	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x284	
};

// Alignment: 2
// Size: 0x270
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x268	
};

// Alignment: 4
// Size: 0x3b0
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x260	
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x264	
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad026c[0x4]; // 0x26c
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x270	
};

