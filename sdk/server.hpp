#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: server.dll
// Classes count: 785
// Enums count: 128
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: server.dll (project 'navlib')
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

// Registered binary: server.dll (project 'navlib')
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

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x3
enum class SequenceFinishNotifyState_t : uint8_t
{
	eDoNotNotify = 0x0,
	eNotifyWhenFinished = 0x1,
	eNotifyTriggered = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class AmmoPosition_t : uint32_t
{
	AMMO_POSITION_INVALID = 0xffffffffffffffff,
	AMMO_POSITION_PRIMARY = 0x0,
	AMMO_POSITION_SECONDARY = 0x1,
	AMMO_POSITION_COUNT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class ChatIgnoreType_t : uint32_t
{
	CHAT_IGNORE_NONE = 0x0,
	CHAT_IGNORE_ALL = 0x1,
	CHAT_IGNORE_TEAM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x3
enum class FixAngleSet_t : uint8_t
{
	None = 0x0,
	Absolute = 0x1,
	Relative = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class CommandExecMode_t : uint32_t
{
	EXEC_MANUAL = 0x0,
	EXEC_LEVELSTART = 0x1,
	EXEC_PERIODIC = 0x2,
	EXEC_MODES_COUNT = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class CommandEntitySpecType_t : uint32_t
{
	SPEC_SEARCH = 0x0,
	SPEC_TYPES_COUNT = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2b
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
	AE_BODYGROUP_SET_VALUE = 0x11,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x12,
	AE_WEAPON_PERFORM_ATTACK = 0x13,
	AE_FIRE_INPUT = 0x14,
	AE_CL_CLOTH_ATTR = 0x15,
	AE_CL_CLOTH_GROUND_OFFSET = 0x16,
	AE_CL_CLOTH_STIFFEN = 0x17,
	AE_CL_CLOTH_EFFECT = 0x18,
	AE_CL_CREATE_ANIM_SCOPE_PROP = 0x19,
	AE_PULSE_GRAPH = 0x1a,
	AE_PULSE_GRAPH_LOOKAT = 0x1b,
	AE_PULSE_GRAPH_AIMAT = 0x1c,
	AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1d,
	AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1e,
	AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x1f,
	AE_CL_BODYGROUP_SET_TO_CLIP = 0x20,
	AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x21,
	AE_SV_SHOW_SILENCER = 0x22,
	AE_SV_ATTACH_SILENCER_COMPLETE = 0x23,
	AE_SV_HIDE_SILENCER = 0x24,
	AE_SV_DETACH_SILENCER_COMPLETE = 0x25,
	AE_CL_EJECT_MAG = 0x26,
	AE_WPN_COMPLETE_RELOAD = 0x27,
	AE_WPN_HEALTHSHOT_INJECT = 0x28,
	AE_CL_C4_SCREEN_TEXT = 0x29,
	AE_GRENADE_THROW_COMPLETE = 0x2a,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class ObserverInterpState_t : uint32_t
{
	OBSERVER_INTERP_NONE = 0x0,
	OBSERVER_INTERP_TRAVELING = 0x1,
	OBSERVER_INTERP_SETTLING = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x1b
enum class RumbleEffect_t : uint32_t
{
	RUMBLE_INVALID = 0xffffffffffffffff,
	// MPropertySuppressEnumerator
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
	// MPropertySuppressEnumerator
	NUM_RUMBLE_EFFECTS = 0x19,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x19
enum class WeaponSound_t : uint32_t
{
	WEAPON_SOUND_EMPTY = 0x0,
	WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
	WEAPON_SOUND_SINGLE = 0x2,
	WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
	WEAPON_SOUND_MELEE_MISS = 0x4,
	WEAPON_SOUND_MELEE_HIT = 0x5,
	WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
	WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
	WEAPON_SOUND_MELEE_HIT_NPC = 0x8,
	WEAPON_SOUND_SPECIAL1 = 0x9,
	WEAPON_SOUND_SPECIAL2 = 0xa,
	WEAPON_SOUND_SPECIAL3 = 0xb,
	WEAPON_SOUND_NEARLYEMPTY = 0xc,
	WEAPON_SOUND_IMPACT = 0xd,
	WEAPON_SOUND_REFLECT = 0xe,
	WEAPON_SOUND_SECONDARY_IMPACT = 0xf,
	WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
	WEAPON_SOUND_RELOAD = 0x11,
	WEAPON_SOUND_SINGLE_ACCURATE = 0x12,
	WEAPON_SOUND_ZOOM_IN = 0x13,
	WEAPON_SOUND_ZOOM_OUT = 0x14,
	WEAPON_SOUND_MOUSE_PRESSED = 0x15,
	WEAPON_SOUND_DROP = 0x16,
	WEAPON_SOUND_RADIO_USE = 0x17,
	// MPropertySuppressEnumerator
	WEAPON_SOUND_NUM_TYPES = 0x18,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class AmmoFlags_t : uint32_t
{
	AMMO_FORCE_DROP_IF_CARRIED = 0x1,
	AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	AMMO_FLAG_MAX = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0xf
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
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	DMG_LASTDFLAG = 0x400,
	DFLAG_IGNORE_ARMOR = 0x800,
	DFLAG_SUPPRESS_UTILREMOVE = 0x1000,
};

// Registered binary: server.dll (project 'server')
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
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	DMG_LASTGENERICFLAG = 0x1000000,
	DMG_HEADSHOT = 0x2000000,
	DMG_DANGERZONE = 0x4000000,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x11
enum class BaseExplosionTypes_t : uint32_t
{
	// MPropertyFriendlyName "Default"
	EXPLOSION_TYPE_DEFAULT = 0x0,
	// MPropertyFriendlyName "Grenade"
	EXPLOSION_TYPE_GRENADE = 0x1,
	// MPropertyFriendlyName "Molotov"
	EXPLOSION_TYPE_MOLOTOV = 0x2,
	// MPropertyFriendlyName "Fireworks"
	EXPLOSION_TYPE_FIREWORKS = 0x3,
	// MPropertyFriendlyName "Gascan"
	EXPLOSION_TYPE_GASCAN = 0x4,
	// MPropertyFriendlyName "Gas Cylinder"
	EXPLOSION_TYPE_GASCYLINDER = 0x5,
	// MPropertyFriendlyName "Explosive Barrel"
	EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
	// MPropertyFriendlyName "Electrical"
	EXPLOSION_TYPE_ELECTRICAL = 0x7,
	// MPropertyFriendlyName "EMP"
	EXPLOSION_TYPE_EMP = 0x8,
	// MPropertyFriendlyName "Shrapnel"
	EXPLOSION_TYPE_SHRAPNEL = 0x9,
	// MPropertyFriendlyName "Smoke Grenade"
	EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
	// MPropertyFriendlyName "Flashbang"
	EXPLOSION_TYPE_FLASHBANG = 0xb,
	// MPropertyFriendlyName "Tripmine"
	EXPLOSION_TYPE_TRIPMINE = 0xc,
	// MPropertyFriendlyName "Ice"
	EXPLOSION_TYPE_ICE = 0xd,
	// MPropertyFriendlyName "None"
	EXPLOSION_TYPE_NONE = 0xe,
	// MPropertyFriendlyName "Custom"
	EXPLOSION_TYPE_CUSTOM = 0xf,
	// MPropertySuppressEnumerator
	EXPLOSION_TYPE_COUNT = 0x10,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class CanPlaySequence_t : uint32_t
{
	CANNOT_PLAY = 0x0,
	CAN_PLAY_NOW = 0x1,
	CAN_PLAY_ENQUEUED = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class ScriptedOnDeath_t : uint32_t
{
	SS_ONDEATH_NOT_APPLICABLE = 0xffffffffffffffff,
	SS_ONDEATH_UNDEFINED = 0x0,
	SS_ONDEATH_RAGDOLL = 0x1,
	SS_ONDEATH_ANIMATED_DEATH = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15
enum class InputBitMask_t : uint64_t
{
	// MEnumeratorIsNotAFlag
	IN_NONE = 0x0,
	// MEnumeratorIsNotAFlag
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
	// MEnumeratorIsNotAFlag
	IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
	IN_USEORRELOAD = 0x100000000,
	IN_SCORE = 0x200000000,
	IN_ZOOM = 0x400000000,
	IN_LOOK_AT_WEAPON = 0x800000000,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x27
enum class DebugOverlayBits_t : uint64_t
{
	// MPropertyFriendlyName "Ent Text"
	// MPropertyDescription "show text debug overlay for this entity"
	OVERLAY_TEXT_BIT = 0x1,
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "show name debug overlay for this entity"
	OVERLAY_NAME_BIT = 0x2,
	// MPropertyFriendlyName "Bounding Box"
	// MPropertyDescription "show bounding box overlay for this entity"
	OVERLAY_BBOX_BIT = 0x4,
	// MPropertyFriendlyName "Pivot"
	// MPropertyDescription "show pivot for this entity"
	OVERLAY_PIVOT_BIT = 0x8,
	// MPropertyFriendlyName "Message"
	// MPropertyDescription "TODO show messages for this entity"
	OVERLAY_MESSAGE_BIT = 0x10,
	// MPropertyFriendlyName "ABS BBox"
	// MPropertyDescription "show abs bounding box overlay"
	OVERLAY_ABSBOX_BIT = 0x20,
	// MPropertyFriendlyName "RBox"
	// MPropertyDescription "show the rbox overlay"
	OVERLAY_RBOX_BIT = 0x40,
	// MPropertyFriendlyName "Entities That Block LOS"
	// MPropertyDescription "TODO show entities that block NPC LOS"
	OVERLAY_SHOW_BLOCKSLOS = 0x80,
	// MPropertyFriendlyName "Attachment Points"
	// MPropertyDescription "show attachment points"
	OVERLAY_ATTACHMENTS_BIT = 0x100,
	// MPropertyFriendlyName "Interpolated Attachment Points"
	// MPropertyDescription "show interpolated attachment points"
	OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
	// MPropertyFriendlyName "Interpolated Pivot"
	// MPropertyDescription "show interpolated pivot for this entity"
	OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
	// MPropertyFriendlyName "Skeleton"
	// MPropertyDescription "show skeleton for this entity"
	OVERLAY_SKELETON_BIT = 0x800,
	// MPropertyFriendlyName "Interpolated Skeleton"
	// MPropertyDescription "show interpolated skeleton"
	OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
	// MPropertyFriendlyName "Trigger Bounds"
	// MPropertyDescription "show trigger bounds"
	OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
	// MPropertyFriendlyName "Hitboxes"
	// MPropertyDescription "show hitboxes for this entity"
	OVERLAY_HITBOX_BIT = 0x4000,
	// MPropertyFriendlyName "Interpolated Hitboxes"
	// MPropertyDescription "show interpolated hitboxes"
	OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
	// MPropertyFriendlyName "Autoaim Radius"
	// MPropertyDescription "TODO Display autoaim radius"
	OVERLAY_AUTOAIM_BIT = 0x10000,
	// MPropertyFriendlyName "NPC Selected"
	// MPropertyDescription "TODO the npc is current selected SOURCE2_UNSUPPORTED?"
	OVERLAY_NPC_SELECTED_BIT = 0x20000,
	// MPropertyFriendlyName "Joint Info"
	// MPropertyDescription "hows joint info for this entity"
	OVERLAY_JOINT_INFO_BIT = 0x40000,
	// MPropertyFriendlyName "NPC Route"
	// MPropertyDescription "draw the route for this npc"
	OVERLAY_NPC_ROUTE_BIT = 0x80000,
	OVERLAY_VISIBILITY_TRACES_BIT = 0x100000,
	// MPropertyFriendlyName "NPC Enemies"
	// MPropertyDescription "show npc's enemies"
	OVERLAY_NPC_ENEMIES_BIT = 0x400000,
	// MPropertyFriendlyName "NPC Conditions"
	// MPropertyDescription "show NPC's current conditions"
	OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
	// MPropertyFriendlyName "NPC Combat"
	// MPropertyDescription "show npc combat related information (squads/slots/etc)"
	OVERLAY_NPC_COMBAT_BIT = 0x1000000,
	// MPropertyFriendlyName "NPC Schedule Tasks"
	// MPropertyDescription "show npc schedule task details"
	OVERLAY_NPC_TASK_BIT = 0x2000000,
	// MPropertyFriendlyName "NPC Body Locations"
	// MPropertyDescription "show npc body locations"
	OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
	// MPropertyFriendlyName "NPC View Conde"
	// MPropertyDescription "show npc's viewcone"
	OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
	// MPropertyFriendlyName "NPC Kill"
	// MPropertyDescription "kill the NPC, running all appropriate AI."
	OVERLAY_NPC_KILL_BIT = 0x10000000,
	// MPropertyFriendlyName "OVERLAY_WC_CHANGE_ENTITY"
	// MPropertyDescription "object changed during WC edit (probably unused)"
	OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
	// MPropertyFriendlyName "Buddha Mode"
	// MPropertyDescription "TODO take damage but don't die"
	OVERLAY_BUDDHA_MODE = 0x40000000,
	// MPropertyFriendlyName "NPC Steering"
	// MPropertyDescription "Show the steering regulations associated with the NPC"
	OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
	// MPropertyFriendlyName "NPC Task Console Text"
	// MPropertyDescription "show task and schedule names when they start"
	OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
	// MPropertyFriendlyName "Prop Debug"
	// MPropertyDescription "Show prop health and bounds"
	OVERLAY_PROP_DEBUG = 0x200000000,
	// MPropertyFriendlyName "NPC Relationships"
	// MPropertyDescription "show relationships between target and all children"
	OVERLAY_NPC_RELATION_BIT = 0x400000000,
	// MPropertyFriendlyName "View Offset"
	// MPropertyDescription "TODO show view offset"
	OVERLAY_VIEWOFFSET = 0x800000000,
	// MPropertyFriendlyName "Collision Wireframe"
	// MPropertyDescription "show collision wireframe"
	OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
	// MPropertyFriendlyName "Actor Name"
	// MPropertyDescription "show fancy actor name over head of actors (entities which return ShouldDisplayInActorNames() == true)"
	OVERLAY_ACTORNAME_BIT = 0x4000000000,
	// MPropertyFriendlyName "NPC Gather Conditions"
	// MPropertyDescription "show condition gathering text info"
	OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
	// MPropertyFriendlyName "NPC Ability Ranges"
	// MPropertyDescription "draw range indicators for all abilities on the NPC"
	OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0xe
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0x0,
	MOVETYPE_OBSOLETE = 0x1,
	MOVETYPE_WALK = 0x2,
	MOVETYPE_FLY = 0x3,
	MOVETYPE_FLYGRAVITY = 0x4,
	MOVETYPE_VPHYSICS = 0x5,
	MOVETYPE_PUSH = 0x6,
	MOVETYPE_NOCLIP = 0x7,
	MOVETYPE_OBSERVER = 0x8,
	MOVETYPE_LADDER = 0x9,
	MOVETYPE_CUSTOM = 0xa,
	MOVETYPE_LAST = 0xb,
	MOVETYPE_INVALID = 0xb,
	MOVETYPE_MAX_BITS = 0x5,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class CRR_Response__ResponseEnum_t : uint32_t
{
	MAX_RESPONSE_NAME = 0xc0,
	MAX_RULE_NAME = 0x80,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class LessonPanelLayoutFileTypes_t : uint32_t
{
	LAYOUT_HAND_DEFAULT = 0x0,
	LAYOUT_WORLD_DEFAULT = 0x1,
	LAYOUT_CUSTOM = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class ScriptedMoveType_t : uint32_t
{
	SCRIPTED_MOVETYPE_NONE = 0x0,
	SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
	SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
	SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class ForcedCrouchState_t : uint32_t
{
	FORCEDCROUCH_NONE = 0x0,
	FORCEDCROUCH_CROUCHED = 0x1,
	FORCEDCROUCH_UNCROUCHED = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class CLogicBranchList__LogicBranchListenerLastState_t : uint32_t
{
	LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
	LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
	LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
	LOGIC_BRANCH_LISTENER_MIXED = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class ValueRemapperOutputType_t : uint32_t
{
	OutputType_AnimationCycle = 0x0,
	OutputType_RotationX = 0x1,
	OutputType_RotationY = 0x2,
	OutputType_RotationZ = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class PointWorldTextJustifyHorizontal_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class doorCheck_e : uint32_t
{
	DOOR_CHECK_FORWARD = 0x0,
	DOOR_CHECK_BACKWARD = 0x1,
	DOOR_CHECK_FULL = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class PropDoorRotatingSpawnPos_t : uint32_t
{
	DOOR_SPAWN_CLOSED = 0x0,
	DOOR_SPAWN_OPEN_FORWARD = 0x1,
	DOOR_SPAWN_OPEN_BACK = 0x2,
	DOOR_SPAWN_AJAR = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class PropDoorRotatingOpenDirection_e : uint32_t
{
	DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
	DOOR_ROTATING_OPEN_FORWARD = 0x1,
	DOOR_ROTATING_OPEN_BACKWARD = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ScriptedConflictResponse_t : uint32_t
{
	SS_CONFLICT_ENQUEUE = 0x0,
	SS_CONFLICT_INTERRUPT = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class TRAIN_CODE : uint32_t
{
	TRAIN_SAFE = 0x0,
	TRAIN_BLOCKING = 0x1,
	TRAIN_FOLLOWING = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x5
enum class NPCFollowFormation_t : uint32_t
{
	// MPropertyFriendlyName "Default"
	Default = 0xffffffffffffffff,
	// MPropertyFriendlyName "Close Circle"
	CloseCircle = 0x0,
	// MPropertyFriendlyName "Wide Circle"
	WideCircle = 0x1,
	// MPropertyFriendlyName "Medium Circle"
	MediumCircle = 0x5,
	// MPropertyFriendlyName "Sidekick"
	Sidekick = 0x6,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class NPCLookType_t : uint32_t
{
	// MPropertyFriendlyName "Chest"
	Chest = 0x0,
	// MPropertyFriendlyName "Head"
	Head = 0x1,
	// MPropertyFriendlyName "Eyes"
	Eyes = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class SoundEventStartType_t : uint32_t
{
	// MPropertyFriendlyName "From Player"
	SOUNDEVENT_START_PLAYER = 0x0,
	// MPropertyFriendlyName "From World"
	SOUNDEVENT_START_WORLD = 0x1,
	// MPropertyFriendlyName "From Entity"
	SOUNDEVENT_START_ENTITY = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class FuncDoorSpawnPos_t : uint32_t
{
	FUNC_DOOR_SPAWN_CLOSED = 0x0,
	FUNC_DOOR_SPAWN_OPEN = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class Explosions : uint32_t
{
	expRandom = 0x0,
	expDirected = 0x1,
	expUsePrecise = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class EOverrideBlockLOS_t : uint32_t
{
	BLOCK_LOS_DEFAULT = 0x0,
	BLOCK_LOS_FORCE_FALSE = 0x1,
	BLOCK_LOS_FORCE_TRUE = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class MoveLinearAuthoredPos_t : uint32_t
{
	MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
	MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
	MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class TrackOrientationType_t : uint32_t
{
	TrackOrientation_Fixed = 0x0,
	TrackOrientation_FacePath = 0x1,
	TrackOrientation_FacePathAngles = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint32_t
{
	kMIN_THRESHOLD = 0x0,
	kMIN_FULL = 0x1,
	kHIGHWATER = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x17
enum class SoundFlags_t : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
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
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	ALL_CONTEXTS = 0xfffffffffff00000,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	ALL_SCENTS = 0x0,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	ALL_SOUNDS = 0xfffff,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class TrainVelocityType_t : uint32_t
{
	TrainVelocity_Instantaneous = 0x0,
	TrainVelocity_LinearBlend = 0x1,
	TrainVelocity_EaseInEaseOut = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class TrainOrientationType_t : uint32_t
{
	TrainOrientation_Fixed = 0x0,
	TrainOrientation_AtPathTracks = 0x1,
	TrainOrientation_LinearBlend = 0x2,
	TrainOrientation_EaseInEaseOut = 0x3,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0xa
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0x0,
	USE_BEST_COLLISION_BOUNDS = 0x1,
	USE_HITBOXES = 0x2,
	USE_SPECIFIED_BOUNDS = 0x3,
	USE_GAME_CODE = 0x4,
	USE_ROTATION_EXPANDED_BOUNDS = 0x5,
	USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 0x6,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x7,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x8,
	SURROUNDING_TYPE_BIT_COUNT = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x2
enum class ShatterPanelMode : uint8_t
{
	SHATTER_GLASS = 0x0,
	SHATTER_DRYWALL = 0x1,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x3
enum class OnFrame : uint8_t
{
	ONFRAME_UNKNOWN = 0x0,
	ONFRAME_TRUE = 0x1,
	ONFRAME_FALSE = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x2
enum class ShardSolid_t : uint8_t
{
	SHARD_SOLID = 0x0,
	SHARD_DEBRIS = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x5
enum class AnimLoopMode_t : uint32_t
{
	// MPropertySuppressEnumerator
	ANIM_LOOP_MODE_INVALID = 0xffffffffffffffff,
	ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
	ANIM_LOOP_MODE_LOOPING = 0x1,
	ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
	// MPropertySuppressEnumerator
	ANIM_LOOP_MODE_COUNT = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	// MPropertyFriendlyName "Precipitation"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_PRECIPITATION = 0x0,
	// MPropertyFriendlyName "PlayerWeapon"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class SubclassVDataChangeType_t : uint32_t
{
	SUBCLASS_VDATA_CREATED = 0x0,
	SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
	SUBCLASS_VDATA_RELOADED = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class WeaponSwitchReason_t : uint32_t
{
	eDrawn = 0x0,
	eEquipped = 0x1,
	eUserInitiatedSwitchToLast = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class WeaponAttackType_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	ePrimary = 0x0,
	eSecondary = 0x1,
	eCount = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x5
enum class StanceType_t : uint32_t
{
	// MPropertySuppressEnumerator
	STANCE_CURRENT = 0xffffffffffffffff,
	// MPropertyFriendlyName "Default"
	STANCE_DEFAULT = 0x0,
	// MPropertyFriendlyName "Crouching"
	STANCE_CROUCHING = 0x1,
	// MPropertyFriendlyName "Prone"
	STANCE_PRONE = 0x2,
	// MPropertySuppressEnumerator
	NUM_STANCES = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class ModifyDamageReturn_t : uint32_t
{
	CONTINUE_TO_APPLY_DAMAGE = 0x0,
	ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x3
enum class BeginDeathLifeStateTransition_t : uint8_t
{
	NO_CHANGE_IN_LIFESTATE = 0x0,
	TRANSITION_TO_LIFESTATE_DYING = 0x1,
	TRANSITION_TO_LIFESTATE_DEAD = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class SpawnPointCoopEnemy__BotDefaultBehavior_t : uint32_t
{
	DEFEND_AREA = 0x0,
	HUNT = 0x1,
	CHARGE_ENEMY = 0x2,
	DEFEND_INVESTIGATE = 0x3,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
enum class MoveMountingAmount_t : uint32_t
{
	MOVE_MOUNT_NONE = 0x0,
	MOVE_MOUNT_LOW = 0x1,
	MOVE_MOUNT_HIGH = 0x2,
	MOVE_MOUNT_MAXCOUNT = 0x3,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4a
enum class loadout_slot_t : uint32_t
{
	LOADOUT_SLOT_PROMOTED = 0xfffffffffffffffe,
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x9
enum class PreviewCharacterMode : uint32_t
{
	DIORAMA = 0x0,
	MAIN_MENU = 0x1,
	BUY_MENU = 0x2,
	TEAM_SELECT = 0x3,
	END_OF_MATCH = 0x4,
	INVENTORY_INSPECT = 0x5,
	WALKING = 0x6,
	TEAM_INTRO = 0x7,
	WINGMAN_INTRO = 0x8,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x6
enum class PreviewWeaponState : uint32_t
{
	DROPPED = 0x0,
	HOLSTERED = 0x1,
	DEPLOYED = 0x2,
	PLANTED = 0x3,
	INSPECT = 0x4,
	ICON = 0x5,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x17
enum class PreviewEOMCelebration : uint32_t
{
	WALKUP = 0x0,
	PUNCHING = 0x1,
	SWAGGER = 0x2,
	DROPDOWN = 0x3,
	STRETCH = 0x4,
	SWAT_FEMALE = 0x5,
	MASK_F = 0x6,
	GUERILLA = 0x7,
	GUERILLA02 = 0x8,
	GENDARMERIE = 0x9,
	SCUBA_FEMALE = 0xa,
	SCUBA_MALE = 0xb,
	AVA_DEFEAT = 0xc,
	GENDARMERIE_DEFEAT = 0xd,
	MAE_DEFEAT = 0xe,
	RICKSAW_DEFEAT = 0xf,
	SCUBA_FEMALE_DEFEAT = 0x10,
	SCUBA_MALE_DEFEAT = 0x11,
	CRASSWATER_DEFEAT = 0x12,
	DARRYL_DEFEAT = 0x13,
	DOCTOR_DEFEAT = 0x14,
	MUHLIK_DEFEAT = 0x15,
	VYPA_DEFEAT = 0x16,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class CSWeaponSilencerType : uint32_t
{
	WEAPONSILENCER_NONE = 0x0,
	WEAPONSILENCER_DETACHABLE = 0x1,
	WEAPONSILENCER_INTEGRATED = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class CSWeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class CSWeaponMode : uint32_t
{
	Primary_Mode = 0x0,
	Secondary_Mode = 0x1,
	WeaponMode_MAX = 0x2,
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x3
enum class C4LightEffect_t : uint32_t
{
	eLightEffectNone = 0x0,
	eLightEffectDropped = 0x1,
	eLightEffectThirdPersonHeld = 0x2,
};

// Registered binary: server.dll (project 'server')
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

// Registered binary: server.dll (project 'server')
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
struct CPulseGraphComponentBase;
struct CPulse_ResumePoint;
struct PulseScriptedSequenceData_t;
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
struct CCSGameModeRules_ArmsRace;
struct CCSGameModeRules_Deathmatch;
struct WeaponPurchaseTracker_t;
struct CSMatchStats_t;
struct CBasePlayerController;
struct CVoteController;
struct CCSPlayerController;
struct CCSPlayerPawn;
struct CPointCamera;
struct CAnimGraphNetworkedVariables;
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

// Registered binary: server.dll (project 'tier2')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CRangeFloat
{
public:
	float m_pValue[2]; // 0x0	
};

// Registered binary: server.dll (project 'tier2')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CRangeInt
{
public:
	int32_t m_pValue[2]; // 0x0	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
class Extent
{
public:
	Vector lo; // 0x0	
	Vector hi; // 0xc	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct NavGravity_t
{
public:
	Vector m_vGravity; // 0x0	
	bool m_bDefault; // 0xc	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
class CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x70]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x98
// Has VTable
class CNavVolumeVector : public CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	bool m_bHasBeenPreFiltered; // 0x78	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x98
// Has VTable
class CNavVolumeAll : public CNavVolumeVector
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x80
// Has VTable
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70	
	float m_flRadius; // 0x7c	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x88
// Has VTable
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:
	float m_flRadiusInner; // 0x80	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
// 
// MVDataRoot
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x18
// 
// MVDataRoot
// MGetKV3ClassDefaults
class CNavHullPresetVData
{
public:
	// MPropertyFriendlyName "Nav Hulls"
	// MPropertyDescription "List of nav hulls belonging to this preset."
	// MPropertyAttributeEditor "VDataChoice( scripts/nav_hulls.vdata )"
	CUtlVector< CUtlString > m_vecNavHulls; // 0x0	
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
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
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
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
	bool m_bVisibleinPVS; // 0x30	
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
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
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x20	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CEntityHandle m_hOwner"
// MNetworkVarNames "CUtlStringToken m_name"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MNetworkVarNames "uint32 m_bvDisabledHitGroups"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedFloatType
struct GameTime_t
{
public:
	float m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_FLOAT(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTime_t")->m_static_fields[0]->m_instance);};
	static GameTime_t &Get_Zero(){return *reinterpret_cast<GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTime_t")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b0
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CAnimEventListenerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CAnimEventListener : public CAnimEventListenerBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CAnimEventQueueListener : public CAnimEventListenerBase
{
private:
	[[maybe_unused]] uint8_t __pad0020[0x10]; // 0x20
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	float m_flFluidDensity; // 0x18	
	
	// Datamap fields:
	// void m_pController; // 0x8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CSkillFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CSkillInt
{
public:
	int32_t m_pValue[4]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSkillDamage
{
public:
	// MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill is used)"
	CSkillFloat m_flDamage; // 0x0	
	// MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used."
	float m_flPhysicsForceDamage; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CRemapFloat
{
public:
	float m_pValue[4]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa0
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CBasePlayerControllerAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "FixAngleSet_t nType"
// MNetworkVarNames "QAngle qAngle"
// MNetworkVarNames "uint32 nIndex"
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
	// MNetworkEncoder "qangle_precise"
	QAngle qAngle; // 0x34	
	// MNetworkEnable
	uint32_t nIndex; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
class CBreakableStageHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nCurrentStage; // 0x8	
	int32_t m_nStageCount; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CDynamicPropAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayerControllerComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector localSound"
// MNetworkVarNames "int32 soundscapeIndex"
// MNetworkVarNames "uint8 localBits"
// MNetworkVarNames "int soundscapeEntityListIndex"
// MNetworkVarNames "uint32 soundEventHash"
struct audioparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct GameTick_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTick_t")->m_static_fields[0]->m_instance);};
	static GameTick_t &Get_Zero(){return *reinterpret_cast<GameTick_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("GameTick_t")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CInButtonState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint64_t m_pButtonStates[3]; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
// MNetworkVarNames "float32 m_flMaxspeed"
// MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
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
private:
	[[maybe_unused]] uint8_t __pad0190[0x8]; // 0x190
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2048.000000"
	// MNetworkEncodeFlags "1"
	float m_flMaxspeed; // 0x198	
	// MNetworkEnable
	float m_arrForceSubtickMoveWhen[4]; // 0x19c	
	float m_flForwardMove; // 0x1ac	
	float m_flLeftMove; // 0x1b0	
	float m_flUpMove; // 0x1b4	
	Vector m_vecLastMovementImpulses; // 0x1b8	
	QAngle m_vecOldViewAngles; // 0x1c4	
	
	// Datamap fields:
	// void m_pButtonPressedCmdNumber; // 0x80
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "uint8 m_iObserverMode"
// MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_UseServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
// MNetworkVarNames "uint16 m_iAmmo"
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // 0x40	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hActiveWeapon; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< CBasePlayerWeapon > m_hLastWeapon; // 0x5c	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x60	
	bool m_bPreventWeaponPickup; // 0xa0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Is Abstract
class CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x150
// Has VTable
// 
// MNetworkVarNames "CGameSceneNodeHandle m_hParent"
// MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
// MNetworkVarNames "QAngle m_angRotation"
// MNetworkVarNames "float m_flScale"
// MNetworkVarNames "CUtlStringToken m_name"
// MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
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
	// -> m_hOwner - 0x78
	// -> m_name - 0x7c
	CGameSceneNodeHandle m_hParent; // 0x70	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	// -> m_cellX - 0x90
	// -> m_cellY - 0x92
	// -> m_cellZ - 0x94
	// -> m_nOutsideWorld - 0x96
	// -> m_vecX - 0x98
	// -> m_vecY - 0xa0
	// -> m_vecZ - 0xa8
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x8]; // 0xb0
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
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
		uint8_t m_bBoneMergeFlex: 1; 		
		// MNetworkDisable
		uint8_t m_nLatchAbsOrigin: 2; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
		uint16_t __pad0: 14;
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
	
	// Datamap fields:
	// void m_bDirtyHierarchy; // -0x1
	// void m_bDirtyBoneMergeInfo; // -0x1
	// void m_bNetworkedPositionChanged; // -0x1
	// void m_bNetworkedAnglesChanged; // -0x1
	// void m_bNetworkedScaleChanged; // -0x1
	// void m_bWillBeCallingPostDataUpdate; // -0x1
	// void m_nLatchAbsOrigin; // -0x1
	// void m_bDirtyBoneMergeBoneToRoot; // -0x1
	// CHandle< CBaseEntity > parentname; // 0x7fffffff
	// bool useLocalOffset; // 0x7fffffff
	// bool useParentRenderBounds; // 0x7fffffff
	// bool positionInLocalSpace; // 0x7fffffff
	// Vector scales; // 0x7fffffff
	// Vector local.scales; // 0x7fffffff
	// float scale; // 0x7fffffff
	// float ModelScale; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CUtlStringToken m_ID"
// MNetworkVarNames "Vector4D m_Values"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ModelConfigHandle_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("ModelConfigHandle_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_AssociatedEntities"
// MNetworkVarNames "string_t m_AssociatedEntityNames"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MNetworkVarNames "HModelStrong m_hModel"
// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames "int8 m_nIdealMotionType"
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
	[[maybe_unused]] uint8_t __pad0188[0x7a]; // 0x188
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x202	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x203	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x204	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0xe0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3e0
// Has VTable
// 
// MNetworkVarNames "CModelState m_modelState"
// MNetworkVarNames "bool m_bIsAnimationEnabled"
// MNetworkVarNames "bool m_bUseParentRenderBounds"
// MNetworkVarNames "CUtlStringToken m_materialGroup"
// MNetworkVarNames "uint8 m_nHitboxSet"
class CSkeletonInstance : public CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0150[0x10]; // 0x150
public:
	// MNetworkEnable
	// -> m_hModel - 0x200
	// -> m_ModelName - 0x208
	// -> m_bClientClothCreationSuppressed - 0x248
	// -> m_MeshGroupMask - 0x2e0
	// -> m_nIdealMotionType - 0x362
	// -> m_nForceLOD - 0x363
	// -> m_nClothUpdateFlags - 0x364
	CModelState m_modelState; // 0x160	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x370	
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x371	
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x372	
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
	CUtlStringToken m_materialGroup; // 0x374	
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x378	
	
	// Datamap fields:
	// Vector velocity; // 0x7fffffff
	// Vector rotationAxis; // 0x7fffffff
	// float rotationSpeed; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkOriginQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkVelocityVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkViewOffsetVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "Color m_SecondaryColor"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "float m_flBrightnessMult"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "float m_flFalloff"
// MNetworkVarNames "float m_flAttenuation0"
// MNetworkVarNames "float m_flAttenuation1"
// MNetworkVarNames "float m_flAttenuation2"
// MNetworkVarNames "float m_flTheta"
// MNetworkVarNames "float m_flPhi"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "int m_nCascades"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowWidth"
// MNetworkVarNames "int m_nShadowHeight"
// MNetworkVarNames "bool m_bRenderDiffuse"
// MNetworkVarNames "int m_nRenderSpecular"
// MNetworkVarNames "bool m_bRenderTransmissive"
// MNetworkVarNames "float m_flOrthoLightWidth"
// MNetworkVarNames "float m_flOrthoLightHeight"
// MNetworkVarNames "int m_nStyle"
// MNetworkVarNames "CUtlString m_Pattern"
// MNetworkVarNames "int m_nCascadeRenderStaticObjects"
// MNetworkVarNames "float m_flShadowCascadeCrossFade"
// MNetworkVarNames "float m_flShadowCascadeDistanceFade"
// MNetworkVarNames "float m_flShadowCascadeDistance0"
// MNetworkVarNames "float m_flShadowCascadeDistance1"
// MNetworkVarNames "float m_flShadowCascadeDistance2"
// MNetworkVarNames "float m_flShadowCascadeDistance3"
// MNetworkVarNames "int m_nShadowCascadeResolution0"
// MNetworkVarNames "int m_nShadowCascadeResolution1"
// MNetworkVarNames "int m_nShadowCascadeResolution2"
// MNetworkVarNames "int m_nShadowCascadeResolution3"
// MNetworkVarNames "bool m_bUsesBakedShadowing"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nIndirectLight"
// MNetworkVarNames "float m_flFadeMinDist"
// MNetworkVarNames "float m_flFadeMaxDist"
// MNetworkVarNames "float m_flShadowFadeMinDist"
// MNetworkVarNames "float m_flShadowFadeMaxDist"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFlicker"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
// MNetworkVarNames "float m_flPrecomputedMaxRange"
// MNetworkVarNames "int m_nFogLightingMode"
// MNetworkVarNames "float m_flFogContributionStength"
// MNetworkVarNames "float m_flNearClipPlane"
// MNetworkVarNames "Color m_SkyColor"
// MNetworkVarNames "float m_flSkyIntensity"
// MNetworkVarNames "Color m_SkyAmbientBounce"
// MNetworkVarNames "bool m_bUseSecondaryColor"
// MNetworkVarNames "bool m_bMixedShadows"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "float m_flCapsuleLength"
// MNetworkVarNames "float m_flMinRoughness"
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
	[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
public:
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x12c	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x130	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x134	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x138	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x13c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x140	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x144	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x145	
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x146	
private:
	[[maybe_unused]] uint8_t __pad0147[0x1]; // 0x147
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x148	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x154	
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x160	
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x16c	
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x178	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x184	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x188	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x18c	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x190	
	// MNetworkEnable
	Color m_SkyColor; // 0x194	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x198	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x19c	
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x1a0	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x1a4	
	// MNetworkEnable
	float m_flCapsuleLength; // 0x1a8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; // 0x1ac	
private:
	[[maybe_unused]] uint8_t __pad01b0[0x10]; // 0x1b0
public:
	bool m_bPvsModifyEntity; // 0x1c0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// SHIM m_bRenderSpecular; // 0xd4
	// SHIM m_bCastShadows; // 0xc4
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
class CRopeOverlapHit
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x0	
	CUtlVector< int32 > m_vecOverlappingLinks; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x460
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	// -> m_modelState - 0x1b0
	// -> m_bIsAnimationEnabled - 0x3c0
	// -> m_bUseParentRenderBounds - 0x3c1
	// -> m_bDisableSolidCollisionsForHierarchy - 0x3c2
	// -> m_materialGroup - 0x3c4
	// -> m_nHitboxSet - 0x3c8
	CSkeletonInstance m_skeletonInstance; // 0x50	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x430	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IChoreoServices
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static uint32_t &Get_ms_uSequenceId(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("IChoreoServices")->m_static_fields[0]->m_instance);};
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "bool m_bInCrouch"
// MNetworkVarNames "uint32 m_nCrouchState"
// MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	float m_flStepSoundTime; // 0x1d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	float m_flFallVelocity; // 0x1dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; // 0x1e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x1ed	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x1ee	
private:
	[[maybe_unused]] uint8_t __pad01ef[0x1]; // 0x1ef
public:
	Vector m_groundNormal; // 0x1f0	
	float m_flSurfaceFriction; // 0x1fc	
	CUtlStringToken m_surfaceProps; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0xc]; // 0x204
public:
	int32_t m_nStepside; // 0x210	
	int32_t m_iTargetVolume; // 0x214	
	Vector m_vecSmoothedVelocity; // 0x218	
	
	// Datamap fields:
	// void m_pSurfaceData; // 0x208
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct SequenceHistory_t
{
public:
	HSequence m_hSequence; // 0x0	
	GameTime_t m_flSeqStartTime; // 0x4	
	float m_flSeqFixedCycle; // 0x8	
	AnimLoopMode_t m_nSeqLoopMode; // 0xc	
	float m_flPlaybackRate; // 0x10	
	float m_flCyclesPerSecond; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class ISkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class CSkeletonAnimationController : public ISkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "float32 m_flPrevCycle"
// MNetworkVarNames "float32 m_flCycle"
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
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flCycle; // 0x10	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "0"
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
	
	// Datamap fields:
	// CUtlString sequenceName; // 0x7fffffff
	// int32_t sequence; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x490
// Has VTable
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x460	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MNetworkVarNames "uint32 m_PredNetBoolVariables"
// MNetworkVarNames "byte m_PredNetByteVariables"
// MNetworkVarNames "uint16 m_PredNetUInt16Variables"
// MNetworkVarNames "int32 m_PredNetIntVariables"
// MNetworkVarNames "uint32 m_PredNetUInt32Variables"
// MNetworkVarNames "uint64 m_PredNetUInt64Variables"
// MNetworkVarNames "float m_PredNetFloatVariables"
// MNetworkVarNames "Vector m_PredNetVectorVariables"
// MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_PredNetGlobalSymbolVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetBoolVariables"
// MNetworkVarNames "byte m_OwnerOnlyPredNetByteVariables"
// MNetworkVarNames "uint16 m_OwnerOnlyPredNetUInt16Variables"
// MNetworkVarNames "int32 m_OwnerOnlyPredNetIntVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetUInt32Variables"
// MNetworkVarNames "uint64 m_OwnerOnlyPredNetUInt64Variables"
// MNetworkVarNames "float m_OwnerOnlyPredNetFloatVariables"
// MNetworkVarNames "Vector m_OwnerOnlyPredNetVectorVariables"
// MNetworkVarNames "Quaternion m_OwnerOnlyPredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_OwnerOnlyPredNetGlobalSymbolVariables"
// MNetworkVarNames "int m_nBoolVariablesCount"
// MNetworkVarNames "int m_nOwnerOnlyBoolVariablesCount"
// MNetworkVarNames "int m_nRandomSeedOffset"
// MNetworkVarNames "float m_flLastTeleportTime"
class CAnimGraphNetworkedVariables
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetBoolVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CNetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
	// MNetworkAlias "m_PredGlobalSymbolVariables"
	CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x1a0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
	CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nBoolVariablesCount; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nRandomSeedOffset; // 0x1f0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnTeleportTimeChanged"
	float m_flLastTeleportTime; // 0x1f4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "float32 m_timescale"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "float32 m_timestamp"
// MNetworkVarNames "float32 m_timescale"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float m_flValues"
// MNetworkVarNames "int m_nValueCounts"
// MNetworkVarNames "int m_nBucketCount"
// MNetworkVarNames "float m_flInterval"
// MNetworkVarNames "float m_flFinalValue"
// MNetworkVarNames "TimelineCompression_t m_nCompressionType"
// MNetworkVarNames "bool m_bStopped"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "GameTime_t m_flSeqStartTime"
// MNetworkVarNames "float m_flSeqFixedCycle"
// MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
class CBaseAnimGraphController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MNetworkDisable
	float m_flSoundSyncTime; // 0x224	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "OnNetworkedSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x228	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	GameTime_t m_flSeqStartTime; // 0x22c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	float m_flSeqFixedCycle; // 0x230	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	AnimLoopMode_t m_nAnimLoopMode; // 0x234	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "32"
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad0240[0x4]; // 0x240
public:
	// MNetworkDisable
	SequenceFinishNotifyState_t m_nNotifyState; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0245[0x1]; // 0x245
public:
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x246	
	// MNetworkDisable
	bool m_bNetworkedSequenceChanged; // 0x247	
	// MNetworkDisable
	bool m_bLastUpdateSkipped; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	// MNetworkDisable
	GameTime_t m_flPrevAnimUpdateTime; // 0x24c	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x468
	// float m_flCachedSequenceCycleRate; // 0x240
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MPropertyCustomFGDType
class CFootstepTableHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x31
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
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
	
	// Datamap fields:
	// int32_t delay; // 0x0
	// int32_t respeakdelay; // 0x4
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CResponseCriteriaSet
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	int32_t m_nNumPrefixedContexts; // 0x28	
	bool m_bOverrideOnAppend; // 0x2c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
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
	// -> odds - 0x158
	// -> flags - 0x15a
	// -> m_pFollowup - 0x160
	ResponseParams m_Params; // 0x148	
	float m_fMatchScore; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	char* m_szSpeakerContext; // 0x170	
	char* m_szWorldContext; // 0x178	
	// -> followup_concept - 0x180
	// -> followup_contexts - 0x188
	// -> followup_delay - 0x190
	// -> followup_target - 0x194
	// -> followup_entityiotarget - 0x19c
	// -> followup_entityioinput - 0x1a4
	// -> followup_entityiodelay - 0x1ac
	// -> bFired - 0x1b0
	ResponseFollowup m_Followup; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x7]; // 0x1b1
public:
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1b8	
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f0
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0	
	// -> m_Type - 0x8
	// -> m_szResponseName[192] - 0x9
	// -> m_szMatchingRule[128] - 0xc9
	// -> m_Params - 0x150
	// -> m_fMatchScore - 0x170
	// -> m_szSpeakerContext - 0x178
	// -> m_szWorldContext - 0x180
	// -> m_Followup - 0x188
	// -> m_pchCriteriaNames - 0x1c0
	// -> m_pchCriteriaValues - 0x1d8
	CRR_Response m_response; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
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
	
	// Datamap fields:
	// void m_pSink; // 0x8
	// void m_ConceptHistories; // 0x10
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
class CResponseQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x48]; // 0x0
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x238
class CResponseQueue::CDeferredResponse
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_nNumPrefixedContexts - 0x30
	// -> m_bOverrideOnAppend - 0x34
	CResponseCriteriaSet m_contexts; // 0x8	
	float m_fDispatchTime; // 0x38	
	CHandle< CBaseEntity > m_hIssuer; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// -> m_Type - 0x48
	// -> m_szResponseName[192] - 0x49
	// -> m_szMatchingRule[128] - 0x109
	// -> m_Params - 0x190
	// -> m_fMatchScore - 0x1b0
	// -> m_szSpeakerContext - 0x1b8
	// -> m_szWorldContext - 0x1c0
	// -> m_Followup - 0x1c8
	// -> m_pchCriteriaNames - 0x200
	// -> m_pchCriteriaValues - 0x218
	CRR_Response m_response; // 0x48	
	bool m_bResponseValid; // 0x230	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:
	bool m_bAllowMultipleScenes; // 0x70	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CBaseEntityAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
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
	
	// Datamap fields:
	// void m_ModifiedConvars; // 0x20
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
class CPhysicsShake
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_force; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x68
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CGameScriptedMoveData
{
public:
	Vector m_vAccumulatedRootMotion; // 0x0	
	Vector m_vDest; // 0xc	
	Vector m_vSrc; // 0x18	
	QAngle m_angSrc; // 0x24	
	QAngle m_angDst; // 0x30	
	QAngle m_angCurrent; // 0x3c	
	float m_flAngRate; // 0x48	
	float m_flDuration; // 0x4c	
	GameTime_t m_flStartTime; // 0x50	
	bool m_bActive; // 0x54	
	bool m_bTeleportOnEnd; // 0x55	
	bool m_bIgnoreRotation; // 0x56	
private:
	[[maybe_unused]] uint8_t __pad0057[0x1]; // 0x57
public:
	ScriptedMoveType_t m_nType; // 0x58	
	bool m_bSuccess; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	ForcedCrouchState_t m_nForcedCrouchState; // 0x60	
	bool m_bIgnoreCollisions; // 0x64	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
class CGameChoreoServices : public IChoreoServices
{
public:
	CHandle< CBaseAnimGraph > m_hOwner; // 0x8	
	CHandle< CScriptedSequence > m_hScriptedSequence; // 0xc	
	IChoreoServices::ScriptState_t m_scriptState; // 0x10	
	IChoreoServices::ChoreoState_t m_choreoState; // 0x14	
	GameTime_t m_flTimeStartedState; // 0x18	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CConstantForceController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	Vector m_linear; // 0xc	
	RotationVector m_angular; // 0x18	
	Vector m_linearSave; // 0x24	
	RotationVector m_angularSave; // 0x30	
	
	// Datamap fields:
	// bool m_bLocalSpace; // 0x8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CSoundEnvelope
{
public:
	float m_current; // 0x0	
	float m_target; // 0x4	
	float m_rate; // 0x8	
	bool m_forceupdate; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
class CSoundPatch
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_current - 0x8
	// -> m_target - 0xc
	// -> m_rate - 0x10
	// -> m_forceupdate - 0x14
	CSoundEnvelope m_pitch; // 0x8	
	// -> m_current - 0x18
	// -> m_target - 0x1c
	// -> m_rate - 0x20
	// -> m_forceupdate - 0x24
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
	// -> m_Flags - 0x60
	// -> m_Recipients - 0x68
	CCopyRecipientFilter m_Filter; // 0x58	
	float m_flCloseCaptionDuration; // 0x80	
	bool m_bUpdatedSoundOrigin; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	CUtlSymbolLarge m_iszClassName; // 0x88	
	
	// Static fields:
	static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSoundPatch")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_guid; // 0x28
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CTakeDamageInfoAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseServerCursor : public CPulseExecCursor
{
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance
{
public:
	CPulseGraphComponentBase* m_pComponent; // 0xd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
// MPulseDomainHiddenInTool
class CPulseGraphInstance_ServerPointEntity : public CPulseGraphInstance_ServerEntity
{
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CPulseGraphComponentBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > m_hOwner; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x10	
	CUtlSymbolLarge m_sNameFixupParent; // 0x18	
	CUtlSymbolLarge m_sNameFixupLocal; // 0x20	
	
	// Datamap fields:
	// void CPulseGraphComponentBaseCallPulse_OnThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x150
// Has VTable
class CPulseGraphComponentPointServer : public CPulseGraphComponentBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x100]; // 0x28
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
// MPropertyFriendlyName "Find Entity by Class Name Within Radius"
// MPropertyDescription "Search for an entity by class name within the radius of a given entity. Can loop given a "start" entity that is used as a cursor."
class CPulseCell_Value_FindEntByClassNameWithin : public CPulseCell_BaseValue
{
public:
	CUtlString m_EntityType; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
// MPropertyFriendlyName "Find Entity"
// MPropertyDescription "Search for an entity by name. If multiple entities have the same name, only one will be returned."
class CPulseCell_Value_FindEntByName : public CPulseCell_BaseValue
{
public:
	CUtlString m_EntityType; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_FollowEntity : public CPulseCell_BaseFlow
{
public:
	CUtlString m_ParamBoneOrAttachName; // 0x48	
	CUtlString m_ParamBoneOrAttachNameChild; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_GameEvent : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CBufferString m_EventName; // 0x70	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyFriendlyName "Server General"
// MPropertyDescription "General server gameplay helpers."
class CPulseServerFuncs
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPropertyFriendlyName "Sound Event"
// MPropertyDescription "Starts a sound event, returns a handle that can be used to stop it."
class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow
{
public:
	SoundEventStartType_t m_Type; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyFriendlyName "Server Sound"
// MPropertyDescription "Server sound helpers."
class CPulseServerFuncs_Sounds
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_OnFinished; // 0x48	
	CPulse_ResumePoint m_OnCanceled; // 0x58	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0x68	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct CPulseCell_Outflow_PlaySceneBase__CursorState_t
{
public:
	CHandle< CBaseEntity > m_sceneInstance; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_PlayVCD : public CPulseCell_Outflow_PlaySceneBase
{
public:
	CUtlString m_vcdFilename; // 0x80	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_PlaySequence : public CPulseCell_Outflow_PlaySceneBase
{
public:
	CUtlString m_ParamSequenceName; // 0x80	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct PulseScriptedSequenceData_t
{
public:
	int32_t m_nActorID; // 0x0	
	CUtlString m_szPreIdleSequence; // 0x8	
	CUtlString m_szEntrySequence; // 0x10	
	CUtlString m_szSequence; // 0x18	
	CUtlString m_szExitSequence; // 0x20	
	bool m_bLoopPreIdleSequence; // 0x28	
	bool m_bLoopActionSequence; // 0x29	
	bool m_bLoopPostIdleSequence; // 0x2a	
	bool m_bIgnoreLookAt; // 0x2b	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow
{
public:
	// -> m_nActorID - 0x48
	// -> m_szPreIdleSequence - 0x50
	// -> m_szEntrySequence - 0x58
	// -> m_szSequence - 0x60
	// -> m_szExitSequence - 0x68
	// -> m_bLoopPreIdleSequence - 0x70
	// -> m_bLoopActionSequence - 0x71
	// -> m_bLoopPostIdleSequence - 0x72
	// -> m_bIgnoreLookAt - 0x73
	PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x48	
	CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // 0x78	
	CPulse_ResumePoint m_OnFinished; // 0x90	
	CPulse_ResumePoint m_OnCanceled; // 0xa0	
	CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xb0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct CPulseCell_Outflow_ScriptedSequence__CursorState_t
{
public:
	CHandle< CBaseEntity > m_scriptedSequence; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CTouchExpansionComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTouchExpansionComponent")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x64
// Has Trivial Constructor
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x64
// Has Trivial Constructor
// Has Trivial Destructor
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0	
	CUtlSymbolLarge m_iszValue; // 0x8	
	GameTime_t m_fExpirationTime; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
struct Relationship_t
{
public:
	Disposition_t disposition; // 0x0	
	int32_t priority; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "bool m_bIsPlatform"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
// MNetworkVarNames "Vector m_vecBaseVelocity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "float m_flWaterLevel"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
class CBaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x38	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x40]; // 0x1f0
public:
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x230	
	int32_t m_iCurrentThinkContext; // 0x248	
	GameTick_t m_nLastThinkTick; // 0x24c	
	GameTick_t m_nDisableContextThinkStartTick; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0254[0xc]; // 0x254
public:
	CBitVec< 64 > m_isSteadyState; // 0x260	
	float m_lastNetworkChange; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad026c[0xc]; // 0x26c
public:
	CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x278	
	CUtlSymbolLarge m_iszResponseContext; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0298[0x20]; // 0x298
public:
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x2b8	
	// MNetworkEnable
	int32_t m_iMaxHealth; // 0x2bc	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x2c0	
private:
	[[maybe_unused]] uint8_t __pad02c1[0x3]; // 0x2c1
public:
	float m_flDamageAccumulator; // 0x2c4	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x2c8	
private:
	[[maybe_unused]] uint8_t __pad02c9[0x3]; // 0x2c9
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x2cc	
	// MNetworkEnable
	bool m_bIsPlatform; // 0x2d0	
private:
	[[maybe_unused]] uint8_t __pad02d1[0x1]; // 0x2d1
public:
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x2d2	
	// MNetworkEnable
	MoveType_t m_MoveType; // 0x2d3	
	MoveType_t m_nActualMoveType; // 0x2d4	
	uint8_t m_nWaterTouch; // 0x2d5	
	uint8_t m_nSlimeTouch; // 0x2d6	
	bool m_bRestoreInHierarchy; // 0x2d7	
	CUtlSymbolLarge m_target; // 0x2d8	
	CHandle< CBaseFilter > m_hDamageFilter; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e4[0x4]; // 0x2e4
public:
	CUtlSymbolLarge m_iszDamageFilterName; // 0x2e8	
	float m_flMoveDoneTime; // 0x2f0	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CUtlStringToken m_nSubclassID; // 0x2f4	
private:
	[[maybe_unused]] uint8_t __pad02f8[0x8]; // 0x2f8
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flAnimTime; // 0x300	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flSimulationTime; // 0x304	
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x308	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x30c	
	// MNetworkEnable
	uint8_t m_ubInterpolationFrame; // 0x30d	
private:
	[[maybe_unused]] uint8_t __pad030e[0x2]; // 0x30e
public:
	Vector m_vPrevVPhysicsUpdatePos; // 0x310	
	// MNetworkEnable
	uint8_t m_iTeamNum; // 0x31c	
private:
	[[maybe_unused]] uint8_t __pad031d[0x3]; // 0x31d
public:
	CUtlSymbolLarge m_iGlobalname; // 0x320	
	int32_t m_iSentToClients; // 0x328	
	float m_flSpeed; // 0x32c	
	CUtlString m_sUniqueHammerID; // 0x330	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x338	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x33c	
	int32_t m_nSimulationTick; // 0x340	
private:
	[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
public:
	CEntityIOOutput m_OnKilled; // 0x348	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x370	
	Vector m_vecAbsVelocity; // 0x374	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	// -> m_vecX - 0x390
	// -> m_vecY - 0x398
	// -> m_vecZ - 0x3a0
	CNetworkVelocityVector m_vecVelocity; // 0x380	
private:
	[[maybe_unused]] uint8_t __pad03a8[0x8]; // 0x3a8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x3b0	
	int32_t m_nPushEnumCount; // 0x3bc	
	CCollisionProperty* m_pCollision; // 0x3c0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEffectEntity; // 0x3c8	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hOwnerEntity; // 0x3cc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x3d0	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hGroundEntity; // 0x3d4	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x3d8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x3dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x3e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x3e4	
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x3e8	
	// MNetworkEnable
	bool m_bAnimatedEveryTick; // 0x3ec	
	bool m_bDisableLowViolence; // 0x3ed	
	uint8_t m_nWaterType; // 0x3ee	
private:
	[[maybe_unused]] uint8_t __pad03ef[0x1]; // 0x3ef
public:
	int32_t m_iEFlags; // 0x3f0	
private:
	[[maybe_unused]] uint8_t __pad03f4[0x4]; // 0x3f4
public:
	CEntityIOOutput m_OnUser1; // 0x3f8	
	CEntityIOOutput m_OnUser2; // 0x420	
	CEntityIOOutput m_OnUser3; // 0x448	
	CEntityIOOutput m_OnUser4; // 0x470	
	int32_t m_iInitialTeamNum; // 0x498	
	// MNetworkEnable
	GameTime_t m_flNavIgnoreUntilTime; // 0x49c	
	QAngle m_vecAngVelocity; // 0x4a0	
	bool m_bNetworkQuantizeOriginAndAngles; // 0x4ac	
	bool m_bLagCompensate; // 0x4ad	
private:
	[[maybe_unused]] uint8_t __pad04ae[0x2]; // 0x4ae
public:
	float m_flOverriddenFriction; // 0x4b0	
	CHandle< CBaseEntity > m_pBlocker; // 0x4b4	
	float m_flLocalTime; // 0x4b8	
	float m_flVPhysicsUpdateLocalTime; // 0x4bc	
	
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
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x28
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x2f8
	// void* m_think; // 0x270
	// void* m_pfnTouch; // 0x298
	// void* m_pfnUse; // 0x2a0
	// void* m_pfnBlocked; // 0x2a8
	// void* m_pfnMoveDone; // 0x2b0
	// int32_t InputSetTeam; // 0x0
	// void InputKill; // 0x0
	// void InputKillHierarchy; // 0x0
	// int32_t InputUse; // 0x0
	// bool InputAlternativeSorting; // 0x0
	// CUtlSymbolLarge InputSetParent; // 0x0
	// CUtlSymbolLarge InputSetParentAttachment; // 0x0
	// CUtlSymbolLarge InputSetParentAttachmentMaintainOffset; // 0x0
	// void InputClearParent; // 0x0
	// CUtlSymbolLarge InputFollowEntity; // 0x0
	// CUtlSymbolLarge InputSetDamageFilter; // 0x0
	// void InputEnableDamageForces; // 0x0
	// void InputDisableDamageForces; // 0x0
	// CUtlSymbolLarge InputDispatchResponse; // 0x0
	// CUtlSymbolLarge InputAddContext; // 0x0
	// CUtlSymbolLarge InputRemoveContext; // 0x0
	// void InputClearContext; // 0x0
	// CUtlSymbolLarge InputAddAttribute; // 0x0
	// CUtlSymbolLarge InputRemoveAttribute; // 0x0
	// void InputDisableShadow; // 0x0
	// void InputEnableShadow; // 0x0
	// CUtlSymbolLarge InputFireUser1; // 0x0
	// CUtlSymbolLarge InputFireUser2; // 0x0
	// CUtlSymbolLarge InputFireUser3; // 0x0
	// CUtlSymbolLarge InputFireUser4; // 0x0
	// CUtlSymbolLarge InputChangeSubclass; // 0x0
	// void InputPlatformEnable; // 0x0
	// void InputPlatformDisable; // 0x0
	// void CBaseEntitySUB_Remove; // 0x0
	// void CBaseEntitySUB_RemoveIfUncarried; // 0x0
	// void CBaseEntitySUB_DoNothing; // 0x0
	// void CBaseEntitySUB_Vanish; // 0x0
	// void CBaseEntitySUB_CallUseToggle; // 0x0
	// void CBaseEntitySUB_KillSelf; // 0x0
	// void CBaseEntitySUB_KillSelfIfUncarried; // 0x0
	// void CBaseEntityFrictionRevertThink; // 0x0
	// void CBaseEntityFakeScriptThinkFunc; // 0x0
	// void CBaseEntityClearNavIgnoreContentsThink; // 0x0
	// void m_pGameSceneNode; // 0x258
	// void m_nEntityType; // 0x2d1
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
	// int32_t disableshadows; // 0x7fffffff
	// int32_t disablereceiveshadows; // 0x7fffffff
	// int32_t nodamageforces; // 0x7fffffff
	// float angle; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CServerOnlyEntity : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CServerOnlyPointEntity : public CServerOnlyEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CLogicalEntity : public CServerOnlyEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
class CColorCorrection : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeInDuration; // 0x4c0	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x4c4	
	float m_flStartFadeInWeight; // 0x4c8	
	float m_flStartFadeOutWeight; // 0x4cc	
	GameTime_t m_flTimeStartFadeIn; // 0x4d0	
	GameTime_t m_flTimeStartFadeOut; // 0x4d4	
	// MNetworkEnable
	float m_flMaxWeight; // 0x4d8	
	bool m_bStartDisabled; // 0x4dc	
	// MNetworkEnable
	bool m_bEnabled; // 0x4dd	
	// MNetworkEnable
	bool m_bMaster; // 0x4de	
	// MNetworkEnable
	bool m_bClientSide; // 0x4df	
	// MNetworkEnable
	bool m_bExclusive; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	// MNetworkEnable
	float m_MinFalloff; // 0x4e4	
	// MNetworkEnable
	float m_MaxFalloff; // 0x4e8	
	// MNetworkEnable
	float m_flCurWeight; // 0x4ec	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x4f0	
	CUtlSymbolLarge m_lookupFilename; // 0x6f0	
	
	// Datamap fields:
	// void CColorCorrectionFadeInThink; // 0x0
	// void CColorCorrectionFadeOutThink; // 0x0
	// void m_netlookupFilename; // 0x4f0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetFadeInDuration; // 0x0
	// float InputSetFadeOutDuration; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4c0	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flSize; // 0x4c8	
	bool m_bUseHitboxes; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	int32_t m_iNumHitboxFires; // 0x4d0	
	float m_flHitboxFireScale; // 0x4d4	
	GameTime_t m_flLifetime; // 0x4d8	
	CHandle< CBaseEntity > m_hAttacker; // 0x4dc	
	int32_t m_iDangerSound; // 0x4e0	
	float m_flDirectDamagePerSecond; // 0x4e4	
	int32_t m_iCustomDamageType; // 0x4e8	
	
	// Datamap fields:
	// void m_hPlayingSound; // 0x4ec
	// void CEntityFlameFlameThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	CEntityIOOutput m_OnPass; // 0x4c8	
	CEntityIOOutput m_OnFail; // 0x4f0	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x520	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x570	
	int32_t m_nFilterCount; // 0x598	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterProximity : public CBaseFilter
{
public:
	float m_flRadius; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CFilterLOS : public CBaseFilter
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterClass : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterClass; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float32 m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class CBaseFire : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x4c0	
	// MNetworkEnable
	float m_flStartScale; // 0x4c4	
	// MNetworkEnable
	float m_flScaleTime; // 0x4c8	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x4cc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class CFireSmoke : public CBaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x4d0	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x4d4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x10]; // 0x4c0
public:
	int32_t m_fishCount; // 0x4d0	
	float m_maxRange; // 0x4d4	
	float m_swimDepth; // 0x4d8	
	float m_waterLevel; // 0x4dc	
	bool m_isDormant; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x4e8	
	CountdownTimer m_visTimer; // 0x500	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x850
// Has VTable
class CInfoData : public CServerOnlyEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
struct locksound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge sLockedSound; // 0x8	
	CUtlSymbolLarge sUnlockedSound; // 0x10	
	GameTime_t flwaitSound; // 0x18	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CLogicBranch : public CLogicalEntity
{
public:
	bool m_bInValue; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x4c8	
	CEntityIOOutput m_OnTrue; // 0x4e0	
	CEntityIOOutput m_OnFalse; // 0x508	
	
	// Datamap fields:
	// bool InputSetValue; // 0x0
	// bool InputSetValueTest; // 0x0
	// void InputToggle; // 0x0
	// void InputToggleTest; // 0x0
	// void InputTest; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4c0	
	CUtlSymbolLarge m_iszEntityB; // 0x4c8	
	float m_flZone1Distance; // 0x4d0	
	float m_flZone2Distance; // 0x4d4	
	CEntityIOOutput m_InZone1; // 0x4d8	
	CEntityIOOutput m_InZone2; // 0x500	
	CEntityIOOutput m_InZone3; // 0x528	
	
	// Datamap fields:
	// void InputCheckDistance; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0	
	GameTime_t m_fPrevSampleTime; // 0xc	
	float m_fIdealSampleRate; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class SimpleConstraintSoundProfile
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8	
	float m_keyPoints[2]; // 0xc	
	float m_reversalSoundThresholds[3]; // 0x14	
	
	// Datamap fields:
	// float m_keyPoints[0]; // 0xc
	// float m_keyPoints[1]; // 0x10
	// float m_reversalSoundThresholds[0]; // 0x14
	// float m_reversalSoundThresholds[1]; // 0x18
	// float m_reversalSoundThresholds[2]; // 0x1c
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
class ConstraintSoundInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_prevSample - 0x8
	// -> m_fPrevSampleTime - 0x14
	// -> m_fIdealSampleRate - 0x18
	VelocitySampler m_vSampler; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// -> eKeypoints - 0x28
	// -> m_keyPoints[2] - 0x2c
	// -> m_reversalSoundThresholds[3] - 0x34
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
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszReversalSounds[0]; // 0x68
	// CUtlSymbolLarge m_iszReversalSounds[1]; // 0x70
	// CUtlSymbolLarge m_iszReversalSounds[2]; // 0x78
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct magnetted_objects_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > hEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4c0	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4c8	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4d0	
	bool m_fixupNames; // 0x4d8	
	bool m_bLoadDynamic; // 0x4d9	
private:
	[[maybe_unused]] uint8_t __pad04da[0x2]; // 0x4da
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4dc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CSkyboxReference : public CBaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x4c0	
	CHandle< CSkyCamera > m_hSkyCamera; // 0x4c4	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector dirPrimary"
// MNetworkVarNames "Color colorPrimary"
// MNetworkVarNames "Color colorSecondary"
// MNetworkVarNames "Color colorPrimaryLerpTo"
// MNetworkVarNames "Color colorSecondaryLerpTo"
// MNetworkVarNames "float32 start"
// MNetworkVarNames "float32 end"
// MNetworkVarNames "float32 farz"
// MNetworkVarNames "float32 maxdensity"
// MNetworkVarNames "float32 exponent"
// MNetworkVarNames "float32 HDRColorScale"
// MNetworkVarNames "float32 skyboxFogFactor"
// MNetworkVarNames "float32 skyboxFogFactorLerpTo"
// MNetworkVarNames "float32 startLerpTo"
// MNetworkVarNames "float32 endLerpTo"
// MNetworkVarNames "float32 maxdensityLerpTo"
// MNetworkVarNames "GameTime_t lerptime"
// MNetworkVarNames "float32 duration"
// MNetworkVarNames "float32 blendtobackground"
// MNetworkVarNames "float32 scattering"
// MNetworkVarNames "float32 locallightscale"
// MNetworkVarNames "bool enable"
// MNetworkVarNames "bool blend"
// MNetworkVarNames "bool m_bNoReflectionFog"
struct fogparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x34
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvSoundscape : public CServerOnlyEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4c0	
	float m_flRadius; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_soundscapeName; // 0x4f0	
	CUtlSymbolLarge m_soundEventName; // 0x4f8	
	bool m_bOverrideWithEvent; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	int32_t m_soundscapeIndex; // 0x504	
	int32_t m_soundscapeEntityListId; // 0x508	
	uint32_t m_soundEventHash; // 0x50c	
	CUtlSymbolLarge m_positionNames[8]; // 0x510	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x550	
	bool m_bDisabled; // 0x554	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CEnvSoundscapeProxy : public CEnvSoundscape
{
public:
	CUtlSymbolLarge m_MainSoundscapeName; // 0x558	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvSoundscapeTriggerable : public CEnvSoundscape
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ParticleIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("ParticleIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MVDataRoot
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
// Is Abstract
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector
{
private:
	[[maybe_unused]] uint8_t __pad0098[0x8]; // 0x98
public:
	Vector m_vStartPos; // 0xa0	
	float m_flSearchDist; // 0xac	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_nInteractsAs"
// MNetworkVarNames "uint64 m_nInteractsWith"
// MNetworkVarNames "uint64 m_nInteractsExclude"
// MNetworkVarNames "uint32 m_nEntityId"
// MNetworkVarNames "uint32 m_nOwnerId"
// MNetworkVarNames "uint16 m_nHierarchyId"
// MNetworkVarNames "uint8 m_nCollisionGroup"
// MNetworkVarNames "uint8 m_nCollisionFunctionMask"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
// MNetworkVarNames "Vector m_vecMins"
// MNetworkVarNames "Vector m_vecMaxs"
// MNetworkVarNames "uint8 m_usSolidFlags"
// MNetworkVarNames "SolidType_t m_nSolidType"
// MNetworkVarNames "uint8 m_triggerBloat"
// MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
// MNetworkVarNames "uint8 m_CollisionGroup"
// MNetworkVarNames "uint8 m_nEnablePhysics"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
// MNetworkVarNames "Vector m_vCapsuleCenter1"
// MNetworkVarNames "Vector m_vCapsuleCenter2"
// MNetworkVarNames "float m_flCapsuleRadius"
class CCollisionProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	// -> m_nInteractsAs - 0x18
	// -> m_nInteractsWith - 0x20
	// -> m_nInteractsExclude - 0x28
	// -> m_nEntityId - 0x30
	// -> m_nOwnerId - 0x34
	// -> m_nHierarchyId - 0x38
	// -> m_nCollisionGroup - 0x3a
	// -> m_nCollisionFunctionMask - 0x3b
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
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter1; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter2; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	float m_flCapsuleRadius; // 0xac	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector m_vOrigin"
// MNetworkVarNames "Vector m_vStart"
// MNetworkVarNames "Vector m_vNormal"
// MNetworkVarNames "QAngle m_vAngles"
// MNetworkVarNames "CEntityHandle m_hEntity"
// MNetworkVarNames "CEntityHandle m_hOtherEntity"
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flMagnitude"
// MNetworkVarNames "float32 m_flRadius"
// MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
// MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
// MNetworkVarNames "uint32 m_nDamageType"
// MNetworkVarNames "uint8 m_nPenetrate"
// MNetworkVarNames "uint16 m_nMaterial"
// MNetworkVarNames "uint16 m_nHitBox"
// MNetworkVarNames "uint8 m_nColor"
// MNetworkVarNames "uint8 m_fFlags"
// MNetworkVarNames "AttachmentHandle_t m_nAttachmentIndex"
// MNetworkVarNames "CUtlStringToken m_nAttachmentName"
// MNetworkVarNames "uint16 m_iEffectName"
// MNetworkVarNames "uint8 m_nExplosionType"
class CEffectData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vOrigin; // 0x8	
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vStart; // 0x14	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vNormal; // 0x20	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
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
	// MNetworkEncodeFlags "1"
	float m_flMagnitude; // 0x44	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class CEnvDetailController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4c0	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4c4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x258
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
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
	// MNetworkEncoder "coord"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CEnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CEnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoLadderDismount : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "int32 m_nModelID"
// MNetworkVarNames "HMaterialStrong m_hMaterial"
// MNetworkVarNames "ShardSolid_t m_solid"
// MNetworkVarNames "ShatterPanelMode m_ShatterPanelMode"
// MNetworkVarNames "Vector2D m_vecPanelSize"
// MNetworkVarNames "Vector2D m_vecStressPositionA"
// MNetworkVarNames "Vector2D m_vecStressPositionB"
// MNetworkVarNames "Vector2D m_vecPanelVertices"
// MNetworkVarNames "float m_flGlassHalfThickness"
// MNetworkVarNames "bool m_bHasParent"
// MNetworkVarNames "bool m_bParentFrozen"
// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
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
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CGameRulesProxy : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	char m_szQuestName[128]; // 0x8	
	int32_t m_nQuestPhase; // 0x88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int32 m_iGlowType"
// MNetworkVarNames "int32 m_iGlowTeam"
// MNetworkVarNames "int32 m_nGlowRange"
// MNetworkVarNames "int32 m_nGlowRangeMin"
// MNetworkVarNames "Color m_glowColorOverride"
// MNetworkVarNames "bool m_bFlashing"
// MNetworkVarNames "float m_flGlowTime"
// MNetworkVarNames "float m_flGlowStartTime"
// MNetworkVarNames "bool m_bEligibleForScreenHighlight"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CMultiplayRules : public CGameRules
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "int16 scale"
// MNetworkVarNames "Vector origin"
// MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
// MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
// MNetworkVarNames "fogparams_t fog"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
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
	// MNetworkEncoder "coord"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MNetworkVarNames "QAngle m_vecCsViewPunchAngle"
// MNetworkVarNames "GameTick_t m_nCsViewPunchAngleTick"
// MNetworkVarNames "float32 m_flCsViewPunchAngleTickRatio"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
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
	// -> localSound[8] - 0xb0
	// -> soundscapeIndex - 0x110
	// -> localBits - 0x114
	// -> soundscapeEntityListIndex - 0x118
	// -> soundEventHash - 0x11c
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x4c8
	// -> origin - 0x4cc
	// -> bClip3DSkyBoxNearToWorldFar - 0x4d8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x4dc
	// -> fog - 0x4e0
	// -> m_nWorldGroupID - 0x548
	sky3dparams_t m_skyboxData; // 0x4c0	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x550	
	bool m_bUseAngles; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	CSkyCamera* m_pNext; // 0x558	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4c8
	// Vector m_skyboxData.origin; // 0x4cc
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4d8
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4dc
	// bool m_skyboxData.fog.enable; // 0x544
	// bool m_skyboxData.fog.blend; // 0x545
	// Vector m_skyboxData.fog.dirPrimary; // 0x4e8
	// Color m_skyboxData.fog.colorPrimary; // 0x4f4
	// Color m_skyboxData.fog.colorSecondary; // 0x4f8
	// float m_skyboxData.fog.start; // 0x504
	// float m_skyboxData.fog.end; // 0x508
	// float m_skyboxData.fog.maxdensity; // 0x510
	// void InputActivateSkybox; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
struct sndopvarlatchdata_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_iszStack; // 0x8	
	CUtlSymbolLarge m_iszOperator; // 0x10	
	CUtlSymbolLarge m_iszOpvar; // 0x18	
	float m_flVal; // 0x20	
	Vector m_vPos; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IRagdoll
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0	
	int32_t parentIndex; // 0x20	
	float m_flRadius; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0	
	CUtlVector< int32 > boneIndex; // 0x18	
	bool allowStretch; // 0x30	
	bool unused; // 0x31	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CTransform m_Transforms"
// MNetworkVarNames "EHANDLE m_hOwner"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has Trivial Destructor
class CSceneEventInfo
{
public:
	int32_t m_iLayer; // 0x0	
	int32_t m_iPriority; // 0x4	
	HSequence m_hSequence; // 0x8	
	float m_flWeight; // 0xc	
	bool m_bHasArrived; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	int32_t m_nType; // 0x14	
	GameTime_t m_flNext; // 0x18	
	bool m_bIsGesture; // 0x1c	
	bool m_bShouldRemove; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x26]; // 0x1e
public:
	CHandle< CBaseEntity > m_hTarget; // 0x44	
	uint32_t m_nSceneEventId; // 0x48	
	bool m_bClientSide; // 0x4c	
	bool m_bStarted; // 0x4d	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
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
	
	// Datamap fields:
	// void m_nSound; // 0x34
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct AmmoIndex_t
{
public:
	int8_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("AmmoIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MVDataOverlayType
// MVDataUseLinkedEntityClasses
class CEntitySubclassVDataBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
struct thinkfunc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hFn; // 0x8	
	CUtlStringToken m_nContext; // 0x10	
	GameTick_t m_nNextThinkTick; // 0x14	
	GameTick_t m_nLastThinkTick; // 0x18	
	
	// Datamap fields:
	// void m_think; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0	
	int32_t m_nForceBone; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
class CSimpleSimTimer
{
public:
	GameTime_t m_next; // 0x0	
	WorldGroupId_t m_nWorldGroupId; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x8	
	float m_maxInterval; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
class CSimpleStopwatch : public CStopwatchBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CStopwatch : public CStopwatchBase
{
public:
	float m_interval; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_minInterval; // 0xc	
	float m_maxInterval; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CSingleplayRules : public CGameRules
{
public:
	bool m_bSinglePlayerGameEnding; // 0x90	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class CSoundOpvarSetPointBase : public CBaseEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	CEntityHandle m_hSource; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c8[0x8]; // 0x4c8
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d8[0x50]; // 0x4d8
public:
	Vector m_vLastPosition; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x538	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x540	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x548	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x550	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x554	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// CUtlSymbolLarge InputSetOpvarIndex; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
	// void m_nGUID; // 0x4c8
	// void m_hOpvarData; // 0x4d8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x668
// Has VTable
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x558	
	CEntityIOOutput m_OnExit; // 0x580	
	bool m_bAutoDisable; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x43]; // 0x5a9
public:
	float m_flDistanceMin; // 0x5ec	
	float m_flDistanceMax; // 0x5f0	
	float m_flDistanceMapMin; // 0x5f4	
	float m_flDistanceMapMax; // 0x5f8	
	float m_flOcclusionRadius; // 0x5fc	
	float m_flOcclusionMin; // 0x600	
	float m_flOcclusionMax; // 0x604	
	float m_flValSetOnDisable; // 0x608	
	bool m_bSetValueOnDisable; // 0x60c	
private:
	[[maybe_unused]] uint8_t __pad060d[0x3]; // 0x60d
public:
	int32_t m_nSimulationMode; // 0x610	
	int32_t m_nVisibilitySamples; // 0x614	
	Vector m_vDynamicProxyPoint; // 0x618	
	float m_flDynamicMaximumOcclusion; // 0x624	
	CEntityHandle m_hDynamicEntity; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad062c[0x4]; // 0x62c
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x630	
	float m_flPathingDistanceNormFactor; // 0x638	
	Vector m_vPathingSourcePos; // 0x63c	
	Vector m_vPathingListenerPos; // 0x648	
	Vector m_vPathingDirection; // 0x654	
	int32_t m_nPathingSourceIndex; // 0x660	
	
	// Datamap fields:
	// void InputSetDisabledValue; // 0x0
	// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d0
// Has VTable
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x668	
	Vector m_vDistanceInnerMaxs; // 0x674	
	Vector m_vDistanceOuterMins; // 0x680	
	Vector m_vDistanceOuterMaxs; // 0x68c	
	int32_t m_nAABBDirection; // 0x698	
	Vector m_vInnerMins; // 0x69c	
	Vector m_vInnerMaxs; // 0x6a8	
	Vector m_vOuterMins; // 0x6b4	
	Vector m_vOuterMaxs; // 0x6c0	
	
	// Datamap fields:
	// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d0
// Has VTable
class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x690
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0668[0x18]; // 0x668
public:
	float m_flDistMinSqr; // 0x680	
	float m_flDistMaxSqr; // 0x684	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x688	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
struct SoundOpvarTraceResult_t
{
public:
	Vector vPos; // 0x0	
	bool bDidHit; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	float flDistSqrToCenter; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a8
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x668	
private:
	[[maybe_unused]] uint8_t __pad0680[0x18]; // 0x680
public:
	float m_flSize; // 0x698	
	float m_flHeightTolerance; // 0x69c	
	float m_flSizeSqr; // 0x6a0	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x558	
	Vector m_vMaxs; // 0x564	
	Vector m_vDistanceMins; // 0x570	
	Vector m_vDistanceMaxs; // 0x57c	
	float m_flWindMin; // 0x588	
	float m_flWindMax; // 0x58c	
	float m_flWindMapMin; // 0x590	
	float m_flWindMapMax; // 0x594	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
class CTakeDamageResult
{
public:
	int32_t m_nHealthLost; // 0x0	
	int32_t m_nDamageTaken; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_nHealthLost - 0xa0
	// -> m_nDamageTaken - 0xa4
	CTakeDamageResult result; // 0xa0	
	CHandle< CBaseEntity > hTarget; // 0xa8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
class CTakeDamageSummaryScopeGuard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8	
	
	// Static fields:
	static SummaryTakeDamageInfo_t &Get_EmptySummary(){return *reinterpret_cast<SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CTeamplayRules : public CMultiplayRules
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "CEconItemAttribute m_Attributes"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
// MNetworkVarNames "float m_flInitialValue"
// MNetworkVarNames "int m_nRefundableCurrency"
// MNetworkVarNames "bool m_bSetBonus"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "int m_iReapplyProvisionParity"
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct CAttributeManager__cached_attribute_float_t
{
public:
	float flIn; // 0x0	
	CUtlSymbolLarge iAttribHook; // 0x8	
	float flOut; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x278
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "uint32 m_iItemIDHigh"
// MNetworkVarNames "uint32 m_iItemIDLow"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "CAttributeList m_AttributeList"
// MNetworkVarNames "CAttributeList m_NetworkedDynamicAttributes"
// MNetworkVarNames "char m_szCustomName"
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
	// -> m_Attributes - 0x78
	// -> m_pManager - 0xc8
	CAttributeList m_AttributeList; // 0x70	
	// MNetworkEnable
	// -> m_Attributes - 0xd8
	// -> m_pManager - 0x128
	CAttributeList m_NetworkedDynamicAttributes; // 0xd0	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x130	
	char m_szCustomNameOverride[161]; // 0x1d1	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IHasAttributes
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
struct GameAmmoTypeInfo_t : public AmmoTypeInfo_t
{
public:
	int32_t m_nBuySize; // 0x38	
	int32_t m_nCost; // 0x3c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "bool m_bSpotted"
// MNetworkVarNames "uint32 m_bSpottedByMask"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class SpawnPoint : public CServerOnlyPointEntity
{
public:
	int32_t m_iPriority; // 0x4c0	
	bool m_bEnabled; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	int32_t m_nType; // 0x4c8	
	
	// Datamap fields:
	// void InputSetEnabled; // 0x0
	// void InputSetDisabled; // 0x0
	// void InputToggleEnabled; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class SpawnPointCoopEnemy : public SpawnPoint
{
public:
	CUtlSymbolLarge m_szWeaponsToGive; // 0x4d0	
	CUtlSymbolLarge m_szPlayerModelToUse; // 0x4d8	
	int32_t m_nArmorToSpawnWith; // 0x4e0	
	SpawnPointCoopEnemy::BotDefaultBehavior_t m_nDefaultBehavior; // 0x4e4	
	int32_t m_nBotDifficulty; // 0x4e8	
	bool m_bIsAgressive; // 0x4ec	
	bool m_bStartAsleep; // 0x4ed	
private:
	[[maybe_unused]] uint8_t __pad04ee[0x2]; // 0x4ee
public:
	float m_flHideRadius; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0xc]; // 0x4f4
public:
	CUtlSymbolLarge m_szBehaviorTreeFile; // 0x500	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
// 
// MNetworkVarNames "CCSGameRules* m_pGameRules"
class CCSGameRulesProxy : public CGameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	CCSGameRules* m_pGameRules; // 0x4c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x198
// Has VTable
// 
// MNetworkVarNames "int m_nMatchSeed"
// MNetworkVarNames "bool m_bBlockersPresent"
// MNetworkVarNames "bool m_bRoundInProgress"
// MNetworkVarNames "int m_iFirstSecondHalfRound"
// MNetworkVarNames "int m_iBombSite"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSTakeDamageInfoAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CCSGameModeRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CCSGameModeRules_Noop : public CCSGameModeRules
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSGameModeScript : public CBasePulseGraphInstance
{
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
class CCSGameModeScript_ConVars
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CUtlString m_WeaponSequence"
class CCSGameModeRules_ArmsRace : public CCSGameModeRules
{
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_WeaponSequence; // 0x38	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSArmsRaceScript : public CCSGameModeScript
{
public:
	CCSGameModeRules_ArmsRace* m_pOuter; // 0xd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
// MNetworkVarNames "float m_flDMBonusTimeLength"
// MNetworkVarNames "int16 m_nDMBonusWeaponLoadoutSlot"
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x38	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x3c	
	// MNetworkEnable
	int16_t m_nDMBonusWeaponLoadoutSlot; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSDeathmatchScript : public CCSGameModeScript
{
public:
	CCSGameModeRules_Deathmatch* m_pOuter; // 0xd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
class CCSDeathmatchScript_ConVars
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15890
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "bool m_bWarmupPeriod"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
// MNetworkVarNames "int m_nTotalPausedTicks"
// MNetworkVarNames "int m_nPauseStartTick"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "bool m_bGamePaused"
// MNetworkVarNames "bool m_bTerroristTimeOutActive"
// MNetworkVarNames "bool m_bCTTimeOutActive"
// MNetworkVarNames "float m_flTerroristTimeOutRemaining"
// MNetworkVarNames "float m_flCTTimeOutRemaining"
// MNetworkVarNames "int m_nTerroristTimeOuts"
// MNetworkVarNames "int m_nCTTimeOuts"
// MNetworkVarNames "bool m_bTechnicalTimeOut"
// MNetworkVarNames "bool m_bMatchWaitingForResume"
// MNetworkVarNames "int m_iRoundTime"
// MNetworkVarNames "float m_fMatchStartTime"
// MNetworkVarNames "GameTime_t m_fRoundStartTime"
// MNetworkVarNames "GameTime_t m_flRestartRoundTime"
// MNetworkVarNames "bool m_bGameRestart"
// MNetworkVarNames "float m_flGameStartTime"
// MNetworkVarNames "float m_timeUntilNextPhaseStarts"
// MNetworkVarNames "int m_gamePhase"
// MNetworkVarNames "int m_totalRoundsPlayed"
// MNetworkVarNames "int m_nRoundsPlayedThisPhase"
// MNetworkVarNames "int m_nOvertimePlaying"
// MNetworkVarNames "int m_iHostagesRemaining"
// MNetworkVarNames "bool m_bAnyHostageReached"
// MNetworkVarNames "bool m_bMapHasBombTarget"
// MNetworkVarNames "bool m_bMapHasRescueZone"
// MNetworkVarNames "bool m_bMapHasBuyZone"
// MNetworkVarNames "bool m_bIsQueuedMatchmaking"
// MNetworkVarNames "int m_nQueuedMatchmakingMode"
// MNetworkVarNames "bool m_bIsValveDS"
// MNetworkVarNames "bool m_bLogoMap"
// MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
// MNetworkVarNames "int m_iSpectatorSlotCount"
// MNetworkVarNames "int m_MatchDevice"
// MNetworkVarNames "bool m_bHasMatchStarted"
// MNetworkVarNames "int m_nNextMapInMapgroup"
// MNetworkVarNames "char m_szTournamentEventName"
// MNetworkVarNames "char m_szTournamentEventStage"
// MNetworkVarNames "char m_szMatchStatTxt"
// MNetworkVarNames "char m_szTournamentPredictionsTxt"
// MNetworkVarNames "int m_nTournamentPredictionsPct"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
// MNetworkVarNames "bool m_bIsDroppingItems"
// MNetworkVarNames "bool m_bIsQuestEligible"
// MNetworkVarNames "bool m_bIsHltvActive"
// MNetworkVarNames "int m_nGuardianModeWaveNumber"
// MNetworkVarNames "int m_nGuardianModeSpecialKillsRemaining"
// MNetworkVarNames "int m_nGuardianModeSpecialWeaponNeeded"
// MNetworkVarNames "uint32 m_numGlobalGiftsGiven"
// MNetworkVarNames "uint32 m_numGlobalGifters"
// MNetworkVarNames "uint32 m_numGlobalGiftsPeriodSeconds"
// MNetworkVarNames "uint32 m_arrFeaturedGiftersAccounts"
// MNetworkVarNames "uint32 m_arrFeaturedGiftersGifts"
// MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
// MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
// MNetworkVarNames "int m_numBestOfMaps"
// MNetworkVarNames "int m_nHalloweenMaskListSeed"
// MNetworkVarNames "bool m_bBombDropped"
// MNetworkVarNames "bool m_bBombPlanted"
// MNetworkVarNames "int m_iRoundWinStatus"
// MNetworkVarNames "int m_eRoundWinReason"
// MNetworkVarNames "bool m_bTCantBuy"
// MNetworkVarNames "bool m_bCTCantBuy"
// MNetworkVarNames "GameTime_t m_flGuardianBuyUntilTime"
// MNetworkVarNames "int m_iMatchStats_RoundResults"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
// MNetworkVarNames "float m_TeamRespawnWaveTimes"
// MNetworkVarNames "GameTime_t m_flNextRespawnWave"
// MNetworkVarNames "int m_nServerQuestID"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "float m_MinimapVerticalSectionHeights"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
// MNetworkVarNames "int m_nEndMatchMapVoteWinner"
// MNetworkVarNames "int m_iNumConsecutiveCTLoses"
// MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
// MNetworkVarNames "int m_nMatchAbortedEarlyReason"
// MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
// MNetworkVarNames "CRetakeGameRules m_RetakeRules"
// MNetworkVarNames "uint8 m_nMatchEndCount"
// MNetworkVarNames "int m_nTTeamIntroVariant"
// MNetworkVarNames "int m_nCTTeamIntroVariant"
// MNetworkVarNames "bool m_bTeamIntroPeriod"
// MNetworkVarNames "int m_iRoundEndWinnerTeam"
// MNetworkVarNames "int m_eRoundEndReason"
// MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
// MNetworkVarNames "int m_iRoundEndTimerTime"
// MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
// MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
// MNetworkVarNames "int m_iRoundEndFunFactData1"
// MNetworkVarNames "int m_iRoundEndFunFactData2"
// MNetworkVarNames "int m_iRoundEndFunFactData3"
// MNetworkVarNames "CUtlString m_sRoundEndMessage"
// MNetworkVarNames "int m_iRoundEndPlayerCount"
// MNetworkVarNames "bool m_bRoundEndNoMusic"
// MNetworkVarNames "int m_iRoundEndLegacy"
// MNetworkVarNames "uint8 m_nRoundEndCount"
// MNetworkVarNames "int m_iRoundStartRoundNumber"
// MNetworkVarNames "uint8 m_nRoundStartCount"
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
	// MNetworkEnable
	bool m_bIsHltvActive; // 0x94e	
private:
	[[maybe_unused]] uint8_t __pad094f[0x1]; // 0x94f
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
	int32_t m_nMatchAbortedEarlyReason; // 0x14d0	
	bool m_bHasTriggeredRoundStartMusic; // 0x14d4	
	bool m_bHasTriggeredCoopSpawnReset; // 0x14d5	
	bool m_bSwitchingTeamsAtRoundReset; // 0x14d6	
private:
	[[maybe_unused]] uint8_t __pad14d7[0x19]; // 0x14d7
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
	// -> m_nMatchSeed - 0x1660
	// -> m_bBlockersPresent - 0x1664
	// -> m_bRoundInProgress - 0x1665
	// -> m_iFirstSecondHalfRound - 0x1668
	// -> m_iBombSite - 0x166c
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
	[[maybe_unused]] uint8_t __pad17f5[0x3]; // 0x17f5
public:
	// MNetworkEnable
	int32_t m_iRoundEndWinnerTeam; // 0x17f8	
	// MNetworkEnable
	int32_t m_eRoundEndReason; // 0x17fc	
	// MNetworkEnable
	bool m_bRoundEndShowTimerDefend; // 0x1800	
private:
	[[maybe_unused]] uint8_t __pad1801[0x3]; // 0x1801
public:
	// MNetworkEnable
	int32_t m_iRoundEndTimerTime; // 0x1804	
	// MNetworkEnable
	CUtlString m_sRoundEndFunFactToken; // 0x1808	
	// MNetworkEnable
	CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x1810	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData1; // 0x1814	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData2; // 0x1818	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData3; // 0x181c	
	// MNetworkEnable
	CUtlString m_sRoundEndMessage; // 0x1820	
	// MNetworkEnable
	int32_t m_iRoundEndPlayerCount; // 0x1828	
	// MNetworkEnable
	bool m_bRoundEndNoMusic; // 0x182c	
private:
	[[maybe_unused]] uint8_t __pad182d[0x3]; // 0x182d
public:
	// MNetworkEnable
	int32_t m_iRoundEndLegacy; // 0x1830	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundEndCountChanged"
	uint8_t m_nRoundEndCount; // 0x1834	
private:
	[[maybe_unused]] uint8_t __pad1835[0x3]; // 0x1835
public:
	// MNetworkEnable
	int32_t m_iRoundStartRoundNumber; // 0x1838	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundStartCountChanged"
	uint8_t m_nRoundStartCount; // 0x183c	
private:
	[[maybe_unused]] uint8_t __pad183d[0x3]; // 0x183d
public:
	CUtlVector< int32 > m_nRoundStartTicks; // 0x1840	
private:
	[[maybe_unused]] uint8_t __pad1858[0x4008]; // 0x1858
public:
	double m_flLastPerfSampleTime; // 0x5860	
	bool m_bSkipNextServerPerfSample; // 0x5868	
	
	// Static fields:
	static int64_t &Get_m_nMapCycleTimeStamp(){return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[0]->m_instance);};
	static int32_t &Get_m_nMapCycleindex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
class QuestProgress
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iKills"
// MNetworkVarNames "int m_iDeaths"
// MNetworkVarNames "int m_iAssists"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iEquipmentValue"
// MNetworkVarNames "int m_iMoneySaved"
// MNetworkVarNames "int m_iKillReward"
// MNetworkVarNames "int m_iLiveTime"
// MNetworkVarNames "int m_iHeadShotKills"
// MNetworkVarNames "int m_iObjective"
// MNetworkVarNames "int m_iCashEarned"
// MNetworkVarNames "int m_iUtilityDamage"
// MNetworkVarNames "int m_iEnemiesFlashed"
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
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
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
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iObjective; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iCashEarned; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iUtilityDamage; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iEnemiesFlashed; // 0x60	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MNetworkVarNames "int m_iEnemy5Ks"
// MNetworkVarNames "int m_iEnemy4Ks"
// MNetworkVarNames "int m_iEnemy3Ks"
// MNetworkVarNames "int m_iEnemyKnifeKills"
// MNetworkVarNames "int m_iEnemyTaserKills"
struct CSMatchStats_t : public CSPerRoundStats_t
{
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; // 0x68	
	// MNetworkEnable
	int32_t m_iEnemy4Ks; // 0x6c	
	// MNetworkEnable
	int32_t m_iEnemy3Ks; // 0x70	
	// MNetworkEnable
	int32_t m_iEnemyKnifeKills; // 0x74	
	// MNetworkEnable
	int32_t m_iEnemyTaserKills; // 0x78	
	int32_t m_iEnemy2Ks; // 0x7c	
	int32_t m_iUtility_Count; // 0x80	
	int32_t m_iUtility_Successes; // 0x84	
	int32_t m_iUtility_Enemies; // 0x88	
	int32_t m_iFlash_Count; // 0x8c	
	int32_t m_iFlash_Successes; // 0x90	
	int32_t m_nHealthPointsRemovedTotal; // 0x94	
	int32_t m_nHealthPointsDealtTotal; // 0x98	
	int32_t m_nShotsFiredTotal; // 0x9c	
	int32_t m_nShotsOnTargetTotal; // 0xa0	
	int32_t m_i1v1Count; // 0xa4	
	int32_t m_i1v1Wins; // 0xa8	
	int32_t m_i1v2Count; // 0xac	
	int32_t m_i1v2Wins; // 0xb0	
	int32_t m_iEntryCount; // 0xb4	
	int32_t m_iEntryWins; // 0xb8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nVariant"
// MNetworkVarNames "int m_nRandom"
// MNetworkVarNames "int m_nOrdinal"
// MNetworkVarNames "CUtlString m_sWeaponName"
// MNetworkVarNames "XUID m_xuid"
// MNetworkVarNames "CEconItemView m_agentItem"
// MNetworkVarNames "CEconItemView m_glovesItem"
// MNetworkVarNames "CEconItemView m_weaponItem"
class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x4c0	
	// MNetworkEnable
	int32_t m_nRandom; // 0x4c4	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x4d0	
	// MNetworkEnable
	uint64_t m_xuid; // 0x4d8	
	// MNetworkEnable
	CEconItemView m_agentItem; // 0x4e0	
	// MNetworkEnable
	CEconItemView m_glovesItem; // 0x758	
	// MNetworkEnable
	CEconItemView m_weaponItem; // 0x9d0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CCSMinimapBoundary : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x608
// Has VTable
class CCSGOPlayerAnimGraphState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x608]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
// MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
// MNetworkVarNames "int m_iType"
// MNetworkVarNames "bool m_bUrgent"
// MNetworkVarNames "char m_szPlaceName"
class CPlayerPing : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayer; // 0x4c8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPingedEntity; // 0x4cc	
	// MNetworkEnable
	int32_t m_iType; // 0x4d0	
	// MNetworkEnable
	bool m_bUrgent; // 0x4d4	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x4d5	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flPlayerPingTokens[5]; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPlayerPing; // 0x54	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "bool m_bHostageAlive"
// MNetworkVarNames "bool m_isHostageFollowingSomeone"
// MNetworkVarNames "CEntityIndex m_iHostageEntityIDs"
// MNetworkVarNames "Vector m_bombsiteCenterA"
// MNetworkVarNames "Vector m_bombsiteCenterB"
// MNetworkVarNames "int m_hostageRescueX"
// MNetworkVarNames "int m_hostageRescueY"
// MNetworkVarNames "int m_hostageRescueZ"
// MNetworkVarNames "bool m_bEndMatchNextMapAllVoted"
class CCSPlayerResource : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x4c0	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x4cc	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x4d8	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x508	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x514	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x520	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x530	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x540	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x550	
	bool m_foundGoalPositions; // 0x551	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPlayerControllerAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
// 
// MNetworkVarNames "uint32 m_iFOV"
// MNetworkVarNames "uint32 m_iFOVStart"
// MNetworkVarNames "GameTime_t m_flFOVTime"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "CHandle< CBaseEntity> m_hZoomOwner"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "uint16 m_nItemDefIndex"
// MNetworkVarNames "uint16 m_nCount"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "WeaponPurchaseCount_t m_weaponPurchases"
struct WeaponPurchaseTracker_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2f8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "int32 m_totalHitsOnServer"
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unDefIdx"
// MNetworkVarNames "int m_nCost"
// MNetworkVarNames "int m_nPrevArmor"
// MNetworkVarNames "bool m_bPrevHelmet"
// MNetworkVarNames "CEntityHandle m_hItem"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x88]; // 0x40
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // 0xc8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostage"
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostageProp"
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostageProp; // 0x44	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "bool m_bHasDefuser"
// MNetworkVarNames "bool m_bHasHelmet"
// MNetworkVarNames "bool m_bHasHeavyArmor"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "float m_flMaxFallVelocity"
// MNetworkVarNames "Vector m_vecLadderNormal"
// MNetworkVarNames "int m_nLadderSurfacePropIndex"
// MNetworkVarNames "float m_flDuckAmount"
// MNetworkVarNames "float m_flDuckSpeed"
// MNetworkVarNames "bool m_bDuckOverride"
// MNetworkVarNames "bool m_bDesiresDuck"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float m_flLastDuckTime"
// MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
// MNetworkVarNames "bool m_bOldJumpPressed"
// MNetworkVarNames "float m_flJumpUntil"
// MNetworkVarNames "float m_flJumpVel"
// MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
// MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
// MNetworkVarNames "float m_flOffsetTickCompleteTime"
// MNetworkVarNames "float m_flOffsetTickStashedSpeed"
// MNetworkVarNames "float m_flStamina"
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; // 0x228	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x22c	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x238	
	// MNetworkEnable
	float m_flDuckAmount; // 0x23c	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x240	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x244	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x245	
private:
	[[maybe_unused]] uint8_t __pad0246[0x2]; // 0x246
public:
	float m_flDuckOffset; // 0x248	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x24c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x250	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x254	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x268	
	bool m_duckUntilOnGround; // 0x270	
	bool m_bHasWalkMovedSinceLastJump; // 0x271	
	bool m_bInStuckTest; // 0x272	
private:
	[[maybe_unused]] uint8_t __pad0273[0xd]; // 0x273
public:
	float m_flStuckCheckTime[2][64]; // 0x280	
	int32_t m_nTraceCount; // 0x480	
	int32_t m_StuckLast; // 0x484	
	bool m_bSpeedCropped; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad0489[0x3]; // 0x489
public:
	int32_t m_nOldWaterLevel; // 0x48c	
	float m_flWaterEntryTime; // 0x490	
	Vector m_vecForward; // 0x494	
	Vector m_vecLeft; // 0x4a0	
	Vector m_vecUp; // 0x4ac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b8	
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
	float m_flHeightAtJumpStart; // 0x4ec	
	float m_flMaxJumpHeightThisJump; // 0x4f0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	CHandle< CBaseEntity > m_hLastKnownUseEntity; // 0x40	
	GameTime_t m_flLastUseTimeStamp; // 0x44	
	GameTime_t m_flTimeStartedHoldingUse; // 0x48	
	GameTime_t m_flTimeLastUsedWindow; // 0x4c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle< CBaseViewModel > m_hViewModel[3]; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1378
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextAttack"
// MNetworkVarNames "bool m_bIsLookingAtWeapon"
// MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xa8	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xac	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xad	
private:
	[[maybe_unused]] uint8_t __pad00ae[0x2]; // 0xae
public:
	CHandle< CBasePlayerWeapon > m_hSavedWeapon; // 0xb0	
	int32_t m_nTimeToMelee; // 0xb4	
	int32_t m_nTimeToSecondary; // 0xb8	
	int32_t m_nTimeToPrimary; // 0xbc	
	int32_t m_nTimeToSniperRifle; // 0xc0	
	bool m_bIsBeingGivenItem; // 0xc4	
	bool m_bIsPickingUpItemWithUse; // 0xc5	
	bool m_bPickedUpWeapon; // 0xc6	
	bool m_bDisableAutoDeploy; // 0xc7	
	uint32_t m_nOldShootPositionHistoryCount; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x394]; // 0xcc
public:
	uint32_t m_nOldInputHistoryCount; // 0x460	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCSObserver_MovementServices : public CPlayer_MovementServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_UseServices : public CPlayer_UseServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
struct CSAdditionalPerRoundStats_t
{
public:
	int32_t m_numChickensKilled; // 0x0	
	int32_t m_killsWhileBlind; // 0x4	
	int32_t m_bombCarrierkills; // 0x8	
	int32_t m_iBurnDamageInflicted; // 0xc	
	int32_t m_iDinks; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x44
// Has Trivial Destructor
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
	int32_t m_iNumSuicides; // 0x38	
	int32_t m_iNumTeamKills; // 0x3c	
	int32_t m_iTeamDamage; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MNetworkVarNames "CSPerRoundStats_t m_perRoundStats"
// MNetworkVarNames "CSMatchStats_t m_matchStats"
// MNetworkVarNames "int m_iNumRoundKills"
// MNetworkVarNames "int m_iNumRoundKillsHeadshots"
// MNetworkVarNames "uint32 m_unTotalRoundDamageDealt"
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40	
	// MNetworkEnable
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x150	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x154	
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x158	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// 
// MNetworkVarNames "CHandle< CCSPlayerPawnBase > m_PlayerDamager"
// MNetworkVarNames "CHandle< CCSPlayerPawnBase > m_PlayerRecipient"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerDamager"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerRecipient"
// MNetworkVarNames "CUtlString m_szPlayerDamagerName"
// MNetworkVarNames "CUtlString m_szPlayerRecipientName"
// MNetworkVarNames "uint64 m_DamagerXuid"
// MNetworkVarNames "uint64 m_RecipientXuid"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iActualHealthRemoved"
// MNetworkVarNames "int m_iNumHits"
// MNetworkVarNames "int m_iLastBulletUpdate"
// MNetworkVarNames "bool m_bIsOtherEnemy"
// MNetworkVarNames "EKillTypes_t m_killType"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MNetworkVarNames "int m_nSendUpdate"
// MNetworkVarNames "CDamageRecord m_DamageList"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int m_iAccount"
// MNetworkVarNames "int m_iStartAccount"
// MNetworkVarNames "int m_iTotalCashSpent"
// MNetworkVarNames "int m_iCashSpentThisRound"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
struct ServerAuthoritativeWeaponSlot_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	uint16_t unClass; // 0x28	
	uint16_t unSlot; // 0x2a	
	uint16_t unItemDefIdx; // 0x2c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa0
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unMusicID"
// MNetworkVarNames "MedalRank_t m_rank"
// MNetworkVarNames "int m_nPersonaDataPublicLevel"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsLeader"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsTeacher"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsFriendly"
// MNetworkVarNames "int m_nPersonaDataXpTrailLevel"
// MNetworkVarNames "ServerAuthoritativeWeaponSlot_t m_vecServerAuthoritativeWeaponSlots"
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
	// MNetworkEnable
	int32_t m_nPersonaDataXpTrailLevel; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad0070[0xed8]; // 0x70
public:
	uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // 0xf50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSWeaponBaseVDataAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSWeaponBaseAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CFiringModeFloat
{
public:
	float m_flValues[2]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MPropertyCustomEditor
class CFiringModeInt
{
public:
	int32_t m_nValues[2]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CHintMessage
{
public:
	char* m_hintString; // 0x0	
	CUtlVector< char* > m_args; // 0x8	
	float m_duration; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x0	
	CUtlVector< CHintMessage* > m_messages; // 0x8	
	CBasePlayerController* m_pPlayerController; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSObserverPawnAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPlayerPawnAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSPlayer_DamageReactServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
class CCSPlayer_RadioServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flGotHostageTalkTimer; // 0x40	
	GameTime_t m_flDefusingTalkTimer; // 0x44	
	GameTime_t m_flC4PlantTalkTimer; // 0x48	
	GameTime_t m_flRadioTokenSlots[3]; // 0x4c	
	bool m_bIgnoreRadio; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x178
// Has VTable
// Is Abstract
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MNetworkVarNames "int m_iActiveIssueIndex"
// MNetworkVarNames "int m_iOnlyTeamToVote"
// MNetworkVarNames "int m_nVoteOptionCount"
// MNetworkVarNames "int m_nPotentialVotes"
// MNetworkVarNames "bool m_bIsYesNoVote"
class CVoteController : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_iActiveIssueIndex; // 0x4c0	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x4c4	
	// MNetworkEnable
	int32_t m_nVoteOptionCount[5]; // 0x4c8	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x4dc	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CountdownTimer m_acceptingVotesTimer; // 0x4e8	
	CountdownTimer m_executeCommandTimer; // 0x500	
	CountdownTimer m_resetVoteTimer; // 0x518	
	int32_t m_nVotesCast[64]; // 0x530	
	CPlayerSlot m_playerHoldingVote; // 0x630	
	CPlayerSlot m_playerOverrideForVote; // 0x634	
	int32_t m_nHighestCountIndex; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	CUtlVector< CBaseIssue* > m_potentialIssues; // 0x640	
	CUtlVector< char* > m_VoteOptions; // 0x658	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "int m_nDraftType"
// MNetworkVarNames "int m_nTeamWinningCoinToss"
// MNetworkVarNames "int m_nTeamWithFirstChoice"
// MNetworkVarNames "int m_nVoteMapIdsList"
// MNetworkVarNames "int m_nAccountIDs"
// MNetworkVarNames "int m_nMapId0"
// MNetworkVarNames "int m_nMapId1"
// MNetworkVarNames "int m_nMapId2"
// MNetworkVarNames "int m_nMapId3"
// MNetworkVarNames "int m_nMapId4"
// MNetworkVarNames "int m_nMapId5"
// MNetworkVarNames "int m_nStartingSide0"
// MNetworkVarNames "int m_nCurrentPhase"
// MNetworkVarNames "int m_nPhaseStartTick"
// MNetworkVarNames "int m_nPhaseDurationTicks"
class CMapVetoPickController : public CBaseEntity
{
public:
	bool m_bPlayedIntroVcd; // 0x4c0	
	bool m_bNeedToPlayFiveSecondsRemaining; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x1e]; // 0x4c2
public:
	double m_dblPreMatchDraftSequenceTime; // 0x4e0	
	bool m_bPreMatchDraftStateChanged; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x4ec	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x4f0	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x4f4	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x5f4	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x610	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x710	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x810	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x910	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa10	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb10	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc10	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd10	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe10	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe14	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xe20	
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xe48	
	CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xe70	
	CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xe98	
	CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xec0	
	
	// Datamap fields:
	// void CMapVetoPickControllerVoteControllerThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyFriendlyName "CS Globals"
// MPropertyDescription "Analogous to the logic_playerproxy entity. Only makes sense for single-player games."
class CCSPulseServerFuncs_Globals
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CLogicEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x10]; // 0x4c0
public:
	CUtlString m_strEventName; // 0x4d0	
	bool m_bIsEnabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	int32_t m_nTeam; // 0x4dc	
	CEntityIOOutput m_OnEventFired; // 0x4e0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CChicken_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x18	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CChicken_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CChicken_GraphController")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// Has VTable
// Is Abstract
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
	[[maybe_unused]] uint8_t __pad0028[0x88]; // 0x28
public:
	bool m_isRunning; // 0xb0	
	bool m_isCrouching; // 0xb1	
private:
	[[maybe_unused]] uint8_t __pad00b2[0x2]; // 0xb2
public:
	float m_forwardSpeed; // 0xb4	
	float m_leftSpeed; // 0xb8	
	float m_verticalSpeed; // 0xbc	
	uint64_t m_buttonFlags; // 0xc0	
	float m_jumpTimestamp; // 0xc8	
	Vector m_viewForward; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d8[0x10]; // 0xd8
public:
	int32_t m_postureStackIndex; // 0xe8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// Is Abstract
class CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x58]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// Is Abstract
class CBtNodeDecorator : public CBtNode
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// Is Abstract
class CBtNodeComposite : public CBtNode
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf8
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CBtActionParachutePositioning : public CBtNode
{
public:
	CountdownTimer m_ActionTimer; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// Is Abstract
class CBtNodeCondition : public CBtNodeDecorator
{
public:
	bool m_bNegated; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CBtNodeConditionInactive : public CBtNodeCondition
{
private:
	[[maybe_unused]] uint8_t __pad0060[0x18]; // 0x60
public:
	float m_flRoundStartThresholdSeconds; // 0x78	
	float m_flSensorInactivityThresholdSeconds; // 0x7c	
	CountdownTimer m_SensorInactivityTimer; // 0x80	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CPointEntity : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_hCubemapTexture"
// MNetworkVarNames "bool m_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_nPriority"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flEdgeFadeDist"
// MNetworkVarNames "Vector m_vEdgeFadeDists"
// MNetworkVarNames "int m_nLightProbeSizeX"
// MNetworkVarNames "int m_nLightProbeSizeY"
// MNetworkVarNames "int m_nLightProbeSizeZ"
// MNetworkVarNames "int m_nLightProbeAtlasX"
// MNetworkVarNames "int m_nLightProbeAtlasY"
// MNetworkVarNames "int m_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_bEnabled"
class CEnvCombinedLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x1058]; // 0x4c0
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
	bool m_bMoveable; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1569[0x3]; // 0x1569
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x156c	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x1570	
	// MNetworkEnable
	int32_t m_nPriority; // 0x1574	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad1579[0x3]; // 0x1579
public:
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x157c	
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x1580	
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; // 0x158c	
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; // 0x1590	
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; // 0x1594	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; // 0x1598	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; // 0x159c	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; // 0x15a0	
private:
	[[maybe_unused]] uint8_t __pad15a4[0x15]; // 0x15a4
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x15b9	
	
	// Datamap fields:
	// void m_pEnvMap; // 0x15a8
	// void m_pLightProbeVolume; // 0x15b0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hCubemapTexture"
// MNetworkVarNames "bool m_bCustomCubemapTexture"
// MNetworkVarNames "float m_flInfluenceRadius"
// MNetworkVarNames "Vector m_vBoxProjectMins"
// MNetworkVarNames "Vector m_vBoxProjectMaxs"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_nPriority"
// MNetworkVarNames "float m_flEdgeFadeDist"
// MNetworkVarNames "Vector m_vEdgeFadeDists"
// MNetworkVarNames "float m_flDiffuseScale"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bDefaultEnvMap"
// MNetworkVarNames "bool m_bDefaultSpecEnvMap"
// MNetworkVarNames "bool m_bIndoorCubeMap"
// MNetworkVarNames "bool m_bCopyDiffuseFromDefaultCubemap"
// MNetworkVarNames "bool m_bEnabled"
class CEnvCubemap : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x80]; // 0x4c0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x540	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x54c	
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x550	
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x55c	
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
	
	// Datamap fields:
	// void m_pSceneObject; // 0x598
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
class CEnvCubemapBox : public CEnvCubemap
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightEnd"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "int m_nCubemapSourceType"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "string_t m_iszSkyEntity"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
// MNetworkVarNames "bool m_bHasHeightFogEnd"
class CEnvCubemapFog : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x4c0	
	// MNetworkEnable
	float m_flStartDistance; // 0x4c4	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4c8	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4d0	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x4d4	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4d8	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4dc	
	// MNetworkEnable
	float m_flLODBias; // 0x4e0	
	// MNetworkEnable
	bool m_bActive; // 0x4e4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4e5	
private:
	[[maybe_unused]] uint8_t __pad04e6[0x2]; // 0x4e6
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x4e8	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x4ec	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x4f0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x4f8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x500	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x508	
	bool m_bFirstTime; // 0x509	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
// MNetworkVarNames "float m_flFogStartDistance"
// MNetworkVarNames "float m_flFogEndDistance"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogStartHeight"
// MNetworkVarNames "float m_flFogEndHeight"
// MNetworkVarNames "float m_flFarZ"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogVerticalExponent"
// MNetworkVarNames "Color m_fogColor"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class CGradientFog : public CBaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x4c0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x4c8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x4cc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x4d4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x4d8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x4dc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x4e0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x4e4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x4e8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x4ec	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x4f0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x4f4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f8	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4f9	
	bool m_bGradientFogNeedsTextures; // 0x4fa	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetFogStartDistance; // 0x0
	// float InputSetFogEndDistance; // 0x0
	// float InputSetFogStartHeight; // 0x0
	// float InputSetFogEndHeight; // 0x0
	// float InputSetFogMaxOpacity; // 0x0
	// float InputSetFogFalloffExponent; // 0x0
	// float InputSetFogVerticalExponent; // 0x0
	// Color InputSetFogColor; // 0x0
	// float InputSetFogStrength; // 0x0
	// float InputSetFarZ; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nPriority"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "int m_nLightProbeSizeX"
// MNetworkVarNames "int m_nLightProbeSizeY"
// MNetworkVarNames "int m_nLightProbeSizeZ"
// MNetworkVarNames "int m_nLightProbeAtlasX"
// MNetworkVarNames "int m_nLightProbeAtlasY"
// MNetworkVarNames "int m_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_bEnabled"
class CEnvLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0xfd8]; // 0x4c0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1498	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x14a0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14a8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x14b0	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14b8	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14c4	
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
	
	// Datamap fields:
	// void m_pSceneObject; // 0x14f8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkVarNames "float m_flVisibilityStrength"
// MNetworkVarNames "float m_flFogDistanceMultiplier"
// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class CPlayerVisibility : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x4c0	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x4c4	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x4c8	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x4cc	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4d0	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4d1	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetPlayerVisibilityStrength; // 0x0
	// float InputSetPlayerFogDistanceMultiplier; // 0x0
	// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "float m_flAutoExposureMin"
// MNetworkVarNames "float m_flAutoExposureMax"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
// MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
// MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
class CTonemapController2 : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x4c0	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x4c4	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x4c8	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x4cc	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x4d0	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x4d4	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x4d8	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x4dc	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetMinExposure; // 0x0
	// float InputSetMaxExposure; // 0x0
	// float InputSetPercentTarget; // 0x0
	// float InputSetPercentBrightPixels; // 0x0
	// float InputSetMinAverageLuminosity; // 0x0
	// float InputSetExposureAdaptationSpeedUp; // 0x0
	// float InputSetExposureAdaptationSpeedDown; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
// MNetworkVarNames "GameTime_t m_flStartScatterTime"
// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
class CEnvVolumetricFogController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x4c0	
	// MNetworkEnable
	float m_flAnisotropy; // 0x4c4	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4c8	
	// MNetworkEnable
	float m_flDrawDistance; // 0x4cc	
	// MNetworkEnable
	float m_flFadeInStart; // 0x4d0	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4d4	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4d8	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4dc	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4e0	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4e4	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4e8	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4f4	
	// MNetworkEnable
	bool m_bActive; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x504	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x508	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x50c	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x510	
	// MNetworkEnable
	float m_flStartScattering; // 0x514	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x518	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x51c	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x520	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x524	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x528	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x529	
	// MNetworkEnable
	bool m_bIsMaster; // 0x52a	
private:
	[[maybe_unused]] uint8_t __pad052b[0x5]; // 0x52b
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x530	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x538	
	bool m_bFirstTime; // 0x53c	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4c4	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4d0	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	// MNetworkEnable
	float m_flStrength; // 0x4e0	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4e4	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x4e8	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MNetworkVarNames "fogparams_t m_fog"
class CFogController : public CBaseEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x4c0	
	bool m_bUseAngles; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	int32_t m_iChangedVariables; // 0x52c	
	
	// Datamap fields:
	// float InputSetStartDist; // 0x0
	// float InputSetEndDist; // 0x0
	// float InputSetMaxDensity; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
	// Color InputSetColorSecondary; // 0x0
	// int32_t InputSetFarZ; // 0x0
	// CUtlSymbolLarge InputSetAngles; // 0x0
	// float InputSet2DSkyboxFogFactor; // 0x0
	// Color InputSetColorLerpTo; // 0x0
	// Color InputSetColorSecondaryLerpTo; // 0x0
	// float InputSetStartDistLerpTo; // 0x0
	// float InputSetEndDistLerpTo; // 0x0
	// float InputSetMaxDensityLerpTo; // 0x0
	// float InputSet2DSkyboxFogFactorLerpTo; // 0x0
	// void InputStartFogTransition; // 0x0
	// void CFogControllerSetLerpValues; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoTarget : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoTargetServerOnly : public CServerOnlyPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoParticleTarget : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class CInfoVisibilityBox : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x4]; // 0x4c0
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x4c4	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4c8	
	// MNetworkEnable
	bool m_bEnabled; // 0x4d4	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public CBaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4c0	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x4e8	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x4f0	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x4f8	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x4f9	
	bool m_bCreateAsChildSpawnGroup; // 0x4fa	
private:
	[[maybe_unused]] uint8_t __pad04fb[0x1]; // 0x4fb
public:
	uint32_t m_hLayerSpawnGroup; // 0x4fc	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CMultiLightProxy : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4c0	
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4c8	
	float m_flLightRadiusFilter; // 0x4d0	
	float m_flBrightnessDelta; // 0x4d4	
	bool m_bPerformScreenFade; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flTargetBrightnessMultiplier; // 0x4dc	
	float m_flCurrentBrightnessMultiplier; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x4e8	
	
	// Datamap fields:
	// float InputFlickerLights; // 0x0
	// float InputDisableLights; // 0x0
	// float InputSetLightsBrightnessMultiplier; // 0x0
	// float InputSetBrightnessDelta; // 0x0
	// void CMultiLightProxyRestoreFlashlightThink; // 0x0
	// void CMultiLightProxyApproachBrightnessThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
// 
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "bool m_bCanHLTVUse"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
class CPointCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x4c0	
	// MNetworkEnable
	float m_Resolution; // 0x4c4	
	// MNetworkEnable
	bool m_bFogEnable; // 0x4c8	
	// MNetworkEnable
	Color m_FogColor; // 0x4c9	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	// MNetworkEnable
	float m_flFogStart; // 0x4d0	
	// MNetworkEnable
	float m_flFogEnd; // 0x4d4	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x4d8	
	// MNetworkEnable
	bool m_bActive; // 0x4dc	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x4dd	
private:
	[[maybe_unused]] uint8_t __pad04de[0x2]; // 0x4de
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x4e0	
	// MNetworkEnable
	bool m_bNoSky; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	// MNetworkEnable
	float m_fBrightness; // 0x4e8	
	// MNetworkEnable
	float m_flZFar; // 0x4ec	
	// MNetworkEnable
	float m_flZNear; // 0x4f0	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x4f4	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x4f8	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x4fc	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x500	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x504	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x508	
	float m_TargetFOV; // 0x50c	
	float m_DegreesPerSecond; // 0x510	
	bool m_bIsOn; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	CPointCamera* m_pNext; // 0x518	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
	// void InputEnableDOF; // 0x0
	// void InputDisableDOF; // 0x0
	// float InputSetDOFNearBlurry; // 0x0
	// float InputSetDOFNearCrisp; // 0x0
	// float InputSetDOFFarCrisp; // 0x0
	// float InputSetDOFFarBlurry; // 0x0
	// float InputSetDOFTiltToGround; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x520	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x500
	// float m_flDofFarBlurry; // 0x504
	// float m_flDofTiltToGround; // 0x508
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4c0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4c8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4d0	
	float m_flTimeoutInterval; // 0x4d8	
	bool m_bAsynchronouslySpawnEntities; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x4e0	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x508	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x50c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x510	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x528	
	HSCRIPT m_ScriptSpawnCallback; // 0x540	
	HSCRIPT m_ScriptCallbackScope; // 0x548	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CGameGibManager : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x20]; // 0x4c0
public:
	bool m_bAllowNewGibs; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	int32_t m_iCurrentMaxPieces; // 0x4e4	
	int32_t m_iMaxPieces; // 0x4e8	
	int32_t m_iLastFrame; // 0x4ec	
	
	// Datamap fields:
	// int32_t InputSetMaxPieces; // 0x0
	// int32_t InputSetMaxPiecesDX8; // 0x0
	// void m_LRU; // 0x4c0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class CSoundAreaEntityBase : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x4c8	
	// MNetworkEnable
	Vector m_vPos; // 0x4d0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "float m_flRadius"
class CSoundAreaEntitySphere : public CSoundAreaEntityBase
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x4e0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "Vector m_vMin"
// MNetworkVarNames "Vector m_vMax"
class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x4e0	
	// MNetworkEnable
	Vector m_vMax; // 0x4ec	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
// MNetworkVarNames "CHandle< CBasePlayerPawn > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "char m_szTeamname"
class CTeam : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4c0	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4d8	
	// MNetworkEnable
	int32_t m_iScore; // 0x4f0	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x4f4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
// Has VTable
// 
// MNetworkIncludeByName "m_pEntity"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_flCreateTime"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkIncludeByName "m_fFlags"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
class CBasePlayerController : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4c8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x2c]; // 0x4d4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x500	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x504	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x510	
	bool m_bIsHLTV; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x52c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x530	
	CUtlString m_szNetworkIDString; // 0x5b0	
	float m_fLerpTime; // 0x5b8	
	bool m_bLagCompensation; // 0x5bc	
	bool m_bPredict; // 0x5bd	
	bool m_bAutoKickDisabled; // 0x5be	
	bool m_bIsLowViolence; // 0x5bf	
	bool m_bGamePaused; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x93]; // 0x5c1
public:
	int32_t m_nLastRealCommandNumberExecuted; // 0x654	
	int32_t m_nLastLateCommandExecuted; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x14]; // 0x65c
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x670	
	float m_flLastPlayerTalkTime; // 0x674	
	float m_flLastEntitySteadyState; // 0x678	
	int32_t m_nAvailableEntitySteadyState; // 0x67c	
	bool m_bHasAnySteadyStateEnts; // 0x680	
private:
	[[maybe_unused]] uint8_t __pad0681[0xf]; // 0x681
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x690	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x698	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x688
	// void m_LastCmd; // 0x5c8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x178
// Has VTable
// 
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
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
private:
	[[maybe_unused]] uint8_t __pad010a[0x6]; // 0x10a
public:
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
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nPrimaryAmmoType; // 0x1f9	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType "string"
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
	// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
	bool m_bLinkedCooldowns; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x7]; // 0x219
public:
	CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x220	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x240	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x244	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoGameEventProxy : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4c0	
	float m_flRange; // 0x4c8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputGenerateGameEvent; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CProjectedDecal : public CPointEntity
{
public:
	int32_t m_nTexture; // 0x4c0	
	float m_flDistance; // 0x4c4	
	
	// Datamap fields:
	// void CProjectedDecalTriggerDecal; // 0x0
	// void CProjectedDecalStaticDecal; // 0x0
	// void InputActivate; // 0x0
	// CUtlString texture; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkVarNames "CBaseAnimGraphController m_animationController"
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x460	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x950	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "uint8 m_nObjectCulling"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
// MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
class CBaseModelEntity : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4c0	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x4c8	
	GameTime_t m_flDissolveStartTime; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CEntityIOOutput m_OnIgnite; // 0x4f8	
	// MNetworkEnable
	RenderMode_t m_nRenderMode; // 0x520	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x521	
	bool m_bAllowFadeInView; // 0x522	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x523	
private:
	[[maybe_unused]] uint8_t __pad0527[0x1]; // 0x527
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x528	
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0x7]; // 0x579
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x580	
	// MNetworkEnable
	// -> m_fGlowColor - 0x638
	// -> m_iGlowType - 0x660
	// -> m_iGlowTeam - 0x664
	// -> m_nGlowRange - 0x668
	// -> m_nGlowRangeMin - 0x66c
	// -> m_glowColorOverride - 0x670
	// -> m_bFlashing - 0x674
	// -> m_flGlowTime - 0x678
	// -> m_flGlowStartTime - 0x67c
	// -> m_bEligibleForScreenHighlight - 0x680
	// -> m_bGlowing - 0x681
	CGlowProperty m_Glow; // 0x630	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x688	
	// MNetworkEnable
	float m_fadeMinDist; // 0x68c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x690	
	// MNetworkEnable
	float m_flFadeScale; // 0x694	
	// MNetworkEnable
	float m_flShadowStrength; // 0x698	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x69c	
private:
	[[maybe_unused]] uint8_t __pad069d[0x3]; // 0x69d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x6a0	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x6a4	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x6b0	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x6bc	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x6c0	
private:
	[[maybe_unused]] uint8_t __pad06c4[0x4]; // 0x6c4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6c8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// -> m_vecX - 0x6f0
	// -> m_vecY - 0x6f8
	// -> m_vecZ - 0x700
	CNetworkViewOffsetVector m_vecViewOffset; // 0x6e0	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
	// void InputIgnite; // 0x0
	// float InputIgniteLifetime; // 0x0
	// int32_t InputIgnite; // 0x0
	// float InputIgnite; // 0x0
	// void InputExtinguish; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void CBaseModelEntitySUB_StartFadeOut; // 0x0
	// void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
	// void CBaseModelEntitySUB_FadeOut; // 0x0
	// void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
	// void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
	// void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
	// void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
	// void CBaseModelEntitySUB_StopShadowFade; // 0x0
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CServerOnlyModelEntity : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CModelPointEntity : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4c0	
	CEntityIOOutput m_OnSpawn; // 0x4e8	
	bool m_bDisabled; // 0x510	
	bool m_bWaitForRefire; // 0x511	
	bool m_bTriggerOnce; // 0x512	
	bool m_bFastRetrigger; // 0x513	
	bool m_bPassthoughCaller; // 0x514	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFrozen"
// MNetworkVarNames "float m_flFreezeTransitionDuration"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flPreSimTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
// MNetworkVarNames "bool m_bNoSave"
// MNetworkVarNames "bool m_bNoFreeze"
// MNetworkVarNames "bool m_bNoRamp"
class CParticleSystem : public CBaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x710	
	// MNetworkEnable
	bool m_bActive; // 0x910	
	// MNetworkEnable
	bool m_bFrozen; // 0x911	
private:
	[[maybe_unused]] uint8_t __pad0912[0x2]; // 0x912
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0x914	
	// MNetworkEnable
	int32_t m_nStopType; // 0x918	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0x91c	
private:
	[[maybe_unused]] uint8_t __pad091d[0x3]; // 0x91d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x920	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x928	
	// MNetworkEnable
	float m_flPreSimTime; // 0x92c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0x930	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0x960	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0x964	
	// MNetworkEnable
	bool m_bNoSave; // 0xa64	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xa65	
	// MNetworkEnable
	bool m_bNoRamp; // 0xa66	
	bool m_bStartActive; // 0xa67	
	CUtlSymbolLarge m_iszEffectName; // 0xa68	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xa70	
	int32_t m_nDataCP; // 0xc70	
	Vector m_vecDataCPValue; // 0xc74	
	int32_t m_nTintCP; // 0xc80	
	Color m_clrTint; // 0xc84	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void CParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class CPathParticleRope : public CBaseEntity
{
public:
	bool m_bStartActive; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMaxSimulationTime; // 0x4c4	
	CUtlSymbolLarge m_iszEffectName; // 0x4c8	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4d0	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x4e8	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x4ec	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x4f0	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x4f4	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x500	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x508	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x520	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x538	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x550	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x568	
	// MNetworkEnable
	CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x580	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CFuncWall : public CBaseModelEntity
{
public:
	int32_t m_nState; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CFuncWallToggle : public CFuncWall
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CFuncVehicleClip : public CBaseModelEntity
{
public:
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CFuncIllusionary : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CFuncVPhysicsClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x710	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x7]; // 0x711
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x718	
	CUtlSymbolLarge m_iszInteractsWith; // 0x720	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CPointClientCommand : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CPointServerCommand : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CPointBroadcastClientCommand : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CCommentaryAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnCommentaryNewGame; // 0x4c0	
	CEntityIOOutput m_OnCommentaryMidGame; // 0x4e8	
	CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x510	
	
	// Datamap fields:
	// void InputMultiplayerSpawned; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class CDynamicLight : public CBaseModelEntity
{
public:
	uint8_t m_ActualFlags; // 0x710	
	// MNetworkEnable
	uint8_t m_Flags; // 0x711	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x712	
	bool m_On; // 0x713	
	// MNetworkEnable
	float m_Radius; // 0x714	
	// MNetworkEnable
	int32_t m_Exponent; // 0x718	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x71c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x720	
	// MNetworkEnable
	float m_SpotRadius; // 0x724	
	
	// Datamap fields:
	// void CDynamicLightDynamicLightThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// Color _light; // 0x7fffffff
	// float pitch; // 0x7fffffff
	// int32_t spawnflags; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CBubbling : public CBaseModelEntity
{
public:
	int32_t m_density; // 0x710	
	int32_t m_frequency; // 0x714	
	int32_t m_state; // 0x718	
	
	// Datamap fields:
	// float m_flSpeed; // 0x32c
	// void CBubblingFizzThink; // 0x0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCurrent; // 0x0
	// int32_t InputSetDensity; // 0x0
	// int32_t InputSetFrequency; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvTracer : public CPointEntity
{
public:
	Vector m_vecEnd; // 0x4c0	
	float m_flDelay; // 0x4cc	
	
	// Datamap fields:
	// void CEnvTracerTracerThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
class CTestEffect : public CBaseEntity
{
public:
	int32_t m_iLoop; // 0x4c0	
	int32_t m_iBeam; // 0x4c4	
	CBeam* m_pBeam[24]; // 0x4c8	
	GameTime_t m_flBeamTime[24]; // 0x588	
	GameTime_t m_flStartTime; // 0x5e8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CBlood : public CPointEntity
{
public:
	QAngle m_vecSprayAngles; // 0x4c0	
	Vector m_vecSprayDir; // 0x4cc	
	float m_flAmount; // 0x4d8	
	int32_t m_Color; // 0x4dc	
	
	// Datamap fields:
	// void InputEmitBlood; // 0x0
	// int32_t color; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CEnvFunnel : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvBeverage : public CBaseEntity
{
public:
	bool m_CanInDispenser; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	int32_t m_nBeverageType; // 0x4c4	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CPrecipitationBlocker : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class CEnvWind : public CBaseEntity
{
public:
	// MNetworkEnable
	CEnvWindShared m_EnvWindShared; // 0x4c0	
	
	// Datamap fields:
	// int16_t m_EnvWindShared.m_iMinWind; // 0x4d0
	// int16_t m_EnvWindShared.m_iMaxWind; // 0x4d2
	// int32_t m_EnvWindShared.m_windRadius; // 0x4d4
	// int16_t m_EnvWindShared.m_iMinGust; // 0x4d8
	// int16_t m_EnvWindShared.m_iMaxGust; // 0x4da
	// float m_EnvWindShared.m_flMinGustDelay; // 0x4dc
	// float m_EnvWindShared.m_flMaxGustDelay; // 0x4e0
	// int16_t m_EnvWindShared.m_iGustDirChange; // 0x4e8
	// float m_EnvWindShared.m_flGustDuration; // 0x4e4
	// int32_t m_EnvWindShared.m_iWindDir; // 0x4fc
	// float m_EnvWindShared.m_flWindSpeed; // 0x500
	// void CEnvWindWindThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CPhysicsWire : public CBaseEntity
{
public:
	int32_t m_nDensity; // 0x4c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvMuzzleFlash : public CPointEntity
{
public:
	float m_flScale; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszParentAttachment; // 0x4c8	
	
	// Datamap fields:
	// void InputFire; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvSplash : public CPointEntity
{
public:
	float m_flScale; // 0x4c0	
	
	// Datamap fields:
	// void InputSplash; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvViewPunch : public CPointEntity
{
public:
	float m_flRadius; // 0x4c0	
	QAngle m_angViewPunch; // 0x4c4	
	
	// Datamap fields:
	// void InputViewPunch; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvEntityIgniter : public CBaseEntity
{
public:
	float m_flLifetime; // 0x4c0	
	
	// Datamap fields:
	// void InputIgnite; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f54a8
// Has VTable
class CDebugHistory : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x1f4040]; // 0x4c0
public:
	int32_t m_nNpcEvents; // 0x1f4500	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CEnvEntityMaker : public CPointEntity
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
private:
	[[maybe_unused]] uint8_t __pad0501[0x7]; // 0x501
public:
	CUtlSymbolLarge m_iszTemplate; // 0x508	
	CEntityIOOutput m_pOutputOnSpawned; // 0x510	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x538	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoInstructorHintTarget : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CEnvInstructorHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4c0	
	CUtlSymbolLarge m_iszReplace_Key; // 0x4c8	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4d0	
	int32_t m_iTimeout; // 0x4d8	
	int32_t m_iDisplayLimit; // 0x4dc	
	CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4e0	
	CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4e8	
	CUtlSymbolLarge m_iszCaption; // 0x4f0	
	CUtlSymbolLarge m_iszActivatorCaption; // 0x4f8	
	Color m_Color; // 0x500	
	float m_fIconOffset; // 0x504	
	float m_fRange; // 0x508	
	uint8_t m_iPulseOption; // 0x50c	
	uint8_t m_iAlphaOption; // 0x50d	
	uint8_t m_iShakeOption; // 0x50e	
	bool m_bStatic; // 0x50f	
	bool m_bNoOffscreen; // 0x510	
	bool m_bForceCaption; // 0x511	
private:
	[[maybe_unused]] uint8_t __pad0512[0x2]; // 0x512
public:
	int32_t m_iInstanceType; // 0x514	
	bool m_bSuppressRest; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x7]; // 0x519
public:
	CUtlSymbolLarge m_iszBinding; // 0x520	
	bool m_bAllowNoDrawTarget; // 0x528	
	bool m_bAutoStart; // 0x529	
	bool m_bLocalPlayerOnly; // 0x52a	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CEnvInstructorVRHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4c0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8	
	int32_t m_iTimeout; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszCaption; // 0x4d8	
	CUtlSymbolLarge m_iszStartSound; // 0x4e0	
	int32_t m_iLayoutFileType; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4f0	
	int32_t m_iAttachType; // 0x4f8	
	float m_flHeightOffset; // 0x4fc	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInstructorEventEntity : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4c0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8	
	CHandle< CBasePlayerPawn > m_hTargetPlayer; // 0x4d0	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
	// void InputSetTargetPlayerToActivator; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class CEnvScreenOverlay : public CPointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4c0	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x510	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x538	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x53c	
	// MNetworkEnable
	bool m_bIsActive; // 0x540	
	
	// Datamap fields:
	// void InputStartOverlay; // 0x0
	// void InputStopOverlay; // 0x0
	// int32_t InputSwitchOverlay; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "Color m_fadeColor"
class CEnvFade : public CLogicalEntity
{
public:
	// MNetworkEnable
	Color m_fadeColor; // 0x4c0	
	float m_Duration; // 0x4c4	
	float m_HoldDuration; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CEntityIOOutput m_OnBeginFade; // 0x4d0	
	
	// Datamap fields:
	// void InputFade; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CCredits : public CPointEntity
{
public:
	CEntityIOOutput m_OnCreditsDone; // 0x4c0	
	bool m_bRolledOutroCredits; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	float m_flLogoLength; // 0x4ec	
	
	// Datamap fields:
	// void InputRollCredits; // 0x0
	// void InputRollOutroCredits; // 0x0
	// void InputShowLogo; // 0x0
	// float InputSetLogoLength; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CEnvShake : public CPointEntity
{
public:
	CUtlSymbolLarge m_limitToEntity; // 0x4c0	
	float m_Amplitude; // 0x4c8	
	float m_Frequency; // 0x4cc	
	float m_Duration; // 0x4d0	
	float m_Radius; // 0x4d4	
	GameTime_t m_stopTime; // 0x4d8	
	GameTime_t m_nextShake; // 0x4dc	
	float m_currentAmp; // 0x4e0	
	Vector m_maxForce; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04f0[0x8]; // 0x4f0
public:
	CPhysicsShake m_shakeCallback; // 0x4f8	
	
	// Datamap fields:
	// void m_pShakeController; // 0x4f0
	// void InputStartShake; // 0x0
	// void InputStopShake; // 0x0
	// float InputAmplitude; // 0x0
	// float InputFrequency; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvTilt : public CPointEntity
{
public:
	float m_Duration; // 0x4c0	
	float m_Radius; // 0x4c4	
	float m_TiltTime; // 0x4c8	
	GameTime_t m_stopTime; // 0x4cc	
	
	// Datamap fields:
	// void InputStartTilt; // 0x0
	// void InputStopTilt; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CEnvSpark : public CPointEntity
{
public:
	float m_flDelay; // 0x4c0	
	int32_t m_nMagnitude; // 0x4c4	
	int32_t m_nTrailLength; // 0x4c8	
	int32_t m_nType; // 0x4cc	
	CEntityIOOutput m_OnSpark; // 0x4d0	
	
	// Datamap fields:
	// void CEnvSparkSparkThink; // 0x0
	// void InputStartSpark; // 0x0
	// void InputStopSpark; // 0x0
	// void InputToggleSpark; // 0x0
	// void InputSparkOnce; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CShower : public CModelPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x710	
	float m_flPlayerDamage; // 0x714	
	int32_t m_iRadiusOverride; // 0x718	
	float m_flInnerRadius; // 0x71c	
	int32_t m_spriteScale; // 0x720	
	float m_flDamageForce; // 0x724	
	CHandle< CBaseEntity > m_hInflictor; // 0x728	
	int32_t m_iCustomDamageType; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad0730[0x8]; // 0x730
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x738	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x740	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x748	
	Class_T m_iClassIgnore; // 0x750	
	Class_T m_iClassIgnore2; // 0x754	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x758	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x760	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x730
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterName : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterModel : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterModel; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterContext : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iFilterContext; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class FilterTeam : public CBaseFilter
{
public:
	int32_t m_iFilterTeam; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterMassGreater : public CBaseFilter
{
public:
	float m_fFilterMass; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class FilterDamageType : public CBaseFilter
{
public:
	int32_t m_iDamageType; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	int32_t m_iHealthMin; // 0x51c	
	int32_t m_iHealthMax; // 0x520	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x518	
	float m_flRadius; // 0x520	
	float m_flOuterRadius; // 0x524	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x530	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CFilterAttributeInt : public CBaseFilter
{
public:
	CUtlStringToken m_sAttributeName; // 0x518	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x710	
	CHandle< CBaseEntity > m_hOwner; // 0x714	
	int32_t m_nFireType; // 0x718	
	float m_flFuel; // 0x71c	
	GameTime_t m_flDamageTime; // 0x720	
	GameTime_t m_lastDamage; // 0x724	
	float m_flFireSize; // 0x728	
	GameTime_t m_flLastNavUpdateTime; // 0x72c	
	float m_flHeatLevel; // 0x730	
	float m_flHeatAbsorb; // 0x734	
	float m_flDamageScale; // 0x738	
	float m_flMaxHeat; // 0x73c	
	float m_flLastHeatLevel; // 0x740	
	float m_flAttackTime; // 0x744	
	bool m_bEnabled; // 0x748	
	bool m_bStartDisabled; // 0x749	
	bool m_bDidActivate; // 0x74a	
private:
	[[maybe_unused]] uint8_t __pad074b[0x5]; // 0x74b
public:
	CEntityIOOutput m_OnIgnited; // 0x750	
	CEntityIOOutput m_OnExtinguished; // 0x778	
	
	// Datamap fields:
	// void CFireBurnThink; // 0x0
	// void CFireGoOutThink; // 0x0
	// void InputStartFire; // 0x0
	// float InputExtinguish; // 0x0
	// float InputExtinguishTemporary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvFireSource : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_radius; // 0x4c4	
	float m_damage; // 0x4c8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4c0	
	bool m_bHeatAtLevel; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x2]; // 0x4c2
public:
	float m_radius; // 0x4c4	
	float m_targetLevel; // 0x4c8	
	float m_targetTime; // 0x4cc	
	float m_levelTime; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4d8	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x500	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CFuncTimescale : public CBaseEntity
{
public:
	float m_flDesiredTimescale; // 0x4c0	
	float m_flAcceleration; // 0x4c4	
	float m_flMinBlendRate; // 0x4c8	
	float m_flBlendDeltaMultiplier; // 0x4cc	
	bool m_isStarted; // 0x4d0	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputReset; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "uint32 m_nHorizontalSize"
// MNetworkVarNames "uint32 m_nVerticalSize"
// MNetworkVarNames "uint32 m_nMinDist"
// MNetworkVarNames "uint32 m_nMaxDist"
// MNetworkVarNames "uint32 m_nOuterMaxDist"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class CLightGlow : public CBaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x710	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x714	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x718	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x71c	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x720	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x724	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x728	
	
	// Datamap fields:
	// Color InputColor; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CLogicAchievement : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	CUtlSymbolLarge m_iszAchievementEventID; // 0x4c8	
	CEntityIOOutput m_OnFired; // 0x4d0	
	
	// Datamap fields:
	// void InputFireEvent; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
class CLogicGameEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x10]; // 0x4c0
public:
	CEntityIOOutput m_OnEventFired; // 0x4d0	
	CUtlSymbolLarge m_iszGameEventName; // 0x4f8	
	CUtlSymbolLarge m_iszGameEventItem; // 0x500	
	// MNetworkEnable
	bool m_bEnabled; // 0x508	
	bool m_bStartDisabled; // 0x509	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CLogicMeasureMovement : public CLogicalEntity
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
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetMeasureTarget; // 0x0
	// CUtlSymbolLarge InputSetMeasureReference; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// CUtlSymbolLarge InputSetTargetReference; // 0x0
	// float InputSetTargetScale; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CLogicMeasureMovementMeasureThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CLogicNavigation : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	bool m_isOn; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04c9[0x3]; // 0x4c9
public:
	navproperties_t m_navProperty; // 0x4cc	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlString navprop; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x800
// Has VTable
class CLogicNPCCounter : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMinCountAll; // 0x4c0	
	CEntityIOOutput m_OnMaxCountAll; // 0x4e8	
	CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x510	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x538	
	CEntityIOOutput m_OnMinCount_1; // 0x560	
	CEntityIOOutput m_OnMaxCount_1; // 0x588	
	CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x5b0	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5d8	
	CEntityIOOutput m_OnMinCount_2; // 0x600	
	CEntityIOOutput m_OnMaxCount_2; // 0x628	
	CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x650	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x678	
	CEntityIOOutput m_OnMinCount_3; // 0x6a0	
	CEntityIOOutput m_OnMaxCount_3; // 0x6c8	
	CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x6f0	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x718	
	CEntityHandle m_hSource; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x748	
	float m_flDistanceMax; // 0x750	
	bool m_bDisabled; // 0x754	
private:
	[[maybe_unused]] uint8_t __pad0755[0x3]; // 0x755
public:
	int32_t m_nMinCountAll; // 0x758	
	int32_t m_nMaxCountAll; // 0x75c	
	int32_t m_nMinFactorAll; // 0x760	
	int32_t m_nMaxFactorAll; // 0x764	
private:
	[[maybe_unused]] uint8_t __pad0768[0x8]; // 0x768
public:
	CUtlSymbolLarge m_iszNPCClassname_1; // 0x770	
	int32_t m_nNPCState_1; // 0x778	
	bool m_bInvertState_1; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad077d[0x3]; // 0x77d
public:
	int32_t m_nMinCount_1; // 0x780	
	int32_t m_nMaxCount_1; // 0x784	
	int32_t m_nMinFactor_1; // 0x788	
	int32_t m_nMaxFactor_1; // 0x78c	
private:
	[[maybe_unused]] uint8_t __pad0790[0x4]; // 0x790
public:
	float m_flDefaultDist_1; // 0x794	
	CUtlSymbolLarge m_iszNPCClassname_2; // 0x798	
	int32_t m_nNPCState_2; // 0x7a0	
	bool m_bInvertState_2; // 0x7a4	
private:
	[[maybe_unused]] uint8_t __pad07a5[0x3]; // 0x7a5
public:
	int32_t m_nMinCount_2; // 0x7a8	
	int32_t m_nMaxCount_2; // 0x7ac	
	int32_t m_nMinFactor_2; // 0x7b0	
	int32_t m_nMaxFactor_2; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b8[0x4]; // 0x7b8
public:
	float m_flDefaultDist_2; // 0x7bc	
	CUtlSymbolLarge m_iszNPCClassname_3; // 0x7c0	
	int32_t m_nNPCState_3; // 0x7c8	
	bool m_bInvertState_3; // 0x7cc	
private:
	[[maybe_unused]] uint8_t __pad07cd[0x3]; // 0x7cd
public:
	int32_t m_nMinCount_3; // 0x7d0	
	int32_t m_nMaxCount_3; // 0x7d4	
	int32_t m_nMinFactor_3; // 0x7d8	
	int32_t m_nMaxFactor_3; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07e0[0x4]; // 0x7e0
public:
	float m_flDefaultDist_3; // 0x7e4	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CLogicNPCCounterSetNPCCounterThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x800	
	Vector m_vDistanceOuterMaxs; // 0x80c	
	Vector m_vOuterMins; // 0x818	
	Vector m_vOuterMaxs; // 0x824	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CLogicNPCCounterOBB : public CLogicNPCCounterAABB
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4c8	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x4f0	
	CEntityIOOutput m_PlayerDied; // 0x518	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x540	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x658
// Has VTable
class CLogicAuto : public CBaseEntity
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CLogicScript : public CPointEntity
{
public:
	// Datamap fields:
	// CUtlString Group00; // 0x7fffffff
	// CUtlString Group01; // 0x7fffffff
	// CUtlString Group02; // 0x7fffffff
	// CUtlString Group03; // 0x7fffffff
	// CUtlString Group04; // 0x7fffffff
	// CUtlString Group05; // 0x7fffffff
	// CUtlString Group06; // 0x7fffffff
	// CUtlString Group07; // 0x7fffffff
	// CUtlString Group08; // 0x7fffffff
	// CUtlString Group09; // 0x7fffffff
	// CUtlString Group10; // 0x7fffffff
	// CUtlString Group11; // 0x7fffffff
	// CUtlString Group12; // 0x7fffffff
	// CUtlString Group13; // 0x7fffffff
	// CUtlString Group14; // 0x7fffffff
	// CUtlString Group15; // 0x7fffffff
	// CUtlString Group16; // 0x7fffffff
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CTimerEntity : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4c0	
	CEntityIOOutput m_OnTimerHigh; // 0x4e8	
	CEntityIOOutput m_OnTimerLow; // 0x510	
	int32_t m_iDisabled; // 0x538	
	float m_flInitialDelay; // 0x53c	
	float m_flRefireTime; // 0x540	
	bool m_bUpDownState; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	int32_t m_iUseRandomTime; // 0x548	
	bool m_bPauseAfterFiring; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	float m_flLowerRandomBound; // 0x550	
	float m_flUpperRandomBound; // 0x554	
	float m_flRemainingTime; // 0x558	
	bool m_bPaused; // 0x55c	
	
	// Datamap fields:
	// float InputRefireTime; // 0x0
	// void InputFireTimer; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// float InputAddToTimer; // 0x0
	// void InputResetTimer; // 0x0
	// float InputSubtractFromTimer; // 0x0
	// void InputPauseTimer; // 0x0
	// void InputUnpauseTimer; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CLogicLineToEntity : public CLogicalEntity
{
public:
	CEntityOutputTemplate< Vector > m_Line; // 0x4c0	
	CUtlSymbolLarge m_SourceName; // 0x4e8	
	CHandle< CBaseEntity > m_StartEntity; // 0x4f0	
	CHandle< CBaseEntity > m_EndEntity; // 0x4f4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CMathRemap : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4c0	
	float m_flInMax; // 0x4c4	
	float m_flOut1; // 0x4c8	
	float m_flOut2; // 0x4cc	
	float m_flOldInValue; // 0x4d0	
	bool m_bEnabled; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d8	
	CEntityIOOutput m_OnRoseAboveMin; // 0x500	
	CEntityIOOutput m_OnRoseAboveMax; // 0x528	
	CEntityIOOutput m_OnFellBelowMin; // 0x550	
	CEntityIOOutput m_OnFellBelowMax; // 0x578	
	
	// Datamap fields:
	// float InputValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CMathColorBlend : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4c0	
	float m_flInMax; // 0x4c4	
	Color m_OutColor1; // 0x4c8	
	Color m_OutColor2; // 0x4cc	
	CEntityOutputTemplate< Color > m_OutValue; // 0x4d0	
	
	// Datamap fields:
	// float InputValue; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CEnvGlobal : public CLogicalEntity
{
public:
	CEntityOutputTemplate< int32 > m_outCounter; // 0x4c0	
	CUtlSymbolLarge m_globalstate; // 0x4e8	
	int32_t m_triggermode; // 0x4f0	
	int32_t m_initialstate; // 0x4f4	
	int32_t m_counter; // 0x4f8	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputRemove; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCounter; // 0x0
	// int32_t InputAddToCounter; // 0x0
	// void InputGetCounter; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4c0	
	int32_t m_rgTriggered[32]; // 0x540	
	CEntityIOOutput m_OnTrigger; // 0x5c0	
	int32_t m_iTotal; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	CUtlSymbolLarge m_globalstate; // 0x5f0	
	
	// Datamap fields:
	// void CMultiSourceRegister; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CMathCounter : public CLogicalEntity
{
public:
	float m_flMin; // 0x4c0	
	float m_flMax; // 0x4c4	
	bool m_bHitMin; // 0x4c8	
	bool m_bHitMax; // 0x4c9	
	bool m_bDisabled; // 0x4ca	
private:
	[[maybe_unused]] uint8_t __pad04cb[0x5]; // 0x4cb
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4d0	
	CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4f8	
	CEntityIOOutput m_OnHitMin; // 0x520	
	CEntityIOOutput m_OnHitMax; // 0x548	
	CEntityIOOutput m_OnChangedFromMin; // 0x570	
	CEntityIOOutput m_OnChangedFromMax; // 0x598	
	
	// Datamap fields:
	// float InputAdd; // 0x0
	// float InputDivide; // 0x0
	// float InputMultiply; // 0x0
	// float InputSetValue; // 0x0
	// float InputSetValueNoFire; // 0x0
	// float InputSubtract; // 0x0
	// float InputSetHitMax; // 0x0
	// float InputSetHitMin; // 0x0
	// void InputGetValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// int32_t startvalue; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
class CLogicCase : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nCase[32]; // 0x4c0	
	int32_t m_nShuffleCases; // 0x5c0	
	int32_t m_nLastShuffleCase; // 0x5c4	
	uint8_t m_uchShuffleCaseMap[32]; // 0x5c8	
	CEntityIOOutput m_OnCase[32]; // 0x5e8	
	CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xae8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputValue; // 0x0
	// void InputPickRandom; // 0x0
	// void InputPickRandomShuffle; // 0x0
	// void InputResetShuffle; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CLogicCompare : public CLogicalEntity
{
public:
	float m_flInValue; // 0x4c0	
	float m_flCompareValue; // 0x4c4	
	CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4c8	
	CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4f0	
	CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x518	
	CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x540	
	
	// Datamap fields:
	// float InputSetValue; // 0x0
	// float InputSetValueCompare; // 0x0
	// float InputSetCompareValue; // 0x0
	// void InputCompare; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CLogicAutosave : public CLogicalEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	int32_t m_minHitPoints; // 0x4c4	
	int32_t m_minHitPointsToCommit; // 0x4c8	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// int32_t InputSetMinHitpointsThreshold; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CLogicActiveAutosave : public CLogicAutosave
{
public:
	int32_t m_TriggerHitPoints; // 0x4d0	
	float m_flTimeToTrigger; // 0x4d4	
	GameTime_t m_flStartTime; // 0x4d8	
	float m_flDangerousTime; // 0x4dc	
	
	// Datamap fields:
	// void CLogicActiveAutosaveSaveThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4c0	
	float m_flDistanceToPlayer; // 0x4c8	
	bool m_bForceNewLevelUnit; // 0x4cc	
	bool m_bCheckCough; // 0x4cd	
	bool m_bThinkDangerous; // 0x4ce	
private:
	[[maybe_unused]] uint8_t __pad04cf[0x1]; // 0x4cf
public:
	float m_flDangerousTime; // 0x4d0	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// void CLogicDistanceAutosaveSaveThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CLogicCollisionPair : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4c0	
	CUtlSymbolLarge m_nameAttach2; // 0x4c8	
	bool m_disabled; // 0x4d0	
	bool m_succeeded; // 0x4d1	
	
	// Datamap fields:
	// void InputDisableCollisions; // 0x0
	// CUtlSymbolLarge InputDisableCollisionsWith; // 0x0
	// void InputEnableCollisions; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d8
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4c0	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x540	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	CEntityIOOutput m_OnAllTrue; // 0x560	
	CEntityIOOutput m_OnAllFalse; // 0x588	
	CEntityIOOutput m_OnMixed; // 0x5b0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CLogicGameEvent : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4c0	
	
	// Datamap fields:
	// void InputFireEvent; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CMessageEntity : public CPointEntity
{
public:
	int32_t m_radius; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_messageText; // 0x4c8	
	bool m_drawText; // 0x4d0	
	bool m_bDeveloperOnly; // 0x4d1	
	bool m_bEnabled; // 0x4d2	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x710	
	CEntityIOOutput m_OnEndTouch; // 0x738	
	CEntityIOOutput m_OnUse; // 0x760	
	int32_t m_iInputFilter; // 0x788	
	int32_t m_iDontMessageParent; // 0x78c	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x520
// Has VTable
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4c0	
	QAngle m_Angles; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	Quaternion m_qAngle; // 0x4e0	
	CUtlSymbolLarge m_iNextKey; // 0x4f0	
	float m_flNextTime; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CPathKeyFrame* m_pNextKey; // 0x500	
	CPathKeyFrame* m_pPrevKey; // 0x508	
	float m_flSpeed; // 0x510	
};

// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x560
// Has VTable
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x520	
	int32_t m_iRotationInterpolator; // 0x524	
	float m_flAnimStartTime; // 0x528	
	float m_flAnimEndTime; // 0x52c	
	float m_flAverageSpeedAcrossFrame; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x538	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x540	
	CPathKeyFrame* m_pPreKeyFrame; // 0x548	
	CPathKeyFrame* m_pPostKeyFrame; // 0x550	
	float m_flTimeIntoFrame; // 0x558	
	int32_t m_iDirection; // 0x55c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CPathCorner : public CPointEntity
{
public:
	float m_flWait; // 0x4c0	
	float m_flRadius; // 0x4c4	
	CEntityIOOutput m_OnPass; // 0x4c8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetNextPathCorner; // 0x0
	// void InputInPass; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
// Is Abstract
class CPhysForce : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4c8	
	float m_force; // 0x4d0	
	float m_forceTime; // 0x4d4	
	CHandle< CBaseEntity > m_attachedObject; // 0x4d8	
	bool m_wasRestored; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	// -> m_linear - 0x4ec
	// -> m_angular - 0x4f8
	// -> m_linearSave - 0x504
	// -> m_angularSave - 0x510
	CConstantForceController m_integrator; // 0x4e0	
	
	// Datamap fields:
	// void m_pController; // 0x4c0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// float InputForceScale; // 0x0
	// void CPhysForceForceOff; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysThruster : public CPhysForce
{
public:
	Vector m_localOrigin; // 0x520	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysTorque : public CPhysForce
{
public:
	Vector m_axis; // 0x520	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPhysMotor : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach; // 0x4c0	
	CHandle< CBaseEntity > m_hAttachedObject; // 0x4c8	
	float m_spinUp; // 0x4cc	
	float m_additionalAcceleration; // 0x4d0	
	float m_angularAcceleration; // 0x4d4	
	GameTime_t m_lastTime; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x14]; // 0x4dc
public:
	// -> m_speed - 0x4f8
	// -> m_maxTorque - 0x4fc
	// -> m_axis - 0x500
	// -> m_inertiaFactor - 0x50c
	CMotorController m_motor; // 0x4f0	
	
	// Datamap fields:
	// float InputSetTargetSpeed; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	Vector m_worldGoalAxis; // 0x4c8	
	Vector m_localTestAxis; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e8	
	CHandle< CBaseEntity > m_attachedObject; // 0x4f0	
	float m_angularLimit; // 0x4f4	
	bool m_bActive; // 0x4f8	
	bool m_bDampAllRotation; // 0x4f9	
	
	// Datamap fields:
	// void m_pController; // 0x4e0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetAngularLimit; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
// Is Abstract
class CPhysConstraint : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4c8	
	CUtlSymbolLarge m_nameAttach2; // 0x4d0	
	CUtlSymbolLarge m_breakSound; // 0x4d8	
	float m_forceLimit; // 0x4e0	
	float m_torqueLimit; // 0x4e4	
	uint32_t m_teleportTick; // 0x4e8	
	float m_minTeleportDistance; // 0x4ec	
	CEntityIOOutput m_OnBreak; // 0x4f0	
	
	// Datamap fields:
	// void m_hJoint; // 0x4c0
	// void InputBreak; // 0x0
	// void InputOnBreak; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableLinearConstraint; // 0x0
	// void InputDisableLinearConstraint; // 0x0
	// void InputEnableAngularConstraint; // 0x0
	// void InputDisableAngularConstraint; // 0x0
	// void InputTurnMotorOn; // 0x0
	// void InputTurnMotorOff; // 0x0
	// float InputSetMotorTorqueFactor; // 0x0
	// float InputSetMotorTargetVelocity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
// Has VTable
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0518[0x8]; // 0x518
public:
	// -> m_vSampler - 0x528
	// -> m_soundProfile - 0x540
	// -> m_forwardAxis - 0x560
	// -> m_iszTravelSoundFwd - 0x570
	// -> m_iszTravelSoundBack - 0x578
	// -> m_iszReversalSounds[3] - 0x588
	// -> m_bPlayTravelSound - 0x5a0
	// -> m_bPlayReversalSound - 0x5a1
	ConstraintSoundInfo m_soundInfo; // 0x520	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x5a8	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x5d0	
	bool m_bAtMinLimit; // 0x5f8	
	bool m_bAtMaxLimit; // 0x5f9	
private:
	[[maybe_unused]] uint8_t __pad05fa[0x2]; // 0x5fa
public:
	constraint_hingeparams_t m_hinge; // 0x5fc	
	float m_hingeFriction; // 0x63c	
	float m_systemLoadScale; // 0x640	
	bool m_bIsAxisLocal; // 0x644	
private:
	[[maybe_unused]] uint8_t __pad0645[0x3]; // 0x645
public:
	float m_flMinRotation; // 0x648	
	float m_flMaxRotation; // 0x64c	
	float m_flInitialRotation; // 0x650	
	float m_flMotorFrequency; // 0x654	
	float m_flMotorDampingRatio; // 0x658	
	float m_flAngleSpeed; // 0x65c	
	float m_flAngleSpeedThreshold; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0664[0x4]; // 0x664
public:
	CEntityIOOutput m_OnStartMoving; // 0x668	
	CEntityIOOutput m_OnStopMoving; // 0x690	
	
	// Datamap fields:
	// Vector m_hinge.worldPosition; // 0x5fc
	// Vector m_hinge.worldAxisDirection; // 0x608
	// float InputSetMotorTargetAngle; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetHingeFriction; // 0x0
	// float InputSetMinLimit; // 0x0
	// float InputSetMaxLimit; // 0x0
	// void CPhysHingeSoundThink; // 0x0
	// void CPhysHingeLimitThink; // 0x0
	// void CPhysHingeMoveThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
// Has VTable
class CPhysHingeAlias_phys_hinge_local : public CPhysHinge
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flFriction; // 0x518	
	bool m_bEnableSwingLimit; // 0x51c	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	float m_flSwingLimit; // 0x520	
	bool m_bEnableTwistLimit; // 0x524	
private:
	[[maybe_unused]] uint8_t __pad0525[0x3]; // 0x525
public:
	float m_flMinTwistAngle; // 0x528	
	float m_flMaxTwistAngle; // 0x52c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0518[0x8]; // 0x518
public:
	Vector m_axisEnd; // 0x520	
	float m_slideFriction; // 0x52c	
	float m_systemLoadScale; // 0x530	
	float m_initialOffset; // 0x534	
	bool m_bEnableLinearConstraint; // 0x538	
	bool m_bEnableAngularConstraint; // 0x539	
private:
	[[maybe_unused]] uint8_t __pad053a[0x2]; // 0x53a
public:
	float m_flMotorFrequency; // 0x53c	
	float m_flMotorDampingRatio; // 0x540	
	bool m_bUseEntityPivot; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	// -> m_vSampler - 0x550
	// -> m_soundProfile - 0x568
	// -> m_forwardAxis - 0x588
	// -> m_iszTravelSoundFwd - 0x598
	// -> m_iszTravelSoundBack - 0x5a0
	// -> m_iszReversalSounds[3] - 0x5b0
	// -> m_bPlayTravelSound - 0x5c8
	// -> m_bPlayReversalSound - 0x5c9
	ConstraintSoundInfo m_soundInfo; // 0x548	
	
	// Datamap fields:
	// float InputSetOffset; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetSlideFriction; // 0x0
	// void CPhysSlideConstraintSoundThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysFixed : public CPhysConstraint
{
public:
	float m_flLinearFrequency; // 0x518	
	float m_flLinearDampingRatio; // 0x51c	
	float m_flAngularFrequency; // 0x520	
	float m_flAngularDampingRatio; // 0x524	
	bool m_bEnableLinearConstraint; // 0x528	
	bool m_bEnableAngularConstraint; // 0x529	
	
	// Datamap fields:
	// float InputSetLinearFrequency; // 0x0
	// float InputSetLinearDampingRatio; // 0x0
	// float InputSetAngularFrequency; // 0x0
	// float InputSetAngularDampingRatio; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x518	
	Vector m_offset[2]; // 0x524	
	float m_addLength; // 0x53c	
	float m_gearRatio; // 0x540	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x518	
	Vector m_vecAttach; // 0x530	
	float m_addLength; // 0x53c	
	float m_minLength; // 0x540	
	float m_totalLength; // 0x544	
	bool m_bEnableCollision; // 0x548	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CRagdollConstraint : public CPhysConstraint
{
public:
	float m_xmin; // 0x518	
	float m_xmax; // 0x51c	
	float m_ymin; // 0x520	
	float m_ymax; // 0x524	
	float m_zmin; // 0x528	
	float m_zmax; // 0x52c	
	float m_xfriction; // 0x530	
	float m_yfriction; // 0x534	
	float m_zfriction; // 0x538	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x648
// Has VTable
class CGenericConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0518[0x8]; // 0x518
public:
	JointMotion_t m_nLinearMotionX; // 0x520	
	JointMotion_t m_nLinearMotionY; // 0x524	
	JointMotion_t m_nLinearMotionZ; // 0x528	
	float m_flLinearFrequencyX; // 0x52c	
	float m_flLinearFrequencyY; // 0x530	
	float m_flLinearFrequencyZ; // 0x534	
	float m_flLinearDampingRatioX; // 0x538	
	float m_flLinearDampingRatioY; // 0x53c	
	float m_flLinearDampingRatioZ; // 0x540	
	float m_flMaxLinearImpulseX; // 0x544	
	float m_flMaxLinearImpulseY; // 0x548	
	float m_flMaxLinearImpulseZ; // 0x54c	
	float m_flBreakAfterTimeX; // 0x550	
	float m_flBreakAfterTimeY; // 0x554	
	float m_flBreakAfterTimeZ; // 0x558	
	GameTime_t m_flBreakAfterTimeStartTimeX; // 0x55c	
	GameTime_t m_flBreakAfterTimeStartTimeY; // 0x560	
	GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x564	
	float m_flBreakAfterTimeThresholdX; // 0x568	
	float m_flBreakAfterTimeThresholdY; // 0x56c	
	float m_flBreakAfterTimeThresholdZ; // 0x570	
	float m_flNotifyForceX; // 0x574	
	float m_flNotifyForceY; // 0x578	
	float m_flNotifyForceZ; // 0x57c	
	float m_flNotifyForceMinTimeX; // 0x580	
	float m_flNotifyForceMinTimeY; // 0x584	
	float m_flNotifyForceMinTimeZ; // 0x588	
	GameTime_t m_flNotifyForceLastTimeX; // 0x58c	
	GameTime_t m_flNotifyForceLastTimeY; // 0x590	
	GameTime_t m_flNotifyForceLastTimeZ; // 0x594	
	bool m_bAxisNotifiedX; // 0x598	
	bool m_bAxisNotifiedY; // 0x599	
	bool m_bAxisNotifiedZ; // 0x59a	
private:
	[[maybe_unused]] uint8_t __pad059b[0x1]; // 0x59b
public:
	JointMotion_t m_nAngularMotionX; // 0x59c	
	JointMotion_t m_nAngularMotionY; // 0x5a0	
	JointMotion_t m_nAngularMotionZ; // 0x5a4	
	float m_flAngularFrequencyX; // 0x5a8	
	float m_flAngularFrequencyY; // 0x5ac	
	float m_flAngularFrequencyZ; // 0x5b0	
	float m_flAngularDampingRatioX; // 0x5b4	
	float m_flAngularDampingRatioY; // 0x5b8	
	float m_flAngularDampingRatioZ; // 0x5bc	
	float m_flMaxAngularImpulseX; // 0x5c0	
	float m_flMaxAngularImpulseY; // 0x5c4	
	float m_flMaxAngularImpulseZ; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05cc[0x4]; // 0x5cc
public:
	CEntityIOOutput m_NotifyForceReachedX; // 0x5d0	
	CEntityIOOutput m_NotifyForceReachedY; // 0x5f8	
	CEntityIOOutput m_NotifyForceReachedZ; // 0x620	
	
	// Datamap fields:
	// void CGenericConstraintUpdateThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x518	
	float m_flSuspensionDampingRatio; // 0x51c	
	float m_flSuspensionHeightOffset; // 0x520	
	bool m_bEnableSuspensionLimit; // 0x524	
private:
	[[maybe_unused]] uint8_t __pad0525[0x3]; // 0x525
public:
	float m_flMinSuspensionOffset; // 0x528	
	float m_flMaxSuspensionOffset; // 0x52c	
	bool m_bEnableSteeringLimit; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0531[0x3]; // 0x531
public:
	float m_flMinSteeringAngle; // 0x534	
	float m_flMaxSteeringAngle; // 0x538	
	float m_flSteeringAxisFriction; // 0x53c	
	float m_flSpinAxisFriction; // 0x540	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CPhysicsEntitySolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CHandle< CBaseEntity > m_hMovingEntity; // 0x4c8	
	CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4cc	
	float m_separationDuration; // 0x4d0	
	GameTime_t m_cancelTime; // 0x4d4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPhysicsSpring : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	float m_flFrequency; // 0x4c8	
	float m_flDampingRatio; // 0x4cc	
	float m_flRestLength; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_nameAttachStart; // 0x4d8	
	CUtlSymbolLarge m_nameAttachEnd; // 0x4e0	
	Vector m_start; // 0x4e8	
	Vector m_end; // 0x4f4	
	uint32_t m_teleportTick; // 0x500	
	
	// Datamap fields:
	// void m_pSpringJoint; // 0x4c0
	// float InputSetFrequency; // 0x0
	// float InputSetDampingRatio; // 0x0
	// float InputSetRestLength; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMagnitude; // 0x4c4	
	float m_flRadius; // 0x4c8	
	float m_flInnerRadius; // 0x4cc	
	float m_flConeOfInfluence; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszFilterName; // 0x4d8	
	CHandle< CBaseFilter > m_hFilter; // 0x4e0	
	
	// Datamap fields:
	// void CPointPushPushThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CInfoPlayerStart : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iFilterName; // 0x4c8	
	CHandle< CBaseFilter > m_hFilter; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iRefName; // 0x4d8	
	CHandle< CBaseEntity > m_hReference; // 0x4e0	
	EntFinderMethod_t m_FindMethod; // 0x4e4	
	CEntityIOOutput m_OnFoundEntity; // 0x4e8	
	
	// Datamap fields:
	// void InputFindEntity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class CPointValueRemapper : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x2]; // 0x4c2
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4c4	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4c8	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4d8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4dc	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4e0	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4e4	
	// MNetworkEnable
	float m_flEngageDistance; // 0x4e8	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x4f8	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x500	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x508	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x510	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x518	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x530	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x534	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x538	
	// MNetworkEnable
	float m_flSnapValue; // 0x53c	
	float m_flCurrentMomentum; // 0x540	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x544	
	float m_flRatchetOffset; // 0x548	
	// MNetworkEnable
	float m_flInputOffset; // 0x54c	
	bool m_bEngaged; // 0x550	
	bool m_bFirstUpdate; // 0x551	
private:
	[[maybe_unused]] uint8_t __pad0552[0x2]; // 0x552
public:
	float m_flPreviousValue; // 0x554	
	GameTime_t m_flPreviousUpdateTickTime; // 0x558	
	Vector m_vecPreviousTestPoint; // 0x55c	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x568	
	float m_flCustomOutputValue; // 0x56c	
	CUtlSymbolLarge m_iszSoundEngage; // 0x570	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x578	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x580	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x588	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0598[0x8]; // 0x598
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x5a0	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5c8	
	CEntityIOOutput m_OnReachedValueZero; // 0x5f0	
	CEntityIOOutput m_OnReachedValueOne; // 0x618	
	CEntityIOOutput m_OnReachedValueCustom; // 0x640	
	CEntityIOOutput m_OnEngage; // 0x668	
	CEntityIOOutput m_OnDisengage; // 0x690	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class CPointWorldText : public CModelPointEntity
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x710	
	// MNetworkEnable
	char m_FontName[64]; // 0x910	
	// MNetworkEnable
	bool m_bEnabled; // 0x950	
	// MNetworkEnable
	bool m_bFullbright; // 0x951	
private:
	[[maybe_unused]] uint8_t __pad0952[0x2]; // 0x952
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x954	
	// MNetworkEnable
	float m_flFontSize; // 0x958	
	// MNetworkEnable
	float m_flDepthOffset; // 0x95c	
	// MNetworkEnable
	Color m_Color; // 0x960	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x964	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x968	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x96c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CPointAngleSensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	CUtlSymbolLarge m_nLookAtName; // 0x4c8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4d0	
	CHandle< CBaseEntity > m_hLookAtEntity; // 0x4d4	
	float m_flDuration; // 0x4d8	
	float m_flDotTolerance; // 0x4dc	
	GameTime_t m_flFacingTime; // 0x4e0	
	bool m_bFired; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	CEntityIOOutput m_OnFacingLookat; // 0x4e8	
	CEntityIOOutput m_OnNotFacingLookat; // 0x510	
	CEntityOutputTemplate< Vector > m_TargetDir; // 0x538	
	CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x560	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTest; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
	// float tolerance; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CPointProximitySensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c4	
	CEntityOutputTemplate< float32 > m_Distance; // 0x4c8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0	
	float m_flThreshold; // 0x4c4	
	int32_t m_nLastCompareResult; // 0x4c8	
	int32_t m_nLastFireResult; // 0x4cc	
	GameTime_t m_flFireTime; // 0x4d0	
	float m_flFireInterval; // 0x4d4	
	float m_flLastAngVelocity; // 0x4d8	
	QAngle m_lastOrientation; // 0x4dc	
	Vector m_vecAxis; // 0x4e8	
	bool m_bUseHelper; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4f8	
	CEntityIOOutput m_OnLessThan; // 0x520	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x548	
	CEntityIOOutput m_OnGreaterThan; // 0x570	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x598	
	CEntityIOOutput m_OnEqualTo; // 0x5c0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPointVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c0	
	Vector m_vecAxis; // 0x4c4	
	bool m_bEnabled; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	float m_fPrevVelocity; // 0x4d4	
	float m_flAvgInterval; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CEntityOutputTemplate< float32 > m_Velocity; // 0x4e0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CPointHurt : public CPointEntity
{
public:
	int32_t m_nDamage; // 0x4c0	
	int32_t m_bitsDamageType; // 0x4c4	
	float m_flRadius; // 0x4c8	
	float m_flDelay; // 0x4cc	
	CUtlSymbolLarge m_strTarget; // 0x4d0	
	CHandle< CBaseEntity > m_pActivator; // 0x4d8	
	
	// Datamap fields:
	// void CPointHurtHurtThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputHurt; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CPointTeleport : public CServerOnlyPointEntity
{
public:
	Vector m_vSaveOrigin; // 0x4c0	
	QAngle m_vSaveAngles; // 0x4cc	
	bool m_bTeleportParentedEntities; // 0x4d8	
	bool m_bTeleportUseCurrentAngle; // 0x4d9	
	
	// Datamap fields:
	// void InputTeleport; // 0x0
	// CUtlSymbolLarge InputTeleportEntity; // 0x0
	// void InputTeleportToCurrentPos; // 0x0
	// CUtlSymbolLarge InputTeleportEntityToCurrentPos; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CEnableMotionFixup : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CFuncPropRespawnZone : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class CRagdollManager : public CBaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	int32_t m_iMaxRagdollCount; // 0x4c4	
	bool m_bSaveImportant; // 0x4c8	
	
	// Datamap fields:
	// int32_t InputSetMaxRagdollCount; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x710	
	float m_Duration; // 0x714	
	float m_HoldTime; // 0x718	
	
	// Datamap fields:
	// void InputReload; // 0x0
	// void CRevertSavedLoadThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CSceneListManager : public CLogicalEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4c0	
	CUtlSymbolLarge m_iszScenes[16]; // 0x4d8	
	CHandle< CBaseEntity > m_hScenes[16]; // 0x558	
	
	// Datamap fields:
	// void InputShutdown; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
// 
// MNetworkVarNames "bool m_bIsPlayingBack"
// MNetworkVarNames "bool m_bPaused"
// MNetworkVarNames "bool m_bMultiplayer"
// MNetworkVarNames "bool m_bAutogenerated"
// MNetworkVarNames "float32 m_flForceClientTime"
// MNetworkVarNames "CHandle< CBaseFlex > m_hActorList"
// MNetworkVarNames "uint16 m_nSceneStringIndex"
class CSceneEntity : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
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
	bool m_bIsPlayingBack; // 0x538	
	// MNetworkEnable
	bool m_bPaused; // 0x539	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x53a	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x53b	
	// MNetworkEnable
	float m_flForceClientTime; // 0x53c	
	float m_flCurrentTime; // 0x540	
	float m_flFrameTime; // 0x544	
	bool m_bCancelAtNextInterrupt; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	float m_fPitch; // 0x54c	
	bool m_bAutomated; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x3]; // 0x551
public:
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
private:
	[[maybe_unused]] uint8_t __pad056b[0x5]; // 0x56b
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x570	
	CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad05a0[0x30]; // 0x5a0
public:
	int32_t m_nSceneFlushCounter; // 0x5d0	
	// MNetworkEnable
	uint16_t m_nSceneStringIndex; // 0x5d4	
private:
	[[maybe_unused]] uint8_t __pad05d6[0x2]; // 0x5d6
public:
	CEntityIOOutput m_OnStart; // 0x5d8	
	CEntityIOOutput m_OnCompletion; // 0x600	
	CEntityIOOutput m_OnCanceled; // 0x628	
	CEntityIOOutput m_OnPaused; // 0x650	
	CEntityIOOutput m_OnResumed; // 0x678	
	CEntityIOOutput m_OnTrigger[16]; // 0x6a0	
private:
	[[maybe_unused]] uint8_t __pad0920[0x90]; // 0x920
public:
	CHandle< CSceneEntity > m_hInterruptScene; // 0x9b0	
	int32_t m_nInterruptCount; // 0x9b4	
	bool m_bSceneMissing; // 0x9b8	
	bool m_bInterrupted; // 0x9b9	
	bool m_bCompletedEarly; // 0x9ba	
	bool m_bInterruptSceneFinished; // 0x9bb	
	bool m_bRestoring; // 0x9bc	
private:
	[[maybe_unused]] uint8_t __pad09bd[0x3]; // 0x9bd
public:
	CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x9c0	
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x9d8	
	CUtlSymbolLarge m_iszSoundName; // 0x9f0	
	CUtlSymbolLarge m_iszSequenceName; // 0x9f8	
	CHandle< CBaseFlex > m_hActor; // 0xa00	
	CHandle< CBaseEntity > m_hActivator; // 0xa04	
	int32_t m_BusyActor; // 0xa08	
	SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0xa0c	
	
	// Static fields:
	static int32_t &Get_s_nSceneFlushCounter(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSceneEntity")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_pScene; // 0x5c8
	// void m_pRecipientFilter; // 0xa10
	// void InputStartPlayback; // 0x0
	// void InputPausePlayback; // 0x0
	// void InputResumePlayback; // 0x0
	// void InputCancelPlayback; // 0x0
	// void InputCancelAtNextInterrupt; // 0x0
	// float InputPitchShiftPlayback; // 0x0
	// CUtlSymbolLarge InputInterjectResponse; // 0x0
	// void InputStopWaitingForActor; // 0x0
	// int32_t InputTriggerEvent; // 0x0
	// CUtlSymbolLarge InputSetTarget1; // 0x0
	// CUtlSymbolLarge InputSetTarget2; // 0x0
	// void InputScriptPlayerDeath; // 0x0
	// void InputPauseAtNextInterrupt; // 0x0
	// void m_OnTrigger[ 0 ]; // 0x6a0
	// void m_OnTrigger[ 1 ]; // 0x6c8
	// void m_OnTrigger[ 2 ]; // 0x6f0
	// void m_OnTrigger[ 3 ]; // 0x718
	// void m_OnTrigger[ 4 ]; // 0x740
	// void m_OnTrigger[ 5 ]; // 0x768
	// void m_OnTrigger[ 6 ]; // 0x790
	// void m_OnTrigger[ 7 ]; // 0x7b8
	// void m_OnTrigger[ 8 ]; // 0x7e0
	// void m_OnTrigger[ 9 ]; // 0x808
	// void m_OnTrigger[ 10 ]; // 0x830
	// void m_OnTrigger[ 11 ]; // 0x858
	// void m_OnTrigger[ 12 ]; // 0x880
	// void m_OnTrigger[ 13 ]; // 0x8a8
	// void m_OnTrigger[ 14 ]; // 0x8d0
	// void m_OnTrigger[ 15 ]; // 0x8f8
};

// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x7d0
// Has VTable
class CScriptedSequence : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszEntry; // 0x4c0	
	CUtlSymbolLarge m_iszPreIdle; // 0x4c8	
	CUtlSymbolLarge m_iszPlay; // 0x4d0	
	CUtlSymbolLarge m_iszPostIdle; // 0x4d8	
	CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4e0	
	CUtlSymbolLarge m_iszNextScript; // 0x4e8	
	CUtlSymbolLarge m_iszEntity; // 0x4f0	
	CUtlSymbolLarge m_iszSyncGroup; // 0x4f8	
	ScriptedMoveTo_t m_nMoveTo; // 0x500	
	bool m_bIsPlayingPreIdle; // 0x504	
	bool m_bIsPlayingEntry; // 0x505	
	bool m_bIsPlayingAction; // 0x506	
	bool m_bIsPlayingPostIdle; // 0x507	
	bool m_bLoopPreIdleSequence; // 0x508	
	bool m_bLoopActionSequence; // 0x509	
	bool m_bLoopPostIdleSequence; // 0x50a	
	bool m_bSynchPostIdles; // 0x50b	
	bool m_bIgnoreLookAt; // 0x50c	
	bool m_bIgnoreGravity; // 0x50d	
	bool m_bDisableNPCCollisions; // 0x50e	
	bool m_bKeepAnimgraphLockedPost; // 0x50f	
	bool m_bDontAddModifiers; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	float m_flRadius; // 0x514	
	float m_flRepeat; // 0x518	
	float m_flPlayAnimFadeInTime; // 0x51c	
	float m_flMoveInterpTime; // 0x520	
	float m_flAngRate; // 0x524	
	int32_t m_nNotReadySequenceCount; // 0x528	
	GameTime_t m_startTime; // 0x52c	
	bool m_bWaitForBeginSequence; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0531[0x3]; // 0x531
public:
	int32_t m_saved_effects; // 0x534	
	int32_t m_savedFlags; // 0x538	
	int32_t m_savedCollisionGroup; // 0x53c	
	bool m_interruptable; // 0x540	
	bool m_sequenceStarted; // 0x541	
	bool m_bPositionRelativeToOtherEntity; // 0x542	
private:
	[[maybe_unused]] uint8_t __pad0543[0x1]; // 0x543
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x544	
	CHandle< CScriptedSequence > m_hNextCine; // 0x548	
	bool m_bThinking; // 0x54c	
	bool m_bInitiatedSelfDelete; // 0x54d	
	bool m_bIsTeleportingDueToMoveTo; // 0x54e	
	bool m_bAllowCustomInterruptConditions; // 0x54f	
	CHandle< CBaseEntity > m_hLastFoundEntity; // 0x550	
	CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x554	
	bool m_bDontCancelOtherSequences; // 0x558	
	bool m_bForceSynch; // 0x559	
	bool m_bPreventUpdateYawOnFinish; // 0x55a	
	bool m_bEnsureOnNavmeshOnFinish; // 0x55b	
	ScriptedOnDeath_t m_onDeathBehavior; // 0x55c	
	ScriptedConflictResponse_t m_ConflictResponse; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	CEntityIOOutput m_OnBeginSequence; // 0x568	
	CEntityIOOutput m_OnActionStartOrLoop; // 0x590	
	CEntityIOOutput m_OnEndSequence; // 0x5b8	
	CEntityIOOutput m_OnPostIdleEndSequence; // 0x5e0	
	CEntityIOOutput m_OnCancelSequence; // 0x608	
	CEntityIOOutput m_OnCancelFailedSequence; // 0x630	
	CEntityIOOutput m_OnScriptEvent[8]; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0798[0x8]; // 0x798
public:
	CTransform m_matOtherToMain; // 0x7a0	
	CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7c0	
	int32_t m_iPlayerDeathBehavior; // 0x7c4	
	
	// Datamap fields:
	// void CScriptedSequenceScriptThink; // 0x0
	// void InputMoveToPosition; // 0x0
	// void InputBeginSequence; // 0x0
	// void InputCancelSequence; // 0x0
	// CUtlSymbolLarge InputSetActionSequence; // 0x0
	// void InputScriptPlayerDeath; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CSoundOpvarSetEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_iszStackName; // 0x4c8	
	CUtlSymbolLarge m_iszOperatorName; // 0x4d0	
	CUtlSymbolLarge m_iszOpvarName; // 0x4d8	
	int32_t m_nOpvarType; // 0x4e0	
	int32_t m_nOpvarIndex; // 0x4e4	
	float m_flOpvarValue; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_OpvarValueString; // 0x4f0	
	bool m_bSetOnSpawn; // 0x4f8	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// int32_t InputSetOpvarIndex; // 0x0
	// void InputSetOpvar; // 0x0
	// float InputChangeOpvarValue; // 0x0
	// float InputChangeOpvarValueAndSet; // 0x0
	// void m_nGUID; // 0x4c0
	// void m_LastOpvarValueString; // 0x500
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CAISound : public CPointEntity
{
public:
	int32_t m_iSoundType; // 0x4c0	
	int32_t m_iSoundContext; // 0x4c4	
	int32_t m_iVolume; // 0x4c8	
	int32_t m_iSoundIndex; // 0x4cc	
	float m_flDuration; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszProxyEntityName; // 0x4d8	
	
	// Datamap fields:
	// int32_t InputInsertSound; // 0x0
	// void InputEmitAISound; // 0x0
	// void InputStopAISound; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CSoundStackSave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszStackName; // 0x4c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CSoundEventEntity : public CBaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x4c0	
	bool m_bToLocalPlayer; // 0x4c1	
	bool m_bStopOnNew; // 0x4c2	
	bool m_bSaveRestore; // 0x4c3	
	bool m_bSavedIsPlaying; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flSavedElapsedTime; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4d0	
	CUtlSymbolLarge m_iszAttachmentName; // 0x4d8	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4e0	
	CEntityIOOutput m_onSoundFinished; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0530[0x20]; // 0x530
public:
	CUtlSymbolLarge m_iszSoundName; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
public:
	CEntityHandle m_hSource; // 0x560	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x558
	// void CSoundEventEntitySoundFinishedThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CSoundEventAABBEntity : public CSoundEventEntity
{
public:
	Vector m_vMins; // 0x568	
	Vector m_vMaxs; // 0x574	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CSoundEventOBBEntity : public CSoundEventEntity
{
public:
	Vector m_vMins; // 0x568	
	Vector m_vMaxs; // 0x574	
	
	// Datamap fields:
	// void CSoundEventOBBEntitySoundEventOBBThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:
	CUtlSymbolLarge m_iszPathCorner; // 0x568	
	int32_t m_iCountMax; // 0x570	
	float m_flDistanceMax; // 0x574	
	float m_flDistMaxSqr; // 0x578	
	float m_flDotProductMax; // 0x57c	
	bool bPlaying; // 0x580	
	
	// Datamap fields:
	// void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
	// void m_vecPathCornerPairs; // 0x588
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CSoundEventParameter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_iszParamName; // 0x4c8	
	float m_flFloatValue; // 0x4d0	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetParamName; // 0x0
	// float InputSetFloatValue; // 0x0
	// void m_nGUID; // 0x4c0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CNullEntity : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CBaseDMStart : public CPointEntity
{
public:
	CUtlSymbolLarge m_Master; // 0x4c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoLandmark : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flFarZScale"
class CSun : public CBaseModelEntity
{
public:
	// MNetworkEnable
	Vector m_vDirection; // 0x710	
	// MNetworkEnable
	Color m_clrOverlay; // 0x71c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x720	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x728	
	// MNetworkEnable
	bool m_bOn; // 0x730	
	// MNetworkEnable
	bool m_bmaxColor; // 0x731	
private:
	[[maybe_unused]] uint8_t __pad0732[0x2]; // 0x732
public:
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flSize; // 0x734	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x738	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHazeScale; // 0x73c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x740	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x744	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x748	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x74c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x750	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CTankTargetChange : public CPointEntity
{
public:
	CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4c0	
	CUtlSymbolLarge m_newTargetName; // 0x4d0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4c0	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4c4	
	int32_t m_soundPlaying; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x14]; // 0x4cc
public:
	CUtlSymbolLarge m_startSoundName; // 0x4e0	
	CUtlSymbolLarge m_engineSoundName; // 0x4e8	
	CUtlSymbolLarge m_movementSoundName; // 0x4f0	
	CUtlSymbolLarge m_targetEntityName; // 0x4f8	
	
	// Datamap fields:
	// void m_soundTreads; // 0x4d0
	// void m_soundEngine; // 0x4d8
	// CUtlSymbolLarge InputTargetEntity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
// MNetworkVarNames "bool m_bSendHandle"
class CHandleTest : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_Handle; // 0x4c0	
	// MNetworkEnable
	bool m_bSendHandle; // 0x4c4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CHandleDummy : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CPlatTrigger : public CBaseModelEntity
{
public:
	CHandle< CFuncPlat > m_pPlatform; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CFuncTrainControls : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CTriggerVolume : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x710	
	CHandle< CBaseFilter > m_hFilter; // 0x718	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoTeleportDestination : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CAI_ChangeHintGroup : public CBaseEntity
{
public:
	int32_t m_iSearchType; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_strSearchName; // 0x4c8	
	CUtlSymbolLarge m_strNewHintGroup; // 0x4d0	
	float m_flRadius; // 0x4d8	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CLogicProximity : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoSpawnGroupLandmark : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CInfoSpawnGroupLoadUnload : public CLogicalEntity
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
	
	// Datamap fields:
	// void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
	// void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
	// void InputStartSpawnGroupLoad; // 0x0
	// void InputActivateSpawnGroup; // 0x0
	// void InputStartSpawnGroupUnload; // 0x0
	// CUtlSymbolLarge InputSetSpawnGroup; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CPointPulse : public CBaseEntity
{
public:
	// Datamap fields:
	// CPulseGraphComponentPointServer m_pPulseGraphComponent; // 0x4c0
	// void CPointPulseCallPulse_OnThink; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CPointScriptEntity : public CBaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CFuncNavObstruction : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x8]; // 0x710
public:
	bool m_bDisabled; // 0x718	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CAmbientGeneric : public CPointEntity
{
public:
	float m_radius; // 0x4c0	
	float m_flMaxRadius; // 0x4c4	
	soundlevel_t m_iSoundLevel; // 0x4c8	
	dynpitchvol_t m_dpv; // 0x4cc	
	bool m_fActive; // 0x530	
	bool m_fLooping; // 0x531	
private:
	[[maybe_unused]] uint8_t __pad0532[0x6]; // 0x532
public:
	CUtlSymbolLarge m_iszSound; // 0x538	
	CUtlSymbolLarge m_sSourceEntName; // 0x540	
	CHandle< CBaseEntity > m_hSoundSource; // 0x548	
	CEntityIndex m_nSoundSourceEntIndex; // 0x54c	
	
	// Datamap fields:
	// void m_nGUID; // 0x550
	// void CAmbientGenericRampThink; // 0x0
	// void InputPlaySound; // 0x0
	// void InputStopSound; // 0x0
	// void InputToggleSound; // 0x0
	// float InputPitch; // 0x0
	// float InputVolume; // 0x0
	// float InputFadeIn; // 0x0
	// float InputFadeOut; // 0x0
	// int32_t fadein; // 0x7fffffff
	// int32_t fadeout; // 0x7fffffff
	// int32_t fadeinsecs; // 0x7fffffff
	// int32_t fadeoutsecs; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8	
	Class_T classType; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x710	
	float m_flMoveDistance; // 0x714	
	float m_flWait; // 0x718	
	float m_flLip; // 0x71c	
	bool m_bAlwaysFireBlockedOutputs; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	Vector m_vecPosition1; // 0x724	
	Vector m_vecPosition2; // 0x730	
	QAngle m_vecMoveAng; // 0x73c	
	QAngle m_vecAngle1; // 0x748	
	QAngle m_vecAngle2; // 0x754	
	float m_flHeight; // 0x760	
	CHandle< CBaseEntity > m_hActivator; // 0x764	
	Vector m_vecFinalDest; // 0x768	
	QAngle m_vecFinalAngle; // 0x774	
	int32_t m_movementType; // 0x780	
private:
	[[maybe_unused]] uint8_t __pad0784[0x4]; // 0x784
public:
	CUtlSymbolLarge m_sMaster; // 0x788	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x790	
	bool m_fStayPushed; // 0x79c	
	bool m_fRotating; // 0x79d	
private:
	[[maybe_unused]] uint8_t __pad079e[0x2]; // 0x79e
public:
	locksound_t m_ls; // 0x7a0	
	CUtlSymbolLarge m_sUseSound; // 0x7c0	
	CUtlSymbolLarge m_sLockedSound; // 0x7c8	
	CUtlSymbolLarge m_sUnlockedSound; // 0x7d0	
	bool m_bLocked; // 0x7d8	
	bool m_bDisabled; // 0x7d9	
private:
	[[maybe_unused]] uint8_t __pad07da[0x2]; // 0x7da
public:
	GameTime_t m_flUseLockedTime; // 0x7dc	
	bool m_bSolidBsp; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e1[0x7]; // 0x7e1
public:
	CEntityIOOutput m_OnDamaged; // 0x7e8	
	CEntityIOOutput m_OnPressed; // 0x810	
	CEntityIOOutput m_OnUseLocked; // 0x838	
	CEntityIOOutput m_OnIn; // 0x860	
	CEntityIOOutput m_OnOut; // 0x888	
	int32_t m_nState; // 0x8b0	
	CEntityHandle m_hConstraint; // 0x8b4	
	CEntityHandle m_hConstraintParent; // 0x8b8	
	bool m_bForceNpcExclude; // 0x8bc	
private:
	[[maybe_unused]] uint8_t __pad08bd[0x3]; // 0x8bd
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x8c0	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x8c8	
	// MNetworkEnable
	bool m_usable; // 0x8cc	
private:
	[[maybe_unused]] uint8_t __pad08cd[0x3]; // 0x8cd
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x8d0	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x7a8
	//  m_ls.sUnlockedSound; // 0x7b0
	// void CBaseButtonButtonTouch; // 0x0
	// void CBaseButtonButtonSpark; // 0x0
	// void CBaseButtonTriggerAndWait; // 0x0
	// void CBaseButtonButtonReturn; // 0x0
	// void CBaseButtonButtonBackHome; // 0x0
	// void CBaseButtonButtonUse; // 0x0
	// void CBaseButtonActivateTouch; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPress; // 0x0
	// void InputPressIn; // 0x0
	// void InputPressOut; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlString displaytext; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class CPhysicalButton : public CBaseButton
{
public:
	// Datamap fields:
	// void CPhysicalButtonPhysicsThink; // 0x0
	// void CPhysicalButtonButtonTouch; // 0x0
	// void CPhysicalButtonTriggerAndWait; // 0x0
	// void CPhysicalButtonButtonBackHome; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class CRotButton : public CBaseButton
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x8d8	
	CEntityIOOutput m_OnUnpressed; // 0x900	
	CEntityIOOutput m_OnFullyOpen; // 0x928	
	CEntityIOOutput m_OnFullyClosed; // 0x950	
	CEntityIOOutput m_OnReachedPosition; // 0x978	
	int32_t m_lastUsed; // 0x9a0	
	QAngle m_start; // 0x9a4	
	QAngle m_end; // 0x9b0	
	float m_IdealYaw; // 0x9bc	
	CUtlSymbolLarge m_sNoise; // 0x9c0	
	bool m_bUpdateTarget; // 0x9c8	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x3]; // 0x9c9
public:
	int32_t m_direction; // 0x9cc	
	float m_returnSpeed; // 0x9d0	
	float m_flStartPosition; // 0x9d4	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x7e0
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CRagdollMagnet : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_radius; // 0x4c4	
	float m_force; // 0x4c8	
	Vector m_axis; // 0x4cc	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0790[0x10]; // 0x790
public:
	QAngle m_angMoveEntitySpace; // 0x7a0	
	Vector m_vecMoveDirParentSpace; // 0x7ac	
	locksound_t m_ls; // 0x7b8	
	bool m_bForceClosed; // 0x7d8	
	bool m_bDoorGroup; // 0x7d9	
	bool m_bLocked; // 0x7da	
	bool m_bIgnoreDebris; // 0x7db	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7dc	
	float m_flBlockDamage; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x7e8	
	CUtlSymbolLarge m_NoiseArrived; // 0x7f0	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x7f8	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x800	
	CUtlSymbolLarge m_ChainTarget; // 0x808	
	CEntityIOOutput m_OnBlockedClosing; // 0x810	
	CEntityIOOutput m_OnBlockedOpening; // 0x838	
	CEntityIOOutput m_OnUnblockedClosing; // 0x860	
	CEntityIOOutput m_OnUnblockedOpening; // 0x888	
	CEntityIOOutput m_OnFullyClosed; // 0x8b0	
	CEntityIOOutput m_OnFullyOpen; // 0x8d8	
	CEntityIOOutput m_OnClose; // 0x900	
	CEntityIOOutput m_OnOpen; // 0x928	
	CEntityIOOutput m_OnLockedUse; // 0x950	
	bool m_bLoopMoveSound; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x17]; // 0x979
public:
	bool m_bCreateNavObstacle; // 0x990	
	bool m_isChaining; // 0x991	
	// MNetworkEnable
	bool m_bIsUsable; // 0x992	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0x97c
	//  m_ls.sLockedSound; // 0x7c0
	//  m_ls.sUnlockedSound; // 0x7c8
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetToggleState; // 0x0
	// void CBaseDoorDoorTouch; // 0x0
	// void CBaseDoorDoorGoUp; // 0x0
	// void CBaseDoorDoorGoDown; // 0x0
	// void CBaseDoorDoorHitTop; // 0x0
	// void CBaseDoorDoorHitBottom; // 0x0
	// void CBaseDoorMovingSoundThink; // 0x0
	// void CBaseDoorCloseAreaPortalsThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CEntityBlocker : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class CEntityDissolve : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flFadeInStart; // 0x710	
	// MNetworkEnable
	float m_flFadeInLength; // 0x714	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x718	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x71c	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x720	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x724	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x728	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x72c	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x730	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x73c	
	
	// Datamap fields:
	// void CEntityDissolveDissolveThink; // 0x0
	// void CEntityDissolveElectrocuteThink; // 0x0
	// CUtlSymbolLarge InputDissolve; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CEnvProjectedTexture : public CModelPointEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetEntity; // 0x710	
	// MNetworkEnable
	bool m_bState; // 0x714	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x715	
private:
	[[maybe_unused]] uint8_t __pad0716[0x2]; // 0x716
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x718	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x71c	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x71d	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x71e	
	// MNetworkEnable
	bool m_bLightWorld; // 0x71f	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x724	
	// MNetworkEnable
	Color m_LightColor; // 0x728	
	// MNetworkEnable
	float m_flIntensity; // 0x72c	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x730	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x734	
	// MNetworkEnable
	bool m_bVolumetric; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad0739[0x3]; // 0x739
public:
	// MNetworkEnable
	float m_flNoiseStrength; // 0x73c	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x740	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x744	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x748	
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x74c	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x750	
	// MNetworkEnable
	float m_flAmbient; // 0x754	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x758	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x958	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x95c	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x960	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x964	
	// MNetworkEnable
	float m_flProjectionSize; // 0x968	
	// MNetworkEnable
	float m_flRotation; // 0x96c	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x970	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputAlwaysUpdateOn; // 0x0
	// void InputAlwaysUpdateOff; // 0x0
	// float InputSetFOV; // 0x0
	// CHandle< CBaseEntity > InputSetTarget; // 0x0
	// bool InputSetCameraSpace; // 0x0
	// bool InputSetLightOnlyTarget; // 0x0
	// bool InputSetLightWorld; // 0x0
	// bool InputSetEnableShadows; // 0x0
	// Color InputSetLightColor; // 0x0
	// float InputSetLightIntensity; // 0x0
	// float InputSetAmbient; // 0x0
	// CUtlSymbolLarge InputSetSpotlightTexture; // 0x0
	// void CEnvProjectedTextureInitialThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDepth"
// MNetworkVarNames "uint32 m_nRenderOrder"
// MNetworkVarNames "bool m_bProjectOnWorld"
// MNetworkVarNames "bool m_bProjectOnCharacters"
// MNetworkVarNames "bool m_bProjectOnWater"
// MNetworkVarNames "float m_flDepthSortBias"
class CEnvDecal : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x710	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x718	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x71c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x720	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x724	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x728	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x729	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x72a	
private:
	[[maybe_unused]] uint8_t __pad072b[0x1]; // 0x72b
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x72c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CMessage : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4c0	
	float m_MessageVolume; // 0x4c8	
	int32_t m_MessageAttenuation; // 0x4cc	
	float m_Radius; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_sNoise; // 0x4d8	
	CEntityIOOutput m_OnShowMessage; // 0x4e0	
	
	// Datamap fields:
	// void InputShowMessage; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x680
// Has VTable
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4c4	
	int32_t m_nSoundMask; // 0x4c8	
	float m_flSensitivity; // 0x4cc	
	float m_flSmoothFactor; // 0x4d0	
	float m_flMaxRange; // 0x4d4	
	CUtlSymbolLarge m_iszSpeakerName; // 0x4d8	
	CHandle< CBaseEntity > m_hSpeaker; // 0x4e0	
	bool m_bAvoidFeedback; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	int32_t m_iSpeakerDSPPreset; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x4f0	
	CHandle< CBaseFilter > m_hListenFilter; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x500	
	CEntityIOOutput m_OnRoutedSound; // 0x528	
	CEntityIOOutput m_OnHeardSound; // 0x550	
	char m_szLastSound[256]; // 0x578	
	int32_t m_iLastRoutedFrame; // 0x678	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetSpeakerName; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x10]; // 0x710
public:
	Materials m_Material; // 0x720	
	CHandle< CBaseEntity > m_hBreaker; // 0x724	
	Explosions m_Explosion; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072c[0x4]; // 0x72c
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x730	
	float m_flPressureDelay; // 0x738	
	int32_t m_iMinHealthDmg; // 0x73c	
	CUtlSymbolLarge m_iszPropData; // 0x740	
	float m_impactEnergyScale; // 0x748	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x74c	
	CEntityIOOutput m_OnBreak; // 0x750	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x778	
	float m_flDmgModBullet; // 0x7a0	
	float m_flDmgModClub; // 0x7a4	
	float m_flDmgModExplosive; // 0x7a8	
	float m_flDmgModFire; // 0x7ac	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x7b0	
	CUtlSymbolLarge m_iszBasePropData; // 0x7b8	
	int32_t m_iInteractions; // 0x7c0	
	PerformanceMode_t m_PerformanceMode; // 0x7c4	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7c8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x7cc	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// float InputSetMass; // 0x0
	// void CBreakableDie; // 0x0
	// int32_t material; // 0x7fffffff
	// int32_t spawnobject; // 0x7fffffff
	// int32_t propdata; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x790	
	QAngle m_angMoveEntitySpace; // 0x794	
	Vector m_vecMoveDirParentSpace; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07ac[0x4]; // 0x7ac
public:
	CUtlSymbolLarge m_soundStart; // 0x7b0	
	CUtlSymbolLarge m_soundStop; // 0x7b8	
	CUtlSymbolLarge m_currentSound; // 0x7c0	
	float m_flBlockDamage; // 0x7c8	
	float m_flStartPosition; // 0x7cc	
	float m_flMoveDistance; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0xc]; // 0x7d4
public:
	CEntityIOOutput m_OnFullyOpen; // 0x7e0	
	CEntityIOOutput m_OnFullyClosed; // 0x808	
	bool m_bCreateMovableNavMesh; // 0x830	
	bool m_bCreateNavObstacle; // 0x831	
	
	// Datamap fields:
	// void CFuncMoveLinearNavObstacleThink; // 0x0
	// void CFuncMoveLinearNavMovableThink; // 0x0
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetSpeed; // 0x0
	// CUtlSymbolLarge InputTeleportToTarget; // 0x0
	// float InputResetPosition; // 0x0
	// float InputSetMoveDistanceFromStart; // 0x0
	// float InputSetMoveDistanceFromEnd; // 0x0
	// void CFuncMoveLinearStopMoveSound; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime CBaseEntity"
class CFuncRotating : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStopped; // 0x710	
	CEntityIOOutput m_OnStarted; // 0x738	
	CEntityIOOutput m_OnReachedStart; // 0x760	
	RotationVector m_localRotationVector; // 0x788	
	float m_flFanFriction; // 0x794	
	float m_flAttenuation; // 0x798	
	float m_flVolume; // 0x79c	
	float m_flTargetSpeed; // 0x7a0	
	float m_flMaxSpeed; // 0x7a4	
	float m_flBlockDamage; // 0x7a8	
	float m_flTimeScale; // 0x7ac	
	CUtlSymbolLarge m_NoiseRunning; // 0x7b0	
	bool m_bReversed; // 0x7b8	
	bool m_bAccelDecel; // 0x7b9	
private:
	[[maybe_unused]] uint8_t __pad07ba[0xa]; // 0x7ba
public:
	QAngle m_prevLocalAngles; // 0x7c4	
	QAngle m_angStart; // 0x7d0	
	bool m_bStopAtStartPos; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07dd[0x3]; // 0x7dd
public:
	Vector m_vecClientOrigin; // 0x7e0	
	QAngle m_vecClientAngles; // 0x7ec	
	
	// Datamap fields:
	// void CFuncRotatingSpinUpMove; // 0x0
	// void CFuncRotatingSpinDownMove; // 0x0
	// void CFuncRotatingHurtTouch; // 0x0
	// void CFuncRotatingRotatingUse; // 0x0
	// void CFuncRotatingRotateMove; // 0x0
	// void CFuncRotatingReverseMove; // 0x0
	// float InputSetSpeed; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
	// void InputReverse; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartBackward; // 0x0
	// void InputStopAtStartPos; // 0x0
	// void InputSnapToStartPos; // 0x0
	// Vector InputSetStartPos; // 0x0
	// void InputEnableAccelDecel; // 0x0
	// void InputDisableAccelDecel; // 0x0
	// void m_nNoiseRunningGuid; // 0x7bc
	// int32_t fanfriction; // 0x7fffffff
	// int32_t Volume; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CItemGenericTriggerHelper : public CBaseModelEntity
{
public:
	CHandle< CItemGeneric > m_hParentItem; // 0x710	
	
	// Datamap fields:
	// void CItemGenericTriggerHelperItemGenericTriggerHelperTouch; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CRuleEntity : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszMaster; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CRulePointEntity : public CRuleEntity
{
public:
	int32_t m_Score; // 0x718	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x738
// Has VTable
class CGamePlayerEquip : public CRulePointEntity
{
public:
	// Datamap fields:
	// CUtlString weapon%d[32]; // 0x7fffffff
	// void InputTriggerForAllPlayers; // 0x0
	// CUtlSymbolLarge InputTriggerForActivatedPlayer; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CMarkupVolume : public CBaseModelEntity
{
public:
	bool m_bEnabled; // 0x710	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0718[0x30]; // 0x718
public:
	bool m_bIsGroup; // 0x748	
	bool m_bGroupByPrefab; // 0x749	
	bool m_bGroupByVolume; // 0x74a	
	bool m_bGroupOtherGroups; // 0x74b	
	bool m_bIsInGroup; // 0x74c	
	
	// Datamap fields:
	// void m_GroupNames; // 0x718
	// void m_Tags; // 0x730
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x3]; // 0x751
public:
	Vector m_vRefPos; // 0x754	
	float m_flRefDot; // 0x760	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
class CFuncBrush : public CBaseModelEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x710	
	int32_t m_iDisabled; // 0x714	
	bool m_bSolidBsp; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad0719[0x7]; // 0x719
public:
	CUtlSymbolLarge m_iszExcludedClass; // 0x720	
	bool m_bInvertExclusion; // 0x728	
	bool m_bScriptedMovement; // 0x729	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetExcluded; // 0x0
	// bool InputSetInvert; // 0x0
	// void InputSetSolid; // 0x0
	// void InputSetNonsolid; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CPathTrack : public CPointEntity
{
public:
	CPathTrack* m_pnext; // 0x4c0	
	CPathTrack* m_pprevious; // 0x4c8	
	CPathTrack* m_paltpath; // 0x4d0	
	float m_flRadius; // 0x4d8	
	float m_length; // 0x4dc	
	CUtlSymbolLarge m_altName; // 0x4e0	
	int32_t m_nIterVal; // 0x4e8	
	TrackOrientationType_t m_eOrientationType; // 0x4ec	
	CEntityIOOutput m_OnPass; // 0x4f0	
	
	// Static fields:
	static int32_t &Get_s_nCurrIterVal(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bIsIterating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// void InputPass; // 0x0
	// void InputEnableAlternatePath; // 0x0
	// void InputDisableAlternatePath; // 0x0
	// void InputToggleAlternatePath; // 0x0
	// void InputEnablePath; // 0x0
	// void InputDisablePath; // 0x0
	// void InputTogglePath; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x7d0	
	float m_massScale; // 0x7d4	
	int32_t m_damageToEnableMotion; // 0x7d8	
	float m_flForceToEnableMotion; // 0x7dc	
	QAngle m_angPreferredCarryAngles; // 0x7e0	
	bool m_bNotSolidToWorld; // 0x7ec	
	bool m_bEnableUseOutput; // 0x7ed	
private:
	[[maybe_unused]] uint8_t __pad07ee[0x2]; // 0x7ee
public:
	int32_t m_iExploitableByPlayer; // 0x7f0	
	float m_flTouchOutputPerEntityDelay; // 0x7f4	
	CEntityIOOutput m_OnDamaged; // 0x7f8	
	CEntityIOOutput m_OnAwakened; // 0x820	
	CEntityIOOutput m_OnMotionEnabled; // 0x848	
	CEntityIOOutput m_OnPlayerUse; // 0x870	
	CEntityIOOutput m_OnStartTouch; // 0x898	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x8c0	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMagnitude; // 0x4c4	
	float m_flDamage; // 0x4c8	
	float m_radius; // 0x4cc	
	CUtlSymbolLarge m_targetEntityName; // 0x4d0	
	float m_flInnerRadius; // 0x4d8	
	float m_flPushScale; // 0x4dc	
	bool m_bConvertToDebrisWhenPossible; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x4e8	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CPhysImpact : public CPointEntity
{
public:
	float m_damage; // 0x4c0	
	float m_distance; // 0x4c4	
	CUtlSymbolLarge m_directionEntityName; // 0x4c8	
	
	// Datamap fields:
	// void CPhysImpactPointAtEntity; // 0x0
	// void InputImpact; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
class CRopeKeyframe : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x8]; // 0x710
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071a[0x6]; // 0x71a
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x720	
	// MNetworkEnable
	int16_t m_Slack; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072a[0x2]; // 0x72a
public:
	// MNetworkEnable
	float m_Width; // 0x72c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x730	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x734	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x735	
private:
	[[maybe_unused]] uint8_t __pad0736[0x2]; // 0x736
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x738	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x740	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x748	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x749	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x74a	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x74c	
	bool m_bCreatedFromMapFile; // 0x74d	
private:
	[[maybe_unused]] uint8_t __pad074e[0x2]; // 0x74e
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x750	
	bool m_bStartPointValid; // 0x754	
	bool m_bEndPointValid; // 0x755	
private:
	[[maybe_unused]] uint8_t __pad0756[0x2]; // 0x756
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x758	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x75c	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x760	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x761	
	
	// Datamap fields:
	// float InputSetScrollSpeed; // 0x0
	// Vector InputSetForce; // 0x0
	// void InputBreak; // 0x0
	// int32_t Breakable; // 0x7fffffff
	// int32_t Collide; // 0x7fffffff
	// int32_t Barbed; // 0x7fffffff
	// int32_t UseWind; // 0x7fffffff
	// int32_t Dangling; // 0x7fffffff
	// int32_t Type; // 0x7fffffff
	// int32_t RopeShader; // 0x7fffffff
	// CUtlString RopeMaterial; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ed0
// Has VTable
class CSoundEnt : public CPointEntity
{
public:
	int32_t m_iFreeSound; // 0x4c0	
	int32_t m_iActiveSound; // 0x4c4	
	int32_t m_cLastActiveSounds; // 0x4c8	
	// -> m_hOwner - 0x4cc
	// -> m_hTarget - 0x4d0
	// -> m_iVolume - 0x4d4
	// -> m_flOcclusionScale - 0x4d8
	// -> m_iType - 0x4dc
	// -> m_iNextAudible - 0x4e0
	// -> m_flExpireTime - 0x4e4
	// -> m_iNext - 0x4e8
	// -> m_bNoExpirationTime - 0x4ea
	// -> m_ownerChannelIndex - 0x4ec
	// -> m_vecOrigin - 0x4f0
	// -> m_bHasOwner - 0x4fc
	CSound m_SoundPool[128]; // 0x4cc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class CSpotlightEnd : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x710	
	// MNetworkEnable
	float m_Radius; // 0x714	
	Vector m_vSpotlightDir; // 0x718	
	Vector m_vSpotlightOrg; // 0x724	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x860
// Has VTable
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x710	
	float m_length; // 0x714	
	Vector m_vPosPrev; // 0x718	
	QAngle m_angPrev; // 0x724	
	Vector m_controlMins; // 0x730	
	Vector m_controlMaxs; // 0x73c	
	Vector m_lastBlockPos; // 0x748	
	int32_t m_lastBlockTick; // 0x754	
	float m_flVolume; // 0x758	
	float m_flBank; // 0x75c	
	float m_oldSpeed; // 0x760	
	float m_flBlockDamage; // 0x764	
	float m_height; // 0x768	
	float m_maxSpeed; // 0x76c	
	float m_dir; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x778	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x780	
	CUtlSymbolLarge m_iszSoundStart; // 0x788	
	CUtlSymbolLarge m_iszSoundStop; // 0x790	
	CUtlSymbolLarge m_strPathTarget; // 0x798	
	float m_flMoveSoundMinDuration; // 0x7a0	
	float m_flMoveSoundMaxDuration; // 0x7a4	
	GameTime_t m_flNextMoveSoundTime; // 0x7a8	
	float m_flMoveSoundMinPitch; // 0x7ac	
	float m_flMoveSoundMaxPitch; // 0x7b0	
	TrainOrientationType_t m_eOrientationType; // 0x7b4	
	TrainVelocityType_t m_eVelocityType; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0xc]; // 0x7bc
public:
	CEntityIOOutput m_OnStart; // 0x7c8	
	CEntityIOOutput m_OnNext; // 0x7f0	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x818	
	bool m_bManualSpeedChanges; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
public:
	float m_flDesiredSpeed; // 0x844	
	GameTime_t m_flSpeedChangeTime; // 0x848	
	float m_flAccelSpeed; // 0x84c	
	float m_flDecelSpeed; // 0x850	
	bool m_bAccelToSpeed; // 0x854	
private:
	[[maybe_unused]] uint8_t __pad0855[0x3]; // 0x855
public:
	float m_flTimeScale; // 0x858	
	GameTime_t m_flNextMPSoundTime; // 0x85c	
	
	// Datamap fields:
	// int64_t m_soundMoveGuid; // 0x7bc
	// void InputStop; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartBackward; // 0x0
	// void InputToggle; // 0x0
	// void InputResume; // 0x0
	// void InputReverse; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedDir; // 0x0
	// float InputSetSpeedReal; // 0x0
	// float InputSetMaxSpeed; // 0x0
	// float InputSetSpeedDirAccel; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// void InputLockOrientation; // 0x0
	// void InputUnlockOrientation; // 0x0
	// void CFuncTrackTrainNext; // 0x0
	// void CFuncTrackTrainFind; // 0x0
	// void CFuncTrackTrainNearestPath; // 0x0
	// void CFuncTrackTrainDeadEnd; // 0x0
	// int32_t volume; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x7]; // 0x791
public:
	CUtlSymbolLarge m_iFilterName; // 0x798	
	CHandle< CBaseFilter > m_hFilter; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
public:
	CEntityIOOutput m_OnStartTouch; // 0x7a8	
	CEntityIOOutput m_OnStartTouchAll; // 0x7d0	
	CEntityIOOutput m_OnEndTouch; // 0x7f8	
	CEntityIOOutput m_OnEndTouchAll; // 0x820	
	CEntityIOOutput m_OnTouching; // 0x848	
	CEntityIOOutput m_OnNotTouching; // 0x870	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x898	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x8b0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CTriggerMultiple : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTrigger; // 0x8b8	
	
	// Datamap fields:
	// void CTriggerMultipleMultiTouch; // 0x0
	// void CTriggerMultipleMultiWaitOver; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x8b8	
	Vector m_flPosition; // 0x8d0	
	float m_flCenterSize; // 0x8dc	
	float m_flMinVal; // 0x8e0	
	float m_flMaxVal; // 0x8e4	
	float m_flWait; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CUtlSymbolLarge m_opvarName; // 0x8f0	
	CUtlSymbolLarge m_stackName; // 0x8f8	
	CUtlSymbolLarge m_operatorName; // 0x900	
	bool m_bVolIs2D; // 0x908	
	char m_opvarNameChar[256]; // 0x909	
	char m_stackNameChar[256]; // 0xa09	
	char m_operatorNameChar[256]; // 0xb09	
private:
	[[maybe_unused]] uint8_t __pad0c09[0x3]; // 0xc09
public:
	Vector m_VecNormPos; // 0xc0c	
	float m_flNormCenterSize; // 0xc18	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x909
	// void m_stackNameChar; // 0xa09
	// void m_operatorNameChar; // 0xb09
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x8b8	
	float m_flDamage; // 0x8bc	
	float m_flDamageCap; // 0x8c0	
	GameTime_t m_flLastDmgTime; // 0x8c4	
	float m_flForgivenessDelay; // 0x8c8	
	int32_t m_bitsDamageInflict; // 0x8cc	
	int32_t m_damageModel; // 0x8d0	
	bool m_bNoDmgForce; // 0x8d4	
private:
	[[maybe_unused]] uint8_t __pad08d5[0x3]; // 0x8d5
public:
	Vector m_vDamageForce; // 0x8d8	
	bool m_thinkAlways; // 0x8e4	
private:
	[[maybe_unused]] uint8_t __pad08e5[0x3]; // 0x8e5
public:
	float m_hurtThinkPeriod; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CEntityIOOutput m_OnHurt; // 0x8f0	
	CEntityIOOutput m_OnHurtPlayer; // 0x918	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x940	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CTriggerHurtGhost : public CTriggerHurt
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
// Has VTable
class CTriggerCallback : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x8b8	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c4[0x4]; // 0x8c4
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8c8	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d1[0x3]; // 0x8d1
public:
	float m_flLerpDuration; // 0x8d4	
	bool m_bLerpRestoreMoveType; // 0x8d8	
	bool m_bSingleLerpObject; // 0x8d9	
private:
	[[maybe_unused]] uint8_t __pad08da[0x6]; // 0x8da
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x8e0	
	CUtlSymbolLarge m_iszLerpEffect; // 0x8f8	
	CUtlSymbolLarge m_iszLerpSound; // 0x900	
	bool m_bAttachTouchingObject; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad0909[0x3]; // 0x909
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x90c	
	CEntityIOOutput m_OnLerpStarted; // 0x910	
	CEntityIOOutput m_OnLerpFinished; // 0x938	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x8b8	
	CUtlString m_sLandmarkName; // 0x8c0	
	CEntityIOOutput m_OnChangeLevel; // 0x8c8	
	bool m_bTouched; // 0x8f0	
	bool m_bNoTouch; // 0x8f1	
	bool m_bNewChapter; // 0x8f2	
	bool m_bOnChangeLevelFired; // 0x8f3	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x8b8	
	bool m_bUseLandmarkAngles; // 0x8c0	
	bool m_bMirrorPlayer; // 0x8c1	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x908
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x8b8	
	Vector m_vFanEnd; // 0x8c4	
	Vector m_vNoise; // 0x8d0	
	float m_flForce; // 0x8dc	
	float m_flRopeForceScale; // 0x8e0	
	float m_flPlayerForce; // 0x8e4	
	float m_flRampTime; // 0x8e8	
	bool m_bFalloff; // 0x8ec	
	bool m_bPushPlayer; // 0x8ed	
	bool m_bRampDown; // 0x8ee	
	bool m_bAddNoise; // 0x8ef	
	CountdownTimer m_RampTimer; // 0x8f0	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CNavWalkable : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	int32_t m_nBlockedTeamNumber; // 0x714	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4c0	
	Vector m_vLocatorOffset; // 0x4c4	
	QAngle m_qLocatorAnglesOffset; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_strMovementForward; // 0x4e0	
	CUtlSymbolLarge m_strMovementReverse; // 0x4e8	
	int32_t m_nNavLinkIdForward; // 0x4f0	
	int32_t m_nNavLinkIdReverse; // 0x4f4	
	bool m_bEnabled; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	CUtlSymbolLarge m_strFilterName; // 0x500	
	CHandle< CBaseFilter > m_hFilter; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CEntityIOOutput m_OnNavLinkStart; // 0x510	
	CEntityIOOutput m_OnNavLinkFinish; // 0x538	
	bool m_bIsTerminus; // 0x560	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CNavSpaceInfo : public CPointEntity
{
public:
	bool m_bCreateFlightSpace; // 0x4c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class CBeam : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0x710	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x714	
	GameTime_t m_flFireTime; // 0x718	
	float m_flDamage; // 0x71c	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x7]; // 0x721
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x728	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x730	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x738	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x73c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachEntity[10]; // 0x740	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0772[0x2]; // 0x772
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x774	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x778	
	// MNetworkEnable
	float m_fFadeLength; // 0x77c	
	// MNetworkEnable
	float m_fHaloScale; // 0x780	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x784	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x788	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x78c	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x790	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x794	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x79c	
	CHandle< CBaseEntity > m_hEndEntity; // 0x7a8	
	int32_t m_nDissolveType; // 0x7ac	
	
	// Datamap fields:
	// float InputWidth; // 0x0
	// float InputNoise; // 0x0
	// float InputColorRedValue; // 0x0
	// float InputColorGreenValue; // 0x0
	// float InputColorBlueValue; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class CFuncLadder : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x720	
	Vector m_vecLocalTop; // 0x738	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x744	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x750	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x75c	
	bool m_bDisabled; // 0x760	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x761	
	bool m_bHasSlack; // 0x762	
private:
	[[maybe_unused]] uint8_t __pad0763[0x5]; // 0x763
public:
	CUtlSymbolLarge m_surfacePropName; // 0x768	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x770	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x798	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x710	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x718	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFace; // 0x720	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeCaps; // 0x728	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFins; // 0x730	
	matrix3x4_t m_matPanelTransform; // 0x738	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x768	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x798	
	Vector2D m_PanelSize; // 0x7b0	
	Vector m_vecPanelNormalWs; // 0x7b8	
	int32_t m_nNumShardsEverCreated; // 0x7c4	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x7c8	
	GameTime_t m_flLastCleanupTime; // 0x7cc	
	GameTime_t m_flInitAtTime; // 0x7d0	
	float m_flGlassThickness; // 0x7d4	
	float m_flSpawnInvulnerability; // 0x7d8	
	bool m_bBreakSilent; // 0x7dc	
	bool m_bBreakShardless; // 0x7dd	
	bool m_bBroken; // 0x7de	
	bool m_bHasRateLimitedShards; // 0x7df	
	bool m_bGlassNavIgnore; // 0x7e0	
	bool m_bGlassInFrame; // 0x7e1	
	bool m_bStartBroken; // 0x7e2	
	uint8_t m_iInitialDamageType; // 0x7e3	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7e8	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7f0	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7f8	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x800	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x808	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x820	
	CEntityIOOutput m_OnBroken; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad0860[0x1]; // 0x860
public:
	uint8_t m_iSurfaceType; // 0x861	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class CSprite : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x710	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachedToEntity; // 0x718	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x71c	
private:
	[[maybe_unused]] uint8_t __pad071d[0x3]; // 0x71d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x720	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x724	
	GameTime_t m_flDieTime; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072c[0xc]; // 0x72c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x738	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x73c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x740	
	// MNetworkEnable
	float m_flScaleDuration; // 0x744	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x3]; // 0x749
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x74c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x750	
	GameTime_t m_flLastTime; // 0x754	
	float m_flMaxFrame; // 0x758	
	float m_flStartScale; // 0x75c	
	float m_flDestScale; // 0x760	
	GameTime_t m_flScaleTimeStart; // 0x764	
	int32_t m_nStartBrightness; // 0x768	
	int32_t m_nDestBrightness; // 0x76c	
	GameTime_t m_flBrightnessTimeStart; // 0x770	
	int32_t m_nSpriteWidth; // 0x774	
	int32_t m_nSpriteHeight; // 0x778	
	
	// Datamap fields:
	// void CSpriteAnimateThink; // 0x0
	// void CSpriteExpandThink; // 0x0
	// void CSpriteAnimateUntilDead; // 0x0
	// void CSpriteBeginFadeOutThink; // 0x0
	// void InputHideSprite; // 0x0
	// void InputShowSprite; // 0x0
	// void InputToggleSprite; // 0x0
	// float InputColorRedValue; // 0x0
	// float InputColorGreenValue; // 0x0
	// float InputColorBlueValue; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CSpriteOriented : public CSprite
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class CBaseClientUIEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x7]; // 0x711
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x718	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x720	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x728	
	CEntityIOOutput m_CustomOutput0; // 0x730	
	CEntityIOOutput m_CustomOutput1; // 0x758	
	CEntityIOOutput m_CustomOutput2; // 0x780	
	CEntityIOOutput m_CustomOutput3; // 0x7a8	
	CEntityIOOutput m_CustomOutput4; // 0x7d0	
	CEntityIOOutput m_CustomOutput5; // 0x7f8	
	CEntityIOOutput m_CustomOutput6; // 0x820	
	CEntityIOOutput m_CustomOutput7; // 0x848	
	CEntityIOOutput m_CustomOutput8; // 0x870	
	CEntityIOOutput m_CustomOutput9; // 0x898	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class CPointClientUIDialog : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< CBaseEntity > m_hActivator; // 0x8c0	
	bool m_bStartEnabled; // 0x8c4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x8c0	
	// MNetworkEnable
	bool m_bLit; // 0x8c1	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x8c2	
private:
	[[maybe_unused]] uint8_t __pad08c3[0x1]; // 0x8c3
public:
	// MNetworkEnable
	float m_flWidth; // 0x8c4	
	// MNetworkEnable
	float m_flHeight; // 0x8c8	
	// MNetworkEnable
	float m_flDPI; // 0x8cc	
	// MNetworkEnable
	float m_flInteractDistance; // 0x8d0	
	// MNetworkEnable
	float m_flDepthOffset; // 0x8d4	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8d8	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8dc	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8e0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8e4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x7]; // 0x8e9
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8f0	
	// MNetworkEnable
	bool m_bOpaque; // 0x908	
	// MNetworkEnable
	bool m_bNoDepth; // 0x909	
	// MNetworkEnable
	bool m_bRenderBackface; // 0x90a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x90b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x90c	
	// MNetworkEnable
	bool m_bGrabbable; // 0x90d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x90e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x90f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x910	
	
	// Datamap fields:
	// void InputIgnoreUserInput; // 0x0
	// void InputAcceptUserInput; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x918	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x4c4	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x4d0	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x4d8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4e0	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x500	
	CUtlSymbolLarge m_szTargetsName; // 0x518	
	CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x520	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2c8
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	CEconItemView m_Item; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoPlayerTerrorist : public SpawnPoint
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoPlayerCounterterrorist : public SpawnPoint
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoDeathmatchSpawn : public SpawnPoint
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CInfoEnemyTerroristSpawn : public SpawnPointCoopEnemy
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CPointGiveAmmo : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_pActivator; // 0x4c0	
	
	// Datamap fields:
	// void InputGiveAmmo; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x8b8	
	CEntityIOOutput m_OnBombPlanted; // 0x8e0	
	CEntityIOOutput m_OnBombDefused; // 0x908	
	bool m_bIsBombSiteB; // 0x930	
	bool m_bIsHeistBombTarget; // 0x931	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x932	
private:
	[[maybe_unused]] uint8_t __pad0933[0x5]; // 0x933
public:
	CUtlSymbolLarge m_szMountTarget; // 0x938	
	CHandle< CBaseEntity > m_hInstructorHint; // 0x940	
	int32_t m_nBombSiteDesignation; // 0x944	
	
	// Datamap fields:
	// void CBombTargetCBombTargetShim::Touch; // 0x0
	// void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
	// void OnBombExplode; // 0x0
	// void OnBombPlanted; // 0x0
	// void OnBombDefused; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoInstructorHintBombTargetA : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoInstructorHintBombTargetB : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CHostageRescueZoneShim : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CHostageRescueZone : public CHostageRescueZoneShim
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoInstructorHintHostageRescueZone : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MNetworkVarNames "float m_flFluidDensity"
class CTriggerBuoyancy : public CBaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x8b8	
	// MNetworkEnable
	float m_flFluidDensity; // 0x8d8	
	
	// Datamap fields:
	// float InputSetFluidDensity; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
class CFuncWater : public CBaseModelEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CCSSprite : public CSprite
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf918
// Has VTable
// 
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
// MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
// MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
// MNetworkVarNames "uint32 m_iPing"
// MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
// MNetworkVarNames "string_t m_szCrosshairCodes"
// MNetworkVarNames "uint8 m_iPendingTeamNum"
// MNetworkVarNames "GameTime_t m_flForceTeamTime"
// MNetworkVarNames "int m_iCompTeammateColor"
// MNetworkVarNames "bool m_bEverPlayedOnTeam"
// MNetworkVarNames "string_t m_szClan"
// MNetworkVarNames "int m_iCoachingTeam"
// MNetworkVarNames "uint64 m_nPlayerDominated"
// MNetworkVarNames "uint64 m_nPlayerDominatingMe"
// MNetworkVarNames "int m_iCompetitiveRanking"
// MNetworkVarNames "int m_iCompetitiveWins"
// MNetworkVarNames "int8 m_iCompetitiveRankType"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
// MNetworkVarNames "int m_nEndMatchNextMapVote"
// MNetworkVarNames "uint16 m_unActiveQuestId"
// MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
// MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
// MNetworkVarNames "int m_nDisconnectionTick"
// MNetworkVarNames "bool m_bControllingBot"
// MNetworkVarNames "bool m_bHasControlledBotThisRound"
// MNetworkVarNames "bool m_bCanControlObservedBot"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
// MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
// MNetworkVarNames "bool m_bPawnIsAlive"
// MNetworkVarNames "uint32 m_iPawnHealth"
// MNetworkVarNames "int m_iPawnArmor"
// MNetworkVarNames "bool m_bPawnHasDefuser"
// MNetworkVarNames "bool m_bPawnHasHelmet"
// MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
// MNetworkVarNames "int m_iPawnLifetimeStart"
// MNetworkVarNames "int m_iPawnLifetimeEnd"
// MNetworkVarNames "int m_iPawnBotDifficulty"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "EKillTypes_t m_vecKills"
// MNetworkVarNames "int m_iMVPs"
class CCSPlayerController : public CBasePlayerController
{
private:
	[[maybe_unused]] uint8_t __pad06b8[0x10]; // 0x6b8
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6c8	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6d0	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6d8	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x6e0	
	// MNetworkEnable
	uint32_t m_iPing; // 0x6e8	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x6ec	
private:
	[[maybe_unused]] uint8_t __pad06ed[0x3]; // 0x6ed
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x6f0	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x3]; // 0x6f9
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x6fc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x700	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x704	
	bool m_bAttemptedToGetColor; // 0x705	
private:
	[[maybe_unused]] uint8_t __pad0706[0x2]; // 0x706
public:
	int32_t m_iTeammatePreferredColor; // 0x708	
	bool m_bTeamChanged; // 0x70c	
	bool m_bInSwitchTeam; // 0x70d	
	bool m_bHasSeenJoinGame; // 0x70e	
	bool m_bJustBecameSpectator; // 0x70f	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x710	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x711	
private:
	[[maybe_unused]] uint8_t __pad0712[0x6]; // 0x712
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x718	
	char m_szClanName[32]; // 0x720	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x748	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x750	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x758	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x75c	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x764	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x768	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x76c	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x770	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x774	
private:
	[[maybe_unused]] uint8_t __pad0776[0x2]; // 0x776
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad0780[0x28]; // 0x780
public:
	int32_t m_iDraftIndex; // 0x7a8	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7ac	
	uint32_t m_uiAbandonRecordedReason; // 0x7b0	
	bool m_bCannotBeKicked; // 0x7b4	
	bool m_bEverFullyConnected; // 0x7b5	
	bool m_bAbandonAllowsSurrender; // 0x7b6	
	bool m_bAbandonOffersInstantSurrender; // 0x7b7	
	bool m_bDisconnection1MinWarningPrinted; // 0x7b8	
	bool m_bScoreReported; // 0x7b9	
private:
	[[maybe_unused]] uint8_t __pad07ba[0x2]; // 0x7ba
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x8]; // 0x7c0
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7c8	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7c9	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7ca	
private:
	[[maybe_unused]] uint8_t __pad07cb[0x1]; // 0x7cb
public:
	int32_t m_nBotsControlledThisRound; // 0x7cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x7d4	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x7d8	
	int32_t m_DesiredObserverMode; // 0x7dc	
	CEntityHandle m_hDesiredObserverTarget; // 0x7e0	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x7e8	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x7ec	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x7f0	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x7f1	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x7f2	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x7f4	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x7f8	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x7fc	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x800	
	// MNetworkEnable
	int32_t m_iScore; // 0x804	
	int32_t m_iRoundScore; // 0x808	
	int32_t m_iRoundsWon; // 0x80c	
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x810	
	// MNetworkEnable
	int32_t m_iMVPs; // 0x828	
	int32_t m_nUpdateCounter; // 0x82c	
	float m_flSmoothedPing; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0834[0xf0a4]; // 0x834
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf8d8	
private:
	[[maybe_unused]] uint8_t __padf8e8[0x8]; // 0xf8e8
public:
	bool m_bShowHints; // 0xf8f0	
private:
	[[maybe_unused]] uint8_t __padf8f1[0x3]; // 0xf8f1
public:
	int32_t m_iNextTimeCheck; // 0xf8f4	
	bool m_bJustDidTeamKill; // 0xf8f8	
	bool m_bPunishForTeamKill; // 0xf8f9	
	bool m_bGaveTeamDamageWarning; // 0xf8fa	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf8fb	
private:
	[[maybe_unused]] uint8_t __padf8fc[0x4]; // 0xf8fc
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf900	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf908	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf90c	
	uint32_t m_nSuspiciousHitCount; // 0xf910	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf914	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MNetworkVarNames "string_t m_source"
// MNetworkVarNames "string_t m_destination"
class CFootstepControl : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0x8b8	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0x8c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x248	
	CSWeaponCategory m_WeaponCategory; // 0x24c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x250	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x330	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x410	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x4f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x5d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x6b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x870	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0x950	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xa30	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xb10	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xbf0	
	int32_t m_GearSlotPosition; // 0xbf4	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xbf8	
private:
	[[maybe_unused]] uint8_t __pad0bfc[0x4]; // 0xbfc
public:
	CUtlString m_sWrongTeamMsg; // 0xc00	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xc08	
	int32_t m_nKillAward; // 0xc0c	
	int32_t m_nPrimaryReserveAmmoMax; // 0xc10	
	int32_t m_nSecondaryReserveAmmoMax; // 0xc14	
	bool m_bMeleeWeapon; // 0xc18	
	bool m_bHasBurstMode; // 0xc19	
	bool m_bIsRevolver; // 0xc1a	
	bool m_bCannotShootUnderwater; // 0xc1b	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x4]; // 0xc1c
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CGlobalSymbol m_szName; // 0xc20	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xc28	
	CSWeaponSilencerType m_eSilencerType; // 0xc30	
	int32_t m_nCrosshairMinDistance; // 0xc34	
	int32_t m_nCrosshairDeltaDistance; // 0xc38	
	bool m_bIsFullAuto; // 0xc3c	
private:
	[[maybe_unused]] uint8_t __pad0c3d[0x3]; // 0xc3d
public:
	int32_t m_nNumBullets; // 0xc40	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xc44	
	CFiringModeFloat m_flMaxSpeed; // 0xc4c	
	CFiringModeFloat m_flSpread; // 0xc54	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xc5c	
	CFiringModeFloat m_flInaccuracyStand; // 0xc64	
	CFiringModeFloat m_flInaccuracyJump; // 0xc6c	
	CFiringModeFloat m_flInaccuracyLand; // 0xc74	
	CFiringModeFloat m_flInaccuracyLadder; // 0xc7c	
	CFiringModeFloat m_flInaccuracyFire; // 0xc84	
	CFiringModeFloat m_flInaccuracyMove; // 0xc8c	
	CFiringModeFloat m_flRecoilAngle; // 0xc94	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xc9c	
	CFiringModeFloat m_flRecoilMagnitude; // 0xca4	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xcac	
	CFiringModeInt m_nTracerFrequency; // 0xcb4	
	float m_flInaccuracyJumpInitial; // 0xcbc	
	float m_flInaccuracyJumpApex; // 0xcc0	
	float m_flInaccuracyReload; // 0xcc4	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xcc8	
	int32_t m_nSpreadSeed; // 0xccc	
	float m_flTimeToIdleAfterFire; // 0xcd0	
	float m_flIdleInterval; // 0xcd4	
	float m_flAttackMovespeedFactor; // 0xcd8	
	float m_flHeatPerShot; // 0xcdc	
	float m_flInaccuracyPitchShift; // 0xce0	
	float m_flInaccuracyAltSoundThreshold; // 0xce4	
	float m_flBotAudibleRange; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	CUtlString m_szUseRadioSubtitle; // 0xcf0	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xcf8	
	bool m_bHideViewModelWhenZoomed; // 0xcf9	
private:
	[[maybe_unused]] uint8_t __pad0cfa[0x2]; // 0xcfa
public:
	int32_t m_nZoomLevels; // 0xcfc	
	int32_t m_nZoomFOV1; // 0xd00	
	int32_t m_nZoomFOV2; // 0xd04	
	float m_flZoomTime0; // 0xd08	
	float m_flZoomTime1; // 0xd0c	
	float m_flZoomTime2; // 0xd10	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xd14	
	float m_flIronSightPutDownSpeed; // 0xd18	
	float m_flIronSightFOV; // 0xd1c	
	float m_flIronSightPivotForward; // 0xd20	
	float m_flIronSightLooseness; // 0xd24	
	QAngle m_angPivotAngle; // 0xd28	
	Vector m_vecIronSightEyePos; // 0xd34	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xd40	
	float m_flHeadshotMultiplier; // 0xd44	
	float m_flArmorRatio; // 0xd48	
	float m_flPenetration; // 0xd4c	
	float m_flRange; // 0xd50	
	float m_flRangeModifier; // 0xd54	
	float m_flFlinchVelocityModifierLarge; // 0xd58	
	float m_flFlinchVelocityModifierSmall; // 0xd5c	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xd60	
	float m_flRecoveryTimeStand; // 0xd64	
	float m_flRecoveryTimeCrouchFinal; // 0xd68	
	float m_flRecoveryTimeStandFinal; // 0xd6c	
	int32_t m_nRecoveryTransitionStartBullet; // 0xd70	
	int32_t m_nRecoveryTransitionEndBullet; // 0xd74	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xd78	
	Vector m_vSmokeColor; // 0xd7c	
	CGlobalSymbol m_szAnimClass; // 0xd88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CTriggerTripWire : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CPointGamestatsCounter : public CPointEntity
{
public:
	CUtlSymbolLarge m_strStatisticName; // 0x4c0	
	bool m_bDisabled; // 0x4c8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetName; // 0x0
	// float InputIncrement; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvHudHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4c0	
	
	// Datamap fields:
	// void InputShowHudHint; // 0x0
	// void InputHideHudHint; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
// Has VTable
class CBuyZone : public CBaseTrigger
{
public:
	int32_t m_LegacyTeamNum; // 0x8b8	
	
	// Datamap fields:
	// void CBuyZoneBuyZoneTouch; // 0x0
	// void InputSetTeam_TerroristOnly; // 0x0
	// void InputSetTeam_CTOnly; // 0x0
	// void InputSetTeam_AllTeams; // 0x0
	// void InputSetTeam_None; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkOverride "m_fFlags CBaseEntity"
// MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
// MNetworkVarNames "float32 m_flTargetSpeed"
// MNetworkVarNames "GameTick_t m_nTransitionStartTick"
// MNetworkVarNames "int m_nTransitionDurationTicks"
// MNetworkVarNames "float32 m_flTransitionStartSpeed"
// MNetworkVarNames "EHANDLE m_hConveyorModels"
class CFuncConveyor : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_szConveyorModels; // 0x710	
	float m_flTransitionDurationSeconds; // 0x718	
	QAngle m_angMoveEntitySpace; // 0x71c	
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0x728	
	// MNetworkEnable
	float m_flTargetSpeed; // 0x734	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0x738	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0x73c	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // 0x748	
	
	// Datamap fields:
	// void InputToggleDirection; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetTransitionDuration; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CTriggerBombReset : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CTriggerHostageReset : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CCSPlace : public CServerOnlyModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x8]; // 0x710
public:
	CUtlSymbolLarge m_name; // 0x718	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CGameMoney : public CRulePointEntity
{
public:
	CEntityIOOutput m_OnMoneySpent; // 0x720	
	CEntityIOOutput m_OnMoneySpentFail; // 0x748	
	int32_t m_nMoney; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlString m_strAwardText; // 0x778	
	
	// Datamap fields:
	// int32_t InputSetMoneyAmount; // 0x0
	// void InputAddTeamMoneyTerrorist; // 0x0
	// void InputAddTeamMoneyCT; // 0x0
	// void InputAddMoneyPlayer; // 0x0
	// void InputSpendMoneyFromPlayer; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
// 
// MNetworkVarNames "int m_nUniqueID"
// MNetworkVarNames "uint32 m_unAccountID"
// MNetworkVarNames "uint32 m_unTraceID"
// MNetworkVarNames "uint32 m_rtGcTime"
// MNetworkVarNames "Vector m_vecEndPos"
// MNetworkVarNames "Vector m_vecStart"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "Vector m_vecNormal"
// MNetworkVarNames "int m_nPlayer"
// MNetworkVarNames "int m_nEntity"
// MNetworkVarNames "int m_nHitbox"
// MNetworkVarNames "float m_flCreationTime"
// MNetworkVarNames "int m_nTintID"
// MNetworkVarNames "uint8 m_nVersion"
// MNetworkVarNames "uint8 m_ubSignature"
class CPlayerSprayDecal : public CModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0x710	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0x714	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0x718	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0x71c	
	// MNetworkEnable
	Vector m_vecEndPos; // 0x720	
	// MNetworkEnable
	Vector m_vecStart; // 0x72c	
	// MNetworkEnable
	Vector m_vecLeft; // 0x738	
	// MNetworkEnable
	Vector m_vecNormal; // 0x744	
	// MNetworkEnable
	int32_t m_nPlayer; // 0x750	
	// MNetworkEnable
	int32_t m_nEntity; // 0x754	
	// MNetworkEnable
	int32_t m_nHitbox; // 0x758	
	// MNetworkEnable
	float m_flCreationTime; // 0x75c	
	// MNetworkEnable
	int32_t m_nTintID; // 0x760	
	// MNetworkEnable
	uint8_t m_nVersion; // 0x764	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0x765	
	
	// Static fields:
	static CUtlVector< CPlayerSprayDecal* > &Get_s_arrFEPlayerDecals(){return *reinterpret_cast<CUtlVector< CPlayerSprayDecal* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPlayerSprayDecal")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1398
// Has VTable
// 
// MNetworkVarNames "Vector m_firePositions"
// MNetworkVarNames "Vector m_fireParentPositions"
// MNetworkVarNames "bool m_bFireIsBurning"
// MNetworkVarNames "Vector m_BurnNormal"
// MNetworkVarNames "int m_fireCount"
// MNetworkVarNames "int m_nInfernoType"
// MNetworkVarNames "int m_nFireEffectTickBegin"
// MNetworkVarNames "float m_nFireLifetime"
// MNetworkVarNames "bool m_bInPostEffectTime"
class CInferno : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x10]; // 0x710
public:
	// MNetworkEnable
	Vector m_firePositions[64]; // 0x720	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0xa20	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0xd20	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0xd60	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1060	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x1064	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x1068	
	// MNetworkEnable
	float m_nFireLifetime; // 0x106c	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1070	
private:
	[[maybe_unused]] uint8_t __pad1071[0x3]; // 0x1071
public:
	int32_t m_nFiresExtinguishCount; // 0x1074	
	bool m_bWasCreatedInSmoke; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad1079[0x207]; // 0x1079
public:
	// -> lo - 0x1280
	// -> hi - 0x128c
	Extent m_extent; // 0x1280	
	CountdownTimer m_damageTimer; // 0x1298	
	CountdownTimer m_damageRampTimer; // 0x12b0	
	Vector m_splashVelocity; // 0x12c8	
	Vector m_InitialSplashVelocity; // 0x12d4	
	Vector m_startPos; // 0x12e0	
	Vector m_vecOriginalSpawnLocation; // 0x12ec	
	IntervalTimer m_activeTimer; // 0x12f8	
	int32_t m_fireSpawnOffset; // 0x1308	
	int32_t m_nMaxFlames; // 0x130c	
	int32_t m_nSpreadCount; // 0x1310	
private:
	[[maybe_unused]] uint8_t __pad1314[0x4]; // 0x1314
public:
	CountdownTimer m_BookkeepingTimer; // 0x1318	
	CountdownTimer m_NextSpreadTimer; // 0x1330	
	uint16_t m_nSourceItemDefIndex; // 0x1348	
	
	// Static fields:
	static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[0]->m_instance);};
	static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[1]->m_instance);};
	static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[2]->m_instance);};
	static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[3]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1398
// Has VTable
class CFireCrackerBlast : public CInferno
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x938
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "int m_nColorMode"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flColorTemperature"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "int m_nLuminaireShape"
// MNetworkVarNames "float m_flLuminaireSize"
// MNetworkVarNames "float m_flLuminaireAnisotropy"
// MNetworkVarNames "CUtlString m_LightStyleString"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
// MNetworkVarNames "CUtlString m_LightStyleEvents"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_LightStyleTargets"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "float m_flShape"
// MNetworkVarNames "float m_flSoftX"
// MNetworkVarNames "float m_flSoftY"
// MNetworkVarNames "float m_flSkirt"
// MNetworkVarNames "float m_flSkirtNear"
// MNetworkVarNames "Vector m_vSizeParams"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "Vector m_vShear"
// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowMapSize"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "bool m_bContactShadow"
// MNetworkVarNames "int m_nBounceLight"
// MNetworkVarNames "float m_flBounceScale"
// MNetworkVarNames "float m_flMinRoughness"
// MNetworkVarNames "Vector m_vAlternateColor"
// MNetworkVarNames "float m_fAlternateColorBrightness"
// MNetworkVarNames "int m_nFog"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "int m_nFogShadows"
// MNetworkVarNames "float m_flFogScale"
// MNetworkVarNames "float m_flFadeSizeStart"
// MNetworkVarNames "float m_flFadeSizeEnd"
// MNetworkVarNames "float m_flShadowFadeSizeStart"
// MNetworkVarNames "float m_flShadowFadeSizeEnd"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
class CBarnLight : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x714	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x718	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x71c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x720	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x724	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x728	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x72c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x730	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x734	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad073c[0x4]; // 0x73c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x740	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad074c[0x4]; // 0x74c
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x750	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x768	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x780	
	CEntityIOOutput m_StyleEvent[4]; // 0x798	
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
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x798
	// void m_StyleEvent[1]; // 0x7c0
	// void m_StyleEvent[2]; // 0x7e8
	// void m_StyleEvent[3]; // 0x810
	// void CBarnLightThink_SetNextQueuedLightStyle; // 0x0
	// void CBarnLightThink_ApplyLightStylesToTargets; // 0x0
	// void CBarnLightThink_LightStyleEvent; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MNetworkVarNames "bool m_bShowLight"
class CRectLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0x938	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
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

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "bool m_bSurrendered"
// MNetworkVarNames "char m_szTeamMatchStat"
// MNetworkVarNames "int m_numMapVictories"
// MNetworkVarNames "int32 m_scoreFirstHalf"
// MNetworkVarNames "int32 m_scoreSecondHalf"
// MNetworkVarNames "int32 m_scoreOvertime"
// MNetworkVarNames "char m_szClanTeamname"
// MNetworkVarNames "uint32 m_iClanID"
// MNetworkVarNames "char m_szTeamFlagImage"
// MNetworkVarNames "char m_szTeamLogoImage"
class CCSTeam : public CTeam
{
public:
	int32_t m_nLastRecievedShorthandedRoundBonus; // 0x578	
	int32_t m_nShorthandedRoundBonusStartRound; // 0x57c	
	// MNetworkEnable
	bool m_bSurrendered; // 0x580	
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x581	
private:
	[[maybe_unused]] uint8_t __pad0781[0x3]; // 0x781
public:
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x784	
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x788	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x78c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x790	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x794	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x818	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x81c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x824	
	float m_flNextResourceTime; // 0x82c	
	int32_t m_iLastUpdateSentAt; // 0x830	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CMapInfo : public CPointEntity
{
public:
	int32_t m_iBuyingStatus; // 0x4c0	
	float m_flBombRadius; // 0x4c4	
	int32_t m_iPetPopulation; // 0x4c8	
	bool m_bUseNormalSpawnsForDM; // 0x4cc	
	bool m_bDisableAutoGeneratedDMSpawns; // 0x4cd	
private:
	[[maybe_unused]] uint8_t __pad04ce[0x2]; // 0x4ce
public:
	float m_flBotMaxVisionDistance; // 0x4d0	
	int32_t m_iHostageCount; // 0x4d4	
	bool m_bFadePlayerVisibilityFarZ; // 0x4d8	
	
	// Datamap fields:
	// int32_t InputFireWinCondition; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7540
// Has VTable
class CCSBot : public CBot
{
public:
	CHandle< SpawnPointCoopEnemy > m_lastCoopSpawnPoint; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f4[0xc]; // 0xf4
public:
	Vector m_eyePosition; // 0x100	
	char m_name[64]; // 0x10c	
	float m_combatRange; // 0x14c	
	bool m_isRogue; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x7]; // 0x151
public:
	CountdownTimer m_rogueTimer; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad0170[0x4]; // 0x170
public:
	bool m_diedLastRound; // 0x174	
private:
	[[maybe_unused]] uint8_t __pad0175[0x3]; // 0x175
public:
	float m_safeTime; // 0x178	
	bool m_wasSafe; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad017d[0x7]; // 0x17d
public:
	bool m_blindFire; // 0x184	
private:
	[[maybe_unused]] uint8_t __pad0185[0x3]; // 0x185
public:
	CountdownTimer m_surpriseTimer; // 0x188	
	bool m_bAllowActive; // 0x1a0	
	bool m_isFollowing; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	CHandle< CCSPlayerPawn > m_leader; // 0x1a4	
	float m_followTimestamp; // 0x1a8	
	float m_allowAutoFollowTime; // 0x1ac	
	CountdownTimer m_hurryTimer; // 0x1b0	
	CountdownTimer m_alertTimer; // 0x1c8	
	CountdownTimer m_sneakTimer; // 0x1e0	
	CountdownTimer m_panicTimer; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad0210[0x2b8]; // 0x210
public:
	float m_stateTimestamp; // 0x4c8	
	bool m_isAttacking; // 0x4cc	
	bool m_isOpeningDoor; // 0x4cd	
private:
	[[maybe_unused]] uint8_t __pad04ce[0x6]; // 0x4ce
public:
	CHandle< CBaseEntity > m_taskEntity; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d8[0xc]; // 0x4d8
public:
	Vector m_goalPosition; // 0x4e4	
	CHandle< CBaseEntity > m_goalEntity; // 0x4f0	
	CHandle< CBaseEntity > m_avoid; // 0x4f4	
	float m_avoidTimestamp; // 0x4f8	
	bool m_isStopping; // 0x4fc	
	bool m_hasVisitedEnemySpawn; // 0x4fd	
private:
	[[maybe_unused]] uint8_t __pad04fe[0x2]; // 0x4fe
public:
	IntervalTimer m_stillTimer; // 0x500	
	bool m_bEyeAnglesUnderPathFinderControl; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x60f7]; // 0x511
public:
	int32_t m_pathIndex; // 0x6608	
	GameTime_t m_areaEnteredTimestamp; // 0x660c	
	CountdownTimer m_repathTimer; // 0x6610	
	CountdownTimer m_avoidFriendTimer; // 0x6628	
	bool m_isFriendInTheWay; // 0x6640	
private:
	[[maybe_unused]] uint8_t __pad6641[0x7]; // 0x6641
public:
	CountdownTimer m_politeTimer; // 0x6648	
	bool m_isWaitingBehindFriend; // 0x6660	
private:
	[[maybe_unused]] uint8_t __pad6661[0x2b]; // 0x6661
public:
	float m_pathLadderEnd; // 0x668c	
private:
	[[maybe_unused]] uint8_t __pad6690[0x48]; // 0x6690
public:
	CountdownTimer m_mustRunTimer; // 0x66d8	
	CountdownTimer m_waitTimer; // 0x66f0	
	CountdownTimer m_updateTravelDistanceTimer; // 0x6708	
	float m_playerTravelDistance[64]; // 0x6720	
	uint8_t m_travelDistancePhase; // 0x6820	
private:
	[[maybe_unused]] uint8_t __pad6821[0x197]; // 0x6821
public:
	uint8_t m_hostageEscortCount; // 0x69b8	
private:
	[[maybe_unused]] uint8_t __pad69b9[0x3]; // 0x69b9
public:
	float m_hostageEscortCountTimestamp; // 0x69bc	
	int32_t m_desiredTeam; // 0x69c0	
	bool m_hasJoined; // 0x69c4	
	bool m_isWaitingForHostage; // 0x69c5	
private:
	[[maybe_unused]] uint8_t __pad69c6[0x2]; // 0x69c6
public:
	CountdownTimer m_inhibitWaitingForHostageTimer; // 0x69c8	
	CountdownTimer m_waitForHostageTimer; // 0x69e0	
	Vector m_noisePosition; // 0x69f8	
	float m_noiseTravelDistance; // 0x6a04	
	float m_noiseTimestamp; // 0x6a08	
private:
	[[maybe_unused]] uint8_t __pad6a0c[0x4]; // 0x6a0c
public:
	CCSPlayerPawn* m_noiseSource; // 0x6a10	
private:
	[[maybe_unused]] uint8_t __pad6a18[0x10]; // 0x6a18
public:
	CountdownTimer m_noiseBendTimer; // 0x6a28	
	Vector m_bentNoisePosition; // 0x6a40	
	bool m_bendNoisePositionValid; // 0x6a4c	
private:
	[[maybe_unused]] uint8_t __pad6a4d[0x3]; // 0x6a4d
public:
	float m_lookAroundStateTimestamp; // 0x6a50	
	float m_lookAheadAngle; // 0x6a54	
	float m_forwardAngle; // 0x6a58	
	float m_inhibitLookAroundTimestamp; // 0x6a5c	
private:
	[[maybe_unused]] uint8_t __pad6a60[0x4]; // 0x6a60
public:
	Vector m_lookAtSpot; // 0x6a64	
private:
	[[maybe_unused]] uint8_t __pad6a70[0x4]; // 0x6a70
public:
	float m_lookAtSpotDuration; // 0x6a74	
	float m_lookAtSpotTimestamp; // 0x6a78	
	float m_lookAtSpotAngleTolerance; // 0x6a7c	
	bool m_lookAtSpotClearIfClose; // 0x6a80	
	bool m_lookAtSpotAttack; // 0x6a81	
private:
	[[maybe_unused]] uint8_t __pad6a82[0x6]; // 0x6a82
public:
	char* m_lookAtDesc; // 0x6a88	
	float m_peripheralTimestamp; // 0x6a90	
private:
	[[maybe_unused]] uint8_t __pad6a94[0x184]; // 0x6a94
public:
	uint8_t m_approachPointCount; // 0x6c18	
private:
	[[maybe_unused]] uint8_t __pad6c19[0x3]; // 0x6c19
public:
	Vector m_approachPointViewPosition; // 0x6c1c	
	IntervalTimer m_viewSteadyTimer; // 0x6c28	
private:
	[[maybe_unused]] uint8_t __pad6c38[0x8]; // 0x6c38
public:
	CountdownTimer m_tossGrenadeTimer; // 0x6c40	
private:
	[[maybe_unused]] uint8_t __pad6c58[0x8]; // 0x6c58
public:
	CountdownTimer m_isAvoidingGrenade; // 0x6c60	
private:
	[[maybe_unused]] uint8_t __pad6c78[0x8]; // 0x6c78
public:
	float m_spotCheckTimestamp; // 0x6c80	
private:
	[[maybe_unused]] uint8_t __pad6c84[0x404]; // 0x6c84
public:
	int32_t m_checkedHidingSpotCount; // 0x7088	
	float m_lookPitch; // 0x708c	
	float m_lookPitchVel; // 0x7090	
	float m_lookYaw; // 0x7094	
	float m_lookYawVel; // 0x7098	
	Vector m_targetSpot; // 0x709c	
	Vector m_targetSpotVelocity; // 0x70a8	
	Vector m_targetSpotPredicted; // 0x70b4	
	QAngle m_aimError; // 0x70c0	
	QAngle m_aimGoal; // 0x70cc	
	GameTime_t m_targetSpotTime; // 0x70d8	
	float m_aimFocus; // 0x70dc	
	float m_aimFocusInterval; // 0x70e0	
	GameTime_t m_aimFocusNextUpdate; // 0x70e4	
private:
	[[maybe_unused]] uint8_t __pad70e8[0x8]; // 0x70e8
public:
	CountdownTimer m_ignoreEnemiesTimer; // 0x70f0	
	CHandle< CCSPlayerPawn > m_enemy; // 0x7108	
	bool m_isEnemyVisible; // 0x710c	
	uint8_t m_visibleEnemyParts; // 0x710d	
private:
	[[maybe_unused]] uint8_t __pad710e[0x2]; // 0x710e
public:
	Vector m_lastEnemyPosition; // 0x7110	
	float m_lastSawEnemyTimestamp; // 0x711c	
	float m_firstSawEnemyTimestamp; // 0x7120	
	float m_currentEnemyAcquireTimestamp; // 0x7124	
	float m_enemyDeathTimestamp; // 0x7128	
	float m_friendDeathTimestamp; // 0x712c	
	bool m_isLastEnemyDead; // 0x7130	
private:
	[[maybe_unused]] uint8_t __pad7131[0x3]; // 0x7131
public:
	int32_t m_nearbyEnemyCount; // 0x7134	
private:
	[[maybe_unused]] uint8_t __pad7138[0x208]; // 0x7138
public:
	CHandle< CCSPlayerPawn > m_bomber; // 0x7340	
	int32_t m_nearbyFriendCount; // 0x7344	
	CHandle< CCSPlayerPawn > m_closestVisibleFriend; // 0x7348	
	CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // 0x734c	
	IntervalTimer m_attentionInterval; // 0x7350	
	CHandle< CCSPlayerPawn > m_attacker; // 0x7360	
	float m_attackedTimestamp; // 0x7364	
	IntervalTimer m_burnedByFlamesTimer; // 0x7368	
	int32_t m_lastVictimID; // 0x7378	
	bool m_isAimingAtEnemy; // 0x737c	
	bool m_isRapidFiring; // 0x737d	
private:
	[[maybe_unused]] uint8_t __pad737e[0x2]; // 0x737e
public:
	IntervalTimer m_equipTimer; // 0x7380	
	CountdownTimer m_zoomTimer; // 0x7390	
	GameTime_t m_fireWeaponTimestamp; // 0x73a8	
private:
	[[maybe_unused]] uint8_t __pad73ac[0x4]; // 0x73ac
public:
	CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x73b0	
	bool m_bIsSleeping; // 0x73c8	
	bool m_isEnemySniperVisible; // 0x73c9	
private:
	[[maybe_unused]] uint8_t __pad73ca[0x6]; // 0x73ca
public:
	CountdownTimer m_sawEnemySniperTimer; // 0x73d0	
private:
	[[maybe_unused]] uint8_t __pad73e8[0xa0]; // 0x73e8
public:
	uint8_t m_enemyQueueIndex; // 0x7488	
	uint8_t m_enemyQueueCount; // 0x7489	
	uint8_t m_enemyQueueAttendIndex; // 0x748a	
	bool m_isStuck; // 0x748b	
	GameTime_t m_stuckTimestamp; // 0x748c	
	Vector m_stuckSpot; // 0x7490	
private:
	[[maybe_unused]] uint8_t __pad749c[0x4]; // 0x749c
public:
	CountdownTimer m_wiggleTimer; // 0x74a0	
	CountdownTimer m_stuckJumpTimer; // 0x74b8	
	GameTime_t m_nextCleanupCheckTimestamp; // 0x74d0	
	float m_avgVel[10]; // 0x74d4	
	int32_t m_avgVelIndex; // 0x74fc	
	int32_t m_avgVelCount; // 0x7500	
	Vector m_lastOrigin; // 0x7504	
private:
	[[maybe_unused]] uint8_t __pad7510[0x4]; // 0x7510
public:
	float m_lastRadioRecievedTimestamp; // 0x7514	
	float m_lastRadioSentTimestamp; // 0x7518	
	CHandle< CCSPlayerPawn > m_radioSubject; // 0x751c	
	Vector m_radioPosition; // 0x7520	
	float m_voiceEndTimestamp; // 0x752c	
private:
	[[maybe_unused]] uint8_t __pad7530[0x8]; // 0x7530
public:
	int32_t m_lastValidReactionQueueFrame; // 0x7538	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x738
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x710	
	CUtlSymbolLarge m_postProcessName; // 0x718	
	CUtlSymbolLarge m_colorCorrectionName; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0728[0x8]; // 0x728
public:
	bool m_bDisabled; // 0x730	
	bool m_bInFogVolumesList; // 0x731	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x728
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x72c
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInfoDynamicShadowHint : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flRange; // 0x4c4	
	int32_t m_nImportance; // 0x4c8	
	int32_t m_nLightChoice; // 0x4cc	
	CHandle< CBaseEntity > m_hLight; // 0x4d0	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x4d8	
	Vector m_vBoxMaxs; // 0x4e4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x770
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "Color m_vTintColorLightingOnly"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class CEnvSky : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x710	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x718	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x720	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x721	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0x725	
private:
	[[maybe_unused]] uint8_t __pad0729[0x3]; // 0x729
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0x72c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x730	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x734	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x738	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x73c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x740	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x744	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CTonemapTrigger : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_tonemapControllerName; // 0x8b8	
	CEntityHandle m_hTonemapController; // 0x8c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x8b8	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x8cc
	// Color m_fog.colorSecondary; // 0x8d0
	// Vector m_fog.dirPrimary; // 0x8c0
	// bool m_fog.enable; // 0x91c
	// bool m_fog.blend; // 0x91d
	// float m_fog.start; // 0x8dc
	// float m_fog.end; // 0x8e0
	// float m_fog.farz; // 0x8e4
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
class CLightEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CLightSpotEntity : public CLightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CLightOrthoEntity : public CLightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CLightDirectionalEntity : public CLightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CLightEnvironmentEntity : public CLightDirectionalEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x908
// Has VTable
// 
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
// MNetworkVarNames "float m_flRate"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08b8[0x10]; // 0x8b8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x8c8	
	// MNetworkEnable
	float m_flFadeDuration; // 0x8d0	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x8d4	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x8d8	
	// MNetworkEnable
	float m_flMinExposure; // 0x8dc	
	// MNetworkEnable
	float m_flMaxExposure; // 0x8e0	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x8e4	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x8e8	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x8ec	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x8f0	
	// MNetworkEnable
	bool m_bMaster; // 0x8f4	
	// MNetworkEnable
	bool m_bExposureControl; // 0x8f5	
private:
	[[maybe_unused]] uint8_t __pad08f6[0x2]; // 0x8f6
public:
	// MNetworkEnable
	float m_flRate; // 0x8f8	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x8fc	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x900	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x904	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class CEnvParticleGlow : public CParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xc88	
	// MNetworkEnable
	float m_flRadiusScale; // 0xc8c	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xc90	
	// MNetworkEnable
	Color m_ColorTint; // 0xc94	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xc98	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MNetworkVarNames "bool m_bLoop"
// MNetworkVarNames "float m_flFPS"
// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
// MNetworkVarNames "Vector m_vAnimationBoundsMin"
// MNetworkVarNames "Vector m_vAnimationBoundsMax"
// MNetworkVarNames "float m_flStartTime"
// MNetworkVarNames "float m_flStartFrame"
class CTextureBasedAnimatable : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	// MNetworkEnable
	float m_flFPS; // 0x714	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x718	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x720	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x728	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x734	
	// MNetworkEnable
	float m_flStartTime; // 0x740	
	// MNetworkEnable
	float m_flStartFrame; // 0x744	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CWorld : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
// MNetworkVarNames "bool m_bClientRagdoll"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x78]; // 0x710
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x7]; // 0x789
public:
	IChoreoServices* m_pChoreoServices; // 0x790	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	float m_flMaxSlopeDistance; // 0x79c	
	Vector m_vLastSlopeCheckPos; // 0x7a0	
	bool m_bAnimationUpdateScheduled; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x7b0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x10]; // 0x7c0
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0x7d0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; // 0x7d8	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x780
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	int32_t m_iShapeType; // 0x8ec	
	bool m_bConformToCollisionBounds; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x3]; // 0x8f1
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x8f4	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0928[0x10]; // 0x928
public:
	CEntityIOOutput m_OnBreak; // 0x938	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x960	
	CEntityIOOutput m_OnTakeDamage; // 0x988	
	float m_impactEnergyScale; // 0x9b0	
	int32_t m_iMinHealthDmg; // 0x9b4	
	QAngle m_preferredCarryAngles; // 0x9b8	
	float m_flPressureDelay; // 0x9c4	
	CHandle< CBaseEntity > m_hBreaker; // 0x9c8	
	PerformanceMode_t m_PerformanceMode; // 0x9cc	
	float m_flDmgModBullet; // 0x9d0	
	float m_flDmgModClub; // 0x9d4	
	float m_flDmgModExplosive; // 0x9d8	
	float m_flDmgModFire; // 0x9dc	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x9e0	
	CUtlSymbolLarge m_iszBasePropData; // 0x9e8	
	int32_t m_iInteractions; // 0x9f0	
	GameTime_t m_flPreventDamageBeforeTime; // 0x9f4	
	bool m_bHasBreakPiecesOrCommands; // 0x9f8	
private:
	[[maybe_unused]] uint8_t __pad09f9[0x3]; // 0x9f9
public:
	float m_explodeDamage; // 0x9fc	
	float m_explodeRadius; // 0xa00	
private:
	[[maybe_unused]] uint8_t __pad0a04[0x4]; // 0xa04
public:
	float m_explosionDelay; // 0xa08	
private:
	[[maybe_unused]] uint8_t __pad0a0c[0x4]; // 0xa0c
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xa10	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xa18	
	CUtlSymbolLarge m_explosionCustomSound; // 0xa20	
	CUtlSymbolLarge m_explosionModifier; // 0xa28	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xa30	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xa34	
	bool m_bOriginalBlockLOS; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a39[0x3]; // 0xa39
public:
	float m_flDefaultFadeScale; // 0xa3c	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xa40	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xa44	
	bool m_bUsePuntSound; // 0xa48	
private:
	[[maybe_unused]] uint8_t __pad0a49[0x7]; // 0xa49
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xa50	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xa58	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// bool InputSetNavIgnore; // 0x0
	// void InputEnablePuntSound; // 0x0
	// void InputDisablePuntSound; // 0x0
	// void CBreakablePropBreakThink; // 0x0
	// void CBreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xa04
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0a60[0x8]; // 0xa60
public:
	bool m_bCreateNavObstacle; // 0xa68	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xa69	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xa6a	
private:
	[[maybe_unused]] uint8_t __pad0a6b[0x5]; // 0xa6b
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xa70	
	CEntityIOOutput m_pOutputAnimOver; // 0xa98	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xac0	
	CEntityIOOutput m_OnAnimReachedStart; // 0xae8	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xb10	
	CUtlSymbolLarge m_iszIdleAnim; // 0xb38	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xb40	
	bool m_bRandomizeCycle; // 0xb44	
	bool m_bStartDisabled; // 0xb45	
	bool m_bFiredStartEndOutput; // 0xb46	
	bool m_bForceNpcExclude; // 0xb47	
	bool m_bCreateNonSolid; // 0xb48	
	bool m_bIsOverrideProp; // 0xb49	
private:
	[[maybe_unused]] uint8_t __pad0b4a[0x2]; // 0xb4a
public:
	int32_t m_iInitialGlowState; // 0xb4c	
	int32_t m_nGlowRange; // 0xb50	
	int32_t m_nGlowRangeMin; // 0xb54	
	Color m_glowColor; // 0xb58	
	int32_t m_nGlowTeam; // 0xb5c	
	
	// Datamap fields:
	// CUtlSymbolLarge StartingAnim; // 0x7fffffff
	// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
	// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void CDynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CDynamicPropAlias_dynamic_prop : public CDynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CDynamicPropAlias_cable_dynamic : public CDynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae0
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float32 m_MaxWeight"
// MNetworkVarNames "float32 m_FadeDuration"
// MNetworkVarNames "float32 m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class CColorCorrectionVolume : public CBaseTrigger
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08b9[0x3]; // 0x8b9
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x8bc	
	// MNetworkEnable
	float m_FadeDuration; // 0x8c0	
	bool m_bStartDisabled; // 0x8c4	
private:
	[[maybe_unused]] uint8_t __pad08c5[0x3]; // 0x8c5
public:
	// MNetworkEnable
	float m_Weight; // 0x8c8	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x8cc	
	float m_LastEnterWeight; // 0xacc	
	GameTime_t m_LastEnterTime; // 0xad0	
	float m_LastExitWeight; // 0xad4	
	GameTime_t m_LastExitTime; // 0xad8	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
// 
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
class CPointCommentaryNode : public CBaseAnimGraph
{
public:
	CUtlSymbolLarge m_iszPreCommands; // 0x8e8	
	CUtlSymbolLarge m_iszPostCommands; // 0x8f0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x8f8	
	CUtlSymbolLarge m_iszViewTarget; // 0x900	
	CHandle< CBaseEntity > m_hViewTarget; // 0x908	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x90c	
	CUtlSymbolLarge m_iszViewPosition; // 0x910	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x918	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x91c	
	bool m_bPreventMovement; // 0x920	
	bool m_bUnderCrosshair; // 0x921	
	bool m_bUnstoppable; // 0x922	
private:
	[[maybe_unused]] uint8_t __pad0923[0x1]; // 0x923
public:
	GameTime_t m_flFinishedTime; // 0x924	
	Vector m_vecFinishOrigin; // 0x928	
	QAngle m_vecOriginalAngles; // 0x934	
	QAngle m_vecFinishAngles; // 0x940	
	bool m_bPreventChangesWhileMoving; // 0x94c	
	bool m_bDisabled; // 0x94d	
private:
	[[maybe_unused]] uint8_t __pad094e[0x2]; // 0x94e
public:
	Vector m_vecTeleportOrigin; // 0x950	
	GameTime_t m_flAbortedPlaybackAt; // 0x95c	
	CEntityIOOutput m_pOnCommentaryStarted; // 0x960	
	CEntityIOOutput m_pOnCommentaryStopped; // 0x988	
	// MNetworkEnable
	bool m_bActive; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x9b4	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09bc[0x4]; // 0x9bc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0x9c0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0x9c8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0x9d0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0x9d4	
	// MNetworkEnable
	bool m_bListenedTo; // 0x9d8	
	
	// Datamap fields:
	// void InputStartCommentary; // 0x0
	// void InputStartUnstoppableCommentary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CPointCommentaryNodeSpinThink; // 0x0
	// void CPointCommentaryNodeUpdateViewThink; // 0x0
	// void CPointCommentaryNodeUpdateViewPostThink; // 0x0
	// void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CCommentaryViewPosition : public CSprite
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CRotDoor : public CBaseDoor
{
public:
	bool m_bSolidBsp; // 0x998	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CItemSoda : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CPrecipitation : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7b8	
	CUtlSymbolLarge m_iszStartEntity; // 0x7c0	
	CUtlSymbolLarge m_iszEndEntity; // 0x7c8	
	float m_life; // 0x7d0	
	float m_boltWidth; // 0x7d4	
	float m_noiseAmplitude; // 0x7d8	
	int32_t m_speed; // 0x7dc	
	float m_restrike; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x7e8	
	int32_t m_frameStart; // 0x7f0	
	Vector m_vEndPointWorld; // 0x7f4	
	Vector m_vEndPointRelative; // 0x800	
	float m_radius; // 0x80c	
	Touch_t m_TouchType; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlSymbolLarge m_iFilterName; // 0x818	
	CHandle< CBaseEntity > m_hFilter; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszDecal; // 0x828	
	CEntityIOOutput m_OnTouchedByEntity; // 0x830	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x794
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CPushable : public CBreakable
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CFuncLadderAlias_func_useableladder : public CFuncLadder
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MNetworkVarNames "CUtlString m_targetCamera"
// MNetworkVarNames "int m_nResolutionEnum"
// MNetworkVarNames "bool m_bRenderShadows"
// MNetworkVarNames "bool m_bUseUniqueColorTarget"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "EHANDLE m_hTargetCamera"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bDraw3DSkybox"
class CFuncMonitor : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x730	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x738	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x73c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x73d	
private:
	[[maybe_unused]] uint8_t __pad073e[0x2]; // 0x73e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x740	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x748	
	// MNetworkEnable
	bool m_bEnabled; // 0x74c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x74d	
	bool m_bStartEnabled; // 0x74e	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetCamera; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CGunTarget : public CBaseToggle
{
public:
	bool m_on; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x794	
	CEntityIOOutput m_OnDeath; // 0x798	
	
	// Datamap fields:
	// void CGunTargetNext; // 0x0
	// void CGunTargetStart; // 0x0
	// void CGunTargetWait; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strStartTouchEventName"
// MNetworkVarNames "CUtlString m_strEndTouchEventName"
// MNetworkVarNames "CUtlString m_strTriggerID"
class CTriggerGameEvent : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlString m_strStartTouchEventName; // 0x8b8	
	// MNetworkEnable
	CUtlString m_strEndTouchEventName; // 0x8c0	
	// MNetworkEnable
	CUtlString m_strTriggerID; // 0x8c8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
	// CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
class CRuleBrushEntity : public CRuleEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CGameEnd : public CRulePointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
class CGameText : public CRulePointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x720	
	// -> color1 - 0x728
	// -> color2 - 0x72c
	// -> effect - 0x730
	// -> channel - 0x731
	// -> x - 0x734
	// -> y - 0x738
	hudtextparms_t m_textParms; // 0x728	
	
	// Datamap fields:
	// void InputDisplay; // 0x0
	// CUtlSymbolLarge InputSetText; // 0x0
	// Color color; // 0x7fffffff
	// Color color2; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b8
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x718	
	CEntityIOOutput m_OnPlayerOutZone; // 0x740	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x768	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x790	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
class CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x770
// Has VTable
class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef
{
public:
	bool m_bFloodFillAttribute; // 0x768	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
class CFuncElectrifiedVolume : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x730	
	CUtlSymbolLarge m_EffectInterpenetrateName; // 0x738	
	CUtlSymbolLarge m_EffectZapName; // 0x740	
	CUtlSymbolLarge m_iszEffectSource; // 0x748	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CPathCornerCrash : public CPathCorner
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
class CConstraintAnchor : public CBaseAnimGraph
{
public:
	float m_massScale; // 0x8e8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb68
// Has VTable
class COrnamentProp : public CDynamicProp
{
public:
	CUtlSymbolLarge m_initialOwner; // 0xb60	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetAttached; // 0x0
	// void InputDetach; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
class CRopeKeyframeAlias_move_rope : public CRopeKeyframe
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa30
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa18	
	bool m_bHadOwner; // 0xa1c	
private:
	[[maybe_unused]] uint8_t __pad0a1d[0x3]; // 0xa1d
public:
	float m_flPostSpeakDelay; // 0xa20	
	float m_flPreDelay; // 0xa24	
	bool m_bIsBackground; // 0xa28	
	bool m_bRemoveOnCompletion; // 0xa29	
private:
	[[maybe_unused]] uint8_t __pad0a2a[0x2]; // 0xa2a
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa2c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08bc[0x4]; // 0x8bc
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x8c0	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x8c8	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CSpriteAlias_env_glow : public CSprite
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x888
// Has VTable
class CFuncTankTrain : public CFuncTrackTrain
{
public:
	CEntityIOOutput m_OnDeath; // 0x860	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b8
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x790	
	CUtlSymbolLarge m_NoiseArrived; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad07a0[0x8]; // 0x7a0
public:
	float m_volume; // 0x7a8	
	float m_flTWidth; // 0x7ac	
	float m_flTLength; // 0x7b0	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x7a0
	// float rotation; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CFuncPlat : public CBasePlatTrain
{
public:
	CUtlSymbolLarge m_sNoise; // 0x7b8	
	
	// Datamap fields:
	// void CFuncPlatPlatUse; // 0x0
	// void CFuncPlatCallGoDown; // 0x0
	// void CFuncPlatCallHitTop; // 0x0
	// void CFuncPlatCallHitBottom; // 0x0
	// void InputToggle; // 0x0
	// void InputGoUp; // 0x0
	// void InputGoDown; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFuncPlatRot : public CFuncPlat
{
public:
	QAngle m_end; // 0x7c0	
	QAngle m_start; // 0x7cc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x7b8	
	bool m_activated; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07bd[0x3]; // 0x7bd
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x7c0	
	float m_flBlockDamage; // 0x7c4	
	GameTime_t m_flNextBlockTime; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x7d0	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x7d8	
	CPathTrack* m_trackBottom; // 0x7e0	
	CFuncTrackTrain* m_train; // 0x7e8	
	CUtlSymbolLarge m_trackTopName; // 0x7f0	
	CUtlSymbolLarge m_trackBottomName; // 0x7f8	
	CUtlSymbolLarge m_trainName; // 0x800	
	TRAIN_CODE m_code; // 0x808	
	int32_t m_targetState; // 0x80c	
	int32_t m_use; // 0x810	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CFuncTrackAuto : public CFuncTrackChange
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CTriggerRemove : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnRemove; // 0x8b8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
class CScriptTriggerHurt : public CTriggerHurt
{
public:
	Vector m_vExtent; // 0x958	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
class CScriptTriggerMultiple : public CTriggerMultiple
{
public:
	Vector m_vExtent; // 0x8e0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
class CTriggerOnce : public CTriggerMultiple
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
class CScriptTriggerOnce : public CTriggerOnce
{
public:
	Vector m_vExtent; // 0x8e0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x8e0	
	float m_flFieldOfView; // 0x8e4	
	float m_flLookTime; // 0x8e8	
	float m_flLookTimeTotal; // 0x8ec	
	GameTime_t m_flLookTimeLast; // 0x8f0	
	float m_flTimeoutDuration; // 0x8f4	
	bool m_bTimeoutFired; // 0x8f8	
	bool m_bIsLooking; // 0x8f9	
	bool m_b2DFOV; // 0x8fa	
	bool m_bUseVelocity; // 0x8fb	
	CHandle< CBaseEntity > m_hActivator; // 0x8fc	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0901[0x7]; // 0x901
public:
	CEntityIOOutput m_OnTimeout; // 0x908	
	CEntityIOOutput m_OnStartLook; // 0x930	
	CEntityIOOutput m_OnEndLook; // 0x958	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x8b8	
	Vector m_vecPushDirEntitySpace; // 0x8c4	
	bool m_bTriggerOnStartTouch; // 0x8d0	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CScriptTriggerPush : public CTriggerPush
{
public:
	Vector m_vExtent; // 0x8d8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
// Has VTable
class CTriggerToggleSave : public CBaseTrigger
{
public:
	bool m_bDisabled; // 0x8b8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08b9[0x3]; // 0x8b9
public:
	float m_fDangerousTimer; // 0x8bc	
	int32_t m_minHitPoints; // 0x8c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CTriggerGravity : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08bc[0x4]; // 0x8bc
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x8c0	
	float m_fRadius; // 0x8c8	
	int32_t m_nTouchers; // 0x8cc	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8d0	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x8e0	
	float m_flNoise; // 0x8e4	
	float m_flViewkick; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x8f0	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CServerRagdollTrigger : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x8b8	
	CUtlSymbolLarge m_iszWeaponClassName; // 0x8e0	
	
	// Datamap fields:
	// void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MNetworkVarNames "float m_gravityScale"
// MNetworkVarNames "float m_linearLimit"
// MNetworkVarNames "float m_linearDamping"
// MNetworkVarNames "float m_angularLimit"
// MNetworkVarNames "float m_angularDamping"
// MNetworkVarNames "float m_linearForce"
// MNetworkVarNames "float m_flFrequency"
// MNetworkVarNames "float m_flDampingRatio"
// MNetworkVarNames "Vector m_vecLinearForcePointAt"
// MNetworkVarNames "bool m_bCollapseToForcePoint"
// MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
// MNetworkVarNames "Vector m_vecLinearForceDirection"
// MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
class CTriggerPhysics : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08b8[0x10]; // 0x8b8
public:
	// MNetworkEnable
	float m_gravityScale; // 0x8c8	
	// MNetworkEnable
	float m_linearLimit; // 0x8cc	
	// MNetworkEnable
	float m_linearDamping; // 0x8d0	
	// MNetworkEnable
	float m_angularLimit; // 0x8d4	
	// MNetworkEnable
	float m_angularDamping; // 0x8d8	
	// MNetworkEnable
	float m_linearForce; // 0x8dc	
	// MNetworkEnable
	float m_flFrequency; // 0x8e0	
	// MNetworkEnable
	float m_flDampingRatio; // 0x8e4	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0x8e8	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0x8f4	
private:
	[[maybe_unused]] uint8_t __pad08f5[0x3]; // 0x8f5
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0x8f8	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0x904	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0x910	
	
	// Datamap fields:
	// void m_pController; // 0x8c0
	// CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08b9[0x7]; // 0x8b9
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x8c0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08b8[0x38]; // 0x8b8
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x8f0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
class CScriptNavBlocker : public CFuncNavBlocker
{
public:
	Vector m_vExtent; // 0x720	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "Vector m_vLookTargetPosition"
// MNetworkVarNames "bool m_blinktoggle"
class CBaseFlex : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x8e8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0x900	
	// MNetworkEnable
	bool m_blinktoggle; // 0x90c	
private:
	[[maybe_unused]] uint8_t __pad090d[0x53]; // 0x90d
public:
	GameTime_t m_flAllowResponsesEndTime; // 0x960	
	GameTime_t m_flLastFlexAnimationTime; // 0x964	
	uint32_t m_nNextSceneEventId; // 0x968	
	bool m_bUpdateLayerPriorities; // 0x96c	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// Is Abstract
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
class CBasePropDoor : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b60[0x10]; // 0xb60
public:
	float m_flAutoReturnDelay; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xb78	
	int32_t m_nHardwareType; // 0xb90	
	bool m_bNeedsHardware; // 0xb94	
private:
	[[maybe_unused]] uint8_t __pad0b95[0x3]; // 0xb95
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xb98	
	// MNetworkEnable
	bool m_bLocked; // 0xb9c	
private:
	[[maybe_unused]] uint8_t __pad0b9d[0x3]; // 0xb9d
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xba0	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xbac	
	CHandle< CBaseEntity > m_hBlocker; // 0xbb8	
	bool m_bFirstBlocked; // 0xbbc	
private:
	[[maybe_unused]] uint8_t __pad0bbd[0x3]; // 0xbbd
public:
	locksound_t m_ls; // 0xbc0	
	bool m_bForceClosed; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be1[0x3]; // 0xbe1
public:
	Vector m_vecLatchWorldPosition; // 0xbe4	
	CHandle< CBaseEntity > m_hActivator; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0xc]; // 0xbf4
public:
	CUtlSymbolLarge m_SoundMoving; // 0xc00	
	CUtlSymbolLarge m_SoundOpen; // 0xc08	
	CUtlSymbolLarge m_SoundClose; // 0xc10	
	CUtlSymbolLarge m_SoundLock; // 0xc18	
	CUtlSymbolLarge m_SoundUnlock; // 0xc20	
	CUtlSymbolLarge m_SoundLatch; // 0xc28	
	CUtlSymbolLarge m_SoundPound; // 0xc30	
	CUtlSymbolLarge m_SoundJiggle; // 0xc38	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xc40	
	int32_t m_numCloseAttempts; // 0xc48	
	CUtlStringToken m_nPhysicsMaterial; // 0xc4c	
	CUtlSymbolLarge m_SlaveName; // 0xc50	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c5c[0x4]; // 0xc5c
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xc60	
	CEntityIOOutput m_OnBlockedOpening; // 0xc88	
	CEntityIOOutput m_OnUnblockedClosing; // 0xcb0	
	CEntityIOOutput m_OnUnblockedOpening; // 0xcd8	
	CEntityIOOutput m_OnFullyClosed; // 0xd00	
	CEntityIOOutput m_OnFullyOpen; // 0xd28	
	CEntityIOOutput m_OnClose; // 0xd50	
	CEntityIOOutput m_OnOpen; // 0xd78	
	CEntityIOOutput m_OnLockedUse; // 0xda0	
	CEntityIOOutput m_OnAjarOpen; // 0xdc8	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xbf4
	//  m_ls.sLockedSound; // 0xbc8
	//  m_ls.sUnlockedSound; // 0xbd0
	// void InputOpen; // 0x0
	// CUtlSymbolLarge InputOpenAwayFrom; // 0x0
	// float InputOpenAwayFromActivator; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPlayerOpen; // 0x0
	// void InputPlayerClose; // 0x0
	// void CBasePropDoorDoorOpenMoveDone; // 0x0
	// void CBasePropDoorDoorCloseMoveDone; // 0x0
	// void CBasePropDoorDoorAutoCloseThink; // 0x0
	// void CBasePropDoorDisableAreaPortalThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CEnvLaser : public CBeam
{
public:
	CUtlSymbolLarge m_iszLaserTarget; // 0x7b0	
	CSprite* m_pSprite; // 0x7b8	
	CUtlSymbolLarge m_iszSpriteName; // 0x7c0	
	Vector m_firePosition; // 0x7c8	
	float m_flStartFrame; // 0x7d4	
	
	// Datamap fields:
	// void CEnvLaserStrikeThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// float width; // 0x7fffffff
	// int32_t NoiseAmplitude; // 0x7fffffff
	// int32_t TextureScroll; // 0x7fffffff
	// CUtlString texture; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
class CFish : public CBaseAnimGraph
{
public:
	CHandle< CFishPool > m_pool; // 0x8e8	
	uint32_t m_id; // 0x8ec	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x8f0	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x8f4	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x8f8	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0x8fc	
	float m_angleChange; // 0x900	
	Vector m_forward; // 0x904	
	Vector m_perp; // 0x910	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0x91c	
	// MNetworkEnable
	float m_waterLevel; // 0x928	
	float m_speed; // 0x92c	
	float m_desiredSpeed; // 0x930	
	float m_calmSpeed; // 0x934	
	float m_panicSpeed; // 0x938	
	float m_avoidRange; // 0x93c	
	CountdownTimer m_turnTimer; // 0x940	
	bool m_turnClockwise; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x7]; // 0x959
public:
	CountdownTimer m_goTimer; // 0x960	
	CountdownTimer m_moveTimer; // 0x978	
	CountdownTimer m_panicTimer; // 0x990	
	CountdownTimer m_disperseTimer; // 0x9a8	
	CountdownTimer m_proximityTimer; // 0x9c0	
	CUtlVector< CFish* > m_visible; // 0x9d8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x8f0	
	bool m_bActivateWhenAtRest; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x7]; // 0x919
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x920	
	CEntityIOOutput m_OnPlayerPickup; // 0x948	
	CEntityIOOutput m_OnGlovePulled; // 0x970	
	Vector m_vOriginalSpawnOrigin; // 0x998	
	QAngle m_vOriginalSpawnAngles; // 0x9a4	
	bool m_bPhysStartAsleep; // 0x9b0	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	// -> list - 0x8f0
	// -> boneIndex - 0x908
	// -> allowStretch - 0x920
	// -> unused - 0x921
	ragdoll_t m_ragdoll; // 0x8f0	
	bool m_bStartDisabled; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad0929[0x7]; // 0x929
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x930	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x948	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0x960	
	uint32_t m_lastUpdateTickCount; // 0x964	
	bool m_allAsleep; // 0x968	
	bool m_bFirstCollisionAfterLaunch; // 0x969	
private:
	[[maybe_unused]] uint8_t __pad096a[0x2]; // 0x96a
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0x96c	
	CHandle< CBaseEntity > m_hKiller; // 0x970	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x974	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x978	
	GameTime_t m_flFadeOutStartTime; // 0x97c	
	float m_flFadeTime; // 0x980	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0x984	
	GameTime_t m_flAwakeTime; // 0x990	
	GameTime_t m_flLastOriginChangeTime; // 0x994	
	int32_t m_nBloodColor; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad099c[0x4]; // 0x99c
public:
	CUtlSymbolLarge m_strOriginClassName; // 0x9a0	
	CUtlSymbolLarge m_strSourceClassName; // 0x9a8	
	bool m_bHasBeenPhysgunned; // 0x9b0	
	bool m_bShouldTeleportPhysics; // 0x9b1	
private:
	[[maybe_unused]] uint8_t __pad09b2[0x2]; // 0x9b2
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0x9b4	
	float m_flDefaultFadeScale; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09bc[0x4]; // 0x9bc
public:
	CUtlVector< Vector > m_ragdollMins; // 0x9c0	
	CUtlVector< Vector > m_ragdollMaxs; // 0x9d8	
	bool m_bShouldDeleteActivationRecord; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x5f]; // 0x9f1
public:
	bool m_bValidatePoweredRagdollPose; // 0xa50	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0x908
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputFadeAndRemove; // 0x0
	// void CRagdollPropSetDebrisThink; // 0x0
	// void CRagdollPropClearFlagsThink; // 0x0
	// void CRagdollPropFadeOutThink; // 0x0
	// void CRagdollPropSettleThink; // 0x0
	// void CRagdollPropAttachedItemsThink; // 0x0
	// void CRagdollPropRagdollTouch; // 0x0
	// void m_ragdoll.list; // 0x8f0
	// bool m_ragdoll.allowStretch; // 0x920
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x8e8	
	CEntityIOOutput m_OnMagnetDetach; // 0x910	
	float m_massScale; // 0x938	
	float m_forceLimit; // 0x93c	
	float m_torqueLimit; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0944[0x4]; // 0x944
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x948	
	bool m_bActive; // 0x960	
	bool m_bHasHitSomething; // 0x961	
private:
	[[maybe_unused]] uint8_t __pad0962[0x2]; // 0x962
public:
	float m_flTotalMass; // 0x964	
	float m_flRadius; // 0x968	
	GameTime_t m_flNextSuckTime; // 0x96c	
	int32_t m_iMaxObjectsAttached; // 0x970	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class CPhysicsProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0a60[0x8]; // 0xa60
public:
	CEntityIOOutput m_MotionEnabled; // 0xa68	
	CEntityIOOutput m_OnAwakened; // 0xa90	
	CEntityIOOutput m_OnAwake; // 0xab8	
	CEntityIOOutput m_OnAsleep; // 0xae0	
	CEntityIOOutput m_OnPlayerUse; // 0xb08	
	CEntityIOOutput m_OnPlayerPickup; // 0xb30	
	CEntityIOOutput m_OnOutOfWorld; // 0xb58	
	float m_massScale; // 0xb80	
	float m_inertiaScale; // 0xb84	
	float m_buoyancyScale; // 0xb88	
	int32_t m_damageType; // 0xb8c	
	int32_t m_damageToEnableMotion; // 0xb90	
	float m_flForceToEnableMotion; // 0xb94	
	bool m_bThrownByPlayer; // 0xb98	
	bool m_bDroppedByPlayer; // 0xb99	
	bool m_bTouchedByPlayer; // 0xb9a	
	bool m_bFirstCollisionAfterLaunch; // 0xb9b	
	int32_t m_iExploitableByPlayer; // 0xb9c	
	bool m_bHasBeenAwakened; // 0xba0	
	bool m_bIsOverrideProp; // 0xba1	
private:
	[[maybe_unused]] uint8_t __pad0ba2[0x2]; // 0xba2
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xba4	
	int32_t m_iInitialGlowState; // 0xba8	
	int32_t m_nGlowRange; // 0xbac	
	int32_t m_nGlowRangeMin; // 0xbb0	
	Color m_glowColor; // 0xbb4	
	bool m_bForceNavIgnore; // 0xbb8	
	bool m_bNoNavmeshBlocker; // 0xbb9	
	bool m_bForceNpcExclude; // 0xbba	
	bool m_bShouldAutoConvertBackFromDebris; // 0xbbb	
	bool m_bMuteImpactEffects; // 0xbbc	
private:
	[[maybe_unused]] uint8_t __pad0bbd[0x7]; // 0xbbd
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xbc4	
	bool m_bEnableUseOutput; // 0xbc5	
	// MNetworkEnable
	bool m_bAwake; // 0xbc6	
private:
	[[maybe_unused]] uint8_t __pad0bc7[0x1]; // 0xbc7
public:
	int32_t m_nCollisionGroupOverride; // 0xbc8	
	
	// Datamap fields:
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputWake; // 0x0
	// bool InputSetAutoConvertBackFromDebris; // 0x0
	// void InputSleep; // 0x0
	// void InputDisableFloating; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// float InputSetMass; // 0x0
	// void InputEnableGravity; // 0x0
	// void InputDisableGravity; // 0x0
	// void InputEnableDrag; // 0x0
	// void InputDisableDrag; // 0x0
	// void InputEnableCollisions; // 0x0
	// void InputDisableCollisions; // 0x0
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// void CPhysicsPropClearFlagsThink; // 0x0
	// int32_t m_nNavObstacleType; // 0xbc0
	// int32_t health; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
class CPhysicsPropOverride : public CPhysicsProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xbd0	
	QAngle m_vOriginalSpawnAngles; // 0xbdc	
	Vector m_vOriginalMins; // 0xbe8	
	Vector m_vOriginalMaxs; // 0xbf4	
	float m_flRespawnDuration; // 0xc00	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CWaterBullet : public CBaseAnimGraph
{
public:
	// Datamap fields:
	// Vector bullet_direction; // 0x7fffffff
	// void CWaterBulletBulletThink; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0bd1[0x3]; // 0xbd1
public:
	uint32_t m_hParentShard; // 0xbd4	
	// MNetworkEnable
	// -> m_nModelID - 0xbe0
	// -> m_hMaterial - 0xbe8
	// -> m_solid - 0xbf0
	// -> m_ShatterPanelMode - 0xbf1
	// -> m_vecPanelSize - 0xbf4
	// -> m_vecStressPositionA - 0xbfc
	// -> m_vecStressPositionB - 0xc04
	// -> m_vecPanelVertices - 0xc10
	// -> m_flGlassHalfThickness - 0xc28
	// -> m_bHasParent - 0xc2c
	// -> m_bParentFrozen - 0xc2d
	// -> m_SurfacePropStringToken - 0xc30
	shard_model_desc_t m_ShardDesc; // 0xbd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
// MNetworkVarNames "int m_nFallbackPaintKit"
// MNetworkVarNames "int m_nFallbackSeed"
// MNetworkVarNames "float m_flFallbackWear"
// MNetworkVarNames "int m_nFallbackStatTrak"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x10]; // 0x978
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x988	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xc50	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xc54	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0xc58	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0xc5c	
	// MNetworkEnable
	float m_flFallbackWear; // 0xc60	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0xc64	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc68	
	int32_t m_iOldOwnerClass; // 0xc6c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CEconWearable : public CEconEntity
{
public:
	int32_t m_nForceSkin; // 0xc70	
	bool m_bAlwaysAllow; // 0xc74	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByName "m_nNewSequenceParity"
// MNetworkVarNames "bool m_bIsLive"
// MNetworkVarNames "float32 m_DmgRadius"
// MNetworkVarNames "GameTime_t m_flDetonateTime"
// MNetworkVarNames "float32 m_flDamage"
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
class CBaseGrenade : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x8]; // 0x978
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x980	
	CEntityIOOutput m_OnExplode; // 0x9a8	
	bool m_bHasWarnedAI; // 0x9d0	
	bool m_bIsSmokeGrenade; // 0x9d1	
	// MNetworkEnable
	bool m_bIsLive; // 0x9d2	
private:
	[[maybe_unused]] uint8_t __pad09d3[0x1]; // 0x9d3
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0x9d4	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x9d8	
	float m_flWarnAITime; // 0x9dc	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0x9e0	
private:
	[[maybe_unused]] uint8_t __pad09e4[0x4]; // 0x9e4
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x9e8	
	CUtlString m_ExplosionSound; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f8[0x4]; // 0x9f8
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hThrower; // 0x9fc	
private:
	[[maybe_unused]] uint8_t __pad0a00[0x14]; // 0xa00
public:
	GameTime_t m_flNextAttack; // 0xa14	
	CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0xa18	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0x9f8
	// void CBaseGrenadeSmoke; // 0x0
	// void CBaseGrenadeBounceTouch; // 0x0
	// void CBaseGrenadeSlideTouch; // 0x0
	// void CBaseGrenadeExplodeTouch; // 0x0
	// void CBaseGrenadeDetonateUse; // 0x0
	// void CBaseGrenadeDangerSoundThink; // 0x0
	// void CBaseGrenadePreDetonate; // 0x0
	// void CBaseGrenadeDetonate; // 0x0
	// void CBaseGrenadeTumbleThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CCoopBonusCoin : public CDynamicProp
{
public:
	// Datamap fields:
	// void CCoopBonusCoinCoinTouch; // 0x0
	// void CCoopBonusCoinCoinFadeOut; // 0x0
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
class CPhysicsPropMultiplayer : public CPhysicsProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_hModel"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "m_MeshGroupMask"
// MNetworkIncludeByName "m_fEffects"
// MNetworkIncludeByName "m_baseLayer.m_hSequence"
// MNetworkIncludeByName "m_animationController.m_flPlaybackRate"
// MNetworkIncludeByName "m_animationController.m_bClientSideAnimation"
// MNetworkIncludeByName "m_flAnimTime"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_animationController.m_animGraphNetworkedVars"
// MNetworkIncludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkOverride "m_fEffects"
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "uint32 m_nAnimationParity"
// MNetworkVarNames "float32 m_flAnimationStartTime"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hWeapon"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class CBaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	Vector m_vecLastFacing; // 0x8f0	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0x8fc	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0x900	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x904	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hWeapon; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad090c[0x4]; // 0x90c
public:
	CUtlSymbolLarge m_sVMName; // 0x910	
	CUtlSymbolLarge m_sAnimationPrefix; // 0x918	
	HSequence m_hOldLayerSequence; // 0x920	
	int32_t m_oldLayer; // 0x924	
	float m_oldLayerStartTime; // 0x928	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x92c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
class CPredictedViewModel : public CBaseViewModel
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
// 
// MNetworkVarNames "bool m_bBombTicking"
// MNetworkVarNames "GameTime_t m_flC4Blow"
// MNetworkVarNames "int m_nBombSite"
// MNetworkVarNames "int m_nSourceSoundscapeHash"
// MNetworkVarNames "bool m_bCannotBeDefused"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "bool m_bHasExploded"
// MNetworkVarNames "float m_flTimerLength"
// MNetworkVarNames "bool m_bBeingDefused"
// MNetworkVarNames "float m_flDefuseLength"
// MNetworkVarNames "GameTime_t m_flDefuseCountDown"
// MNetworkVarNames "bool m_bBombDefused"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class CPlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0x8ec	
	// MNetworkEnable
	int32_t m_nBombSite; // 0x8f0	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0x8f4	
	CEntityIOOutput m_OnBombDefused; // 0x8f8	
	CEntityIOOutput m_OnBombBeginDefuse; // 0x920	
	CEntityIOOutput m_OnBombDefuseAborted; // 0x948	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0971[0x7]; // 0x971
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x978	
	int32_t m_nSpotRules; // 0x990	
	bool m_bTrainingPlacedByPlayer; // 0x994	
	// MNetworkEnable
	bool m_bHasExploded; // 0x995	
private:
	[[maybe_unused]] uint8_t __pad0996[0x2]; // 0x996
public:
	// MNetworkEnable
	float m_flTimerLength; // 0x998	
	// MNetworkEnable
	bool m_bBeingDefused; // 0x99c	
private:
	[[maybe_unused]] uint8_t __pad099d[0x7]; // 0x99d
public:
	GameTime_t m_fLastDefuseTime; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a8[0x4]; // 0x9a8
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0x9ac	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0x9b0	
	// MNetworkEnable
	bool m_bBombDefused; // 0x9b4	
private:
	[[maybe_unused]] uint8_t __pad09b5[0x3]; // 0x9b5
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hBombDefuser; // 0x9b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x9bc	
	int32_t m_iProgressBarTime; // 0x9c0	
	bool m_bVoiceAlertFired; // 0x9c4	
	bool m_bVoiceAlertPlayed[4]; // 0x9c5	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x3]; // 0x9c9
public:
	GameTime_t m_flNextBotBeepTime; // 0x9cc	
private:
	[[maybe_unused]] uint8_t __pad09d0[0x4]; // 0x9d0
public:
	bool m_bPlantedAfterPickup; // 0x9d4	
private:
	[[maybe_unused]] uint8_t __pad09d5[0x3]; // 0x9d5
public:
	QAngle m_angCatchUpToPlayerEye; // 0x9d8	
	GameTime_t m_flLastSpinDetectionTime; // 0x9e4	
	
	// Datamap fields:
	// void CPlantedC4C4Think; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa98
// Has VTable
// 
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "int m_nBounces"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
// MNetworkVarNames "int m_nExplodeEffectTickBegin"
// MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
class CBaseCSGrenadeProjectile : public CBaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialPosition; // 0xa20	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0xa2c	
	// MNetworkEnable
	int32_t m_nBounces; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a3c[0x4]; // 0xa3c
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xa40	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0xa48	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0xa4c	
	GameTime_t m_flSpawnTime; // 0xa58	
	uint8_t m_unOGSExtraFlags; // 0xa5c	
	bool m_bDetonationRecorded; // 0xa5d	
private:
	[[maybe_unused]] uint8_t __pad0a5e[0x2]; // 0xa5e
public:
	GameTime_t m_flDetonateTime; // 0xa60	
	uint16_t m_nItemIndex; // 0xa64	
private:
	[[maybe_unused]] uint8_t __pad0a66[0x2]; // 0xa66
public:
	Vector m_vecOriginalSpawnLocation; // 0xa68	
	GameTime_t m_flLastBounceSoundTime; // 0xa74	
	RotationVector m_vecGrenadeSpin; // 0xa78	
	Vector m_vecLastHitSurfaceNormal; // 0xa84	
	int32_t m_nTicksAtZeroVelocity; // 0xa90	
	bool m_bHasEverHitPlayer; // 0xa94	
	bool m_bClearFromPlayers; // 0xa95	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
// 
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
class CItemDogtags : public CItem
{
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_OwningPlayer; // 0x9c0	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_KillingPlayer; // 0x9c4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa8
// Has VTable
class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	GameTime_t m_fExpireTime; // 0xa98	
	GameTime_t m_fNextDetectPlayerSound; // 0xa9c	
	CHandle< CBaseEntity > m_hDisplayGrenade; // 0xaa0	
	
	// Datamap fields:
	// void CSensorGrenadeProjectileThink_Arm; // 0x0
	// void CSensorGrenadeProjectileThink_Remove; // 0x0
	// void CSensorGrenadeProjectileSensorThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CBreachChargeProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CBumpMineProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CTripWireFireProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa0
// Has VTable
class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:
	float m_flTimeToDetonate; // 0xa98	
	uint8_t m_numOpponentsHit; // 0xa9c	
	uint8_t m_numTeammatesHit; // 0xa9d	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa98
// Has VTable
class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30b8
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
class CChicken : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b60[0x20]; // 0xb60
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xb80	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xe48	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xe4c	
	CountdownTimer m_updateTimer; // 0xe50	
	Vector m_stuckAnchor; // 0xe68	
private:
	[[maybe_unused]] uint8_t __pad0e74[0x4]; // 0xe74
public:
	CountdownTimer m_stuckTimer; // 0xe78	
	CountdownTimer m_collisionStuckTimer; // 0xe90	
	bool m_isOnGround; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x3]; // 0xea9
public:
	Vector m_vFallVelocity; // 0xeac	
	ChickenActivity m_activity; // 0xeb8	
private:
	[[maybe_unused]] uint8_t __pad0ebc[0x4]; // 0xebc
public:
	CountdownTimer m_activityTimer; // 0xec0	
	float m_turnRate; // 0xed8	
	CHandle< CBaseEntity > m_fleeFrom; // 0xedc	
	CountdownTimer m_moveRateThrottleTimer; // 0xee0	
	CountdownTimer m_startleTimer; // 0xef8	
	CountdownTimer m_vocalizeTimer; // 0xf10	
	GameTime_t m_flWhenZombified; // 0xf28	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xf2c	
private:
	[[maybe_unused]] uint8_t __pad0f2d[0x3]; // 0xf2d
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_leader; // 0xf30	
private:
	[[maybe_unused]] uint8_t __pad0f34[0x4]; // 0xf34
public:
	CountdownTimer m_reuseTimer; // 0xf38	
	bool m_hasBeenUsed; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x7]; // 0xf51
public:
	CountdownTimer m_jumpTimer; // 0xf58	
	float m_flLastJumpTime; // 0xf70	
	bool m_bInJump; // 0xf74	
	bool m_isWaitingForLeader; // 0xf75	
private:
	[[maybe_unused]] uint8_t __pad0f76[0x200a]; // 0xf76
public:
	CountdownTimer m_repathTimer; // 0x2f80	
	CountdownTimer m_inhibitDoorTimer; // 0x2f98	
private:
	[[maybe_unused]] uint8_t __pad2fb0[0x78]; // 0x2fb0
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x3028	
private:
	[[maybe_unused]] uint8_t __pad3040[0x8]; // 0x3040
public:
	Vector m_vecPathGoal; // 0x3048	
	GameTime_t m_flActiveFollowStartTime; // 0x3054	
	CountdownTimer m_followMinuteTimer; // 0x3058	
	Vector m_vecLastEggPoopPosition; // 0x3070	
private:
	[[maybe_unused]] uint8_t __pad307c[0x4]; // 0x307c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x3080	
private:
	[[maybe_unused]] uint8_t __pad3098[0x8]; // 0x3098
public:
	CountdownTimer m_BlockDirectionTimer; // 0x30a0	
	
	// Datamap fields:
	// void CChickenChickenTouch; // 0x0
	// void CChickenChickenThink; // 0x0
	// void CChickenChickenUse; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CHostageCarriableProp : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CItemAssaultSuit : public CItem
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CItemHeavyAssaultSuit : public CItemAssaultSuit
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CItemKevlar : public CItem
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
class CItemDefuser : public CItem
{
public:
	EntitySpottedState_t m_entitySpottedState; // 0x9c0	
	int32_t m_nSpotRules; // 0x9d8	
	
	// Datamap fields:
	// void CItemDefuserActivateThink; // 0x0
	// void CItemDefuserDefuserTouch; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkUserGroupProxy "CBasePlayerWeapon"
// MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
// MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
// MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
// MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
// MNetworkVarNames "int32 m_iClip1"
// MNetworkVarNames "int32 m_iClip2"
// MNetworkVarNames "int m_pReserveAmmo"
class CBasePlayerWeapon : public CEconEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0xc7c	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0xc80	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0xc84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0xc88	
	CEntityIOOutput m_OnPlayerUse; // 0xc90	
	
	// Datamap fields:
	// int32_t InputSetClipPrimary; // 0x0
	// int32_t InputSetClipSecondary; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CBaseFlexAlias_funCBaseFlex : public CBaseFlex
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
class CScriptItem : public CItem
{
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x9c0	
	MoveType_t m_MoveTypeOverride; // 0x9e8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa90
// Has VTable
class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class CRagdollPropAttached : public CRagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xa90	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xa94	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xa98	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xaa4	
	bool m_bShouldDetach; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0xf]; // 0xab1
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xac0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe88
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xdf0	
	float m_flDistance; // 0xdfc	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xe00	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xe04	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xe08	
	float m_flAjarAngle; // 0xe0c	
	QAngle m_angRotationAjarDeprecated; // 0xe10	
	QAngle m_angRotationClosed; // 0xe1c	
	QAngle m_angRotationOpenForward; // 0xe28	
	QAngle m_angRotationOpenBack; // 0xe34	
	QAngle m_angGoal; // 0xe40	
	Vector m_vecForwardBoundsMin; // 0xe4c	
	Vector m_vecForwardBoundsMax; // 0xe58	
	Vector m_vecBackBoundsMin; // 0xe64	
	Vector m_vecBackBoundsMax; // 0xe70	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0xe7c	
private:
	[[maybe_unused]] uint8_t __pad0e7d[0x3]; // 0xe7d
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0xe80	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xea8
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xe88	
	bool m_isAbleToCloseAreaPortals; // 0xe89	
private:
	[[maybe_unused]] uint8_t __pad0e8a[0x2]; // 0xe8a
public:
	int32_t m_currentDamageState; // 0xe8c	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xe90	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa10
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
// MNetworkVarNames "float m_flFieldOfView"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x7]; // 0x979
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x980	
	// MNetworkEnable
	float m_flFieldOfView; // 0x998	
	float m_impactEnergyScale; // 0x99c	
	HitGroup_t m_LastHitGroup; // 0x9a0	
	bool m_bApplyStressDamage; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a5[0x3]; // 0x9a5
public:
	int32_t m_bloodColor; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x44]; // 0x9ac
public:
	int32_t m_iDamageCount; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f4[0x4]; // 0x9f4
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x9f8	
	CUtlSymbolLarge m_strRelationships; // 0xa00	
	Hull_t m_eHull; // 0xa08	
	uint32_t m_nNavHullIdx; // 0xa0c	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad09c0[0x8]; // 0x9c0
public:
	bool m_bHasTriggerRadius; // 0x9c8	
	bool m_bHasPickupRadius; // 0x9c9	
private:
	[[maybe_unused]] uint8_t __pad09ca[0x2]; // 0x9ca
public:
	float m_flPickupRadiusSqr; // 0x9cc	
	float m_flTriggerRadiusSqr; // 0x9d0	
	GameTime_t m_flLastPickupCheck; // 0x9d4	
	bool m_bPlayerCounterListenerAdded; // 0x9d8	
	bool m_bPlayerInTriggerRadius; // 0x9d9	
private:
	[[maybe_unused]] uint8_t __pad09da[0x6]; // 0x9da
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x9e0	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0x9e8	
	bool m_bAutoStartAmbientSound; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0x9f8	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xa00	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xa08	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xa10	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xa18	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa20	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xa28	
	CUtlSymbolLarge m_pPickupFilterName; // 0xa30	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a3c[0x4]; // 0xa3c
public:
	CEntityIOOutput m_OnPickup; // 0xa40	
	CEntityIOOutput m_OnTimeout; // 0xa68	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xa90	
	CEntityIOOutput m_OnTriggerTouch; // 0xab8	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xae0	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb08	
	float m_flPickupRadius; // 0xb10	
	float m_flTriggerRadius; // 0xb14	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb18	
	bool m_bGlowWhenInTrigger; // 0xb20	
	Color m_glowColor; // 0xb21	
	bool m_bUseable; // 0xb25	
private:
	[[maybe_unused]] uint8_t __pad0b26[0x2]; // 0xb26
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xb28	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0x9c0
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkExcludeByName "m_pWeaponServices"
// MNetworkExcludeByName "m_pItemServices"
// MNetworkExcludeByName "m_pAutoaimServices"
// MNetworkExcludeByName "m_pObserverServices"
// MNetworkExcludeByName "m_pWaterServices"
// MNetworkExcludeByName "m_pUseServices"
// MNetworkExcludeByName "m_pFlashlightServices"
// MNetworkExcludeByName "m_pMovementServices"
// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xa10	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xa18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa20	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xa28	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xa30	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xa38	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa40	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xa48	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xa50	
private:
	[[maybe_unused]] uint8_t __pad0a58[0x8]; // 0xa58
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xa60	
	uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xab0	
	QAngle v_angle; // 0xab4	
	QAngle v_anglePrevious; // 0xac0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xacc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xad8
	// -> origin - 0xadc
	// -> bClip3DSkyBoxNearToWorldFar - 0xae8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xaec
	// -> fog - 0xaf0
	// -> m_nWorldGroupID - 0xb58
	sky3dparams_t m_skybox3d; // 0xad0	
	GameTime_t m_fTimeLastHurt; // 0xb60	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xb64	
	GameTime_t m_fNextSuicideTime; // 0xb68	
	bool m_fInitHUD; // 0xb6c	
private:
	[[maybe_unused]] uint8_t __pad0b6d[0x3]; // 0xb6d
public:
	CAI_Expresser* m_pExpresser; // 0xb70	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b7c[0x4]; // 0xb7c
public:
	float m_fHltvReplayDelay; // 0xb80	
	float m_fHltvReplayEnd; // 0xb84	
	CEntityIndex m_iHltvReplayEntity; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b8c[0x4]; // 0xb8c
public:
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xb90	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xb7c
	// void m_hLastValidNavArea; // 0x9c0
	// void m_hCurrentNavArea; // 0x9b0
	// void m_hCurrentNavAreaBlocked; // 0x9d0
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MNetworkOverride "m_hWeapon"
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
// MNetworkVarNames "uint32 m_nWeaponParity"
class CCSGOViewModel : public CPredictedViewModel
{
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0x930	
private:
	[[maybe_unused]] uint8_t __pad0931[0x3]; // 0x931
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0x934	
	uint32_t m_nOldWeaponParity; // 0x938	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
// 
// MNetworkExcludeByName "m_flTimeWeaponIdle"
// MNetworkVarNames "float m_flFireSequenceStartTime"
// MNetworkVarNames "int m_nFireSequenceStartTimeChange"
// MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
// MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
// MNetworkVarNames "CSWeaponState_t m_iState"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
// MNetworkVarNames "CSWeaponMode m_weaponMode"
// MNetworkVarNames "float m_fAccuracyPenalty"
// MNetworkVarNames "int m_iRecoilIndex"
// MNetworkVarNames "float m_flRecoilIndex"
// MNetworkVarNames "bool m_bBurstMode"
// MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
// MNetworkVarNames "float m_flPostponeFireReadyFrac"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bReloadVisuallyComplete"
// MNetworkVarNames "GameTime_t m_flDroppedAtTime"
// MNetworkVarNames "bool m_bIsHauledBack"
// MNetworkVarNames "bool m_bSilencerOn"
// MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
// MNetworkVarNames "int m_iOriginalTeamNumber"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
// MNetworkVarNames "GameTick_t m_nDropTick"
// MNetworkVarNames "GameTime_t m_fLastShotTime"
// MNetworkVarNames "int m_iIronSightMode"
// MNetworkVarNames "int m_iNumEmptyAttacks"
class CCSWeaponBase : public CBasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x28]; // 0xcb8
public:
	bool m_bRemoveable; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x7]; // 0xce1
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0xce8	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0xcec	
	int32_t m_nFireSequenceStartTimeAck; // 0xcf0	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0xcf4	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xcf8	
	HSequence m_seqIdle; // 0xcfc	
	HSequence m_seqFirePrimary; // 0xd00	
	HSequence m_seqFireSecondary; // 0xd04	
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0xd08	
	HSequence m_hCurrentThirdPersonSequence; // 0xd20	
	int32_t m_nSilencerBoneIndex; // 0xd24	
	HSequence m_thirdPersonSequences[7]; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d44[0xc]; // 0xd44
public:
	bool m_bPlayerAmmoStockOnPickup; // 0xd50	
	bool m_bRequireUseToTouch; // 0xd51	
private:
	[[maybe_unused]] uint8_t __pad0d52[0x2]; // 0xd52
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0xd54	
	GameTime_t m_flLastTimeInAir; // 0xd58	
	GameTime_t m_flLastDeployTime; // 0xd5c	
	int32_t m_nLastEmptySoundCmdNum; // 0xd60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0xd64	
	bool m_bReloadsWithClips; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x1f]; // 0xd69
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0xd88	
	bool m_bFireOnEmpty; // 0xd8c	
private:
	[[maybe_unused]] uint8_t __pad0d8d[0x3]; // 0xd8d
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xd90	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0xdb8	
	float m_flTurningInaccuracyDelta; // 0xdbc	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0xdc0	
	float m_flTurningInaccuracy; // 0xdcc	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0xdd0	
	GameTime_t m_flLastAccuracyUpdateTime; // 0xdd4	
	float m_fAccuracySmoothedForZoom; // 0xdd8	
	GameTime_t m_fScopeZoomEndTime; // 0xddc	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0xde0	
	// MNetworkEnable
	float m_flRecoilIndex; // 0xde4	
	// MNetworkEnable
	bool m_bBurstMode; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0de9[0x3]; // 0xde9
public:
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0xdec	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0xdf0	
	// MNetworkEnable
	bool m_bInReload; // 0xdf4	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0xdf5	
private:
	[[maybe_unused]] uint8_t __pad0df6[0x2]; // 0xdf6
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0xdf8	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0xdfc	
	// MNetworkEnable
	bool m_bSilencerOn; // 0xdfd	
private:
	[[maybe_unused]] uint8_t __pad0dfe[0x2]; // 0xdfe
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0xe00	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0xe04	
	float m_flNextAttackRenderTimeOffset; // 0xe08	
private:
	[[maybe_unused]] uint8_t __pad0e0c[0x14]; // 0xe0c
public:
	bool m_bCanBePickedUp; // 0xe20	
	bool m_bUseCanOverrideNextOwnerTouchTime; // 0xe21	
private:
	[[maybe_unused]] uint8_t __pad0e22[0x2]; // 0xe22
public:
	GameTime_t m_nextOwnerTouchTime; // 0xe24	
	GameTime_t m_nextPrevOwnerTouchTime; // 0xe28	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xe2c	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0xe30	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x20]; // 0xe34
public:
	bool m_donated; // 0xe54	
private:
	[[maybe_unused]] uint8_t __pad0e55[0x3]; // 0xe55
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0xe58	
	bool m_bWasOwnedByCT; // 0xe5c	
	bool m_bWasOwnedByTerrorist; // 0xe5d	
	bool m_bFiredOutOfAmmoEvent; // 0xe5e	
private:
	[[maybe_unused]] uint8_t __pad0e5f[0x1]; // 0xe5f
public:
	int32_t m_numRemoveUnownedWeaponThink; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e64[0x4]; // 0xe64
public:
	// -> m_bIronSightAvailable - 0xe70
	// -> m_flIronSightAmount - 0xe74
	// -> m_flIronSightAmountGained - 0xe78
	// -> m_flIronSightAmountBiased - 0xe7c
	CIronSightController m_IronSightController; // 0xe68	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0xe80	
	GameTime_t m_flLastLOSTraceFailureTime; // 0xe84	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0xe88	
	float m_flWatTickOffset; // 0xe8c	
	
	// Datamap fields:
	// void CCSWeaponBaseDefaultTouch; // 0x0
	// void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
	// void InputToggleCanBePickedUp; // 0x0
	// float InputSetAmmoAmount; // 0x0
	// int32_t InputSetReserveAmmoAmount; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xe90	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xe94	
private:
	[[maybe_unused]] uint8_t __pad0e98[0x8]; // 0xe98
public:
	int32_t m_silencedModelIndex; // 0xea0	
	bool m_inPrecache; // 0xea4	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xea5	
	bool m_bSkillReloadAvailable; // 0xea6	
	bool m_bSkillReloadLiftedReloadKey; // 0xea7	
	bool m_bSkillBoltInterruptAvailable; // 0xea8	
	bool m_bSkillBoltLiftedFireKey; // 0xea9	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee0
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class CC4 : public CCSWeaponBase
{
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xe90	
	Vector m_vecLastValidDroppedPosition; // 0xe9c	
	bool m_bDoValidDroppedPositionCheck; // 0xea8	
	// MNetworkEnable
	bool m_bStartedArming; // 0xea9	
private:
	[[maybe_unused]] uint8_t __pad0eaa[0x2]; // 0xeaa
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xeac	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xeb0	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xeb1	
private:
	[[maybe_unused]] uint8_t __pad0eb2[0x6]; // 0xeb2
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xeb8	
	int32_t m_nSpotRules; // 0xed0	
	bool m_bPlayedArmingBeeps[7]; // 0xed4	
	bool m_bBombPlanted; // 0xedb	
	bool m_bDroppedFromDeath; // 0xedc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CDEagle : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponElite : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CWeaponNOVA : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CWeaponSawedoff : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_fFireTime"
class CWeaponTaser : public CCSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0xeb0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CWeaponXM1014 : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe98
// Has VTable
class CKnife : public CCSWeaponBase
{
public:
	bool m_bFirstAttack; // 0xe90	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CMelee : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MNetworkVarNames "float m_flDisplayHealth"
class CWeaponShield : public CCSWeaponBaseGun
{
public:
	float m_flBulletDamageAbsorbed; // 0xeb0	
	GameTime_t m_flLastBulletHitSoundTime; // 0xeb4	
	// MNetworkEnable
	float m_flDisplayHealth; // 0xeb8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0a99[0xb]; // 0xa99
public:
	bool m_bDetonated; // 0xaa4	
private:
	[[maybe_unused]] uint8_t __pad0aa5[0x3]; // 0xaa5
public:
	IntervalTimer m_stillTimer; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0ab8[0xd0]; // 0xab8
public:
	bool m_bHasBouncedOffPlayer; // 0xb88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a98[0x8]; // 0xa98
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0xaa0	
	int32_t m_shotsRemaining; // 0xaa4	
	GameTime_t m_fExpireTime; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aac[0xc]; // 0xaac
public:
	uint16_t m_decoyWeaponDefIndex; // 0xab8	
	
	// Datamap fields:
	// void CDecoyProjectileThink_Detonate; // 0x0
	// void CDecoyProjectileGunfireThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d78
// Has VTable
// 
// MNetworkVarNames "int m_nSmokeEffectTickBegin"
// MNetworkVarNames "bool m_bDidSmokeEffect"
// MNetworkVarNames "int m_nRandomSeed"
// MNetworkVarNames "Vector m_vSmokeColor"
// MNetworkVarNames "Vector m_vSmokeDetonationPos"
// MNetworkVarNames "CUtlVector<uint8> m_VoxelFrameData"
class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a98[0x18]; // 0xa98
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0xab0	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0xab4	
private:
	[[maybe_unused]] uint8_t __pad0ab5[0x3]; // 0xab5
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0xab8	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0xabc	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ad4[0x4]; // 0xad4
public:
	// MNetworkEnable
	CUtlVector< uint8 > m_VoxelFrameData; // 0xad8	
	GameTime_t m_flLastBounce; // 0xaf0	
	GameTime_t m_fllastSimulationTime; // 0xaf4	
	
	// Datamap fields:
	// void CSmokeGrenadeProjectileThink_Detonate; // 0x0
	// void CSmokeGrenadeProjectileThink_Update; // 0x0
	// void CSmokeGrenadeProjectileThink_Remove; // 0x0
	// void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
	// void InitializeSpawnFromWorld; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MNetworkVarNames "bool m_bRedraw"
// MNetworkVarNames "bool m_bIsHeldByPlayer"
// MNetworkVarNames "bool m_bPinPulled"
// MNetworkVarNames "bool m_bJumpThrow"
// MNetworkVarNames "bool m_bThrowAnimating"
// MNetworkVarNames "GameTime_t m_fThrowTime"
// MNetworkVarNames "float m_flThrowStrength"
// MNetworkVarNames "float m_flThrowStrengthApproach"
// MNetworkVarNames "GameTime_t m_fDropTime"
// MNetworkVarNames "bool m_bJustPulledPin"
// MNetworkVarNames "GameTick_t m_nNextHoldTick"
// MNetworkVarNames "float m_flNextHoldFrac"
// MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
class CBaseCSGrenade : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bRedraw; // 0xe90	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0xe91	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0xe92	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xe93	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0xe94	
private:
	[[maybe_unused]] uint8_t __pad0e95[0x3]; // 0xe95
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xe98	
	// MNetworkEnable
	float m_flThrowStrength; // 0xe9c	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xea0	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xea4	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x3]; // 0xea9
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0xeac	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0xeb0	
	// MNetworkEnable
	CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xeb4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
// MNetworkVarNames "bool m_bRedraw"
class CWeaponBaseItem : public CCSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0xe90	
	// MNetworkEnable
	bool m_bRedraw; // 0xea8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CItem_Healthshot : public CWeaponBaseItem
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xe90	
private:
	[[maybe_unused]] uint8_t __pad0e91[0x3]; // 0xe91
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xe94	
	bool m_bRestorePrevWep; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e99[0x3]; // 0xe99
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xe9c	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xea0	
	bool m_bDelayedHardPunchIncoming; // 0xea4	
	bool m_bDestroyAfterTaunt; // 0xea5	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CSensorGrenade : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CBreachCharge : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CBumpMine : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CTablet : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CTripWireFire : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponZoneRepulsor : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a8
// Has VTable
// 
// MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
// MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "CSPlayerState m_iPlayerState"
// MNetworkVarNames "bool m_bIsScoped"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "bool m_bResumeZoom"
// MNetworkVarNames "bool m_bIsDefusing"
// MNetworkVarNames "bool m_bIsGrabbingHostage"
// MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
// MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
// MNetworkVarNames "bool m_bGunGameImmunity"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "float m_fMolotovDamageTime"
// MNetworkVarNames "bool m_bHasMovedSinceSpawn"
// MNetworkVarNames "bool m_bCanMoveDuringFreezePeriod"
// MNetworkVarNames "float m_flGuardianTooFarDistFrac"
// MNetworkVarNames "GameTime_t m_flDetectedByEnemySensorTime"
// MNetworkVarNames "int m_nHeavyAssaultSuitCooldownRemaining"
// MNetworkVarNames "GameTime_t m_flEmitSoundTime"
// MNetworkVarNames "bool m_bHasNightVision"
// MNetworkVarNames "bool m_bNightVisionOn"
// MNetworkVarNames "bool m_bInNoDefuseArea"
// MNetworkVarNames "bool m_bKilledByTaser"
// MNetworkVarNames "int m_iMoveState"
// MNetworkVarNames "int m_nWhichBombZone"
// MNetworkVarNames "int m_iDirection"
// MNetworkVarNames "int m_iShotsFired"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "float m_flVelocityModifier"
// MNetworkVarNames "float m_flHitHeading"
// MNetworkVarNames "int m_nHitBodyPart"
// MNetworkVarNames "float m_flFlashDuration"
// MNetworkVarNames "float m_flFlashMaxAlpha"
// MNetworkVarNames "float m_flProgressBarStartTime"
// MNetworkVarNames "int m_iProgressBarDuration"
// MNetworkVarNames "bool m_bWaitForNoAttack"
// MNetworkVarNames "float m_flLowerBodyYawTarget"
// MNetworkVarNames "bool m_bStrafing"
// MNetworkVarNames "QAngle m_thirdPersonHeading"
// MNetworkVarNames "float m_flSlopeDropOffset"
// MNetworkVarNames "float m_flSlopeDropHeight"
// MNetworkVarNames "Vector m_vHeadConstraintOffset"
// MNetworkVarNames "QAngle m_angEyeAngles"
// MNetworkVarNames "bool m_bHideTargetID"
// MNetworkVarNames "bool m_bHud_MiniScoreHidden"
// MNetworkVarNames "bool m_bHud_RadarHidden"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
// MNetworkVarNames "int m_nLastConcurrentKilled"
// MNetworkVarNames "int m_nDeathCamMusic"
// MNetworkVarNames "int m_iAddonBits"
// MNetworkVarNames "int m_iPrimaryAddon"
// MNetworkVarNames "int m_iSecondaryAddon"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "int m_nSurvivalTeamNumber"
// MNetworkVarNames "bool m_bKilledByHeadshot"
class CCSPlayerPawnBase : public CBasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad0ba8[0x18]; // 0xba8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; // 0xbc0	
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0xc10	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0xc18	
	uint32_t m_iDisplayHistoryBits; // 0xc20	
	float m_flLastAttackedTeammate; // 0xc24	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0xc28	
	GameTime_t m_blindUntilTime; // 0xc2c	
	GameTime_t m_blindStartTime; // 0xc30	
	GameTime_t m_allowAutoFollowTime; // 0xc34	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xc38	
	int32_t m_nSpotRules; // 0xc50	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c58[0x8]; // 0xc58
public:
	CountdownTimer m_chickenIdleSoundTimer; // 0xc60	
	CountdownTimer m_chickenJumpSoundTimer; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c90[0xa0]; // 0xc90
public:
	Vector m_vecLastBookmarkedPosition; // 0xd30	
	float m_flLastDistanceTraveledNotice; // 0xd3c	
	float m_flAccumulatedDistanceTraveled; // 0xd40	
	float m_flLastFriendlyFireDamageReductionRatio; // 0xd44	
	bool m_bRespawning; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d49[0x3]; // 0xd49
public:
	int32_t m_nLastPickupPriority; // 0xd4c	
	float m_flLastPickupPriorityTime; // 0xd50	
	// MNetworkEnable
	bool m_bIsScoped; // 0xd54	
	// MNetworkEnable
	bool m_bIsWalking; // 0xd55	
	// MNetworkEnable
	bool m_bResumeZoom; // 0xd56	
	// MNetworkEnable
	bool m_bIsDefusing; // 0xd57	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xd5c	
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0xd60	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xd64	
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0xd65	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x3]; // 0xd69
public:
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xd6c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xd70	
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; // 0xd71	
private:
	[[maybe_unused]] uint8_t __pad0d72[0x2]; // 0xd72
public:
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; // 0xd74	
	float m_flNextGuardianTooFarHurtTime; // 0xd78	
	// MNetworkEnable
	GameTime_t m_flDetectedByEnemySensorTime; // 0xd7c	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0xd80	
	GameTime_t m_flLastEquippedHelmetTime; // 0xd84	
	GameTime_t m_flLastEquippedArmorTime; // 0xd88	
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xd8c	
	bool m_bResetArmorNextSpawn; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	GameTime_t m_flLastBumpMineBumpTime; // 0xd94	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0xd98	
	int32_t m_iNumSpawns; // 0xd9c	
	int32_t m_iShouldHaveCash; // 0xda0	
	bool m_bInvalidSteamLogonDelayed; // 0xda4	
private:
	[[maybe_unused]] uint8_t __pad0da5[0x3]; // 0xda5
public:
	GameTime_t m_flLastAction; // 0xda8	
	float m_flNameChangeHistory[5]; // 0xdac	
	float m_fLastGivenDefuserTime; // 0xdc0	
	float m_fLastGivenBombTime; // 0xdc4	
	// MNetworkEnable
	bool m_bHasNightVision; // 0xdc8	
	// MNetworkEnable
	bool m_bNightVisionOn; // 0xdc9	
private:
	[[maybe_unused]] uint8_t __pad0dca[0x2]; // 0xdca
public:
	float m_fNextRadarUpdateTime; // 0xdcc	
	float m_flLastMoneyUpdateTime; // 0xdd0	
	char m_MenuStringBuffer[1024]; // 0xdd4	
	float m_fIntroCamTime; // 0x11d4	
	int32_t m_nMyCollisionGroup; // 0x11d8	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x11dc	
	// MNetworkEnable
	bool m_bKilledByTaser; // 0x11dd	
private:
	[[maybe_unused]] uint8_t __pad11de[0x2]; // 0x11de
public:
	// MNetworkEnable
	int32_t m_iMoveState; // 0x11e0	
	GameTime_t m_grenadeParameterStashTime; // 0x11e4	
	bool m_bGrenadeParametersStashed; // 0x11e8	
private:
	[[maybe_unused]] uint8_t __pad11e9[0x3]; // 0x11e9
public:
	QAngle m_angStashedShootAngles; // 0x11ec	
	Vector m_vecStashedGrenadeThrowPosition; // 0x11f8	
	Vector m_vecStashedVelocity; // 0x1204	
	QAngle m_angShootAngleHistory[2]; // 0x1210	
	Vector m_vecThrowPositionHistory[2]; // 0x1228	
	Vector m_vecVelocityHistory[2]; // 0x1240	
	bool m_bDiedAirborne; // 0x1258	
private:
	[[maybe_unused]] uint8_t __pad1259[0x3]; // 0x1259
public:
	CEntityIndex m_iBombSiteIndex; // 0x125c	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1260	
	bool m_bInBombZoneTrigger; // 0x1264	
	bool m_bWasInBombZoneTrigger; // 0x1265	
private:
	[[maybe_unused]] uint8_t __pad1266[0x2]; // 0x1266
public:
	// MNetworkEnable
	int32_t m_iDirection; // 0x1268	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x126c	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x1270	
	float m_flFlinchStack; // 0x1274	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x1278	
	// MNetworkEnable
	float m_flHitHeading; // 0x127c	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x1280	
	int32_t m_iHostagesKilled; // 0x1284	
	Vector m_vecTotalBulletForce; // 0x1288	
	// MNetworkEnable
	float m_flFlashDuration; // 0x1294	
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0x1298	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x129c	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x12a0	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x12a4	
private:
	[[maybe_unused]] uint8_t __pad12a5[0x3]; // 0x12a5
public:
	// MNetworkEnable
	float m_flLowerBodyYawTarget; // 0x12a8	
	// MNetworkEnable
	bool m_bStrafing; // 0x12ac	
private:
	[[maybe_unused]] uint8_t __pad12ad[0x3]; // 0x12ad
public:
	Vector m_lastStandingPos; // 0x12b0	
	float m_ignoreLadderJumpTime; // 0x12bc	
	CountdownTimer m_ladderSurpressionTimer; // 0x12c0	
	Vector m_lastLadderNormal; // 0x12d8	
	Vector m_lastLadderPos; // 0x12e4	
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x12f0	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x12fc	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x1300	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x1304	
private:
	[[maybe_unused]] uint8_t __pad1310[0x8]; // 0x1310
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x1318	
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x131c	
	bool m_bVCollisionInitted; // 0x1328	
private:
	[[maybe_unused]] uint8_t __pad1329[0x3]; // 0x1329
public:
	Vector m_storedSpawnPosition; // 0x132c	
	QAngle m_storedSpawnAngle; // 0x1338	
	bool m_bIsSpawning; // 0x1344	
	// MNetworkEnable
	bool m_bHideTargetID; // 0x1345	
private:
	[[maybe_unused]] uint8_t __pad1346[0x2]; // 0x1346
public:
	int32_t m_nNumDangerZoneDamageHits; // 0x1348	
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; // 0x134c	
	// MNetworkEnable
	bool m_bHud_RadarHidden; // 0x134d	
private:
	[[maybe_unused]] uint8_t __pad134e[0x2]; // 0x134e
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1350	
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; // 0x1354	
	// MNetworkEnable
	int32_t m_nDeathCamMusic; // 0x1358	
	// MNetworkEnable
	int32_t m_iAddonBits; // 0x135c	
	// MNetworkEnable
	int32_t m_iPrimaryAddon; // 0x1360	
	// MNetworkEnable
	int32_t m_iSecondaryAddon; // 0x1364	
	CUtlStringToken m_currentDeafnessFilter; // 0x1368	
	int32_t m_NumEnemiesKilledThisSpawn; // 0x136c	
	int32_t m_NumEnemiesKilledThisRound; // 0x1370	
	int32_t m_NumEnemiesAtRoundStart; // 0x1374	
	bool m_wasNotKilledNaturally; // 0x1378	
private:
	[[maybe_unused]] uint8_t __pad1379[0x3]; // 0x1379
public:
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x137c	
	int32_t m_iDeathFlags; // 0x1390	
	CHandle< CChicken > m_hPet; // 0x1394	
private:
	[[maybe_unused]] uint8_t __pad1398[0x1c8]; // 0x1398
public:
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x1560	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x1562	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x1564	
private:
	[[maybe_unused]] uint8_t __pad1566[0x2]; // 0x1566
public:
	// MNetworkEnable
	int32_t m_nSurvivalTeamNumber; // 0x1568	
	bool m_bHasDeathInfo; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad156d[0x3]; // 0x156d
public:
	float m_flDeathInfoTime; // 0x1570	
	Vector m_vecDeathInfoOrigin; // 0x1574	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1581[0x3]; // 0x1581
public:
	int32_t m_LastHitBox; // 0x1584	
	int32_t m_LastHealth; // 0x1588	
	float m_flLastCollisionCeiling; // 0x158c	
	float m_flLastCollisionCeilingChangeTime; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	CCSBot* m_pBot; // 0x1598	
	bool m_bBotAllowActive; // 0x15a0	
	bool m_bCommittingSuicideOnTeamChange; // 0x15a1	
	
	// Datamap fields:
	// CHandle< CBaseEntity > original_controller; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MNetworkVarTypeOverride "CCSObserver_ObserverServices m_pObserverServices"
// MNetworkIncludeByName "m_pObserverServices"
// MNetworkVarTypeOverride "CCSObserver_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSObserver_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSObserver_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSObserver_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
class CCSObserverPawn : public CCSPlayerPawnBase
{
public:
	// Datamap fields:
	// CCSObserver_ObserverServices m_pObserverServices; // 0xa28
	// CCSObserver_MovementServices m_pMovementServices; // 0xa50
	// CCSObserver_UseServices m_pUseServices; // 0xa38
	// CCSObserver_ViewModelServices m_pViewModelServices; // 0xc18
	// CCSObserver_CameraServices m_pCameraServices; // 0xa48
};

// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x20a0
// Has VTable
// 
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
class CCSPlayerPawn : public CCSPlayerPawnBase
{
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x15a8	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x15b0	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x15b8	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x15c0	
	CCSPlayer_RadioServices* m_pRadioServices; // 0x15c8	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x15d0	
	uint16_t m_nCharacterDefIndex; // 0x15d8	
private:
	[[maybe_unused]] uint8_t __pad15da[0x6]; // 0x15da
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hPreviousModel; // 0x15e0	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15e9[0x7]; // 0x15e9
public:
	CUtlString m_strVOPrefix; // 0x15f0	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad160a[0xae]; // 0x160a
public:
	bool m_bInHostageResetZone; // 0x16b8	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x16b9	
	bool m_bWasInBuyZone; // 0x16ba	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x16bb	
	// MNetworkEnable
	bool m_bInBombZone; // 0x16bc	
	bool m_bWasInHostageRescueZone; // 0x16bd	
private:
	[[maybe_unused]] uint8_t __pad16be[0x2]; // 0x16be
public:
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0x16c0	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0x16c4	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x16c8	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x16c9	
private:
	[[maybe_unused]] uint8_t __pad16ca[0x2]; // 0x16ca
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x16cc	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x16d0	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x16d4	
	float m_flLandseconds; // 0x16d8	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x16dc	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x16e8	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x16f4	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x16f8	
private:
	[[maybe_unused]] uint8_t __pad16fc[0x4]; // 0x16fc
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x1700	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x1718	
private:
	[[maybe_unused]] uint8_t __pad1719[0x647]; // 0x1719
public:
	CTransform m_xLastHeadBoneTransform; // 0x1d60	
	bool m_bLastHeadBoneTransformIsValid; // 0x1d80	
private:
	[[maybe_unused]] uint8_t __pad1d81[0x3]; // 0x1d81
public:
	GameTime_t m_lastLandTime; // 0x1d84	
	bool m_bOnGroundLastTick; // 0x1d88	
private:
	[[maybe_unused]] uint8_t __pad1d89[0x3]; // 0x1d89
public:
	int32_t m_iPlayerLocked; // 0x1d8c	
private:
	[[maybe_unused]] uint8_t __pad1d90[0x4]; // 0x1d90
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1d94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1d98	
	bool m_bNextSprayDecalTimeExpedited; // 0x1d9c	
private:
	[[maybe_unused]] uint8_t __pad1d9d[0x3]; // 0x1d9d
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1da0	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1da4	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1db0	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1dbc	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1dfc	
private:
	[[maybe_unused]] uint8_t __pad1dfd[0x3]; // 0x1dfd
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1e00	
private:
	[[maybe_unused]] uint8_t __pad1e0c[0x4]; // 0x1e0c
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x1e10	
	// MNetworkEnable
	uint8_t m_nEconGlovesChanged; // 0x2088	
private:
	[[maybe_unused]] uint8_t __pad2089[0x3]; // 0x2089
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x208c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x2098	
	
	// Datamap fields:
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0xa10
	// CCSPlayer_ItemServices m_pItemServices; // 0xa18
	// CCSPlayer_UseServices m_pUseServices; // 0xa38
	// CCSPlayer_WaterServices m_pWaterServices; // 0xa30
	// CCSPlayer_MovementServices m_pMovementServices; // 0xa50
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0xc18
	// CCSPlayer_CameraServices m_pCameraServices; // 0xa48
	// void CCSPlayerPawnCheckStuffThink; // 0x0
	// void CCSPlayerPawnPushawayThink; // 0x0
	// void RescueZoneTouch; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
class CHostageExpresserShim : public CBaseCombatCharacter
{
public:
	CAI_Expresser* m_pExpresser; // 0xa10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2cb0
// Has VTable
// 
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkVarNames "Vector m_vel"
// MNetworkVarNames "bool m_isRescued"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "int m_nHostageState"
// MNetworkVarNames "CHandle< CBaseEntity> m_leader"
// MNetworkVarNames "CountdownTimer m_reuseTimer"
// MNetworkVarNames "bool m_bHandsHaveBeenCut"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
// MNetworkVarNames "GameTime_t m_flRescueStartTime"
// MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
// MNetworkVarNames "GameTime_t m_flDropStartTime"
class CHostage : public CHostageExpresserShim
{
private:
	[[maybe_unused]] uint8_t __pad0a18[0x10]; // 0xa18
public:
	CEntityIOOutput m_OnHostageBeginGrab; // 0xa28	
	CEntityIOOutput m_OnFirstPickedUp; // 0xa50	
	CEntityIOOutput m_OnDroppedNotRescued; // 0xa78	
	CEntityIOOutput m_OnRescued; // 0xaa0	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xac8	
	int32_t m_nSpotRules; // 0xae0	
	uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xae4	
	uint32_t m_nHostageSpawnRandomFactor; // 0xae8	
	bool m_bRemove; // 0xaec	
private:
	[[maybe_unused]] uint8_t __pad0aed[0x3]; // 0xaed
public:
	// MNetworkEnable
	Vector m_vel; // 0xaf0	
	// MNetworkEnable
	bool m_isRescued; // 0xafc	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xafd	
private:
	[[maybe_unused]] uint8_t __pad0afe[0x2]; // 0xafe
public:
	// MNetworkEnable
	int32_t m_nHostageState; // 0xb00	
	// MNetworkEnable
	CHandle< CBaseEntity > m_leader; // 0xb04	
	CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0xb10	
	bool m_hasBeenUsed; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b29[0x3]; // 0xb29
public:
	Vector m_accel; // 0xb2c	
	bool m_isRunning; // 0xb38	
	bool m_isCrouching; // 0xb39	
private:
	[[maybe_unused]] uint8_t __pad0b3a[0x6]; // 0xb3a
public:
	CountdownTimer m_jumpTimer; // 0xb40	
	bool m_isWaitingForLeader; // 0xb58	
private:
	[[maybe_unused]] uint8_t __pad0b59[0x200f]; // 0xb59
public:
	CountdownTimer m_repathTimer; // 0x2b68	
	CountdownTimer m_inhibitDoorTimer; // 0x2b80	
private:
	[[maybe_unused]] uint8_t __pad2b98[0x78]; // 0x2b98
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2c10	
private:
	[[maybe_unused]] uint8_t __pad2c28[0x8]; // 0x2c28
public:
	CountdownTimer m_wiggleTimer; // 0x2c30	
private:
	[[maybe_unused]] uint8_t __pad2c48[0x4]; // 0x2c48
public:
	bool m_isAdjusted; // 0x2c4c	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x2c4d	
private:
	[[maybe_unused]] uint8_t __pad2c4e[0x2]; // 0x2c4e
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2c50	
	GameTime_t m_fLastGrabTime; // 0x2c54	
	Vector m_vecPositionWhenStartedDroppingToGround; // 0x2c58	
	Vector m_vecGrabbedPos; // 0x2c64	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x2c70	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x2c74	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x2c78	
	int32_t m_nApproachRewardPayouts; // 0x2c7c	
	int32_t m_nPickupEventCount; // 0x2c80	
	Vector m_vecSpawnGroundPos; // 0x2c84	
private:
	[[maybe_unused]] uint8_t __pad2c90[0x14]; // 0x2c90
public:
	Vector m_vecHostageResetPosition; // 0x2ca4	
	
	// Datamap fields:
	// void HostageRescueZoneTouch; // 0x0
	// void CHostageHostageUse; // 0x0
	// void CHostageHostageThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2cb0
// Has VTable
class CHostageAlias_info_hostage_spawn : public CHostage
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
class CItemDefuserAlias_item_defuser : public CItemDefuser
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CAK47 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponAug : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponAWP : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponBizon : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponFamas : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponFiveSeven : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponG3SG1 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponGalilAR : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponGlock : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponHKP2000 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponUSPSilencer : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponM4A1 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponM4A1Silencer : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponMAC10 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponMag7 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponMP5SD : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponMP7 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponMP9 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponNegev : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponP250 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponCZ75a : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponP90 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponSCAR20 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponSG556 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponSSG08 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponTec9 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponUMP45 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponM249 : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponRevolver : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CMolotovGrenade : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CIncendiaryGrenade : public CMolotovGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CDecoyGrenade : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CFlashbang : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CHEGrenade : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec8
// Has VTable
class CSmokeGrenade : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

