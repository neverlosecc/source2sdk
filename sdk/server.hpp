#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: server.dll
// Classes count: 748
// Enums count: 121
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

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
// Size: 0x3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
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
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
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
enum class ChatIgnoreType_t : uint32_t
{
	CHAT_IGNORE_NONE = 0x0,
	CHAT_IGNORE_ALL = 0x1,
	CHAT_IGNORE_TEAM = 0x2,
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
// Size: 0x4
enum class CommandExecMode_t : uint32_t
{
	EXEC_MANUAL = 0x0,
	EXEC_LEVELSTART = 0x1,
	EXEC_PERIODIC = 0x2,
	EXEC_MODES_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x2
enum class CommandEntitySpecType_t : uint32_t
{
	SPEC_SEARCH = 0x0,
	SPEC_TYPES_COUNT = 0x1,
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
// Size: 0x3
enum class ObserverInterpState_t : uint32_t
{
	OBSERVER_INTERP_NONE = 0x0,
	OBSERVER_INTERP_TRAVELING = 0x1,
	OBSERVER_INTERP_SETTLING = 0x2,
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

// Alignment: 4
// Size: 0x3
enum class AmmoFlags_t : uint32_t
{
	AMMO_FORCE_DROP_IF_CARRIED = 0x1,
	AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
	AMMO_FLAG_MAX = 0x2,
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
enum class CanPlaySequence_t : uint32_t
{
	CANNOT_PLAY = 0x0,
	CAN_PLAY_NOW = 0x1,
	CAN_PLAY_ENQUEUED = 0x2,
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
// Size: 0x4
enum class ScriptedOnDeath_t : uint32_t
{
	SS_ONDEATH_NOT_APPLICABLE = 0xffffffffffffffff,
	SS_ONDEATH_UNDEFINED = 0x0,
	SS_ONDEATH_RAGDOLL = 0x1,
	SS_ONDEATH_ANIMATED_DEATH = 0x2,
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
// Size: 0x5
enum class TimelineCompression_t : uint32_t
{
	TIMELINE_COMPRESSION_SUM = 0x0,
	TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
	TIMELINE_COMPRESSION_AVERAGE = 0x2,
	TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
	TIMELINE_COMPRESSION_TOTAL = 0x4,
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
// Size: 0x3
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
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
// Size: 0x2
enum class CRR_Response__ResponseEnum_t : uint32_t
{
	MAX_RESPONSE_NAME = 0xc0,
	MAX_RULE_NAME = 0x80,
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
// Size: 0x4
enum class ScriptedMoveType_t : uint32_t
{
	SCRIPTED_MOVETYPE_NONE = 0x0,
	SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
	SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
	SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class ForcedCrouchState_t : uint32_t
{
	FORCEDCROUCH_NONE = 0x0,
	FORCEDCROUCH_CROUCHED = 0x1,
	FORCEDCROUCH_UNCROUCHED = 0x2,
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
// Size: 0x1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class CLogicBranchList__LogicBranchListenerLastState_t : uint32_t
{
	LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
	LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
	LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
	LOGIC_BRANCH_LISTENER_MIXED = 0x3,
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
// Size: 0x2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
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
// Size: 0x2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
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
// Size: 0x2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
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
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
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
enum class PropDoorRotatingOpenDirection_e : uint32_t
{
	DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
	DOOR_ROTATING_OPEN_FORWARD = 0x1,
	DOOR_ROTATING_OPEN_BACKWARD = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class ScriptedConflictResponse_t : uint32_t
{
	SS_CONFLICT_ENQUEUE = 0x0,
	SS_CONFLICT_INTERRUPT = 0x1,
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
// Size: 0x3
enum class SoundEventStartType_t : uint32_t
{
	SOUNDEVENT_START_PLAYER = 0x0,
	SOUNDEVENT_START_WORLD = 0x1,
	SOUNDEVENT_START_ENTITY = 0x2,
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
// Size: 0x2
enum class FuncDoorSpawnPos_t : uint32_t
{
	FUNC_DOOR_SPAWN_CLOSED = 0x0,
	FUNC_DOOR_SPAWN_OPEN = 0x1,
};

// Alignment: 4
// Size: 0x2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
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

// Alignment: 4
// Size: 0x3
enum class EOverrideBlockLOS_t : uint32_t
{
	BLOCK_LOS_DEFAULT = 0x0,
	BLOCK_LOS_FORCE_FALSE = 0x1,
	BLOCK_LOS_FORCE_TRUE = 0x2,
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
// Size: 0x3
enum class TrackOrientationType_t : uint32_t
{
	TrackOrientation_Fixed = 0x0,
	TrackOrientation_FacePath = 0x1,
	TrackOrientation_FacePathAngles = 0x2,
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
// Size: 0x3
enum class TrainVelocityType_t : uint32_t
{
	TrainVelocity_Instantaneous = 0x0,
	TrainVelocity_LinearBlend = 0x1,
	TrainVelocity_EaseInEaseOut = 0x2,
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
// Size: 0x4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
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
// Size: 0x5
enum class ShatterDamageCause : uint8_t
{
	SHATTERDAMAGE_BULLET = 0x0,
	SHATTERDAMAGE_MELEE = 0x1,
	SHATTERDAMAGE_THROWN = 0x2,
	SHATTERDAMAGE_SCRIPT = 0x3,
	SHATTERDAMAGE_EXPLOSIVE = 0x4,
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

// Alignment: 1
// Size: 0x3
enum class OnFrame : uint8_t
{
	ONFRAME_UNKNOWN = 0x0,
	ONFRAME_TRUE = 0x1,
	ONFRAME_FALSE = 0x2,
};

// Alignment: 1
// Size: 0x2
enum class ShardSolid_t : uint8_t
{
	SHARD_SOLID = 0x0,
	SHARD_DEBRIS = 0x1,
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
// Size: 0x4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	SUBCLASS_SCOPE_PRECIPITATION = 0x0,
	SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
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
// Size: 0x4
enum class WeaponAttackType_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	ePrimary = 0x0,
	eSecondary = 0x1,
	eCount = 0x2,
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
// Size: 0x2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
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
enum class LifeState_t : uint32_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
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
// Size: 0x2
enum class ModifyDamageReturn_t : uint32_t
{
	CONTINUE_TO_APPLY_DAMAGE = 0x0,
	ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
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
// Size: 0x3
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
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
// Size: 0x3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Alignment: 4
// Size: 0x2
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Alignment: 4
// Size: 0x4
enum class SpawnPointCoopEnemy__BotDefaultBehavior_t : uint32_t
{
	DEFEND_AREA = 0x0,
	HUNT = 0x1,
	CHARGE_ENEMY = 0x2,
	DEFEND_INVESTIGATE = 0x3,
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
// Size: 0x3
enum class CSWeaponSilencerType : uint32_t
{
	WEAPONSILENCER_NONE = 0x0,
	WEAPONSILENCER_DETACHABLE = 0x1,
	WEAPONSILENCER_INTEGRATED = 0x2,
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
enum class CSWeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
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
// Size: 0x3
enum class EGrenadeThrowState : uint32_t
{
	NotThrowing = 0x0,
	Throwing = 0x1,
	ThrowComplete = 0x2,
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

struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct CSkeletonInstance;
struct GameTime_t;
struct CSkillFloat;
struct GameTick_t;
struct fogplayerparams_t;
struct audioparams_t;
struct CInButtonState;
struct CRangeInt;
struct CRangeFloat;
struct CBaseAnimGraphController;
struct ModelConfigHandle_t;
struct CEntityInstance;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct HSequence;
struct CModelState;
struct ResponseFollowup;
struct ResponseParams;
struct CRR_Response;
struct CBaseFlex;
struct CResponseCriteriaSet;
struct CSoundEnvelope;
struct CCopyRecipientFilter;
struct CPulse_OutflowConnection;
struct CBodyComponent;
struct CNetworkTransmitComponent;
struct CEntityIOOutput;
struct CNetworkVelocityVector;
struct CCollisionProperty;
struct CountdownTimer;
struct VelocitySampler;
struct SimpleConstraintSoundProfile;
struct sky3dparams_t;
struct CSkyCamera;
struct ParticleIndex_t;
struct VPhysicsCollisionAttribute_t;
struct AttachmentHandle_t;
struct fogparams_t;
struct AmmoIndex_t;
struct CTakeDamageInfo;
struct CTakeDamageResult;
struct CAttributeManager;
struct CEconItemView;
struct CCSGameRules;
struct CCSGameModeRules;
struct CRetakeGameRules;
struct WeaponPurchaseTracker_t;
struct CSMatchStats_t;
struct CBasePlayerController;
struct CVoteController;
struct CCSPlayerController;
struct CCSPlayerPawn;
struct CPointCamera;
struct CNetworkedSequenceOperation;
struct CAnimGraphNetworkedVariables;
struct AnimationUpdateListHandle_t;
struct CRenderComponent;
struct CHitboxComponent;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CEnvWindShared;
struct CPhysicsShake;
struct CPathKeyFrame;
struct CConstantForceController;
struct CMotorController;
struct ConstraintSoundInfo;
struct constraint_hingeparams_t;
struct dynpitchvol_t;
struct locksound_t;
struct CPathTrack;
struct CAttributeList;
struct CBuoyancyHelper;
struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct IntervalTimer;
struct CFiringModeFloat;
struct CFiringModeInt;
struct Extent;
struct CLightComponent;
struct IChoreoServices;
struct PhysicsRagdollPose_t;
struct hudtextparms_t;
struct CFuncTrackTrain;
struct CSprite;
struct ragdoll_t;
struct shard_model_desc_t;
struct CAttributeContainer;
struct EntitySpottedState_t;
struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct CAI_Expresser;
struct CIronSightController;
struct CTouchExpansionComponent;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct CCSBot;
struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_ActionTrackingServices;
struct CCSPlayer_RadioServices;
struct CCSPlayer_DamageReactServices;

// Alignment: 1
// Size: 0x8
class CRangeFloat
{
public:
	float m_pValue[2]; // 0x0	
};

// Alignment: 1
// Size: 0x8
class CRangeInt
{
public:
	int32_t m_pValue[2]; // 0x0	
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

// Alignment: 0
// Size: 0x98
class CNavVolumeAll : public CNavVolumeVector
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x80
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70	
	float m_flRadius; // 0x7c	
};

// Alignment: 1
// Size: 0x88
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:
	float m_flRadiusInner; // 0x80	
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
// Size: 0x18
class CNavHullPresetVData
{
public:
	// MPropertyFriendlyName "Nav Hulls"
	// MPropertyDescription "List of nav hulls belonging to this preset."
	// MPropertyAttributeEditor "VDataChoice( scripts/nav_hulls.vdata )"
	CUtlVector< CUtlString > m_vecNavHulls; // 0x0	
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

// Alignment: 11
// Size: 0x78
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x16]; // 0x42
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
};

// Alignment: 3
// Size: 0x30
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
};

// Alignment: 1
// Size: 0x38
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x50
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
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

// Alignment: 2
// Size: 0x10
class CGameSceneNodeHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8	
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc	
};

// Alignment: 1
// Size: 0x28
class CHitboxComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x1c]; // 0x8
public:
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; // 0x24	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x4
struct GameTime_t
{
public:
	float m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_FLOAT(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTime_t")->m_static_fields[0]->m_instance);};
	static GameTime_t &Get_Zero(){return *reinterpret_cast<GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTime_t")->m_static_fields[1]->m_instance);};
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
	static int32_t &Get_s_nDebugStateChange(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_s_nWatchTransmitEntity(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[1]->m_instance);};
	static bool &Get_s_bUseNetworkVars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[2]->m_instance);};
	static bool &Get_s_bNetworkVarPerFieldTracking(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[3]->m_instance);};
	static bool &Get_s_bNetworkVarValidate(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[4]->m_instance);};
	static bool &Get_s_bUsingPVSConvars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[5]->m_instance);};
};

// Alignment: 5
// Size: 0xb8
class CRenderComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	bool m_bIsRenderingWithViewModels; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	uint32_t m_nSplitscreenFlags; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	bool m_bEnableRendering; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x4f]; // 0x61
public:
	bool m_bInterpolationReadyToDraw; // 0xb0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 1
// Size: 0x4
struct AnimationUpdateListHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("AnimationUpdateListHandle_t")->m_static_fields[0]->m_instance);};
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

// Alignment: 0
// Size: 0x20
class CAnimEventListener : public CAnimEventListenerBase
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x18
class CAnimGraphTagRef
{
public:
	int32_t m_nTagIndex; // 0x0	
	CGlobalSymbol m_tagName; // 0x10	
};

// Alignment: 1
// Size: 0x20
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	float m_flFluidDensity; // 0x18	
};

// Alignment: 1
// Size: 0x10
class CSkillFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Alignment: 1
// Size: 0x10
class CSkillInt
{
public:
	int32_t m_pValue[4]; // 0x0	
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

// Alignment: 1
// Size: 0x10
class CRemapFloat
{
public:
	float m_pValue[4]; // 0x0	
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
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams(){return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fields[0]->m_instance);};
};

// Alignment: 3
// Size: 0x48
struct ViewAngleServerChange_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	FixAngleSet_t nType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MNetworkEnable
	// MNetworkEncoder
	QAngle qAngle; // 0x34	
	// MNetworkEnable
	uint32_t nIndex; // 0x40	
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
// Size: 0x40
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x78
struct audioparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector localSound[8]; // 0x8	
	// MNetworkEnable
	int32_t soundscapeIndex; // 0x68	
	// MNetworkEnable
	uint8_t localBits; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70	
	// MNetworkEnable
	uint32_t soundEventHash; // 0x74	
};

// Alignment: 1
// Size: 0x4
struct GameTick_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTick_t")->m_static_fields[0]->m_instance);};
	static GameTick_t &Get_Zero(){return *reinterpret_cast<GameTick_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTick_t")->m_static_fields[1]->m_instance);};
};

// Alignment: 0
// Size: 0x40
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:
	// No members available
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

// Alignment: 15
// Size: 0x1d0
class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:
	int32_t m_nImpulse; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CInButtonState m_nButtons; // 0x48	
	uint64_t m_nQueuedButtonDownMask; // 0x68	
	uint64_t m_nQueuedButtonChangeMask; // 0x70	
	uint64_t m_nButtonDoublePressed; // 0x78	
	uint32_t m_pButtonPressedCmdNumber[64]; // 0x80	
	uint32_t m_nLastCommandNumberProcessed; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nToggleButtonDownMask; // 0x188	
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2048.000000"
	// MNetworkEncodeFlags
	float m_flMaxspeed; // 0x190	
	// MNetworkEnable
	float m_arrForceSubtickMoveWhen[4]; // 0x194	
	float m_flForwardMove; // 0x1a4	
	float m_flLeftMove; // 0x1a8	
	float m_flUpMove; // 0x1ac	
	Vector m_vecLastMovementImpulses; // 0x1b0	
	QAngle m_vecOldViewAngles; // 0x1bc	
};

// Alignment: 4
// Size: 0x50
class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< CBaseEntity > m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
};

// Alignment: 0
// Size: 0x40
class CPlayer_UseServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 6
// Size: 0xb0
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	bool m_bAllowSwitchToNoWeapon; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // 0x48	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hActiveWeapon; // 0x60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< CBasePlayerWeapon > m_hLastWeapon; // 0x64	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x68	
	bool m_bPreventWeaponPickup; // 0xa8	
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

// Alignment: 0
// Size: 0x18
class CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No members available
};

// Alignment: 33
// Size: 0x150
class CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
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
private:
	[[maybe_unused]] uint8_t __pad0050[0x20]; // 0x50
public:
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x70	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x8]; // 0xb0
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xc4	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xc8	
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0xd4	
	// MNetworkDisable
	float m_flAbsScale; // 0xe0	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xe4	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xe6	
	// MNetworkDisable
	bool m_bDormant; // 0xe7	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xe8	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyHierarchy: 1; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeInfo: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedPositionChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedAnglesChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedScaleChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bWillBeCallingPostDataUpdate: 1; 		
		// MNetworkDisable
		uint8_t m_bNotifyBoneTransformsChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bBoneMergeFlex: 1; 		
		// MNetworkDisable
		uint8_t m_nLatchAbsOrigin: 2; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
		uint16_t __pad0: 13;
	}; // 24 bits
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0xeb	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xec	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xed	
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	// MNetworkEnable
	CUtlStringToken m_name; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f4[0x3c]; // 0xf4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x130	
	// MNetworkDisable
	float m_flZOffset; // 0x134	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x138	
};

// Alignment: 2
// Size: 0x48
struct EntityRenderAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_ID; // 0x30	
	// MNetworkEnable
	Vector4D m_Values; // 0x34	
};

// Alignment: 1
// Size: 0x4
struct ModelConfigHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("ModelConfigHandle_t")->m_static_fields[0]->m_instance);};
};

// Alignment: 4
// Size: 0x68
struct ActiveModelConfig_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x30	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50	
};

// Alignment: 7
// Size: 0x230
class CModelState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0	
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x38]; // 0xb0
public:
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00e9[0x97]; // 0xe9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0188[0x9a]; // 0x188
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x222	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x223	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x224	
};

// Alignment: 8
// Size: 0x3f0
class CSkeletonInstance : public CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0150[0x10]; // 0x150
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x160	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x390	
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x391	
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x392	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyMotionType: 1; 		
		// MNetworkDisable
		uint8_t m_bIsGeneratingLatchedParentSpaceState: 1; 		
		uint16_t __pad1: 14;
	}; // 16 bits
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x394	
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x398	
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

// Alignment: 68
// Size: 0x1d0
class CLightComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0070[0x15]; // 0x70
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x85	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_SecondaryColor; // 0x89	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x90	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessScale; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x98	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; // 0x9c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0xa4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0xa8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0xac	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; // 0xb0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; // 0xb4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; // 0xc4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xc8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xcc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xd4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; // 0xdc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; // 0xe0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xe4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xe8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; // 0xf0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; // 0xf4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; // 0xf8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xfc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0x100	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0x108	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0x10c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0x110	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0x114	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0x118	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	// MNetworkAlias "m_bUsesIndexedBakedLighting"
	bool m_bUsesBakedShadowing; // 0x11c	
private:
	[[maybe_unused]] uint8_t __pad011d[0x3]; // 0x11d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; // 0x120	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x124	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x7]; // 0x129
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x130	
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x138	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x13c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x140	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x144	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x148	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x14c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x150	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x151	
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x152	
private:
	[[maybe_unused]] uint8_t __pad0153[0x1]; // 0x153
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x154	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x160	
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x16c	
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x178	
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x184	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x190	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x194	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x198	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x19c	
	// MNetworkEnable
	Color m_SkyColor; // 0x1a0	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x1a4	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x1a8	
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x1ac	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x1ad	
private:
	[[maybe_unused]] uint8_t __pad01ae[0x2]; // 0x1ae
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x1b0	
	// MNetworkEnable
	float m_flCapsuleLength; // 0x1b4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0xc]; // 0x1bc
public:
	bool m_bPvsModifyEntity; // 0x1c8	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 14
// Size: 0x40
struct fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
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

// Alignment: 2
// Size: 0x470
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x50	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x440	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Alignment: 2
// Size: 0x1d0
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x50	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1a0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Alignment: 0
// Size: 0x8
class IChoreoServices
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static uint32_t &Get_ms_uSequenceId(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("IChoreoServices")->m_static_fields[0]->m_instance);};
};

// Alignment: 14
// Size: 0x220
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	float m_flStepSoundTime; // 0x1d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags
	float m_flFallVelocity; // 0x1d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; // 0x1dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; // 0x1e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x1e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x1e5	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x1e6	
private:
	[[maybe_unused]] uint8_t __pad01e7[0x1]; // 0x1e7
public:
	Vector m_groundNormal; // 0x1e8	
	float m_flSurfaceFriction; // 0x1f4	
	CUtlStringToken m_surfaceProps; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0xc]; // 0x1fc
public:
	int32_t m_nStepside; // 0x208	
	int32_t m_iTargetVolume; // 0x20c	
	Vector m_vecSmoothedVelocity; // 0x210	
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

// Alignment: 1
// Size: 0x10
class CSkeletonAnimationController : public ISkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8	
};

// Alignment: 8
// Size: 0x28
class CNetworkedSequenceOperation
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x8	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	// MNetworkChangeCallback "sequenceOpCycleChanged"
	float m_flCycle; // 0x10	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	CNetworkedQuantizedFloat m_flWeight; // 0x14	
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x1c	
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x20	
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x24	
};

// Alignment: 1
// Size: 0x4a0
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x470	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Alignment: 22
// Size: 0x1d8
class CAnimGraphNetworkedVariables
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetBoolVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CNetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1a0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nBoolVariablesCount; // 0x1b8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1bc	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nRandomSeedOffset; // 0x1c0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; // 0x1c4	
};

// Alignment: 2
// Size: 0x10
class IntervalTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_timestamp; // 0x8	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0xc	
};

// Alignment: 4
// Size: 0x18
class CountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	GameTime_t m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0x14	
};

// Alignment: 3
// Size: 0x18
class EngineCountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	float m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
};

// Alignment: 7
// Size: 0x228
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	float m_flValues[64]; // 0x10	
	// MNetworkEnable
	int32_t m_nValueCounts[64]; // 0x110	
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210	
	// MNetworkEnable
	float m_flInterval; // 0x214	
	// MNetworkEnable
	float m_flFinalValue; // 0x218	
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c	
	// MNetworkEnable
	bool m_bStopped; // 0x220	
};

// Alignment: 13
// Size: 0x2e0
class CBaseAnimGraphController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChangedCompat"
	CNetworkedSequenceOperation m_baseLayer; // 0x18	
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x40	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x3]; // 0x219
public:
	// MNetworkDisable
	float m_flLastEventCycle; // 0x21c	
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x220	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playbackRateChangedCompat"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x224	
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x22c	
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChangedCompat"
	bool m_bClientSideAnimation; // 0x230	
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "clientSideAnimCycleResetCompat"
	int32_t m_nNewSequenceParity; // 0x234	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_nResetEventsParity; // 0x238	
	// MNetworkEnable
	AnimLoopMode_t m_nAnimLoopMode; // 0x23c	
private:
	[[maybe_unused]] uint8_t __pad0240[0x9c]; // 0x240
public:
	// MNetworkDisable
	AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x2dc	
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
// Size: 0x1f0
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0	
	CRR_Response m_response; // 0x8	
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

// Alignment: 1
// Size: 0x68
class CResponseQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x50]; // 0x0
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x50	
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

// Alignment: 1
// Size: 0x70
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60	
};

// Alignment: 1
// Size: 0x78
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:
	bool m_bAllowMultipleScenes; // 0x70	
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

// Alignment: 1
// Size: 0x18
class CPhysicsShake
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_force; // 0x8	
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
	static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSoundPatch")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x118
class CPulseGraphInstance_ServerPointEntity : public CBasePulseGraphInstance
{
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

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_SetAnimGraphParam : public CPulseCell_BaseFlow
{
public:
	CUtlString m_ParamName; // 0x48	
};

// Alignment: 1
// Size: 0x50
class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
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

// Alignment: 1
// Size: 0x88
class CPulseCell_Inflow_GameEvent : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CBufferString m_EventName; // 0x70	
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
// Size: 0x50
class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow
{
public:
	SoundEventStartType_t m_Type; // 0x48	
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

// Alignment: 0
// Size: 0x50
class CTouchExpansionComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->m_static_fields[1]->m_instance);};
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
// Size: 0x64
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
	// No members available
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

// Alignment: 2
// Size: 0x8
struct Relationship_t
{
public:
	Disposition_t disposition; // 0x0	
	int32_t priority; // 0x4	
};

// Alignment: 73
// Size: 0x4b0
class CBaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x30	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad01e8[0x40]; // 0x1e8
public:
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x228	
	int32_t m_iCurrentThinkContext; // 0x240	
	GameTick_t m_nLastThinkTick; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0248[0x8]; // 0x248
public:
	CBitVec< 64 > m_isSteadyState; // 0x250	
	float m_lastNetworkChange; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x268	
	CUtlSymbolLarge m_iszResponseContext; // 0x280	
private:
	[[maybe_unused]] uint8_t __pad0288[0x20]; // 0x288
public:
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x2a8	
	// MNetworkEnable
	int32_t m_iMaxHealth; // 0x2ac	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x2b0	
private:
	[[maybe_unused]] uint8_t __pad02b1[0x3]; // 0x2b1
public:
	float m_flDamageAccumulator; // 0x2b4	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x2b8	
private:
	[[maybe_unused]] uint8_t __pad02b9[0x3]; // 0x2b9
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x2bc	
private:
	[[maybe_unused]] uint8_t __pad02c0[0x1]; // 0x2c0
public:
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x2c1	
	// MNetworkEnable
	MoveType_t m_MoveType; // 0x2c2	
	uint8_t m_nWaterTouch; // 0x2c3	
	uint8_t m_nSlimeTouch; // 0x2c4	
	bool m_bRestoreInHierarchy; // 0x2c5	
private:
	[[maybe_unused]] uint8_t __pad02c6[0x2]; // 0x2c6
public:
	CUtlSymbolLarge m_target; // 0x2c8	
	float m_flMoveDoneTime; // 0x2d0	
	CHandle< CBaseFilter > m_hDamageFilter; // 0x2d4	
	CUtlSymbolLarge m_iszDamageFilterName; // 0x2d8	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CUtlStringToken m_nSubclassID; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e4[0xc]; // 0x2e4
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flAnimTime; // 0x2f0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flSimulationTime; // 0x2f4	
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x2f8	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x2fc	
	// MNetworkEnable
	uint8_t m_ubInterpolationFrame; // 0x2fd	
private:
	[[maybe_unused]] uint8_t __pad02fe[0x2]; // 0x2fe
public:
	Vector m_vPrevVPhysicsUpdatePos; // 0x300	
	// MNetworkEnable
	uint8_t m_iTeamNum; // 0x30c	
private:
	[[maybe_unused]] uint8_t __pad030d[0x3]; // 0x30d
public:
	CUtlSymbolLarge m_iGlobalname; // 0x310	
	int32_t m_iSentToClients; // 0x318	
	float m_flSpeed; // 0x31c	
	CUtlString m_sUniqueHammerID; // 0x320	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x328	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x32c	
	int32_t m_nSimulationTick; // 0x330	
private:
	[[maybe_unused]] uint8_t __pad0334[0x4]; // 0x334
public:
	CEntityIOOutput m_OnKilled; // 0x338	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x360	
	Vector m_vecAbsVelocity; // 0x364	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x370	
private:
	[[maybe_unused]] uint8_t __pad0398[0x8]; // 0x398
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x3a0	
	int32_t m_nPushEnumCount; // 0x3ac	
	CCollisionProperty* m_pCollision; // 0x3b0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEffectEntity; // 0x3b8	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hOwnerEntity; // 0x3bc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x3c0	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hGroundEntity; // 0x3c4	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x3c8	
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x3cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x3d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x3d4	
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	float m_flWaterLevel; // 0x3d8	
	// MNetworkEnable
	bool m_bSimulatedEveryTick; // 0x3dc	
	// MNetworkEnable
	bool m_bAnimatedEveryTick; // 0x3dd	
	bool m_bDisableLowViolence; // 0x3de	
	uint8_t m_nWaterType; // 0x3df	
	int32_t m_iEFlags; // 0x3e0	
private:
	[[maybe_unused]] uint8_t __pad03e4[0x4]; // 0x3e4
public:
	CEntityIOOutput m_OnUser1; // 0x3e8	
	CEntityIOOutput m_OnUser2; // 0x410	
	CEntityIOOutput m_OnUser3; // 0x438	
	CEntityIOOutput m_OnUser4; // 0x460	
	int32_t m_iInitialTeamNum; // 0x488	
	// MNetworkEnable
	GameTime_t m_flNavIgnoreUntilTime; // 0x48c	
	QAngle m_vecAngVelocity; // 0x490	
	bool m_bNetworkQuantizeOriginAndAngles; // 0x49c	
	bool m_bLagCompensate; // 0x49d	
private:
	[[maybe_unused]] uint8_t __pad049e[0x2]; // 0x49e
public:
	float m_flOverriddenFriction; // 0x4a0	
	CHandle< CBaseEntity > m_pBlocker; // 0x4a4	
	float m_flLocalTime; // 0x4a8	
	float m_flVPhysicsUpdateLocalTime; // 0x4ac	
	
	// Static fields:
	static Relationship_t** &Get_sm_DefaultRelationship(){return *reinterpret_cast<Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[3]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[4]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[5]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[6]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeedServer(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[7]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[9]->m_instance);};
};

// Alignment: 0
// Size: 0x4b0
class CServerOnlyEntity : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CServerOnlyPointEntity : public CServerOnlyEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CLogicalEntity : public CServerOnlyEntity
{
public:
	// No members available
};

// Alignment: 17
// Size: 0x6e8
class CColorCorrection : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeInDuration; // 0x4b0	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x4b4	
	float m_flStartFadeInWeight; // 0x4b8	
	float m_flStartFadeOutWeight; // 0x4bc	
	GameTime_t m_flTimeStartFadeIn; // 0x4c0	
	GameTime_t m_flTimeStartFadeOut; // 0x4c4	
	// MNetworkEnable
	float m_flMaxWeight; // 0x4c8	
	bool m_bStartDisabled; // 0x4cc	
	// MNetworkEnable
	bool m_bEnabled; // 0x4cd	
	// MNetworkEnable
	bool m_bMaster; // 0x4ce	
	// MNetworkEnable
	bool m_bClientSide; // 0x4cf	
	// MNetworkEnable
	bool m_bExclusive; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	// MNetworkEnable
	float m_MinFalloff; // 0x4d4	
	// MNetworkEnable
	float m_MaxFalloff; // 0x4d8	
	// MNetworkEnable
	float m_flCurWeight; // 0x4dc	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x4e0	
	CUtlSymbolLarge m_lookupFilename; // 0x6e0	
};

// Alignment: 11
// Size: 0x4e8
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4b0	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4b4	
private:
	[[maybe_unused]] uint8_t __pad04b5[0x3]; // 0x4b5
public:
	float m_flSize; // 0x4b8	
	bool m_bUseHitboxes; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	int32_t m_iNumHitboxFires; // 0x4c0	
	float m_flHitboxFireScale; // 0x4c4	
	GameTime_t m_flLifetime; // 0x4c8	
	CHandle< CBaseEntity > m_hAttacker; // 0x4cc	
	int32_t m_iDangerSound; // 0x4d0	
	float m_flDirectDamagePerSecond; // 0x4d4	
	int32_t m_iCustomDamageType; // 0x4d8	
};

// Alignment: 3
// Size: 0x508
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	CEntityIOOutput m_OnPass; // 0x4b8	
	CEntityIOOutput m_OnFail; // 0x4e0	
};

// Alignment: 4
// Size: 0x590
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x510	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x560	
	int32_t m_nFilterCount; // 0x588	
};

// Alignment: 1
// Size: 0x510
class CFilterProximity : public CBaseFilter
{
public:
	float m_flRadius; // 0x508	
};

// Alignment: 0
// Size: 0x508
class CFilterLOS : public CBaseFilter
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x510
class CFilterClass : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterClass; // 0x508	
};

// Alignment: 4
// Size: 0x4c0
class CBaseFire : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x4b0	
	// MNetworkEnable
	float m_flStartScale; // 0x4b4	
	// MNetworkEnable
	float m_flScaleTime; // 0x4b8	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x4bc	
};

// Alignment: 2
// Size: 0x4c8
class CFireSmoke : public CBaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x4c0	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x4c4	
};

// Alignment: 7
// Size: 0x508
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x10]; // 0x4b0
public:
	int32_t m_fishCount; // 0x4c0	
	float m_maxRange; // 0x4c4	
	float m_swimDepth; // 0x4c8	
	float m_waterLevel; // 0x4cc	
	bool m_isDormant; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x7]; // 0x4d1
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x4d8	
	CountdownTimer m_visTimer; // 0x4f0	
};

// Alignment: 0
// Size: 0x840
class CInfoData : public CServerOnlyEntity
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

// Alignment: 4
// Size: 0x520
class CLogicBranch : public CLogicalEntity
{
public:
	bool m_bInValue; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x4b8	
	CEntityIOOutput m_OnTrue; // 0x4d0	
	CEntityIOOutput m_OnFalse; // 0x4f8	
};

// Alignment: 7
// Size: 0x540
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4b0	
	CUtlSymbolLarge m_iszEntityB; // 0x4b8	
	float m_flZone1Distance; // 0x4c0	
	float m_flZone2Distance; // 0x4c4	
	CEntityIOOutput m_InZone1; // 0x4c8	
	CEntityIOOutput m_InZone2; // 0x4f0	
	CEntityIOOutput m_InZone3; // 0x518	
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
struct magnetted_objects_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > hEntity; // 0x8	
};

// Alignment: 6
// Size: 0x518
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4b0	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4b8	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4c0	
	bool m_fixupNames; // 0x4c8	
	bool m_bLoadDynamic; // 0x4c9	
private:
	[[maybe_unused]] uint8_t __pad04ca[0x2]; // 0x4ca
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4cc	
};

// Alignment: 2
// Size: 0x4b8
class CSkyboxReference : public CBaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x4b0	
	CHandle< CSkyCamera > m_hSkyCamera; // 0x4b4	
};

// Alignment: 25
// Size: 0x68
struct fogparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; // 0x8	
	// MNetworkEnable
	Color colorPrimary; // 0x14	
	// MNetworkEnable
	Color colorSecondary; // 0x18	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20	
	// MNetworkEnable
	float start; // 0x24	
	// MNetworkEnable
	float end; // 0x28	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c	
	// MNetworkEnable
	float maxdensity; // 0x30	
	// MNetworkEnable
	float exponent; // 0x34	
	// MNetworkEnable
	float HDRColorScale; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	GameTime_t lerptime; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float locallightscale; // 0x60	
	// MNetworkEnable
	bool enable; // 0x64	
	// MNetworkEnable
	bool blend; // 0x65	
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x66	
	bool m_bPadding; // 0x67	
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

// Alignment: 11
// Size: 0x548
class CEnvSoundscape : public CServerOnlyEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4b0	
	float m_flRadius; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_soundscapeName; // 0x4e0	
	CUtlSymbolLarge m_soundEventName; // 0x4e8	
	bool m_bOverrideWithEvent; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f1[0x3]; // 0x4f1
public:
	int32_t m_soundscapeIndex; // 0x4f4	
	int32_t m_soundscapeEntityListId; // 0x4f8	
	uint32_t m_soundEventHash; // 0x4fc	
	CUtlSymbolLarge m_positionNames[8]; // 0x500	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x540	
	bool m_bDisabled; // 0x544	
};

// Alignment: 1
// Size: 0x550
class CEnvSoundscapeProxy : public CEnvSoundscape
{
public:
	CUtlSymbolLarge m_MainSoundscapeName; // 0x548	
};

// Alignment: 0
// Size: 0x548
class CEnvSoundscapeTriggerable : public CEnvSoundscape
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4
struct ParticleIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("ParticleIndex_t")->m_static_fields[0]->m_instance);};
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

// Alignment: 0
// Size: 0xd8
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x98
class CNavVolumeCalculatedVector : public CNavVolume
{
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

// Alignment: 8
// Size: 0x30
struct VPhysicsCollisionAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
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
	uint32_t m_nOwnerId; // 0x24	
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x28	
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x2a	
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x2b	
};

// Alignment: 17
// Size: 0xb0
class CCollisionProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x40	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0058[0x2]; // 0x58
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x5a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x5b	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x5c	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x5d	
	// MNetworkEnable
	uint8_t m_CollisionGroup; // 0x5e	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateEnablePhysics"
	uint8_t m_nEnablePhysics; // 0x5f	
	float m_flBoundingRadius; // 0x60	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x64	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x70	
	Vector m_vecSurroundingMaxs; // 0x7c	
	Vector m_vecSurroundingMins; // 0x88	
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x94	
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0xa0	
	// MNetworkEnable
	float m_flCapsuleRadius; // 0xac	
};

// Alignment: 21
// Size: 0x70
class CEffectData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vOrigin; // 0x8	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vStart; // 0x14	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vNormal; // 0x20	
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vAngles; // 0x2c	
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38	
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c	
	// MNetworkEnable
	float m_flScale; // 0x40	
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags
	float m_flMagnitude; // 0x44	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags
	float m_flRadius; // 0x48	
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c	
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50	
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58	
	// MNetworkEnable
	uint8_t m_nPenetrate; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x1]; // 0x5d
public:
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5e	
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x60	
	// MNetworkEnable
	uint8_t m_nColor; // 0x62	
	// MNetworkEnable
	uint8_t m_fFlags; // 0x63	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
public:
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x68	
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x6c	
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6e	
};

// Alignment: 2
// Size: 0x4b8
class CEnvDetailController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4b0	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4b4	
};

// Alignment: 31
// Size: 0x258
class CEnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x8	
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
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
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	CEntityIOOutput m_OnGustStart; // 0x70	
	CEntityIOOutput m_OnGustEnd; // 0x98	
	GameTime_t m_flVariationTime; // 0xc0	
	GameTime_t m_flSwayTime; // 0xc4	
	GameTime_t m_flSimTime; // 0xc8	
	GameTime_t m_flSwitchTime; // 0xcc	
	float m_flAveWindSpeed; // 0xd0	
	bool m_bGusting; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	float m_flWindAngleVariation; // 0xd8	
	float m_flWindSpeedVariation; // 0xdc	
	CEntityIndex m_iEntIndex; // 0xe0	
};

// Alignment: 2
// Size: 0x8
struct CEnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Alignment: 2
// Size: 0x8
struct CEnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Alignment: 0
// Size: 0x4b0
class CInfoLadderDismount : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 13
// Size: 0x60
struct shard_model_desc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10	
	// MNetworkEnable
	ShardSolid_t m_solid; // 0x18	
	// MNetworkEnable
	ShatterPanelMode m_ShatterPanelMode; // 0x19	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0x1c	
	// MNetworkEnable
	Vector2D m_vecStressPositionA; // 0x24	
	// MNetworkEnable
	Vector2D m_vecStressPositionB; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38	
	// MNetworkEnable
	float m_flGlassHalfThickness; // 0x50	
	// MNetworkEnable
	bool m_bHasParent; // 0x54	
	// MNetworkEnable
	bool m_bParentFrozen; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x58	
	// MNetworkEnable
	CUtlStringToken m_LightGroup; // 0x5c	
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

// Alignment: 0
// Size: 0x4b0
class CGameRulesProxy : public CBaseEntity
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

// Alignment: 11
// Size: 0x58
class CGlowProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_fGlowColor; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0x1c]; // 0x14
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30	
	// MNetworkEnable
	int32_t m_iGlowTeam; // 0x34	
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x38	
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x3c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x40	
	// MNetworkEnable
	bool m_bFlashing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	float m_flGlowTime; // 0x48	
	// MNetworkEnable
	float m_flGlowStartTime; // 0x4c	
	// MNetworkEnable
	bool m_bEligibleForScreenHighlight; // 0x50	
	bool m_bGlowing; // 0x51	
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

// Alignment: 0
// Size: 0x90
class CMultiplayRules : public CGameRules
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x90
struct sky3dparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int16_t scale; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; // 0xc	
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c	
	// MNetworkEnable
	fogparams_t fog; // 0x20	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupID; // 0x88	
};

// Alignment: 12
// Size: 0x170
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vecCsViewPunchAngle; // 0x40	
	// MNetworkEnable
	GameTick_t m_nCsViewPunchAngleTick; // 0x4c	
	// MNetworkEnable
	float m_flCsViewPunchAngleTickRatio; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< CTonemapController2 > m_hTonemapController; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
private:
	[[maybe_unused]] uint8_t __pad0140[0x18]; // 0x140
public:
	CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // 0x158	
};

// Alignment: 4
// Size: 0x550
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x4b0	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x540	
	bool m_bUseAngles; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	CSkyCamera* m_pNext; // 0x548	
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

// Alignment: 3
// Size: 0x28
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0	
	int32_t parentIndex; // 0x20	
	float m_flRadius; // 0x24	
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

// Alignment: 3
// Size: 0x50
struct PhysicsRagdollPose_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	CNetworkUtlVectorBase< CTransform > m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwner; // 0x48	
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

// Alignment: 1
// Size: 0x1
struct AmmoIndex_t
{
public:
	int8_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("AmmoIndex_t")->m_static_fields[0]->m_instance);};
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
// Size: 0x10
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0	
	int32_t m_nForceBone; // 0xc	
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

// Alignment: 2
// Size: 0x8
class CSimpleSimTimer
{
public:
	GameTime_t m_next; // 0x0	
	WorldGroupId_t m_nWorldGroupId; // 0x4	
};

// Alignment: 1
// Size: 0xc
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x8	
};

// Alignment: 2
// Size: 0x10
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x8	
	float m_maxInterval; // 0xc	
};

// Alignment: 1
// Size: 0xc
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0x8	
};

// Alignment: 0
// Size: 0xc
class CSimpleStopwatch : public CStopwatchBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x10
class CStopwatch : public CStopwatchBase
{
public:
	float m_interval; // 0xc	
};

// Alignment: 2
// Size: 0x14
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_minInterval; // 0xc	
	float m_maxInterval; // 0x10	
};

// Alignment: 1
// Size: 0x98
class CSingleplayRules : public CGameRules
{
public:
	bool m_bSinglePlayerGameEnding; // 0x90	
};

// Alignment: 9
// Size: 0x548
class CSoundOpvarSetPointBase : public CBaseEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	CEntityHandle m_hSource; // 0x4b4	
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c8[0x50]; // 0x4c8
public:
	Vector m_vLastPosition; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x528	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x530	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x538	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x540	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x544	
};

// Alignment: 22
// Size: 0x648
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x548	
	CEntityIOOutput m_OnExit; // 0x570	
	bool m_bAutoDisable; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad0599[0x43]; // 0x599
public:
	float m_flDistanceMin; // 0x5dc	
	float m_flDistanceMax; // 0x5e0	
	float m_flDistanceMapMin; // 0x5e4	
	float m_flDistanceMapMax; // 0x5e8	
	float m_flOcclusionRadius; // 0x5ec	
	float m_flOcclusionMin; // 0x5f0	
	float m_flOcclusionMax; // 0x5f4	
	float m_flValSetOnDisable; // 0x5f8	
	bool m_bSetValueOnDisable; // 0x5fc	
private:
	[[maybe_unused]] uint8_t __pad05fd[0x3]; // 0x5fd
public:
	int32_t m_nSimulationMode; // 0x600	
	int32_t m_nVisibilitySamples; // 0x604	
	Vector m_vDynamicProxyPoint; // 0x608	
	float m_flDynamicMaximumOcclusion; // 0x614	
	CEntityHandle m_hDynamicEntity; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad061c[0x4]; // 0x61c
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x620	
	float m_flPathingDistanceNormFactor; // 0x628	
	Vector m_vPathingSourcePos; // 0x62c	
	Vector m_vPathingListenerPos; // 0x638	
	int32_t m_nPathingSourceIndex; // 0x644	
};

// Alignment: 9
// Size: 0x6b0
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x648	
	Vector m_vDistanceInnerMaxs; // 0x654	
	Vector m_vDistanceOuterMins; // 0x660	
	Vector m_vDistanceOuterMaxs; // 0x66c	
	int32_t m_nAABBDirection; // 0x678	
	Vector m_vInnerMins; // 0x67c	
	Vector m_vInnerMaxs; // 0x688	
	Vector m_vOuterMins; // 0x694	
	Vector m_vOuterMaxs; // 0x6a0	
};

// Alignment: 0
// Size: 0x6b0
class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x670
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0648[0x18]; // 0x648
public:
	float m_flDistMinSqr; // 0x660	
	float m_flDistMaxSqr; // 0x664	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x668	
};

// Alignment: 8
// Size: 0x588
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x548	
	Vector m_vMaxs; // 0x554	
	Vector m_vDistanceMins; // 0x560	
	Vector m_vDistanceMaxs; // 0x56c	
	float m_flWindMin; // 0x578	
	float m_flWindMax; // 0x57c	
	float m_flWindMapMin; // 0x580	
	float m_flWindMapMax; // 0x584	
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
	static CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTakeDamageInfo")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x8
class CTakeDamageResult
{
public:
	int32_t m_nHealthLost; // 0x0	
	int32_t m_nDamageTaken; // 0x4	
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

// Alignment: 1
// Size: 0x20
class CTakeDamageSummaryScopeGuard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8	
	
	// Static fields:
	static SummaryTakeDamageInfo_t &Get_EmptySummary(){return *reinterpret_cast<SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x90
class CTeamplayRules : public CMultiplayRules
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x60
class CAttributeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	CUtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; // 0x8	
	CAttributeManager* m_pManager; // 0x58	
};

// Alignment: 5
// Size: 0x48
class CEconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x34	
	// MNetworkEnable
	float m_flInitialValue; // 0x38	
	// MNetworkEnable
	int32_t m_nRefundableCurrency; // 0x3c	
	// MNetworkEnable
	bool m_bSetBonus; // 0x40	
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

// Alignment: 6
// Size: 0x50
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CHandle< CBaseEntity > > m_Providers; // 0x8	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x20	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOuter; // 0x24	
	bool m_bPreventLoopback; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x2c	
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x30	
};

// Alignment: 3
// Size: 0x18
struct CAttributeManager__cached_attribute_float_t
{
public:
	float flIn; // 0x0	
	CUtlSymbolLarge iAttribHook; // 0x8	
	float flOut; // 0x10	
};

// Alignment: 13
// Size: 0x278
class CEconItemView : public IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x30]; // 0x8
public:
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; // 0x3a
public:
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0x3c	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	uint64_t m_iItemID; // 0x48	
	// MNetworkEnable
	uint32_t m_iItemIDHigh; // 0x50	
	// MNetworkEnable
	uint32_t m_iItemIDLow; // 0x54	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x58	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x7]; // 0x69
public:
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x70	
	// MNetworkEnable
	CAttributeList m_NetworkedDynamicAttributes; // 0xd0	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x130	
	char m_szCustomNameOverride[161]; // 0x1d1	
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

// Alignment: 2
// Size: 0x50
struct GameAmmoTypeInfo_t : public AmmoTypeInfo_t
{
public:
	int32_t m_nBuySize; // 0x38	
	int32_t m_nCost; // 0x3c	
};

// Alignment: 2
// Size: 0x18
struct EntitySpottedState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	bool m_bSpotted; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	uint32_t m_bSpottedByMask[2]; // 0xc	
};

// Alignment: 3
// Size: 0x4c0
class SpawnPoint : public CServerOnlyPointEntity
{
public:
	int32_t m_iPriority; // 0x4b0	
	bool m_bEnabled; // 0x4b4	
private:
	[[maybe_unused]] uint8_t __pad04b5[0x3]; // 0x4b5
public:
	int32_t m_nType; // 0x4b8	
};

// Alignment: 9
// Size: 0x4f8
class SpawnPointCoopEnemy : public SpawnPoint
{
public:
	CUtlSymbolLarge m_szWeaponsToGive; // 0x4c0	
	CUtlSymbolLarge m_szPlayerModelToUse; // 0x4c8	
	int32_t m_nArmorToSpawnWith; // 0x4d0	
	SpawnPointCoopEnemy::BotDefaultBehavior_t m_nDefaultBehavior; // 0x4d4	
	int32_t m_nBotDifficulty; // 0x4d8	
	bool m_bIsAgressive; // 0x4dc	
	bool m_bStartAsleep; // 0x4dd	
private:
	[[maybe_unused]] uint8_t __pad04de[0x2]; // 0x4de
public:
	float m_flHideRadius; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0xc]; // 0x4e4
public:
	CUtlSymbolLarge m_szBehaviorTreeFile; // 0x4f0	
};

// Alignment: 1
// Size: 0x4b8
class CCSGameRulesProxy : public CGameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	CCSGameRules* m_pGameRules; // 0x4b0	
};

// Alignment: 5
// Size: 0x198
class CRetakeGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xf8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nMatchSeed; // 0xf8	
	// MNetworkEnable
	bool m_bBlockersPresent; // 0xfc	
	// MNetworkEnable
	bool m_bRoundInProgress; // 0xfd	
private:
	[[maybe_unused]] uint8_t __pad00fe[0x2]; // 0xfe
public:
	// MNetworkEnable
	int32_t m_iFirstSecondHalfRound; // 0x100	
	// MNetworkEnable
	int32_t m_iBombSite; // 0x104	
};

// Alignment: 1
// Size: 0x30
class CCSGameModeRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Alignment: 0
// Size: 0x30
class CCSGameModeRules_Noop : public CCSGameModeRules
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xd0
class CCSGameModeScript : public CBasePulseGraphInstance
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x30
class CCSGameModeRules_Scripted : public CCSGameModeRules
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x40
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	bool m_bFirstThink; // 0x30	
	bool m_bFirstThinkAfterConnected; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x34	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x38	
	// MNetworkEnable
	int16_t m_nDMBonusWeaponLoadoutSlot; // 0x3c	
};

// Alignment: 193
// Size: 0x27b8
class CCSGameRules : public CTeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0090[0x8]; // 0x90
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x98	
	CHandle< CBaseEntity > m_coopMissionManager; // 0xc0	
	// MNetworkEnable
	bool m_bFreezePeriod; // 0xc4	
	// MNetworkEnable
	bool m_bWarmupPeriod; // 0xc5	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; // 0xc8	
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; // 0xcc	
	// MNetworkEnable
	int32_t m_nTotalPausedTicks; // 0xd0	
	// MNetworkEnable
	int32_t m_nPauseStartTick; // 0xd4	
	// MNetworkEnable
	bool m_bServerPaused; // 0xd8	
	// MNetworkEnable
	bool m_bGamePaused; // 0xd9	
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; // 0xda	
	// MNetworkEnable
	bool m_bCTTimeOutActive; // 0xdb	
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; // 0xdc	
	// MNetworkEnable
	float m_flCTTimeOutRemaining; // 0xe0	
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; // 0xe4	
	// MNetworkEnable
	int32_t m_nCTTimeOuts; // 0xe8	
	// MNetworkEnable
	bool m_bTechnicalTimeOut; // 0xec	
	// MNetworkEnable
	bool m_bMatchWaitingForResume; // 0xed	
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	// MNetworkEnable
	int32_t m_iRoundTime; // 0xf0	
	// MNetworkEnable
	float m_fMatchStartTime; // 0xf4	
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; // 0xf8	
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; // 0xfc	
	// MNetworkEnable
	bool m_bGameRestart; // 0x100	
private:
	[[maybe_unused]] uint8_t __pad0101[0x3]; // 0x101
public:
	// MNetworkEnable
	float m_flGameStartTime; // 0x104	
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; // 0x108	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; // 0x10c	
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; // 0x110	
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; // 0x114	
	// MNetworkEnable
	int32_t m_nOvertimePlaying; // 0x118	
	// MNetworkEnable
	int32_t m_iHostagesRemaining; // 0x11c	
	// MNetworkEnable
	bool m_bAnyHostageReached; // 0x120	
	// MNetworkEnable
	bool m_bMapHasBombTarget; // 0x121	
	// MNetworkEnable
	bool m_bMapHasRescueZone; // 0x122	
	// MNetworkEnable
	bool m_bMapHasBuyZone; // 0x123	
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; // 0x124	
private:
	[[maybe_unused]] uint8_t __pad0125[0x3]; // 0x125
public:
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; // 0x128	
	// MNetworkEnable
	bool m_bIsValveDS; // 0x12c	
	// MNetworkEnable
	bool m_bLogoMap; // 0x12d	
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; // 0x12e	
private:
	[[maybe_unused]] uint8_t __pad012f[0x1]; // 0x12f
public:
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; // 0x130	
	// MNetworkEnable
	int32_t m_MatchDevice; // 0x134	
	// MNetworkEnable
	bool m_bHasMatchStarted; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad0139[0x3]; // 0x139
public:
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; // 0x13c	
	// MNetworkEnable
	char m_szTournamentEventName[512]; // 0x140	
	// MNetworkEnable
	char m_szTournamentEventStage[512]; // 0x340	
	// MNetworkEnable
	char m_szMatchStatTxt[512]; // 0x540	
	// MNetworkEnable
	char m_szTournamentPredictionsTxt[512]; // 0x740	
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; // 0x940	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; // 0x944	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; // 0x948	
	// MNetworkEnable
	bool m_bIsDroppingItems; // 0x94c	
	// MNetworkEnable
	bool m_bIsQuestEligible; // 0x94d	
private:
	[[maybe_unused]] uint8_t __pad094e[0x2]; // 0x94e
public:
	// MNetworkEnable
	int32_t m_nGuardianModeWaveNumber; // 0x950	
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialKillsRemaining; // 0x954	
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialWeaponNeeded; // 0x958	
	int32_t m_nGuardianGrenadesToGiveBots; // 0x95c	
	int32_t m_nNumHeaviesToSpawn; // 0x960	
	// MNetworkEnable
	uint32_t m_numGlobalGiftsGiven; // 0x964	
	// MNetworkEnable
	uint32_t m_numGlobalGifters; // 0x968	
	// MNetworkEnable
	uint32_t m_numGlobalGiftsPeriodSeconds; // 0x96c	
	// MNetworkEnable
	uint32_t m_arrFeaturedGiftersAccounts[4]; // 0x970	
	// MNetworkEnable
	uint32_t m_arrFeaturedGiftersGifts[4]; // 0x980	
	// MNetworkEnable
	uint16_t m_arrProhibitedItemIndices[100]; // 0x990	
	// MNetworkEnable
	uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa58	
	// MNetworkEnable
	int32_t m_numBestOfMaps; // 0xa68	
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; // 0xa6c	
	// MNetworkEnable
	bool m_bBombDropped; // 0xa70	
	// MNetworkEnable
	bool m_bBombPlanted; // 0xa71	
private:
	[[maybe_unused]] uint8_t __pad0a72[0x2]; // 0xa72
public:
	// MNetworkEnable
	int32_t m_iRoundWinStatus; // 0xa74	
	// MNetworkEnable
	int32_t m_eRoundWinReason; // 0xa78	
	// MNetworkEnable
	bool m_bTCantBuy; // 0xa7c	
	// MNetworkEnable
	bool m_bCTCantBuy; // 0xa7d	
private:
	[[maybe_unused]] uint8_t __pad0a7e[0x2]; // 0xa7e
public:
	// MNetworkEnable
	GameTime_t m_flGuardianBuyUntilTime; // 0xa80	
	// MNetworkEnable
	int32_t m_iMatchStats_RoundResults[30]; // 0xa84	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xafc	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb74	
	// MNetworkEnable
	float m_TeamRespawnWaveTimes[32]; // 0xbec	
	// MNetworkEnable
	GameTime_t m_flNextRespawnWave[32]; // 0xc6c	
	// MNetworkEnable
	int32_t m_nServerQuestID; // 0xcec	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xcf0	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xcfc	
	// MNetworkEnable
	float m_MinimapVerticalSectionHeights[8]; // 0xd08	
	bool m_bDontIncrementCoopWave; // 0xd28	
	bool m_bSpawnedTerrorHuntHeavy; // 0xd29	
private:
	[[maybe_unused]] uint8_t __pad0d2a[0x2]; // 0xd2a
public:
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xd2c	
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd54	
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; // 0xd7c	
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; // 0xd80	
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; // 0xd84	
private:
	[[maybe_unused]] uint8_t __pad0d88[0x18]; // 0xd88
public:
	bool m_bHasHostageBeenTouched; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0da1[0x3]; // 0xda1
public:
	GameTime_t m_flIntermissionStartTime; // 0xda4	
	GameTime_t m_flIntermissionEndTime; // 0xda8	
	bool m_bLevelInitialized; // 0xdac	
private:
	[[maybe_unused]] uint8_t __pad0dad[0x3]; // 0xdad
public:
	int32_t m_iTotalRoundsPlayed; // 0xdb0	
	int32_t m_iUnBalancedRounds; // 0xdb4	
	bool m_endMatchOnRoundReset; // 0xdb8	
	bool m_endMatchOnThink; // 0xdb9	
private:
	[[maybe_unused]] uint8_t __pad0dba[0x2]; // 0xdba
public:
	int32_t m_iFreezeTime; // 0xdbc	
	int32_t m_iNumTerrorist; // 0xdc0	
	int32_t m_iNumCT; // 0xdc4	
	int32_t m_iNumSpawnableTerrorist; // 0xdc8	
	int32_t m_iNumSpawnableCT; // 0xdcc	
	CUtlVector< int32 > m_arrSelectedHostageSpawnIndices; // 0xdd0	
	bool m_bFirstConnected; // 0xde8	
	bool m_bCompleteReset; // 0xde9	
	bool m_bPickNewTeamsOnReset; // 0xdea	
	bool m_bScrambleTeamsOnRestart; // 0xdeb	
	bool m_bSwapTeamsOnRestart; // 0xdec	
private:
	[[maybe_unused]] uint8_t __pad0ded[0xb]; // 0xded
public:
	CUtlVector< int32 > m_nEndMatchTiedVotes; // 0xdf8	
private:
	[[maybe_unused]] uint8_t __pad0e10[0x4]; // 0xe10
public:
	bool m_bNeedToAskPlayersForContinueVote; // 0xe14	
private:
	[[maybe_unused]] uint8_t __pad0e15[0x3]; // 0xe15
public:
	uint32_t m_numQueuedMatchmakingAccounts; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	char* m_pQueuedMatchmakingReservationString; // 0xe20	
	uint32_t m_numTotalTournamentDrops; // 0xe28	
	uint32_t m_numSpectatorsCountMax; // 0xe2c	
	uint32_t m_numSpectatorsCountMaxTV; // 0xe30	
	uint32_t m_numSpectatorsCountMaxLnk; // 0xe34	
private:
	[[maybe_unused]] uint8_t __pad0e38[0x8]; // 0xe38
public:
	bool m_bForceTeamChangeSilent; // 0xe40	
	bool m_bLoadingRoundBackupData; // 0xe41	
private:
	[[maybe_unused]] uint8_t __pad0e42[0x36]; // 0xe42
public:
	int32_t m_nMatchInfoShowType; // 0xe78	
	float m_flMatchInfoDecidedTime; // 0xe7c	
private:
	[[maybe_unused]] uint8_t __pad0e80[0x18]; // 0xe80
public:
	float m_flCoopRespawnAndHealTime; // 0xe98	
	int32_t m_coopBonusCoinsFound; // 0xe9c	
	bool m_coopBonusPistolsOnly; // 0xea0	
	bool m_coopPlayersInDeploymentZone; // 0xea1	
	bool m_coopMissionDeadPlayerRespawnEnabled; // 0xea2	
private:
	[[maybe_unused]] uint8_t __pad0ea3[0x1]; // 0xea3
public:
	int32_t mTeamDMLastWinningTeamNumber; // 0xea4	
	float mTeamDMLastThinkTime; // 0xea8	
	float m_flTeamDMLastAnnouncementTime; // 0xeac	
	int32_t m_iAccountTerrorist; // 0xeb0	
	int32_t m_iAccountCT; // 0xeb4	
	int32_t m_iSpawnPointCount_Terrorist; // 0xeb8	
	int32_t m_iSpawnPointCount_CT; // 0xebc	
	int32_t m_iMaxNumTerrorists; // 0xec0	
	int32_t m_iMaxNumCTs; // 0xec4	
	int32_t m_iLoserBonus; // 0xec8	
	int32_t m_iLoserBonusMostRecentTeam; // 0xecc	
	float m_tmNextPeriodicThink; // 0xed0	
	bool m_bVoiceWonMatchBragFired; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	float m_fWarmupNextChatNoticeTime; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0edc[0x4]; // 0xedc
public:
	int32_t m_iHostagesRescued; // 0xee0	
	int32_t m_iHostagesTouched; // 0xee4	
	float m_flNextHostageAnnouncement; // 0xee8	
	bool m_bNoTerroristsKilled; // 0xeec	
	bool m_bNoCTsKilled; // 0xeed	
	bool m_bNoEnemiesKilled; // 0xeee	
	bool m_bCanDonateWeapons; // 0xeef	
private:
	[[maybe_unused]] uint8_t __pad0ef0[0x4]; // 0xef0
public:
	float m_firstKillTime; // 0xef4	
private:
	[[maybe_unused]] uint8_t __pad0ef8[0x4]; // 0xef8
public:
	float m_firstBloodTime; // 0xefc	
private:
	[[maybe_unused]] uint8_t __pad0f00[0x18]; // 0xf00
public:
	bool m_hostageWasInjured; // 0xf18	
	bool m_hostageWasKilled; // 0xf19	
private:
	[[maybe_unused]] uint8_t __pad0f1a[0xe]; // 0xf1a
public:
	bool m_bVoteCalled; // 0xf28	
	bool m_bServerVoteOnReset; // 0xf29	
private:
	[[maybe_unused]] uint8_t __pad0f2a[0x2]; // 0xf2a
public:
	float m_flVoteCheckThrottle; // 0xf2c	
	bool m_bBuyTimeEnded; // 0xf30	
private:
	[[maybe_unused]] uint8_t __pad0f31[0x3]; // 0xf31
public:
	int32_t m_nLastFreezeEndBeep; // 0xf34	
	bool m_bTargetBombed; // 0xf38	
	bool m_bBombDefused; // 0xf39	
	bool m_bMapHasBombZone; // 0xf3a	
private:
	[[maybe_unused]] uint8_t __pad0f3b[0x1d]; // 0xf3b
public:
	Vector m_vecMainCTSpawnPos; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f64[0x4]; // 0xf64
public:
	CUtlVector< SpawnPoint* > m_CTSpawnPointsMasterList; // 0xf68	
	CUtlVector< SpawnPoint* > m_TerroristSpawnPointsMasterList; // 0xf80	
	int32_t m_iNextCTSpawnPoint; // 0xf98	
	int32_t m_iNextTerroristSpawnPoint; // 0xf9c	
	CUtlVector< SpawnPoint* > m_CTSpawnPoints; // 0xfa0	
	CUtlVector< SpawnPoint* > m_TerroristSpawnPoints; // 0xfb8	
	bool m_bIsUnreservedGameServer; // 0xfd0	
private:
	[[maybe_unused]] uint8_t __pad0fd1[0x3]; // 0xfd1
public:
	float m_fAutobalanceDisplayTime; // 0xfd4	
private:
	[[maybe_unused]] uint8_t __pad0fd8[0x268]; // 0xfd8
public:
	bool m_bAllowWeaponSwitch; // 0x1240	
	bool m_bRoundTimeWarningTriggered; // 0x1241	
private:
	[[maybe_unused]] uint8_t __pad1242[0x2]; // 0x1242
public:
	GameTime_t m_phaseChangeAnnouncementTime; // 0x1244	
	float m_fNextUpdateTeamClanNamesTime; // 0x1248	
	GameTime_t m_flLastThinkTime; // 0x124c	
	float m_fAccumulatedRoundOffDamage; // 0x1250	
	int32_t m_nShorthandedBonusLastEvalRound; // 0x1254	
private:
	[[maybe_unused]] uint8_t __pad1258[0x278]; // 0x1258
public:
	// MNetworkEnable
	bool m_bMatchAbortedDueToPlayerBan; // 0x14d0	
	bool m_bHasTriggeredRoundStartMusic; // 0x14d1	
	bool m_bHasTriggeredCoopSpawnReset; // 0x14d2	
	bool m_bSwitchingTeamsAtRoundReset; // 0x14d3	
private:
	[[maybe_unused]] uint8_t __pad14d4[0x1c]; // 0x14d4
public:
	// MNetworkEnable
	// MNetworkPolymorphic
	CCSGameModeRules* m_pGameModeRules; // 0x14f0	
	KeyValues3 m_BtGlobalBlackboard; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad1508[0x58]; // 0x1508
public:
	CHandle< CBaseEntity > m_hPlayerResource; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
public:
	// MNetworkEnable
	CRetakeGameRules m_RetakeRules; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1700[0x4c]; // 0x1700
public:
	int32_t m_GuardianBotSkillLevelMax; // 0x174c	
	int32_t m_GuardianBotSkillLevelMin; // 0x1750	
private:
	[[maybe_unused]] uint8_t __pad1754[0x4]; // 0x1754
public:
	CUtlVector< int32 > m_arrTeamUniqueKillWeaponsMatch[4]; // 0x1758	
	bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x17b8	
private:
	[[maybe_unused]] uint8_t __pad17bc[0x24]; // 0x17bc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; // 0x17e0	
private:
	[[maybe_unused]] uint8_t __pad17e1[0x3]; // 0x17e1
public:
	// MNetworkEnable
	int32_t m_nTTeamIntroVariant; // 0x17e4	
	// MNetworkEnable
	int32_t m_nCTTeamIntroVariant; // 0x17e8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; // 0x17ec	
private:
	[[maybe_unused]] uint8_t __pad17ed[0x3]; // 0x17ed
public:
	GameTime_t m_fTeamIntroPeriodEnd; // 0x17f0	
	bool m_bPlayedTeamIntroVO; // 0x17f4	
private:
	[[maybe_unused]] uint8_t __pad17f5[0xfbb]; // 0x17f5
public:
	double m_flLastPerfSampleTime; // 0x27b0	
	
	// Static fields:
	static int64_t &Get_m_nMapCycleTimeStamp(){return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[0]->m_instance);};
	static int32_t &Get_m_nMapCycleindex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[1]->m_instance);};
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

// Alignment: 13
// Size: 0x68
struct CSPerRoundStats_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	int32_t m_iKills; // 0x30	
	// MNetworkEnable
	int32_t m_iDeaths; // 0x34	
	// MNetworkEnable
	int32_t m_iAssists; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iDamage; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iEquipmentValue; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iMoneySaved; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iKillReward; // 0x48	
	// MNetworkEnable
	int32_t m_iLiveTime; // 0x4c	
	// MNetworkEnable
	int32_t m_iHeadShotKills; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iObjective; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iCashEarned; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iUtilityDamage; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriod"
	int32_t m_iEnemiesFlashed; // 0x60	
};

// Alignment: 19
// Size: 0xb8
struct CSMatchStats_t : public CSPerRoundStats_t
{
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; // 0x68	
	// MNetworkEnable
	int32_t m_iEnemy4Ks; // 0x6c	
	// MNetworkEnable
	int32_t m_iEnemy3Ks; // 0x70	
	int32_t m_iEnemy2Ks; // 0x74	
	int32_t m_iUtility_Count; // 0x78	
	int32_t m_iUtility_Successes; // 0x7c	
	int32_t m_iUtility_Enemies; // 0x80	
	int32_t m_iFlash_Count; // 0x84	
	int32_t m_iFlash_Successes; // 0x88	
	int32_t m_nHealthPointsRemovedTotal; // 0x8c	
	int32_t m_nHealthPointsDealtTotal; // 0x90	
	int32_t m_nShotsFiredTotal; // 0x94	
	int32_t m_nShotsOnTargetTotal; // 0x98	
	int32_t m_i1v1Count; // 0x9c	
	int32_t m_i1v1Wins; // 0xa0	
	int32_t m_i1v2Count; // 0xa4	
	int32_t m_i1v2Wins; // 0xa8	
	int32_t m_iEntryCount; // 0xac	
	int32_t m_iEntryWins; // 0xb0	
};

// Alignment: 6
// Size: 0x748
class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x4b0	
	// MNetworkEnable
	int32_t m_nRandom; // 0x4b4	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x4c0	
	// MNetworkEnable
	uint64_t m_xuid; // 0x4c8	
	// MNetworkEnable
	CEconItemView m_weaponItem; // 0x4d0	
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x748
class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CCSMinimapBoundary : public CBaseEntity
{
public:
	// No members available
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

// Alignment: 5
// Size: 0x4d8
class CPlayerPing : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayer; // 0x4b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPingedEntity; // 0x4bc	
	// MNetworkEnable
	int32_t m_iType; // 0x4c0	
	// MNetworkEnable
	bool m_bUrgent; // 0x4c4	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x4c5	
};

// Alignment: 2
// Size: 0x58
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flPlayerPingTokens[5]; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPlayerPing; // 0x54	
};

// Alignment: 10
// Size: 0x548
class CCSPlayerResource : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x4b0	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x4bc	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x4c8	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x4f8	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x504	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x510	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x520	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x530	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x540	
	bool m_foundGoalPositions; // 0x541	
};

// Alignment: 0
// Size: 0x40
class CPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x1a8
class CCSPlayerBase_CameraServices : public CPlayer_CameraServices
{
public:
	// MNetworkEnable
	uint32_t m_iFOV; // 0x170	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x174	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x178	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x17c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hZoomOwner; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // 0x188	
	CHandle< CBaseEntity > m_hLastFogTrigger; // 0x1a0	
};

// Alignment: 2
// Size: 0x38
struct WeaponPurchaseCount_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_nItemDefIndex; // 0x30	
	// MNetworkEnable
	uint16_t m_nCount; // 0x32	
};

// Alignment: 1
// Size: 0x58
struct WeaponPurchaseTracker_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // 0x8	
};

// Alignment: 4
// Size: 0x2f8
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x1c8]; // 0x40
public:
	CHandle< CBasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x30]; // 0x20c
public:
	// MNetworkEnable
	bool m_bIsRescuing; // 0x23c	
private:
	[[maybe_unused]] uint8_t __pad023d[0x3]; // 0x23d
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x240	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x298	
};

// Alignment: 1
// Size: 0x48
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; // 0x40	
};

// Alignment: 5
// Size: 0x48
struct SellbackPurchaseEntry_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_unDefIdx; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	int32_t m_nCost; // 0x34	
	// MNetworkEnable
	int32_t m_nPrevArmor; // 0x38	
	// MNetworkEnable
	bool m_bPrevHelmet; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MNetworkEnable
	CEntityHandle m_hItem; // 0x40	
};

// Alignment: 1
// Size: 0x118
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x88]; // 0x40
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // 0xc8	
};

// Alignment: 0
// Size: 0x1a8
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x48
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostageProp; // 0x44	
};

// Alignment: 3
// Size: 0x48
class CCSPlayer_ItemServices : public CPlayer_ItemServices
{
public:
	// MNetworkEnable
	bool m_bHasDefuser; // 0x40	
	// MNetworkEnable
	bool m_bHasHelmet; // 0x41	
	// MNetworkEnable
	bool m_bHasHeavyArmor; // 0x42	
};

// Alignment: 37
// Size: 0x4f0
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; // 0x220	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; // 0x224	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x230	
	// MNetworkEnable
	float m_flDuckAmount; // 0x234	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x238	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x23c	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x23d	
private:
	[[maybe_unused]] uint8_t __pad023e[0x2]; // 0x23e
public:
	float m_flDuckOffset; // 0x240	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x244	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x248	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x24c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0254[0xc]; // 0x254
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x260	
	bool m_duckUntilOnGround; // 0x268	
	bool m_bHasWalkMovedSinceLastJump; // 0x269	
	bool m_bInStuckTest; // 0x26a	
private:
	[[maybe_unused]] uint8_t __pad026b[0xd]; // 0x26b
public:
	float m_flStuckCheckTime[2][64]; // 0x278	
	int32_t m_nTraceCount; // 0x478	
	int32_t m_StuckLast; // 0x47c	
	bool m_bSpeedCropped; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x3]; // 0x481
public:
	int32_t m_nOldWaterLevel; // 0x484	
	float m_flWaterEntryTime; // 0x488	
	Vector m_vecForward; // 0x48c	
	Vector m_vecLeft; // 0x498	
	Vector m_vecUp; // 0x4a4	
	Vector m_vecPreviouslyPredictedOrigin; // 0x4b0	
	bool m_bMadeFootstepNoise; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	int32_t m_iFootsteps; // 0x4c0	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flJumpPressedTime; // 0x4c8	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4cc	
	// MNetworkEnable
	float m_flJumpVel; // 0x4d0	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4d4	
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4d8	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4e0	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4e4	
	// MNetworkEnable
	float m_flStamina; // 0x4e8	
};

// Alignment: 4
// Size: 0x50
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	CHandle< CBaseEntity > m_hLastKnownUseEntity; // 0x40	
	GameTime_t m_flLastUseTimeStamp; // 0x44	
	GameTime_t m_flTimeStartedHoldingUse; // 0x48	
	GameTime_t m_flTimeLastUsedWindow; // 0x4c	
};

// Alignment: 1
// Size: 0x50
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle< CBaseViewModel > m_hViewModel[3]; // 0x40	
};

// Alignment: 6
// Size: 0x68
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_NextDrownDamageTime; // 0x40	
	int32_t m_nDrownDmgRate; // 0x44	
	GameTime_t m_AirFinishedTime; // 0x48	
	float m_flWaterJumpTime; // 0x4c	
	Vector m_vecWaterJumpVel; // 0x50	
	float m_flSwimSoundTime; // 0x5c	
};

// Alignment: 11
// Size: 0x460
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xb0	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xb4	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xb5	
private:
	[[maybe_unused]] uint8_t __pad00b6[0x2]; // 0xb6
public:
	CHandle< CBasePlayerWeapon > m_hSavedWeapon; // 0xb8	
	int32_t m_nTimeToMelee; // 0xbc	
	int32_t m_nTimeToSecondary; // 0xc0	
	int32_t m_nTimeToPrimary; // 0xc4	
	int32_t m_nTimeToSniperRifle; // 0xc8	
	bool m_bIsBeingGivenItem; // 0xcc	
	bool m_bIsPickingUpItemWithUse; // 0xcd	
	bool m_bPickedUpWeapon; // 0xce	
};

// Alignment: 0
// Size: 0x50
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1a8
class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1d0
class CCSObserver_MovementServices : public CPlayer_MovementServices
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
class CCSObserver_UseServices : public CPlayer_UseServices
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x40
class CCSObserver_ViewModelServices : public CPlayer_ViewModelServices
{
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

// Alignment: 4
// Size: 0x200
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40	
	// MNetworkEnable
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x148	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x14c	
};

// Alignment: 14
// Size: 0x70
class CDamageRecord
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawnBase > m_PlayerDamager; // 0x28	
	// MNetworkEnable
	CHandle< CCSPlayerPawnBase > m_PlayerRecipient; // 0x2c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34	
	// MNetworkEnable
	CUtlString m_szPlayerDamagerName; // 0x38	
	// MNetworkEnable
	CUtlString m_szPlayerRecipientName; // 0x40	
	// MNetworkEnable
	uint64_t m_DamagerXuid; // 0x48	
	// MNetworkEnable
	uint64_t m_RecipientXuid; // 0x50	
	// MNetworkEnable
	int32_t m_iDamage; // 0x58	
	// MNetworkEnable
	int32_t m_iActualHealthRemoved; // 0x5c	
	// MNetworkEnable
	int32_t m_iNumHits; // 0x60	
	// MNetworkEnable
	int32_t m_iLastBulletUpdate; // 0x64	
	// MNetworkEnable
	bool m_bIsOtherEnemy; // 0x68	
	// MNetworkEnable
	EKillTypes_t m_killType; // 0x69	
};

// Alignment: 2
// Size: 0x98
class CCSPlayerController_DamageServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	// MNetworkChangeCallback "OnDamageListUpdate"
	int32_t m_nSendUpdate; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	CUtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48	
};

// Alignment: 6
// Size: 0x58
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	bool m_bReceivesMoneyNextRound; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	int32_t m_iAccountMoneyEarnedForNextRound; // 0x44	
	// MNetworkEnable
	int32_t m_iAccount; // 0x48	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x4c	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x50	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x54	
};

// Alignment: 9
// Size: 0xff0
class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	uint16_t m_unMusicID; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MNetworkEnable
	MedalRank_t m_rank[6]; // 0x44	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicLevel; // 0x5c	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsLeader; // 0x60	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0xedc]; // 0x6c
public:
	uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< CEconItemView > m_vecTerroristLoadoutCache; // 0xf50	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< CEconItemView > m_vecCounterTerroristLoadoutCache; // 0xfa0	
};

// Alignment: 1
// Size: 0x8
class CFiringModeFloat
{
public:
	float m_flValues[2]; // 0x0	
};

// Alignment: 1
// Size: 0x8
class CFiringModeInt
{
public:
	int32_t m_nValues[2]; // 0x0	
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

// Alignment: 0
// Size: 0x40
class CCSPlayer_DamageReactServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x60
class CCSPlayer_RadioServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flGotHostageTalkTimer; // 0x40	
	GameTime_t m_flDefusingTalkTimer; // 0x44	
	GameTime_t m_flC4PlantTalkTimer; // 0x48	
	GameTime_t m_flRadioTokenSlots[3]; // 0x4c	
	bool m_bIgnoreRadio; // 0x58	
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

// Alignment: 14
// Size: 0x660
class CVoteController : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_iActiveIssueIndex; // 0x4b0	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x4b4	
	// MNetworkEnable
	int32_t m_nVoteOptionCount[5]; // 0x4b8	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x4cc	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x7]; // 0x4d1
public:
	CountdownTimer m_acceptingVotesTimer; // 0x4d8	
	CountdownTimer m_executeCommandTimer; // 0x4f0	
	CountdownTimer m_resetVoteTimer; // 0x508	
	int32_t m_nVotesCast[64]; // 0x520	
	CPlayerSlot m_playerHoldingVote; // 0x620	
	CPlayerSlot m_playerOverrideForVote; // 0x624	
	int32_t m_nHighestCountIndex; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad062c[0x4]; // 0x62c
public:
	CUtlVector< CBaseIssue* > m_potentialIssues; // 0x630	
	CUtlVector< char* > m_VoteOptions; // 0x648	
};

// Alignment: 24
// Size: 0xed8
class CMapVetoPickController : public CBaseEntity
{
public:
	bool m_bPlayedIntroVcd; // 0x4b0	
	bool m_bNeedToPlayFiveSecondsRemaining; // 0x4b1	
private:
	[[maybe_unused]] uint8_t __pad04b2[0x1e]; // 0x4b2
public:
	double m_dblPreMatchDraftSequenceTime; // 0x4d0	
	bool m_bPreMatchDraftStateChanged; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x4dc	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x4e0	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x4e4	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x5e4	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x600	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x700	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x800	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x900	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa00	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb00	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc00	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd00	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe00	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe04	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe08	
private:
	[[maybe_unused]] uint8_t __pad0e0c[0x4]; // 0xe0c
public:
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xe10	
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xe38	
	CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xe60	
	CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xe88	
	CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xeb0	
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

// Alignment: 13
// Size: 0xd8
class CBot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CCSPlayerController* m_pController; // 0x10	
	CCSPlayerPawn* m_pPlayer; // 0x18	
	bool m_bHasSpawned; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	uint32_t m_id; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x70]; // 0x28
public:
	bool m_isRunning; // 0x98	
	bool m_isCrouching; // 0x99	
private:
	[[maybe_unused]] uint8_t __pad009a[0x2]; // 0x9a
public:
	float m_forwardSpeed; // 0x9c	
	float m_leftSpeed; // 0xa0	
	float m_verticalSpeed; // 0xa4	
	uint64_t m_buttonFlags; // 0xa8	
	float m_jumpTimestamp; // 0xb0	
	Vector m_viewForward; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00c0[0x10]; // 0xc0
public:
	int32_t m_postureStackIndex; // 0xd0	
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

// Alignment: 0
// Size: 0x58
class CBtNodeDecorator : public CBtNode
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x58
class CBtNodeComposite : public CBtNode
{
public:
	// No members available
};

// Alignment: 12
// Size: 0xf8
class CBtActionAim : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
public:
	CUtlString m_szSensorInputKey; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0070[0x10]; // 0x70
public:
	CUtlString m_szAimReadyKey; // 0x80	
	float m_flZoomCooldownTimestamp; // 0x88	
	bool m_bDoneAiming; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	float m_flLerpStartTime; // 0x90	
	float m_flNextLookTargetLerpTime; // 0x94	
	float m_flPenaltyReductionRatio; // 0x98	
	QAngle m_NextLookTarget; // 0x9c	
	CountdownTimer m_AimTimer; // 0xa8	
	CountdownTimer m_SniperHoldTimer; // 0xc0	
	CountdownTimer m_FocusIntervalTimer; // 0xd8	
	bool m_bAcquired; // 0xf0	
};

// Alignment: 4
// Size: 0xb0
class CBtActionCombatPositioning : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
public:
	CUtlString m_szSensorInputKey; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0070[0x10]; // 0x70
public:
	CUtlString m_szIsAttackingKey; // 0x80	
	CountdownTimer m_ActionTimer; // 0x88	
	bool m_bCrouching; // 0xa0	
};

// Alignment: 14
// Size: 0xe8
class CBtActionMoveTo : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlString m_szDestinationInputKey; // 0x60	
	CUtlString m_szHidingSpotInputKey; // 0x68	
	CUtlString m_szThreatInputKey; // 0x70	
	Vector m_vecDestination; // 0x78	
	bool m_bAutoLookAdjust; // 0x84	
	bool m_bComputePath; // 0x85	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	float m_flDamagingAreasPenaltyCost; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CountdownTimer m_CheckApproximateCornersTimer; // 0x90	
	CountdownTimer m_CheckHighPriorityItem; // 0xa8	
	CountdownTimer m_RepathTimer; // 0xc0	
	float m_flArrivalEpsilon; // 0xd8	
	float m_flAdditionalArrivalEpsilon2D; // 0xdc	
	float m_flHidingSpotCheckDistanceThreshold; // 0xe0	
	float m_flNearestAreaDistanceThreshold; // 0xe4	
};

// Alignment: 1
// Size: 0x78
class CBtActionParachutePositioning : public CBtNode
{
public:
	CountdownTimer m_ActionTimer; // 0x58	
};

// Alignment: 1
// Size: 0x60
class CBtNodeCondition : public CBtNodeDecorator
{
public:
	bool m_bNegated; // 0x58	
};

// Alignment: 3
// Size: 0x98
class CBtNodeConditionInactive : public CBtNodeCondition
{
private:
	[[maybe_unused]] uint8_t __pad0060[0x18]; // 0x60
public:
	float m_flRoundStartThresholdSeconds; // 0x78	
	float m_flSensorInactivityThresholdSeconds; // 0x7c	
	CountdownTimer m_SensorInactivityTimer; // 0x80	
};

// Alignment: 0
// Size: 0x4b0
class CPointEntity : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 25
// Size: 0x15c8
class CEnvCombinedLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x1068]; // 0x4b0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x1518	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x151c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1520	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x1528	
private:
	[[maybe_unused]] uint8_t __pad1529[0x7]; // 0x1529
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1530	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1538	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1540	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1548	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x1550	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x155c	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x1568	
	// MNetworkEnable
	bool m_bMoveable; // 0x1570	
private:
	[[maybe_unused]] uint8_t __pad1571[0x3]; // 0x1571
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1574	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x1578	
	// MNetworkEnable
	int32_t m_nPriority; // 0x157c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1581[0x3]; // 0x1581
public:
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x1584	
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x1588	
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; // 0x1594	
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; // 0x1598	
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; // 0x159c	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; // 0x15a0	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; // 0x15a4	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15ac[0x15]; // 0x15ac
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x15c1	
};

// Alignment: 19
// Size: 0x5a8
class CEnvCubemap : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x88]; // 0x4b0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x538	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x544	
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x548	
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x554	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x560	
	// MNetworkEnable
	bool m_bMoveable; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x56c	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x570	
	// MNetworkEnable
	int32_t m_nPriority; // 0x574	
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x578	
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x57c	
	// MNetworkEnable
	float m_flDiffuseScale; // 0x588	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x58c	
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x58d	
	// MNetworkEnable
	bool m_bDefaultSpecEnvMap; // 0x58e	
	// MNetworkEnable
	bool m_bIndoorCubeMap; // 0x58f	
	// MNetworkEnable
	bool m_bCopyDiffuseFromDefaultCubemap; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0591[0xf]; // 0x591
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x5a0	
};

// Alignment: 0
// Size: 0x5a8
class CEnvCubemapBox : public CEnvCubemap
{
public:
	// No members available
};

// Alignment: 18
// Size: 0x500
class CEnvCubemapFog : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x4b0	
	// MNetworkEnable
	float m_flStartDistance; // 0x4b4	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4b8	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4c0	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x4c4	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4c8	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4cc	
	// MNetworkEnable
	float m_flLODBias; // 0x4d0	
	// MNetworkEnable
	bool m_bActive; // 0x4d4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4d5	
private:
	[[maybe_unused]] uint8_t __pad04d6[0x2]; // 0x4d6
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x4d8	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x4dc	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x4e0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x4e8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4f0	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x4f8	
	bool m_bFirstTime; // 0x4f9	
};

// Alignment: 16
// Size: 0x4f0
class CGradientFog : public CBaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x4b0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x4b8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x4bc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x4c4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x4c8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x4cc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x4d0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x4d4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x4d8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x4dc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x4e0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x4e4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4e8	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4e9	
	bool m_bGradientFogNeedsTextures; // 0x4ea	
};

// Alignment: 18
// Size: 0x1508
class CEnvLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0xfe0]; // 0x4b0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1490	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1498	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14a0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x14a8	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14b0	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14bc	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x14c8	
	// MNetworkEnable
	bool m_bMoveable; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14d1[0x3]; // 0x14d1
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x14d4	
	// MNetworkEnable
	int32_t m_nPriority; // 0x14d8	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x14dc	
private:
	[[maybe_unused]] uint8_t __pad14dd[0x3]; // 0x14dd
public:
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; // 0x14e0	
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; // 0x14e4	
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; // 0x14e8	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; // 0x14ec	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; // 0x14f0	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; // 0x14f4	
private:
	[[maybe_unused]] uint8_t __pad14f8[0x9]; // 0x14f8
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x1501	
};

// Alignment: 6
// Size: 0x4c8
class CPlayerVisibility : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x4b0	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x4b4	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x4b8	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x4bc	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4c0	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4c1	
};

// Alignment: 8
// Size: 0x4d8
class CTonemapController2 : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x4b0	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x4b4	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x4b8	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x4bc	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x4c0	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x4c4	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x4c8	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x4cc	
};

// Alignment: 28
// Size: 0x530
class CEnvVolumetricFogController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x4b0	
	// MNetworkEnable
	float m_flAnisotropy; // 0x4b4	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4b8	
	// MNetworkEnable
	float m_flDrawDistance; // 0x4bc	
	// MNetworkEnable
	float m_flFadeInStart; // 0x4c0	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4c4	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4c8	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4cc	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4d0	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4d4	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4d8	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4e4	
	// MNetworkEnable
	bool m_bActive; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f1[0x3]; // 0x4f1
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x4f4	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x4f8	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x4fc	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x500	
	// MNetworkEnable
	float m_flStartScattering; // 0x504	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x508	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x50c	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x510	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x514	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x518	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x519	
	// MNetworkEnable
	bool m_bIsMaster; // 0x51a	
private:
	[[maybe_unused]] uint8_t __pad051b[0x5]; // 0x51b
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x520	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x528	
	bool m_bFirstTime; // 0x52c	
};

// Alignment: 7
// Size: 0x4e0
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4b4	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4c0	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	// MNetworkEnable
	float m_flStrength; // 0x4d0	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4d4	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x4d8	
};

// Alignment: 3
// Size: 0x520
class CFogController : public CBaseEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x4b0	
	bool m_bUseAngles; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	int32_t m_iChangedVariables; // 0x51c	
};

// Alignment: 0
// Size: 0x4b0
class CInfoTarget : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CInfoTargetServerOnly : public CServerOnlyPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CInfoParticleTarget : public CPointEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x4c8
class CInfoVisibilityBox : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x4]; // 0x4b0
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x4b4	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4b8	
	// MNetworkEnable
	bool m_bEnabled; // 0x4c4	
};

// Alignment: 7
// Size: 0x4f0
class CInfoWorldLayer : public CBaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4b0	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x4d8	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x4e0	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x4e8	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x4e9	
	bool m_bCreateAsChildSpawnGroup; // 0x4ea	
private:
	[[maybe_unused]] uint8_t __pad04eb[0x1]; // 0x4eb
public:
	uint32_t m_hLayerSpawnGroup; // 0x4ec	
};

// Alignment: 8
// Size: 0x4f0
class CMultiLightProxy : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4b0	
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4b8	
	float m_flLightRadiusFilter; // 0x4c0	
	float m_flBrightnessDelta; // 0x4c4	
	bool m_bPerformScreenFade; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04c9[0x3]; // 0x4c9
public:
	float m_flTargetBrightnessMultiplier; // 0x4cc	
	float m_flCurrentBrightnessMultiplier; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x4d8	
};

// Alignment: 25
// Size: 0x510
class CPointCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x4b0	
	// MNetworkEnable
	float m_Resolution; // 0x4b4	
	// MNetworkEnable
	bool m_bFogEnable; // 0x4b8	
	// MNetworkEnable
	Color m_FogColor; // 0x4b9	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	// MNetworkEnable
	float m_flFogStart; // 0x4c0	
	// MNetworkEnable
	float m_flFogEnd; // 0x4c4	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x4c8	
	// MNetworkEnable
	bool m_bActive; // 0x4cc	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x4cd	
private:
	[[maybe_unused]] uint8_t __pad04ce[0x2]; // 0x4ce
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x4d0	
	// MNetworkEnable
	bool m_bNoSky; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	// MNetworkEnable
	float m_fBrightness; // 0x4d8	
	// MNetworkEnable
	float m_flZFar; // 0x4dc	
	// MNetworkEnable
	float m_flZNear; // 0x4e0	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x4e4	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x4e5	
private:
	[[maybe_unused]] uint8_t __pad04e6[0x2]; // 0x4e6
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x4e8	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x4ec	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x4f0	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x4f4	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x4f8	
	float m_TargetFOV; // 0x4fc	
	float m_DegreesPerSecond; // 0x500	
	bool m_bIsOn; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	CPointCamera* m_pNext; // 0x508	
};

// Alignment: 1
// Size: 0x518
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x510	
};

// Alignment: 12
// Size: 0x540
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4b0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4b8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4c0	
	float m_flTimeoutInterval; // 0x4c8	
	bool m_bAsynchronouslySpawnEntities; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x4d0	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x4f8	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x4fc	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x500	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x518	
	HSCRIPT m_ScriptSpawnCallback; // 0x530	
	HSCRIPT m_ScriptCallbackScope; // 0x538	
};

// Alignment: 4
// Size: 0x4e0
class CGameGibManager : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x20]; // 0x4b0
public:
	bool m_bAllowNewGibs; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	int32_t m_iCurrentMaxPieces; // 0x4d4	
	int32_t m_iMaxPieces; // 0x4d8	
	int32_t m_iLastFrame; // 0x4dc	
};

// Alignment: 3
// Size: 0x4d0
class CSoundAreaEntityBase : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x4b8	
	// MNetworkEnable
	Vector m_vPos; // 0x4c0	
};

// Alignment: 1
// Size: 0x4d8
class CSoundAreaEntitySphere : public CSoundAreaEntityBase
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x4d0	
};

// Alignment: 2
// Size: 0x4e8
class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x4d0	
	// MNetworkEnable
	Vector m_vMax; // 0x4dc	
};

// Alignment: 4
// Size: 0x568
class CTeam : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4b0	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4c8	
	// MNetworkEnable
	int32_t m_iScore; // 0x4e0	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x4e4	
};

// Alignment: 25
// Size: 0x690
class CBasePlayerController : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4b8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x2c]; // 0x4c4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x4f0	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x4f4	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x500	
	bool m_bIsHLTV; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x51c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x520	
	CUtlString m_szNetworkIDString; // 0x5a0	
	float m_fLerpTime; // 0x5a8	
	bool m_bLagCompensation; // 0x5ac	
	bool m_bPredict; // 0x5ad	
	bool m_bAutoKickDisabled; // 0x5ae	
	bool m_bIsLowViolence; // 0x5af	
	bool m_bGamePaused; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b1[0x77]; // 0x5b1
public:
	int32_t m_nHighestCommandNumberReceived; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad062c[0x4]; // 0x62c
public:
	int64_t m_nUsecTimestampLastUserCmdReceived; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0638[0x10]; // 0x638
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x648	
	float m_flLastPlayerTalkTime; // 0x64c	
	float m_flLastEntitySteadyState; // 0x650	
	int32_t m_nAvailableEntitySteadyState; // 0x654	
	bool m_bHasAnySteadyStateEnts; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0659[0xf]; // 0x659
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x668	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x670	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
};

// Alignment: 14
// Size: 0x178
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	CSkillFloat m_flHeadDamageMultiplier; // 0x108	
	CSkillFloat m_flChestDamageMultiplier; // 0x118	
	CSkillFloat m_flStomachDamageMultiplier; // 0x128	
	CSkillFloat m_flArmDamageMultiplier; // 0x138	
	CSkillFloat m_flLegDamageMultiplier; // 0x148	
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; // 0x158	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; // 0x15c	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; // 0x160	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; // 0x164	
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; // 0x168	
	// MPropertyGroupName "Use"
	float m_flUseRange; // 0x16c	
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; // 0x170	
	// MPropertyGroupName "Crouch"
	// MPropertyDescription "Time to move between crouch and stand"
	float m_flCrouchTime; // 0x174	
};

// Alignment: 21
// Size: 0x240
class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28	
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; // 0x108	
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; // 0x109	
	bool m_bIsFullAuto; // 0x10a	
private:
	[[maybe_unused]] uint8_t __pad010b[0x1]; // 0x10b
public:
	int32_t m_nNumBullets; // 0x10c	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CUtlString m_sMuzzleAttachment; // 0x110	
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118	
	ItemFlagTypes_t m_iFlags; // 0x1f8	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nPrimaryAmmoType; // 0x1f9	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType
	AmmoIndex_t m_nSecondaryAmmoType; // 0x1fa	
private:
	[[maybe_unused]] uint8_t __pad01fb[0x1]; // 0x1fb
public:
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; // 0x1fc	
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x200	
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x204	
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x208	
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; // 0x20c	
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; // 0x210	
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; // 0x214	
	CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x218	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x238	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x23c	
};

// Alignment: 2
// Size: 0x4c0
class CInfoGameEventProxy : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4b0	
	float m_flRange; // 0x4b8	
};

// Alignment: 2
// Size: 0x4b8
class CProjectedDecal : public CPointEntity
{
public:
	int32_t m_nTexture; // 0x4b0	
	float m_flDistance; // 0x4b4	
};

// Alignment: 2
// Size: 0x780
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x470	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x750	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Alignment: 26
// Size: 0x700
class CBaseModelEntity : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4b0	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x4b8	
	GameTime_t m_flDissolveStartTime; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CEntityIOOutput m_OnIgnite; // 0x4e8	
	// MNetworkEnable
	RenderMode_t m_nRenderMode; // 0x510	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x511	
	bool m_bAllowFadeInView; // 0x512	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x513	
private:
	[[maybe_unused]] uint8_t __pad0517[0x1]; // 0x517
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x518	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x568	
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x570	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x620	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x678	
	// MNetworkEnable
	float m_fadeMinDist; // 0x67c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x680	
	// MNetworkEnable
	float m_flFadeScale; // 0x684	
	// MNetworkEnable
	float m_flShadowStrength; // 0x688	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x68c	
private:
	[[maybe_unused]] uint8_t __pad068d[0x3]; // 0x68d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x690	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x694	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x6a0	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x6ac	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x6b0	
private:
	[[maybe_unused]] uint8_t __pad06b4[0x4]; // 0x6b4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6b8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x6d0	
};

// Alignment: 0
// Size: 0x700
class CServerOnlyModelEntity : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x700
class CModelPointEntity : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x508
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4b0	
	CEntityIOOutput m_OnSpawn; // 0x4d8	
	bool m_bDisabled; // 0x500	
	bool m_bWaitForRefire; // 0x501	
	bool m_bTriggerOnce; // 0x502	
	bool m_bFastRetrigger; // 0x503	
	bool m_bPassthoughCaller; // 0x504	
};

// Alignment: 22
// Size: 0xc78
class CParticleSystem : public CBaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x700	
	// MNetworkEnable
	bool m_bActive; // 0x900	
	// MNetworkEnable
	bool m_bFrozen; // 0x901	
private:
	[[maybe_unused]] uint8_t __pad0902[0x2]; // 0x902
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0x904	
	// MNetworkEnable
	int32_t m_nStopType; // 0x908	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0x90c	
private:
	[[maybe_unused]] uint8_t __pad090d[0x3]; // 0x90d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x910	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x918	
	// MNetworkEnable
	float m_flPreSimTime; // 0x91c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0x920	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0x950	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0x954	
	// MNetworkEnable
	bool m_bNoSave; // 0xa54	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xa55	
	// MNetworkEnable
	bool m_bNoRamp; // 0xa56	
	bool m_bStartActive; // 0xa57	
	CUtlSymbolLarge m_iszEffectName; // 0xa58	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xa60	
	int32_t m_nDataCP; // 0xc60	
	Vector m_vecDataCPValue; // 0xc64	
	int32_t m_nTintCP; // 0xc70	
	Color m_clrTint; // 0xc74	
};

// Alignment: 16
// Size: 0x590
class CPathParticleRope : public CBaseEntity
{
public:
	bool m_bStartActive; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_flMaxSimulationTime; // 0x4b4	
	CUtlSymbolLarge m_iszEffectName; // 0x4b8	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4c0	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x4d8	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x4dc	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x4e0	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x4e4	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x4f0	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x4f8	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x510	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x528	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x558	
	// MNetworkEnable
	CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x570	
};

// Alignment: 0
// Size: 0x590
class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x708
class CFuncWall : public CBaseModelEntity
{
public:
	int32_t m_nState; // 0x700	
};

// Alignment: 0
// Size: 0x708
class CFuncWallToggle : public CFuncWall
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x700
class CFuncVehicleClip : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x700
class CFuncIllusionary : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x708
class CFuncVPhysicsClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x700	
};

// Alignment: 3
// Size: 0x718
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x7]; // 0x701
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x708	
	CUtlSymbolLarge m_iszInteractsWith; // 0x710	
};

// Alignment: 0
// Size: 0x4b0
class CPointClientCommand : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CPointServerCommand : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CPointBroadcastClientCommand : public CPointEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x528
class CCommentaryAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnCommentaryNewGame; // 0x4b0	
	CEntityIOOutput m_OnCommentaryMidGame; // 0x4d8	
	CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x500	
};

// Alignment: 9
// Size: 0x718
class CDynamicLight : public CBaseModelEntity
{
public:
	uint8_t m_ActualFlags; // 0x700	
	// MNetworkEnable
	uint8_t m_Flags; // 0x701	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x702	
	bool m_On; // 0x703	
	// MNetworkEnable
	float m_Radius; // 0x704	
	// MNetworkEnable
	int32_t m_Exponent; // 0x708	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x70c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x710	
	// MNetworkEnable
	float m_SpotRadius; // 0x714	
};

// Alignment: 3
// Size: 0x710
class CBubbling : public CBaseModelEntity
{
public:
	int32_t m_density; // 0x700	
	int32_t m_frequency; // 0x704	
	int32_t m_state; // 0x708	
};

// Alignment: 2
// Size: 0x4c0
class CEnvTracer : public CPointEntity
{
public:
	Vector m_vecEnd; // 0x4b0	
	float m_flDelay; // 0x4bc	
};

// Alignment: 5
// Size: 0x5e0
class CTestEffect : public CBaseEntity
{
public:
	int32_t m_iLoop; // 0x4b0	
	int32_t m_iBeam; // 0x4b4	
	CBeam* m_pBeam[24]; // 0x4b8	
	GameTime_t m_flBeamTime[24]; // 0x578	
	GameTime_t m_flStartTime; // 0x5d8	
};

// Alignment: 4
// Size: 0x4d0
class CBlood : public CPointEntity
{
public:
	QAngle m_vecSprayAngles; // 0x4b0	
	Vector m_vecSprayDir; // 0x4bc	
	float m_flAmount; // 0x4c8	
	int32_t m_Color; // 0x4cc	
};

// Alignment: 0
// Size: 0x4b0
class CEnvFunnel : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x4b8
class CEnvBeverage : public CBaseEntity
{
public:
	bool m_CanInDispenser; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	int32_t m_nBeverageType; // 0x4b4	
};

// Alignment: 0
// Size: 0x700
class CPrecipitationBlocker : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x708
class CEnvWind : public CBaseEntity
{
public:
	// MNetworkEnable
	CEnvWindShared m_EnvWindShared; // 0x4b0	
};

// Alignment: 1
// Size: 0x4b8
class CPhysicsWire : public CBaseEntity
{
public:
	int32_t m_nDensity; // 0x4b0	
};

// Alignment: 2
// Size: 0x4c0
class CEnvMuzzleFlash : public CPointEntity
{
public:
	float m_flScale; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	CUtlSymbolLarge m_iszParentAttachment; // 0x4b8	
};

// Alignment: 1
// Size: 0x4b8
class CEnvSplash : public CPointEntity
{
public:
	float m_flScale; // 0x4b0	
};

// Alignment: 2
// Size: 0x4c0
class CEnvViewPunch : public CPointEntity
{
public:
	float m_flRadius; // 0x4b0	
	QAngle m_angViewPunch; // 0x4b4	
};

// Alignment: 1
// Size: 0x4b8
class CEnvEntityIgniter : public CBaseEntity
{
public:
	float m_flLifetime; // 0x4b0	
};

// Alignment: 1
// Size: 0x5498
class CDebugHistory : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x1f4040]; // 0x4b0
public:
	int32_t m_nNpcEvents; // 0x1f44f0	
};

// Alignment: 12
// Size: 0x550
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4b0	
	Vector m_vecEntityMaxs; // 0x4bc	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4c8	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4cc	
	Vector m_vecBlockerOrigin; // 0x4d0	
	QAngle m_angPostSpawnDirection; // 0x4dc	
	float m_flPostSpawnDirectionVariance; // 0x4e8	
	float m_flPostSpawnSpeed; // 0x4ec	
	bool m_bPostSpawnUseAngles; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f1[0x7]; // 0x4f1
public:
	CUtlSymbolLarge m_iszTemplate; // 0x4f8	
	CEntityIOOutput m_pOutputOnSpawned; // 0x500	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x528	
};

// Alignment: 0
// Size: 0x4b0
class CInfoInstructorHintTarget : public CPointEntity
{
public:
	// No members available
};

// Alignment: 24
// Size: 0x520
class CEnvInstructorHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4b0	
	CUtlSymbolLarge m_iszReplace_Key; // 0x4b8	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c0	
	int32_t m_iTimeout; // 0x4c8	
	int32_t m_iDisplayLimit; // 0x4cc	
	CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4d0	
	CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4d8	
	CUtlSymbolLarge m_iszCaption; // 0x4e0	
	CUtlSymbolLarge m_iszActivatorCaption; // 0x4e8	
	Color m_Color; // 0x4f0	
	float m_fIconOffset; // 0x4f4	
	float m_fRange; // 0x4f8	
	uint8_t m_iPulseOption; // 0x4fc	
	uint8_t m_iAlphaOption; // 0x4fd	
	uint8_t m_iShakeOption; // 0x4fe	
	bool m_bStatic; // 0x4ff	
	bool m_bNoOffscreen; // 0x500	
	bool m_bForceCaption; // 0x501	
private:
	[[maybe_unused]] uint8_t __pad0502[0x2]; // 0x502
public:
	int32_t m_iInstanceType; // 0x504	
	bool m_bSuppressRest; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x7]; // 0x509
public:
	CUtlSymbolLarge m_iszBinding; // 0x510	
	bool m_bAllowNoDrawTarget; // 0x518	
	bool m_bAutoStart; // 0x519	
	bool m_bLocalPlayerOnly; // 0x51a	
};

// Alignment: 9
// Size: 0x4f0
class CEnvInstructorVRHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4b0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b8	
	int32_t m_iTimeout; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszCaption; // 0x4c8	
	CUtlSymbolLarge m_iszStartSound; // 0x4d0	
	int32_t m_iLayoutFileType; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4e0	
	int32_t m_iAttachType; // 0x4e8	
	float m_flHeightOffset; // 0x4ec	
};

// Alignment: 3
// Size: 0x4c8
class CInstructorEventEntity : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4b0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b8	
	CHandle< CBasePlayerPawn > m_hTargetPlayer; // 0x4c0	
};

// Alignment: 5
// Size: 0x538
class CEnvScreenOverlay : public CPointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4b0	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x500	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x528	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x52c	
	// MNetworkEnable
	bool m_bIsActive; // 0x530	
};

// Alignment: 4
// Size: 0x4e8
class CEnvFade : public CLogicalEntity
{
public:
	// MNetworkEnable
	Color m_fadeColor; // 0x4b0	
	float m_Duration; // 0x4b4	
	float m_HoldDuration; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CEntityIOOutput m_OnBeginFade; // 0x4c0	
};

// Alignment: 3
// Size: 0x4e0
class CCredits : public CPointEntity
{
public:
	CEntityIOOutput m_OnCreditsDone; // 0x4b0	
	bool m_bRolledOutroCredits; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flLogoLength; // 0x4dc	
};

// Alignment: 10
// Size: 0x500
class CEnvShake : public CPointEntity
{
public:
	CUtlSymbolLarge m_limitToEntity; // 0x4b0	
	float m_Amplitude; // 0x4b8	
	float m_Frequency; // 0x4bc	
	float m_Duration; // 0x4c0	
	float m_Radius; // 0x4c4	
	GameTime_t m_stopTime; // 0x4c8	
	GameTime_t m_nextShake; // 0x4cc	
	float m_currentAmp; // 0x4d0	
	Vector m_maxForce; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CPhysicsShake m_shakeCallback; // 0x4e8	
};

// Alignment: 4
// Size: 0x4c0
class CEnvTilt : public CPointEntity
{
public:
	float m_Duration; // 0x4b0	
	float m_Radius; // 0x4b4	
	float m_TiltTime; // 0x4b8	
	GameTime_t m_stopTime; // 0x4bc	
};

// Alignment: 5
// Size: 0x4e8
class CEnvSpark : public CPointEntity
{
public:
	float m_flDelay; // 0x4b0	
	int32_t m_nMagnitude; // 0x4b4	
	int32_t m_nTrailLength; // 0x4b8	
	int32_t m_nType; // 0x4bc	
	CEntityIOOutput m_OnSpark; // 0x4c0	
};

// Alignment: 0
// Size: 0x700
class CShower : public CModelPointEntity
{
public:
	// No members available
};

// Alignment: 15
// Size: 0x758
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x700	
	float m_flPlayerDamage; // 0x704	
	int32_t m_iRadiusOverride; // 0x708	
	float m_flInnerRadius; // 0x70c	
	int32_t m_spriteScale; // 0x710	
	float m_flDamageForce; // 0x714	
	CHandle< CBaseEntity > m_hInflictor; // 0x718	
	int32_t m_iCustomDamageType; // 0x71c	
private:
	[[maybe_unused]] uint8_t __pad0720[0x8]; // 0x720
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x728	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x730	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x738	
	Class_T m_iClassIgnore; // 0x740	
	Class_T m_iClassIgnore2; // 0x744	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x748	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x750	
};

// Alignment: 1
// Size: 0x510
class CFilterName : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x508	
};

// Alignment: 1
// Size: 0x510
class CFilterModel : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterModel; // 0x508	
};

// Alignment: 1
// Size: 0x510
class CFilterContext : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterContext; // 0x508	
};

// Alignment: 1
// Size: 0x510
class FilterTeam : public CBaseFilter
{
public:
	int32_t m_iFilterTeam; // 0x508	
};

// Alignment: 1
// Size: 0x510
class CFilterMassGreater : public CBaseFilter
{
public:
	float m_fFilterMass; // 0x508	
};

// Alignment: 1
// Size: 0x510
class FilterDamageType : public CBaseFilter
{
public:
	int32_t m_iDamageType; // 0x508	
};

// Alignment: 3
// Size: 0x518
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	int32_t m_iHealthMin; // 0x50c	
	int32_t m_iHealthMax; // 0x510	
};

// Alignment: 5
// Size: 0x528
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x508	
	float m_flRadius; // 0x510	
	float m_flOuterRadius; // 0x514	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x520	
};

// Alignment: 1
// Size: 0x510
class CFilterAttributeInt : public CBaseFilter
{
public:
	CUtlStringToken m_sAttributeName; // 0x508	
};

// Alignment: 19
// Size: 0x790
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x700	
	CHandle< CBaseEntity > m_hOwner; // 0x704	
	int32_t m_nFireType; // 0x708	
	float m_flFuel; // 0x70c	
	GameTime_t m_flDamageTime; // 0x710	
	GameTime_t m_lastDamage; // 0x714	
	float m_flFireSize; // 0x718	
	GameTime_t m_flLastNavUpdateTime; // 0x71c	
	float m_flHeatLevel; // 0x720	
	float m_flHeatAbsorb; // 0x724	
	float m_flDamageScale; // 0x728	
	float m_flMaxHeat; // 0x72c	
	float m_flLastHeatLevel; // 0x730	
	float m_flAttackTime; // 0x734	
	bool m_bEnabled; // 0x738	
	bool m_bStartDisabled; // 0x739	
	bool m_bDidActivate; // 0x73a	
private:
	[[maybe_unused]] uint8_t __pad073b[0x5]; // 0x73b
public:
	CEntityIOOutput m_OnIgnited; // 0x740	
	CEntityIOOutput m_OnExtinguished; // 0x768	
};

// Alignment: 3
// Size: 0x4c0
class CEnvFireSource : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_radius; // 0x4b4	
	float m_damage; // 0x4b8	
};

// Alignment: 8
// Size: 0x518
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4b0	
	bool m_bHeatAtLevel; // 0x4b1	
private:
	[[maybe_unused]] uint8_t __pad04b2[0x2]; // 0x4b2
public:
	float m_radius; // 0x4b4	
	float m_targetLevel; // 0x4b8	
	float m_targetTime; // 0x4bc	
	float m_levelTime; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4c8	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x4f0	
};

// Alignment: 5
// Size: 0x4c8
class CFuncTimescale : public CBaseEntity
{
public:
	float m_flDesiredTimescale; // 0x4b0	
	float m_flAcceleration; // 0x4b4	
	float m_flMinBlendRate; // 0x4b8	
	float m_flBlendDeltaMultiplier; // 0x4bc	
	bool m_isStarted; // 0x4c0	
};

// Alignment: 7
// Size: 0x720
class CLightGlow : public CBaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x700	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x704	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x708	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x70c	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x710	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x714	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x718	
};

// Alignment: 3
// Size: 0x4e8
class CLogicAchievement : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	CUtlSymbolLarge m_iszAchievementEventID; // 0x4b8	
	CEntityIOOutput m_OnFired; // 0x4c0	
};

// Alignment: 5
// Size: 0x500
class CLogicGameEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x10]; // 0x4b0
public:
	CEntityIOOutput m_OnEventFired; // 0x4c0	
	CUtlSymbolLarge m_iszGameEventName; // 0x4e8	
	CUtlSymbolLarge m_iszGameEventItem; // 0x4f0	
	// MNetworkEnable
	bool m_bEnabled; // 0x4f8	
	bool m_bStartDisabled; // 0x4f9	
};

// Alignment: 9
// Size: 0x4e0
class CLogicMeasureMovement : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_strMeasureTarget; // 0x4b0	
	CUtlSymbolLarge m_strMeasureReference; // 0x4b8	
	CUtlSymbolLarge m_strTargetReference; // 0x4c0	
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4c8	
	CHandle< CBaseEntity > m_hMeasureReference; // 0x4cc	
	CHandle< CBaseEntity > m_hTarget; // 0x4d0	
	CHandle< CBaseEntity > m_hTargetReference; // 0x4d4	
	float m_flScale; // 0x4d8	
	int32_t m_nMeasureType; // 0x4dc	
};

// Alignment: 2
// Size: 0x4c0
class CLogicNavigation : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	bool m_isOn; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	navproperties_t m_navProperty; // 0x4bc	
};

// Alignment: 48
// Size: 0x7f0
class CLogicNPCCounter : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMinCountAll; // 0x4b0	
	CEntityIOOutput m_OnMaxCountAll; // 0x4d8	
	CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x500	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x528	
	CEntityIOOutput m_OnMinCount_1; // 0x550	
	CEntityIOOutput m_OnMaxCount_1; // 0x578	
	CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x5a0	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5c8	
	CEntityIOOutput m_OnMinCount_2; // 0x5f0	
	CEntityIOOutput m_OnMaxCount_2; // 0x618	
	CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x640	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x668	
	CEntityIOOutput m_OnMinCount_3; // 0x690	
	CEntityIOOutput m_OnMaxCount_3; // 0x6b8	
	CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x6e0	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x708	
	CEntityHandle m_hSource; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x738	
	float m_flDistanceMax; // 0x740	
	bool m_bDisabled; // 0x744	
private:
	[[maybe_unused]] uint8_t __pad0745[0x3]; // 0x745
public:
	int32_t m_nMinCountAll; // 0x748	
	int32_t m_nMaxCountAll; // 0x74c	
	int32_t m_nMinFactorAll; // 0x750	
	int32_t m_nMaxFactorAll; // 0x754	
private:
	[[maybe_unused]] uint8_t __pad0758[0x8]; // 0x758
public:
	CUtlSymbolLarge m_iszNPCClassname_1; // 0x760	
	int32_t m_nNPCState_1; // 0x768	
	bool m_bInvertState_1; // 0x76c	
private:
	[[maybe_unused]] uint8_t __pad076d[0x3]; // 0x76d
public:
	int32_t m_nMinCount_1; // 0x770	
	int32_t m_nMaxCount_1; // 0x774	
	int32_t m_nMinFactor_1; // 0x778	
	int32_t m_nMaxFactor_1; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad0780[0x4]; // 0x780
public:
	float m_flDefaultDist_1; // 0x784	
	CUtlSymbolLarge m_iszNPCClassname_2; // 0x788	
	int32_t m_nNPCState_2; // 0x790	
	bool m_bInvertState_2; // 0x794	
private:
	[[maybe_unused]] uint8_t __pad0795[0x3]; // 0x795
public:
	int32_t m_nMinCount_2; // 0x798	
	int32_t m_nMaxCount_2; // 0x79c	
	int32_t m_nMinFactor_2; // 0x7a0	
	int32_t m_nMaxFactor_2; // 0x7a4	
private:
	[[maybe_unused]] uint8_t __pad07a8[0x4]; // 0x7a8
public:
	float m_flDefaultDist_2; // 0x7ac	
	CUtlSymbolLarge m_iszNPCClassname_3; // 0x7b0	
	int32_t m_nNPCState_3; // 0x7b8	
	bool m_bInvertState_3; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07bd[0x3]; // 0x7bd
public:
	int32_t m_nMinCount_3; // 0x7c0	
	int32_t m_nMaxCount_3; // 0x7c4	
	int32_t m_nMinFactor_3; // 0x7c8	
	int32_t m_nMaxFactor_3; // 0x7cc	
private:
	[[maybe_unused]] uint8_t __pad07d0[0x4]; // 0x7d0
public:
	float m_flDefaultDist_3; // 0x7d4	
};

// Alignment: 4
// Size: 0x820
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x7f0	
	Vector m_vDistanceOuterMaxs; // 0x7fc	
	Vector m_vOuterMins; // 0x808	
	Vector m_vOuterMaxs; // 0x814	
};

// Alignment: 0
// Size: 0x820
class CLogicNPCCounterOBB : public CLogicNPCCounterAABB
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x558
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4b8	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x4e0	
	CEntityIOOutput m_PlayerDied; // 0x508	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x530	
};

// Alignment: 11
// Size: 0x648
class CLogicAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMapSpawn; // 0x4b0	
	CEntityIOOutput m_OnDemoMapSpawn; // 0x4d8	
	CEntityIOOutput m_OnNewGame; // 0x500	
	CEntityIOOutput m_OnLoadGame; // 0x528	
	CEntityIOOutput m_OnMapTransition; // 0x550	
	CEntityIOOutput m_OnBackgroundMap; // 0x578	
	CEntityIOOutput m_OnMultiNewMap; // 0x5a0	
	CEntityIOOutput m_OnMultiNewRound; // 0x5c8	
	CEntityIOOutput m_OnVREnabled; // 0x5f0	
	CEntityIOOutput m_OnVRNotEnabled; // 0x618	
	CUtlSymbolLarge m_globalstate; // 0x640	
};

// Alignment: 0
// Size: 0x4b0
class CLogicScript : public CPointEntity
{
public:
	// No members available
};

// Alignment: 13
// Size: 0x550
class CTimerEntity : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4b0	
	CEntityIOOutput m_OnTimerHigh; // 0x4d8	
	CEntityIOOutput m_OnTimerLow; // 0x500	
	int32_t m_iDisabled; // 0x528	
	float m_flInitialDelay; // 0x52c	
	float m_flRefireTime; // 0x530	
	bool m_bUpDownState; // 0x534	
private:
	[[maybe_unused]] uint8_t __pad0535[0x3]; // 0x535
public:
	int32_t m_iUseRandomTime; // 0x538	
	bool m_bPauseAfterFiring; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	float m_flLowerRandomBound; // 0x540	
	float m_flUpperRandomBound; // 0x544	
	float m_flRemainingTime; // 0x548	
	bool m_bPaused; // 0x54c	
};

// Alignment: 4
// Size: 0x4e8
class CLogicLineToEntity : public CLogicalEntity
{
public:
	CEntityOutputTemplate< Vector > m_Line; // 0x4b0	
	CUtlSymbolLarge m_SourceName; // 0x4d8	
	CHandle< CBaseEntity > m_StartEntity; // 0x4e0	
	CHandle< CBaseEntity > m_EndEntity; // 0x4e4	
};

// Alignment: 11
// Size: 0x590
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4b0	
	float m_flInMax; // 0x4b4	
	float m_flOut1; // 0x4b8	
	float m_flOut2; // 0x4bc	
	float m_flOldInValue; // 0x4c0	
	bool m_bEnabled; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4c8	
	CEntityIOOutput m_OnRoseAboveMin; // 0x4f0	
	CEntityIOOutput m_OnRoseAboveMax; // 0x518	
	CEntityIOOutput m_OnFellBelowMin; // 0x540	
	CEntityIOOutput m_OnFellBelowMax; // 0x568	
};

// Alignment: 5
// Size: 0x4e8
class CMathColorBlend : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4b0	
	float m_flInMax; // 0x4b4	
	Color m_OutColor1; // 0x4b8	
	Color m_OutColor2; // 0x4bc	
	CEntityOutputTemplate< Color > m_OutValue; // 0x4c0	
};

// Alignment: 5
// Size: 0x4f0
class CEnvGlobal : public CLogicalEntity
{
public:
	CEntityOutputTemplate< int32 > m_outCounter; // 0x4b0	
	CUtlSymbolLarge m_globalstate; // 0x4d8	
	int32_t m_triggermode; // 0x4e0	
	int32_t m_initialstate; // 0x4e4	
	int32_t m_counter; // 0x4e8	
};

// Alignment: 5
// Size: 0x5e8
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4b0	
	int32_t m_rgTriggered[32]; // 0x530	
	CEntityIOOutput m_OnTrigger; // 0x5b0	
	int32_t m_iTotal; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x4]; // 0x5dc
public:
	CUtlSymbolLarge m_globalstate; // 0x5e0	
};

// Alignment: 11
// Size: 0x5b0
class CMathCounter : public CLogicalEntity
{
public:
	float m_flMin; // 0x4b0	
	float m_flMax; // 0x4b4	
	bool m_bHitMin; // 0x4b8	
	bool m_bHitMax; // 0x4b9	
	bool m_bDisabled; // 0x4ba	
private:
	[[maybe_unused]] uint8_t __pad04bb[0x5]; // 0x4bb
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4c0	
	CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4e8	
	CEntityIOOutput m_OnHitMin; // 0x510	
	CEntityIOOutput m_OnHitMax; // 0x538	
	CEntityIOOutput m_OnChangedFromMin; // 0x560	
	CEntityIOOutput m_OnChangedFromMax; // 0x588	
};

// Alignment: 6
// Size: 0xb00
class CLogicCase : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nCase[32]; // 0x4b0	
	int32_t m_nShuffleCases; // 0x5b0	
	int32_t m_nLastShuffleCase; // 0x5b4	
	uint8_t m_uchShuffleCaseMap[32]; // 0x5b8	
	CEntityIOOutput m_OnCase[32]; // 0x5d8	
	CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xad8	
};

// Alignment: 6
// Size: 0x558
class CLogicCompare : public CLogicalEntity
{
public:
	float m_flInValue; // 0x4b0	
	float m_flCompareValue; // 0x4b4	
	CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4b8	
	CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4e0	
	CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x508	
	CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x530	
};

// Alignment: 3
// Size: 0x4c0
class CLogicAutosave : public CLogicalEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	int32_t m_minHitPoints; // 0x4b4	
	int32_t m_minHitPointsToCommit; // 0x4b8	
};

// Alignment: 4
// Size: 0x4d0
class CLogicActiveAutosave : public CLogicAutosave
{
public:
	int32_t m_TriggerHitPoints; // 0x4c0	
	float m_flTimeToTrigger; // 0x4c4	
	GameTime_t m_flStartTime; // 0x4c8	
	float m_flDangerousTime; // 0x4cc	
};

// Alignment: 6
// Size: 0x4c8
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4b0	
	float m_flDistanceToPlayer; // 0x4b8	
	bool m_bForceNewLevelUnit; // 0x4bc	
	bool m_bCheckCough; // 0x4bd	
	bool m_bThinkDangerous; // 0x4be	
private:
	[[maybe_unused]] uint8_t __pad04bf[0x1]; // 0x4bf
public:
	float m_flDangerousTime; // 0x4c0	
};

// Alignment: 4
// Size: 0x4c8
class CLogicCollisionPair : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4b0	
	CUtlSymbolLarge m_nameAttach2; // 0x4b8	
	bool m_disabled; // 0x4c0	
	bool m_succeeded; // 0x4c1	
};

// Alignment: 6
// Size: 0x5c8
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4b0	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x530	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	CEntityIOOutput m_OnAllTrue; // 0x550	
	CEntityIOOutput m_OnAllFalse; // 0x578	
	CEntityIOOutput m_OnMixed; // 0x5a0	
};

// Alignment: 1
// Size: 0x4b8
class CLogicGameEvent : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4b0	
};

// Alignment: 5
// Size: 0x4c8
class CMessageEntity : public CPointEntity
{
public:
	int32_t m_radius; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	CUtlSymbolLarge m_messageText; // 0x4b8	
	bool m_drawText; // 0x4c0	
	bool m_bDeveloperOnly; // 0x4c1	
	bool m_bEnabled; // 0x4c2	
};

// Alignment: 5
// Size: 0x780
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x700	
	CEntityIOOutput m_OnEndTouch; // 0x728	
	CEntityIOOutput m_OnUse; // 0x750	
	int32_t m_iInputFilter; // 0x778	
	int32_t m_iDontMessageParent; // 0x77c	
};

// Alignment: 8
// Size: 0x510
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4b0	
	QAngle m_Angles; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04c8[0x8]; // 0x4c8
public:
	Quaternion m_qAngle; // 0x4d0	
	CUtlSymbolLarge m_iNextKey; // 0x4e0	
	float m_flNextTime; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CPathKeyFrame* m_pNextKey; // 0x4f0	
	CPathKeyFrame* m_pPrevKey; // 0x4f8	
	float m_flSpeed; // 0x500	
};

// Alignment: 11
// Size: 0x550
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x510	
	int32_t m_iRotationInterpolator; // 0x514	
	float m_flAnimStartTime; // 0x518	
	float m_flAnimEndTime; // 0x51c	
	float m_flAverageSpeedAcrossFrame; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x528	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x530	
	CPathKeyFrame* m_pPreKeyFrame; // 0x538	
	CPathKeyFrame* m_pPostKeyFrame; // 0x540	
	float m_flTimeIntoFrame; // 0x548	
	int32_t m_iDirection; // 0x54c	
};

// Alignment: 3
// Size: 0x4e0
class CPathCorner : public CPointEntity
{
public:
	float m_flWait; // 0x4b0	
	float m_flRadius; // 0x4b4	
	CEntityIOOutput m_OnPass; // 0x4b8	
};

// Alignment: 6
// Size: 0x510
class CPhysForce : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4b8	
	float m_force; // 0x4c0	
	float m_forceTime; // 0x4c4	
	CHandle< CBaseEntity > m_attachedObject; // 0x4c8	
	bool m_wasRestored; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	CConstantForceController m_integrator; // 0x4d0	
};

// Alignment: 1
// Size: 0x520
class CPhysThruster : public CPhysForce
{
public:
	Vector m_localOrigin; // 0x510	
};

// Alignment: 1
// Size: 0x520
class CPhysTorque : public CPhysForce
{
public:
	Vector m_axis; // 0x510	
};

// Alignment: 7
// Size: 0x500
class CPhysMotor : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach; // 0x4b0	
	CHandle< CBaseEntity > m_hAttachedObject; // 0x4b8	
	float m_spinUp; // 0x4bc	
	float m_additionalAcceleration; // 0x4c0	
	float m_angularAcceleration; // 0x4c4	
	GameTime_t m_lastTime; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x14]; // 0x4cc
public:
	CMotorController m_motor; // 0x4e0	
};

// Alignment: 7
// Size: 0x4f0
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	Vector m_worldGoalAxis; // 0x4b8	
	Vector m_localTestAxis; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04d0[0x8]; // 0x4d0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4d8	
	CHandle< CBaseEntity > m_attachedObject; // 0x4e0	
	float m_angularLimit; // 0x4e4	
	bool m_bActive; // 0x4e8	
	bool m_bDampAllRotation; // 0x4e9	
};

// Alignment: 8
// Size: 0x508
class CPhysConstraint : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4b8	
	CUtlSymbolLarge m_nameAttach2; // 0x4c0	
	CUtlSymbolLarge m_breakSound; // 0x4c8	
	float m_forceLimit; // 0x4d0	
	float m_torqueLimit; // 0x4d4	
	uint32_t m_teleportTick; // 0x4d8	
	float m_minTeleportDistance; // 0x4dc	
	CEntityIOOutput m_OnBreak; // 0x4e0	
};

// Alignment: 18
// Size: 0x6a8
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	ConstraintSoundInfo m_soundInfo; // 0x510	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x598	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x5c0	
	bool m_bAtMinLimit; // 0x5e8	
	bool m_bAtMaxLimit; // 0x5e9	
private:
	[[maybe_unused]] uint8_t __pad05ea[0x2]; // 0x5ea
public:
	constraint_hingeparams_t m_hinge; // 0x5ec	
	float m_hingeFriction; // 0x62c	
	float m_systemLoadScale; // 0x630	
	bool m_bIsAxisLocal; // 0x634	
private:
	[[maybe_unused]] uint8_t __pad0635[0x3]; // 0x635
public:
	float m_flMinRotation; // 0x638	
	float m_flMaxRotation; // 0x63c	
	float m_flInitialRotation; // 0x640	
	float m_flMotorFrequency; // 0x644	
	float m_flMotorDampingRatio; // 0x648	
	float m_flAngleSpeed; // 0x64c	
	float m_flAngleSpeedThreshold; // 0x650	
private:
	[[maybe_unused]] uint8_t __pad0654[0x4]; // 0x654
public:
	CEntityIOOutput m_OnStartMoving; // 0x658	
	CEntityIOOutput m_OnStopMoving; // 0x680	
};

// Alignment: 0
// Size: 0x6a8
class CPhysHingeAlias_phys_hinge_local : public CPhysHinge
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x520
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flFriction; // 0x508	
	bool m_bEnableSwingLimit; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	float m_flSwingLimit; // 0x510	
	bool m_bEnableTwistLimit; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	float m_flMinTwistAngle; // 0x518	
	float m_flMaxTwistAngle; // 0x51c	
};

// Alignment: 10
// Size: 0x5c0
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	Vector m_axisEnd; // 0x510	
	float m_slideFriction; // 0x51c	
	float m_systemLoadScale; // 0x520	
	float m_initialOffset; // 0x524	
	bool m_bEnableLinearConstraint; // 0x528	
	bool m_bEnableAngularConstraint; // 0x529	
private:
	[[maybe_unused]] uint8_t __pad052a[0x2]; // 0x52a
public:
	float m_flMotorFrequency; // 0x52c	
	float m_flMotorDampingRatio; // 0x530	
	bool m_bUseEntityPivot; // 0x534	
private:
	[[maybe_unused]] uint8_t __pad0535[0x3]; // 0x535
public:
	ConstraintSoundInfo m_soundInfo; // 0x538	
};

// Alignment: 6
// Size: 0x520
class CPhysFixed : public CPhysConstraint
{
public:
	float m_flLinearFrequency; // 0x508	
	float m_flLinearDampingRatio; // 0x50c	
	float m_flAngularFrequency; // 0x510	
	float m_flAngularDampingRatio; // 0x514	
	bool m_bEnableLinearConstraint; // 0x518	
	bool m_bEnableAngularConstraint; // 0x519	
};

// Alignment: 4
// Size: 0x538
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x508	
	Vector m_offset[2]; // 0x514	
	float m_addLength; // 0x52c	
	float m_gearRatio; // 0x530	
};

// Alignment: 6
// Size: 0x540
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x508	
	Vector m_vecAttach; // 0x520	
	float m_addLength; // 0x52c	
	float m_minLength; // 0x530	
	float m_totalLength; // 0x534	
	bool m_bEnableCollision; // 0x538	
};

// Alignment: 9
// Size: 0x530
class CRagdollConstraint : public CPhysConstraint
{
public:
	float m_xmin; // 0x508	
	float m_xmax; // 0x50c	
	float m_ymin; // 0x510	
	float m_ymax; // 0x514	
	float m_zmin; // 0x518	
	float m_zmax; // 0x51c	
	float m_xfriction; // 0x520	
	float m_yfriction; // 0x524	
	float m_zfriction; // 0x528	
};

// Alignment: 48
// Size: 0x638
class CGenericConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	JointMotion_t m_nLinearMotionX; // 0x510	
	JointMotion_t m_nLinearMotionY; // 0x514	
	JointMotion_t m_nLinearMotionZ; // 0x518	
	float m_flLinearFrequencyX; // 0x51c	
	float m_flLinearFrequencyY; // 0x520	
	float m_flLinearFrequencyZ; // 0x524	
	float m_flLinearDampingRatioX; // 0x528	
	float m_flLinearDampingRatioY; // 0x52c	
	float m_flLinearDampingRatioZ; // 0x530	
	float m_flMaxLinearImpulseX; // 0x534	
	float m_flMaxLinearImpulseY; // 0x538	
	float m_flMaxLinearImpulseZ; // 0x53c	
	float m_flBreakAfterTimeX; // 0x540	
	float m_flBreakAfterTimeY; // 0x544	
	float m_flBreakAfterTimeZ; // 0x548	
	GameTime_t m_flBreakAfterTimeStartTimeX; // 0x54c	
	GameTime_t m_flBreakAfterTimeStartTimeY; // 0x550	
	GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x554	
	float m_flBreakAfterTimeThresholdX; // 0x558	
	float m_flBreakAfterTimeThresholdY; // 0x55c	
	float m_flBreakAfterTimeThresholdZ; // 0x560	
	float m_flNotifyForceX; // 0x564	
	float m_flNotifyForceY; // 0x568	
	float m_flNotifyForceZ; // 0x56c	
	float m_flNotifyForceMinTimeX; // 0x570	
	float m_flNotifyForceMinTimeY; // 0x574	
	float m_flNotifyForceMinTimeZ; // 0x578	
	GameTime_t m_flNotifyForceLastTimeX; // 0x57c	
	GameTime_t m_flNotifyForceLastTimeY; // 0x580	
	GameTime_t m_flNotifyForceLastTimeZ; // 0x584	
	bool m_bAxisNotifiedX; // 0x588	
	bool m_bAxisNotifiedY; // 0x589	
	bool m_bAxisNotifiedZ; // 0x58a	
private:
	[[maybe_unused]] uint8_t __pad058b[0x1]; // 0x58b
public:
	JointMotion_t m_nAngularMotionX; // 0x58c	
	JointMotion_t m_nAngularMotionY; // 0x590	
	JointMotion_t m_nAngularMotionZ; // 0x594	
	float m_flAngularFrequencyX; // 0x598	
	float m_flAngularFrequencyY; // 0x59c	
	float m_flAngularFrequencyZ; // 0x5a0	
	float m_flAngularDampingRatioX; // 0x5a4	
	float m_flAngularDampingRatioY; // 0x5a8	
	float m_flAngularDampingRatioZ; // 0x5ac	
	float m_flMaxAngularImpulseX; // 0x5b0	
	float m_flMaxAngularImpulseY; // 0x5b4	
	float m_flMaxAngularImpulseZ; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05bc[0x4]; // 0x5bc
public:
	CEntityIOOutput m_NotifyForceReachedX; // 0x5c0	
	CEntityIOOutput m_NotifyForceReachedY; // 0x5e8	
	CEntityIOOutput m_NotifyForceReachedZ; // 0x610	
};

// Alignment: 0
// Size: 0x550
class CSplineConstraint : public CPhysConstraint
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x538
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x508	
	float m_flSuspensionDampingRatio; // 0x50c	
	float m_flSuspensionHeightOffset; // 0x510	
	bool m_bEnableSuspensionLimit; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	float m_flMinSuspensionOffset; // 0x518	
	float m_flMaxSuspensionOffset; // 0x51c	
	bool m_bEnableSteeringLimit; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	float m_flMinSteeringAngle; // 0x524	
	float m_flMaxSteeringAngle; // 0x528	
	float m_flSteeringAxisFriction; // 0x52c	
	float m_flSpinAxisFriction; // 0x530	
};

// Alignment: 4
// Size: 0x4c8
class CPhysicsEntitySolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CHandle< CBaseEntity > m_hMovingEntity; // 0x4b8	
	CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4bc	
	float m_separationDuration; // 0x4c0	
	GameTime_t m_cancelTime; // 0x4c4	
};

// Alignment: 8
// Size: 0x4f8
class CPhysicsSpring : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	float m_flFrequency; // 0x4b8	
	float m_flDampingRatio; // 0x4bc	
	float m_flRestLength; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_nameAttachStart; // 0x4c8	
	CUtlSymbolLarge m_nameAttachEnd; // 0x4d0	
	Vector m_start; // 0x4d8	
	Vector m_end; // 0x4e4	
	uint32_t m_teleportTick; // 0x4f0	
};

// Alignment: 7
// Size: 0x4d8
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_flMagnitude; // 0x4b4	
	float m_flRadius; // 0x4b8	
	float m_flInnerRadius; // 0x4bc	
	float m_flConeOfInfluence; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszFilterName; // 0x4c8	
	CHandle< CBaseFilter > m_hFilter; // 0x4d0	
};

// Alignment: 1
// Size: 0x4b8
class CInfoPlayerStart : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
};

// Alignment: 7
// Size: 0x500
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	CUtlSymbolLarge m_iFilterName; // 0x4b8	
	CHandle< CBaseFilter > m_hFilter; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iRefName; // 0x4c8	
	CHandle< CBaseEntity > m_hReference; // 0x4d0	
	EntFinderMethod_t m_FindMethod; // 0x4d4	
	CEntityIOOutput m_OnFoundEntity; // 0x4d8	
};

// Alignment: 44
// Size: 0x6a8
class CPointValueRemapper : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4b0	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4b1	
private:
	[[maybe_unused]] uint8_t __pad04b2[0x2]; // 0x4b2
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4b4	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4b8	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4c0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4c8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4cc	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4d0	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4d4	
	// MNetworkEnable
	float m_flEngageDistance; // 0x4d8	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x4e8	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4f0	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4f8	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x500	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x508	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x520	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x524	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x528	
	// MNetworkEnable
	float m_flSnapValue; // 0x52c	
	float m_flCurrentMomentum; // 0x530	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x534	
	float m_flRatchetOffset; // 0x538	
	// MNetworkEnable
	float m_flInputOffset; // 0x53c	
	bool m_bEngaged; // 0x540	
	bool m_bFirstUpdate; // 0x541	
private:
	[[maybe_unused]] uint8_t __pad0542[0x2]; // 0x542
public:
	float m_flPreviousValue; // 0x544	
	GameTime_t m_flPreviousUpdateTickTime; // 0x548	
	Vector m_vecPreviousTestPoint; // 0x54c	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x558	
	float m_flCustomOutputValue; // 0x55c	
	CUtlSymbolLarge m_iszSoundEngage; // 0x560	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x568	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x570	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x578	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0588[0x8]; // 0x588
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x590	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5b8	
	CEntityIOOutput m_OnReachedValueZero; // 0x5e0	
	CEntityIOOutput m_OnReachedValueOne; // 0x608	
	CEntityIOOutput m_OnReachedValueCustom; // 0x630	
	CEntityIOOutput m_OnEngage; // 0x658	
	CEntityIOOutput m_OnDisengage; // 0x680	
};

// Alignment: 11
// Size: 0x960
class CPointWorldText : public CModelPointEntity
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x700	
	// MNetworkEnable
	char m_FontName[64]; // 0x900	
	// MNetworkEnable
	bool m_bEnabled; // 0x940	
	// MNetworkEnable
	bool m_bFullbright; // 0x941	
private:
	[[maybe_unused]] uint8_t __pad0942[0x2]; // 0x942
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x944	
	// MNetworkEnable
	float m_flFontSize; // 0x948	
	// MNetworkEnable
	float m_flDepthOffset; // 0x94c	
	// MNetworkEnable
	Color m_Color; // 0x950	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x954	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x958	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x95c	
};

// Alignment: 12
// Size: 0x578
class CPointAngleSensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	CUtlSymbolLarge m_nLookAtName; // 0x4b8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0	
	CHandle< CBaseEntity > m_hLookAtEntity; // 0x4c4	
	float m_flDuration; // 0x4c8	
	float m_flDotTolerance; // 0x4cc	
	GameTime_t m_flFacingTime; // 0x4d0	
	bool m_bFired; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	CEntityIOOutput m_OnFacingLookat; // 0x4d8	
	CEntityIOOutput m_OnNotFacingLookat; // 0x500	
	CEntityOutputTemplate< Vector > m_TargetDir; // 0x528	
	CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x550	
};

// Alignment: 3
// Size: 0x4e0
class CPointProximitySensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b4	
	CEntityOutputTemplate< float32 > m_Distance; // 0x4b8	
};

// Alignment: 16
// Size: 0x5d8
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b0	
	float m_flThreshold; // 0x4b4	
	int32_t m_nLastCompareResult; // 0x4b8	
	int32_t m_nLastFireResult; // 0x4bc	
	GameTime_t m_flFireTime; // 0x4c0	
	float m_flFireInterval; // 0x4c4	
	float m_flLastAngVelocity; // 0x4c8	
	QAngle m_lastOrientation; // 0x4cc	
	Vector m_vecAxis; // 0x4d8	
	bool m_bUseHelper; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4e8	
	CEntityIOOutput m_OnLessThan; // 0x510	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x538	
	CEntityIOOutput m_OnGreaterThan; // 0x560	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x588	
	CEntityIOOutput m_OnEqualTo; // 0x5b0	
};

// Alignment: 6
// Size: 0x4f8
class CPointVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b0	
	Vector m_vecAxis; // 0x4b4	
	bool m_bEnabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_fPrevVelocity; // 0x4c4	
	float m_flAvgInterval; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CEntityOutputTemplate< float32 > m_Velocity; // 0x4d0	
};

// Alignment: 6
// Size: 0x4d0
class CPointHurt : public CPointEntity
{
public:
	int32_t m_nDamage; // 0x4b0	
	int32_t m_bitsDamageType; // 0x4b4	
	float m_flRadius; // 0x4b8	
	float m_flDelay; // 0x4bc	
	CUtlSymbolLarge m_strTarget; // 0x4c0	
	CHandle< CBaseEntity > m_pActivator; // 0x4c8	
};

// Alignment: 4
// Size: 0x4d0
class CPointTeleport : public CServerOnlyPointEntity
{
public:
	Vector m_vSaveOrigin; // 0x4b0	
	QAngle m_vSaveAngles; // 0x4bc	
	bool m_bTeleportParentedEntities; // 0x4c8	
	bool m_bTeleportUseCurrentAngle; // 0x4c9	
};

// Alignment: 0
// Size: 0x4b0
class CEnableMotionFixup : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CFuncPropRespawnZone : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x4c0
class CRagdollManager : public CBaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	int32_t m_iMaxRagdollCount; // 0x4b4	
	bool m_bSaveImportant; // 0x4b8	
};

// Alignment: 3
// Size: 0x710
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x700	
	float m_Duration; // 0x704	
	float m_HoldTime; // 0x708	
};

// Alignment: 3
// Size: 0x588
class CSceneListManager : public CLogicalEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4b0	
	CUtlSymbolLarge m_iszScenes[16]; // 0x4c8	
	CHandle< CBaseEntity > m_hScenes[16]; // 0x548	
};

// Alignment: 63
// Size: 0xa08
class CSceneEntity : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CUtlSymbolLarge m_iszSceneFile; // 0x4b8	
	CUtlSymbolLarge m_iszResumeSceneFile; // 0x4c0	
	CUtlSymbolLarge m_iszTarget1; // 0x4c8	
	CUtlSymbolLarge m_iszTarget2; // 0x4d0	
	CUtlSymbolLarge m_iszTarget3; // 0x4d8	
	CUtlSymbolLarge m_iszTarget4; // 0x4e0	
	CUtlSymbolLarge m_iszTarget5; // 0x4e8	
	CUtlSymbolLarge m_iszTarget6; // 0x4f0	
	CUtlSymbolLarge m_iszTarget7; // 0x4f8	
	CUtlSymbolLarge m_iszTarget8; // 0x500	
	CHandle< CBaseEntity > m_hTarget1; // 0x508	
	CHandle< CBaseEntity > m_hTarget2; // 0x50c	
	CHandle< CBaseEntity > m_hTarget3; // 0x510	
	CHandle< CBaseEntity > m_hTarget4; // 0x514	
	CHandle< CBaseEntity > m_hTarget5; // 0x518	
	CHandle< CBaseEntity > m_hTarget6; // 0x51c	
	CHandle< CBaseEntity > m_hTarget7; // 0x520	
	CHandle< CBaseEntity > m_hTarget8; // 0x524	
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x528	
	// MNetworkEnable
	bool m_bPaused; // 0x529	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x52a	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x52b	
	// MNetworkEnable
	float m_flForceClientTime; // 0x52c	
	float m_flCurrentTime; // 0x530	
	float m_flFrameTime; // 0x534	
	bool m_bCancelAtNextInterrupt; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	float m_fPitch; // 0x53c	
	bool m_bAutomated; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	int32_t m_nAutomatedAction; // 0x544	
	float m_flAutomationDelay; // 0x548	
	float m_flAutomationTime; // 0x54c	
	CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x550	
	bool m_bWaitingForResumeScene; // 0x554	
	bool m_bPausedViaInput; // 0x555	
	bool m_bPauseAtNextInterrupt; // 0x556	
	bool m_bWaitingForActor; // 0x557	
	bool m_bWaitingForInterrupt; // 0x558	
	bool m_bInterruptedActorsScenes; // 0x559	
	bool m_bBreakOnNonIdle; // 0x55a	
private:
	[[maybe_unused]] uint8_t __pad055b[0x5]; // 0x55b
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x560	
	CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0590[0x10]; // 0x590
public:
	int32_t m_nSceneFlushCounter; // 0x5a0	
	// MNetworkEnable
	uint16_t m_nSceneStringIndex; // 0x5a4	
private:
	[[maybe_unused]] uint8_t __pad05a6[0x2]; // 0x5a6
public:
	CEntityIOOutput m_OnStart; // 0x5a8	
	CEntityIOOutput m_OnCompletion; // 0x5d0	
	CEntityIOOutput m_OnCanceled; // 0x5f8	
	CEntityIOOutput m_OnPaused; // 0x620	
	CEntityIOOutput m_OnResumed; // 0x648	
	CEntityIOOutput m_OnTrigger[16]; // 0x670	
private:
	[[maybe_unused]] uint8_t __pad08f0[0x90]; // 0x8f0
public:
	CHandle< CSceneEntity > m_hInterruptScene; // 0x980	
	int32_t m_nInterruptCount; // 0x984	
	bool m_bSceneMissing; // 0x988	
	bool m_bInterrupted; // 0x989	
	bool m_bCompletedEarly; // 0x98a	
	bool m_bInterruptSceneFinished; // 0x98b	
	bool m_bRestoring; // 0x98c	
private:
	[[maybe_unused]] uint8_t __pad098d[0x3]; // 0x98d
public:
	CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x990	
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09c0[0x28]; // 0x9c0
public:
	CUtlSymbolLarge m_iszSoundName; // 0x9e8	
	CHandle< CBaseFlex > m_hActor; // 0x9f0	
	CHandle< CBaseEntity > m_hActivator; // 0x9f4	
	int32_t m_BusyActor; // 0x9f8	
	SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x9fc	
	
	// Static fields:
	static int32_t &Get_s_nSceneFlushCounter(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSceneEntity")->m_static_fields[0]->m_instance);};
};

// Alignment: 62
// Size: 0x7c0
class CScriptedSequence : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszEntry; // 0x4b0	
	CUtlSymbolLarge m_iszPreIdle; // 0x4b8	
	CUtlSymbolLarge m_iszPlay; // 0x4c0	
	CUtlSymbolLarge m_iszPostIdle; // 0x4c8	
	CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4d0	
	CUtlSymbolLarge m_iszNextScript; // 0x4d8	
	CUtlSymbolLarge m_iszEntity; // 0x4e0	
	CUtlSymbolLarge m_iszSyncGroup; // 0x4e8	
	ScriptedMoveTo_t m_nMoveTo; // 0x4f0	
	bool m_bIsPlayingPreIdle; // 0x4f4	
	bool m_bIsPlayingEntry; // 0x4f5	
	bool m_bIsPlayingAction; // 0x4f6	
	bool m_bIsPlayingPostIdle; // 0x4f7	
	bool m_bLoopPreIdleSequence; // 0x4f8	
	bool m_bLoopActionSequence; // 0x4f9	
	bool m_bLoopPostIdleSequence; // 0x4fa	
	bool m_bSynchPostIdles; // 0x4fb	
	bool m_bIgnoreGravity; // 0x4fc	
	bool m_bDisableNPCCollisions; // 0x4fd	
	bool m_bKeepAnimgraphLockedPost; // 0x4fe	
	bool m_bDontAddModifiers; // 0x4ff	
	float m_flRadius; // 0x500	
	float m_flRepeat; // 0x504	
	float m_flPlayAnimFadeInTime; // 0x508	
	float m_flMoveInterpTime; // 0x50c	
	float m_flAngRate; // 0x510	
	int32_t m_iDelay; // 0x514	
	GameTime_t m_startTime; // 0x518	
	bool m_bWaitForBeginSequence; // 0x51c	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	int32_t m_saved_effects; // 0x520	
	int32_t m_savedFlags; // 0x524	
	int32_t m_savedCollisionGroup; // 0x528	
	bool m_interruptable; // 0x52c	
	bool m_sequenceStarted; // 0x52d	
	bool m_bPrevAnimatedEveryTick; // 0x52e	
	bool m_bForcedAnimatedEveryTick; // 0x52f	
	bool m_bPositionRelativeToOtherEntity; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0531[0x3]; // 0x531
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x534	
	CHandle< CScriptedSequence > m_hNextCine; // 0x538	
	bool m_bThinking; // 0x53c	
	bool m_bInitiatedSelfDelete; // 0x53d	
	bool m_bIsTeleportingDueToMoveTo; // 0x53e	
	bool m_bAllowCustomInterruptConditions; // 0x53f	
	CHandle< CBaseEntity > m_hLastFoundEntity; // 0x540	
	CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x544	
	bool m_bDontCancelOtherSequences; // 0x548	
	bool m_bForceSynch; // 0x549	
	bool m_bTargetWasAsleep; // 0x54a	
	bool m_bPreventUpdateYawOnFinish; // 0x54b	
	bool m_bEnsureOnNavmeshOnFinish; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	ScriptedOnDeath_t m_onDeathBehavior; // 0x550	
	ScriptedConflictResponse_t m_ConflictResponse; // 0x554	
	CEntityIOOutput m_OnBeginSequence; // 0x558	
	CEntityIOOutput m_OnActionStartOrLoop; // 0x580	
	CEntityIOOutput m_OnEndSequence; // 0x5a8	
	CEntityIOOutput m_OnPostIdleEndSequence; // 0x5d0	
	CEntityIOOutput m_OnCancelSequence; // 0x5f8	
	CEntityIOOutput m_OnCancelFailedSequence; // 0x620	
	CEntityIOOutput m_OnScriptEvent[8]; // 0x648	
private:
	[[maybe_unused]] uint8_t __pad0788[0x8]; // 0x788
public:
	CTransform m_matOtherToMain; // 0x790	
	CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7b0	
	int32_t m_iPlayerDeathBehavior; // 0x7b4	
};

// Alignment: 8
// Size: 0x4f8
class CSoundOpvarSetEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CUtlSymbolLarge m_iszStackName; // 0x4b8	
	CUtlSymbolLarge m_iszOperatorName; // 0x4c0	
	CUtlSymbolLarge m_iszOpvarName; // 0x4c8	
	int32_t m_nOpvarType; // 0x4d0	
	int32_t m_nOpvarIndex; // 0x4d4	
	float m_flOpvarValue; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_OpvarValueString; // 0x4e0	
	bool m_bSetOnSpawn; // 0x4e8	
};

// Alignment: 6
// Size: 0x4d0
class CAISound : public CPointEntity
{
public:
	int32_t m_iSoundType; // 0x4b0	
	int32_t m_iSoundContext; // 0x4b4	
	int32_t m_iVolume; // 0x4b8	
	int32_t m_iSoundIndex; // 0x4bc	
	float m_flDuration; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszProxyEntityName; // 0x4c8	
};

// Alignment: 1
// Size: 0x4b8
class CSoundStackSave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszStackName; // 0x4b0	
};

// Alignment: 12
// Size: 0x558
class CSoundEventEntity : public CBaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x4b0	
	bool m_bToLocalPlayer; // 0x4b1	
	bool m_bStopOnNew; // 0x4b2	
	bool m_bSaveRestore; // 0x4b3	
	bool m_bSavedIsPlaying; // 0x4b4	
private:
	[[maybe_unused]] uint8_t __pad04b5[0x3]; // 0x4b5
public:
	float m_flSavedElapsedTime; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4c0	
	CUtlSymbolLarge m_iszAttachmentName; // 0x4c8	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4d0	
	CEntityIOOutput m_onSoundFinished; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad0520[0x20]; // 0x520
public:
	CUtlSymbolLarge m_iszSoundName; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0548[0x8]; // 0x548
public:
	CEntityHandle m_hSource; // 0x550	
};

// Alignment: 0
// Size: 0x558
class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x570
class CSoundEventAABBEntity : public CSoundEventEntity
{
public:
	Vector m_vMins; // 0x558	
	Vector m_vMaxs; // 0x564	
};

// Alignment: 2
// Size: 0x570
class CSoundEventOBBEntity : public CSoundEventEntity
{
public:
	Vector m_vMins; // 0x558	
	Vector m_vMaxs; // 0x564	
};

// Alignment: 6
// Size: 0x598
class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:
	CUtlSymbolLarge m_iszPathCorner; // 0x558	
	int32_t m_iCountMax; // 0x560	
	float m_flDistanceMax; // 0x564	
	float m_flDistMaxSqr; // 0x568	
	float m_flDotProductMax; // 0x56c	
	bool bPlaying; // 0x570	
};

// Alignment: 2
// Size: 0x4c8
class CSoundEventParameter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x8]; // 0x4b0
public:
	CUtlSymbolLarge m_iszParamName; // 0x4b8	
	float m_flFloatValue; // 0x4c0	
};

// Alignment: 0
// Size: 0x550
class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x548
class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x548
class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CNullEntity : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4b8
class CBaseDMStart : public CPointEntity
{
public:
	CUtlSymbolLarge m_Master; // 0x4b0	
};

// Alignment: 0
// Size: 0x4b0
class CInfoLandmark : public CPointEntity
{
public:
	// No members available
};

// Alignment: 14
// Size: 0x748
class CSun : public CBaseModelEntity
{
public:
	// MNetworkEnable
	Vector m_vDirection; // 0x700	
	// MNetworkEnable
	Color m_clrOverlay; // 0x70c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x710	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x718	
	// MNetworkEnable
	bool m_bOn; // 0x720	
	// MNetworkEnable
	bool m_bmaxColor; // 0x721	
private:
	[[maybe_unused]] uint8_t __pad0722[0x2]; // 0x722
public:
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flSize; // 0x724	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x728	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHazeScale; // 0x72c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x730	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x734	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x738	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x73c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x740	
};

// Alignment: 2
// Size: 0x4c8
class CTankTargetChange : public CPointEntity
{
public:
	CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4b0	
	CUtlSymbolLarge m_newTargetName; // 0x4c0	
};

// Alignment: 7
// Size: 0x4f0
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4b0	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4b4	
	int32_t m_soundPlaying; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x14]; // 0x4bc
public:
	CUtlSymbolLarge m_startSoundName; // 0x4d0	
	CUtlSymbolLarge m_engineSoundName; // 0x4d8	
	CUtlSymbolLarge m_movementSoundName; // 0x4e0	
	CUtlSymbolLarge m_targetEntityName; // 0x4e8	
};

// Alignment: 2
// Size: 0x4b8
class CHandleTest : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_Handle; // 0x4b0	
	// MNetworkEnable
	bool m_bSendHandle; // 0x4b4	
};

// Alignment: 0
// Size: 0x4b0
class CHandleDummy : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x708
class CPlatTrigger : public CBaseModelEntity
{
public:
	CHandle< CFuncPlat > m_pPlatform; // 0x700	
};

// Alignment: 0
// Size: 0x700
class CFuncTrainControls : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x710
class CTriggerVolume : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x700	
	CHandle< CBaseFilter > m_hFilter; // 0x708	
};

// Alignment: 0
// Size: 0x4b0
class CInfoTeleportDestination : public CPointEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4b8
class CAI_ChangeTarget : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszNewTarget; // 0x4b0	
};

// Alignment: 4
// Size: 0x4d0
class CAI_ChangeHintGroup : public CBaseEntity
{
public:
	int32_t m_iSearchType; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	CUtlSymbolLarge m_strSearchName; // 0x4b8	
	CUtlSymbolLarge m_strNewHintGroup; // 0x4c0	
	float m_flRadius; // 0x4c8	
};

// Alignment: 0
// Size: 0x4b0
class CLogicProximity : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CInfoSpawnGroupLandmark : public CPointEntity
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x5b0
class CInfoSpawnGroupLoadUnload : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4b0	
	CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4d8	
	CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x500	
	CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x528	
	CUtlSymbolLarge m_iszSpawnGroupName; // 0x550	
	CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x558	
	CUtlSymbolLarge m_iszLandmarkName; // 0x560	
	CUtlString m_sFixedSpawnGroupName; // 0x568	
	float m_flTimeoutInterval; // 0x570	
	bool m_bStreamingStarted; // 0x574	
	bool m_bUnloadingStarted; // 0x575	
};

// Alignment: 3
// Size: 0x5e0
class CPointPulse : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b0[0x118]; // 0x4b0
public:
	CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x5c8	
	CUtlSymbolLarge m_sNameFixupParent; // 0x5d0	
	CUtlSymbolLarge m_sNameFixupLocal; // 0x5d8	
};

// Alignment: 0
// Size: 0x5c8
class CPointScript : public CBaseEntity
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x710
class CFuncNavObstruction : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0700[0x8]; // 0x700
public:
	bool m_bDisabled; // 0x708	
};

// Alignment: 10
// Size: 0x548
class CAmbientGeneric : public CPointEntity
{
public:
	float m_radius; // 0x4b0	
	float m_flMaxRadius; // 0x4b4	
	soundlevel_t m_iSoundLevel; // 0x4b8	
	dynpitchvol_t m_dpv; // 0x4bc	
	bool m_fActive; // 0x520	
	bool m_fLooping; // 0x521	
private:
	[[maybe_unused]] uint8_t __pad0522[0x6]; // 0x522
public:
	CUtlSymbolLarge m_iszSound; // 0x528	
	CUtlSymbolLarge m_sSourceEntName; // 0x530	
	CHandle< CBaseEntity > m_hSoundSource; // 0x538	
	CEntityIndex m_nSoundSourceEntIndex; // 0x53c	
};

// Alignment: 2
// Size: 0x10
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8	
	Class_T classType; // 0xc	
};

// Alignment: 16
// Size: 0x780
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x700	
	float m_flMoveDistance; // 0x704	
	float m_flWait; // 0x708	
	float m_flLip; // 0x70c	
	bool m_bAlwaysFireBlockedOutputs; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	Vector m_vecPosition1; // 0x714	
	Vector m_vecPosition2; // 0x720	
	QAngle m_vecMoveAng; // 0x72c	
	QAngle m_vecAngle1; // 0x738	
	QAngle m_vecAngle2; // 0x744	
	float m_flHeight; // 0x750	
	CHandle< CBaseEntity > m_hActivator; // 0x754	
	Vector m_vecFinalDest; // 0x758	
	QAngle m_vecFinalAngle; // 0x764	
	int32_t m_movementType; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlSymbolLarge m_sMaster; // 0x778	
};

// Alignment: 24
// Size: 0x8c8
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x780	
	bool m_fStayPushed; // 0x78c	
	bool m_fRotating; // 0x78d	
private:
	[[maybe_unused]] uint8_t __pad078e[0x2]; // 0x78e
public:
	locksound_t m_ls; // 0x790	
	CUtlSymbolLarge m_sUseSound; // 0x7b0	
	CUtlSymbolLarge m_sLockedSound; // 0x7b8	
	CUtlSymbolLarge m_sUnlockedSound; // 0x7c0	
	bool m_bLocked; // 0x7c8	
	bool m_bDisabled; // 0x7c9	
private:
	[[maybe_unused]] uint8_t __pad07ca[0x2]; // 0x7ca
public:
	GameTime_t m_flUseLockedTime; // 0x7cc	
	bool m_bSolidBsp; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x7]; // 0x7d1
public:
	CEntityIOOutput m_OnDamaged; // 0x7d8	
	CEntityIOOutput m_OnPressed; // 0x800	
	CEntityIOOutput m_OnUseLocked; // 0x828	
	CEntityIOOutput m_OnIn; // 0x850	
	CEntityIOOutput m_OnOut; // 0x878	
	int32_t m_nState; // 0x8a0	
	CEntityHandle m_hConstraint; // 0x8a4	
	CEntityHandle m_hConstraintParent; // 0x8a8	
	bool m_bForceNpcExclude; // 0x8ac	
private:
	[[maybe_unused]] uint8_t __pad08ad[0x3]; // 0x8ad
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x8b0	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x8b8	
	// MNetworkEnable
	bool m_usable; // 0x8bc	
private:
	[[maybe_unused]] uint8_t __pad08bd[0x3]; // 0x8bd
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x8c0	
};

// Alignment: 0
// Size: 0x8c8
class CPhysicalButton : public CBaseButton
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8c8
class CRotButton : public CBaseButton
{
public:
	// No members available
};

// Alignment: 14
// Size: 0x9c8
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x8c8	
	CEntityIOOutput m_OnUnpressed; // 0x8f0	
	CEntityIOOutput m_OnFullyOpen; // 0x918	
	CEntityIOOutput m_OnFullyClosed; // 0x940	
	CEntityIOOutput m_OnReachedPosition; // 0x968	
	int32_t m_lastUsed; // 0x990	
	QAngle m_start; // 0x994	
	QAngle m_end; // 0x9a0	
	float m_IdealYaw; // 0x9ac	
	CUtlSymbolLarge m_sNoise; // 0x9b0	
	bool m_bUpdateTarget; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09b9[0x3]; // 0x9b9
public:
	int32_t m_direction; // 0x9bc	
	float m_returnSpeed; // 0x9c0	
	float m_flStartPosition; // 0x9c4	
};

// Alignment: 4
// Size: 0x4c8
class CRagdollMagnet : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_radius; // 0x4b4	
	float m_force; // 0x4b8	
	Vector m_axis; // 0x4bc	
};

// Alignment: 27
// Size: 0x988
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0780[0x10]; // 0x780
public:
	QAngle m_angMoveEntitySpace; // 0x790	
	Vector m_vecMoveDirParentSpace; // 0x79c	
	locksound_t m_ls; // 0x7a8	
	bool m_bForceClosed; // 0x7c8	
	bool m_bDoorGroup; // 0x7c9	
	bool m_bLocked; // 0x7ca	
	bool m_bIgnoreDebris; // 0x7cb	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7cc	
	float m_flBlockDamage; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x7d8	
	CUtlSymbolLarge m_NoiseArrived; // 0x7e0	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x7e8	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x7f0	
	CUtlSymbolLarge m_ChainTarget; // 0x7f8	
	CEntityIOOutput m_OnBlockedClosing; // 0x800	
	CEntityIOOutput m_OnBlockedOpening; // 0x828	
	CEntityIOOutput m_OnUnblockedClosing; // 0x850	
	CEntityIOOutput m_OnUnblockedOpening; // 0x878	
	CEntityIOOutput m_OnFullyClosed; // 0x8a0	
	CEntityIOOutput m_OnFullyOpen; // 0x8c8	
	CEntityIOOutput m_OnClose; // 0x8f0	
	CEntityIOOutput m_OnOpen; // 0x918	
	CEntityIOOutput m_OnLockedUse; // 0x940	
	bool m_bLoopMoveSound; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad0969[0x17]; // 0x969
public:
	bool m_bCreateNavObstacle; // 0x980	
	bool m_isChaining; // 0x981	
	// MNetworkEnable
	bool m_bIsUsable; // 0x982	
};

// Alignment: 0
// Size: 0x700
class CEntityBlocker : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 10
// Size: 0x730
class CEntityDissolve : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flFadeInStart; // 0x700	
	// MNetworkEnable
	float m_flFadeInLength; // 0x704	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x708	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x70c	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x710	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x714	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x718	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x71c	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x720	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x72c	
};

// Alignment: 30
// Size: 0x968
class CEnvProjectedTexture : public CModelPointEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetEntity; // 0x700	
	// MNetworkEnable
	bool m_bState; // 0x704	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x705	
private:
	[[maybe_unused]] uint8_t __pad0706[0x2]; // 0x706
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x708	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x70c	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x70d	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x70e	
	// MNetworkEnable
	bool m_bLightWorld; // 0x70f	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x714	
	// MNetworkEnable
	Color m_LightColor; // 0x718	
	// MNetworkEnable
	float m_flIntensity; // 0x71c	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x720	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x724	
	// MNetworkEnable
	bool m_bVolumetric; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad0729[0x3]; // 0x729
public:
	// MNetworkEnable
	float m_flNoiseStrength; // 0x72c	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x730	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x734	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x738	
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x73c	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x740	
	// MNetworkEnable
	float m_flAmbient; // 0x744	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x748	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x948	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x94c	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x950	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x954	
	// MNetworkEnable
	float m_flProjectionSize; // 0x958	
	// MNetworkEnable
	float m_flRotation; // 0x95c	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x960	
};

// Alignment: 9
// Size: 0x720
class CEnvDecal : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x700	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x708	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x70c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x710	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x714	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x718	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x719	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x71a	
private:
	[[maybe_unused]] uint8_t __pad071b[0x1]; // 0x71b
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x71c	
};

// Alignment: 6
// Size: 0x4f8
class CMessage : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4b0	
	float m_MessageVolume; // 0x4b8	
	int32_t m_MessageAttenuation; // 0x4bc	
	float m_Radius; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_sNoise; // 0x4c8	
	CEntityIOOutput m_OnShowMessage; // 0x4d0	
};

// Alignment: 17
// Size: 0x670
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4b4	
	int32_t m_nSoundMask; // 0x4b8	
	float m_flSensitivity; // 0x4bc	
	float m_flSmoothFactor; // 0x4c0	
	float m_flMaxRange; // 0x4c4	
	CUtlSymbolLarge m_iszSpeakerName; // 0x4c8	
	CHandle< CBaseEntity > m_hSpeaker; // 0x4d0	
	bool m_bAvoidFeedback; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	int32_t m_iSpeakerDSPPreset; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x4e0	
	CHandle< CBaseFilter > m_hListenFilter; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x4f0	
	CEntityIOOutput m_OnRoutedSound; // 0x518	
	CEntityIOOutput m_OnHeardSound; // 0x540	
	char m_szLastSound[256]; // 0x568	
	int32_t m_iLastRoutedFrame; // 0x668	
};

// Alignment: 21
// Size: 0x7c0
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0700[0x10]; // 0x700
public:
	Materials m_Material; // 0x710	
	CHandle< CBaseEntity > m_hBreaker; // 0x714	
	Explosions m_Explosion; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x720	
	float m_flPressureDelay; // 0x728	
	int32_t m_iMinHealthDmg; // 0x72c	
	CUtlSymbolLarge m_iszPropData; // 0x730	
	float m_impactEnergyScale; // 0x738	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x73c	
	CEntityIOOutput m_OnBreak; // 0x740	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x768	
	float m_flDmgModBullet; // 0x790	
	float m_flDmgModClub; // 0x794	
	float m_flDmgModExplosive; // 0x798	
	float m_flDmgModFire; // 0x79c	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x7a0	
	CUtlSymbolLarge m_iszBasePropData; // 0x7a8	
	int32_t m_iInteractions; // 0x7b0	
	PerformanceMode_t m_PerformanceMode; // 0x7b4	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7b8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x7bc	
};

// Alignment: 13
// Size: 0x830
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x780	
	QAngle m_angMoveEntitySpace; // 0x784	
	Vector m_vecMoveDirParentSpace; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad079c[0x4]; // 0x79c
public:
	CUtlSymbolLarge m_soundStart; // 0x7a0	
	CUtlSymbolLarge m_soundStop; // 0x7a8	
	CUtlSymbolLarge m_currentSound; // 0x7b0	
	float m_flBlockDamage; // 0x7b8	
	float m_flStartPosition; // 0x7bc	
	float m_flMoveDistance; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c4[0xc]; // 0x7c4
public:
	CEntityIOOutput m_OnFullyOpen; // 0x7d0	
	CEntityIOOutput m_OnFullyClosed; // 0x7f8	
	bool m_bCreateMovableNavMesh; // 0x820	
	bool m_bCreateNavObstacle; // 0x821	
};

// Alignment: 14
// Size: 0x768
class CFuncRotating : public CBaseModelEntity
{
public:
	QAngle m_vecMoveAng; // 0x700	
	float m_flFanFriction; // 0x70c	
	float m_flAttenuation; // 0x710	
	float m_flVolume; // 0x714	
	float m_flTargetSpeed; // 0x718	
	float m_flMaxSpeed; // 0x71c	
	float m_flBlockDamage; // 0x720	
	float m_flTimeScale; // 0x724	
	CUtlSymbolLarge m_NoiseRunning; // 0x728	
	bool m_bReversed; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0731[0xb]; // 0x731
public:
	QAngle m_angStart; // 0x73c	
	bool m_bStopAtStartPos; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x3]; // 0x749
public:
	Vector m_vecClientOrigin; // 0x74c	
	QAngle m_vecClientAngles; // 0x758	
};

// Alignment: 1
// Size: 0x708
class CItemGenericTriggerHelper : public CBaseModelEntity
{
public:
	CHandle< CItemGeneric > m_hParentItem; // 0x700	
};

// Alignment: 1
// Size: 0x708
class CRuleEntity : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszMaster; // 0x700	
};

// Alignment: 1
// Size: 0x710
class CRulePointEntity : public CRuleEntity
{
public:
	int32_t m_Score; // 0x708	
};

// Alignment: 2
// Size: 0x890
class CGamePlayerEquip : public CRulePointEntity
{
public:
	CUtlSymbolLarge m_weaponNames[32]; // 0x710	
	int32_t m_weaponCount[32]; // 0x810	
};

// Alignment: 1
// Size: 0x708
class CMarkupVolume : public CBaseModelEntity
{
public:
	bool m_bEnabled; // 0x700	
};

// Alignment: 5
// Size: 0x740
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0708[0x30]; // 0x708
public:
	bool m_bIsGroup; // 0x738	
	bool m_bGroupByPrefab; // 0x739	
	bool m_bGroupByVolume; // 0x73a	
	bool m_bGroupOtherGroups; // 0x73b	
	bool m_bIsInGroup; // 0x73c	
};

// Alignment: 3
// Size: 0x758
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0741[0x3]; // 0x741
public:
	Vector m_vRefPos; // 0x744	
	float m_flRefDot; // 0x750	
};

// Alignment: 6
// Size: 0x720
class CFuncBrush : public CBaseModelEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x700	
	int32_t m_iDisabled; // 0x704	
	bool m_bSolidBsp; // 0x708	
private:
	[[maybe_unused]] uint8_t __pad0709[0x7]; // 0x709
public:
	CUtlSymbolLarge m_iszExcludedClass; // 0x710	
	bool m_bInvertExclusion; // 0x718	
	bool m_bScriptedMovement; // 0x719	
};

// Alignment: 9
// Size: 0x508
class CPathTrack : public CPointEntity
{
public:
	CPathTrack* m_pnext; // 0x4b0	
	CPathTrack* m_pprevious; // 0x4b8	
	CPathTrack* m_paltpath; // 0x4c0	
	float m_flRadius; // 0x4c8	
	float m_length; // 0x4cc	
	CUtlSymbolLarge m_altName; // 0x4d0	
	int32_t m_nIterVal; // 0x4d8	
	TrackOrientationType_t m_eOrientationType; // 0x4dc	
	CEntityIOOutput m_OnPass; // 0x4e0	
	
	// Static fields:
	static int32_t &Get_s_nCurrIterVal(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bIsIterating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[1]->m_instance);};
};

// Alignment: 15
// Size: 0x8d0
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x7c0	
	float m_massScale; // 0x7c4	
	int32_t m_damageToEnableMotion; // 0x7c8	
	float m_flForceToEnableMotion; // 0x7cc	
	QAngle m_angPreferredCarryAngles; // 0x7d0	
	bool m_bNotSolidToWorld; // 0x7dc	
	bool m_bEnableUseOutput; // 0x7dd	
private:
	[[maybe_unused]] uint8_t __pad07de[0x2]; // 0x7de
public:
	int32_t m_iExploitableByPlayer; // 0x7e0	
	float m_flTouchOutputPerEntityDelay; // 0x7e4	
	CEntityIOOutput m_OnDamaged; // 0x7e8	
	CEntityIOOutput m_OnAwakened; // 0x810	
	CEntityIOOutput m_OnMotionEnabled; // 0x838	
	CEntityIOOutput m_OnPlayerUse; // 0x860	
	CEntityIOOutput m_OnStartTouch; // 0x888	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x8b0	
};

// Alignment: 9
// Size: 0x500
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_flMagnitude; // 0x4b4	
	float m_flDamage; // 0x4b8	
	float m_radius; // 0x4bc	
	CUtlSymbolLarge m_targetEntityName; // 0x4c0	
	float m_flInnerRadius; // 0x4c8	
	float m_flPushScale; // 0x4cc	
	bool m_bConvertToDebrisWhenPossible; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x7]; // 0x4d1
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x4d8	
};

// Alignment: 3
// Size: 0x4c0
class CPhysImpact : public CPointEntity
{
public:
	float m_damage; // 0x4b0	
	float m_distance; // 0x4b4	
	CUtlSymbolLarge m_directionEntityName; // 0x4b8	
};

// Alignment: 21
// Size: 0x758
class CRopeKeyframe : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0700[0x8]; // 0x700
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x708	
private:
	[[maybe_unused]] uint8_t __pad070a[0x6]; // 0x70a
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x710	
	// MNetworkEnable
	int16_t m_Slack; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071a[0x2]; // 0x71a
public:
	// MNetworkEnable
	float m_Width; // 0x71c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x720	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x724	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x725	
private:
	[[maybe_unused]] uint8_t __pad0726[0x2]; // 0x726
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x728	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x730	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x738	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x739	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x73a	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x73c	
	bool m_bCreatedFromMapFile; // 0x73d	
private:
	[[maybe_unused]] uint8_t __pad073e[0x2]; // 0x73e
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x740	
	bool m_bStartPointValid; // 0x744	
	bool m_bEndPointValid; // 0x745	
private:
	[[maybe_unused]] uint8_t __pad0746[0x2]; // 0x746
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x748	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x74c	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x750	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x751	
};

// Alignment: 4
// Size: 0x1ec0
class CSoundEnt : public CPointEntity
{
public:
	int32_t m_iFreeSound; // 0x4b0	
	int32_t m_iActiveSound; // 0x4b4	
	int32_t m_cLastActiveSounds; // 0x4b8	
	CSound m_SoundPool[128]; // 0x4bc	
};

// Alignment: 4
// Size: 0x720
class CSpotlightEnd : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x700	
	// MNetworkEnable
	float m_Radius; // 0x704	
	Vector m_vSpotlightDir; // 0x708	
	Vector m_vSpotlightOrg; // 0x714	
};

// Alignment: 38
// Size: 0x850
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x700	
	float m_length; // 0x704	
	Vector m_vPosPrev; // 0x708	
	QAngle m_angPrev; // 0x714	
	Vector m_controlMins; // 0x720	
	Vector m_controlMaxs; // 0x72c	
	Vector m_lastBlockPos; // 0x738	
	int32_t m_lastBlockTick; // 0x744	
	float m_flVolume; // 0x748	
	float m_flBank; // 0x74c	
	float m_oldSpeed; // 0x750	
	float m_flBlockDamage; // 0x754	
	float m_height; // 0x758	
	float m_maxSpeed; // 0x75c	
	float m_dir; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x768	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x770	
	CUtlSymbolLarge m_iszSoundStart; // 0x778	
	CUtlSymbolLarge m_iszSoundStop; // 0x780	
	CUtlSymbolLarge m_strPathTarget; // 0x788	
	float m_flMoveSoundMinDuration; // 0x790	
	float m_flMoveSoundMaxDuration; // 0x794	
	GameTime_t m_flNextMoveSoundTime; // 0x798	
	float m_flMoveSoundMinPitch; // 0x79c	
	float m_flMoveSoundMaxPitch; // 0x7a0	
	TrainOrientationType_t m_eOrientationType; // 0x7a4	
	TrainVelocityType_t m_eVelocityType; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07ac[0xc]; // 0x7ac
public:
	CEntityIOOutput m_OnStart; // 0x7b8	
	CEntityIOOutput m_OnNext; // 0x7e0	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x808	
	bool m_bManualSpeedChanges; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
public:
	float m_flDesiredSpeed; // 0x834	
	GameTime_t m_flSpeedChangeTime; // 0x838	
	float m_flAccelSpeed; // 0x83c	
	float m_flDecelSpeed; // 0x840	
	bool m_bAccelToSpeed; // 0x844	
private:
	[[maybe_unused]] uint8_t __pad0845[0x3]; // 0x845
public:
	float m_flTimeScale; // 0x848	
	GameTime_t m_flNextMPSoundTime; // 0x84c	
};

// Alignment: 11
// Size: 0x8a8
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x780	
private:
	[[maybe_unused]] uint8_t __pad0781[0x7]; // 0x781
public:
	CUtlSymbolLarge m_iFilterName; // 0x788	
	CHandle< CBaseFilter > m_hFilter; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0794[0x4]; // 0x794
public:
	CEntityIOOutput m_OnStartTouch; // 0x798	
	CEntityIOOutput m_OnStartTouchAll; // 0x7c0	
	CEntityIOOutput m_OnEndTouch; // 0x7e8	
	CEntityIOOutput m_OnEndTouchAll; // 0x810	
	CEntityIOOutput m_OnTouching; // 0x838	
	CEntityIOOutput m_OnNotTouching; // 0x860	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x888	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x8a0	
};

// Alignment: 1
// Size: 0x8d0
class CTriggerMultiple : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTrigger; // 0x8a8	
};

// Alignment: 15
// Size: 0xc10
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x8a8	
	Vector m_flPosition; // 0x8c0	
	float m_flCenterSize; // 0x8cc	
	float m_flMinVal; // 0x8d0	
	float m_flMaxVal; // 0x8d4	
	float m_flWait; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08dc[0x4]; // 0x8dc
public:
	CUtlSymbolLarge m_opvarName; // 0x8e0	
	CUtlSymbolLarge m_stackName; // 0x8e8	
	CUtlSymbolLarge m_operatorName; // 0x8f0	
	bool m_bVolIs2D; // 0x8f8	
	char m_opvarNameChar[256]; // 0x8f9	
	char m_stackNameChar[256]; // 0x9f9	
	char m_operatorNameChar[256]; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0bf9[0x3]; // 0xbf9
public:
	Vector m_VecNormPos; // 0xbfc	
	float m_flNormCenterSize; // 0xc08	
};

// Alignment: 14
// Size: 0x948
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x8a8	
	float m_flDamage; // 0x8ac	
	float m_flDamageCap; // 0x8b0	
	GameTime_t m_flLastDmgTime; // 0x8b4	
	float m_flForgivenessDelay; // 0x8b8	
	int32_t m_bitsDamageInflict; // 0x8bc	
	int32_t m_damageModel; // 0x8c0	
	bool m_bNoDmgForce; // 0x8c4	
private:
	[[maybe_unused]] uint8_t __pad08c5[0x3]; // 0x8c5
public:
	Vector m_vDamageForce; // 0x8c8	
	bool m_thinkAlways; // 0x8d4	
private:
	[[maybe_unused]] uint8_t __pad08d5[0x3]; // 0x8d5
public:
	float m_hurtThinkPeriod; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08dc[0x4]; // 0x8dc
public:
	CEntityIOOutput m_OnHurt; // 0x8e0	
	CEntityIOOutput m_OnHurtPlayer; // 0x908	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x930	
};

// Alignment: 0
// Size: 0x948
class CTriggerHurtGhost : public CTriggerHurt
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8b0
class CTriggerCallback : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 12
// Size: 0x948
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x8a8	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x8b0	
private:
	[[maybe_unused]] uint8_t __pad08b4[0x4]; // 0x8b4
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8b8	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x3]; // 0x8c1
public:
	float m_flLerpDuration; // 0x8c4	
	bool m_bLerpRestoreMoveType; // 0x8c8	
	bool m_bSingleLerpObject; // 0x8c9	
private:
	[[maybe_unused]] uint8_t __pad08ca[0x6]; // 0x8ca
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x8d0	
	CUtlSymbolLarge m_iszLerpEffect; // 0x8e8	
	CUtlSymbolLarge m_iszLerpSound; // 0x8f0	
	CEntityIOOutput m_OnLerpStarted; // 0x8f8	
	CEntityIOOutput m_OnLerpFinished; // 0x920	
};

// Alignment: 7
// Size: 0x8e8
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x8a8	
	CUtlString m_sLandmarkName; // 0x8b0	
	CEntityIOOutput m_OnChangeLevel; // 0x8b8	
	bool m_bTouched; // 0x8e0	
	bool m_bNoTouch; // 0x8e1	
	bool m_bNewChapter; // 0x8e2	
	bool m_bOnChangeLevelFired; // 0x8e3	
};

// Alignment: 3
// Size: 0x8b8
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x8a8	
	bool m_bUseLandmarkAngles; // 0x8b0	
	bool m_bMirrorPlayer; // 0x8b1	
};

// Alignment: 11
// Size: 0x8f8
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x8a8	
	Vector m_vFanEnd; // 0x8b4	
	Vector m_vNoise; // 0x8c0	
	float m_flForce; // 0x8cc	
	float m_flPlayerForce; // 0x8d0	
	float m_flRampTime; // 0x8d4	
	bool m_bFalloff; // 0x8d8	
	bool m_bPushPlayer; // 0x8d9	
	bool m_bRampDown; // 0x8da	
	bool m_bAddNoise; // 0x8db	
private:
	[[maybe_unused]] uint8_t __pad08dc[0x4]; // 0x8dc
public:
	CountdownTimer m_RampTimer; // 0x8e0	
};

// Alignment: 0
// Size: 0x4b0
class CNavWalkable : public CPointEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x710
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
public:
	int32_t m_nBlockedTeamNumber; // 0x704	
};

// Alignment: 13
// Size: 0x558
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4b0	
	Vector m_vLocatorOffset; // 0x4b4	
	QAngle m_qLocatorAnglesOffset; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_strMovementForward; // 0x4d0	
	CUtlSymbolLarge m_strMovementReverse; // 0x4d8	
	int32_t m_nNavLinkIdForward; // 0x4e0	
	int32_t m_nNavLinkIdReverse; // 0x4e4	
	bool m_bEnabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	CUtlSymbolLarge m_strFilterName; // 0x4f0	
	CHandle< CBaseFilter > m_hFilter; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CEntityIOOutput m_OnNavLinkStart; // 0x500	
	CEntityIOOutput m_OnNavLinkFinish; // 0x528	
	bool m_bIsTerminus; // 0x550	
};

// Alignment: 1
// Size: 0x4b8
class CNavSpaceInfo : public CPointEntity
{
public:
	bool m_bCreateFlightSpace; // 0x4b0	
};

// Alignment: 24
// Size: 0x7a0
class CBeam : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags
	float m_flFrameRate; // 0x700	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x704	
	GameTime_t m_flFireTime; // 0x708	
	float m_flDamage; // 0x70c	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x7]; // 0x711
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x718	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x720	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x728	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x72c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachEntity[10]; // 0x730	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0762[0x2]; // 0x762
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags
	float m_fWidth; // 0x764	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags
	float m_fEndWidth; // 0x768	
	// MNetworkEnable
	float m_fFadeLength; // 0x76c	
	// MNetworkEnable
	float m_fHaloScale; // 0x770	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_fAmplitude; // 0x774	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_fStartFrame; // 0x778	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x77c	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	float m_flFrame; // 0x780	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x784	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEndPos; // 0x78c	
	CHandle< CBaseEntity > m_hEndEntity; // 0x798	
	int32_t m_nDissolveType; // 0x79c	
};

// Alignment: 12
// Size: 0x7b0
class CFuncLadder : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderDir; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad070c[0x4]; // 0x70c
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x710	
	Vector m_vecLocalTop; // 0x728	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionTop; // 0x734	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionBottom; // 0x740	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x74c	
	bool m_bDisabled; // 0x750	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x751	
	bool m_bHasSlack; // 0x752	
private:
	[[maybe_unused]] uint8_t __pad0753[0x5]; // 0x753
public:
	CUtlSymbolLarge m_surfacePropName; // 0x758	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x760	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x788	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
};

// Alignment: 32
// Size: 0x858
class CFuncShatterglass : public CBaseModelEntity
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x700	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x708	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFace; // 0x710	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeCaps; // 0x718	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFins; // 0x720	
	matrix3x4_t m_matPanelTransform; // 0x728	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x758	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x788	
	Vector2D m_PanelSize; // 0x7a0	
	Vector m_vecPanelNormalWs; // 0x7a8	
	int32_t m_nNumShardsEverCreated; // 0x7b4	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x7b8	
	GameTime_t m_flLastCleanupTime; // 0x7bc	
	GameTime_t m_flInitAtTime; // 0x7c0	
	float m_flGlassThickness; // 0x7c4	
	float m_flSpawnInvulnerability; // 0x7c8	
	bool m_bBreakSilent; // 0x7cc	
	bool m_bBreakShardless; // 0x7cd	
	bool m_bBroken; // 0x7ce	
	bool m_bHasRateLimitedShards; // 0x7cf	
	bool m_bGlassNavIgnore; // 0x7d0	
	bool m_bGlassInFrame; // 0x7d1	
	bool m_bStartBroken; // 0x7d2	
	uint8_t m_iInitialDamageType; // 0x7d3	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7d8	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7e0	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7e8	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x7f0	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x7f8	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x810	
	CEntityIOOutput m_OnBroken; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0850[0x1]; // 0x850
public:
	uint8_t m_iSurfaceType; // 0x851	
};

// Alignment: 7
// Size: 0x128
class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28	
	float m_flInnerDistance; // 0x108	
	ParticleAttachment_t m_nAttachType; // 0x10c	
	bool m_bBatchSameVolumeType; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0111[0x3]; // 0x111
public:
	int32_t m_nRTEnvCP; // 0x114	
	int32_t m_nRTEnvCPComponent; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CUtlString m_szModifier; // 0x120	
};

// Alignment: 23
// Size: 0x770
class CSprite : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x700	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachedToEntity; // 0x708	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x70c	
private:
	[[maybe_unused]] uint8_t __pad070d[0x3]; // 0x70d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0x710	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_flFrame; // 0x714	
	GameTime_t m_flDieTime; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0xc]; // 0x71c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x728	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x72c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x730	
	// MNetworkEnable
	float m_flScaleDuration; // 0x734	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad0739[0x3]; // 0x739
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0x73c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x740	
	GameTime_t m_flLastTime; // 0x744	
	float m_flMaxFrame; // 0x748	
	float m_flStartScale; // 0x74c	
	float m_flDestScale; // 0x750	
	GameTime_t m_flScaleTimeStart; // 0x754	
	int32_t m_nStartBrightness; // 0x758	
	int32_t m_nDestBrightness; // 0x75c	
	GameTime_t m_flBrightnessTimeStart; // 0x760	
	int32_t m_nSpriteWidth; // 0x764	
	int32_t m_nSpriteHeight; // 0x768	
};

// Alignment: 0
// Size: 0x770
class CSpriteOriented : public CSprite
{
public:
	// No members available
};

// Alignment: 14
// Size: 0x8b0
class CBaseClientUIEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x7]; // 0x701
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x708	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x710	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x718	
	CEntityIOOutput m_CustomOutput0; // 0x720	
	CEntityIOOutput m_CustomOutput1; // 0x748	
	CEntityIOOutput m_CustomOutput2; // 0x770	
	CEntityIOOutput m_CustomOutput3; // 0x798	
	CEntityIOOutput m_CustomOutput4; // 0x7c0	
	CEntityIOOutput m_CustomOutput5; // 0x7e8	
	CEntityIOOutput m_CustomOutput6; // 0x810	
	CEntityIOOutput m_CustomOutput7; // 0x838	
	CEntityIOOutput m_CustomOutput8; // 0x860	
	CEntityIOOutput m_CustomOutput9; // 0x888	
};

// Alignment: 2
// Size: 0x8b8
class CPointClientUIDialog : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< CBaseEntity > m_hActivator; // 0x8b0	
	bool m_bStartEnabled; // 0x8b4	
};

// Alignment: 23
// Size: 0x908
class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x8b0	
	// MNetworkEnable
	bool m_bLit; // 0x8b1	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x8b2	
private:
	[[maybe_unused]] uint8_t __pad08b3[0x1]; // 0x8b3
public:
	// MNetworkEnable
	float m_flWidth; // 0x8b4	
	// MNetworkEnable
	float m_flHeight; // 0x8b8	
	// MNetworkEnable
	float m_flDPI; // 0x8bc	
	// MNetworkEnable
	float m_flInteractDistance; // 0x8c0	
	// MNetworkEnable
	float m_flDepthOffset; // 0x8c4	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8c8	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8cc	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8d0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8d4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08d9[0x7]; // 0x8d9
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8e0	
	// MNetworkEnable
	bool m_bOpaque; // 0x8f8	
	// MNetworkEnable
	bool m_bNoDepth; // 0x8f9	
	// MNetworkEnable
	bool m_bRenderBackface; // 0x8fa	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x8fb	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x8fc	
	// MNetworkEnable
	bool m_bGrabbable; // 0x8fd	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x8fe	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x8ff	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x900	
};

// Alignment: 1
// Size: 0xb08
class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x908	
};

// Alignment: 10
// Size: 0x528
class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x4b4	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x4c0	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x4c8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4d0	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x4f0	
	CUtlSymbolLarge m_szTargetsName; // 0x508	
	CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x510	
};

// Alignment: 1
// Size: 0x2c8
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	CEconItemView m_Item; // 0x50	
};

// Alignment: 0
// Size: 0x4c0
class CInfoPlayerTerrorist : public SpawnPoint
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4c0
class CInfoPlayerCounterterrorist : public SpawnPoint
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4c0
class CInfoDeathmatchSpawn : public SpawnPoint
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4f8
class CInfoEnemyTerroristSpawn : public SpawnPointCoopEnemy
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x4b8
class CPointGiveAmmo : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_pActivator; // 0x4b0	
};

// Alignment: 9
// Size: 0x938
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x8a8	
	CEntityIOOutput m_OnBombPlanted; // 0x8d0	
	CEntityIOOutput m_OnBombDefused; // 0x8f8	
	bool m_bIsBombSiteB; // 0x920	
	bool m_bIsHeistBombTarget; // 0x921	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x922	
private:
	[[maybe_unused]] uint8_t __pad0923[0x5]; // 0x923
public:
	CUtlSymbolLarge m_szMountTarget; // 0x928	
	CHandle< CBaseEntity > m_hInstructorHint; // 0x930	
	int32_t m_nBombSiteDesignation; // 0x934	
};

// Alignment: 0
// Size: 0x4b0
class CInfoInstructorHintBombTargetA : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CInfoInstructorHintBombTargetB : public CPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8a8
class CHostageRescueZoneShim : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8b8
class CHostageRescueZone : public CHostageRescueZoneShim
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x4b0
class CInfoInstructorHintHostageRescueZone : public CPointEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8d0
class CTriggerBuoyancy : public CBaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x8a8	
	// MNetworkEnable
	float m_flFluidDensity; // 0x8c8	
};

// Alignment: 1
// Size: 0x720
class CFuncWater : public CBaseModelEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x700	
};

// Alignment: 0
// Size: 0x770
class CCSSprite : public CSprite
{
public:
	// No members available
};

// Alignment: 70
// Size: -0x6f8
class CCSPlayerController : public CBasePlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0690[0x10]; // 0x690
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6a0	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6a8	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6b0	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x6b8	
	// MNetworkEnable
	uint32_t m_iPing; // 0x6c0	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x6c4	
private:
	[[maybe_unused]] uint8_t __pad06c5[0x3]; // 0x6c5
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x6c8	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x6d0	
private:
	[[maybe_unused]] uint8_t __pad06d1[0x3]; // 0x6d1
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x6d4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x6d8	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x6dc	
	bool m_bAttemptedToGetColor; // 0x6dd	
private:
	[[maybe_unused]] uint8_t __pad06de[0x2]; // 0x6de
public:
	int32_t m_iTeammatePreferredColor; // 0x6e0	
	bool m_bTeamChanged; // 0x6e4	
	bool m_bInSwitchTeam; // 0x6e5	
	bool m_bHasSeenJoinGame; // 0x6e6	
	bool m_bJustBecameSpectator; // 0x6e7	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x6e8	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x6e9	
private:
	[[maybe_unused]] uint8_t __pad06ea[0x6]; // 0x6ea
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x6f0	
	char m_szClanName[32]; // 0x6f8	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x720	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x728	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x730	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x734	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad0739[0x3]; // 0x739
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x73c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x740	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x744	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x748	
	// MNetworkEnable
	uint16_t m_unActiveQuestId; // 0x74c	
private:
	[[maybe_unused]] uint8_t __pad074e[0x2]; // 0x74e
public:
	// MNetworkEnable
	QuestProgress::Reason m_nQuestProgressReason; // 0x750	
	// MNetworkEnable
	uint32_t m_unPlayerTvControlFlags; // 0x754	
private:
	[[maybe_unused]] uint8_t __pad0758[0x68]; // 0x758
public:
	int32_t m_iDraftIndex; // 0x7c0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7c4	
	uint32_t m_uiAbandonRecordedReason; // 0x7c8	
	bool m_bEverFullyConnected; // 0x7cc	
	bool m_bAbandonAllowsSurrender; // 0x7cd	
	bool m_bAbandonOffersInstantSurrender; // 0x7ce	
	bool m_bDisconnection1MinWarningPrinted; // 0x7cf	
	bool m_bScoreReported; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	int32_t m_nDisconnectionTick; // 0x7d4	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x8]; // 0x7d8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7e0	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7e1	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7e2	
private:
	[[maybe_unused]] uint8_t __pad07e3[0x1]; // 0x7e3
public:
	int32_t m_nBotsControlledThisRound; // 0x7e4	
	// MNetworkEnable
	bool m_bCanControlObservedBot; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07e9[0x3]; // 0x7e9
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x7ec	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x7f0	
	int32_t m_DesiredObserverMode; // 0x7f4	
	CEntityHandle m_hDesiredObserverTarget; // 0x7f8	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x7fc	
private:
	[[maybe_unused]] uint8_t __pad07fd[0x3]; // 0x7fd
public:
	// MNetworkEnable
	uint32_t m_iPawnHealth; // 0x800	
	// MNetworkEnable
	int32_t m_iPawnArmor; // 0x804	
	// MNetworkEnable
	bool m_bPawnHasDefuser; // 0x808	
	// MNetworkEnable
	bool m_bPawnHasHelmet; // 0x809	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x80a	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x80c	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x810	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x814	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x818	
	// MNetworkEnable
	int32_t m_iScore; // 0x81c	
	int32_t m_iRoundScore; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x828	
	// MNetworkEnable
	int32_t m_iMVPs; // 0x840	
	int32_t m_nUpdateCounter; // 0x844	
private:
	[[maybe_unused]] uint8_t __pad0848[0xf0a0]; // 0x848
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf8e8	
private:
	[[maybe_unused]] uint8_t __padf8f8[0x8]; // 0xf8f8
public:
	bool m_bShowHints; // 0xf900	
private:
	[[maybe_unused]] uint8_t __padf901[0x3]; // 0xf901
public:
	int32_t m_iNextTimeCheck; // 0xf904	
};

// Alignment: 2
// Size: 0x8b8
class CFootstepControl : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0x8a8	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0x8b0	
};

// Alignment: 90
// Size: 0xda8
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x240	
	CSWeaponCategory m_WeaponCategory; // 0x244	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x248	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x328	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x408	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x4e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x5c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x6a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0x948	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xa28	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xb08	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xbe8	
	int32_t m_GearSlotPosition; // 0xbec	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0x4]; // 0xbf4
public:
	CUtlString m_sWrongTeamMsg; // 0xbf8	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xc00	
	int32_t m_nKillAward; // 0xc04	
	int32_t m_nPrimaryReserveAmmoMax; // 0xc08	
	int32_t m_nSecondaryReserveAmmoMax; // 0xc0c	
	bool m_bMeleeWeapon; // 0xc10	
	bool m_bHasBurstMode; // 0xc11	
	bool m_bIsRevolver; // 0xc12	
	bool m_bCannotShootUnderwater; // 0xc13	
private:
	[[maybe_unused]] uint8_t __pad0c14[0x4]; // 0xc14
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CUtlString m_szName; // 0xc18	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xc20	
	CSWeaponSilencerType m_eSilencerType; // 0xc28	
	int32_t m_nCrosshairMinDistance; // 0xc2c	
	int32_t m_nCrosshairDeltaDistance; // 0xc30	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xc34	
	CFiringModeFloat m_flMaxSpeed; // 0xc3c	
	CFiringModeFloat m_flSpread; // 0xc44	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xc4c	
	CFiringModeFloat m_flInaccuracyStand; // 0xc54	
	CFiringModeFloat m_flInaccuracyJump; // 0xc5c	
	CFiringModeFloat m_flInaccuracyLand; // 0xc64	
	CFiringModeFloat m_flInaccuracyLadder; // 0xc6c	
	CFiringModeFloat m_flInaccuracyFire; // 0xc74	
	CFiringModeFloat m_flInaccuracyMove; // 0xc7c	
	CFiringModeFloat m_flRecoilAngle; // 0xc84	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xc8c	
	CFiringModeFloat m_flRecoilMagnitude; // 0xc94	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xc9c	
	CFiringModeInt m_nTracerFrequency; // 0xca4	
	float m_flInaccuracyJumpInitial; // 0xcac	
	float m_flInaccuracyJumpApex; // 0xcb0	
	float m_flInaccuracyReload; // 0xcb4	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xcb8	
	int32_t m_nSpreadSeed; // 0xcbc	
	float m_flTimeToIdleAfterFire; // 0xcc0	
	float m_flIdleInterval; // 0xcc4	
	float m_flAttackMovespeedFactor; // 0xcc8	
	float m_flHeatPerShot; // 0xccc	
	float m_flInaccuracyPitchShift; // 0xcd0	
	float m_flInaccuracyAltSoundThreshold; // 0xcd4	
	float m_flBotAudibleRange; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cdc[0x4]; // 0xcdc
public:
	CUtlString m_szUseRadioSubtitle; // 0xce0	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xce8	
	bool m_bHideViewModelWhenZoomed; // 0xce9	
private:
	[[maybe_unused]] uint8_t __pad0cea[0x2]; // 0xcea
public:
	int32_t m_nZoomLevels; // 0xcec	
	int32_t m_nZoomFOV1; // 0xcf0	
	int32_t m_nZoomFOV2; // 0xcf4	
	float m_flZoomTime0; // 0xcf8	
	float m_flZoomTime1; // 0xcfc	
	float m_flZoomTime2; // 0xd00	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xd04	
	float m_flIronSightPutDownSpeed; // 0xd08	
	float m_flIronSightFOV; // 0xd0c	
	float m_flIronSightPivotForward; // 0xd10	
	float m_flIronSightLooseness; // 0xd14	
	QAngle m_angPivotAngle; // 0xd18	
	Vector m_vecIronSightEyePos; // 0xd24	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xd30	
	float m_flHeadshotMultiplier; // 0xd34	
	float m_flArmorRatio; // 0xd38	
	float m_flPenetration; // 0xd3c	
	float m_flRange; // 0xd40	
	float m_flRangeModifier; // 0xd44	
	float m_flFlinchVelocityModifierLarge; // 0xd48	
	float m_flFlinchVelocityModifierSmall; // 0xd4c	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xd50	
	float m_flRecoveryTimeStand; // 0xd54	
	float m_flRecoveryTimeCrouchFinal; // 0xd58	
	float m_flRecoveryTimeStandFinal; // 0xd5c	
	int32_t m_nRecoveryTransitionStartBullet; // 0xd60	
	int32_t m_nRecoveryTransitionEndBullet; // 0xd64	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xd68	
	Vector m_vSmokeColor; // 0xd6c	
	CUtlString m_szAnimClass; // 0xd78	
};

// Alignment: 0
// Size: 0x8a8
class CTriggerTripWire : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x4c0
class CPointGamestatsCounter : public CPointEntity
{
public:
	CUtlSymbolLarge m_strStatisticName; // 0x4b0	
	bool m_bDisabled; // 0x4b8	
};

// Alignment: 1
// Size: 0x4b8
class CEnvHudHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4b0	
};

// Alignment: 1
// Size: 0x8b0
class CBuyZone : public CBaseTrigger
{
public:
	int32_t m_LegacyTeamNum; // 0x8a8	
};

// Alignment: 9
// Size: 0x750
class CFuncConveyor : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_szConveyorModels; // 0x700	
	float m_flTransitionDurationSeconds; // 0x708	
	QAngle m_angMoveEntitySpace; // 0x70c	
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0x718	
	// MNetworkEnable
	float m_flTargetSpeed; // 0x724	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0x728	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0x72c	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // 0x738	
};

// Alignment: 0
// Size: 0x8a8
class CTriggerBombReset : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x710
class CCSPlace : public CServerOnlyModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0700[0x8]; // 0x700
public:
	CUtlSymbolLarge m_name; // 0x708	
};

// Alignment: 15
// Size: 0x7d8
class CPlayerSprayDecal : public CModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0x700	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0x704	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0x708	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0x70c	
	// MNetworkEnable
	Vector m_vecEndPos; // 0x710	
	// MNetworkEnable
	Vector m_vecStart; // 0x71c	
	// MNetworkEnable
	Vector m_vecLeft; // 0x728	
	// MNetworkEnable
	Vector m_vecNormal; // 0x734	
	// MNetworkEnable
	int32_t m_nPlayer; // 0x740	
	// MNetworkEnable
	int32_t m_nEntity; // 0x744	
	// MNetworkEnable
	int32_t m_nHitbox; // 0x748	
	// MNetworkEnable
	float m_flCreationTime; // 0x74c	
	// MNetworkEnable
	int32_t m_nTintID; // 0x750	
	// MNetworkEnable
	uint8_t m_nVersion; // 0x754	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0x755	
	
	// Static fields:
	static CUtlVector< CPlayerSprayDecal* > &Get_s_arrFEPlayerDecals(){return *reinterpret_cast<CUtlVector< CPlayerSprayDecal* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPlayerSprayDecal")->m_static_fields[0]->m_instance);};
};

// Alignment: 28
// Size: 0x1380
class CInferno : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0700[0x10]; // 0x700
public:
	// MNetworkEnable
	int32_t m_fireXDelta[64]; // 0x710	
	// MNetworkEnable
	int32_t m_fireYDelta[64]; // 0x810	
	// MNetworkEnable
	int32_t m_fireZDelta[64]; // 0x910	
	// MNetworkEnable
	int32_t m_fireParentXDelta[64]; // 0xa10	
	// MNetworkEnable
	int32_t m_fireParentYDelta[64]; // 0xb10	
	// MNetworkEnable
	int32_t m_fireParentZDelta[64]; // 0xc10	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0xd10	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0xd50	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1050	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x1054	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x1058	
	// MNetworkEnable
	float m_nFireLifetime; // 0x105c	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1060	
private:
	[[maybe_unused]] uint8_t __pad1061[0x3]; // 0x1061
public:
	int32_t m_nFiresExtinguishCount; // 0x1064	
	bool m_bWasCreatedInSmoke; // 0x1068	
private:
	[[maybe_unused]] uint8_t __pad1069[0x207]; // 0x1069
public:
	Extent m_extent; // 0x1270	
	CountdownTimer m_damageTimer; // 0x1288	
	CountdownTimer m_damageRampTimer; // 0x12a0	
	Vector m_splashVelocity; // 0x12b8	
	Vector m_InitialSplashVelocity; // 0x12c4	
	Vector m_startPos; // 0x12d0	
	Vector m_vecOriginalSpawnLocation; // 0x12dc	
	IntervalTimer m_activeTimer; // 0x12e8	
	int32_t m_fireSpawnOffset; // 0x12f8	
	int32_t m_nMaxFlames; // 0x12fc	
	CountdownTimer m_BookkeepingTimer; // 0x1300	
	CountdownTimer m_NextSpreadTimer; // 0x1318	
	uint16_t m_nSourceItemDefIndex; // 0x1330	
	
	// Static fields:
	static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[0]->m_instance);};
	static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[1]->m_instance);};
	static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[2]->m_instance);};
	static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[3]->m_instance);};
};

// Alignment: 0
// Size: 0x1380
class CFireCrackerBlast : public CInferno
{
public:
	// No members available
};

// Alignment: 54
// Size: 0x938
class CBarnLight : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x704	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x708	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x70c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x710	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x714	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x718	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x71c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x720	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x724	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072c[0x4]; // 0x72c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x730	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad073c[0x4]; // 0x73c
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x740	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x758	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x770	
	CEntityIOOutput m_StyleEvent[4]; // 0x788	
	CUtlString m_StyleRadianceVar; // 0x828	
	CUtlString m_StyleVar; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0838[0x20]; // 0x838
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x858	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x860	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x864	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x868	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x86c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x870	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x874	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x880	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x884	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x890	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x894	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x8a0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x8a4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x8a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x8ac	
private:
	[[maybe_unused]] uint8_t __pad08ad[0x3]; // 0x8ad
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x8b0	
	// MNetworkEnable
	float m_flBounceScale; // 0x8b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x8b8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x8bc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x8c8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x8cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x8d0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x8d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x8d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x8dc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x8e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x8e4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x8e8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x8ec	
private:
	[[maybe_unused]] uint8_t __pad08ed[0x3]; // 0x8ed
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x8f0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x8fc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0x908	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0x914	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0x920	
	bool m_bPvsModifyEntity; // 0x92c	
};

// Alignment: 1
// Size: 0x940
class CRectLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0x938	
};

// Alignment: 3
// Size: 0x948
class COmniLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0x93c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0x940	
};

// Alignment: 14
// Size: 0x828
class CCSTeam : public CTeam
{
public:
	int32_t m_nLastRecievedShorthandedRoundBonus; // 0x568	
	int32_t m_nShorthandedRoundBonusStartRound; // 0x56c	
	// MNetworkEnable
	bool m_bSurrendered; // 0x570	
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x571	
private:
	[[maybe_unused]] uint8_t __pad0771[0x3]; // 0x771
public:
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x774	
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x778	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x77c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x780	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x784	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x808	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x80c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x814	
	float m_flNextResourceTime; // 0x81c	
	int32_t m_iLastUpdateSentAt; // 0x820	
};

// Alignment: 8
// Size: 0x4d0
class CMapInfo : public CPointEntity
{
public:
	int32_t m_iBuyingStatus; // 0x4b0	
	float m_flBombRadius; // 0x4b4	
	int32_t m_iPetPopulation; // 0x4b8	
	bool m_bUseNormalSpawnsForDM; // 0x4bc	
	bool m_bDisableAutoGeneratedDMSpawns; // 0x4bd	
private:
	[[maybe_unused]] uint8_t __pad04be[0x2]; // 0x4be
public:
	float m_flBotMaxVisionDistance; // 0x4c0	
	int32_t m_iHostageCount; // 0x4c4	
	bool m_bFadePlayerVisibilityFarZ; // 0x4c8	
};

// Alignment: 140
// Size: 0x7528
class CCSBot : public CBot
{
public:
	CHandle< SpawnPointCoopEnemy > m_lastCoopSpawnPoint; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00dc[0xc]; // 0xdc
public:
	Vector m_eyePosition; // 0xe8	
	char m_name[64]; // 0xf4	
	float m_combatRange; // 0x134	
	bool m_isRogue; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad0139[0x7]; // 0x139
public:
	CountdownTimer m_rogueTimer; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0158[0x4]; // 0x158
public:
	bool m_diedLastRound; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad015d[0x3]; // 0x15d
public:
	float m_safeTime; // 0x160	
	bool m_wasSafe; // 0x164	
private:
	[[maybe_unused]] uint8_t __pad0165[0x7]; // 0x165
public:
	bool m_blindFire; // 0x16c	
private:
	[[maybe_unused]] uint8_t __pad016d[0x3]; // 0x16d
public:
	CountdownTimer m_surpriseTimer; // 0x170	
	bool m_bAllowActive; // 0x188	
	bool m_isFollowing; // 0x189	
private:
	[[maybe_unused]] uint8_t __pad018a[0x2]; // 0x18a
public:
	CHandle< CCSPlayerPawn > m_leader; // 0x18c	
	float m_followTimestamp; // 0x190	
	float m_allowAutoFollowTime; // 0x194	
	CountdownTimer m_hurryTimer; // 0x198	
	CountdownTimer m_alertTimer; // 0x1b0	
	CountdownTimer m_sneakTimer; // 0x1c8	
	CountdownTimer m_panicTimer; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01f8[0x2b8]; // 0x1f8
public:
	float m_stateTimestamp; // 0x4b0	
	bool m_isAttacking; // 0x4b4	
	bool m_isOpeningDoor; // 0x4b5	
private:
	[[maybe_unused]] uint8_t __pad04b6[0x6]; // 0x4b6
public:
	CHandle< CBaseEntity > m_taskEntity; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04c0[0xc]; // 0x4c0
public:
	Vector m_goalPosition; // 0x4cc	
	CHandle< CBaseEntity > m_goalEntity; // 0x4d8	
	CHandle< CBaseEntity > m_avoid; // 0x4dc	
	float m_avoidTimestamp; // 0x4e0	
	bool m_isStopping; // 0x4e4	
	bool m_hasVisitedEnemySpawn; // 0x4e5	
private:
	[[maybe_unused]] uint8_t __pad04e6[0x2]; // 0x4e6
public:
	IntervalTimer m_stillTimer; // 0x4e8	
	bool m_bEyeAnglesUnderPathFinderControl; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x60f7]; // 0x4f9
public:
	int32_t m_pathIndex; // 0x65f0	
	GameTime_t m_areaEnteredTimestamp; // 0x65f4	
	CountdownTimer m_repathTimer; // 0x65f8	
	CountdownTimer m_avoidFriendTimer; // 0x6610	
	bool m_isFriendInTheWay; // 0x6628	
private:
	[[maybe_unused]] uint8_t __pad6629[0x7]; // 0x6629
public:
	CountdownTimer m_politeTimer; // 0x6630	
	bool m_isWaitingBehindFriend; // 0x6648	
private:
	[[maybe_unused]] uint8_t __pad6649[0x2b]; // 0x6649
public:
	float m_pathLadderEnd; // 0x6674	
private:
	[[maybe_unused]] uint8_t __pad6678[0x48]; // 0x6678
public:
	CountdownTimer m_mustRunTimer; // 0x66c0	
	CountdownTimer m_waitTimer; // 0x66d8	
	CountdownTimer m_updateTravelDistanceTimer; // 0x66f0	
	float m_playerTravelDistance[64]; // 0x6708	
	uint8_t m_travelDistancePhase; // 0x6808	
private:
	[[maybe_unused]] uint8_t __pad6809[0x197]; // 0x6809
public:
	uint8_t m_hostageEscortCount; // 0x69a0	
private:
	[[maybe_unused]] uint8_t __pad69a1[0x3]; // 0x69a1
public:
	float m_hostageEscortCountTimestamp; // 0x69a4	
	int32_t m_desiredTeam; // 0x69a8	
	bool m_hasJoined; // 0x69ac	
	bool m_isWaitingForHostage; // 0x69ad	
private:
	[[maybe_unused]] uint8_t __pad69ae[0x2]; // 0x69ae
public:
	CountdownTimer m_inhibitWaitingForHostageTimer; // 0x69b0	
	CountdownTimer m_waitForHostageTimer; // 0x69c8	
	Vector m_noisePosition; // 0x69e0	
	float m_noiseTravelDistance; // 0x69ec	
	float m_noiseTimestamp; // 0x69f0	
private:
	[[maybe_unused]] uint8_t __pad69f4[0x4]; // 0x69f4
public:
	CCSPlayerPawn* m_noiseSource; // 0x69f8	
private:
	[[maybe_unused]] uint8_t __pad6a00[0x10]; // 0x6a00
public:
	CountdownTimer m_noiseBendTimer; // 0x6a10	
	Vector m_bentNoisePosition; // 0x6a28	
	bool m_bendNoisePositionValid; // 0x6a34	
private:
	[[maybe_unused]] uint8_t __pad6a35[0x3]; // 0x6a35
public:
	float m_lookAroundStateTimestamp; // 0x6a38	
	float m_lookAheadAngle; // 0x6a3c	
	float m_forwardAngle; // 0x6a40	
	float m_inhibitLookAroundTimestamp; // 0x6a44	
private:
	[[maybe_unused]] uint8_t __pad6a48[0x4]; // 0x6a48
public:
	Vector m_lookAtSpot; // 0x6a4c	
private:
	[[maybe_unused]] uint8_t __pad6a58[0x4]; // 0x6a58
public:
	float m_lookAtSpotDuration; // 0x6a5c	
	float m_lookAtSpotTimestamp; // 0x6a60	
	float m_lookAtSpotAngleTolerance; // 0x6a64	
	bool m_lookAtSpotClearIfClose; // 0x6a68	
	bool m_lookAtSpotAttack; // 0x6a69	
private:
	[[maybe_unused]] uint8_t __pad6a6a[0x6]; // 0x6a6a
public:
	char* m_lookAtDesc; // 0x6a70	
	float m_peripheralTimestamp; // 0x6a78	
private:
	[[maybe_unused]] uint8_t __pad6a7c[0x184]; // 0x6a7c
public:
	uint8_t m_approachPointCount; // 0x6c00	
private:
	[[maybe_unused]] uint8_t __pad6c01[0x3]; // 0x6c01
public:
	Vector m_approachPointViewPosition; // 0x6c04	
	IntervalTimer m_viewSteadyTimer; // 0x6c10	
private:
	[[maybe_unused]] uint8_t __pad6c20[0x8]; // 0x6c20
public:
	CountdownTimer m_tossGrenadeTimer; // 0x6c28	
private:
	[[maybe_unused]] uint8_t __pad6c40[0x8]; // 0x6c40
public:
	CountdownTimer m_isAvoidingGrenade; // 0x6c48	
private:
	[[maybe_unused]] uint8_t __pad6c60[0x8]; // 0x6c60
public:
	float m_spotCheckTimestamp; // 0x6c68	
private:
	[[maybe_unused]] uint8_t __pad6c6c[0x404]; // 0x6c6c
public:
	int32_t m_checkedHidingSpotCount; // 0x7070	
	float m_lookPitch; // 0x7074	
	float m_lookPitchVel; // 0x7078	
	float m_lookYaw; // 0x707c	
	float m_lookYawVel; // 0x7080	
	Vector m_targetSpot; // 0x7084	
	Vector m_targetSpotVelocity; // 0x7090	
	Vector m_targetSpotPredicted; // 0x709c	
	QAngle m_aimError; // 0x70a8	
	QAngle m_aimGoal; // 0x70b4	
	GameTime_t m_targetSpotTime; // 0x70c0	
	float m_aimFocus; // 0x70c4	
	float m_aimFocusInterval; // 0x70c8	
	GameTime_t m_aimFocusNextUpdate; // 0x70cc	
private:
	[[maybe_unused]] uint8_t __pad70d0[0x8]; // 0x70d0
public:
	CountdownTimer m_ignoreEnemiesTimer; // 0x70d8	
	CHandle< CCSPlayerPawn > m_enemy; // 0x70f0	
	bool m_isEnemyVisible; // 0x70f4	
	uint8_t m_visibleEnemyParts; // 0x70f5	
private:
	[[maybe_unused]] uint8_t __pad70f6[0x2]; // 0x70f6
public:
	Vector m_lastEnemyPosition; // 0x70f8	
	float m_lastSawEnemyTimestamp; // 0x7104	
	float m_firstSawEnemyTimestamp; // 0x7108	
	float m_currentEnemyAcquireTimestamp; // 0x710c	
	float m_enemyDeathTimestamp; // 0x7110	
	float m_friendDeathTimestamp; // 0x7114	
	bool m_isLastEnemyDead; // 0x7118	
private:
	[[maybe_unused]] uint8_t __pad7119[0x3]; // 0x7119
public:
	int32_t m_nearbyEnemyCount; // 0x711c	
private:
	[[maybe_unused]] uint8_t __pad7120[0x208]; // 0x7120
public:
	CHandle< CCSPlayerPawn > m_bomber; // 0x7328	
	int32_t m_nearbyFriendCount; // 0x732c	
	CHandle< CCSPlayerPawn > m_closestVisibleFriend; // 0x7330	
	CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // 0x7334	
	IntervalTimer m_attentionInterval; // 0x7338	
	CHandle< CCSPlayerPawn > m_attacker; // 0x7348	
	float m_attackedTimestamp; // 0x734c	
	IntervalTimer m_burnedByFlamesTimer; // 0x7350	
	int32_t m_lastVictimID; // 0x7360	
	bool m_isAimingAtEnemy; // 0x7364	
	bool m_isRapidFiring; // 0x7365	
private:
	[[maybe_unused]] uint8_t __pad7366[0x2]; // 0x7366
public:
	IntervalTimer m_equipTimer; // 0x7368	
	CountdownTimer m_zoomTimer; // 0x7378	
	GameTime_t m_fireWeaponTimestamp; // 0x7390	
private:
	[[maybe_unused]] uint8_t __pad7394[0x4]; // 0x7394
public:
	CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x7398	
	bool m_bIsSleeping; // 0x73b0	
	bool m_isEnemySniperVisible; // 0x73b1	
private:
	[[maybe_unused]] uint8_t __pad73b2[0x6]; // 0x73b2
public:
	CountdownTimer m_sawEnemySniperTimer; // 0x73b8	
private:
	[[maybe_unused]] uint8_t __pad73d0[0xa0]; // 0x73d0
public:
	uint8_t m_enemyQueueIndex; // 0x7470	
	uint8_t m_enemyQueueCount; // 0x7471	
	uint8_t m_enemyQueueAttendIndex; // 0x7472	
	bool m_isStuck; // 0x7473	
	GameTime_t m_stuckTimestamp; // 0x7474	
	Vector m_stuckSpot; // 0x7478	
private:
	[[maybe_unused]] uint8_t __pad7484[0x4]; // 0x7484
public:
	CountdownTimer m_wiggleTimer; // 0x7488	
	CountdownTimer m_stuckJumpTimer; // 0x74a0	
	GameTime_t m_nextCleanupCheckTimestamp; // 0x74b8	
	float m_avgVel[10]; // 0x74bc	
	int32_t m_avgVelIndex; // 0x74e4	
	int32_t m_avgVelCount; // 0x74e8	
	Vector m_lastOrigin; // 0x74ec	
private:
	[[maybe_unused]] uint8_t __pad74f8[0x4]; // 0x74f8
public:
	float m_lastRadioRecievedTimestamp; // 0x74fc	
	float m_lastRadioSentTimestamp; // 0x7500	
	CHandle< CCSPlayerPawn > m_radioSubject; // 0x7504	
	Vector m_radioPosition; // 0x7508	
	float m_voiceEndTimestamp; // 0x7514	
private:
	[[maybe_unused]] uint8_t __pad7518[0x8]; // 0x7518
public:
	int32_t m_lastValidReactionQueueFrame; // 0x7520	
};

// Alignment: 5
// Size: 0x728
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x700	
	CUtlSymbolLarge m_postProcessName; // 0x708	
	CUtlSymbolLarge m_colorCorrectionName; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0718[0x8]; // 0x718
public:
	bool m_bDisabled; // 0x720	
	bool m_bInFogVolumesList; // 0x721	
};

// Alignment: 5
// Size: 0x4c8
class CInfoDynamicShadowHint : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_flRange; // 0x4b4	
	int32_t m_nImportance; // 0x4b8	
	int32_t m_nLightChoice; // 0x4bc	
	CHandle< CBaseEntity > m_hLight; // 0x4c0	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x4e0
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x4c8	
	Vector m_vBoxMaxs; // 0x4d4	
};

// Alignment: 12
// Size: 0x760
class CEnvSky : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x700	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x708	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x710	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x711	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0x715	
private:
	[[maybe_unused]] uint8_t __pad0719[0x3]; // 0x719
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0x71c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x720	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x724	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x728	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x72c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x730	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x734	
};

// Alignment: 0
// Size: 0x4d8
class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8b8
class CTonemapTrigger : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_tonemapControllerName; // 0x8a8	
	CEntityHandle m_hTonemapController; // 0x8b0	
};

// Alignment: 1
// Size: 0x910
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x8a8	
};

// Alignment: 1
// Size: 0x708
class CLightEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x700	
};

// Alignment: 0
// Size: 0x708
class CLightSpotEntity : public CLightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x708
class CLightOrthoEntity : public CLightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x708
class CLightDirectionalEntity : public CLightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x708
class CLightEnvironmentEntity : public CLightDirectionalEntity
{
public:
	// No members available
};

// Alignment: 16
// Size: 0x8f8
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08a8[0x10]; // 0x8a8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x8b8	
	// MNetworkEnable
	float m_flFadeDuration; // 0x8c0	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x8c4	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x8c8	
	// MNetworkEnable
	float m_flMinExposure; // 0x8cc	
	// MNetworkEnable
	float m_flMaxExposure; // 0x8d0	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x8d4	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x8d8	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x8dc	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x8e0	
	// MNetworkEnable
	bool m_bMaster; // 0x8e4	
	// MNetworkEnable
	bool m_bExposureControl; // 0x8e5	
private:
	[[maybe_unused]] uint8_t __pad08e6[0x2]; // 0x8e6
public:
	// MNetworkEnable
	float m_flRate; // 0x8e8	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x8ec	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x8f0	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x8f4	
};

// Alignment: 5
// Size: 0xc90
class CEnvParticleGlow : public CParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xc78	
	// MNetworkEnable
	float m_flRadiusScale; // 0xc7c	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xc80	
	// MNetworkEnable
	Color m_ColorTint; // 0xc84	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xc88	
};

// Alignment: 8
// Size: 0x738
class CTextureBasedAnimatable : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
public:
	// MNetworkEnable
	float m_flFPS; // 0x704	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x708	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x710	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x718	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x724	
	// MNetworkEnable
	float m_flStartTime; // 0x730	
	// MNetworkEnable
	float m_flStartFrame; // 0x734	
};

// Alignment: 0
// Size: 0x700
class CWorld : public CBaseModelEntity
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x890
class CBaseAnimGraph : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x700	
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x701	
private:
	[[maybe_unused]] uint8_t __pad0702[0x6]; // 0x702
public:
	IChoreoServices* m_pChoreoServices; // 0x708	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	float m_flMaxSlopeDistance; // 0x714	
	Vector m_vLastSlopeCheckPos; // 0x718	
	bool m_bAnimGraphDirty; // 0x724	
private:
	[[maybe_unused]] uint8_t __pad0725[0x3]; // 0x725
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x728	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x734	
private:
	[[maybe_unused]] uint8_t __pad0738[0x10]; // 0x738
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0x748	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; // 0x750	
};

// Alignment: 4
// Size: 0x8d0
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0891[0x3]; // 0x891
public:
	int32_t m_iShapeType; // 0x894	
	bool m_bConformToCollisionBounds; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x89c	
};

// Alignment: 34
// Size: 0xa08
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad08d0[0x10]; // 0x8d0
public:
	CEntityIOOutput m_OnBreak; // 0x8e0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x908	
	CEntityIOOutput m_OnTakeDamage; // 0x930	
	float m_impactEnergyScale; // 0x958	
	int32_t m_iMinHealthDmg; // 0x95c	
	QAngle m_preferredCarryAngles; // 0x960	
	float m_flPressureDelay; // 0x96c	
	CHandle< CBaseEntity > m_hBreaker; // 0x970	
	PerformanceMode_t m_PerformanceMode; // 0x974	
	float m_flDmgModBullet; // 0x978	
	float m_flDmgModClub; // 0x97c	
	float m_flDmgModExplosive; // 0x980	
	float m_flDmgModFire; // 0x984	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x988	
	CUtlSymbolLarge m_iszBasePropData; // 0x990	
	int32_t m_iInteractions; // 0x998	
	GameTime_t m_flPreventDamageBeforeTime; // 0x99c	
	bool m_bHasBreakPiecesOrCommands; // 0x9a0	
private:
	[[maybe_unused]] uint8_t __pad09a1[0x3]; // 0x9a1
public:
	float m_explodeDamage; // 0x9a4	
	float m_explodeRadius; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	float m_explosionDelay; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x4]; // 0x9b4
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x9b8	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x9c0	
	CUtlSymbolLarge m_explosionCustomSound; // 0x9c8	
	CUtlSymbolLarge m_explosionModifier; // 0x9d0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x9d8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x9dc	
	bool m_bOriginalBlockLOS; // 0x9e0	
private:
	[[maybe_unused]] uint8_t __pad09e1[0x3]; // 0x9e1
public:
	float m_flDefaultFadeScale; // 0x9e4	
	CHandle< CBaseEntity > m_hLastAttacker; // 0x9e8	
	CHandle< CBaseEntity > m_hFlareEnt; // 0x9ec	
	bool m_bUsePuntSound; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	CUtlSymbolLarge m_iszPuntSound; // 0x9f8	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xa00	
};

// Alignment: 23
// Size: 0xb08
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0a08[0x8]; // 0xa08
public:
	bool m_bCreateNavObstacle; // 0xa10	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xa11	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xa12	
private:
	[[maybe_unused]] uint8_t __pad0a13[0x5]; // 0xa13
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xa18	
	CEntityIOOutput m_pOutputAnimOver; // 0xa40	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa68	
	CEntityIOOutput m_OnAnimReachedStart; // 0xa90	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xab8	
	CUtlSymbolLarge m_iszDefaultAnim; // 0xae0	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xae8	
	bool m_bAnimateOnServer; // 0xaec	
	bool m_bRandomizeCycle; // 0xaed	
	bool m_bStartDisabled; // 0xaee	
	bool m_bScriptedMovement; // 0xaef	
	bool m_bFiredStartEndOutput; // 0xaf0	
	bool m_bForceNpcExclude; // 0xaf1	
	bool m_bCreateNonSolid; // 0xaf2	
	bool m_bIsOverrideProp; // 0xaf3	
	int32_t m_iInitialGlowState; // 0xaf4	
	int32_t m_nGlowRange; // 0xaf8	
	int32_t m_nGlowRangeMin; // 0xafc	
	Color m_glowColor; // 0xb00	
	int32_t m_nGlowTeam; // 0xb04	
};

// Alignment: 0
// Size: 0xb08
class CDynamicPropAlias_dynamic_prop : public CDynamicProp
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xb08
class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xb08
class CDynamicPropAlias_cable_dynamic : public CDynamicProp
{
public:
	// No members available
};

// Alignment: 10
// Size: 0xad0
class CColorCorrectionVolume : public CBaseTrigger
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0x3]; // 0x8a9
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x8ac	
	// MNetworkEnable
	float m_FadeDuration; // 0x8b0	
	bool m_bStartDisabled; // 0x8b4	
private:
	[[maybe_unused]] uint8_t __pad08b5[0x3]; // 0x8b5
public:
	// MNetworkEnable
	float m_Weight; // 0x8b8	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x8bc	
	float m_LastEnterWeight; // 0xabc	
	GameTime_t m_LastEnterTime; // 0xac0	
	float m_LastExitWeight; // 0xac4	
	GameTime_t m_LastExitTime; // 0xac8	
};

// Alignment: 30
// Size: 0x988
class CPointCommentaryNode : public CBaseAnimGraph
{
public:
	CUtlSymbolLarge m_iszPreCommands; // 0x890	
	CUtlSymbolLarge m_iszPostCommands; // 0x898	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x8a0	
	CUtlSymbolLarge m_iszViewTarget; // 0x8a8	
	CHandle< CBaseEntity > m_hViewTarget; // 0x8b0	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x8b4	
	CUtlSymbolLarge m_iszViewPosition; // 0x8b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x8c0	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x8c4	
	bool m_bPreventMovement; // 0x8c8	
	bool m_bUnderCrosshair; // 0x8c9	
	bool m_bUnstoppable; // 0x8ca	
private:
	[[maybe_unused]] uint8_t __pad08cb[0x1]; // 0x8cb
public:
	GameTime_t m_flFinishedTime; // 0x8cc	
	Vector m_vecFinishOrigin; // 0x8d0	
	QAngle m_vecOriginalAngles; // 0x8dc	
	QAngle m_vecFinishAngles; // 0x8e8	
	bool m_bPreventChangesWhileMoving; // 0x8f4	
	bool m_bDisabled; // 0x8f5	
private:
	[[maybe_unused]] uint8_t __pad08f6[0x2]; // 0x8f6
public:
	Vector m_vecTeleportOrigin; // 0x8f8	
	GameTime_t m_flAbortedPlaybackAt; // 0x904	
	CEntityIOOutput m_pOnCommentaryStarted; // 0x908	
	CEntityIOOutput m_pOnCommentaryStopped; // 0x930	
	// MNetworkEnable
	bool m_bActive; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x3]; // 0x959
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x95c	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0964[0x4]; // 0x964
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0x968	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0x970	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0x978	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0x97c	
	// MNetworkEnable
	bool m_bListenedTo; // 0x980	
};

// Alignment: 0
// Size: 0x770
class CCommentaryViewPosition : public CSprite
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x990
class CRotDoor : public CBaseDoor
{
public:
	bool m_bSolidBsp; // 0x988	
};

// Alignment: 0
// Size: 0x890
class CItemSoda : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8a8
class CPrecipitation : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 19
// Size: 0x848
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7a8	
	CUtlSymbolLarge m_iszStartEntity; // 0x7b0	
	CUtlSymbolLarge m_iszEndEntity; // 0x7b8	
	float m_life; // 0x7c0	
	float m_boltWidth; // 0x7c4	
	float m_noiseAmplitude; // 0x7c8	
	int32_t m_speed; // 0x7cc	
	float m_restrike; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x7d8	
	int32_t m_frameStart; // 0x7e0	
	Vector m_vEndPointWorld; // 0x7e4	
	Vector m_vEndPointRelative; // 0x7f0	
	float m_radius; // 0x7fc	
	Touch_t m_TouchType; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	CUtlSymbolLarge m_iFilterName; // 0x808	
	CHandle< CBaseEntity > m_hFilter; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlSymbolLarge m_iszDecal; // 0x818	
	CEntityIOOutput m_OnTouchedByEntity; // 0x820	
};

// Alignment: 0
// Size: 0x7c0
class CPushable : public CBreakable
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x7b0
class CFuncLadderAlias_func_useableladder : public CFuncLadder
{
public:
	// No members available
};

// Alignment: 9
// Size: 0x740
class CFuncMonitor : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x720	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x728	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x72c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x72d	
private:
	[[maybe_unused]] uint8_t __pad072e[0x2]; // 0x72e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x730	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x738	
	// MNetworkEnable
	bool m_bEnabled; // 0x73c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x73d	
	bool m_bStartEnabled; // 0x73e	
};

// Alignment: 0
// Size: 0x830
class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x7b0
class CGunTarget : public CBaseToggle
{
public:
	bool m_on; // 0x780	
private:
	[[maybe_unused]] uint8_t __pad0781[0x3]; // 0x781
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x784	
	CEntityIOOutput m_OnDeath; // 0x788	
};

// Alignment: 3
// Size: 0x8c0
class CTriggerGameEvent : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlString m_strStartTouchEventName; // 0x8a8	
	// MNetworkEnable
	CUtlString m_strEndTouchEventName; // 0x8b0	
	// MNetworkEnable
	CUtlString m_strTriggerID; // 0x8b8	
};

// Alignment: 0
// Size: 0x708
class CRuleBrushEntity : public CRuleEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x710
class CGameEnd : public CRulePointEntity
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x730
class CGameText : public CRulePointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x710	
	hudtextparms_t m_textParms; // 0x718	
};

// Alignment: 4
// Size: 0x7a8
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x708	
	CEntityIOOutput m_OnPlayerOutZone; // 0x730	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x758	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x780	
};

// Alignment: 0
// Size: 0x740
class CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x740
class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x760
class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef
{
public:
	bool m_bFloodFillAttribute; // 0x758	
};

// Alignment: 4
// Size: 0x758
class CFuncElectrifiedVolume : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x720	
	CUtlSymbolLarge m_EffectInterpenetrateName; // 0x728	
	CUtlSymbolLarge m_EffectZapName; // 0x730	
	CUtlSymbolLarge m_iszEffectSource; // 0x738	
};

// Alignment: 0
// Size: 0x4e0
class CPathCornerCrash : public CPathCorner
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x898
class CConstraintAnchor : public CBaseAnimGraph
{
public:
	float m_massScale; // 0x890	
};

// Alignment: 1
// Size: 0xb10
class COrnamentProp : public CDynamicProp
{
public:
	CUtlSymbolLarge m_initialOwner; // 0xb08	
};

// Alignment: 0
// Size: 0x758
class CRopeKeyframeAlias_move_rope : public CRopeKeyframe
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xa08
class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity
{
public:
	// No members available
};

// Alignment: 5
// Size: 0xa20
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa08	
	bool m_bHadOwner; // 0xa0c	
private:
	[[maybe_unused]] uint8_t __pad0a0d[0x3]; // 0xa0d
public:
	float m_flPostSpeakDelay; // 0xa10	
	float m_flPreDelay; // 0xa14	
	bool m_bIsBackground; // 0xa18	
};

// Alignment: 3
// Size: 0x8d0
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08ac[0x4]; // 0x8ac
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x8b0	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x8b8	
};

// Alignment: 0
// Size: 0x770
class CSpriteAlias_env_glow : public CSprite
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x878
class CFuncTankTrain : public CFuncTrackTrain
{
public:
	CEntityIOOutput m_OnDeath; // 0x850	
};

// Alignment: 5
// Size: 0x7a8
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x780	
	CUtlSymbolLarge m_NoiseArrived; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0790[0x8]; // 0x790
public:
	float m_volume; // 0x798	
	float m_flTWidth; // 0x79c	
	float m_flTLength; // 0x7a0	
};

// Alignment: 1
// Size: 0x7b0
class CFuncPlat : public CBasePlatTrain
{
public:
	CUtlSymbolLarge m_sNoise; // 0x7a8	
};

// Alignment: 2
// Size: 0x7c8
class CFuncPlatRot : public CFuncPlat
{
public:
	QAngle m_end; // 0x7b0	
	QAngle m_start; // 0x7bc	
};

// Alignment: 6
// Size: 0x7c8
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x7a8	
	bool m_activated; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x7b0	
	float m_flBlockDamage; // 0x7b4	
	GameTime_t m_flNextBlockTime; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x7c0	
};

// Alignment: 9
// Size: 0x808
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x7c8	
	CPathTrack* m_trackBottom; // 0x7d0	
	CFuncTrackTrain* m_train; // 0x7d8	
	CUtlSymbolLarge m_trackTopName; // 0x7e0	
	CUtlSymbolLarge m_trackBottomName; // 0x7e8	
	CUtlSymbolLarge m_trainName; // 0x7f0	
	TRAIN_CODE m_code; // 0x7f8	
	int32_t m_targetState; // 0x7fc	
	int32_t m_use; // 0x800	
};

// Alignment: 0
// Size: 0x808
class CFuncTrackAuto : public CFuncTrackChange
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x8d0
class CTriggerRemove : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnRemove; // 0x8a8	
};

// Alignment: 1
// Size: 0x958
class CScriptTriggerHurt : public CTriggerHurt
{
public:
	Vector m_vExtent; // 0x948	
};

// Alignment: 1
// Size: 0x8e0
class CScriptTriggerMultiple : public CTriggerMultiple
{
public:
	Vector m_vExtent; // 0x8d0	
};

// Alignment: 0
// Size: 0x8d0
class CTriggerOnce : public CTriggerMultiple
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x8e0
class CScriptTriggerOnce : public CTriggerOnce
{
public:
	Vector m_vExtent; // 0x8d0	
};

// Alignment: 15
// Size: 0x970
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x8d0	
	float m_flFieldOfView; // 0x8d4	
	float m_flLookTime; // 0x8d8	
	float m_flLookTimeTotal; // 0x8dc	
	GameTime_t m_flLookTimeLast; // 0x8e0	
	float m_flTimeoutDuration; // 0x8e4	
	bool m_bTimeoutFired; // 0x8e8	
	bool m_bIsLooking; // 0x8e9	
	bool m_b2DFOV; // 0x8ea	
	bool m_bUseVelocity; // 0x8eb	
	CHandle< CBaseEntity > m_hActivator; // 0x8ec	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x7]; // 0x8f1
public:
	CEntityIOOutput m_OnTimeout; // 0x8f8	
	CEntityIOOutput m_OnStartLook; // 0x920	
	CEntityIOOutput m_OnEndLook; // 0x948	
};

// Alignment: 5
// Size: 0x8d0
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x8a8	
	Vector m_vecPushDirEntitySpace; // 0x8b4	
	bool m_bTriggerOnStartTouch; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x3]; // 0x8c1
public:
	float m_flAlternateTicksFix; // 0x8c4	
	float m_flPushSpeed; // 0x8c8	
};

// Alignment: 1
// Size: 0x8e0
class CScriptTriggerPush : public CTriggerPush
{
public:
	Vector m_vExtent; // 0x8d0	
};

// Alignment: 1
// Size: 0x8b0
class CTriggerToggleSave : public CBaseTrigger
{
public:
	bool m_bDisabled; // 0x8a8	
};

// Alignment: 3
// Size: 0x8b8
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0x3]; // 0x8a9
public:
	float m_fDangerousTimer; // 0x8ac	
	int32_t m_minHitPoints; // 0x8b0	
};

// Alignment: 0
// Size: 0x8a8
class CTriggerGravity : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x8e8
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08ac[0x4]; // 0x8ac
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x8b0	
	float m_fRadius; // 0x8b8	
	int32_t m_nTouchers; // 0x8bc	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8c0	
};

// Alignment: 4
// Size: 0x908
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x8d0	
	float m_flNoise; // 0x8d4	
	float m_flViewkick; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08dc[0x4]; // 0x8dc
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x8e0	
};

// Alignment: 0
// Size: 0x8a8
class CServerRagdollTrigger : public CBaseTrigger
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x8d8
class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x8a8	
	CUtlSymbolLarge m_iszWeaponClassName; // 0x8d0	
};

// Alignment: 13
// Size: 0x908
class CTriggerPhysics : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08a8[0x10]; // 0x8a8
public:
	float m_gravityScale; // 0x8b8	
	float m_linearLimit; // 0x8bc	
	float m_linearDamping; // 0x8c0	
	float m_angularLimit; // 0x8c4	
	float m_angularDamping; // 0x8c8	
	float m_linearForce; // 0x8cc	
	float m_flFrequency; // 0x8d0	
	float m_flDampingRatio; // 0x8d4	
	Vector m_vecLinearForcePointAt; // 0x8d8	
	bool m_bCollapseToForcePoint; // 0x8e4	
private:
	[[maybe_unused]] uint8_t __pad08e5[0x3]; // 0x8e5
public:
	Vector m_vecLinearForcePointAtWorld; // 0x8e8	
	Vector m_vecLinearForceDirection; // 0x8f4	
	bool m_bConvertToDebrisWhenPossible; // 0x900	
};

// Alignment: 2
// Size: 0x8d8
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0x7]; // 0x8a9
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x8b0	
};

// Alignment: 1
// Size: 0x908
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08a8[0x38]; // 0x8a8
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x8e0	
};

// Alignment: 1
// Size: 0x720
class CScriptNavBlocker : public CFuncNavBlocker
{
public:
	Vector m_vExtent; // 0x710	
};

// Alignment: 7
// Size: 0x920
class CBaseFlex : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x890	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vLookTargetPosition; // 0x8a8	
	// MNetworkEnable
	bool m_blinktoggle; // 0x8b4	
private:
	[[maybe_unused]] uint8_t __pad08b5[0x53]; // 0x8b5
public:
	GameTime_t m_flAllowResponsesEndTime; // 0x908	
	GameTime_t m_flLastFlexAnimationTime; // 0x90c	
	uint32_t m_nNextSceneEventId; // 0x910	
	bool m_bUpdateLayerPriorities; // 0x914	
};

// Alignment: 37
// Size: 0xd98
class CBasePropDoor : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x10]; // 0xb08
public:
	float m_flAutoReturnDelay; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0x4]; // 0xb1c
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xb20	
	int32_t m_nHardwareType; // 0xb38	
	bool m_bNeedsHardware; // 0xb3c	
private:
	[[maybe_unused]] uint8_t __pad0b3d[0x3]; // 0xb3d
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xb40	
	// MNetworkEnable
	bool m_bLocked; // 0xb44	
private:
	[[maybe_unused]] uint8_t __pad0b45[0x3]; // 0xb45
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xb48	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xb54	
	CHandle< CBaseEntity > m_hBlocker; // 0xb60	
	bool m_bFirstBlocked; // 0xb64	
private:
	[[maybe_unused]] uint8_t __pad0b65[0x3]; // 0xb65
public:
	locksound_t m_ls; // 0xb68	
	bool m_bForceClosed; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b89[0x3]; // 0xb89
public:
	Vector m_vecLatchWorldPosition; // 0xb8c	
	CHandle< CBaseEntity > m_hActivator; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b9c[0xc]; // 0xb9c
public:
	CUtlSymbolLarge m_SoundMoving; // 0xba8	
	CUtlSymbolLarge m_SoundOpen; // 0xbb0	
	CUtlSymbolLarge m_SoundClose; // 0xbb8	
	CUtlSymbolLarge m_SoundLock; // 0xbc0	
	CUtlSymbolLarge m_SoundUnlock; // 0xbc8	
	CUtlSymbolLarge m_SoundLatch; // 0xbd0	
	CUtlSymbolLarge m_SoundPound; // 0xbd8	
	CUtlSymbolLarge m_SoundJiggle; // 0xbe0	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xbe8	
	int32_t m_numCloseAttempts; // 0xbf0	
	CUtlStringToken m_nPhysicsMaterial; // 0xbf4	
	CUtlSymbolLarge m_SlaveName; // 0xbf8	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c04[0x4]; // 0xc04
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xc08	
	CEntityIOOutput m_OnBlockedOpening; // 0xc30	
	CEntityIOOutput m_OnUnblockedClosing; // 0xc58	
	CEntityIOOutput m_OnUnblockedOpening; // 0xc80	
	CEntityIOOutput m_OnFullyClosed; // 0xca8	
	CEntityIOOutput m_OnFullyOpen; // 0xcd0	
	CEntityIOOutput m_OnClose; // 0xcf8	
	CEntityIOOutput m_OnOpen; // 0xd20	
	CEntityIOOutput m_OnLockedUse; // 0xd48	
	CEntityIOOutput m_OnAjarOpen; // 0xd70	
};

// Alignment: 5
// Size: 0x7c8
class CEnvLaser : public CBeam
{
public:
	CUtlSymbolLarge m_iszLaserTarget; // 0x7a0	
	CSprite* m_pSprite; // 0x7a8	
	CUtlSymbolLarge m_iszSpriteName; // 0x7b0	
	Vector m_firePosition; // 0x7b8	
	float m_flStartFrame; // 0x7c4	
};

// Alignment: 24
// Size: 0x998
class CFish : public CBaseAnimGraph
{
public:
	CHandle< CFishPool > m_pool; // 0x890	
	uint32_t m_id; // 0x894	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x898	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x89c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x8a0	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags
	float m_angle; // 0x8a4	
	float m_angleChange; // 0x8a8	
	Vector m_forward; // 0x8ac	
	Vector m_perp; // 0x8b8	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_poolOrigin; // 0x8c4	
	// MNetworkEnable
	float m_waterLevel; // 0x8d0	
	float m_speed; // 0x8d4	
	float m_desiredSpeed; // 0x8d8	
	float m_calmSpeed; // 0x8dc	
	float m_panicSpeed; // 0x8e0	
	float m_avoidRange; // 0x8e4	
	CountdownTimer m_turnTimer; // 0x8e8	
	bool m_turnClockwise; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0901[0x7]; // 0x901
public:
	CountdownTimer m_goTimer; // 0x908	
	CountdownTimer m_moveTimer; // 0x920	
	CountdownTimer m_panicTimer; // 0x938	
	CountdownTimer m_disperseTimer; // 0x950	
	CountdownTimer m_proximityTimer; // 0x968	
	CUtlVector< CFish* > m_visible; // 0x980	
};

// Alignment: 8
// Size: 0x968
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0890[0x8]; // 0x890
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x898	
	bool m_bActivateWhenAtRest; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x7]; // 0x8c1
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x8c8	
	CEntityIOOutput m_OnPlayerPickup; // 0x8f0	
	CEntityIOOutput m_OnGlovePulled; // 0x918	
	Vector m_vOriginalSpawnOrigin; // 0x940	
	QAngle m_vOriginalSpawnAngles; // 0x94c	
	bool m_bPhysStartAsleep; // 0x958	
};

// Alignment: 28
// Size: 0xa38
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0890[0x8]; // 0x890
public:
	ragdoll_t m_ragdoll; // 0x898	
	bool m_bStartDisabled; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d1[0x7]; // 0x8d1
public:
	// MNetworkEnable
	// MNetworkEncoder
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x8d8	
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x8f0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0x908	
	uint32_t m_lastUpdateTickCount; // 0x90c	
	bool m_allAsleep; // 0x910	
	bool m_bFirstCollisionAfterLaunch; // 0x911	
private:
	[[maybe_unused]] uint8_t __pad0912[0x2]; // 0x912
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0x914	
	CHandle< CBaseEntity > m_hKiller; // 0x918	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x91c	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x920	
	GameTime_t m_flFadeOutStartTime; // 0x924	
	float m_flFadeTime; // 0x928	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0x92c	
	GameTime_t m_flAwakeTime; // 0x938	
	GameTime_t m_flLastOriginChangeTime; // 0x93c	
	int32_t m_nBloodColor; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0944[0x4]; // 0x944
public:
	CUtlSymbolLarge m_strOriginClassName; // 0x948	
	CUtlSymbolLarge m_strSourceClassName; // 0x950	
	bool m_bHasBeenPhysgunned; // 0x958	
	bool m_bShouldTeleportPhysics; // 0x959	
private:
	[[maybe_unused]] uint8_t __pad095a[0x2]; // 0x95a
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	float m_flBlendWeight; // 0x95c	
	float m_flDefaultFadeScale; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0964[0x4]; // 0x964
public:
	CUtlVector< Vector > m_ragdollMins; // 0x968	
	CUtlVector< Vector > m_ragdollMaxs; // 0x980	
	bool m_bShouldDeleteActivationRecord; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x5f]; // 0x999
public:
	bool m_bValidatePoweredRagdollPose; // 0x9f8	
};

// Alignment: 12
// Size: 0x920
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x890	
	CEntityIOOutput m_OnMagnetDetach; // 0x8b8	
	float m_massScale; // 0x8e0	
	float m_forceLimit; // 0x8e4	
	float m_torqueLimit; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x8f0	
	bool m_bActive; // 0x908	
	bool m_bHasHitSomething; // 0x909	
private:
	[[maybe_unused]] uint8_t __pad090a[0x2]; // 0x90a
public:
	float m_flTotalMass; // 0x90c	
	float m_flRadius; // 0x910	
	GameTime_t m_flNextSuckTime; // 0x914	
	int32_t m_iMaxObjectsAttached; // 0x918	
};

// Alignment: 34
// Size: 0xb78
class CPhysicsProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0a08[0x8]; // 0xa08
public:
	CEntityIOOutput m_MotionEnabled; // 0xa10	
	CEntityIOOutput m_OnAwakened; // 0xa38	
	CEntityIOOutput m_OnAwake; // 0xa60	
	CEntityIOOutput m_OnAsleep; // 0xa88	
	CEntityIOOutput m_OnPlayerUse; // 0xab0	
	CEntityIOOutput m_OnPlayerPickup; // 0xad8	
	CEntityIOOutput m_OnOutOfWorld; // 0xb00	
	float m_massScale; // 0xb28	
	float m_inertiaScale; // 0xb2c	
	float m_buoyancyScale; // 0xb30	
	int32_t m_damageType; // 0xb34	
	int32_t m_damageToEnableMotion; // 0xb38	
	float m_flForceToEnableMotion; // 0xb3c	
	bool m_bThrownByPlayer; // 0xb40	
	bool m_bDroppedByPlayer; // 0xb41	
	bool m_bTouchedByPlayer; // 0xb42	
	bool m_bFirstCollisionAfterLaunch; // 0xb43	
	int32_t m_iExploitableByPlayer; // 0xb44	
	bool m_bHasBeenAwakened; // 0xb48	
	bool m_bIsOverrideProp; // 0xb49	
private:
	[[maybe_unused]] uint8_t __pad0b4a[0x2]; // 0xb4a
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xb4c	
	int32_t m_iInitialGlowState; // 0xb50	
	int32_t m_nGlowRange; // 0xb54	
	int32_t m_nGlowRangeMin; // 0xb58	
	Color m_glowColor; // 0xb5c	
	bool m_bForceNavIgnore; // 0xb60	
	bool m_bNoNavmeshBlocker; // 0xb61	
	bool m_bForceNpcExclude; // 0xb62	
	bool m_bShouldAutoConvertBackFromDebris; // 0xb63	
	bool m_bMuteImpactEffects; // 0xb64	
private:
	[[maybe_unused]] uint8_t __pad0b65[0x7]; // 0xb65
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xb6c	
	bool m_bEnableUseOutput; // 0xb6d	
	// MNetworkEnable
	bool m_bAwake; // 0xb6e	
private:
	[[maybe_unused]] uint8_t __pad0b6f[0x1]; // 0xb6f
public:
	int32_t m_nCollisionGroupOverride; // 0xb70	
};

// Alignment: 0
// Size: 0xb78
class CPhysicsPropOverride : public CPhysicsProp
{
public:
	// No members available
};

// Alignment: 5
// Size: 0xbb0
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xb78	
	QAngle m_vOriginalSpawnAngles; // 0xb84	
	Vector m_vOriginalMins; // 0xb90	
	Vector m_vOriginalMaxs; // 0xb9c	
	float m_flRespawnDuration; // 0xba8	
};

// Alignment: 0
// Size: 0x890
class CWaterBullet : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xbe0
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b79[0x3]; // 0xb79
public:
	uint32_t m_hParentShard; // 0xb7c	
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xb80	
};

// Alignment: 9
// Size: 0xc18
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0920[0x10]; // 0x920
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x930	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xbf8	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xbfc	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0xc00	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0xc04	
	// MNetworkEnable
	float m_flFallbackWear; // 0xc08	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0xc0c	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc10	
	int32_t m_iOldOwnerClass; // 0xc14	
};

// Alignment: 2
// Size: 0xc20
class CEconWearable : public CEconEntity
{
public:
	int32_t m_nForceSkin; // 0xc18	
	bool m_bAlwaysAllow; // 0xc1c	
};

// Alignment: 14
// Size: 0x9c8
class CBaseGrenade : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0920[0x8]; // 0x920
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x928	
	CEntityIOOutput m_OnExplode; // 0x950	
	bool m_bHasWarnedAI; // 0x978	
	bool m_bIsSmokeGrenade; // 0x979	
	// MNetworkEnable
	bool m_bIsLive; // 0x97a	
private:
	[[maybe_unused]] uint8_t __pad097b[0x1]; // 0x97b
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	float m_DmgRadius; // 0x97c	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x980	
	float m_flWarnAITime; // 0x984	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_flDamage; // 0x988	
private:
	[[maybe_unused]] uint8_t __pad098c[0x4]; // 0x98c
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x990	
	CUtlString m_ExplosionSound; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad09a0[0x4]; // 0x9a0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hThrower; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a8[0x14]; // 0x9a8
public:
	GameTime_t m_flNextAttack; // 0x9bc	
	CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0x9c0	
};

// Alignment: 0
// Size: 0xb08
class CCoopBonusCoin : public CDynamicProp
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xb78
class CPhysicsPropMultiplayer : public CPhysicsProp
{
public:
	// No members available
};

// Alignment: 11
// Size: 0x8d8
class CBaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0890[0x8]; // 0x890
public:
	Vector m_vecLastFacing; // 0x898	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0x8a4	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0x8a8	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x8ac	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hWeapon; // 0x8b0	
private:
	[[maybe_unused]] uint8_t __pad08b4[0x4]; // 0x8b4
public:
	CUtlSymbolLarge m_sVMName; // 0x8b8	
	CUtlSymbolLarge m_sAnimationPrefix; // 0x8c0	
	HSequence m_hOldLayerSequence; // 0x8c8	
	int32_t m_oldLayer; // 0x8cc	
	float m_oldLayerStartTime; // 0x8d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x8d4	
};

// Alignment: 0
// Size: 0x8d8
class CPredictedViewModel : public CBaseViewModel
{
public:
	// No members available
};

// Alignment: 27
// Size: 0x990
class CPlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0891[0x3]; // 0x891
public:
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0x894	
	// MNetworkEnable
	int32_t m_nBombSite; // 0x898	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0x89c	
	CEntityIOOutput m_OnBombDefused; // 0x8a0	
	CEntityIOOutput m_OnBombBeginDefuse; // 0x8c8	
	CEntityIOOutput m_OnBombDefuseAborted; // 0x8f0	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x7]; // 0x919
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x920	
	int32_t m_nSpotRules; // 0x938	
	bool m_bTrainingPlacedByPlayer; // 0x93c	
	// MNetworkEnable
	bool m_bHasExploded; // 0x93d	
private:
	[[maybe_unused]] uint8_t __pad093e[0x2]; // 0x93e
public:
	// MNetworkEnable
	float m_flTimerLength; // 0x940	
	// MNetworkEnable
	bool m_bBeingDefused; // 0x944	
private:
	[[maybe_unused]] uint8_t __pad0945[0x7]; // 0x945
public:
	GameTime_t m_fLastDefuseTime; // 0x94c	
private:
	[[maybe_unused]] uint8_t __pad0950[0x4]; // 0x950
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0x954	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0x958	
	// MNetworkEnable
	bool m_bBombDefused; // 0x95c	
private:
	[[maybe_unused]] uint8_t __pad095d[0x3]; // 0x95d
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hBombDefuser; // 0x960	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x964	
	int32_t m_iProgressBarTime; // 0x968	
	bool m_bVoiceAlertFired; // 0x96c	
	bool m_bVoiceAlertPlayed[4]; // 0x96d	
private:
	[[maybe_unused]] uint8_t __pad0971[0x3]; // 0x971
public:
	GameTime_t m_flNextBotBeepTime; // 0x974	
private:
	[[maybe_unused]] uint8_t __pad0978[0x4]; // 0x978
public:
	bool m_bPlantedAfterPickup; // 0x97c	
private:
	[[maybe_unused]] uint8_t __pad097d[0x3]; // 0x97d
public:
	QAngle m_angCatchUpToPlayerEye; // 0x980	
	GameTime_t m_flLastSpinDetectionTime; // 0x98c	
};

// Alignment: 14
// Size: 0xa28
class CBaseCSGrenadeProjectile : public CBaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x9c8	
	// MNetworkEnable
	int32_t m_nBounces; // 0x9d4	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x9d8	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0x9e0	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0x9e4	
	uint8_t m_unOGSExtraFlags; // 0x9f0	
	bool m_bDetonationRecorded; // 0x9f1	
private:
	[[maybe_unused]] uint8_t __pad09f2[0x2]; // 0x9f2
public:
	GameTime_t m_flDetonateTime; // 0x9f4	
	uint16_t m_nItemIndex; // 0x9f8	
private:
	[[maybe_unused]] uint8_t __pad09fa[0x2]; // 0x9fa
public:
	Vector m_vecOriginalSpawnLocation; // 0x9fc	
	GameTime_t m_flLastBounceSoundTime; // 0xa08	
	RotationVector m_vecGrenadeSpin; // 0xa0c	
	Vector m_vecLastHitSurfaceNormal; // 0xa18	
	int32_t m_nTicksAtZeroVelocity; // 0xa24	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x970
class CItemDogtags : public CItem
{
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_OwningPlayer; // 0x968	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_KillingPlayer; // 0x96c	
};

// Alignment: 3
// Size: 0xa38
class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	GameTime_t m_fExpireTime; // 0xa28	
	GameTime_t m_fNextDetectPlayerSound; // 0xa2c	
	CHandle< CBaseEntity > m_hDisplayGrenade; // 0xa30	
};

// Alignment: 0
// Size: 0x9c8
class CBreachChargeProjectile : public CBaseGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9c8
class CBumpMineProjectile : public CBaseGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9c8
class CTripWireFireProjectile : public CBaseGrenade
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xa30
class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:
	float m_flTimeToDetonate; // 0xa28	
	uint8_t m_numOpponentsHit; // 0xa2c	
	uint8_t m_numTeammatesHit; // 0xa2d	
};

// Alignment: 0
// Size: 0xa28
class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	// No members available
};

// Alignment: 34
// Size: 0x3060
class CChicken : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x20]; // 0xb08
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xb28	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xdf0	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xdf4	
	CountdownTimer m_updateTimer; // 0xdf8	
	Vector m_stuckAnchor; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	CountdownTimer m_stuckTimer; // 0xe20	
	CountdownTimer m_collisionStuckTimer; // 0xe38	
	bool m_isOnGround; // 0xe50	
private:
	[[maybe_unused]] uint8_t __pad0e51[0x3]; // 0xe51
public:
	Vector m_vFallVelocity; // 0xe54	
	ChickenActivity m_activity; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e64[0x4]; // 0xe64
public:
	CountdownTimer m_activityTimer; // 0xe68	
	float m_turnRate; // 0xe80	
	CHandle< CBaseEntity > m_fleeFrom; // 0xe84	
	CountdownTimer m_moveRateThrottleTimer; // 0xe88	
	CountdownTimer m_startleTimer; // 0xea0	
	CountdownTimer m_vocalizeTimer; // 0xeb8	
	GameTime_t m_flWhenZombified; // 0xed0	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_leader; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0edc[0x4]; // 0xedc
public:
	CountdownTimer m_reuseTimer; // 0xee0	
	bool m_hasBeenUsed; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0ef9[0x7]; // 0xef9
public:
	CountdownTimer m_jumpTimer; // 0xf00	
	float m_flLastJumpTime; // 0xf18	
	bool m_bInJump; // 0xf1c	
	bool m_isWaitingForLeader; // 0xf1d	
private:
	[[maybe_unused]] uint8_t __pad0f1e[0x200a]; // 0xf1e
public:
	CountdownTimer m_repathTimer; // 0x2f28	
	CountdownTimer m_inhibitDoorTimer; // 0x2f40	
private:
	[[maybe_unused]] uint8_t __pad2f58[0x78]; // 0x2f58
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2fd0	
private:
	[[maybe_unused]] uint8_t __pad2fe8[0x8]; // 0x2fe8
public:
	Vector m_vecPathGoal; // 0x2ff0	
	GameTime_t m_flActiveFollowStartTime; // 0x2ffc	
	CountdownTimer m_followMinuteTimer; // 0x3000	
	Vector m_vecLastEggPoopPosition; // 0x3018	
private:
	[[maybe_unused]] uint8_t __pad3024[0x4]; // 0x3024
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x3028	
private:
	[[maybe_unused]] uint8_t __pad3040[0x8]; // 0x3040
public:
	CountdownTimer m_BlockDirectionTimer; // 0x3048	
};

// Alignment: 0
// Size: 0x890
class CHostageCarriableProp : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x968
class CItemAssaultSuit : public CItem
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x968
class CItemHeavyAssaultSuit : public CItemAssaultSuit
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x968
class CItemKevlar : public CItem
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x988
class CItemDefuser : public CItem
{
public:
	EntitySpottedState_t m_entitySpottedState; // 0x968	
	int32_t m_nSpotRules; // 0x980	
};

// Alignment: 8
// Size: 0xc60
class CBasePlayerWeapon : public CEconEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0xc18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0xc1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0xc20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0xc24	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0xc28	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0xc30	
	CEntityIOOutput m_OnPlayerUse; // 0xc38	
};

// Alignment: 0
// Size: 0x920
class CBaseFlexAlias_funCBaseFlex : public CBaseFlex
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x998
class CScriptItem : public CItem
{
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x968	
	MoveType_t m_MoveTypeOverride; // 0x990	
};

// Alignment: 0
// Size: 0xa38
class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp
{
public:
	// No members available
};

// Alignment: 6
// Size: 0xa78
class CRagdollPropAttached : public CRagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xa38	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xa3c	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointBoneSpace; // 0xa40	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointRagdollSpace; // 0xa4c	
	bool m_bShouldDetach; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a59[0xf]; // 0xa59
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xa68	
};

// Alignment: 17
// Size: 0xe30
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xd98	
	float m_flDistance; // 0xda4	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xda8	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xdac	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xdb0	
	float m_flAjarAngle; // 0xdb4	
	QAngle m_angRotationAjarDeprecated; // 0xdb8	
	QAngle m_angRotationClosed; // 0xdc4	
	QAngle m_angRotationOpenForward; // 0xdd0	
	QAngle m_angRotationOpenBack; // 0xddc	
	QAngle m_angGoal; // 0xde8	
	Vector m_vecForwardBoundsMin; // 0xdf4	
	Vector m_vecForwardBoundsMax; // 0xe00	
	Vector m_vecBackBoundsMin; // 0xe0c	
	Vector m_vecBackBoundsMax; // 0xe18	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xe24	
private:
	[[maybe_unused]] uint8_t __pad0e25[0x3]; // 0xe25
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xe28	
};

// Alignment: 4
// Size: 0xe50
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xe30	
	bool m_isAbleToCloseAreaPortals; // 0xe31	
private:
	[[maybe_unused]] uint8_t __pad0e32[0x2]; // 0xe32
public:
	int32_t m_currentDamageState; // 0xe34	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xe38	
};

// Alignment: 13
// Size: 0x9d0
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0921[0x7]; // 0x921
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x928	
	// MNetworkEnable
	float m_flFieldOfView; // 0x940	
	float m_impactEnergyScale; // 0x944	
	HitGroup_t m_LastHitGroup; // 0x948	
	bool m_bApplyStressDamage; // 0x94c	
private:
	[[maybe_unused]] uint8_t __pad094d[0x3]; // 0x94d
public:
	int32_t m_bloodColor; // 0x950	
private:
	[[maybe_unused]] uint8_t __pad0954[0x5c]; // 0x954
public:
	int32_t m_navMeshID; // 0x9b0	
	int32_t m_iDamageCount; // 0x9b4	
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x9b8	
	CUtlSymbolLarge m_strRelationships; // 0x9c0	
	Hull_t m_eHull; // 0x9c8	
	uint32_t m_nNavHullIdx; // 0x9cc	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
};

// Alignment: 32
// Size: 0xad8
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0968[0x8]; // 0x968
public:
	bool m_bHasTriggerRadius; // 0x970	
	bool m_bHasPickupRadius; // 0x971	
private:
	[[maybe_unused]] uint8_t __pad0972[0x2]; // 0x972
public:
	float m_flPickupRadiusSqr; // 0x974	
	float m_flTriggerRadiusSqr; // 0x978	
	GameTime_t m_flLastPickupCheck; // 0x97c	
	bool m_bPlayerCounterListenerAdded; // 0x980	
	bool m_bPlayerInTriggerRadius; // 0x981	
private:
	[[maybe_unused]] uint8_t __pad0982[0x6]; // 0x982
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x988	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0x990	
	bool m_bAutoStartAmbientSound; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x7]; // 0x999
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0x9a0	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0x9a8	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0x9b0	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0x9b8	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0x9c0	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x9c8	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x9d0	
	CUtlSymbolLarge m_pPickupFilterName; // 0x9d8	
	CHandle< CBaseFilter > m_hPickupFilter; // 0x9e0	
private:
	[[maybe_unused]] uint8_t __pad09e4[0x4]; // 0x9e4
public:
	CEntityIOOutput m_OnPickup; // 0x9e8	
	CEntityIOOutput m_OnTimeout; // 0xa10	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xa38	
	CEntityIOOutput m_OnTriggerTouch; // 0xa60	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xa88	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xab0	
	float m_flPickupRadius; // 0xab8	
	float m_flTriggerRadius; // 0xabc	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xac0	
	bool m_bGlowWhenInTrigger; // 0xac8	
	Color m_glowColor; // 0xac9	
	bool m_bUseable; // 0xacd	
private:
	[[maybe_unused]] uint8_t __pad0ace[0x2]; // 0xace
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xad0	
};

// Alignment: 24
// Size: 0xb50
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0x9d0	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0x9d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0x9e0	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0x9e8	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0x9f0	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0x9f8	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa00	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xa08	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xa10	
private:
	[[maybe_unused]] uint8_t __pad0a18[0x8]; // 0xa18
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xa20	
	uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xa70	
	QAngle v_angle; // 0xa74	
	QAngle v_anglePrevious; // 0xa80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xa8c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	sky3dparams_t m_skybox3d; // 0xa90	
	GameTime_t m_fTimeLastHurt; // 0xb20	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xb24	
	GameTime_t m_fNextSuicideTime; // 0xb28	
	bool m_fInitHUD; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	CAI_Expresser* m_pExpresser; // 0xb30	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b3c[0x4]; // 0xb3c
public:
	float m_fHltvReplayDelay; // 0xb40	
	float m_fHltvReplayEnd; // 0xb44	
	CEntityIndex m_iHltvReplayEntity; // 0xb48	
};

// Alignment: 3
// Size: 0x8e8
class CCSGOViewModel : public CPredictedViewModel
{
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08d9[0x3]; // 0x8d9
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0x8dc	
	uint32_t m_nOldWeaponParity; // 0x8e0	
};

// Alignment: 54
// Size: 0xdd8
class CCSWeaponBase : public CBasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x28]; // 0xc60
public:
	bool m_bRemoveable; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0c89[0x3]; // 0xc89
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0xc8c	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0xc90	
	int32_t m_nFireSequenceStartTimeAck; // 0xc94	
	// MNetworkEnable
	bool m_bPlayerFireEventIsPrimary; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	HSequence m_seqIdle; // 0xc9c	
	HSequence m_seqFirePrimary; // 0xca0	
	HSequence m_seqFireSecondary; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x8]; // 0xca8
public:
	bool m_bPlayerAmmoStockOnPickup; // 0xcb0	
	bool m_bRequireUseToTouch; // 0xcb1	
private:
	[[maybe_unused]] uint8_t __pad0cb2[0x2]; // 0xcb2
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0xcb4	
	GameTime_t m_flLastTimeInAir; // 0xcb8	
	GameTime_t m_flLastDeployTime; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0xcc0	
	bool m_bReloadsWithClips; // 0xcc4	
private:
	[[maybe_unused]] uint8_t __pad0cc5[0x1b]; // 0xcc5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0xce0	
	bool m_bFireOnEmpty; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce5[0x3]; // 0xce5
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xce8	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0xd10	
	float m_flTurningInaccuracyDelta; // 0xd14	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0xd18	
	float m_flTurningInaccuracy; // 0xd24	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0xd28	
	GameTime_t m_flLastAccuracyUpdateTime; // 0xd2c	
	float m_fAccuracySmoothedForZoom; // 0xd30	
	GameTime_t m_fScopeZoomEndTime; // 0xd34	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0xd38	
	// MNetworkEnable
	float m_flRecoilIndex; // 0xd3c	
	// MNetworkEnable
	bool m_bBurstMode; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x3]; // 0xd41
public:
	// MNetworkEnable
	GameTime_t m_flPostponeFireReadyTime; // 0xd44	
	// MNetworkEnable
	bool m_bInReload; // 0xd48	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0xd49	
private:
	[[maybe_unused]] uint8_t __pad0d4a[0x2]; // 0xd4a
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0xd4c	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0xd50	
	// MNetworkEnable
	bool m_bSilencerOn; // 0xd51	
private:
	[[maybe_unused]] uint8_t __pad0d52[0x2]; // 0xd52
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0xd54	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0xd58	
	float m_flNextAttackRenderTimeOffset; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x8]; // 0xd60
public:
	bool m_bCanBePickedUp; // 0xd68	
	bool m_bUseCanOverrideNextOwnerTouchTime; // 0xd69	
private:
	[[maybe_unused]] uint8_t __pad0d6a[0x2]; // 0xd6a
public:
	GameTime_t m_nextOwnerTouchTime; // 0xd6c	
	GameTime_t m_nextPrevOwnerTouchTime; // 0xd70	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xd74	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d7c[0x20]; // 0xd7c
public:
	bool m_donated; // 0xd9c	
private:
	[[maybe_unused]] uint8_t __pad0d9d[0x3]; // 0xd9d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0xda0	
	bool m_bWasOwnedByCT; // 0xda4	
	bool m_bWasOwnedByTerrorist; // 0xda5	
	bool m_bFiredOutOfAmmoEvent; // 0xda6	
private:
	[[maybe_unused]] uint8_t __pad0da7[0x1]; // 0xda7
public:
	int32_t m_numRemoveUnownedWeaponThink; // 0xda8	
private:
	[[maybe_unused]] uint8_t __pad0dac[0x4]; // 0xdac
public:
	CIronSightController m_IronSightController; // 0xdb0	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0xdc8	
	GameTime_t m_flLastLOSTraceFailureTime; // 0xdcc	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0xdd0	
};

// Alignment: 9
// Size: 0xdf8
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xdd8	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xddc	
private:
	[[maybe_unused]] uint8_t __pad0de0[0x8]; // 0xde0
public:
	int32_t m_silencedModelIndex; // 0xde8	
	bool m_inPrecache; // 0xdec	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xded	
	bool m_bSkillReloadAvailable; // 0xdee	
	bool m_bSkillReloadLiftedReloadKey; // 0xdef	
	bool m_bSkillBoltInterruptAvailable; // 0xdf0	
	bool m_bSkillBoltLiftedFireKey; // 0xdf1	
};

// Alignment: 12
// Size: 0xe28
class CC4 : public CCSWeaponBase
{
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xdd8	
	Vector m_vecLastValidDroppedPosition; // 0xde4	
	bool m_bDoValidDroppedPositionCheck; // 0xdf0	
	// MNetworkEnable
	bool m_bStartedArming; // 0xdf1	
private:
	[[maybe_unused]] uint8_t __pad0df2[0x2]; // 0xdf2
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xdf4	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xdf8	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xdf9	
private:
	[[maybe_unused]] uint8_t __pad0dfa[0x6]; // 0xdfa
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xe00	
	int32_t m_nSpotRules; // 0xe18	
	bool m_bPlayedArmingBeeps[7]; // 0xe1c	
	bool m_bBombPlanted; // 0xe23	
	bool m_bDroppedFromDeath; // 0xe24	
};

// Alignment: 0
// Size: 0xdf8
class CDEagle : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponElite : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CWeaponNOVA : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CWeaponSawedoff : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0xe00
class CWeaponTaser : public CCSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0xdf8	
};

// Alignment: 0
// Size: 0xdd8
class CWeaponXM1014 : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CKnife : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xde8
class CMelee : public CCSWeaponBase
{
public:
	// MNetworkEnable
	GameTime_t m_flThrowAt; // 0xdd8	
	CHandle< CBaseEntity > m_hThrower; // 0xddc	
	bool m_bDidThrowDamage; // 0xde0	
};

// Alignment: 3
// Size: 0xe08
class CWeaponShield : public CCSWeaponBaseGun
{
public:
	float m_flBulletDamageAbsorbed; // 0xdf8	
	GameTime_t m_flLastBulletHitSoundTime; // 0xdfc	
	// MNetworkEnable
	float m_flDisplayHealth; // 0xe00	
};

// Alignment: 4
// Size: 0xb20
class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a29[0xb]; // 0xa29
public:
	bool m_bDetonated; // 0xa34	
private:
	[[maybe_unused]] uint8_t __pad0a35[0x3]; // 0xa35
public:
	IntervalTimer m_stillTimer; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a48[0xd0]; // 0xa48
public:
	bool m_bHasBouncedOffPlayer; // 0xb18	
};

// Alignment: 3
// Size: 0xa48
class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a28[0x8]; // 0xa28
public:
	int32_t m_shotsRemaining; // 0xa30	
	GameTime_t m_fExpireTime; // 0xa34	
private:
	[[maybe_unused]] uint8_t __pad0a38[0x8]; // 0xa38
public:
	uint16_t m_decoyWeaponDefIndex; // 0xa40	
};

// Alignment: 8
// Size: 0xc28
class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a28[0x18]; // 0xa28
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0xa40	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0xa44	
private:
	[[maybe_unused]] uint8_t __pad0a45[0x3]; // 0xa45
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0xa48	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0xa4c	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a64[0x4]; // 0xa64
public:
	// MNetworkEnable
	CUtlVector< uint8 > m_VoxelFrameData; // 0xa68	
	GameTime_t m_flLastBounce; // 0xa80	
	GameTime_t m_fllastSimulationTime; // 0xa84	
};

// Alignment: 9
// Size: 0xe18
class CBaseCSGrenade : public CCSWeaponBase
{
private:
	[[maybe_unused]] uint8_t __pad0dd8[0x20]; // 0xdd8
public:
	// MNetworkEnable
	bool m_bRedraw; // 0xdf8	
	// MNetworkEnable
	bool m_bIsHeldByPlayer; // 0xdf9	
	// MNetworkEnable
	bool m_bPinPulled; // 0xdfa	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xdfb	
	// MNetworkEnable
	EGrenadeThrowState m_eThrowStatus; // 0xdfc	
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xe00	
	// MNetworkEnable
	float m_flThrowStrength; // 0xe04	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xe08	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xe0c	
};

// Alignment: 2
// Size: 0xdf8
class CWeaponBaseItem : public CCSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0xdd8	
	// MNetworkEnable
	bool m_bRedraw; // 0xdf0	
};

// Alignment: 0
// Size: 0xdf8
class CItem_Healthshot : public CWeaponBaseItem
{
public:
	// No members available
};

// Alignment: 7
// Size: 0xdf0
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xdd8	
private:
	[[maybe_unused]] uint8_t __pad0dd9[0x3]; // 0xdd9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xddc	
	bool m_bRestorePrevWep; // 0xde0	
private:
	[[maybe_unused]] uint8_t __pad0de1[0x3]; // 0xde1
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xde4	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xde8	
	bool m_bDelayedHardPunchIncoming; // 0xdec	
	bool m_bDestroyAfterTaunt; // 0xded	
};

// Alignment: 0
// Size: 0xe18
class CSensorGrenade : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CBreachCharge : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CBumpMine : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdd8
class CTablet : public CCSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CTripWireFire : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponZoneRepulsor : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 147
// Size: 0x1568
class CCSPlayerPawnBase : public CBasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad0b50[0x10]; // 0xb50
public:
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; // 0xb60	
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0xbb0	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0xbb8	
	uint32_t m_iDisplayHistoryBits; // 0xbc0	
	float m_flLastAttackedTeammate; // 0xbc4	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0xbc8	
	GameTime_t m_blindUntilTime; // 0xbcc	
	GameTime_t m_blindStartTime; // 0xbd0	
	GameTime_t m_allowAutoFollowTime; // 0xbd4	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xbd8	
	int32_t m_nSpotRules; // 0xbf0	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xbf4	
private:
	[[maybe_unused]] uint8_t __pad0bf8[0x8]; // 0xbf8
public:
	CountdownTimer m_chickenIdleSoundTimer; // 0xc00	
	CountdownTimer m_chickenJumpSoundTimer; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c30[0xa0]; // 0xc30
public:
	Vector m_vecLastBookmarkedPosition; // 0xcd0	
	float m_flLastDistanceTraveledNotice; // 0xcdc	
	float m_flAccumulatedDistanceTraveled; // 0xce0	
	float m_flLastFriendlyFireDamageReductionRatio; // 0xce4	
	bool m_bRespawning; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0ce9[0x3]; // 0xce9
public:
	int32_t m_nLastPickupPriority; // 0xcec	
	float m_flLastPickupPriorityTime; // 0xcf0	
	// MNetworkEnable
	bool m_bIsScoped; // 0xcf4	
	// MNetworkEnable
	bool m_bIsWalking; // 0xcf5	
	// MNetworkEnable
	bool m_bResumeZoom; // 0xcf6	
	// MNetworkEnable
	bool m_bIsDefusing; // 0xcf7	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cf9[0x3]; // 0xcf9
public:
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xcfc	
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0xd00	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xd04	
private:
	[[maybe_unused]] uint8_t __pad0d05[0x3]; // 0xd05
public:
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0xd08	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xd0c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xd10	
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; // 0xd11	
private:
	[[maybe_unused]] uint8_t __pad0d12[0x2]; // 0xd12
public:
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; // 0xd14	
	float m_flNextGuardianTooFarHurtTime; // 0xd18	
	// MNetworkEnable
	GameTime_t m_flDetectedByEnemySensorTime; // 0xd1c	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0xd20	
	GameTime_t m_flLastEquippedHelmetTime; // 0xd24	
	GameTime_t m_flLastEquippedArmorTime; // 0xd28	
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xd2c	
	bool m_bResetArmorNextSpawn; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x3]; // 0xd31
public:
	GameTime_t m_flLastBumpMineBumpTime; // 0xd34	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0xd38	
	int32_t m_iNumSpawns; // 0xd3c	
	int32_t m_iShouldHaveCash; // 0xd40	
	bool m_bJustKilledTeammate; // 0xd44	
	bool m_bPunishedForTK; // 0xd45	
	bool m_bInvalidSteamLogonDelayed; // 0xd46	
private:
	[[maybe_unused]] uint8_t __pad0d47[0x1]; // 0xd47
public:
	int32_t m_iTeamKills; // 0xd48	
	GameTime_t m_flLastAction; // 0xd4c	
	float m_flNameChangeHistory[5]; // 0xd50	
	float m_fLastGivenDefuserTime; // 0xd64	
	float m_fLastGivenBombTime; // 0xd68	
	// MNetworkEnable
	bool m_bHasNightVision; // 0xd6c	
	// MNetworkEnable
	bool m_bNightVisionOn; // 0xd6d	
private:
	[[maybe_unused]] uint8_t __pad0d6e[0x2]; // 0xd6e
public:
	float m_fNextRadarUpdateTime; // 0xd70	
	float m_flLastMoneyUpdateTime; // 0xd74	
	char m_MenuStringBuffer[1024]; // 0xd78	
	float m_fIntroCamTime; // 0x1178	
	int32_t m_nMyCollisionGroup; // 0x117c	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1180	
	// MNetworkEnable
	bool m_bKilledByTaser; // 0x1181	
private:
	[[maybe_unused]] uint8_t __pad1182[0x2]; // 0x1182
public:
	// MNetworkEnable
	int32_t m_iMoveState; // 0x1184	
	GameTime_t m_grenadeParameterStashTime; // 0x1188	
	bool m_bGrenadeParametersStashed; // 0x118c	
private:
	[[maybe_unused]] uint8_t __pad118d[0x3]; // 0x118d
public:
	QAngle m_angStashedShootAngles; // 0x1190	
	Vector m_vecStashedGrenadeThrowPosition; // 0x119c	
	Vector m_vecStashedVelocity; // 0x11a8	
	QAngle m_angShootAngleHistory[2]; // 0x11b4	
	Vector m_vecThrowPositionHistory[2]; // 0x11cc	
	Vector m_vecVelocityHistory[2]; // 0x11e4	
	bool m_bDiedAirborne; // 0x11fc	
private:
	[[maybe_unused]] uint8_t __pad11fd[0x3]; // 0x11fd
public:
	CEntityIndex m_iBombSiteIndex; // 0x1200	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1204	
	bool m_bInBombZoneTrigger; // 0x1208	
	bool m_bWasInBombZoneTrigger; // 0x1209	
private:
	[[maybe_unused]] uint8_t __pad120a[0x2]; // 0x120a
public:
	// MNetworkEnable
	int32_t m_iDirection; // 0x120c	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x1210	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x1214	
	float m_flFlinchStack; // 0x1218	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x121c	
	// MNetworkEnable
	float m_flHitHeading; // 0x1220	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x1224	
	int32_t m_iHostagesKilled; // 0x1228	
	Vector m_vecTotalBulletForce; // 0x122c	
	// MNetworkEnable
	float m_flFlashDuration; // 0x1238	
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0x123c	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x1240	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x1244	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x1248	
private:
	[[maybe_unused]] uint8_t __pad1249[0x3]; // 0x1249
public:
	// MNetworkEnable
	float m_flLowerBodyYawTarget; // 0x124c	
	// MNetworkEnable
	bool m_bStrafing; // 0x1250	
private:
	[[maybe_unused]] uint8_t __pad1251[0x3]; // 0x1251
public:
	Vector m_lastStandingPos; // 0x1254	
	float m_ignoreLadderJumpTime; // 0x1260	
private:
	[[maybe_unused]] uint8_t __pad1264[0x4]; // 0x1264
public:
	CountdownTimer m_ladderSurpressionTimer; // 0x1268	
	Vector m_lastLadderNormal; // 0x1280	
	Vector m_lastLadderPos; // 0x128c	
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x1298	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x12a4	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x12a8	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x12ac	
private:
	[[maybe_unused]] uint8_t __pad12b8[0x8]; // 0x12b8
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x12c0	
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x12c4	
	bool m_bVCollisionInitted; // 0x12d0	
private:
	[[maybe_unused]] uint8_t __pad12d1[0x3]; // 0x12d1
public:
	Vector m_storedSpawnPosition; // 0x12d4	
	QAngle m_storedSpawnAngle; // 0x12e0	
	bool m_bIsSpawning; // 0x12ec	
	// MNetworkEnable
	bool m_bHideTargetID; // 0x12ed	
private:
	[[maybe_unused]] uint8_t __pad12ee[0x2]; // 0x12ee
public:
	int32_t m_nNumDangerZoneDamageHits; // 0x12f0	
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; // 0x12f4	
	// MNetworkEnable
	bool m_bHud_RadarHidden; // 0x12f5	
private:
	[[maybe_unused]] uint8_t __pad12f6[0x2]; // 0x12f6
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x12f8	
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; // 0x12fc	
	// MNetworkEnable
	int32_t m_nDeathCamMusic; // 0x1300	
	// MNetworkEnable
	int32_t m_iAddonBits; // 0x1304	
	// MNetworkEnable
	int32_t m_iPrimaryAddon; // 0x1308	
	// MNetworkEnable
	int32_t m_iSecondaryAddon; // 0x130c	
	int32_t m_nTeamDamageGivenForMatch; // 0x1310	
	bool m_bTDGaveProtectionWarning; // 0x1314	
	bool m_bTDGaveProtectionWarningThisRound; // 0x1315	
private:
	[[maybe_unused]] uint8_t __pad1316[0x2]; // 0x1316
public:
	float m_flLastTHWarningTime; // 0x1318	
	CUtlStringToken m_currentDeafnessFilter; // 0x131c	
	int32_t m_NumEnemiesKilledThisSpawn; // 0x1320	
	int32_t m_NumEnemiesKilledThisRound; // 0x1324	
	int32_t m_NumEnemiesAtRoundStart; // 0x1328	
	int32_t m_iRoundsWon; // 0x132c	
	int32_t m_lastRoundResult; // 0x1330	
	bool m_wasNotKilledNaturally; // 0x1334	
private:
	[[maybe_unused]] uint8_t __pad1335[0x3]; // 0x1335
public:
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1338	
	int32_t m_iDeathFlags; // 0x134c	
	CHandle< CChicken > m_hPet; // 0x1350	
private:
	[[maybe_unused]] uint8_t __pad1354[0x1cc]; // 0x1354
public:
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x1520	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x1522	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x1524	
private:
	[[maybe_unused]] uint8_t __pad1526[0x2]; // 0x1526
public:
	int32_t m_nSuicides; // 0x1528	
	// MNetworkEnable
	int32_t m_nSurvivalTeamNumber; // 0x152c	
	bool m_bHasDeathInfo; // 0x1530	
private:
	[[maybe_unused]] uint8_t __pad1531[0x3]; // 0x1531
public:
	float m_flDeathInfoTime; // 0x1534	
	Vector m_vecDeathInfoOrigin; // 0x1538	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x1544	
private:
	[[maybe_unused]] uint8_t __pad1545[0x3]; // 0x1545
public:
	int32_t m_LastHitBox; // 0x1548	
	int32_t m_LastHealth; // 0x154c	
	float m_flLastCollisionCeiling; // 0x1550	
	float m_flLastCollisionCeilingChangeTime; // 0x1554	
	CCSBot* m_pBot; // 0x1558	
	bool m_bBotAllowActive; // 0x1560	
	bool m_bCommittingSuicideOnTeamChange; // 0x1561	
};

// Alignment: 0
// Size: 0x1590
class CCSObserverPawn : public CCSPlayerPawnBase
{
public:
	// No members available
};

// Alignment: 45
// Size: 0x1f60
class CCSPlayerPawn : public CCSPlayerPawnBase
{
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x1568	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x1570	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x1578	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1580	
	CCSPlayer_RadioServices* m_pRadioServices; // 0x1588	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x1590	
	uint16_t m_nCharacterDefIndex; // 0x1598	
private:
	[[maybe_unused]] uint8_t __pad159a[0x6]; // 0x159a
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hPreviousModel; // 0x15a0	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15a9[0x7]; // 0x15a9
public:
	CUtlString m_strVOPrefix; // 0x15b0	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15ca[0xae]; // 0x15ca
public:
	// MNetworkEnable
	bool m_bInBuyZone; // 0x1678	
	bool m_bWasInBuyZone; // 0x1679	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x167a	
	// MNetworkEnable
	bool m_bInBombZone; // 0x167b	
	bool m_bWasInHostageRescueZone; // 0x167c	
private:
	[[maybe_unused]] uint8_t __pad167d[0x3]; // 0x167d
public:
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0x1680	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0x1684	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1688	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1689	
private:
	[[maybe_unused]] uint8_t __pad168a[0x2]; // 0x168a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x168c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1690	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x1694	
	float m_flLandseconds; // 0x1698	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x169c	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x16a8	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x16b4	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x16b8	
private:
	[[maybe_unused]] uint8_t __pad16bc[0x4]; // 0x16bc
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x16c0	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x16d8	
private:
	[[maybe_unused]] uint8_t __pad16d9[0x557]; // 0x16d9
public:
	CTransform m_xLastHeadBoneTransform; // 0x1c30	
	bool m_bLastHeadBoneTransformIsValid; // 0x1c50	
private:
	[[maybe_unused]] uint8_t __pad1c51[0x3]; // 0x1c51
public:
	GameTime_t m_lastLandTime; // 0x1c54	
	int32_t m_iPlayerLocked; // 0x1c58	
private:
	[[maybe_unused]] uint8_t __pad1c5c[0x4]; // 0x1c5c
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1c60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1c64	
	bool m_bNextSprayDecalTimeExpedited; // 0x1c68	
private:
	[[maybe_unused]] uint8_t __pad1c69[0x3]; // 0x1c69
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1c6c	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1c70	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1c7c	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1c88	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1cc8	
private:
	[[maybe_unused]] uint8_t __pad1cc9[0x7]; // 0x1cc9
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x1cd0	
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x1f48	
	bool m_bSkipOneHeadConstraintUpdate; // 0x1f54	
};

// Alignment: 1
// Size: 0x9d8
class CHostageExpresserShim : public CBaseCombatCharacter
{
public:
	CAI_Expresser* m_pExpresser; // 0x9d0	
};

// Alignment: 38
// Size: 0x2c68
class CHostage : public CHostageExpresserShim
{
private:
	[[maybe_unused]] uint8_t __pad09d8[0x10]; // 0x9d8
public:
	CEntityIOOutput m_OnHostageBeginGrab; // 0x9e8	
	CEntityIOOutput m_OnFirstPickedUp; // 0xa10	
	CEntityIOOutput m_OnDroppedNotRescued; // 0xa38	
	CEntityIOOutput m_OnRescued; // 0xa60	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xa88	
	int32_t m_nSpotRules; // 0xaa0	
	uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xaa4	
	uint32_t m_nHostageSpawnRandomFactor; // 0xaa8	
	bool m_bRemove; // 0xaac	
private:
	[[maybe_unused]] uint8_t __pad0aad[0x3]; // 0xaad
public:
	// MNetworkEnable
	Vector m_vel; // 0xab0	
	// MNetworkEnable
	bool m_isRescued; // 0xabc	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xabd	
private:
	[[maybe_unused]] uint8_t __pad0abe[0x2]; // 0xabe
public:
	// MNetworkEnable
	int32_t m_nHostageState; // 0xac0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_leader; // 0xac4	
	CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0xad0	
	bool m_hasBeenUsed; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
public:
	Vector m_accel; // 0xaec	
	bool m_isRunning; // 0xaf8	
	bool m_isCrouching; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0afa[0x6]; // 0xafa
public:
	CountdownTimer m_jumpTimer; // 0xb00	
	bool m_isWaitingForLeader; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x200f]; // 0xb19
public:
	CountdownTimer m_repathTimer; // 0x2b28	
	CountdownTimer m_inhibitDoorTimer; // 0x2b40	
private:
	[[maybe_unused]] uint8_t __pad2b58[0x78]; // 0x2b58
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2bd0	
private:
	[[maybe_unused]] uint8_t __pad2be8[0x8]; // 0x2be8
public:
	CountdownTimer m_wiggleTimer; // 0x2bf0	
private:
	[[maybe_unused]] uint8_t __pad2c08[0x4]; // 0x2c08
public:
	bool m_isAdjusted; // 0x2c0c	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x2c0d	
private:
	[[maybe_unused]] uint8_t __pad2c0e[0x2]; // 0x2c0e
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2c10	
	GameTime_t m_fLastGrabTime; // 0x2c14	
	Vector m_vecPositionWhenStartedDroppingToGround; // 0x2c18	
	Vector m_vecGrabbedPos; // 0x2c24	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x2c30	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x2c34	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x2c38	
	int32_t m_nApproachRewardPayouts; // 0x2c3c	
	int32_t m_nPickupEventCount; // 0x2c40	
	Vector m_vecSpawnGroundPos; // 0x2c44	
};

// Alignment: 0
// Size: 0x2c68
class CHostageAlias_info_hostage_spawn : public CHostage
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x988
class CItemDefuserAlias_item_defuser : public CItemDefuser
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CAK47 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponAug : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponAWP : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponBizon : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponFamas : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponFiveSeven : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponG3SG1 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponGalilAR : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponGlock : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponHKP2000 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponM4A1 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponMAC10 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponMag7 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponMP7 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponMP9 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponNegev : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponP250 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponP90 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponSCAR20 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponSG556 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponSSG08 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponTec9 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponUMP45 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xdf8
class CWeaponM249 : public CCSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CMolotovGrenade : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CIncendiaryGrenade : public CMolotovGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CDecoyGrenade : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CFlashbang : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe18
class CHEGrenade : public CBaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe20
class CSmokeGrenade : public CBaseCSGrenade
{
public:
	// No members available
};

