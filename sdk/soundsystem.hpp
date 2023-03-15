#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: soundsystem.dll
// Class Count: 12
// Enum Count: 5
///////////////////////////////////////////

// Aligment: 4
// Size: 2
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
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

// Aligment: 2
// Size: 8
struct VSoundStack_t
{
public:
	CResourceString m_StackName; // 0x0
	CResourceString m_StackKV; // 0x4
};

// Aligment: 1
// Size: 8
struct VSoundStackScript_t
{
public:
	CResourceArray< VSoundStack_t > m_SoundStacks; // 0x0
};

// Aligment: 3
// Size: 12
struct VSoundEvent_t
{
public:
	CResourceString m_SoundName; // 0x0
	CResourceString m_GameData; // 0x4
	CResourceString m_OperatorsKV; // 0x8
};

// Aligment: 1
// Size: 8
struct VSoundEventScript_t
{
public:
	CResourceArray< VSoundEvent_t > m_SoundEvents; // 0x0
};

