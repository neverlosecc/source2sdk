#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: particles.dll
// Classes count: 403
// Enums count: 61
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
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
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

struct ParticleAttributeIndex_t;
struct ParticlePreviewState_t;
struct CParticleCollectionFloatInput;
struct CParticleVisibilityInputs;
struct TextureControls_t;
struct CParticleCollectionVecInput;
struct CPiecewiseCurveSchemaWrapper;
struct CParticleFloatInput;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CPerParticleFloatInput;
struct CPathParameters;
struct CPerParticleVecInput;
struct ControlPointReference_t;

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

// Alignment: 1
// Size: 0x4
struct ParticleAttributeIndex_t
{
public:
	int32_t m_nBoxedTypeSafeInt; // 0x0	
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
	[[maybe_unused]] uint8_t __pad001c[0x4]; 	// 0x1c
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
public:
	// no members available
};

// Alignment: 0
// Size: 0x8
class IControlPointEditorData
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x8
class IParticleSystemDefinition
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0036[0x2]; 	// 0x36
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
private:
	[[maybe_unused]] uint8_t __pad000c[0x2]; 	// 0xc
public:
	// MPropertyFriendlyName "end cap effect"
	bool m_bEndCap; // 0xe	
	// MPropertySuppressField
	bool m_bDisableChild; // 0xf	
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
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
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
	[[maybe_unused]] uint8_t __pad0005[0x3]; 	// 0x5
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

// Alignment: 59
// Size: 0x350
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; 	// 0xc
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
	[[maybe_unused]] uint8_t __pad00d0[0xa8]; 	// 0xd0
public:
	// MPropertySuppressField
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178	
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x17c	
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x3c]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad01dc[0x4]; 	// 0x1dc
public:
	// MPropertyFriendlyName "snapshot"
	// MPropertyAttributeEditor "AssetBrowse( vsnap )"
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x1e0	
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x18]; 	// 0x1f0
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
	[[maybe_unused]] uint8_t __pad0224[0xc]; 	// 0x224
public:
	// MPropertyFriendlyName "fallback replacement definition"
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x230	
	// MPropertyFriendlyName "fallback max count"
	// MParticleAdvancedField
	int32_t m_nFallbackMaxCount; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad023c[0x4]; 	// 0x23c
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
	[[maybe_unused]] uint8_t __pad0292[0x16]; 	// 0x292
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
	[[maybe_unused]] uint8_t __pad02e8[0x38]; 	// 0x2e8
public:
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	bool m_bShouldSort; // 0x320	
	// MPropertyFriendlyName "batch particle systems"
	// MParticleAdvancedField
	bool m_bShouldBatch; // 0x321	
private:
	[[maybe_unused]] uint8_t __pad0322[0x2]; 	// 0x322
public:
	// MPropertyFriendlyName "depth sort bias"
	float m_flDepthSortBias; // 0x324	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x1]; 	// 0x329
public:
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	// MParticleAdvancedField
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x32a	
};

// Alignment: 16
// Size: 0x180
class CParticleFunction
{
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
	[[maybe_unused]] uint8_t __pad001d[0x3]; 	// 0x1d
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
	[[maybe_unused]] uint8_t __pad0038[0x1]; 	// 0x38
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x39	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; 	// 0x3a
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
	// no members available
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionForce : public CParticleFunction
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x180
class CParticleFunctionOperator : public CParticleFunction
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad065a[0x2]; 	// 0x65a
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
	[[maybe_unused]] uint8_t __pad0002[0x6]; 	// 0x2
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
	[[maybe_unused]] uint8_t __pad0034[0x4]; 	// 0x34
public:
	// MPropertyFriendlyName "Blend Amount"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	CParticleCollectionFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x120	
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
	[[maybe_unused]] uint8_t __pad03a4[0x4]; 	// 0x3a4
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
	[[maybe_unused]] uint8_t __pad09e1[0x7]; 	// 0x9e1
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
	[[maybe_unused]] uint8_t __pad0bca[0x6]; 	// 0xbca
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
	[[maybe_unused]] uint8_t __pad0e9c[0x4]; 	// 0xe9c
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
	[[maybe_unused]] uint8_t __pad115a[0x6]; 	// 0x115a
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
	[[maybe_unused]] uint8_t __pad1357[0x1]; 	// 0x1357
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1358	
private:
	[[maybe_unused]] uint8_t __pad135c[0x4]; 	// 0x135c
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
	[[maybe_unused]] uint8_t __pad17e1[0x3]; 	// 0x17e1
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
	[[maybe_unused]] uint8_t __pad19ca[0x2]; 	// 0x19ca
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
	[[maybe_unused]] uint8_t __pad19d9[0x3]; 	// 0x19d9
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
	[[maybe_unused]] uint8_t __pad19f1[0x3]; 	// 0x19f1
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x19f4	
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
	[[maybe_unused]] uint8_t __pad07d4[0x4]; 	// 0x7d4
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x7d8	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; 	// 0x7e4
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
	[[maybe_unused]] uint8_t __pad0d59[0x3]; 	// 0xd59
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
	[[maybe_unused]] uint8_t __pad0d74[0x4]; 	// 0xd74
public:
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d90[0x18]; 	// 0xd90
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0xda8	
};

// Alignment: 0
// Size: 0x40
class CPiecewiseCurveSchemaWrapper
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0028[0x4]; 	// 0x28
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
	[[maybe_unused]] uint8_t __pad0075[0x7]; 	// 0x75
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
	[[maybe_unused]] uint8_t __pad009c[0x4]; 	// 0x9c
public:
	CPiecewiseCurveSchemaWrapper m_Curve; // 0xa0	
};

// Alignment: 0
// Size: 0xe8
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
	// no members available
};

// Alignment: 0
// Size: 0xe8
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad004c[0x4]; 	// 0x4c
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

// Alignment: 0
// Size: 0x430
class CPerParticleVecInput : public CParticleVecInput
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x430
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
	// no members available
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
public:
	// no members available
};

// Alignment: 0
// Size: 0x28
class CParticleProperty
{
public:
	// no members available
};

// Alignment: 25
// Size: 0xb8
class CNewParticleEffect : public IParticleEffect
{
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
		uint256_t __pad0: 180;
	}; // 192 bits
	Vector m_vSortOrigin; // 0x40	
	float m_flScale; // 0x4c	
	PARTICLE_EHANDLE__* m_hOwner; // 0x50	
	CParticleProperty* m_pOwningParticleProperty; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x10]; 	// 0x60
public:
	Vector m_LastMin; // 0x70	
	Vector m_LastMax; // 0x7c	
	CSplitScreenSlot m_nSplitScreenUser; // 0x88	
	Vector m_vecAggregationCenter; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad0098[0x18]; 	// 0x98
public:
	int32_t m_RefCount; // 0xb0	
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
	[[maybe_unused]] uint8_t __pad018d[0x3]; 	// 0x18d
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x190	
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
	[[maybe_unused]] uint8_t __pad019e[0x2]; 	// 0x19e
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1a0	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x288	
};

// Alignment: 0
// Size: 0x180
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
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
	[[maybe_unused]] uint8_t __pad054e[0x2]; 	// 0x54e
public:
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	float m_flCollisionConfirmationSpeed; // 0x550	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; 	// 0x555
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; 	// 0x55c
public:
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x560	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x648	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x64c	
private:
	[[maybe_unused]] uint8_t __pad064d[0x3]; 	// 0x64d
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x650	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x654	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x6d4	
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
	[[maybe_unused]] uint8_t __pad043c[0x4]; 	// 0x43c
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x440	
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
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x180	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x184	
};

// Alignment: 11
// Size: 0x8d0
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
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
	[[maybe_unused]] uint8_t __pad0182[0x2]; 	// 0x182
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x188	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; 	// 0x18d
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
	[[maybe_unused]] uint8_t __pad0b5e[0x2]; 	// 0xb5e
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xb60	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0xc48	
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
	[[maybe_unused]] uint8_t __pad063a[0x2]; 	// 0x63a
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x63c	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x640	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0x728	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
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
	[[maybe_unused]] uint8_t __pad078d[0x3]; 	// 0x78d
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
	[[maybe_unused]] uint8_t __pad096d[0x1]; 	// 0x96d
public:
	// MPropertyFriendlyName "randomly distribute to highest supplied control point"
	// MParticleMaxVersion
	bool m_bUseHighestEndCP; // 0x96e	
private:
	[[maybe_unused]] uint8_t __pad096f[0x1]; 	// 0x96f
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0974[0x4]; 	// 0x974
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
	[[maybe_unused]] uint8_t __pad03d4[0xc]; 	// 0x3d4
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
	[[maybe_unused]] uint8_t __pad03e9[0x3]; 	// 0x3e9
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x3ec	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3f0	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3f4	
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

// Alignment: 6
// Size: 0xbc0
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad0198[0x1]; 	// 0x198
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x199	
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
	[[maybe_unused]] uint8_t __pad018c[0x8]; 	// 0x18c
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x194	
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
	[[maybe_unused]] uint8_t __pad0190[0xc]; 	// 0x190
public:
	// MPropertyFriendlyName "yaw random exponent"
	float m_flRotationRandExponent; // 0x19c	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x1a0	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// no members available
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
// Size: 0x1b0
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// no members available
};

// Alignment: 10
// Size: 0x1c0
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
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

// Alignment: 7
// Size: 0x1c0
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
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
	[[maybe_unused]] uint8_t __pad018a[0x6]; 	// 0x18a
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x190	
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
	[[maybe_unused]] uint8_t __pad0182[0x2]; 	// 0x182
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x184	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x188	
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

// Alignment: 1
// Size: 0x5b0
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x180	
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
	[[maybe_unused]] uint8_t __pad0186[0x2]; 	// 0x186
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

// Alignment: 5
// Size: 0x1f0
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0xc]; 	// 0x184
public:
	CPathParameters m_PathParams; // 0x190	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; 	// 0x1d1
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x1d4	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1e0	
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
	[[maybe_unused]] uint8_t __pad01a5[0x3]; 	// 0x1a5
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1a8	
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
	[[maybe_unused]] uint8_t __pad01a3[0x1]; 	// 0x1a3
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1a4	
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

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0182[0x2]; 	// 0x182
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
// Size: 0x190
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x180	
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
	[[maybe_unused]] uint8_t __pad01b9[0x3]; 	// 0x1b9
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1bc	
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
	[[maybe_unused]] uint8_t __pad018b[0x5]; 	// 0x18b
public:
	CPathParameters m_PathParams; // 0x190	
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
	[[maybe_unused]] uint8_t __pad018b[0x5]; 	// 0x18b
public:
	CPathParameters m_PathParams; // 0x190	
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
	[[maybe_unused]] uint8_t __pad0223[0x1]; 	// 0x223
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x224	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x228	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x229	
private:
	[[maybe_unused]] uint8_t __pad022a[0x2]; 	// 0x22a
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x22c	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x230	
};

// Alignment: 1
// Size: 0x190
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x180	
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
	[[maybe_unused]] uint8_t __pad01c6[0x2]; 	// 0x1c6
public:
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1c8	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1cc	
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
	[[maybe_unused]] uint8_t __pad0189[0x3]; 	// 0x189
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x18c	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x190	
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
	[[maybe_unused]] uint8_t __pad018d[0x3]; 	// 0x18d
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x190	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x190	
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
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad05ad[0x3]; 	// 0x5ad
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b4[0x4]; 	// 0x5b4
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
	[[maybe_unused]] uint8_t __pad06a9[0x3]; 	// 0x6a9
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x6ac	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x6b8	
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
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1a0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0224[0xc]; 	// 0x224
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x230	
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
	[[maybe_unused]] uint8_t __pad0198[0x1]; 	// 0x198
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x199	
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

// Alignment: 3
// Size: 0x280
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x270	
};

// Alignment: 3
// Size: 0x280
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x270	
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
	[[maybe_unused]] uint8_t __pad021b[0x1]; 	// 0x21b
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x21c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x220	
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
	[[maybe_unused]] uint8_t __pad0192[0x2]; 	// 0x192
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x194	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x198	
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
	[[maybe_unused]] uint8_t __pad0189[0x3]; 	// 0x189
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
	[[maybe_unused]] uint8_t __pad0193[0x1]; 	// 0x193
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

// Alignment: 1
// Size: 0x210
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x180	
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

// Alignment: 1
// Size: 0x190
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x180	
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

// Alignment: 5
// Size: 0x1a0
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
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

// Alignment: 1
// Size: 0x190
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x180	
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

// Alignment: 5
// Size: 0x1b0
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1a0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; 	// 0x1a2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1a4	
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
	[[maybe_unused]] uint8_t __pad01a3[0x1]; 	// 0x1a3
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1a4	
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1b0
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// no members available
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
// Size: 0x1d0
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1d0
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0354[0x4]; 	// 0x354
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x358	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x440	
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
	[[maybe_unused]] uint8_t __pad019a[0x2]; 	// 0x19a
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

// Alignment: 2
// Size: 0x270
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x188	
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
	[[maybe_unused]] uint8_t __pad0191[0x3]; 	// 0x191
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x194	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
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
	[[maybe_unused]] uint8_t __pad0281[0x7]; 	// 0x281
public:
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x288	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x370	
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

// Alignment: 6
// Size: 0xff0
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
// Size: 0x190
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x180	
	// MPropertyFriendlyName "scale"
	Vector m_vecScale; // 0x184	
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

// Alignment: 1
// Size: 0x190
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Acceleration"
	float m_flAccel; // 0x180	
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
	[[maybe_unused]] uint8_t __pad0190[0x30]; 	// 0x190
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1c0	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x1c1	
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
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x180	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x184	
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
	[[maybe_unused]] uint8_t __pad0196[0x2]; 	// 0x196
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
	[[maybe_unused]] uint8_t __pad01b7[0x1]; 	// 0x1b7
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

// Alignment: 2
// Size: 0x270
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x188	
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
// Size: 0x1a0
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; 	// 0x181
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
	[[maybe_unused]] uint8_t __pad0195[0x3]; 	// 0x195
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x198	
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
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad0529[0x3]; 	// 0x529
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x52c	
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

// Alignment: 4
// Size: 0x280
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x188	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x270	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x274	
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
	[[maybe_unused]] uint8_t __pad0198[0x28]; 	// 0x198
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1c4	
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
	[[maybe_unused]] uint8_t __pad019c[0x24]; 	// 0x19c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c0	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1c4	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1c5	
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
	[[maybe_unused]] uint8_t __pad018c[0x24]; 	// 0x18c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0	
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
	[[maybe_unused]] uint8_t __pad018c[0x24]; 	// 0x18c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1b0	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1b4	
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
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad0191[0x3]; 	// 0x191
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x194	
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
	[[maybe_unused]] uint8_t __pad01a2[0x2]; 	// 0x1a2
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1a4	
};

// Alignment: 1
// Size: 0x190
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x180	
};

// Alignment: 1
// Size: 0x270
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x180	
};

// Alignment: 1
// Size: 0x270
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x180	
};

// Alignment: 1
// Size: 0x190
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x180	
};

// Alignment: 0
// Size: 0x180
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// no members available
};

// Alignment: 1
// Size: 0x190
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x180	
};

// Alignment: 1
// Size: 0x190
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x180	
};

// Alignment: 1
// Size: 0x190
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x180	
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

// Alignment: 1
// Size: 0x270
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x180	
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
	[[maybe_unused]] uint8_t __pad0188[0x4]; 	// 0x188
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x18c	
};

// Alignment: 0
// Size: 0x180
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1a0
class C_OP_Spin : public CGeneralSpin
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x180
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1a0
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0191[0x3]; 	// 0x191
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x194	
};

// Alignment: 5
// Size: 0x1a0
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0xc]; 	// 0x184
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

// Alignment: 6
// Size: 0x1c0
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x18]; 	// 0x184
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x19c	
private:
	[[maybe_unused]] uint8_t __pad01a0[0xc]; 	// 0x1a0
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
	[[maybe_unused]] uint8_t __pad0291[0x7]; 	// 0x291
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

// Alignment: 33
// Size: 0x690
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x480]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad067e[0x4]; 	// 0x67e
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x682	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x683	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x190	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x278	
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
	[[maybe_unused]] uint8_t __pad0191[0x3]; 	// 0x191
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x194	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x190	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x278	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0361[0x3]; 	// 0x361
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x364	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x368	
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
	[[maybe_unused]] uint8_t __pad0195[0x3]; 	// 0x195
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x198	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x19c	
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

// Alignment: 12
// Size: 0xa60
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x188	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x3]; 	// 0x5b9
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x5bc	
	// MPropertyFriendlyName "particle number"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x5c0	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x6a8	
private:
	[[maybe_unused]] uint8_t __pad06ac[0x4]; 	// 0x6ac
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

// Alignment: 4
// Size: 0x360
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x188	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x270	
private:
	[[maybe_unused]] uint8_t __pad0274[0x4]; 	// 0x274
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x278	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
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
	[[maybe_unused]] uint8_t __pad05bd[0x3]; 	// 0x5bd
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5c0	
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

// Alignment: 9
// Size: 0xd90
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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

// Alignment: 3
// Size: 0x9f0
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x188	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x5b8	
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
	[[maybe_unused]] uint8_t __pad0219[0x3]; 	// 0x219
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
	[[maybe_unused]] uint8_t __pad022e[0x2]; 	// 0x22e
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x230	
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
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad021a[0x2]; 	// 0x21a
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x21c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x220	
};

// Alignment: 4
// Size: 0x6b0
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x188	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x270	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x6a0	
};

// Alignment: 8
// Size: 0x310
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad0215[0x3]; 	// 0x215
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; 	// 0x21c
public:
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x220	
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
	[[maybe_unused]] uint8_t __pad0216[0x2]; 	// 0x216
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
	[[maybe_unused]] uint8_t __pad0225[0x3]; 	// 0x225
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x228	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x658	
};

// Alignment: 2
// Size: 0x190
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; 	// 0x181
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x184	
};

// Alignment: 6
// Size: 0x1a0
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; 	// 0x181
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
	[[maybe_unused]] uint8_t __pad01a2[0x2]; 	// 0x1a2
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1a4	
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
	[[maybe_unused]] uint8_t __pad0191[0x3]; 	// 0x191
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x194	
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
	[[maybe_unused]] uint8_t __pad0308[0x8]; 	// 0x308
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x310	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x314	
private:
	[[maybe_unused]] uint8_t __pad0315[0x2]; 	// 0x315
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x317	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad0319[0x3]; 	// 0x319
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x31c	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x320	
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
	[[maybe_unused]] uint8_t __pad018d[0x3]; 	// 0x18d
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x190	
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
	[[maybe_unused]] uint8_t __pad018c[0x4]; 	// 0x18c
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x190	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x278	
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
	[[maybe_unused]] uint8_t __pad01a5[0x3]; 	// 0x1a5
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x1a8	
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
	[[maybe_unused]] uint8_t __pad0192[0xe]; 	// 0x192
public:
	CPathParameters m_PathParams; // 0x1a0	
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
	[[maybe_unused]] uint8_t __pad0189[0x7]; 	// 0x189
public:
	CPathParameters m_PathParams; // 0x190	
};

// Alignment: 4
// Size: 0x1d0
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x184	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x188	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; 	// 0x18d
public:
	CPathParameters m_PathParams; // 0x190	
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
	[[maybe_unused]] uint8_t __pad019d[0x3]; 	// 0x19d
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1a0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1a4	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x1a5	
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

// Alignment: 1
// Size: 0x190
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x180	
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

// Alignment: 1
// Size: 0x190
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x180	
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
	[[maybe_unused]] uint8_t __pad019d[0x3]; 	// 0x19d
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x1a0	
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
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x184	
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
	[[maybe_unused]] uint8_t __pad021c[0xc]; 	// 0x21c
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x228	
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

// Alignment: 5
// Size: 0x1b0
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x188	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1a0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; 	// 0x1a2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1a4	
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
	[[maybe_unused]] uint8_t __pad01d2[0x2]; 	// 0x1d2
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

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad01d1[0x3]; 	// 0x1d1
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1e0
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// no members available
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
	[[maybe_unused]] uint8_t __pad0192[0x2]; 	// 0x192
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

// Alignment: 5
// Size: 0x380
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; 	// 0x184
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
	[[maybe_unused]] uint8_t __pad0189[0x3]; 	// 0x189
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x18c	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x7]; 	// 0x191
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
	[[maybe_unused]] uint8_t __pad0189[0x7]; 	// 0x189
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x190	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x278	
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
	[[maybe_unused]] uint8_t __pad0192[0x2]; 	// 0x192
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
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
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
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x1a0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x288	
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
	[[maybe_unused]] uint8_t __pad0193[0x1]; 	// 0x193
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
// Size: 0x5d0
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x190	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; 	// 0x192
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x194	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x198	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x5c8	
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
	[[maybe_unused]] uint8_t __pad0192[0x2]; 	// 0x192
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x194	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
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

// Alignment: 8
// Size: 0x2a0
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x1]; 	// 0x191
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
	[[maybe_unused]] uint8_t __pad01b4[0x4]; 	// 0x1b4
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1b8	
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
	[[maybe_unused]] uint8_t __pad01a1[0x3]; 	// 0x1a1
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
	[[maybe_unused]] uint8_t __pad023d[0x3]; 	// 0x23d
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x240	
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
	[[maybe_unused]] uint8_t __pad0199[0x3]; 	// 0x199
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x19c	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1a0	
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
	[[maybe_unused]] uint8_t __pad01b1[0x3]; 	// 0x1b1
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x1b4	
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

// Alignment: 1
// Size: 0x1a0
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x190	
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
// Size: 0x460
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; 	// 0x194
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
// Size: 0x280
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; 	// 0x194
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x198	
};

// Alignment: 1
// Size: 0x280
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x190	
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
	[[maybe_unused]] uint8_t __pad019c[0x4]; 	// 0x19c
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
	[[maybe_unused]] uint8_t __pad08e4[0x4]; 	// 0x8e4
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0x8e8	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0x9d0	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xab8	
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
	[[maybe_unused]] uint8_t __pad05c9[0x3]; 	// 0x5c9
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x5cc	
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
	[[maybe_unused]] uint8_t __pad18e1[0x3]; 	// 0x18e1
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
	[[maybe_unused]] uint8_t __pad18f1[0x3]; 	// 0x18f1
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
	[[maybe_unused]] uint8_t __pad16f1[0x3]; 	// 0x16f1
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
	[[maybe_unused]] uint8_t __pad1714[0x4]; 	// 0x1714
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
	[[maybe_unused]] uint8_t __pad19d5[0x3]; 	// 0x19d5
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
	[[maybe_unused]] uint8_t __pad19ec[0x1]; 	// 0x19ec
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x19ed	
private:
	[[maybe_unused]] uint8_t __pad19ee[0x2]; 	// 0x19ee
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
	[[maybe_unused]] uint8_t __pad19fa[0x2]; 	// 0x19fa
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

// Alignment: 8
// Size: 0x210
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01e8[0x4]; 	// 0x1e8
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x1ec	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x1f0	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; 	// 0x1f2
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
	[[maybe_unused]] uint8_t __pad01e9[0x3]; 	// 0x1e9
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
	[[maybe_unused]] uint8_t __pad048c[0x4]; 	// 0x48c
public:
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x490	
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
	[[maybe_unused]] uint8_t __pad01d2[0x6]; 	// 0x1d2
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x4]; 	// 0x1f0
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
	[[maybe_unused]] uint8_t __pad01fe[0x2]; 	// 0x1fe
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
	[[maybe_unused]] uint8_t __pad0a61[0x3]; 	// 0xa61
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
	[[maybe_unused]] uint8_t __pad0e99[0x3]; 	// 0xe99
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
	[[maybe_unused]] uint8_t __pad0fb1[0x7]; 	// 0xfb1
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
	[[maybe_unused]] uint8_t __pad0fc1[0x3]; 	// 0xfc1
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0xfc4	
	// MPropertyFriendlyName "skin override CP"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fcc[0x4]; 	// 0xfcc
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
	[[maybe_unused]] uint8_t __pad11f9[0x7]; 	// 0x11f9
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
	[[maybe_unused]] uint8_t __pad13d4[0x4]; 	// 0x13d4
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x13d8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x1808	
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
	[[maybe_unused]] uint8_t __pad01d5[0x3]; 	// 0x1d5
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
	[[maybe_unused]] uint8_t __pad01ed[0x3]; 	// 0x1ed
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1f0	
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
	[[maybe_unused]] uint8_t __pad01d2[0x2]; 	// 0x1d2
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

// Alignment: 29
// Size: 0xdb0
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; 	// 0x1d4
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x1d8	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; 	// 0x60c
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x610	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x7]; 	// 0x6f9
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
	[[maybe_unused]] uint8_t __pad09bc[0x4]; 	// 0x9bc
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
	[[maybe_unused]] uint8_t __pad0c7a[0x6]; 	// 0xc7a
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
	[[maybe_unused]] uint8_t __pad0d82[0x2]; 	// 0xd82
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
	[[maybe_unused]] uint8_t __pad0d91[0x3]; 	// 0xd91
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

// Alignment: 0
// Size: 0x1d0
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1d0
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// no members available
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

// Alignment: 2
// Size: 0x1e0
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; 	// 0x1d4
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x1d8	
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
	[[maybe_unused]] uint8_t __pad01dc[0x4]; 	// 0x1dc
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x1e0	
};

// Alignment: 1
// Size: 0x1a10
class C_OP_RenderFogSprites : public C_OP_RenderSprites
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1a00	
};

