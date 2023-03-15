#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: server.dll
// Class Count: 234
// Enum Count: 38
///////////////////////////////////////////

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
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Aligment: 1
// Size: 14
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0,
	MOVETYPE_UNUSED1 = 1,
	MOVETYPE_WALK = 2,
	MOVETYPE_UNUSED9 = 3,
	MOVETYPE_UNUSED2 = 4,
	MOVETYPE_UNUSED3 = 5,
	MOVETYPE_VPHYSICS = 6,
	MOVETYPE_UNUSED8 = 7,
	MOVETYPE_UNUSED4 = 8,
	MOVETYPE_UNUSED5 = 9,
	MOVETYPE_UNUSED6 = 10,
	MOVETYPE_UNUSED7 = 11,
	MOVETYPE_LAST = 11,
	MOVETYPE_MAX_BITS = 4,
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

// Aligment: 1
// Size: 11
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0,
	SOLID_BSP = 1,
	SOLID_BBOX = 2,
	SOLID_OBB = 3,
	SOLID_POINT = 5,
	SOLID_VPHYSICS = 6,
	SOLID_CAPSULE = 7,
	SOLID_SPHERE = 8,
	SOLID_ORIENTED_CAPSULE = 9,
	SOLID_CYLINDER = 10,
	SOLID_LAST = 11,
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
// Size: 1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Aligment: 4
// Size: 4
enum class CLogicBranchList::LogicBranchListenerLastState_t : uint32_t
{
	CLogicBranchList::LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
	CLogicBranchList::LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
	CLogicBranchList::LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
	CLogicBranchList::LOGIC_BRANCH_LISTENER_MIXED = 0x3,
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
// Size: 2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
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

// Aligment: 4
// Size: 2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
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
// Size: 2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
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
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Aligment: 4
// Size: 2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Aligment: 4
// Size: 2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
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
// Size: 2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
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
// Size: 3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Aligment: 4
// Size: 2
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Aligment: 4
// Size: 3
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
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
// Size: 11
enum class PrecipitationType_t : uint32_t
{
	PRECIPITATION_TYPE_PARTICLERAIN = 0x4,
	PRECIPITATION_TYPE_PARTICLEASH = 0x5,
	PRECIPITATION_TYPE_PARTICLERAINSTORM = 0x6,
	PRECIPITATION_TYPE_PARTICLEBUGS = 0x7,
	PRECIPITATION_TYPE_PARTICLESMOKE = 0x8,
	PRECIPITATION_TYPE_PARTICLESNOW = 0x9,
	PRECIPITATION_TYPE_PARTICLEXENSPORES = 0xa,
	PRECIPITATION_TYPE_DUSTMOTES = 0xb,
	PRECIPITATION_TYPE_PARTICLEFLYINGEMBER = 0xc,
	PRECIPITATION_TYPE_PARTICLEGROUNDFOG = 0xd,
	NUM_PRECIPITATION_TYPES = 0xe,
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
// Size: 3
enum class ScreenEffectType_t : uint32_t
{
	SCREENEFFECT_EP2_ADVISOR_STUN = 0x0,
	SCREENEFFECT_EP1_INTRO = 0x1,
	SCREENEFFECT_EP2_GROGGY = 0x2,
};

// Aligment: 4
// Size: 2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
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
// Size: 3
enum class LOSSpeculativeMuzzle_t : uint32_t
{
	MUZZLE_CURRENT_NPC_STATE = 0x0,
	MUZZLE_STANDING = 0x1,
	MUZZLE_CROUCHING = 0x2,
};

// Aligment: 8
// Size: 16
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
	NAV_MESH_STOP = 0x10,
	NAV_MESH_RUN = 0x20,
	NAV_MESH_WALK = 0x40,
	NAV_MESH_TRANSIENT = 0x100,
	NAV_MESH_DONT_HIDE = 0x200,
	NAV_MESH_STAND = 0x400,
	NAV_MESH_NO_HOSTAGES = 0x800,
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
// Size: 56
struct CBaseAnimatingEasings_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasingFloat_t m_IKMasterBlendAmountEasing; // 0x8
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

// Aligment: 31
// Size: 240
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
	// MNetworkBitCount "32"
	// MNetworkPriority "64"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	Vector m_vecOrigin; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0x84
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "64"
	float m_flScale; // 0x90
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0x94
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0xa0
	// MNetworkDisable
	float m_flAbsScale; // 0xac
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xb0
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xb2
	// MNetworkDisable
	bool m_bDormant; // 0xb3
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xb4
	// MNetworkDisable
	bitfield:1 m_bDirtyHierarchy; // 0x0
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
	uint8_t m_nHierarchicalDepth; // 0xb7
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xb8
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xb9
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_name; // 0xbc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0xd8
	// MNetworkDisable
	float m_flZOffset; // 0xdc
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0xe0
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

// Aligment: 0
// Size: 40
class CJiggleBones
{
public:
// <no members described>
};

// Aligment: 6
// Size: 48
class CPlayerState
{
public:
	bool deadflag; // 0x8
	CUtlSymbolLarge netname; // 0x10
	int32_t fixangle; // 0x18
	QAngle anglechange; // 0x1c
	int32_t frags; // 0x28
	int32_t deaths; // 0x2c
};

// Aligment: 1
// Size: 16
class CSkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8
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

// Aligment: 6
// Size: 64
class CNetworkedIKProceduralTargetContext
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nChainIndex; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nRuleIndex; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vTargetPosition; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	Quaternion m_qTargetOrientation; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "96"
	float m_flWeight; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsValid; // 0x3c
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

// Aligment: 14
// Size: 1088
class CSkeletonInstance : public CGameSceneNode
{
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x100
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x340
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x341
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x342
	// MNetworkDisable
	bool m_bEnableIK; // 0x343
	// MNetworkDisable
	bitfield:1 m_bDisableSolidCollisionsForHierarchy; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyMotionType; // 0x0
	// MNetworkDisable
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x348
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nHitboxSet; // 0x34c
	// MNetworkEnable
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x398
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRagdollPositionChanged"
	CUtlVector< CTransform > m_RagdollTransforms; // 0x3f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRagdollPositionChanged"
	CUtlVector< CTransform > m_BoneOverrides; // 0x408
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< float32 > m_FlexOverrides; // 0x420
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

// Aligment: 1
// Size: 320
class CNetworkTransmitComponent
{
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x12c
public:
	static int32_t &Get_s_nWatchTransmitEntity() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[0]->m_instance); }
	static bool &Get_s_bUseNetworkVars() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[1]->m_instance); }
	static bool &Get_s_bNetworkVarPerFieldTracking() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[2]->m_instance); }
	static bool &Get_s_bNetworkVarValidate() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[3]->m_instance); }
};

// Aligment: 0
// Size: 1
class CPhysicsComponent
{
public:
// <no members described>
};

// Aligment: 13
// Size: 304
class CAnimGraphNetworkedVariables
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_BoolVariables"
	CUtlVector< bool > m_NetBoolVariables; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_ByteVariables"
	CUtlVector< uint8 > m_NetByteVariables; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_IntVariables"
	CUtlVector< int32 > m_NetIntVariables; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_FloatVariables"
	CUtlVector< float32 > m_NetFloatVariables; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_VectorVariables"
	CUtlVector< Vector > m_NetVectorVariables; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_QuaternionVariables"
	CUtlVector< Quaternion > m_NetQuaternionVariables; // 0x80
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CUtlVector< bool > m_PredNetBoolVariables; // 0x98
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CUtlVector< uint8 > m_PredNetByteVariables; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CUtlVector< int32 > m_PredNetIntVariables; // 0xc8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CUtlVector< float32 > m_PredNetFloatVariables; // 0xe0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CUtlVector< Vector > m_PredNetVectorVariables; // 0xf8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CUtlVector< Quaternion > m_PredNetQuaternionVariables; // 0x110
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; // 0x128
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

// Aligment: 2
// Size: 40
class CCopyRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
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
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
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

// Aligment: 4
// Size: 224
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
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0x50
};

// Aligment: 2
// Size: 8
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0
	float m_flClusterArea; // 0x4
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

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 16
// Size: 216
class CCollisionProperty
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x29
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x2a
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x2b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x2c
	float m_flRadius; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x40
	Vector m_vecSurroundingMaxs; // 0x4c
	Vector m_vecSurroundingMins; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0x70
	// MNetworkEnable
	// MNetworkEnable
	float m_flCapsuleRadius; // 0x7c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	uint8_t m_nCollisionFunctionMask; // 0x80
};

// Aligment: 20
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
	AttachmentHandle_t m_nAttachmentIndex; // 0x62
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6a
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
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
// Size: 8
class CGameRules
{
public:
// <no members described>
};

// Aligment: 8
// Size: 96
class CGlowProperty
{
public:
	Vector m_fGlowColor; // 0x8
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
	Vector m_glowColorOverride; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlashing; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x50
	bool m_bGlowing; // 0x58
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
	CUtlStringToken m_nWorldGroupID; // 0x88
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

// Aligment: 1
// Size: 4
struct ParticleIndex_t
{
public:
	int32_t m_Data; // 0x0
};

// Aligment: 3
// Size: 24
struct thinkfunc_t
{
public:
	CUtlStringToken m_nContext; // 0x8
	int32_t m_nNextThinkTick; // 0xc
	int32_t m_nLastThinkTick; // 0x10
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

// Aligment: 1
// Size: 4
class CSimpleSimTimer
{
public:
	float m_next; // 0x0
};

// Aligment: 1
// Size: 8
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4
};

// Aligment: 2
// Size: 12
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4
	float m_maxInterval; // 0x8
};

// Aligment: 1
// Size: 16
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0xc
};

// Aligment: 1
// Size: 24
class CStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_interval; // 0x10
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
// Size: 32
class CSBox_Gamerules : public CGameRules
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
};

// Aligment: 2
// Size: 48
class NetField
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDataBlockChanged"
	CUtlBinaryBlock ByteData; // 0x10
	bool Dirty; // 0x28
};

// Aligment: 2
// Size: 48
class DataTable
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< uint32 > m_EntityTags; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPredictable; // 0x28
};

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 0
// Size: 120
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 160
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x80
};

// Aligment: 0
// Size: 160
class CNavVolumeAll : public CNavVolumeVector, CNavVolume
{
public:
// <no members described>
};

// Aligment: 2
// Size: 136
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x78
	float m_flRadius; // 0x84
};

// Aligment: 1
// Size: 144
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x88
};

// Aligment: 2
// Size: 40
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "112"
	CEntityIdentity* m_pEntity; // 0x8
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x10
};

// Aligment: 0
// Size: 40
class CGameEntity : public CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 19
// Size: 1160
class CBaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x190
	// MNetworkDisable
	float m_flGroundSpeed; // 0x194
	// MNetworkDisable
	float m_flLastEventCycle; // 0x198
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x19c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x1a0
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x1b8
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x1bc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x21c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x21d
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x220
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0x224
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x228
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x22c
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x230
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x234
	// MNetworkDisable
	CSequenceTransitioner2 m_SequenceTransitioner; // 0x260
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "overrideAnimGraphChanged"
	CStrongHandle< InfoForResourceTypeIAnimationGraph > m_hOverrideGraph; // 0x470
};

// Aligment: 1
// Size: 1240
class CBaseAnimatingOverlayController : public CBaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x488
};

// Aligment: 2
// Size: 64
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 336
class CBodyComponentPoint : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x130
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 1184
class CBodyComponentSkeletonInstance : public CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x40
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x480
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fiels[1]->m_instance); }
};

// Aligment: 0
// Size: 24
class CHitboxComponent : public CEntityComponent
{
public:
// <no members described>
};

// Aligment: 58
// Size: 392
class CLightComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x48
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x75
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x7c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x80
	// MNetworkEnable
	// MNetworkChangeCallback "LightRangeChanged"
	float m_flRange; // 0x84
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x88
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x8c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x90
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0x94
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flTheta; // 0x98
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flPhi; // 0x9c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_lightCookie; // 0xa0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	int32_t m_nCastShadows; // 0xac
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xb0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xb4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xb8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xbc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xc0
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightWidth; // 0xc4
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightHeight; // 0xc8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xcc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xd0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xd4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xd8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xdc
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0xe0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0xe4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0xe8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakeLightIndex; // 0xec
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBakeLightIndexScale; // 0xf0
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesIndexedBakedLighting; // 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0xf5
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nPriority; // 0xf8
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x100
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x108
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x10c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x110
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x114
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x118
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x11c
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x120
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x121
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x124
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x130
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x13c
	// MNetworkEnable
	Vector m_vPrecomputePosition; // 0x140
	// MNetworkEnable
	Vector m_vPrecomputeDirection; // 0x14c
	// MNetworkEnable
	Vector m_vPrecomputeUp; // 0x158
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x164
	// MNetworkEnable
	float m_flFogContributionStength; // 0x168
	// MNetworkEnable
	float m_flNearClipPlane; // 0x16c
	// MNetworkEnable
	Color m_SkyColor; // 0x170
	// MNetworkEnable
	float m_flSkyIntensity; // 0x174
	// MNetworkEnable
	bool m_bLowerHemisphereIsBlack; // 0x178
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x179
	bool m_bMixedShadows; // 0x184
	bool m_bFadeMixedShadows; // 0x185
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 6
// Size: 176
class CRenderComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10
	bool m_bClientAllowDraw; // 0x28
	bool m_bLastRenderState; // 0x29
	uint32_t m_nSplitscreenFlags; // 0x48
	bool m_bEnableRendering; // 0x58
	bool m_bInterpolationReadyToDraw; // 0xa8
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fiels[1]->m_instance); }
};

// Aligment: 69
// Size: 1216
class CBaseEntity : public CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "96"
	CBodyComponent* m_CBodyComponent; // 0x28
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x30
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x170
	int32_t m_iCurrentThinkContext; // 0x188
	int32_t m_nLastThinkTick; // 0x18c
	CGameSceneNode* m_pGameSceneNode; // 0x190
	CBitVec< 64 > m_isSteadyState; // 0x198
	float m_lastNetworkChange; // 0x1a0
	CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x1b0
	CUtlSymbolLarge m_iszResponseContext; // 0x1c8
	bool m_bRestoreInHierarchy; // 0x1f1
	CUtlSymbolLarge m_target; // 0x1f8
	float m_flMoveDoneTime; // 0x200
	CHandle< CBaseEntity > m_hDamageFilter; // 0x204
	CUtlSymbolLarge m_iszDamageFilterName; // 0x208
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flAnimTime; // 0x210
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	float m_flSimulationTime; // 0x214
	// MNetworkEnable
	// MNetworkEnable
	float m_flCreateTime; // 0x218
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_ubInterpolationFrame; // 0x21c
	CUtlSymbolLarge m_iGlobalname; // 0x220
	int32_t m_iSentToClients; // 0x228
	float m_flSpeed; // 0x22c
	int32_t m_iHammerID; // 0x230
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x234
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nNextThinkTick; // 0x238
	int32_t m_nSimulationTick; // 0x23c
	CEntityIOOutput m_OnKilled; // 0x240
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	// MNetworkSerializer "CropFlagsToPlayerFlagBitsLength"
	uint32_t m_fFlags; // 0x268
	// MNetworkEnable
	Vector m_vecAbsVelocity; // 0x26c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	// MNetworkPriority "64"
	Vector m_vecVelocity; // 0x278
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vecBaseVelocity; // 0x284
	int32_t m_nPushEnumCount; // 0x290
	CCollisionProperty* m_pCollision; // 0x298
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEffectEntity; // 0x2a0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< CBaseEntity > m_hOwnerEntity; // 0x2a4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x2a8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< CBaseEntity > m_hGroundEntity; // 0x2ac
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x2b0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x2b4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimulatedEveryTick; // 0x2b8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAnimatedEveryTick; // 0x2b9
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_iTextureFrameIndex; // 0x2ba
	bool m_bSessionPersister; // 0x2bb
	bool m_bDisableLowViolence; // 0x2bc
	int32_t m_iEFlags; // 0x2c0
	CEntityIOOutput m_OnUser1; // 0x2f8
	CEntityIOOutput m_OnUser2; // 0x320
	CEntityIOOutput m_OnUser3; // 0x348
	CEntityIOOutput m_OnUser4; // 0x370
	// MNetworkEnable
	// MNetworkEnable
	float m_flNavIgnoreUntilTime; // 0x398
	QAngle m_vecAngVelocity; // 0x39c
	bool m_bNetworkQuantizeOriginAndAngles; // 0x3a8
	bool m_bEnableLagCompensation; // 0x3a9
	CHandle< CBaseEntity > m_pBlocker; // 0x3ac
	float m_flLocalTime; // 0x3b0
	float m_flVPhysicsUpdateLocalTime; // 0x3b4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHasDynamicPhysics; // 0x3b8
	// MNetworkEnable
	// MNetworkEnable
	CUtlString m_EntityName; // 0x3c0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	Vector m_EyePosOffset; // 0x3c8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	Quaternion m_EyeRotOffset; // 0x3d4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	float m_fHealth; // 0x3e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_lifeState; // 0x3e8
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_WaterLevel; // 0x3e9
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_WaterEntity; // 0x3ec
	int32_t m_iTransmitMode; // 0x3f4
	// MNetworkEnable
	// MNetworkEnable
	DataTable m_NetData; // 0x3f8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_netHash; // 0x428
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< NetField > m_netData; // 0x430
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVector< NetField > m_netDataLocal; // 0x478
public:
	static bool &Get_sm_bAccurateTriggerBboxChecks() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[0]->m_instance); }
	static bool &Get_sm_bDisableTouchFuncs() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[1]->m_instance); }
	static bool &Get_m_bAllowPrecache() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[2]->m_instance); }
	static bool &Get_s_bAbsQueriesValid() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[3]->m_instance); }
	static bool &Get_s_bPreventingSetAnimRunAnimEvents() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[4]->m_instance); }
	static int32_t &Get_m_nPredictionRandomSeed() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[5]->m_instance); }
	static CBasePlayer* &Get_m_pPredictionPlayer() { return *reinterpret_cast<CBasePlayer**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[6]->m_instance); }
	static bool &Get_sm_bDatadescValidating() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fiels[7]->m_instance); }
};

// Aligment: 0
// Size: 1216
class CServerOnlyEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1216
class CServerOnlyPointEntity : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1216
class CLogicalEntity : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1304
class CBaseFilter : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bNegated; // 0x4c0
	CEntityIOOutput m_OnPass; // 0x4c8
	CEntityIOOutput m_OnFail; // 0x4f0
};

// Aligment: 4
// Size: 1440
class CFilterMultiple : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	filter_t m_nFilterType; // 0x518
	CUtlSymbolLarge[10] m_iFilterName; // 0x520
	CHandle< CBaseEntity >[10] m_hFilter; // 0x570
	int32_t m_nFilterCount; // 0x598
};

// Aligment: 1
// Size: 1312
class CFilterProximity : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flRadius; // 0x518
};

// Aligment: 0
// Size: 1304
class CFilterLOS : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1312
class CFilterClass : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iFilterClass; // 0x518
};

// Aligment: 0
// Size: 2128
class CInfoData : public CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 1328
class CLogicBranch : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bInValue; // 0x4c0
	CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x4c8
	CEntityIOOutput m_OnTrue; // 0x4e0
	CEntityIOOutput m_OnFalse; // 0x508
};

// Aligment: 4
// Size: 1248
class CParticleLight : public CServerOnlyPointEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flIntensity; // 0x4c0
	Vector m_vColor; // 0x4c4
	CUtlSymbolLarge m_PSName; // 0x4d0
	bool m_bDirectional; // 0x4d8
};

// Aligment: 31
// Size: 3440
class CBasePlayer : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_BotOldFrametime; // 0x4c0
	float m_BotOldCurtime; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CPlayerLocalData m_Local; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0x5a8
	CPlayerState m_pl; // 0x5e8
	uint64_t m_nButtons; // 0x618
	uint64_t m_afButtonPressed; // 0x620
	uint64_t m_afButtonReleased; // 0x628
	uint64_t m_afButtonLast; // 0x630
	uint64_t m_afButtonDisabled; // 0x638
	uint64_t m_afButtonForced; // 0x640
	int32_t m_nUpdateRate; // 0x648
	float m_fLerpTime; // 0x64c
	bool m_bLagCompensation; // 0x650
	int32_t m_nHighestCommandNumberReceived; // 0x688
	int32_t m_nCommandsSimulatedThisTick; // 0x68c
	int64_t m_nUsecTimestampLastUserCmdReceived; // 0x690
	PlayerConnectedState m_iConnected; // 0x698
	IntervalTimer m_timeSinceCommandSimulated; // 0xcc8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0xcd8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hViewEntity; // 0xcdc
	char[32] m_szNetname; // 0xce0
	char[64] m_szNetworkIDString; // 0xd00
	float m_lastEntitySteadyState; // 0xd40
	int32_t m_availableEntitySteadyState; // 0xd44
	CBitVec< 64 > m_playerInPVS; // 0xd48
	bool m_hasAnySteadyStateEnts; // 0xd50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nUnHoldableButtons; // 0xd58
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_Ping; // 0xd60
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_PacketLoss; // 0xd64
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_Pawn; // 0xd68
};

// Aligment: 3
// Size: 1240
class CPointPrefab : public CServerOnlyPointEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4c0
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4c8
	bool m_fixupNames; // 0x4d0
};

// Aligment: 11
// Size: 1352
class CPointTemplate : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4c0
	CUtlSymbolLarge m_iszHammerUniqueId; // 0x4c8
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4d0
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4d8
	float m_flTimeoutInterval; // 0x4e0
	bool m_bAsynchronouslySpawnEntities; // 0x4e4
	CEntityIOOutput m_pOutputOnSpawned; // 0x4e8
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x510
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x514
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x518
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x530
};

// Aligment: 2
// Size: 1224
class CSkyboxReference : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlStringToken m_worldGroupId; // 0x4c0
	CHandle< CSkyCamera > m_hSkyCamera; // 0x4c4
};

// Aligment: 4
// Size: 1376
class CSkyCamera : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x550
	bool m_bUseAngles; // 0x554
	CSkyCamera* m_pNext; // 0x558
};

// Aligment: 0
// Size: 224
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 0
// Size: 160
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 2
// Size: 192
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector, CNavVolume
{
public:
	Vector m_vStartPos; // 0xa8
	float m_flSearchDist; // 0xb4
};

// Aligment: 2
// Size: 1224
class CEnvDetailController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4c4
};

// Aligment: 0
// Size: 1216
class CGameRulesProxy : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1224
class CSBox_GamerulesProxy : public CGameRulesProxy, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CSBox_Gamerules*"
	// MNetworkPriority "64"
	CSBox_Gamerules* m_pGameRules; // 0x4c0
};

// Aligment: 0
// Size: 3440
class CSBox_Player : public CBasePlayer, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1216
class CPointEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 10
// Size: 1272
class CEnvClock : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszHourHandName; // 0x4c0
	CUtlSymbolLarge m_iszMinuteHandName; // 0x4c8
	CUtlSymbolLarge m_iszSecondHandName; // 0x4d0
	int32_t m_nTimeZone; // 0x4d8
	bool m_bUseLocalTime; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hHourHand; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hMinuteHand; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hSecondHand; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartGameTime; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartClockSeconds; // 0x4f0
};

// Aligment: 18
// Size: 5624
class CEnvCombinedLightProbeVolume : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x1570
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x1574
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1578
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x1580
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1588
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1590
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1598
	// MNetworkEnable
	Vector m_vBoxMins; // 0x15a0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x15ac
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x15b8
	// MNetworkEnable
	bool m_bMoveable; // 0x15c0
	// MNetworkEnable
	int32_t m_nHandshake; // 0x15c4
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x15c8
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x15cc
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x15d0
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x15d4
	// MNetworkEnable
	bool m_bStartDisabled; // 0x15d8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x15f1
};

// Aligment: 18
// Size: 1552
class CEnvCubemap : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5a8
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hDepthmapTexture; // 0x5b0
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x5b8
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x5bc
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x5c0
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x5cc
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x5d8
	// MNetworkEnable
	bool m_bMoveable; // 0x5e0
	// MNetworkEnable
	int32_t m_nHandshake; // 0x5e4
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x5e8
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x5ec
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x5f0
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x5f4
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5f8
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x5f9
	// MNetworkEnable
	bool m_bRenderDepthMap; // 0x5fa
	// MNetworkEnable
	bool m_bAlwaysCheckDepth; // 0x5fb
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x608
};

// Aligment: 0
// Size: 1552
class CEnvCubemapBox : public CEnvCubemap, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1264
class CEnvCubemapFog : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flEndDistance; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDistance; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4cc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	float m_flLODBias; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4dd
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4e0
	bool m_bFirstTime; // 0x4e8
};

// Aligment: 12
// Size: 5352
class CEnvLightProbeVolume : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1488
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1490
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1498
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14a0
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14ac
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x14b8
	// MNetworkEnable
	bool m_bMoveable; // 0x14c0
	// MNetworkEnable
	int32_t m_nHandshake; // 0x14c4
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x14c8
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x14cc
	// MNetworkEnable
	bool m_bStartDisabled; // 0x14d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x14e1
};

// Aligment: 10
// Size: 1256
class CSphericalVignette : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteStartDistance; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteEndDistance; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flFarZ; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteMaxOpacity; // 0x4cc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteFalloffExponent; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	Color m_vignetteColor; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flVignetteStrength; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "VignetteStateChanged"
	float m_flFadeTime; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4e1
};

// Aligment: 28
// Size: 1344
class CEnvVolumetricFogController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flScattering; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnisotropy; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDrawDistance; // 0x4cc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisoTime; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScatterTime; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistanceTime; // 0x50c
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScattering; // 0x514
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x51c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultScattering; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x524
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x528
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x529
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMaster; // 0x52a
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x538
	bool m_bFirstTime; // 0x53c
};

// Aligment: 7
// Size: 1264
class CEnvVolumetricFogVolume : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flStrength; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFalloffExponent; // 0x4e8
};

// Aligment: 3
// Size: 1328
class CFogController : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t m_fog; // 0x4c0
	bool m_bUseAngles; // 0x528
	int32_t m_iChangedVariables; // 0x52c
};

// Aligment: 0
// Size: 1216
class CInfoTarget : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1216
class CInfoParticleTarget : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 1240
class CInfoVisibilityBox : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nMode; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x4d4
};

// Aligment: 7
// Size: 1280
class CInfoWorldLayer : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x4f9
	bool m_bCreateAsChildSpawnGroup; // 0x4fa
	uint32_t m_hLayerSpawnGroup; // 0x4fc
};

// Aligment: 8
// Size: 1280
class CMultiLightProxy : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4c0
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4c8
	float m_flLightRadiusFilter; // 0x4d0
	float m_flBrightnessDelta; // 0x4d4
	bool m_bPerformScreenFade; // 0x4d8
	float m_flTargetBrightnessMultiplier; // 0x4dc
	float m_flCurrentBrightnessMultiplier; // 0x4e0
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x4e8
};

// Aligment: 24
// Size: 1312
class CPointCamera : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_FOV; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	float m_Resolution; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFogEnable; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	Color m_FogColor; // 0x4c9
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStart; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEnd; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x4dd
	// MNetworkEnable
	// MNetworkEnable
	float m_flAspectRatio; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoSky; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_fBrightness; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flZFar; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	float m_flZNear; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDofEnabled; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x4fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x504
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x508
	float m_TargetFOV; // 0x50c
	float m_DegreesPerSecond; // 0x510
	bool m_bIsOn; // 0x514
	CPointCamera* m_pNext; // 0x518
};

// Aligment: 2
// Size: 1232
class CInfoGameEventProxy : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4c0
	float m_flRange; // 0x4c8
};

// Aligment: 2
// Size: 1224
class CProjectedDecal : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nTexture; // 0x4c0
	float m_flDistance; // 0x4c4
};

// Aligment: 2
// Size: 2368
class CBodyComponentBaseAnimating : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CBaseAnimatingController m_animationController; // 0x4a0
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x928
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimating")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimating")->m_static_fiels[1]->m_instance); }
};

// Aligment: 2
// Size: 2448
class CBodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkEnable
	CBaseAnimatingOverlayController m_animationController; // 0x4a0
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x978
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimatingOverlay")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimatingOverlay")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 1216
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance, CBodyComponent, CEntityComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x4a0
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fiels[1]->m_instance); }
};

// Aligment: 21
// Size: 1760
class CBaseModelEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4c0
	int32_t m_iViewerID; // 0x4c8
	// MNetworkEnable
	// MNetworkEnable
	RenderMode_t m_nRenderMode; // 0x4cc
	// MNetworkEnable
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x4ce
	bool m_bAllowFadeInView; // 0x4cf
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x5b8
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x618
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMinDist; // 0x61c
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMaxDist; // 0x620
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeScale; // 0x624
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowStrength; // 0x628
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x630
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	Vector m_vLightingOrigin; // 0x698
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightingOriginChanged"
	bool m_bFixupLightingOriginToPlayerSide; // 0x6a4
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlStringToken > m_MaterialReplaceAttribute; // 0x6a8
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_MaterialReplaceMaterial; // 0x6c0
	CUtlStringToken m_sceneLayerID; // 0x6d8
};

// Aligment: 0
// Size: 1760
class CServerOnlyModelEntity : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1760
class CModelPointEntity : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 1304
class CLogicRelay : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4c0
	CEntityIOOutput m_OnSpawn; // 0x4e8
	bool m_bDisabled; // 0x510
	bool m_bWaitForRefire; // 0x511
	bool m_bTriggerOnce; // 0x512
	bool m_bFastRetrigger; // 0x513
	bool m_bPassthoughCaller; // 0x514
};

// Aligment: 16
// Size: 1440
class CPathParticleRope : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartActive; // 0x4c0
	float m_flMaxSimulationTime; // 0x4c4
	CUtlSymbolLarge m_iszEffectName; // 0x4c8
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	float m_flParticleSpacing; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x4f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x4f4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	// MNetworkBitCount "3"
	int32_t m_nEffectState; // 0x4f8
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Position; // 0x508
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentIn; // 0x520
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentOut; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Color; // 0x550
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CUtlVector< bool > m_PathNodes_PinEnabled; // 0x568
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< float32 > m_PathNodes_RadiusScale; // 0x580
};

// Aligment: 5
// Size: 1240
class CInfoDynamicShadowHint : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x4c0
	float m_flRange; // 0x4c4
	int32_t m_nImportance; // 0x4c8
	int32_t m_nLightChoice; // 0x4cc
	CHandle< CBaseEntity > m_hLight; // 0x4d0
public:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints() { return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 1264
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint, CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vBoxMins; // 0x4d8
	Vector m_vBoxMaxs; // 0x4e4
};

// Aligment: 0
// Size: 1216
class CInfoSpawnGroupLandmark : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 11
// Size: 1472
class CInfoSpawnGroupLoadUnload : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4c0
	CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4e8
	CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x510
	CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x538
	CUtlSymbolLarge m_iszSpawnGroupName; // 0x560
	CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x568
	CUtlSymbolLarge m_iszLandmarkName; // 0x570
	CUtlString m_sFixedSpawnGroupName; // 0x578
	float m_flTimeoutInterval; // 0x580
	bool m_bStreamingStarted; // 0x584
	bool m_bUnloadingStarted; // 0x585
};

// Aligment: 9
// Size: 1784
class CDynamicLight : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	uint8_t m_ActualFlags; // 0x6e0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Flags; // 0x6e1
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_LightStyle; // 0x6e2
	bool m_On; // 0x6e3
	// MNetworkEnable
	// MNetworkEnable
	float m_Radius; // 0x6e4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_Exponent; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_InnerAngle; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "360"
	float m_OuterAngle; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	float m_SpotRadius; // 0x6f4
};

// Aligment: 1
// Size: 2053288
class CDebugHistory : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nNpcEvents; // 0x1f4500
};

// Aligment: 12
// Size: 1376
class CEnvEntityMaker : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vecEntityMins; // 0x4c0
	Vector m_vecEntityMaxs; // 0x4cc
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4d8
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4dc
	Vector m_vecBlockerOrigin; // 0x4e0
	QAngle m_angPostSpawnDirection; // 0x4ec
	float m_flPostSpawnDirectionVariance; // 0x4f8
	float m_flPostSpawnSpeed; // 0x4fc
	bool m_bPostSpawnUseAngles; // 0x500
	CUtlSymbolLarge m_iszTemplate; // 0x508
	CEntityIOOutput m_pOutputOnSpawned; // 0x510
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x538
};

// Aligment: 0
// Size: 1216
class CTextureToggle : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1224
class CEnvZoom : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flSpeed; // 0x4c0
	int32_t m_nFOV; // 0x4c4
};

// Aligment: 5
// Size: 1272
class CEnvSpark : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flDelay; // 0x4c0
	int32_t m_nMagnitude; // 0x4c4
	int32_t m_nTrailLength; // 0x4c8
	int32_t m_nType; // 0x4cc
	CEntityIOOutput m_OnSpark; // 0x4d0
};

// Aligment: 1
// Size: 1312
class CFilterName : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x518
};

// Aligment: 1
// Size: 1312
class CFilterModel : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iFilterModel; // 0x518
};

// Aligment: 1
// Size: 1312
class CFilterContext : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iFilterContext; // 0x518
};

// Aligment: 1
// Size: 1312
class CFilterMassGreater : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_fFilterMass; // 0x518
};

// Aligment: 1
// Size: 1312
class FilterDamageType : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iDamageType; // 0x518
};

// Aligment: 3
// Size: 1320
class FilterHealth : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bAdrenalineActive; // 0x518
	int32_t m_iHealthMin; // 0x51c
	int32_t m_iHealthMax; // 0x520
};

// Aligment: 5
// Size: 1336
class CFilterEnemy : public CBaseFilter, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x518
	float m_flRadius; // 0x520
	float m_flOuterRadius; // 0x524
	int32_t m_nMaxSquadmatesPerEnemy; // 0x528
	CUtlSymbolLarge m_iszPlayerName; // 0x530
};

// Aligment: 5
// Size: 1296
class CLogicGameEventListener : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnEventFired; // 0x4d0
	CUtlSymbolLarge m_iszGameEventName; // 0x4f8
	CUtlSymbolLarge m_iszGameEventItem; // 0x500
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x508
	bool m_bStartEnabled; // 0x509
};

// Aligment: 9
// Size: 1264
class CLogicMeasureMovement : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_strMeasureTarget; // 0x4c0
	CUtlSymbolLarge m_strMeasureReference; // 0x4c8
	CUtlSymbolLarge m_strTargetReference; // 0x4d0
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4d8
	CHandle< CBaseEntity > m_hMeasureReference; // 0x4dc
	CHandle< CBaseEntity > m_hTarget; // 0x4e0
	CHandle< CBaseEntity > m_hTargetReference; // 0x4e4
	float m_flScale; // 0x4e8
	int32_t m_nMeasureType; // 0x4ec
};

// Aligment: 2
// Size: 1232
class CLogicNavigation : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_isOn; // 0x4c8
	navproperties_t m_navProperty; // 0x4cc
};

// Aligment: 11
// Size: 1624
class CLogicAuto : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnMapSpawn; // 0x4c0
	CEntityIOOutput m_OnDemoMapSpawn; // 0x4e8
	CEntityIOOutput m_OnNewGame; // 0x510
	CEntityIOOutput m_OnLoadGame; // 0x538
	CEntityIOOutput m_OnMapTransition; // 0x560
	CEntityIOOutput m_OnBackgroundMap; // 0x588
	CEntityIOOutput m_OnMultiNewMap; // 0x5b0
	CEntityIOOutput m_OnMultiNewRound; // 0x5d8
	CEntityIOOutput m_OnVREnabled; // 0x600
	CEntityIOOutput m_OnVRNotEnabled; // 0x628
	CUtlSymbolLarge m_globalstate; // 0x650
};

// Aligment: 10
// Size: 1368
class CTimerEntity : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4c0
	CEntityIOOutput m_OnTimerHigh; // 0x4e8
	CEntityIOOutput m_OnTimerLow; // 0x510
	int32_t m_iDisabled; // 0x538
	float m_flInitialDelay; // 0x53c
	float m_flRefireTime; // 0x540
	bool m_bUpDownState; // 0x544
	int32_t m_iUseRandomTime; // 0x548
	float m_flLowerRandomBound; // 0x54c
	float m_flUpperRandomBound; // 0x550
};

// Aligment: 4
// Size: 1272
class CLogicLineToEntity : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityOutputTemplate< Vector > m_Line; // 0x4c0
	CUtlSymbolLarge m_SourceName; // 0x4e8
	CHandle< CBaseEntity > m_StartEntity; // 0x4f0
	CHandle< CBaseEntity > m_EndEntity; // 0x4f4
};

// Aligment: 11
// Size: 1440
class CMathRemap : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flInMin; // 0x4c0
	float m_flInMax; // 0x4c4
	float m_flOut1; // 0x4c8
	float m_flOut2; // 0x4cc
	float m_flOldInValue; // 0x4d0
	bool m_bEnabled; // 0x4d4
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d8
	CEntityIOOutput m_OnRoseAboveMin; // 0x500
	CEntityIOOutput m_OnRoseAboveMax; // 0x528
	CEntityIOOutput m_OnFellBelowMin; // 0x550
	CEntityIOOutput m_OnFellBelowMax; // 0x578
};

// Aligment: 5
// Size: 1272
class CMathColorBlend : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flInMin; // 0x4c0
	float m_flInMax; // 0x4c4
	Color m_OutColor1; // 0x4c8
	Color m_OutColor2; // 0x4cc
	CEntityOutputTemplate< Color > m_OutValue; // 0x4d0
};

// Aligment: 5
// Size: 1280
class CEnvGlobal : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityOutputTemplate< int32 > m_outCounter; // 0x4c0
	CUtlSymbolLarge m_globalstate; // 0x4e8
	int32_t m_triggermode; // 0x4f0
	int32_t m_initialstate; // 0x4f4
	int32_t m_counter; // 0x4f8
};

// Aligment: 5
// Size: 1528
class CMultiSource : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity >[32] m_rgEntities; // 0x4c0
	int32[32] m_rgTriggered; // 0x540
	CEntityIOOutput m_OnTrigger; // 0x5c0
	int32_t m_iTotal; // 0x5e8
	CUtlSymbolLarge m_globalstate; // 0x5f0
};

// Aligment: 11
// Size: 1472
class CMathCounter : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flMin; // 0x4c0
	float m_flMax; // 0x4c4
	bool m_bHitMin; // 0x4c8
	bool m_bHitMax; // 0x4c9
	bool m_bDisabled; // 0x4ca
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d0
	CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4f8
	CEntityIOOutput m_OnHitMin; // 0x520
	CEntityIOOutput m_OnHitMax; // 0x548
	CEntityIOOutput m_OnChangedFromMin; // 0x570
	CEntityIOOutput m_OnChangedFromMax; // 0x598
};

// Aligment: 6
// Size: 2048
class CLogicCase : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge[16] m_nCase; // 0x4c0
	int32_t m_nShuffleCases; // 0x540
	int32_t m_nLastShuffleCase; // 0x544
	uint8[16] m_uchShuffleCaseMap; // 0x548
	CEntityIOOutput[16] m_OnCase; // 0x558
	CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0x7d8
};

// Aligment: 6
// Size: 1384
class CLogicCompare : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flInValue; // 0x4c0
	float m_flCompareValue; // 0x4c4
	CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4c8
	CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4f0
	CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x518
	CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x540
};

// Aligment: 3
// Size: 1232
class CLogicAutosave : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4c0
	int32_t m_minHitPoints; // 0x4c4
	int32_t m_minHitPointsToCommit; // 0x4c8
};

// Aligment: 4
// Size: 1248
class CLogicActiveAutosave : public CLogicAutosave, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_TriggerHitPoints; // 0x4d0
	float m_flTimeToTrigger; // 0x4d4
	float m_flStartTime; // 0x4d8
	float m_flDangerousTime; // 0x4dc
};

// Aligment: 6
// Size: 1240
class CLogicDistanceAutosave : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4c0
	float m_flDistanceToPlayer; // 0x4c8
	bool m_bForceNewLevelUnit; // 0x4cc
	bool m_bCheckCough; // 0x4cd
	bool m_bThinkDangerous; // 0x4ce
	float m_flDangerousTime; // 0x4d0
};

// Aligment: 6
// Size: 1496
class CLogicBranchList : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge[16] m_nLogicBranchNames; // 0x4c0
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x540
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x558
	CEntityIOOutput m_OnAllTrue; // 0x560
	CEntityIOOutput m_OnAllFalse; // 0x588
	CEntityIOOutput m_OnMixed; // 0x5b0
};

// Aligment: 1
// Size: 1224
class CLogicGameEvent : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4c0
};

// Aligment: 5
// Size: 1240
class CMessageEntity : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_radius; // 0x4c0
	CUtlSymbolLarge m_messageText; // 0x4c8
	bool m_drawText; // 0x4d0
	bool m_bDeveloperOnly; // 0x4d1
	bool m_bEnabled; // 0x4d2
};

// Aligment: 5
// Size: 1888
class CTriggerBrush : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x6e0
	CEntityIOOutput m_OnEndTouch; // 0x708
	CEntityIOOutput m_OnUse; // 0x730
	int32_t m_iInputFilter; // 0x758
	int32_t m_iDontMessageParent; // 0x75c
};

// Aligment: 8
// Size: 1296
class CPathKeyFrame : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_Origin; // 0x4c0
	QAngle m_Angles; // 0x4cc
	Quaternion m_qAngle; // 0x4d8
	CUtlSymbolLarge m_iNextKey; // 0x4e8
	float m_flNextTime; // 0x4f0
	CPathKeyFrame* m_pNextKey; // 0x4f8
	CPathKeyFrame* m_pPrevKey; // 0x500
	float m_flSpeed; // 0x508
};

// Aligment: 11
// Size: 1360
class CBaseMoveBehavior : public CPathKeyFrame, CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iPositionInterpolator; // 0x510
	int32_t m_iRotationInterpolator; // 0x514
	float m_flAnimStartTime; // 0x518
	float m_flAnimEndTime; // 0x51c
	float m_flAverageSpeedAcrossFrame; // 0x520
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x528
	CPathKeyFrame* m_pTargetKeyFrame; // 0x530
	CPathKeyFrame* m_pPreKeyFrame; // 0x538
	CPathKeyFrame* m_pPostKeyFrame; // 0x540
	float m_flTimeIntoFrame; // 0x548
	int32_t m_iDirection; // 0x54c
};

// Aligment: 7
// Size: 1296
class CPointEntityFinder : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4c0
	CUtlSymbolLarge m_iFilterName; // 0x4c8
	CHandle< CBaseFilter > m_hFilter; // 0x4d0
	CUtlSymbolLarge m_iRefName; // 0x4d8
	CHandle< CBaseEntity > m_hReference; // 0x4e0
	EntFinderMethod_t m_FindMethod; // 0x4e4
	CEntityIOOutput m_OnFoundEntity; // 0x4e8
};

// Aligment: 3
// Size: 1232
class CPointHMDAnchor : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	float m_flEnableTime; // 0x4c4
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nPlayerIndex; // 0x4c8
};

// Aligment: 0
// Size: 1232
class CPointHMDAnchorOverride : public CPointHMDAnchor, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 6
// Size: 1296
class CPointPlayerMoveConstraint : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flRadius; // 0x4c0
	float m_flConstraintWidth; // 0x4c4
	float m_flSpeedFactor; // 0x4c8
	float m_flRadiusSquared; // 0x4cc
	CUtlVector< CHandle< CBaseEntity > > m_hConstrainedPlayers; // 0x4d0
	CEntityIOOutput m_OnConstraintBroken; // 0x4e8
};

// Aligment: 44
// Size: 1720
class CPointValueRemapper : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4c1
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4c4
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4c8
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flEngageDistance; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4ec
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4f0
	CUtlSymbolLarge m_iszOutputEntityName; // 0x4f8
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x500
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x508
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x510
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_hOutputEntities; // 0x518
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x530
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	float m_flMomentumModifier; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	float m_flSnapValue; // 0x53c
	float m_flCurrentMomentum; // 0x540
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x544
	float m_flRatchetOffset; // 0x548
	// MNetworkEnable
	// MNetworkEnable
	float m_flInputOffset; // 0x54c
	bool m_bEngaged; // 0x550
	bool m_bFirstUpdate; // 0x551
	float m_flPreviousValue; // 0x554
	float m_flPreviousUpdateTickTime; // 0x558
	Vector m_vecPreviousTestPoint; // 0x55c
	CHandle< CBasePlayer > m_hUsingPlayer; // 0x568
	float m_flCustomOutputValue; // 0x56c
	CUtlSymbolLarge m_iszSoundEngage; // 0x570
	CUtlSymbolLarge m_iszSoundDisengage; // 0x578
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x580
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x588
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x590
	CEntityOutputTemplate< float32 > m_Position; // 0x5a0
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5c8
	CEntityIOOutput m_OnReachedValueZero; // 0x5f0
	CEntityIOOutput m_OnReachedValueOne; // 0x618
	CEntityIOOutput m_OnReachedValueCustom; // 0x640
	CEntityIOOutput m_OnEngage; // 0x668
	CEntityIOOutput m_OnDisengage; // 0x690
};

// Aligment: 11
// Size: 2368
class CPointWorldText : public CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char[512] m_messageText; // 0x6e0
	// MNetworkEnable
	// MNetworkEnable
	char[64] m_FontName; // 0x8e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x920
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFullbright; // 0x921
	// MNetworkEnable
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x924
	// MNetworkEnable
	// MNetworkEnable
	float m_flFontSize; // 0x928
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x92c
	// MNetworkEnable
	// MNetworkEnable
	Color m_Color; // 0x930
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x934
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x938
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x93c
};

// Aligment: 16
// Size: 1512
class CPointAngularVelocitySensor : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0
	float m_flThreshold; // 0x4c4
	int32_t m_nLastCompareResult; // 0x4c8
	int32_t m_nLastFireResult; // 0x4cc
	float m_flFireTime; // 0x4d0
	float m_flFireInterval; // 0x4d4
	float m_flLastAngVelocity; // 0x4d8
	QAngle m_lastOrientation; // 0x4dc
	Vector m_vecAxis; // 0x4e8
	bool m_bUseHelper; // 0x4f4
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4f8
	CEntityIOOutput m_OnLessThan; // 0x520
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x548
	CEntityIOOutput m_OnGreaterThan; // 0x570
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x598
	CEntityIOOutput m_OnEqualTo; // 0x5c0
};

// Aligment: 6
// Size: 1288
class CPointVelocitySensor : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0
	Vector m_vecAxis; // 0x4c4
	bool m_bEnabled; // 0x4d0
	float m_fPrevVelocity; // 0x4d4
	float m_flAvgInterval; // 0x4d8
	CEntityOutputTemplate< float32 > m_Velocity; // 0x4e0
};

// Aligment: 3
// Size: 1432
class CSceneListManager : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4c0
	CUtlSymbolLarge[16] m_iszScenes; // 0x4d8
	CHandle< CBaseEntity >[16] m_hScenes; // 0x558
};

// Aligment: 80
// Size: 2400
class CSceneEntity : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszSceneFile; // 0x4c8
	CUtlSymbolLarge m_iszResumeSceneFile; // 0x4d0
	CUtlSymbolLarge m_iszTarget1; // 0x4d8
	CUtlSymbolLarge m_iszTarget2; // 0x4e0
	CUtlSymbolLarge m_iszTarget3; // 0x4e8
	CUtlSymbolLarge m_iszTarget4; // 0x4f0
	CUtlSymbolLarge m_iszTarget5; // 0x4f8
	CUtlSymbolLarge m_iszTarget6; // 0x500
	CUtlSymbolLarge m_iszTarget7; // 0x508
	CUtlSymbolLarge m_iszTarget8; // 0x510
	CHandle< CBaseEntity > m_hTarget1; // 0x518
	CHandle< CBaseEntity > m_hTarget2; // 0x51c
	CHandle< CBaseEntity > m_hTarget3; // 0x520
	CHandle< CBaseEntity > m_hTarget4; // 0x524
	CHandle< CBaseEntity > m_hTarget5; // 0x528
	CHandle< CBaseEntity > m_hTarget6; // 0x52c
	CHandle< CBaseEntity > m_hTarget7; // 0x530
	CHandle< CBaseEntity > m_hTarget8; // 0x534
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x538
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPaused; // 0x539
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMultiplayer; // 0x53a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutogenerated; // 0x53b
	// MNetworkEnable
	// MNetworkEnable
	float m_flForceClientTime; // 0x53c
	float m_flCurrentTime; // 0x540
	float m_flFrameTime; // 0x544
	bool m_bCancelAtNextInterrupt; // 0x548
	float m_fPitch; // 0x54c
	bool m_bAutomated; // 0x550
	int32_t m_nAutomatedAction; // 0x554
	float m_flAutomationDelay; // 0x558
	float m_flAutomationTime; // 0x55c
	CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x560
	bool m_bWaitingForResumeScene; // 0x564
	bool m_bPausedViaInput; // 0x565
	bool m_bPauseAtNextInterrupt; // 0x566
	bool m_bWaitingForActor; // 0x567
	bool m_bWaitingForInterrupt; // 0x568
	bool m_bInterruptedActorsScenes; // 0x569
	bool m_bBreakOnNonIdle; // 0x56a
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CBaseFlex > > m_hActorList; // 0x570
	CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x588
	int32_t m_nSceneFlushCounter; // 0x5a8
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nSceneStringIndex; // 0x5ac
	CEntityIOOutput m_OnStart; // 0x5b0
	CEntityIOOutput m_OnCompletion; // 0x5d8
	CEntityIOOutput m_OnCanceled; // 0x600
	CEntityIOOutput m_OnPaused; // 0x628
	CEntityIOOutput m_OnResumed; // 0x650
	CEntityIOOutput m_OnTrigger1; // 0x678
	CEntityIOOutput m_OnTrigger2; // 0x6a0
	CEntityIOOutput m_OnTrigger3; // 0x6c8
	CEntityIOOutput m_OnTrigger4; // 0x6f0
	CEntityIOOutput m_OnTrigger5; // 0x718
	CEntityIOOutput m_OnTrigger6; // 0x740
	CEntityIOOutput m_OnTrigger7; // 0x768
	CEntityIOOutput m_OnTrigger8; // 0x790
	CEntityIOOutput m_OnTrigger9; // 0x7b8
	CEntityIOOutput m_OnTrigger10; // 0x7e0
	CEntityIOOutput m_OnTrigger11; // 0x808
	CEntityIOOutput m_OnTrigger12; // 0x830
	CEntityIOOutput m_OnTrigger13; // 0x858
	CEntityIOOutput m_OnTrigger14; // 0x880
	CEntityIOOutput m_OnTrigger15; // 0x8a8
	CEntityIOOutput m_OnTrigger16; // 0x8d0
	CHandle< CSceneEntity > m_hInterruptScene; // 0x8f8
	int32_t m_nInterruptCount; // 0x8fc
	bool m_bSceneMissing; // 0x900
	bool m_bInterrupted; // 0x901
	bool m_bCompletedEarly; // 0x902
	bool m_bInterruptSceneFinished; // 0x903
	bool m_bRestoring; // 0x904
	bool m_bGenerated; // 0x905
	CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x908
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x920
	CUtlSymbolLarge m_iszSoundName; // 0x938
	CHandle< CBaseFlex > m_hActor; // 0x940
	CHandle< CBaseEntity > m_hActivator; // 0x944
	CHandle< CBaseEntity > m_hCamera; // 0x948
	int32_t m_BusyActor; // 0x94c
	SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x950
public:
	static int32_t &Get_s_nSceneFlushCounter() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSceneEntity")->m_static_fiels[0]->m_instance); }
};

// Aligment: 5
// Size: 1240
class CShadowControl : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_shadowDirection; // 0x4c0
	// MNetworkEnable
	// MNetworkEnable
	Color m_shadowColor; // 0x4cc
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowMaxDist; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableShadows; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableLocalLightShadows; // 0x4d5
};

// Aligment: 8
// Size: 1288
class CSoundOpvarSetEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszStackName; // 0x4c8
	CUtlSymbolLarge m_iszOperatorName; // 0x4d0
	CUtlSymbolLarge m_iszOpvarName; // 0x4d8
	int32_t m_nOpvarType; // 0x4e0
	int32_t m_nOpvarIndex; // 0x4e4
	float m_flOpvarValue; // 0x4e8
	CUtlSymbolLarge m_OpvarValueString; // 0x4f0
	bool m_bSetOnSpawn; // 0x4f8
};

// Aligment: 28
// Size: 1480
class CSoundOpvarSetPointEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_OnEnter; // 0x4c0
	CEntityIOOutput m_OnExit; // 0x4e8
	float m_flDistanceMin; // 0x510
	float m_flDistanceMax; // 0x514
	float m_flValSetOnDisable; // 0x518
	bool m_bSetValueOnDisable; // 0x51c
	bool m_bDisabled; // 0x51d
	bool m_bAutoDisable; // 0x51e
	CEntityHandle m_hSource; // 0x538
	CUtlSymbolLarge m_iszSourceEntityName; // 0x548
	float m_flDistanceMapMin; // 0x550
	float m_flDistanceMapMax; // 0x554
	float m_flOcclusionRadius; // 0x558
	float m_flOcclusionMin; // 0x55c
	float m_flOcclusionMax; // 0x560
	int32_t m_nSimulationMode; // 0x564
	int32_t m_nVisibilitySamples; // 0x568
	Vector m_vDynamicProxyPoint; // 0x56c
	float m_flDynamicMaximumOcclusion; // 0x578
	CEntityHandle m_hDynamicEntity; // 0x57c
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x580
	float m_flPathingDistanceNormFactor; // 0x588
	Vector m_vPathingSourcePos; // 0x58c
	Vector m_vPathingListenerPos; // 0x598
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x5a8
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x5b0
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x5b8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x5c0
};

// Aligment: 9
// Size: 1584
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x5c8
	Vector m_vDistanceInnerMaxs; // 0x5d4
	Vector m_vDistanceOuterMins; // 0x5e0
	Vector m_vDistanceOuterMaxs; // 0x5ec
	int32_t m_nAABBDirection; // 0x5f8
	Vector m_vInnerMins; // 0x5fc
	Vector m_vInnerMaxs; // 0x608
	Vector m_vOuterMins; // 0x614
	Vector m_vOuterMaxs; // 0x620
};

// Aligment: 0
// Size: 1584
class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity, CSoundOpvarSetPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1224
class CSoundStackSave : public CLogicalEntity, CServerOnlyEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszStackName; // 0x4c0
};

// Aligment: 12
// Size: 1392
class CSoundEventEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartOnSpawn; // 0x4c0
	bool m_bToLocalPlayer; // 0x4c1
	bool m_bStopOnNew; // 0x4c2
	bool m_bSaveRestore; // 0x4c3
	bool m_bSavedIsPlaying; // 0x4c4
	float m_flSavedElapsedTime; // 0x4c8
	CUtlSymbolLarge m_iszSoundName; // 0x4d0
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4d8
	CUtlSymbolLarge m_iszAttachmentName; // 0x4e0
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4e8
	CEntityIOOutput m_onSoundFinished; // 0x510
	CEntityHandle m_hSource; // 0x568
};

// Aligment: 0
// Size: 1392
class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1416
class CSoundEventAABBEntity : public CSoundEventEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vMins; // 0x570
	Vector m_vMaxs; // 0x57c
};

// Aligment: 2
// Size: 1240
class CSoundEventParameter : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_iszParamName; // 0x4c8
	float m_flFloatValue; // 0x4d0
};

// Aligment: 0
// Size: 1216
class CNullEntity : public CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1224
class CBaseDMStart : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_Master; // 0x4c0
};

// Aligment: 0
// Size: 1216
class CInfoLandmark : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1776
class CFuncNavObstruction : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x6e8
};

// Aligment: 16
// Size: 1888
class CBaseToggle : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x6e0
	float m_flMoveDistance; // 0x6e4
	float m_flWait; // 0x6e8
	float m_flLip; // 0x6ec
	bool m_bAlwaysFireBlockedOutputs; // 0x6f0
	Vector m_vecPosition1; // 0x6f4
	Vector m_vecPosition2; // 0x700
	QAngle m_vecMoveAng; // 0x70c
	QAngle m_vecAngle1; // 0x718
	QAngle m_vecAngle2; // 0x724
	float m_flHeight; // 0x730
	CHandle< CBaseEntity > m_hActivator; // 0x734
	Vector m_vecFinalDest; // 0x738
	QAngle m_vecFinalAngle; // 0x744
	int32_t m_movementType; // 0x750
	CUtlSymbolLarge m_sMaster; // 0x758
};

// Aligment: 0
// Size: 1760
class CEntityBlocker : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 10
// Size: 1264
class CEnvDOFController : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flFocusTargetRange; // 0x4c0
	CUtlSymbolLarge m_strFocusTargetName; // 0x4c8
	CHandle< CBaseEntity > m_hFocusTarget; // 0x4d0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDOFEnabled; // 0x4d4
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurDepth; // 0x4d8
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearFocusDepth; // 0x4dc
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarFocusDepth; // 0x4e0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurDepth; // 0x4e4
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurRadius; // 0x4e8
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurRadius; // 0x4ec
};

// Aligment: 5
// Size: 1312
class CEnvPlayerSurfaceTrigger : public CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_iTargetGameMaterial; // 0x4c0
	int32_t m_iCurrentGameMaterial; // 0x4c4
	bool m_bDisabled; // 0x4c8
	CEntityIOOutput m_OnSurfaceChangedToTarget; // 0x4d0
	CEntityIOOutput m_OnSurfaceChangedFromTarget; // 0x4f8
};

// Aligment: 30
// Size: 2120
class CEnvProjectedTexture : public CModelPointEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetEntity; // 0x6e0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x6e4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x6e5
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x6ed
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x6ee
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x6ef
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x6f4
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x6fc
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x704
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x71c
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x720
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x724
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_SpotlightTextureName; // 0x728
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x82c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x830
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x834
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x838
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x83c
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x840
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x844
};

// Aligment: 3
// Size: 1776
class CFuncAreaPortalBase : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_portalNumber; // 0x6e0
	int32_t m_iPortalVersion; // 0x6e4
	int16_t m_AreaPortalsElement; // 0x6e8
};

// Aligment: 5
// Size: 1808
class CFuncAreaPortalWindow : public CFuncAreaPortalBase, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDist; // 0x6f4
	// MNetworkEnable
	// MNetworkEnable
	float m_flTranslucencyLimit; // 0x6f8
	CUtlSymbolLarge m_iBackgroundBModelName; // 0x700
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iBackgroundModelIndex; // 0x708
};

// Aligment: 1
// Size: 1768
class CFuncOccluder : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bStartDisabled; // 0x6e0
};

// Aligment: 1
// Size: 1768
class CMarkupVolume : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bEnabled; // 0x6e0
};

// Aligment: 5
// Size: 1824
class CMarkupVolumeTagged : public CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bIsGroup; // 0x718
	bool m_bGroupByPrefab; // 0x719
	bool m_bGroupByVolume; // 0x71a
	bool m_bGroupOtherGroups; // 0x71b
	bool m_bIsInGroup; // 0x71c
};

// Aligment: 3
// Size: 1848
class CMarkupVolumeWithRef : public CMarkupVolumeTagged, CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bUseRef; // 0x720
	Vector m_vRefPos; // 0x724
	float m_flRefDot; // 0x730
};

// Aligment: 5
// Size: 1792
class CFuncBrush : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x6e0
	int32_t m_iDisabled; // 0x6e4
	bool m_bSolidBsp; // 0x6e8
	CUtlSymbolLarge m_iszExcludedClass; // 0x6f0
	bool m_bInvertExclusion; // 0x6f8
};

// Aligment: 2
// Size: 1776
class CFuncNavBlocker : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDisabled; // 0x6e0
	int32_t m_nBlockedTeamNumber; // 0x6e4
};

// Aligment: 23
// Size: 1872
class CSprite : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x6e0
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachedToEntity; // 0x6e8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	AttachmentHandle_t m_nAttachment; // 0x6ec
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "60"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0x6f0
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	float m_flFrame; // 0x6f4
	float m_flDieTime; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nBrightness; // 0x708
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x70c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	float m_flScaleDuration; // 0x714
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x718
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x71c
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x720
	float m_flLastTime; // 0x724
	float m_flMaxFrame; // 0x728
	float m_flStartScale; // 0x72c
	float m_flDestScale; // 0x730
	float m_flScaleTimeStart; // 0x734
	int32_t m_nStartBrightness; // 0x738
	int32_t m_nDestBrightness; // 0x73c
	float m_flBrightnessTimeStart; // 0x740
	int32_t m_nSpriteWidth; // 0x744
	int32_t m_nSpriteHeight; // 0x748
};

// Aligment: 0
// Size: 1872
class CSpriteOriented : public CSprite, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 4
// Size: 1784
class CFogVolume : public CServerOnlyModelEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x6e0
	CUtlSymbolLarge m_postProcessName; // 0x6e8
	bool m_bDisabled; // 0x6f4
	bool m_bInFogVolumesList; // 0x6f5
};

// Aligment: 1
// Size: 1768
class CLightEntity : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x6e0
};

// Aligment: 0
// Size: 1768
class CLightSpotEntity : public CLightEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class CLightOrthoEntity : public CLightEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class CLightDirectionalEntity : public CLightEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1768
class CLightEnvironmentEntity : public CLightDirectionalEntity, CLightEntity, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1760
class CWorld : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 7
// Size: 2112
class CBaseAnimating : public CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x6e0
	CUtlVector< handposepair_t > m_HandPoses; // 0x6f8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x710
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x711
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_nMuzzleFlashParity; // 0x713
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasings_t m_Easings; // 0x7e0
	bool m_bShouldUseAnimGraph; // 0x818
};

// Aligment: 0
// Size: 2112
class CBaseAnimatingOverlay : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 30
// Size: 2400
class CDynamicProp : public CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x840
	CEntityIOOutput m_pOutputAnimOver; // 0x868
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x890
	CEntityIOOutput m_OnAnimReachedStart; // 0x8b8
	CEntityIOOutput m_OnAnimReachedEnd; // 0x8e0
	CUtlSymbolLarge m_iszDefaultAnim; // 0x908
	CUtlSymbolLarge m_iszInitialAnim; // 0x910
	HSequence m_hGoalSequence; // 0x918
	int32_t m_iTransitionDirection; // 0x91c
	bool m_bAnimateOnServer; // 0x920
	bool m_bRandomizeCycle; // 0x921
	bool m_bHoldAnimation; // 0x922
	bool m_bIsHoldingAnimation; // 0x923
	bool m_bRandomAnimator; // 0x924
	float m_flNextRandAnim; // 0x928
	float m_flMinRandAnimDuration; // 0x92c
	float m_flMaxRandAnimDuration; // 0x930
	HSequence m_hPendingSequence; // 0x934
	bool m_bStartDisabled; // 0x938
	bool m_bUpdateAttachedChildren; // 0x939
	bool m_bFiredStartEndOutput; // 0x93a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0x93b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0x93c
	bool m_bCreateNavObstacle; // 0x948
	bool m_bCreateNonSolid; // 0x949
	bool m_bIsOverrideProp; // 0x94a
	int32_t m_iInitialGlowState; // 0x94c
	int32_t m_nGlowRange; // 0x950
	int32_t m_nGlowRangeMin; // 0x954
	Color m_glowColor; // 0x958
};

// Aligment: 0
// Size: 2400
class CDynamicPropAlias_dynamic_prop : public CDynamicProp, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2400
class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2400
class CDynamicPropAlias_cable_dynamic : public CDynamicProp, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1784
class CAreaPortal : public CFuncAreaPortalBase, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_state; // 0x6f0
};

// Aligment: 0
// Size: 1824
class CMarkupVolumeTagged_Group : public CMarkupVolumeTagged, CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1824
class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged, CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1824
class CMarkupVolumeTagged_NavL4D : public CMarkupVolumeTagged, CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1848
class CMarkupVolumeTagged_AI_HLVR : public CMarkupVolumeWithRef, CMarkupVolumeTagged, CMarkupVolume, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2400
class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity, CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 6
// Size: 2680
class CInstancedSceneEntity : public CSceneEntity, CPointEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x960
	bool m_bHadOwner; // 0x964
	float m_flPostSpeakDelay; // 0x968
	float m_flPreDelay; // 0x96c
	char[260] m_szInstanceFilename; // 0x970
	bool m_bIsBackground; // 0xa74
};

// Aligment: 0
// Size: 1872
class CSpriteAlias_env_glow : public CSprite, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 1792
class CScriptNavBlocker : public CFuncNavBlocker, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	Vector m_vExtent; // 0x6f0
};

// Aligment: 6
// Size: 2264
class CBaseFlex : public CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CUtlVector< float32 > m_flexWeight; // 0x840
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_viewtarget; // 0x858
	// MNetworkEnable
	// MNetworkEnable
	bool m_blinktoggle; // 0x864
	float m_flAllowResponsesEndTime; // 0x8c0
	float m_flLastFlexAnimationTime; // 0x8c4
	bool m_bUpdateLayerPriorities; // 0x8c8
};

// Aligment: 9
// Size: 10504
class CFlexCycler : public CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	float m_flextime; // 0x8d8
	float32[2048] m_flextarget; // 0x8e0
	float m_blinktime; // 0x28e0
	float m_looktime; // 0x28e4
	Vector m_lookTarget; // 0x28e8
	float m_speaktime; // 0x28f4
	int32_t m_istalking; // 0x28f8
	int32_t m_phoneme; // 0x28fc
	HSequence m_hCurrLayerSequence; // 0x2900
};

// Aligment: 9
// Size: 10576
class CGenericFlexCycler : public CFlexCycler, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0x2910
	int32_t m_nTestIndex; // 0x2914
	CUtlSymbolLarge m_poseParameterName; // 0x2918
	bool m_bDoClientSideAnimation; // 0x2920
	CUtlSymbolLarge[2] m_layerSequence; // 0x2928
	int32[2] m_nLayerIndex; // 0x2938
	HSequence[2] m_hBaseSequence; // 0x2940
	int32_t m_nBoneOverrideIndex; // 0x2948
	float m_flLastSimTime; // 0x294c
};

// Aligment: 0
// Size: 2264
class CBaseFlexAlias_funCBaseFlex : public CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 10576
class CGenericFlexCyclerAlias_cycler : public CGenericFlexCycler, CFlexCycler, CBaseFlex, CBaseAnimatingOverlay, CBaseAnimating, CBaseModelEntity, CBaseEntity, CGameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

