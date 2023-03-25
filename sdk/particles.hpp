#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: particles.dll
// Classes count: 418
// Enums count: 66
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

// Alignment: 4
// Size: 0x14
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
	PF_TYPE_PARTICLE_NOISE = 0xa,
	PF_TYPE_PARTICLE_AGE = 0xb,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0xc,
	PF_TYPE_PARTICLE_FLOAT = 0xd,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0xe,
	PF_TYPE_PARTICLE_SPEED = 0xf,
	PF_TYPE_PARTICLE_NUMBER = 0x10,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x11,
	PF_TYPE_COUNT = 0x12,
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
struct TextureControls_t;
struct CParticleCollectionVecInput;
struct CParticleTransformInput;
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

// Alignment: 60
// Size: 0x3a0
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
	[[maybe_unused]] uint8_t __pad017c[0x74]; // 0x17c
public:
	// MPropertyStartGroup "+Collection Options"
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x1f0	
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x1f4	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1f8	
	// MPropertyStartGroup "Bounding Box"
	// MPropertyFriendlyName "bounding box bloat min"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1fc	
	// MPropertyFriendlyName "bounding box bloat max"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x208	
	// MPropertyFriendlyName "bounding box depth sort bias"
	float m_flDepthSortBias; // 0x214	
	// MPropertyFriendlyName "sort override position CP"
	int32_t m_nSortOverridePositionCP; // 0x218	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x21c	
	// MPropertyStartGroup "+Base Properties"
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	Color m_ConstantColor; // 0x21d	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "normal"
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x224	
	// MPropertyFriendlyName "radius"
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x230	
	// MPropertyFriendlyName "rotation"
	float m_flConstantRotation; // 0x234	
	// MPropertyFriendlyName "rotation speed"
	float m_flConstantRotationSpeed; // 0x238	
	// MPropertyFriendlyName "lifetime"
	float m_flConstantLifespan; // 0x23c	
	// MPropertyFriendlyName "sequence number"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x240	
	// MPropertyFriendlyName "sequence number 1"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x244	
	// MPropertyStartGroup "Snapshot Options"
	int32_t m_nSnapshotControlPoint; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad024c[0x4]; // 0x24c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x250	
	// MPropertyStartGroup "Replacement Options"
	// MPropertyFriendlyName "cull replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x258	
	// MPropertyFriendlyName "cull radius"
	float m_flCullRadius; // 0x260	
	// MPropertyFriendlyName "cull cost"
	float m_flCullFillCost; // 0x264	
	// MPropertyFriendlyName "cull control point"
	int32_t m_nCullControlPoint; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad026c[0x4]; // 0x26c
public:
	// MPropertyFriendlyName "fallback replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x270	
	// MPropertyFriendlyName "fallback max count"
	int32_t m_nFallbackMaxCount; // 0x278	
private:
	[[maybe_unused]] uint8_t __pad027c[0x4]; // 0x27c
public:
	// MPropertyFriendlyName "low violence definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x280	
	// MPropertyFriendlyName "reference replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x288	
	// MPropertyStartGroup "Simulation Options"
	// MPropertyFriendlyName "pre-simulation time"
	float m_flPreSimulationTime; // 0x290	
	// MPropertyFriendlyName "freeze simulation after time"
	float m_flStopSimulationAfterTime; // 0x294	
	// MPropertyFriendlyName "maximum time step"
	float m_flMaximumTimeStep; // 0x298	
	// MPropertyFriendlyName "maximum sim tick rate"
	float m_flMaximumSimTime; // 0x29c	
	// MPropertyFriendlyName "minimum sim tick rate"
	float m_flMinimumSimTime; // 0x2a0	
	// MPropertyFriendlyName "minimum simulation time step"
	float m_flMinimumTimeStep; // 0x2a4	
	// MPropertyFriendlyName "minimum required rendered frames"
	int32_t m_nMinimumFrames; // 0x2a8	
	// MPropertyStartGroup "Performance Options"
	// MPropertyFriendlyName "minimum CPU level"
	int32_t m_nMinCPULevel; // 0x2ac	
	// MPropertyFriendlyName "minimum GPU level"
	int32_t m_nMinGPULevel; // 0x2b0	
	// MPropertyFriendlyName "time to sleep when not drawn"
	float m_flNoDrawTimeToGoToSleep; // 0x2b4	
	// MPropertyFriendlyName "maximum draw distance"
	float m_flMaxDrawDistance; // 0x2b8	
	// MPropertyFriendlyName "start fade distance"
	float m_flStartFadeDistance; // 0x2bc	
	// MPropertyFriendlyName "maximum creation distance"
	float m_flMaxCreationDistance; // 0x2c0	
	// MPropertyFriendlyName "minimum free particles to aggregate"
	int32_t m_nAggregationMinAvailableParticles; // 0x2c4	
	// MPropertyFriendlyName "aggregation radius"
	float m_flAggregateRadius; // 0x2c8	
	// MPropertyFriendlyName "batch particle systems"
	bool m_bShouldBatch; // 0x2cc	
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x2cd	
private:
	[[maybe_unused]] uint8_t __pad02ce[0x2]; // 0x2ce
public:
	// MPropertyStartGroup "Rendering Options"
	// MPropertyFriendlyName "view model effect"
	// MPropertySuppressExpr "m_bScreenSpaceEffect"
	InheritableBoolType_t m_nViewModelEffect; // 0x2d0	
	// MPropertyFriendlyName "screen space effect"
	// MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
	bool m_bScreenSpaceEffect; // 0x2d4	
private:
	[[maybe_unused]] uint8_t __pad02d5[0x3]; // 0x2d5
public:
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x2d8	
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	int32_t m_nSkipRenderControlPoint; // 0x2e0	
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	int32_t m_nAllowRenderControlPoint; // 0x2e4	
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MParticleAdvancedField
	bool m_bShouldSort; // 0x2e8	
private:
	[[maybe_unused]] uint8_t __pad02e9[0x3f]; // 0x2e9
public:
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x328	
};

// Alignment: 43
// Size: 0x138
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
	[[maybe_unused]] uint8_t __pad00b9[0x7]; // 0xb9
public:
	ParticleFloatInputMode_t m_nInputMode; // 0xc0	
	float m_flMultFactor; // 0xc4	
	float m_flInput0; // 0xc8	
	float m_flInput1; // 0xcc	
	float m_flOutput0; // 0xd0	
	float m_flOutput1; // 0xd4	
	float m_flNotchedRangeMin; // 0xd8	
	float m_flNotchedRangeMax; // 0xdc	
	float m_flNotchedOutputOutside; // 0xe0	
	float m_flNotchedOutputInside; // 0xe4	
	ParticleFloatBiasType_t m_nBiasType; // 0xe8	
	float m_flBiasParameter; // 0xec	
	CPiecewiseCurve m_Curve; // 0xf0	
};

// Alignment: 0
// Size: 0x138
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x1f0
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
	ParticleEndcapMode_t m_nOpEndCapState; // 0x140	
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x144	
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0x148	
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x14c	
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x150	
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x154	
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad0159[0x3]; // 0x159
public:
	// MPropertyStartGroup "Operator Fade Time Offset"
	// MPropertyFriendlyName "operator fade time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x15c	
	// MPropertyFriendlyName "operator fade time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x160	
	// MPropertyFriendlyName "operator fade time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x164	
	// MPropertyStartGroup "Operator Fade Timescale Modifiers"
	// MPropertyFriendlyName "operator fade time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x168	
	// MPropertyFriendlyName "operator fade time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x16c	
	// MPropertyFriendlyName "operator fade time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0174[0x1]; // 0x174
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x175	
private:
	[[maybe_unused]] uint8_t __pad0176[0x2]; // 0x176
public:
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x178	
};

// Alignment: 0
// Size: 0x1f0
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1f0
class CParticleFunctionForce : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1f0
class CParticleFunctionOperator : public CParticleFunction
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x200
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x1f0	
};

// Alignment: 3
// Size: 0x230
class CParticleFunctionRenderer : public CParticleFunction
{
	// Collision detected(0x1e8->0x1f0), output may be wrong.
public:
	// Skipped field "VisibilityInputs" @ 0x1e8 because of the struct collision
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x22c	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x22d	
};

// Alignment: 16
// Size: 0x8a8
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleV; // 0x138	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetU; // 0x270	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetV; // 0x3a8	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionFloatInput m_flFinalTextureUVRotation; // 0x4e0	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionFloatInput m_flZoomScale; // 0x618	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionFloatInput m_flDistortion; // 0x750	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x888	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x889	
private:
	[[maybe_unused]] uint8_t __pad088a[0x2]; // 0x88a
public:
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x88c	
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x890	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x894	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x898	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x89c	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x8a0	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x8a4	
};

// Alignment: 9
// Size: 0xa18
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
	CParticleCollectionFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x170	
};

// Alignment: 22
// Size: 0x5c8
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
	CParticleFloatInput m_FloatComponentY; // 0x1c8	
	CParticleFloatInput m_FloatComponentZ; // 0x300	
	CParticleFloatInput m_FloatInterp; // 0x438	
	float m_flInterpInput0; // 0x570	
	float m_flInterpInput1; // 0x574	
	Vector m_vInterpOutput0; // 0x578	
	Vector m_vInterpOutput1; // 0x584	
	CColorGradient m_Gradient; // 0x590	
	Vector m_vRandomMin; // 0x5a8	
	Vector m_vRandomMax; // 0x5b4	
};

// Alignment: 0
// Size: 0x5c8
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x140
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInput; // 0x8	
};

// Alignment: 2
// Size: 0x5d0
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8	
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
// Size: 0x1f0
class CParticleFunctionEmitter : public CParticleFunction
{
	// Collision detected(0x1e8->0x1f0), output may be wrong.
public:
	// Skipped field "m_nEmitterIndex" @ 0x1e8 because of the struct collision
};

// Alignment: 0
// Size: 0x138
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x1f0
class CParticleFunctionInitializer : public CParticleFunction
{
	// Collision detected(0x1e8->0x1f0), output may be wrong.
public:
	// Skipped field "m_nAssociatedEmitterIndex" @ 0x1e8 because of the struct collision
};

// Alignment: 0
// Size: 0x138
class CParticleRemapFloatInput : public CParticleFloatInput
{
public:
	// No members available
};

// Alignment: 22
// Size: 0x12a0
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x230	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x368	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4a0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xa68	
private:
	[[maybe_unused]] uint8_t __pad0a6c[0x4]; // 0xa6c
public:
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xa70	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a7c[0x4]; // 0xa7c
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xa80	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xbb8	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xcf0	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xe28	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xf60	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1098	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x11d0	
private:
	[[maybe_unused]] uint8_t __pad11d1[0x3]; // 0x11d1
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x11d4	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x11d8	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x11dc	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x11e0	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x11e4	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x11e8	
private:
	[[maybe_unused]] uint8_t __pad11ec[0x4]; // 0x11ec
public:
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LightingTransform; // 0x11f0	
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x1240	
private:
	[[maybe_unused]] uint8_t __pad1258[0x18]; // 0x1258
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x1270	
};

// Alignment: 60
// Size: 0x2050
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x230	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x368	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x4a0	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x4]; // 0x5dc
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x5e0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xba8	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xbac	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xbb0	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterXOffset; // 0xbb8	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterYOffset; // 0xcf0	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xe28	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xe2c	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xe30	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xe48	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xe4c	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xe50	
private:
	[[maybe_unused]] uint8_t __pad0e51[0x7]; // 0xe51
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flSelfIllumAmount; // 0xe58	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flDiffuseAmount; // 0xf90	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x10c8	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x10cc	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x10d0	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x10d4	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x10d5	
private:
	[[maybe_unused]] uint8_t __pad10d6[0x2]; // 0x10d6
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAddSelfAmount; // 0x10d8	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flDesaturation; // 0x1210	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flOverbrightFactor; // 0x1348	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1480	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1484	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x1488	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x1489	
private:
	[[maybe_unused]] uint8_t __pad148a[0x2]; // 0x148a
public:
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x148c	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1490	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1494	
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAlphaReferenceSoftness; // 0x1498	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToZero; // 0x15d0	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToOne; // 0x1708	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1840	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1841	
private:
	[[maybe_unused]] uint8_t __pad1842[0x6]; // 0x1842
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionFloatInput m_flRefractAmount; // 0x1848	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1980	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1984	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1988	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1989	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x198a	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x198b	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x198c	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1a0c	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x1a0d	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1a8d	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1a8e	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1a8f	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1a90	
private:
	[[maybe_unused]] uint8_t __pad1a91[0x3]; // 0x1a91
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1a94	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMinDist; // 0x1a98	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMaxDist; // 0x1bd0	
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringFilter; // 0x1d08	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x1e40	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x1e44	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x1e48	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x1e49	
};

// Alignment: 0
// Size: 0x5c8
class CPerParticleVecInput : public CParticleVecInput
{
public:
	// No members available
};

// Alignment: 27
// Size: 0x26c0
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionFloatInput m_nSequenceOverride; // 0x2050	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2188	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x218c	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x2190	
private:
	[[maybe_unused]] uint8_t __pad2191[0x3]; // 0x2191
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x2194	
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x2198	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x219c	
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x21a0	
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x22d8	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2410	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2414	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x2418	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x2419	
private:
	[[maybe_unused]] uint8_t __pad241a[0x2]; // 0x241a
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x241c	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x2420	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x2424	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x2425	
private:
	[[maybe_unused]] uint8_t __pad2429[0x3]; // 0x2429
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x242c	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x2430	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x2434	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x2438	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x243c	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x2440	
private:
	[[maybe_unused]] uint8_t __pad2444[0x4]; // 0x2444
public:
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionFloatInput m_flLightingTessellation; // 0x2448	
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionFloatInput m_flLightingDirectionality; // 0x2580	
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	bool m_bParticleShadows; // 0x26b8	
private:
	[[maybe_unused]] uint8_t __pad26b9[0x3]; // 0x26b9
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x26bc	
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
// Size: 0x480
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1f0	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x328	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x460	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x464	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x470	
};

// Alignment: 2
// Size: 0x460
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1f0	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x328	
};

// Alignment: 2
// Size: 0x460
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x1f0	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x328	
};

// Alignment: 8
// Size: 0x250
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1f0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x1f4	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x1f8	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x1fc	
	CPathParameters m_PathParameters; // 0x200	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x240	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x244	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x248	
};

// Alignment: 5
// Size: 0x220
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1f0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1f4	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1f8	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x200	
};

// Alignment: 7
// Size: 0x480
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x1f0	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x1fc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x208	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x20c	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x20d	
private:
	[[maybe_unused]] uint8_t __pad020e[0x2]; // 0x20e
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x348	
};

// Alignment: 0
// Size: 0x1f0
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// No members available
};

// Alignment: 26
// Size: 0x8e0
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x1f0	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x1f4	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x200	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x204	
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x208	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x20c	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x28c	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x28d	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x28e	
private:
	[[maybe_unused]] uint8_t __pad028f[0x1]; // 0x28f
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x290	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x294	
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x298	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x29c	
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x2a0	
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x2a4	
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x2a8	
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x3e0	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x518	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x650	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x788	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x789	
private:
	[[maybe_unused]] uint8_t __pad078a[0x2]; // 0x78a
public:
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x78c	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x794	
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x798	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x8d0	
};

// Alignment: 4
// Size: 0x210
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	Vector m_vecMin; // 0x1f0	
	// MPropertyFriendlyName "max coords"
	Vector m_vecMax; // 0x1fc	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x208	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x20c	
};

// Alignment: 5
// Size: 0x6e0
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x1f0	
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x328	
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x460	
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad059c[0x4]; // 0x59c
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5a0	
};

// Alignment: 5
// Size: 0xca0
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x1f0	
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x328	
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x460	
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x598	
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x6d0	
};

// Alignment: 2
// Size: 0x200
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x1f0	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x1f4	
};

// Alignment: 11
// Size: 0xc10
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x240	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x378	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4b0	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x5e8	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x720	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x858	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0x990	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xac8	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xc00	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xc01	
};

// Alignment: 7
// Size: 0x210
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x1f4	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x1f8	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x1fc	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x200	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x204	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x208	
};

// Alignment: 10
// Size: 0x6f0
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1f0	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1f4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x200	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x338	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x470	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x5a8	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x6e0	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x6e1	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x6e2	
};

// Alignment: 14
// Size: 0x220
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x1f4	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1f8	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x1fc	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x200	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x204	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x208	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x20c	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x210	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x214	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x218	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x21c	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x21d	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x21e	
};

// Alignment: 12
// Size: 0xf60
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1f4	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f8	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x1fc	
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x200	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0x7c8	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0x7cc	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x7d0	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xd98	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xe18	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0xe19	
private:
	[[maybe_unused]] uint8_t __pad0e1a[0x6]; // 0xe1a
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0xe20	
};

// Alignment: 14
// Size: 0x11c0
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f0	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1f8	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x200	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x338	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x900	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xec8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xecc	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xecd	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xece	
private:
	[[maybe_unused]] uint8_t __pad0f4e[0x2]; // 0xf4e
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xf50	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1088	
};

// Alignment: 9
// Size: 0x990
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f4	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1f8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x7c0	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x840	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x841	
private:
	[[maybe_unused]] uint8_t __pad0842[0x2]; // 0x842
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x844	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x848	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0x980	
};

// Alignment: 9
// Size: 0x990
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1f4	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x200	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x7c8	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x7d4	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x7d5	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x7d6	
private:
	[[maybe_unused]] uint8_t __pad0856[0x2]; // 0x856
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x858	
};

// Alignment: 14
// Size: 0x18a0
class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x1f0	
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x328	
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x460	
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a34[0x4]; // 0xa34
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0xa38	
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0xa88	
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0xbc0	
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0xcf8	
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0cfd[0x3]; // 0xcfd
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d04[0x4]; // 0xd04
public:
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xd08	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x12d0	
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1898	
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x189c	
};

// Alignment: 5
// Size: 0xd90
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1f0	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x7b8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xd80	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xd84	
private:
	[[maybe_unused]] uint8_t __pad0d85[0x3]; // 0xd85
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xd88	
};

// Alignment: 10
// Size: 0x950
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1f0	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x328	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x460	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x598	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x6d0	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x808	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x940	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x944	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x945	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x946	
};

// Alignment: 6
// Size: 0xde0
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1f0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x7b8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xd80	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xdd0	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xdd1	
private:
	[[maybe_unused]] uint8_t __pad0dd2[0x2]; // 0xdd2
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xdd4	
};

// Alignment: 3
// Size: 0x200
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x1f0	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x1f4	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1f8	
};

// Alignment: 13
// Size: 0x510
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1f0	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x328	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x460	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0xc]; // 0x4e4
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x4f0	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x4f4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x4f5	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x4f6	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x4f7	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x4fc	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x500	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x504	
};

// Alignment: 3
// Size: 0x200
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1f0	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1f4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1f8	
};

// Alignment: 7
// Size: 0x1010
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1f8	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x330	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x468	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xa30	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad0ff9[0x3]; // 0xff9
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xffc	
};

// Alignment: 10
// Size: 0x1760
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x1f0	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x1fc	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x208	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x7d0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x908	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xed0	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x1498	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x15d0	
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleTransformInputOptional
	CParticleTransformInput m_TransformInput; // 0x1708	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1758	
};

// Alignment: 5
// Size: 0x280
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x1f0	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x1f4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1fc	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x27c	
};

// Alignment: 5
// Size: 0x210
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1f4	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1f8	
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad0208[0x1]; // 0x208
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x209	
};

// Alignment: 3
// Size: 0x200
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x1f0	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x1f4	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x1f8	
};

// Alignment: 4
// Size: 0x200
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc	
};

// Alignment: 4
// Size: 0x220
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x1f0	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x1fc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x208	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x20c	
};

// Alignment: 4
// Size: 0x200
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1fc	
};

// Alignment: 6
// Size: 0x230
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x200	
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x204	
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x210	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x21c	
};

// Alignment: 3
// Size: 0x200
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1f8	
};

// Alignment: 3
// Size: 0x200
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x1f0	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x1f4	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x1f8	
};

// Alignment: 4
// Size: 0x210
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x1f4	
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x8]; // 0x1fc
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x204	
};

// Alignment: 6
// Size: 0x210
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x1f4	
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x1f8	
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x1fc	
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x200	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x204	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x200
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f8	
};

// Alignment: 0
// Size: 0x210
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// No members available
};

// Alignment: 10
// Size: 0x240
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01f0[0x1c]; // 0x1f0
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x20c	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x210	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x214	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x218	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x21c	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x220	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x224	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x22c	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x230	
};

// Alignment: 7
// Size: 0x230
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01f0[0x18]; // 0x1f0
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x208	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x20c	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x210	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x214	
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x218	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x21c	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x220	
};

// Alignment: 3
// Size: 0x200
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x1f0	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x1f4	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x1f8	
};

// Alignment: 5
// Size: 0x220
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x1f0	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x1f4	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1f8	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1f9	
private:
	[[maybe_unused]] uint8_t __pad01fa[0x6]; // 0x1fa
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x200	
};

// Alignment: 4
// Size: 0x210
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x1f0	
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f4	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1f8	
};

// Alignment: 3
// Size: 0x400
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MPropertySuppressExpr "mod != dota"
	char m_ActivityName[256]; // 0x1f0	
	// MPropertyFriendlyName "sequence"
	// MPropertySuppressExpr "mod == dota"
	char m_SequenceName[256]; // 0x2f0	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3f0	
};

// Alignment: 1
// Size: 0x7c0
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x1f0	
};

// Alignment: 10
// Size: 0xda0
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x1f0	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x7b8	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xd80	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xd84	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xd88	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xd8c	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xd90	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xd94	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xd98	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xd99	
};

// Alignment: 6
// Size: 0x350
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x1f0	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x1fc	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x208	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x340	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x344	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x348	
};

// Alignment: 10
// Size: 0x220
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1f4	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1f5	
private:
	[[maybe_unused]] uint8_t __pad01f6[0x2]; // 0x1f6
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x204	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x208	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x20c	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x218	
};

// Alignment: 5
// Size: 0x260
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0xc]; // 0x1f4
public:
	CPathParameters m_PathParams; // 0x200	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0241[0x3]; // 0x241
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x244	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x250	
};

// Alignment: 7
// Size: 0x810
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x1f0	
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x328	
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x460	
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x598	
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x6d0	
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x808	
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x80c	
};

// Alignment: 11
// Size: 0x220
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x208	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x20c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x214	
private:
	[[maybe_unused]] uint8_t __pad0215[0x3]; // 0x215
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x218	
};

// Alignment: 12
// Size: 0x220
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1f4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1f8	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x1fc	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x210	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x211	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x212	
private:
	[[maybe_unused]] uint8_t __pad0213[0x1]; // 0x213
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x214	
};

// Alignment: 4
// Size: 0x240
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x220	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x228	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x230	
	bool m_bModelFromRenderer; // 0x238	
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x200
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1f4	
};

// Alignment: 5
// Size: 0x210
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x1f0	
	// MPropertyFriendlyName "comparison control point number"
	int32_t m_nControlPointCompare; // 0x1f4	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nControlPointLocal; // 0x1f8	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1fc	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x200	
};

// Alignment: 8
// Size: 0x220
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1f0	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1f4	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x1f8	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x1fc	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x200	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x204	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x208	
};

// Alignment: 1
// Size: 0x200
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x1f0	
};

// Alignment: 12
// Size: 0x240
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x20c	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x218	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x21c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x220	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x224	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0229[0x3]; // 0x229
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x22c	
};

// Alignment: 5
// Size: 0x220
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1f8	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x204	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x210	
};

// Alignment: 6
// Size: 0x4c0
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1f0	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x328	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x460	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x461	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x462	
private:
	[[maybe_unused]] uint8_t __pad0463[0xd]; // 0x463
public:
	CPathParameters m_PathParams; // 0x470	
};

// Alignment: 6
// Size: 0x240
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1f4	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1f8	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1f9	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1fa	
private:
	[[maybe_unused]] uint8_t __pad01fb[0x5]; // 0x1fb
public:
	CPathParameters m_PathParams; // 0x200	
};

// Alignment: 13
// Size: 0x2b0
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1f0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x270	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x274	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x280	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x28c	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x290	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x291	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x292	
private:
	[[maybe_unused]] uint8_t __pad0293[0x1]; // 0x293
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x294	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x298	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x299	
private:
	[[maybe_unused]] uint8_t __pad029a[0x2]; // 0x29a
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x29c	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x2a0	
};

// Alignment: 1
// Size: 0x200
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x1f0	
};

// Alignment: 2
// Size: 0x200
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x1f0	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x1f4	
};

// Alignment: 11
// Size: 0x220
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x20c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x210	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x214	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x218	
};

// Alignment: 13
// Size: 0x2e0
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1f4	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x20c	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x228	
	// MPropertyFriendlyName "local space transform"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x278	
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

// Alignment: 9
// Size: 0x220
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x1f0	
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x1f4	
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x1f8	
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x1fc	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x200	
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x204	
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x208	
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x20c	
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x210	
};

// Alignment: 5
// Size: 0x210
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x1f0	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1f4	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x3]; // 0x1f9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x200	
};

// Alignment: 5
// Size: 0x210
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x200	
};

// Alignment: 4
// Size: 0x340
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x1f0	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x1f4	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x200	
};

// Alignment: 15
// Size: 0x8c0
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x6d8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x6dc	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x6dd	
private:
	[[maybe_unused]] uint8_t __pad075d[0x3]; // 0x75d
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x768	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x8a0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x8a4	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0x3]; // 0x8a9
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x8ac	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x8b8	
};

// Alignment: 8
// Size: 0x2b0
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1f0	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1fc	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x200	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x204	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x210	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0294[0xc]; // 0x294
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x2a0	
};

// Alignment: 3
// Size: 0x210
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x1f0	
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad0208[0x1]; // 0x208
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x209	
};

// Alignment: 5
// Size: 0x280
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1f5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1f7	
};

// Alignment: 3
// Size: 0x340
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x330	
};

// Alignment: 3
// Size: 0x340
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x330	
};

// Alignment: 1
// Size: 0x330
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x1f0	
};

// Alignment: 8
// Size: 0x2a0
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1f0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1fc	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x208	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x209	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x20a	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x20b	
private:
	[[maybe_unused]] uint8_t __pad028b[0x1]; // 0x28b
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x28c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x290	
};

// Alignment: 2
// Size: 0x200
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x1f4	
};

// Alignment: 5
// Size: 0x210
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x1f0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x1fc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x208	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x20c	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x20d	
};

// Alignment: 10
// Size: 0x220
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1f8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1fc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x200	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x204	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x208	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x20c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x214	
};

// Alignment: 9
// Size: 0x350
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1f4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1fc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x200	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x6]; // 0x202
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x208	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x340	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x344	
};

// Alignment: 17
// Size: 0x230
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x3]; // 0x1f9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x200	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x201	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x202	
private:
	[[maybe_unused]] uint8_t __pad0203[0x1]; // 0x203
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x204	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x208	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x20c	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	int32_t m_nFullLoopIncrement; // 0x210	
	// MPropertyFriendlyName "Snapshot start point"
	int32_t m_nSnapShotStartPoint; // 0x214	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x218	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x21c	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x220	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x221	
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x222	
};

// Alignment: 1
// Size: 0x280
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1f0	
};

// Alignment: 5
// Size: 0x7d0
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1f4	
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x1f8	
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x200	
};

// Alignment: 6
// Size: 0x260
class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x244	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x248	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x24c	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x258	
};

// Alignment: 4
// Size: 0x250
class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x244	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x248	
};

// Alignment: 1
// Size: 0x240
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
};

// Alignment: 4
// Size: 0x250
class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x240	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x24c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x24d	
};

// Alignment: 4
// Size: 0x200
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4	
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x1fc	
};

// Alignment: 5
// Size: 0x210
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01f0[0x4]; // 0x1f0
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
};

// Alignment: 1
// Size: 0x200
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0	
};

// Alignment: 8
// Size: 0x210
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c	
};

// Alignment: 6
// Size: 0x200
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x1f0	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x1fc	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x1fd	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x1fe	
};

// Alignment: 5
// Size: 0x220
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1f8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x210	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x214	
};

// Alignment: 6
// Size: 0x220
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1f8	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x210	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x211	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x212	
private:
	[[maybe_unused]] uint8_t __pad0213[0x1]; // 0x213
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214	
};

// Alignment: 0
// Size: 0x220
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x220
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x220
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x240
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1f8	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x210	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x228	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x22c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x230	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x234	
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x240
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No members available
};

// Alignment: 18
// Size: 0x250
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x1f0	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x1f4	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x1f8	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x1fc	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x200	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x204	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x208	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x20c	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x210	
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x214	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x218	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x21c	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x220	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x224	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x228	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x22c	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x230	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x234	
};

// Alignment: 19
// Size: 0x240
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x1f0	
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x1f4	
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x1f8	
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x1fc	
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x200	
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x204	
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x208	
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x20c	
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x210	
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x214	
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x218	
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x21c	
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x220	
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x224	
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x228	
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x22c	
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x230	
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x234	
	// MPropertyFriendlyName "$SFXUseModelUVs"
	float m_flSFXSUseModelUVs; // 0x238	
};

// Alignment: 5
// Size: 0x5b0
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x1f0	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x328	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x460	
private:
	[[maybe_unused]] uint8_t __pad0464[0x4]; // 0x464
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x468	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5a0	
};

// Alignment: 2
// Size: 0x330
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
};

// Alignment: 6
// Size: 0xe00
class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xd88	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd8c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd90	
};

// Alignment: 2
// Size: 0x330
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
};

// Alignment: 4
// Size: 0x470
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c	
	// MPropertyFriendlyName "per-particle strength"
	CPerParticleFloatInput m_InputStrength; // 0x330	
};

// Alignment: 2
// Size: 0x7c0
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8	
};

// Alignment: 5
// Size: 0x7d0
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7bc	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x7c0	
	// MPropertyFriendlyName "set previous position"
	// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
	bool m_bWritePreviousPosition; // 0x7c1	
};

// Alignment: 5
// Size: 0x470
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1f0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328	
	// MPropertyFriendlyName "emission scale from killed parent particles"
	float m_flInitFromKilledParentParticles; // 0x460	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x464	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x468	
};

// Alignment: 9
// Size: 0x5b0
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1f0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x460	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x598	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x59c	
	// MPropertyFriendlyName "emit particles for killed parent particles"
	bool m_bInitFromKilledParentParticles; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a1[0x3]; // 0x5a1
public:
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5a4	
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x5a8	
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x5a9	
};

// Alignment: 15
// Size: 0x230
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x1f0	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1f4	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x1f8	
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x1fc	
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x200	
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x204	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x208	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x209	
private:
	[[maybe_unused]] uint8_t __pad020a[0x2]; // 0x20a
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x20c	
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x210	
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x214	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x218	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x21c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x220	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x22c	
};

// Alignment: 8
// Size: 0x480
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1f0	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1f4	
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1f8	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x330	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x334	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x338	
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x339	
private:
	[[maybe_unused]] uint8_t __pad033a[0x6]; // 0x33a
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x340	
};

// Alignment: 2
// Size: 0x210
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x1f0	
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x1fc	
};

// Alignment: 2
// Size: 0x330
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x1f8	
};

// Alignment: 3
// Size: 0x210
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x1f0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x1f4	
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x200	
};

// Alignment: 4
// Size: 0x210
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x1f0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x1f4	
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x204	
};

// Alignment: 6
// Size: 0x4d0
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x200	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x340	
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x390	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x4c8	
};

// Alignment: 7
// Size: 0x230
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x1f0	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x1f4	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x200	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x204	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x210	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x21c	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x220	
};

// Alignment: 4
// Size: 0x210
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x1f0	
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x1f4	
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x200	
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x204	
};

// Alignment: 8
// Size: 0x230
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x1f0	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x1f4	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x1f8	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x1fc	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x200	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x20c	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x218	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x224	
};

// Alignment: 6
// Size: 0x15c0
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x1f8	
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x7c0	
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0xd88	
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0x1350	
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0x1488	
};

// Alignment: 3
// Size: 0x900
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1f0	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x328	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x8f0	
};

// Alignment: 1
// Size: 0x200
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x1f0	
};

// Alignment: 4
// Size: 0xd90
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x1f0	
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x7b8	
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xd80	
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xd81	
};

// Alignment: 5
// Size: 0x330
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1f0	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x328	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x329	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x32a	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x32b	
};

// Alignment: 3
// Size: 0x7c0
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x1f0	
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x1f4	
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x1f8	
};

// Alignment: 1
// Size: 0x200
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Acceleration"
	float m_flAccel; // 0x1f0	
};

// Alignment: 5
// Size: 0x210
class C_OP_ExternalGenericForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "strength"
	float m_flStrength; // 0x1f0	
	// MPropertyFriendlyName "curl strength"
	float m_flCurlStrength; // 0x1f4	
	// MPropertyFriendlyName "linear strength"
	float m_flLinearStrength; // 0x1f8	
	// MPropertyFriendlyName "radial strength"
	float m_flRadialStrength; // 0x1fc	
	// MPropertyFriendlyName "rotation strength"
	float m_flRotationStrength; // 0x200	
};

// Alignment: 2
// Size: 0x200
class C_OP_DensityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0	
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x1f4	
};

// Alignment: 3
// Size: 0x210
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x1f0	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x1fc	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x200	
};

// Alignment: 7
// Size: 0x210
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1f0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1f4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1f8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1fc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x200	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x204	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x208	
};

// Alignment: 6
// Size: 0x210
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1f0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1f4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1f8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1fc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x200	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x204	
};

// Alignment: 4
// Size: 0x200
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x1f0	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x1f4	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x1f8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1fc	
};

// Alignment: 6
// Size: 0x240
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x1f0	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x1f4	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x1f8	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad0200[0x30]; // 0x200
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x230	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x231	
};

// Alignment: 2
// Size: 0x200
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x1f0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
};

// Alignment: 2
// Size: 0x200
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x1f0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
};

// Alignment: 3
// Size: 0x470
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1f8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x330	
};

// Alignment: 3
// Size: 0xd90
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMin; // 0x1f8	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMax; // 0x7c0	
};

// Alignment: 13
// Size: 0x220
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x1f0	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x1f4	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x1f8	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x1fc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x204	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x205	
private:
	[[maybe_unused]] uint8_t __pad0206[0x2]; // 0x206
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x208	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x20c	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x210	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x214	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x218	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x21c	
};

// Alignment: 5
// Size: 0x230
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x1f0	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x1f4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1fc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x200	
};

// Alignment: 15
// Size: 0x5e0
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x1f0	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x1fc	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x208	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x214	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x220	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x224	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x225	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x226	
private:
	[[maybe_unused]] uint8_t __pad0227[0x1]; // 0x227
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
	CPerParticleFloatInput m_flOscMult; // 0x238	
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x370	
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4a8	
};

// Alignment: 6
// Size: 0x220
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x1f0	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x1fc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x208	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x20c	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x210	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x214	
};

// Alignment: 9
// Size: 0x210
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x20c	
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x20d	
};

// Alignment: 2
// Size: 0x330
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f8	
};

// Alignment: 6
// Size: 0x210
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
};

// Alignment: 6
// Size: 0x220
class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x1f8	
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x1fc	
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x200	
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x20c	
};

// Alignment: 6
// Size: 0x210
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
};

// Alignment: 3
// Size: 0x200
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x1f4	
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x1f8	
};

// Alignment: 8
// Size: 0x210
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f1[0x3]; // 0x1f1
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x20c	
};

// Alignment: 7
// Size: 0x210
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1f4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200	
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x204	
private:
	[[maybe_unused]] uint8_t __pad0205[0x3]; // 0x205
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
};

// Alignment: 7
// Size: 0x6e0
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x1f8	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x468	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5a0	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x6d8	
private:
	[[maybe_unused]] uint8_t __pad06d9[0x3]; // 0x6d9
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x6dc	
};

// Alignment: 7
// Size: 0x210
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1fc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x208	
};

// Alignment: 8
// Size: 0x260
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x24c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x250	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x254	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x258	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x25c	
};

// Alignment: 8
// Size: 0x270
class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x24c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x250	
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x254	
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x260	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x26c	
};

// Alignment: 4
// Size: 0x340
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x1f8	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x330	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x334	
};

// Alignment: 3
// Size: 0x200
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x1f4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1f8	
};

// Alignment: 3
// Size: 0x210
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1f4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x200	
};

// Alignment: 5
// Size: 0x210
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1f4	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x200	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x204	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
};

// Alignment: 4
// Size: 0x360
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f0	
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x328	
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x32c	
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x330	
};

// Alignment: 7
// Size: 0x210
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x204	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x208	
};

// Alignment: 3
// Size: 0x200
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4	
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x1f8	
};

// Alignment: 8
// Size: 0x240
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1f0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1f4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204	
private:
	[[maybe_unused]] uint8_t __pad0208[0x28]; // 0x208
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x230	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x234	
};

// Alignment: 10
// Size: 0x240
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1f0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1f4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204	
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x24]; // 0x20c
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x230	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x234	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x235	
};

// Alignment: 4
// Size: 0x230
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1f0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x24]; // 0x1fc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x220	
};

// Alignment: 5
// Size: 0x230
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1f0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x24]; // 0x1fc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x220	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x224	
};

// Alignment: 10
// Size: 0x1280
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x6d8	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xca0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1268	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x126c	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x1270	
};

// Alignment: 6
// Size: 0x210
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1f4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1f8	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1fc	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x204	
};

// Alignment: 7
// Size: 0x220
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1f4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x200	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x20c	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x210	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x214	
};

// Alignment: 2
// Size: 0x200
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x1f0	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1f1	
};

// Alignment: 1
// Size: 0x330
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x1f0	
};

// Alignment: 1
// Size: 0x330
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x1f0	
};

// Alignment: 1
// Size: 0x200
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x1f0	
};

// Alignment: 0
// Size: 0x1f0
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x200
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1f0	
};

// Alignment: 1
// Size: 0x200
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x1f0	
};

// Alignment: 1
// Size: 0x200
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x1f0	
};

// Alignment: 6
// Size: 0x340
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1f0	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1f4	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1f8	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x200	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x338	
};

// Alignment: 1
// Size: 0x330
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x1f0	
};

// Alignment: 4
// Size: 0x200
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x1f0	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x1f4	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x1f8	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x1fc	
};

// Alignment: 3
// Size: 0x210
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x1f0	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x1f4	
private:
	[[maybe_unused]] uint8_t __pad01f8[0x4]; // 0x1f8
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x1fc	
};

// Alignment: 0
// Size: 0x1f0
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class C_OP_Spin : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1f0
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x210
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x240
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f0	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f4	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x1f8	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x1fc	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x204	
};

// Alignment: 5
// Size: 0x210
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0xc]; // 0x1f4
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x200	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x204	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x208	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x20c	
};

// Alignment: 6
// Size: 0x230
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x18]; // 0x1f4
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x20c	
private:
	[[maybe_unused]] uint8_t __pad0210[0xc]; // 0x210
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x21c	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x220	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x228	
};

// Alignment: 15
// Size: 0x980
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x240	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x244	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x248	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x24c	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x250	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x254	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0x4]; // 0x25c
public:
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x260	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x398	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x39c	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3a0	
private:
	[[maybe_unused]] uint8_t __pad03a1[0x7]; // 0x3a1
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3a8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x970	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x974	
};

// Alignment: 33
// Size: 0x740
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4cc]; // 0x1f4
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x6c0	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x6c4	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x6c8	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x6cc	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x6d0	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x6dc	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x6e8	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x6f4	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x700	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x704	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x708	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x70c	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x710	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x714	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x718	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x71c	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x720	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x724	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x728	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x72c	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x730	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x731	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x732	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x733	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x734	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x735	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x736	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x737	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x738	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x739	
private:
	[[maybe_unused]] uint8_t __pad073a[0x4]; // 0x73a
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x73e	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x73f	
};

// Alignment: 3
// Size: 0x200
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1f0	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x1f4	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x1f5	
};

// Alignment: 5
// Size: 0x340
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x200	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x338	
};

// Alignment: 7
// Size: 0x210
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1f8	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1fc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x204	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x208	
};

// Alignment: 7
// Size: 0x300
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1f0	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x270	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x2f0	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x2f4	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x2f8	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x2fc	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x2fd	
};

// Alignment: 8
// Size: 0x480
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x200	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x338	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0471[0x3]; // 0x471
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x474	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x478	
};

// Alignment: 8
// Size: 0x210
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1f8	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x1fc	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x200	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x204	
private:
	[[maybe_unused]] uint8_t __pad0205[0x3]; // 0x205
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x208	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x20c	
};

// Alignment: 4
// Size: 0x250
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x244	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x248	
};

// Alignment: 3
// Size: 0x200
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x1f4	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x1f8	
};

// Alignment: 3
// Size: 0x210
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x1f4	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x200	
};

// Alignment: 12
// Size: 0xdf0
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x1f8	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x3]; // 0x7c1
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x7c4	
	// MPropertyFriendlyName "particle number"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x7c8	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0904[0x4]; // 0x904
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x908	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xa40	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xb78	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xcb0	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xcb4	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xcb8	
};

// Alignment: 6
// Size: 0x210
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x1f4	
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x1f8	
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1fc	
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x200	
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x204	
};

// Alignment: 5
// Size: 0xa40
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f8	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x330	
private:
	[[maybe_unused]] uint8_t __pad0334[0x4]; // 0x334
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x338	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x470	
};

// Alignment: 13
// Size: 0x810
class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1f8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x248	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x298	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x3d0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x508	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x640	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x778	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x77c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x780	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x800	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x808	
};

// Alignment: 10
// Size: 0x2b0
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x208	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x258	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2a8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2ac	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2ad	
};

// Alignment: 10
// Size: 0x2c0
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1fc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x218	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x268	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2bc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2bd	
};

// Alignment: 12
// Size: 0x2c0
class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x200	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x250	
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

// Alignment: 9
// Size: 0x1270
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1f8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x7c0	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0xd88	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0xec0	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0xff8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x1130	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1268	
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0x126c	
};

// Alignment: 3
// Size: 0xd90
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1f8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x7c0	
};

// Alignment: 15
// Size: 0xd90
class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x6d8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x728	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x729	
private:
	[[maybe_unused]] uint8_t __pad07a9[0x3]; // 0x7a9
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7ac	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x7b0	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x7b4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7b8	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x7bc	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x7bd	
private:
	[[maybe_unused]] uint8_t __pad07be[0x2]; // 0x7be
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x7c0	
};

// Alignment: 11
// Size: 0x780
class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x1f8	
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x468	
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0	
	// MPropertyFriendlyName "cylindrical top transform"
	CParticleTransformInput m_TransformStart; // 0x6d8	
	// MPropertyFriendlyName "cylindrical bottom transform"
	CParticleTransformInput m_TransformEnd; // 0x728	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x778	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x77c	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x77d	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x77e	
};

// Alignment: 7
// Size: 0x2a0
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1f0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1fc	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x208	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x209	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x20a	
private:
	[[maybe_unused]] uint8_t __pad028a[0x2]; // 0x28a
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x28c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x290	
};

// Alignment: 4
// Size: 0x900
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x330	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x8f8	
};

// Alignment: 8
// Size: 0x3d0
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x1f8	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x1fc	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x200	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x204	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x284	
private:
	[[maybe_unused]] uint8_t __pad0285[0x3]; // 0x285
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
public:
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x290	
};

// Alignment: 14
// Size: 0x9a0
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control_point_number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1f4	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1f8	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x1fc	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x200	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x204	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x284	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x285	
private:
	[[maybe_unused]] uint8_t __pad0286[0x2]; // 0x286
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x288	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x28c	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x290	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x294	
private:
	[[maybe_unused]] uint8_t __pad0295[0x3]; // 0x295
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x298	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x860	
};

// Alignment: 3
// Size: 0x200
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1f0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
};

// Alignment: 7
// Size: 0x210
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1f0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1f1	
private:
	[[maybe_unused]] uint8_t __pad01f2[0x2]; // 0x1f2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1f8	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1fc	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x200	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x204	
};

// Alignment: 11
// Size: 0x220
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f0	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f4	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x1f8	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1fc	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x200	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x204	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x208	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x20c	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x210	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x214	
};

// Alignment: 4
// Size: 0x210
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x1f0	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x1f4	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x204	
};

// Alignment: 4
// Size: 0x210
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1f4	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x200	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x204	
};

// Alignment: 5
// Size: 0x280
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1f5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1f7	
};

// Alignment: 7
// Size: 0x850
class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4	
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x1f5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1f7	
private:
	[[maybe_unused]] uint8_t __pad0277[0x1]; // 0x277
public:
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x278	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x840	
};

// Alignment: 8
// Size: 0x210
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c	
};

// Alignment: 3
// Size: 0x200
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x1f0	
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x1f4	
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x1f8	
};

// Alignment: 3
// Size: 0x210
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1f0	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x1fc	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x200	
};

// Alignment: 17
// Size: 0x3f0
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1f0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x328	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x32c	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x330	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x334	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x338	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3b8	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3bc	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3c0	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3c4	
private:
	[[maybe_unused]] uint8_t __pad03c8[0x8]; // 0x3c8
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3d0	
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3d4	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3d5	
private:
	[[maybe_unused]] uint8_t __pad03d6[0x2]; // 0x3d6
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3d8	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x3d9	
private:
	[[maybe_unused]] uint8_t __pad03da[0x2]; // 0x3da
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3dc	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3e0	
};

// Alignment: 4
// Size: 0x200
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc	
};

// Alignment: 5
// Size: 0x210
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x200	
};

// Alignment: 5
// Size: 0x470
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x200	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x338	
};

// Alignment: 4
// Size: 0x200
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4	
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x1f8	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1fc	
};

// Alignment: 3
// Size: 0x200
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0	
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1f8	
};

// Alignment: 3
// Size: 0x200
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1f4	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
};

// Alignment: 6
// Size: 0x210
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x1f0	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x1f4	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x1f8	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1fc	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x200	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x204	
};

// Alignment: 4
// Size: 0x200
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1f4	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc	
};

// Alignment: 4
// Size: 0x950
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1f0	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x7b8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x8f0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x940	
};

// Alignment: 7
// Size: 0x350
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x1f4	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x200	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x20c	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x210	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x214	
private:
	[[maybe_unused]] uint8_t __pad0215[0x3]; // 0x215
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x218	
};

// Alignment: 3
// Size: 0x200
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x1f0	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x1f4	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x1f8	
};

// Alignment: 4
// Size: 0x200
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x1f0	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x1f4	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x1f8	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x1fc	
};

// Alignment: 7
// Size: 0x250
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1f4	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x1f8	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x1fc	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x200	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0xe]; // 0x202
public:
	CPathParameters m_PathParams; // 0x210	
};

// Alignment: 4
// Size: 0x240
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1f0	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1f4	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x7]; // 0x1f9
public:
	CPathParameters m_PathParams; // 0x200	
};

// Alignment: 4
// Size: 0x240
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad01f0[0x4]; // 0x1f0
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1f4	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1f8	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1fc	
private:
	[[maybe_unused]] uint8_t __pad01fd[0x3]; // 0x1fd
public:
	CPathParameters m_PathParams; // 0x200	
};

// Alignment: 11
// Size: 0x220
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1f0	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1f4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x20c	
private:
	[[maybe_unused]] uint8_t __pad020d[0x3]; // 0x20d
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x214	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x215	
};

// Alignment: 11
// Size: 0x220
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x20c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x210	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x214	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x218	
};

// Alignment: 1
// Size: 0x200
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
};

// Alignment: 13
// Size: 0x240
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1f8	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1fc	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x208	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x220	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x22c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x230	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x234	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x238	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x23c	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x23d	
};

// Alignment: 2
// Size: 0x200
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
};

// Alignment: 1
// Size: 0x240
class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
};

// Alignment: 3
// Size: 0x200
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1f8	
};

// Alignment: 4
// Size: 0x200
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f8	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1fc	
};

// Alignment: 2
// Size: 0x200
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x1f0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1f4	
};

// Alignment: 7
// Size: 0x220
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f8	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1fc	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x200	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x20c	
private:
	[[maybe_unused]] uint8_t __pad020d[0x3]; // 0x20d
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x210	
};

// Alignment: 4
// Size: 0xd90
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x1f0	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x7b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xd80	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0xd84	
};

// Alignment: 2
// Size: 0x200
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4	
};

// Alignment: 3
// Size: 0x200
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8	
};

// Alignment: 9
// Size: 0x2a0
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x1f0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x1f4	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x1f8	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1fc	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x200	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x280	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x284	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0xc]; // 0x28c
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x298	
};

// Alignment: 4
// Size: 0x250
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x240	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x24c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x24d	
};

// Alignment: 4
// Size: 0x200
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1f8	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1fc	
};

// Alignment: 5
// Size: 0x220
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1f8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x210	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x214	
};

// Alignment: 9
// Size: 0x250
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1f8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x210	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x228	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x240	
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x241	
private:
	[[maybe_unused]] uint8_t __pad0242[0x2]; // 0x242
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x244	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x24c	
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x250
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1f8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x210	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x228	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0241[0x3]; // 0x241
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x244	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248	
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x250
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x5c0
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1f4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1fc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x200	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x2]; // 0x202
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x204	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x208	
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x340	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x478	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x5b0	
};

// Alignment: 9
// Size: 0x910
class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "extra velocity field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f4	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x200	
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x338	
	// MPropertyFriendlyName "Boundary Dampening"
	float m_flBoundaryDampening; // 0x900	
	// MPropertyFriendlyName "Set Velocity"
	bool m_bSetVelocity; // 0x904	
	// MPropertyFriendlyName "Lock to Surface"
	bool m_bLockToSurface; // 0x905	
private:
	[[maybe_unused]] uint8_t __pad0906[0x2]; // 0x906
public:
	// MPropertyFriendlyName "Vector Field Grid Spacing Override"
	float m_flGridSpacing; // 0x908	
};

// Alignment: 5
// Size: 0x490
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1f8	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x330	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x468	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x46c	
};

// Alignment: 6
// Size: 0xe00
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xd88	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd8c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd90	
};

// Alignment: 6
// Size: 0xed0
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xd88	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0xec0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xec4	
};

// Alignment: 10
// Size: 0x6f0
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x3]; // 0x1f9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x200	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x6]; // 0x202
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_flIncrement; // 0x208	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x340	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x478	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x5b0	
};

// Alignment: 6
// Size: 0x470
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1f8	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1f9	
private:
	[[maybe_unused]] uint8_t __pad01fa[0x6]; // 0x1fa
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x200	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x338	
};

// Alignment: 2
// Size: 0x350
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
};

// Alignment: 4
// Size: 0x490
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x330	
};

// Alignment: 4
// Size: 0x490
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x330	
};

// Alignment: 5
// Size: 0x900
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7bc	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x7c0	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x8f8	
};

// Alignment: 2
// Size: 0x200
class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
};

// Alignment: 6
// Size: 0x210
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x1f0	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x1f4	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x1f8	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x1fc	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x200	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x204	
};

// Alignment: 5
// Size: 0x210
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x1f0	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x1f4	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x1f8	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x1fc	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x200	
};

// Alignment: 3
// Size: 0x220
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x214	
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x218	
};

// Alignment: 3
// Size: 0x230
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x214	
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x220	
};

// Alignment: 11
// Size: 0x230
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x1f0	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x1f4	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x1f8	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x1fc	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x200	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x204	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x208	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x214	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x218	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x21c	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x220	
};

// Alignment: 10
// Size: 0x220
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x1f0	
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x1f4	
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x1f8	
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x1fc	
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x200	
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x2]; // 0x202
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x204	
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x208	
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x20c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210	
};

// Alignment: 11
// Size: 0x250
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x1f0	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x1fc	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x200	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x204	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x208	
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x20c	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x220	
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x224	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x238	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x23c	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x240	
};

// Alignment: 3
// Size: 0x5a0
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x1f0	
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x328	
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x460	
};

// Alignment: 2
// Size: 0x200
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f0	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1f4	
};

// Alignment: 6
// Size: 0x210
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x1f0	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x1f4	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x1f8	
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x1fc	
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x200	
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x204	
};

// Alignment: 8
// Size: 0x220
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x20c	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x210	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x21c	
};

// Alignment: 10
// Size: 0xd40
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x210	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x348	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x480	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5b8	
	// MPropertyFriendlyName "intersection height CP"
	int32_t m_nHeightControlPointNumber; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f4[0x4]; // 0x6f4
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x6f8	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xcc0	
};

// Alignment: 8
// Size: 0x6f0
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x200	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x204	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x208	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x20c	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x210	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x348	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x480	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5b8	
};

// Alignment: 6
// Size: 0x5c0
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x208	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x340	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x478	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5b0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5b4	
};

// Alignment: 6
// Size: 0xee0
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x208	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x7d0	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xd98	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0xed0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xed4	
};

// Alignment: 5
// Size: 0xda0
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x204	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x208	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x7d0	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd98	
};

// Alignment: 7
// Size: 0x220
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x20c	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x210	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218	
};

// Alignment: 5
// Size: 0x220
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x204	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x208	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x20c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x210	
};

// Alignment: 7
// Size: 0x220
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x204	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x208	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x20c	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x210	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218	
};

// Alignment: 3
// Size: 0x220
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x204	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x210	
};

// Alignment: 5
// Size: 0x220
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x204	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x208	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x20c	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x210	
};

// Alignment: 12
// Size: 0x250
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x201	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x202	
private:
	[[maybe_unused]] uint8_t __pad0203[0x1]; // 0x203
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x204	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x208	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x20c	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x210	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x214	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x220	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x22c	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x238	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x244	
};

// Alignment: 5
// Size: 0x7e0
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x2]; // 0x202
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x204	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x208	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x7d0	
};

// Alignment: 4
// Size: 0x350
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200	
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x204	
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x210	
};

// Alignment: 8
// Size: 0x4a0
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x201	
private:
	[[maybe_unused]] uint8_t __pad0202[0x2]; // 0x202
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x204	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x210	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x348	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x354	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x360	
};

// Alignment: 8
// Size: 0x360
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x1]; // 0x201
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x202	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x203	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x204	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x208	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x20c	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0224[0x4]; // 0x224
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x228	
};

// Alignment: 2
// Size: 0x210
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x200	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x204	
};

// Alignment: 15
// Size: 0x2c0
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x200	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x204	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x208	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x20c	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x214	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x218	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x21c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x220	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x224	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x228	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x22c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x22d	
private:
	[[maybe_unused]] uint8_t __pad02ad[0x3]; // 0x2ad
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2b0	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x2b4	
};

// Alignment: 3
// Size: 0x220
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204	
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x210	
};

// Alignment: 4
// Size: 0x220
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200	
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x204	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x208	
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x214	
};

// Alignment: 3
// Size: 0x220
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x210	
};

// Alignment: 3
// Size: 0x2a0
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x200	
	// MPropertyFriendlyName "time-of-day parameter"
	char m_pszTimeOfDayParameter[128]; // 0x204	
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x284	
};

// Alignment: 2
// Size: 0x210
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x200	
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204	
};

// Alignment: 6
// Size: 0x7e0
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x200	
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x204	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0209[0x3]; // 0x209
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x20c	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x218	
};

// Alignment: 2
// Size: 0x210
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x200	
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x204	
};

// Alignment: 3
// Size: 0x340
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x200	
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x338	
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x339	
};

// Alignment: 4
// Size: 0x910
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x200	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x7c8	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x900	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x904	
};

// Alignment: 10
// Size: 0x230
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x200	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x204	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x208	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x20c	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x210	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x214	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x218	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x21c	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x224	
};

// Alignment: 4
// Size: 0x220
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x200	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x204	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x208	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x20c	
};

// Alignment: 11
// Size: 0x3f0
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x200	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x204	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x210	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x348	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x34c	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x350	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x35c	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3dc	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x3e0	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x3e1	
};

// Alignment: 6
// Size: 0x350
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x200	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x204	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x208	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x340	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x341	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x342	
};

// Alignment: 3
// Size: 0x340
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x204	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x208	
};

// Alignment: 5
// Size: 0x5b0
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x200	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x338	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5a8	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5a9	
};

// Alignment: 2
// Size: 0x210
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x200	
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x201	
};

// Alignment: 1
// Size: 0x210
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x200	
};

// Alignment: 9
// Size: 0x240
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x200	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x204	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x208	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x20c	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x210	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x214	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x218	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x220	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x228	
};

// Alignment: 3
// Size: 0x210
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x200	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x204	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x208	
};

// Alignment: 7
// Size: 0x360
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x200	
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x204	
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x208	
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x20c	
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x218	
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x350	
};

// Alignment: 5
// Size: 0x5c0
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x208	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x340	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x478	
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x5b0	
};

// Alignment: 2
// Size: 0x340
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x208	
};

// Alignment: 1
// Size: 0x340
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x200	
};

// Alignment: 5
// Size: 0x220
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x200	
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204	
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x210	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x214	
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x218	
};

// Alignment: 15
// Size: 0xf80
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x200	
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x204	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x4]; // 0x20c
public:
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x210	
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x348	
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x480	
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x5b8	
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x6f0	
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x828	
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0x960	
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0xa98	
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0bd4[0x4]; // 0xbd4
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0xbd8	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0xd10	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xe48	
};

// Alignment: 5
// Size: 0x7e0
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x204	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x208	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x7d4	
};

// Alignment: 4
// Size: 0x480
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x200	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x338	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x33c	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x340	
};

// Alignment: 1
// Size: 0x240
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x230	
};

// Alignment: 7
// Size: 0x22e0
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2050	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2054	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x2058	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x205c	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x2060	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x2198	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x22d0	
};

// Alignment: 20
// Size: 0x3390
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x22e0	
private:
	[[maybe_unused]] uint8_t __pad22e1[0x3]; // 0x22e1
public:
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x22e4	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x22e8	
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x22ec	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x22f0	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x22f4	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x22f8	
private:
	[[maybe_unused]] uint8_t __pad22f9[0x3]; // 0x22f9
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x22fc	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2300	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2304	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2308	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x2440	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x2a08	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x2b40	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x2c78	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x3240	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x3378	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x337c	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x3380	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x3384	
};

// Alignment: 30
// Size: 0x2460
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2050	
private:
	[[maybe_unused]] uint8_t __pad2051[0x3]; // 0x2051
public:
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x2054	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x2058	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x205c	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x2060	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2064	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2068	
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x206c	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x2070	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x2074	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x2078	
private:
	[[maybe_unused]] uint8_t __pad207c[0x4]; // 0x207c
public:
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionFloatInput m_flTextureVWorldSize; // 0x2080	
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionFloatInput m_flTextureVScrollRate; // 0x21b8	
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionFloatInput m_flTextureVOffset; // 0x22f0	
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x2428	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x242c	
private:
	[[maybe_unused]] uint8_t __pad242d[0x3]; // 0x242d
public:
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x2430	
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x2434	
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x2438	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x243c	
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x2440	
private:
	[[maybe_unused]] uint8_t __pad2444[0x1]; // 0x2444
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x2445	
private:
	[[maybe_unused]] uint8_t __pad2446[0x2]; // 0x2446
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2448	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x244c	
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x2450	
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x2451	
private:
	[[maybe_unused]] uint8_t __pad2452[0x2]; // 0x2452
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2454	
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2458	
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x245c	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x245d	
};

// Alignment: 8
// Size: 0x270
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0248[0x4]; // 0x248
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x24c	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x250	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x251	
private:
	[[maybe_unused]] uint8_t __pad0252[0x2]; // 0x252
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x254	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x258	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x25c	
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x260	
};

// Alignment: 7
// Size: 0x260
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x240	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x244	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x24c	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x250	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x254	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x258	
};

// Alignment: 5
// Size: 0x5f0
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionFloatInput m_cubeWidth; // 0x230	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionFloatInput m_cutoffRadius; // 0x368	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionFloatInput m_renderRadius; // 0x4a0	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x4]; // 0x5dc
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x5e0	
};

// Alignment: 2
// Size: 0x240
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x230	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x234	
};

// Alignment: 48
// Size: 0x21d0
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x230	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x231	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x232	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x233	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad0250[0x4]; // 0x250
public:
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x254	
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x258	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x25c	
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x25d	
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x25e	
private:
	[[maybe_unused]] uint8_t __pad025f[0x1]; // 0x25f
public:
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x260	
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x828	
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "700"
	bool m_bIgnoreRadius; // 0xdf0	
private:
	[[maybe_unused]] uint8_t __pad0df1[0x3]; // 0xdf1
public:
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "700"
	int32_t m_nModelScaleCP; // 0xdf4	
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xdf8	
	// MPropertyFriendlyName "apply scales in local model space"
	// MPropertySortPriority "700"
	bool m_bLocalScale; // 0x13c0	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x13c1	
private:
	[[maybe_unused]] uint8_t __pad13c2[0x2]; // 0x13c2
public:
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0x13c4	
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x13c8	
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x13c9	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x13ca	
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x13cb	
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x13cc	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x13d0	
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x13d4	
	// MPropertyFriendlyName "activity override"
	// MPropertySuppressExpr "mod != dota"
	// MPropertySortPriority "500"
	char m_ActivityName[256]; // 0x13d8	
	// MPropertyFriendlyName "sequence override"
	// MPropertySuppressExpr "mod == dota"
	// MPropertySortPriority "500"
	char m_SequenceName[256]; // 0x14d8	
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0x15d8	
private:
	[[maybe_unused]] uint8_t __pad15d9[0x7]; // 0x15d9
public:
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x15e0	
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15e9[0x3]; // 0x15e9
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0x15ec	
	// MPropertyFriendlyName "skin override CP"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0x15f0	
private:
	[[maybe_unused]] uint8_t __pad15f4[0x4]; // 0x15f4
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x15f8	
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x1610	
	// MPropertyFriendlyName "model override CP"
	int32_t m_nModelCP; // 0x1614	
	// MPropertyFriendlyName "model override economy loadout slot type"
	char m_EconSlotName[256]; // 0x1618	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x1718	
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x1719	
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	bool m_bUseRawMeshGroup; // 0x171a	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x171b	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x171c	
	// MPropertyFriendlyName "render attribute"
	char m_szRenderAttribute[260]; // 0x171d	
private:
	[[maybe_unused]] uint8_t __pad1821[0x7]; // 0x1821
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1828	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x1960	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x1a98	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1bd0	
private:
	[[maybe_unused]] uint8_t __pad1bd4[0x4]; // 0x1bd4
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1bd8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x21a0	
};

// Alignment: 8
// Size: 0xab0
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x230	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x234	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x238	
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x250	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x258	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x390	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x958	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xa90	
};

// Alignment: 11
// Size: 0x280
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x230	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x231	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x232	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x233	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x234	
private:
	[[maybe_unused]] uint8_t __pad0235[0x3]; // 0x235
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x238	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x23c	
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x240	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x248	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x24c	
private:
	[[maybe_unused]] uint8_t __pad024d[0x3]; // 0x24d
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x250	
};

// Alignment: 16
// Size: 0x840
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x230	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x234	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x238	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x23c	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x240	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x808	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x80c	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x810	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x814	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x818	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x81c	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x820	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x824	
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x828	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x830	
};

// Alignment: 29
// Size: 0x1220
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x238	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x808	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0941[0x7]; // 0x941
public:
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0x948	
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0xa80	
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xbb8	
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x4]; // 0xcf4
public:
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0xcf8	
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xe30	
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0xf68	
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0x10a0	
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0x10a1	
private:
	[[maybe_unused]] uint8_t __pad10a2[0x6]; // 0x10a2
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x10a8	
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0x10b0	
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x10b4	
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionFloatInput m_flFogContribution; // 0x10b8	
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x11f0	
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0x11f4	
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0x11f8	
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0x11f9	
private:
	[[maybe_unused]] uint8_t __pad11fa[0x2]; // 0x11fa
public:
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x11fc	
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0x1200	
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0x1204	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0x1208	
private:
	[[maybe_unused]] uint8_t __pad1209[0x3]; // 0x1209
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0x120c	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0x1210	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0x1214	
};

// Alignment: 13
// Size: 0x10b0
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x238	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x800	
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x804	
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x808	
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x940	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a79[0x7]; // 0xa79
public:
	// MPropertyFriendlyName "Light Radius"
	// MPropertySuppressExpr "!m_bAreaLight"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xa80	
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xbb8	
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xcf0	
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0xe28	
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0xf60	
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x1098	
};

// Alignment: 0
// Size: 0x230
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x230
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No members available
};

// Alignment: 9
// Size: 0x260
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x230	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x234	
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x238	
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x23c	
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x240	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x244	
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x248	
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x24c	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x250	
};

// Alignment: 4
// Size: 0x240
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x230	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x234	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x238	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x23c	
};

// Alignment: 3
// Size: 0x380
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x230	
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x368	
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x370	
};

// Alignment: 12
// Size: 0x360
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x230	
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x234	
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x238	
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x23c	
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x240	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x244	
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x248	
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x24c	
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x250	
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x254	
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x258	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x358	
};

// Alignment: 7
// Size: 0x270
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x238	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x240	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x248	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x250	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x258	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x260	
};

// Alignment: 6
// Size: 0x260
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230	
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x238	
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x240	
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x248	
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x250	
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x258	
};

// Alignment: 3
// Size: 0x240
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x230	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x234	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x238	
};

// Alignment: 10
// Size: 0x260
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x230	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x234	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x238	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x23c	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x240	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x244	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x248	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x24c	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x250	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x254	
};

// Alignment: 2
// Size: 0x240
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0234[0x4]; // 0x234
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x238	
};

// Alignment: 4
// Size: 0x380
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x230	
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x234	
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad023c[0x4]; // 0x23c
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x240	
};

