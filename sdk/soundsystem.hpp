#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: soundsystem.dll
// Class Count: 36
// Enum Count: 13
///////////////////////////////////////////

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
// Size: 10
enum class VMixFilterType_t : uint16_t
{
	FILTER_UNKNOWN = 18446744073709551615,
	FILTER_LOWPASS = 0,
	FILTER_HIGHPASS = 1,
	FILTER_BANDPASS = 2,
	FILTER_NOTCH = 3,
	FILTER_PEAKING_EQ = 4,
	FILTER_LOW_SHELF = 5,
	FILTER_HIGH_SHELF = 6,
	FILTER_ALLPASS = 7,
	FILTER_PASSTHROUGH = 8,
};

// Aligment: 1
// Size: 9
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_1POLE_6dB = 0,
	FILTER_SLOPE_1POLE_12dB = 1,
	FILTER_SLOPE_1POLE_18dB = 2,
	FILTER_SLOPE_1POLE_24dB = 3,
	FILTER_SLOPE_12dB = 4,
	FILTER_SLOPE_24dB = 5,
	FILTER_SLOPE_36dB = 6,
	FILTER_SLOPE_48dB = 7,
	FILTER_SLOPE_MAX = 7,
};

// Aligment: 2
// Size: 30
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0,
	VPROCESSOR_STEAMAUDIO_REVERB = 1,
	VPROCESSOR_RT_PITCH = 2,
	VPROCESSOR_STEAMAUDIO_HRTF = 3,
	VPROCESSOR_DYNAMICS = 4,
	VPROCESSOR_PRESETDSP = 5,
	VPROCESSOR_DELAY = 6,
	VPROCESSOR_MOD_DELAY = 7,
	VPROCESSOR_DIFFUSOR = 8,
	VPROCESSOR_BOXVERB = 9,
	VPROCESSOR_FREEVERB = 10,
	VPROCESSOR_PLATEVERB = 11,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 12,
	VPROCESSOR_FILTER = 13,
	VPROCESSOR_STEAMAUDIO_PATHING = 14,
	VPROCESSOR_EQ8 = 15,
	VPROCESSOR_ENVELOPE = 16,
	VPROCESSOR_VOCODER = 17,
	VPROCESSOR_CONVOLUTION = 18,
	VPROCESSOR_DYNAMICS_3BAND = 19,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 20,
	VPROCESSOR_SHAPER = 21,
	VPROCESSOR_PANNER = 22,
	VPROCESSOR_UTILITY = 23,
	VPROCESSOR_AUTOFILTER = 24,
	VPROCESSOR_OSC = 25,
	VPROCESSOR_STEREODELAY = 26,
	VPROCESSOR_EFFECT_CHAIN = 27,
	VPROCESSOR_SUBGRAPH_SWITCH = 28,
	VPROCESSOR_STEAMAUDIO_DIRECT = 29,
};

// Aligment: 4
// Size: 5
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

// Aligment: 4
// Size: 2
enum class VMixPannerType_t : uint32_t
{
	PANNER_TYPE_LINEAR = 0x0,
	PANNER_TYPE_EQUAL_POWER = 0x1,
};

// Aligment: 4
// Size: 3
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

// Aligment: 4
// Size: 6
enum class VMixChannelOperation_t : uint32_t
{
	VMIX_CHAN_STEREO = 0x0,
	VMIX_CHAN_LEFT = 0x1,
	VMIX_CHAN_RIGHT = 0x2,
	VMIX_CHAN_SWAP = 0x3,
	VMIX_CHAN_MONO = 0x4,
	VMIX_CHAN_MID_SIDE = 0x5,
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

// Aligment: 1
// Size: 8
class CSoundEventMetaData
{
public:
	CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0
};

// Aligment: 6
// Size: 32
class CDSPMixgroupModifier
{
public:
	// MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
	// MPropertyFriendlyName "Mixgroup Name"
	CUtlString m_mixgroup; // 0x0
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Max reverb gain amount for listener DSP."
	float m_flModifier; // 0x8
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
	float m_flModifierMin; // 0xc
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
	float m_flSourceModifier; // 0x10
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
	float m_flSourceModifierMin; // 0x14
	// MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
	// MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
	float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18
};

// Aligment: 2
// Size: 32
class CDspPresetModifierList
{
public:
	// MPropertyDescription "Name of the DSP effect / subgraph used."
	// MPropertyFriendlyName "DSP Effect Name"
	CUtlString m_dspName; // 0x0
	// MPropertyDescription "Set of modifiers for individual mix groups"
	// MPropertyFriendlyName "Mixgroup Modifiers"
	CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8
};

// Aligment: 1
// Size: 24
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector< CDspPresetModifierList > m_table; // 0x0
};

// Aligment: 6
// Size: 16
struct VMixFilterDesc_t
{
public:
	VMixFilterType_t m_nFilterType; // 0x0
	VMixFilterSlope_t m_nFilterSlope; // 0x2
	bool m_bEnabled; // 0x3
	float m_fldbGain; // 0x4
	float m_flCutoffFreq; // 0x8
	float m_flQ; // 0xc
};

// Aligment: 1
// Size: 128
struct VMixEQ8Desc_t
{
public:
	VMixFilterDesc_t[8] m_stages; // 0x0
};

// Aligment: 7
// Size: 40
struct VMixDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0
	bool m_bEnableFilter; // 0x10
	float m_flDelay; // 0x14
	float m_flDirectGain; // 0x18
	float m_flDelayGain; // 0x1c
	float m_flFeedbackGain; // 0x20
	float m_flWidth; // 0x24
};

// Aligment: 2
// Size: 8
struct VMixPannerDesc_t
{
public:
	VMixPannerType_t m_type; // 0x0
	float m_flStrength; // 0x4
};

// Aligment: 9
// Size: 48
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0
	bool m_bPhaseInvert; // 0x10
	float m_flGlideTime; // 0x14
	float m_flDelay; // 0x18
	float m_flOutputGain; // 0x1c
	float m_flFeedbackGain; // 0x20
	float m_flModRate; // 0x24
	float m_flModDepth; // 0x28
	bool m_bApplyAntialiasing; // 0x2c
};

// Aligment: 4
// Size: 16
struct VMixDiffusorDesc_t
{
public:
	float m_flSize; // 0x0
	float m_flComplexity; // 0x4
	float m_flFeedback; // 0x8
	float m_flOutputGain; // 0xc
};

// Aligment: 17
// Size: 80
struct VMixBoxverbDesc_t
{
public:
	float m_flSizeMax; // 0x0
	float m_flSizeMin; // 0x4
	float m_flComplexity; // 0x8
	float m_flDiffusion; // 0xc
	float m_flModDepth; // 0x10
	float m_flModRate; // 0x14
	bool m_bParallel; // 0x18
	VMixFilterDesc_t m_filterType; // 0x1c
	float m_flWidth; // 0x2c
	float m_flHeight; // 0x30
	float m_flDepth; // 0x34
	float m_flFeedbackScale; // 0x38
	float m_flFeedbackWidth; // 0x3c
	float m_flFeedbackHeight; // 0x40
	float m_flFeedbackDepth; // 0x44
	float m_flOutputGain; // 0x48
	float m_flTaps; // 0x4c
};

// Aligment: 4
// Size: 16
struct VMixFreeverbDesc_t
{
public:
	float m_flRoomSize; // 0x0
	float m_flDamp; // 0x4
	float m_flWidth; // 0x8
	float m_flLateReflections; // 0xc
};

// Aligment: 7
// Size: 28
struct VMixPlateverbDesc_t
{
public:
	float m_flPrefilter; // 0x0
	float m_flInputDiffusion1; // 0x4
	float m_flInputDiffusion2; // 0x8
	float m_flDecay; // 0xc
	float m_flDamp; // 0x10
	float m_flFeedbackDiffusion1; // 0x14
	float m_flFeedbackDiffusion2; // 0x18
};

// Aligment: 12
// Size: 48
struct VMixDynamicsDesc_t
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
struct VMixDynamicsCompressorDesc_t
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
struct VMixDynamicsBand_t
{
public:
	// MPropertyFriendlyName "Input Gain (dB)"
	float m_fldbGainInput; // 0x0
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbGainOutput; // 0x4
	// MPropertyFriendlyName "Below Threshold(dB)"
	float m_fldbThresholdBelow; // 0x8
	// MPropertyFriendlyName "Above Threshold(dB)"
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

// Aligment: 10
// Size: 144
struct VMixDynamics3BandDesc_t
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
	VMixDynamicsBand_t[3] m_bandDesc; // 0x24
};

// Aligment: 3
// Size: 12
struct VMixEnvelopeDesc_t
{
public:
	float m_flAttackTimeMS; // 0x0
	float m_flHoldTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
};

// Aligment: 4
// Size: 16
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0
	float m_flPitchShift; // 0x4
	int32_t m_nQuality; // 0x8
	int32_t m_nProcType; // 0xc
};

// Aligment: 8
// Size: 32
struct VMixConvolutionDesc_t
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
struct VMixVocoderDesc_t
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

// Aligment: 5
// Size: 20
struct VMixShaperDesc_t
{
public:
	// MPropertyFriendlyName "Shape"
	// MPropertyAttributeRange "0 14"
	int32_t m_nShape; // 0x0
	// MPropertyFriendlyName "Drive (dB)"
	// MPropertyAttributeRange "0 36"
	float m_fldbDrive; // 0x4
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0x8
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0xc
	// MPropertyFriendlyName "Oversampling"
	int32_t m_nOversampleFactor; // 0x10
};

// Aligment: 6
// Size: 24
struct VMixUtilityDesc_t
{
public:
	// MPropertyFriendlyName "Channels"
	VMixChannelOperation_t m_nOp; // 0x0
	// MPropertyFriendlyName "Input Pan"
	// MPropertyAttributeRange "-1 1"
	float m_flInputPan; // 0x4
	// MPropertyFriendlyName "Output Balance"
	// MPropertyAttributeRange "-1 1"
	float m_flOutputBalance; // 0x8
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0xc
	bool m_bBassMono; // 0x10
	float m_flBassFreq; // 0x14
};

// Aligment: 8
// Size: 44
struct VMixAutoFilterDesc_t
{
public:
	float m_flEnvelopeAmount; // 0x0
	float m_flAttackTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
	VMixFilterDesc_t m_filter; // 0xc
	float m_flLFOAmount; // 0x1c
	float m_flLFORate; // 0x20
	float m_flPhase; // 0x24
	VMixLFOShape_t m_nLFOShape; // 0x28
};

// Aligment: 3
// Size: 12
struct VMixOscDesc_t
{
public:
	// MPropertyFriendlyName "Type"
	VMixLFOShape_t oscType; // 0x0
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyAttributeRange "0.1 16000"
	float m_freq; // 0x4
	// MPropertyFriendlyName "Phase (degrees)"
	// MPropertyAttributeRange "0 360"
	float m_flPhase; // 0x8
};

// Aligment: 1
// Size: 4
struct VMixEffectChainDesc_t
{
public:
	// MPropertyFriendlyName "Crossfade Time (s)"
	// MPropertyAttributeRange "0.1 10"
	float m_flCrossfadeTime; // 0x0
};

// Aligment: 3
// Size: 12
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0
	bool m_bOnlyTailsOnFadeOut; // 0x4
	float m_flInterpolationTime; // 0x8
};

