#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: soundsystem.dll
// Class Count: 20
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
	// MPropertyAutoExpandSelf
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

// Aligment: 3
// Size: 12
struct vmix_envelope_desc_t
{
public:
	float m_flAttackTimeMS; // 0x0
	float m_flHoldTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
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

