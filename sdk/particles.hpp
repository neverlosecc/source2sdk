#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: particles.dll
// Class Count: 388
// Enum Count: 48
///////////////////////////////////////////

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
enum class ParticleFalloffFunction_t : uint32_t
{
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	PARTICLE_FALLOFF_LINEAR = 0x1,
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
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
// Size: 3
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Aligment: 4
// Size: 2
enum class SpriteCardShaderType_t : uint32_t
{
	SPRITECARD_SHADER_BASE = 0x0,
	SPRITECARD_SHADER_CUSTOM = 0x1,
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
// Size: 4
enum class ParticleDetailLevel_t : uint32_t
{
	PARTICLEDETAIL_LOW = 0x0,
	PARTICLEDETAIL_MEDIUM = 0x1,
	PARTICLEDETAIL_HIGH = 0x2,
	PARTICLEDETAIL_ULTRA = 0x3,
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
// Size: 4
enum class DetailCombo_t : uint32_t
{
	DETAIL_COMBO_OFF = 0x0,
	DETAIL_COMBO_ADD = 0x1,
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_COMBO_MOD2X = 0x3,
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
// Size: 3
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
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
enum class ParticleSelection_t : uint32_t
{
	PARTICLE_SELECTION_FIRST = 0x0,
	PARTICLE_SELECTION_LAST = 0x1,
	PARTICLE_SELECTION_NUMBER = 0x2,
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

// Aligment: 4
// Size: 3
enum class ParticleDirectionNoiseType_t : uint32_t
{
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	PARTICLE_DIR_NOISE_CURL = 0x1,
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
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
// Size: 3
enum class ParticleEndcapMode_t : uint32_t
{
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

// Aligment: 4
// Size: 2
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	LIGHT_STYLE_OLD = 0x0,
	LIGHT_STYLE_NEW = 0x1,
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
enum class ParticleAlphaReferenceType_t : uint32_t
{
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
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
// Size: 3
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
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
// Size: 2
enum class ParticleSortingChoiceList_t : uint32_t
{
	PARTICLE_SORTING_NEAREST = 0x0,
	PARTICLE_SORTING_CREATION_TIME = 0x1,
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
// Size: 2
enum class TextureRepetitionMode_t : uint32_t
{
	TEXTURE_REPETITION_PARTICLE = 0x0,
	TEXTURE_REPETITION_PATH = 0x1,
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
// Size: 4
enum class PFNoiseType_t : uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
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
// Size: 4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
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

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
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
// Size: 120
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8
	ParticlePreviewState_t m_previewState; // 0x20
};

// Aligment: 0
// Size: 16
class IParticleCollection
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IControlPointEditorData
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

// Aligment: 2
// Size: 8
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
	ParticleCollisionMode_t m_nCollisionModeInternal; // 0x4
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

// Aligment: 1
// Size: 24
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	// MDefaultString
	float m_flTimeDuration; // 0x14
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
// Size: 384
class CParticleFunctionInitializer : public CParticleFunction
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

// Aligment: 0
// Size: 384
class CParticleFunctionConstraint : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 384
class CParticleFunctionForce : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 384
class CParticleFunctionOperator : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 384
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 0
// Size: 64
class CPiecewiseCurveSchemaWrapper
{
public:
// <no members described>
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

// Aligment: 0
// Size: 232
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 232
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
// <no members described>
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
// Size: 1072
class CPerParticleVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1072
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 1
// Size: 4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 0
// Size: 8
class IParticleEffect
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CParticleProperty
{
public:
// <no members described>
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

// Aligment: 0
// Size: 384
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint, CParticleFunction
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

// Aligment: 0
// Size: 432
class C_INIT_RandomRotation : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 0
// Size: 432
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 432
class C_INIT_RandomYaw : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 464
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 400
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "frames per second"
	// MDefaultString
	float m_flFramerate; // 0x180
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

// Aligment: 1
// Size: 400
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flip percentage"
	// MDefaultString
	float m_flPercent; // 0x180
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

// Aligment: 1
// Size: 400
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x180
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

// Aligment: 1
// Size: 400
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x180
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

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 432
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 464
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 400
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "Acceleration"
	// MDefaultString
	float m_flAccel; // 0x180
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
class C_OP_Decay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	// MDefaultString
	bool m_bRopeDecay; // 0x180
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

// Aligment: 1
// Size: 624
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "freeze time"
	// MDefaultString
	CParticleCollectionFloatInput m_flFreezeTime; // 0x180
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

// Aligment: 0
// Size: 384
class C_OP_EndCapDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 400
class C_OP_AlphaDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum alpha"
	// MDefaultString
	float m_flMinAlpha; // 0x180
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

// Aligment: 1
// Size: 624
class C_OP_DecayClampCount : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Maximum Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nCount; // 0x180
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

// Aligment: 0
// Size: 384
class CSpinUpdateBase : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 416
class C_OP_Spin : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 384
class C_OP_SpinUpdate : public CSpinUpdateBase, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 416
class C_OP_SpinYaw : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 400
class C_OP_NormalLock : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x180
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

// Aligment: 1
// Size: 400
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x180
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

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 480
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 400
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_ControlPoint; // 0x180
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

// Aligment: 1
// Size: 624
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "simulation timescale"
	// MDefaultString
	CParticleCollectionFloatInput m_flSimulationScale; // 0x180
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

// Aligment: 0
// Size: 464
class C_OP_RenderClothForce : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 464
class C_OP_Callback : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
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

// Aligment: 1
// Size: 6624
class C_OP_RenderFogSprites : public C_OP_RenderSprites, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x19d0
};

