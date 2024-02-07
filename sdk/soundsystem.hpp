#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: soundsystem.dll
// Classes count: 51
// Enums count: 13
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x1e
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

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x6
enum class ActionType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_ACTION_NONE = 0x0,
	// MPropertyFriendlyName "Limiter"
	SOS_ACTION_LIMITER = 0x1,
	// MPropertyFriendlyName "Time Limiter"
	SOS_ACTION_TIME_LIMIT = 0x2,
	// MPropertyFriendlyName "Timed Block Limiter"
	SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
	// MPropertyFriendlyName "Set Sound Event Parameter"
	SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
	// MPropertyFriendlyName "Soundevent Cluster"
	SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x3
enum class SosActionStopType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_STOPTYPE_NONE = 0x0,
	// MPropertyFriendlyName "Elapsed Time"
	SOS_STOPTYPE_TIME = 0x1,
	// MPropertyFriendlyName "Opvar"
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x2
enum class SosActionSortType_t : uint32_t
{
	// MPropertyFriendlyName "Highest"
	SOS_SORTTYPE_HIGHEST = 0x0,
	// MPropertyFriendlyName "Lowest"
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x2
enum class SosGroupType_t : uint32_t
{
	// MPropertyFriendlyName "Dynamic"
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	// MPropertyFriendlyName "Static"
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 4
// Size: 0x6
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 2
// Size: 0xa
enum class VMixFilterType_t : uint16_t
{
	FILTER_UNKNOWN = 0xffffffffffffffff,
	FILTER_LOWPASS = 0x0,
	FILTER_HIGHPASS = 0x1,
	FILTER_BANDPASS = 0x2,
	FILTER_NOTCH = 0x3,
	FILTER_PEAKING_EQ = 0x4,
	FILTER_LOW_SHELF = 0x5,
	FILTER_HIGH_SHELF = 0x6,
	FILTER_ALLPASS = 0x7,
	FILTER_PASSTHROUGH = 0x8,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 1
// Size: 0x9
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_1POLE_6dB = 0x0,
	FILTER_SLOPE_1POLE_12dB = 0x1,
	FILTER_SLOPE_1POLE_18dB = 0x2,
	FILTER_SLOPE_1POLE_24dB = 0x3,
	FILTER_SLOPE_12dB = 0x4,
	FILTER_SLOPE_24dB = 0x5,
	FILTER_SLOPE_36dB = 0x6,
	FILTER_SLOPE_48dB = 0x7,
	FILTER_SLOPE_MAX = 0x7,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 2
// Size: 0x1e
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
	VPROCESSOR_RT_PITCH = 0x2,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
	VPROCESSOR_DYNAMICS = 0x4,
	VPROCESSOR_PRESETDSP = 0x5,
	VPROCESSOR_DELAY = 0x6,
	VPROCESSOR_MOD_DELAY = 0x7,
	VPROCESSOR_DIFFUSOR = 0x8,
	VPROCESSOR_BOXVERB = 0x9,
	VPROCESSOR_FREEVERB = 0xa,
	VPROCESSOR_PLATEVERB = 0xb,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0xc,
	VPROCESSOR_FILTER = 0xd,
	VPROCESSOR_STEAMAUDIO_PATHING = 0xe,
	VPROCESSOR_EQ8 = 0xf,
	VPROCESSOR_ENVELOPE = 0x10,
	VPROCESSOR_VOCODER = 0x11,
	VPROCESSOR_CONVOLUTION = 0x12,
	VPROCESSOR_DYNAMICS_3BAND = 0x13,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 0x14,
	VPROCESSOR_SHAPER = 0x15,
	VPROCESSOR_PANNER = 0x16,
	VPROCESSOR_UTILITY = 0x17,
	VPROCESSOR_AUTOFILTER = 0x18,
	VPROCESSOR_OSC = 0x19,
	VPROCESSOR_STEREODELAY = 0x1a,
	VPROCESSOR_EFFECT_CHAIN = 0x1b,
	VPROCESSOR_SUBGRAPH_SWITCH = 0x1c,
	VPROCESSOR_STEAMAUDIO_DIRECT = 0x1d,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x5
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x2
enum class VMixPannerType_t : uint32_t
{
	PANNER_TYPE_LINEAR = 0x0,
	PANNER_TYPE_EQUAL_POWER = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x3
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x6
enum class VMixChannelOperation_t : uint32_t
{
	VMIX_CHAN_STEREO = 0x0,
	VMIX_CHAN_LEFT = 0x1,
	VMIX_CHAN_RIGHT = 0x2,
	VMIX_CHAN_SWAP = 0x3,
	VMIX_CHAN_MONO = 0x4,
	VMIX_CHAN_MID_SIDE = 0x5,
};

struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
struct VMixFilterDesc_t;

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionTimeBlockLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x1c	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Minimum Value"
	float m_flMinValue; // 0x1c	
	// MPropertyFriendlyName "Maximum Value"
	float m_flMaxValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Parameter Name"
	CUtlString m_opvarName; // 0x28	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x30	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSoundeventClusterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Minimum Nearby Soundevents"
	int32_t m_nMinNearby; // 0x18	
	// MPropertyFriendlyName "Search Radius to Cluster Soundevents"
	float m_flClusterEpsilon; // 0x1c	
	// MPropertyFriendlyName "'Should Play' Opvar Name"
	CUtlString m_shouldPlayOpvar; // 0x20	
	// MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
	CUtlString m_shouldPlayClusterChild; // 0x28	
	// MPropertyFriendlyName "Cluster Size Opvar Name"
	CUtlString m_clusterSizeOpvar; // 0x30	
	// MPropertyFriendlyName "'Group Box Mins' Opvar Name"
	CUtlString m_groupBoundingBoxMinsOpvar; // 0x38	
	// MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
	CUtlString m_groupBoundingBoxMaxsOpvar; // 0x40	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSosGroupBranchPattern
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
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

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xd0
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	// -> m_matchSoundEventName - 0x28
	// -> m_matchSoundEventSubString - 0x30
	// -> m_flEntIndex - 0x38
	// -> m_flOpvar - 0x3c
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	// -> m_bMatchEventName - 0x48
	// -> m_bMatchEventSubString - 0x49
	// -> m_bMatchEntIndex - 0x4a
	// -> m_bMatchOpvar - 0x4b
	CSosGroupBranchPattern m_branchPattern; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0050[0x60]; // 0x50
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xb0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0	
	CUtlString itemName; // 0x8	
	CUtlString itemTypeName; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlString itemKVString; // 0x20	
	Vector2D itemPos; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x8
// 
// MGetKV3ClassDefaults
class CSoundEventMetaData
{
public:
	CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector< CDspPresetModifierList > m_table; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	CUtlDict< CPiecewiseCurve, F( size=1 ) > m_curves; // 0x20	
	
	// Static fields:
	static int32_t &Get_nInvalidRenderJobId(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[0]->m_instance);};
	static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[1]->m_instance);};
	static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[2]->m_instance);};
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerDefault : public CVoiceContainerBase
{
public:
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerWavFileReader : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Wav File Path"
	// MPropertyDescription "The wav we're gonna play when we play this sound. "
	// MVSndPropertyGuaranteeConstant
	CUtlString m_wavFilePath; // 0x60	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerTestConstant : public CVoiceContainerWavFileReader
{
public:
	// MPropertyFriendlyName "Is Muted"
	// MPropertyDescription "This can be set on the vsound container, but is baked in at compile time."
	bool m_flTestConstantParam; // 0x68	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerTestNestedDynamic : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Sound To Play"
	// MPropertyDescription "The sound we're gonna play when we play this sound. "
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_SoundToPlay; // 0x60	
	// MPropertyFriendlyName "Filter Cutoff"
	// MPropertyDescription "This can be set on the vsound container, but is baked in at resource compile time."
	float m_flTestConstantParam; // 0x68	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerDecayingSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flFrequency; // 0x60	
	// MPropertyFriendlyName "Decay Time (Seconds)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flDecayTime; // 0x64	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave
{
public:
	// MPropertyFriendlyName "Attenuation Amount (dB)"
	// MPropertyDescription "The amount of attenuation ."
	// MVSndPropertyControlledAtRuntime
	float m_flGainAmount; // 0x68	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	// MVSndPropertyControlledAtRuntime
	float m_flCarrierFrequency; // 0x60	
	// MPropertyFriendlyName "Mod Frequency (Hz)"
	// MPropertyDescription "The frequency of the sine tone modulating this sine tone."
	// MVSndPropertyControlledAtRuntime
	float m_flModulatorFrequency; // 0x64	
	// MPropertyFriendlyName "Mod Amount (Hz)"
	// MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
	// MVSndPropertyControlledAtRuntime
	float m_flModulatorAmount; // 0x68	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerBlend : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "First Sound"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_hSoundOne; // 0x60	
	// MPropertyFriendlyName "Second Sound"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_hSoundTwo; // 0x68	
	// MPropertyFriendlyName "Blend Amount (0-1)"
	// MPropertyDescription "When set to zero, Only play First Sound. When set to 1, only play Second Sound. In between, we linearly mix the two."
	// MVSndPropertyControlledAtRuntime
	float m_flBlendAmount; // 0x70	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerEngineSound : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Sound To Play"
	// MPropertyDescription "The sound we're gonna play when we play this sound. "
	// MVSndPropertyGuaranteeConstant
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_SoundToPlay; // 0x60	
	// MPropertyFriendlyName "Loudness Target"
	// MPropertyDescription "This can be set on the vsound container, but is baked in at resource compile time."
	float m_flTestConstantParam; // 0x68	
	// MPropertyFriendlyName "Wobble Amount"
	// MPropertyDescription "This is settable via some kinda operator, and through that can be exposed to sound events. These make a vsnd container dynamic."
	// MVSndPropertyExposeToSoundEvents
	float m_flTestSoundEventBoundParam; // 0x6c	
	// MPropertyFriendlyName "Engine RPM Amount"
	// MVSndPropertyControlledAtRuntime
	// MPropertyDescription "This isn't editable in any prop editor, but can be modified in engine code."
	float m_flEngineRPM; // 0x70	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerWavFileReader
{
public:
	// MPropertyFriendlyName "Env Buffer"
	CUtlVector< float32 > m_envBuffer; // 0x68	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MGetKV3ClassDefaults
class CVoiceContainerRandomSampler : public CVoiceContainerBase
{
public:
	float m_flLoudAmplitude; // 0x60	
	float m_flLoudAmplitudeJitter; // 0x64	
	float m_flSoftAmplitude; // 0x68	
	float m_flSoftAmplitudeJitter; // 0x6c	
	float m_flLoudTimeJitter; // 0x70	
	float m_flSoftTimeJitter; // 0x74	
	CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // 0x78	
	
	// Static fields:
	static int32_t &Get_nInstancesFixed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerRandomSampler")->m_static_fields[0]->m_instance);};
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x80
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEQ8Desc_t
{
public:
	VMixFilterDesc_t m_stages[8]; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bEnableFilter; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flDelay; // 0x14	
	float m_flDirectGain; // 0x18	
	float m_flDelayGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flWidth; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPannerDesc_t
{
public:
	VMixPannerType_t m_type; // 0x0	
	float m_flStrength; // 0x4	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bPhaseInvert; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flGlideTime; // 0x14	
	float m_flDelay; // 0x18	
	float m_flOutputGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flModRate; // 0x24	
	float m_flModDepth; // 0x28	
	bool m_bApplyAntialiasing; // 0x2c	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDiffusorDesc_t
{
public:
	float m_flSize; // 0x0	
	float m_flComplexity; // 0x4	
	float m_flFeedback; // 0x8	
	float m_flOutputGain; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixFreeverbDesc_t
{
public:
	float m_flRoomSize; // 0x0	
	float m_flDamp; // 0x4	
	float m_flWidth; // 0x8	
	float m_flLateReflections; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x1c
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x30
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x24
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x24
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x90
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// -> m_fldbGainInput - 0x24
	// -> m_fldbGainOutput - 0x28
	// -> m_fldbThresholdBelow - 0x2c
	// -> m_fldbThresholdAbove - 0x30
	// -> m_flRatioBelow - 0x34
	// -> m_flRatioAbove - 0x38
	// -> m_flAttackTimeMS - 0x3c
	// -> m_flReleaseTimeMS - 0x40
	// -> m_bEnable - 0x44
	// -> m_bSolo - 0x45
	VMixDynamicsBand_t m_bandDesc[3]; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEnvelopeDesc_t
{
public:
	float m_flAttackTimeMS; // 0x0	
	float m_flHoldTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
	int32_t m_nQuality; // 0x8	
	int32_t m_nProcType; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x20
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flBassFreq; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEffectChainDesc_t
{
public:
	// MPropertyFriendlyName "Crossfade Time (s)"
	// MPropertyAttributeRange "0.1 10"
	float m_flCrossfadeTime; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0	
	bool m_bOnlyTailsOnFadeOut; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flInterpolationTime; // 0x8	
};

