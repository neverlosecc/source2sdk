#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: soundsystem.dll
// Class Count: 15
// Enum Count: 7
///////////////////////////////////////////

// Aligment: 4
// Size: 3
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
	SOS_ACTION_TIME_LIMIT = 0x2,
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
enum class SosActionSortType_t : uint32_t
{
	SOS_SORTTYPE_HIGHEST = 0x0,
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Aligment: 4
// Size: 2
enum class SosGroupType_t : uint32_t
{
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	SOS_GROUPTYPE_STATIC = 0x1,
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
// Size: 12
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

// Aligment: 1
// Size: 32
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18
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

// Aligment: 1
// Size: 24
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandGroup
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0
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

// Aligment: 1
// Size: 24
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0
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

// Aligment: 10
// Size: 40
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

// Aligment: 2
// Size: 8
struct vmix_pitch_shift_desc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0
	float m_flPitchShift; // 0x4
};

