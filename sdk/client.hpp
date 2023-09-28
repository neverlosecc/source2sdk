#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: client.dll
// Classes count: 406
// Enums count: 8
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x5
enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t
{
	WATER_WAKE_NONE = 0x0,
	WATER_WAKE_IDLE = 0x1,
	WATER_WAKE_WALKING = 0x2,
	WATER_WAKE_RUNNING = 0x3,
	WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Alignment: 4
// Size: 0x6
enum class CompositeMaterialMatchFilterType_t : uint32_t
{
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
	MATCH_FILTER_MATERIAL_SHADER = 0x1,
	MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
	MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
	MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
};

// Alignment: 4
// Size: 0x2
enum class CompositeMaterialVarSystemVar_t : uint32_t
{
	COMPMATSYSVAR_COMPOSITETIME = 0x0,
	COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1,
};

// Alignment: 4
// Size: 0xe
enum class CompositeMaterialInputLooseVariableType_t : uint32_t
{
	LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
	LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
	LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
	LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
	LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
	LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
	LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
	LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
	LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
	LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
	LOOSE_VARIABLE_TYPE_STRING = 0xa,
	LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
	LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
	LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
};

// Alignment: 4
// Size: 0x7
enum class CompositeMaterialInputTextureType_t : uint32_t
{
	INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
	INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
	INPUT_TEXTURE_TYPE_COLOR = 0x2,
	INPUT_TEXTURE_TYPE_MASKS = 0x3,
	INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
	INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
	INPUT_TEXTURE_TYPE_AO = 0x6,
};

// Alignment: 4
// Size: 0xa
enum class CompMatPropertyMutatorType_t : uint32_t
{
	COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
	COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
	COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
	COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
	COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
	COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
	COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
	COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
	COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
	COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
};

// Alignment: 4
// Size: 0x3
enum class CompMatPropertyMutatorConditionType_t : uint32_t
{
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
};

// Alignment: 4
// Size: 0x6
enum class CompositeMaterialInputContainerSourceType_t : uint32_t
{
	CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
	CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
	CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
	CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
	CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
	CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
};

struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct CSkeletonInstance;
struct GameTime_t;
struct GameTick_t;
struct C_fogplayerparams_t;
struct audioparams_t;
struct fogparams_t;
struct CInButtonState;
struct CBaseAnimGraphController;
struct ModelConfigHandle_t;
struct CEntityInstance;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct HSequence;
struct CModelState;
struct CBodyComponent;
struct CNetworkTransmitComponent;
struct CRenderComponent;
struct CCollisionProperty;
struct CNetworkVelocityVector;
struct CParticleProperty;
struct C_EnvWindShared;
struct TimedEvent;
struct CFireOverlay;
struct C_RopeKeyframe;
struct sky3dparams_t;
struct C_SkyCamera;
struct VPhysicsCollisionAttribute_t;
struct CDecalInfo;
struct AttachmentHandle_t;
struct CAttributeManager;
struct C_EconItemView;
struct C_CSGameRules;
struct CCSGameModeRules;
struct C_RetakeGameRules;
struct WeaponPurchaseTracker_t;
struct CSMatchStats_t;
struct CompositeMaterialInputLooseVariable_t;
struct CEntityIOOutput;
struct C_PointCamera;
struct C_CommandContext;
struct CSkillFloat;
struct AmmoIndex_t;
struct CNetworkedSequenceOperation;
struct CAnimGraphNetworkedVariables;
struct AnimationUpdateListHandle_t;
struct CHitboxComponent;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
struct C_LightGlowOverlay;
struct C_FireSmoke;
struct ParticleIndex_t;
struct C_RopeKeyframe::CPhysicsDelegate;
struct CPointOffScreenIndicatorUi;
struct C_PointClientUIWorldPanel;
struct CAttributeList;
struct CBuoyancyHelper;
struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct CFiringModeFloat;
struct CFiringModeInt;
struct CPlayerSprayDecalRenderHelper;
struct CLightComponent;
struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
struct CountdownTimer;
struct shard_model_desc_t;
struct C_AttributeContainer;
struct EntitySpottedState_t;
struct CBasePlayerController;
struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct C_IronSightController;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct C_CSWeaponBase;
struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_GlowServices;
struct CCSPlayer_ActionTrackingServices;

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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 67
// Size: 0x1c8
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
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
};

// Alignment: 5
// Size: 0xd8
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
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

// Alignment: 2
// Size: 0x80
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x78	
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

// Alignment: 12
// Size: 0x210
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
};

// Alignment: 6
// Size: 0x58
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
	CHandle< C_BaseEntity > m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flObserverChaseDistance; // 0x50	
	GameTime_t m_flObserverChaseDistanceCalcTime; // 0x54	
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

// Alignment: 5
// Size: 0xa8
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	bool m_bAllowSwitchToNoWeapon; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x48	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x64	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x68	
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
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50	
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Alignment: 22
// Size: 0x12e0
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
	C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	C_NetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	C_NetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1a0	
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

// Alignment: 16
// Size: 0x1440
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
	bool m_bSequenceFinished; // 0x1320	
private:
	[[maybe_unused]] uint8_t __pad1321[0x3]; // 0x1321
public:
	// MNetworkDisable
	float m_flLastEventCycle; // 0x1324	
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x1328	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playbackRateChangedCompat"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x132c	
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x1334	
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChangedCompat"
	bool m_bClientSideAnimation; // 0x1338	
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x1339	
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0x133a	
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0x133b	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "clientSideAnimCycleResetCompat"
	int32_t m_nNewSequenceParity; // 0x133c	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_nResetEventsParity; // 0x1340	
	// MNetworkEnable
	AnimLoopMode_t m_nAnimLoopMode; // 0x1344	
private:
	[[maybe_unused]] uint8_t __pad1348[0x9c]; // 0x1348
public:
	// MNetworkDisable
	AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x13e4	
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x13e8	
};

// Alignment: 78
// Size: 0x540
class C_BaseEntity : public CEntityInstance
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
	[[maybe_unused]] uint8_t __pad01e8[0x120]; // 0x1e8
public:
	GameTick_t m_nLastThinkTick; // 0x308	
private:
	[[maybe_unused]] uint8_t __pad030c[0x4]; // 0x30c
public:
	CGameSceneNode* m_pGameSceneNode; // 0x310	
	CRenderComponent* m_pRenderComponent; // 0x318	
	CCollisionProperty* m_pCollision; // 0x320	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x328	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x32c	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x330	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x331	
private:
	[[maybe_unused]] uint8_t __pad0332[0x2]; // 0x332
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x334	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad0339[0x3]; // 0x339
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x33c	
	int32_t m_nNoInterpolationTick; // 0x340	
	int32_t m_nVisibilityNoInterpolationTick; // 0x344	
	float m_flProxyRandomValue; // 0x348	
	int32_t m_iEFlags; // 0x34c	
	uint8_t m_nWaterType; // 0x350	
	bool m_bInterpolateEvenWithNoModel; // 0x351	
	bool m_bPredictionEligible; // 0x352	
	bool m_bApplyLayerMatchIDToModel; // 0x353	
	CUtlStringToken m_tokLayerMatchID; // 0x354	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x358	
private:
	[[maybe_unused]] uint8_t __pad035c[0xc]; // 0x35c
public:
	int32_t m_nSimulationTick; // 0x368	
	int32_t m_iCurrentThinkContext; // 0x36c	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x370	
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; // 0x388	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x38c	
	uint8_t m_nSceneObjectOverrideFlags; // 0x390	
	bool m_bHasSuccessfullyInterpolated; // 0x391	
	bool m_bHasAddedVarsToInterpolation; // 0x392	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x393	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x394	
	uint16_t m_ListEntry[11]; // 0x39c	
private:
	[[maybe_unused]] uint8_t __pad03b2[0x2]; // 0x3b2
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3b4	
	float m_flSpeed; // 0x3b8	
	uint16_t m_EntClientFlags; // 0x3bc	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3be	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3bf	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3c0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3c4	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x3c8	
	Vector m_vecAbsVelocity; // 0x3cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3d8	
private:
	[[maybe_unused]] uint8_t __pad0400[0x8]; // 0x400
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x408	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x414	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x418	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x41c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x41d	
private:
	[[maybe_unused]] uint8_t __pad041e[0x2]; // 0x41e
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	float m_flWaterLevel; // 0x420	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x424	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x428	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x42c	
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; // 0x430	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x434	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x438	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; // 0x43c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x43d	
private:
	[[maybe_unused]] uint8_t __pad043e[0x2]; // 0x43e
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x440	
	uint16_t m_hThink; // 0x444	
private:
	[[maybe_unused]] uint8_t __pad0446[0xa]; // 0x446
public:
	uint8_t m_fBBoxVisFlags; // 0x450	
	bool m_bPredictable; // 0x451	
	bool m_bRenderWithViewModels; // 0x452	
private:
	[[maybe_unused]] uint8_t __pad0453[0x1]; // 0x453
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x454	
	int32_t m_nFirstPredictableCommand; // 0x458	
	int32_t m_nLastPredictableCommand; // 0x45c	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x460	
private:
	[[maybe_unused]] uint8_t __pad0464[0x4]; // 0x464
public:
	CParticleProperty m_Particles; // 0x468	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x490	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4a8	
private:
	[[maybe_unused]] uint8_t __pad04c0[0x18]; // 0x4c0
public:
	int32_t m_nNextScriptVarRecordID; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0xc]; // 0x4dc
public:
	QAngle m_vecAngVelocity; // 0x4e8	
	int32_t m_DataChangeEventRef; // 0x4f4	
	CUtlVector< CEntityHandle > m_dependencies; // 0x4f8	
	int32_t m_nCreationTick; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x15]; // 0x514
public:
	bool m_bAnimTimeChanged; // 0x529	
	bool m_bSimulationTimeChanged; // 0x52a	
private:
	[[maybe_unused]] uint8_t __pad052b[0xd]; // 0x52b
public:
	CUtlString m_sUniqueHammerID; // 0x538	
	
	// Static fields:
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
};

// Alignment: 0
// Size: 0x540
class CLogicalEntity : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x20
class C_BaseFlex::Emphasized_Phoneme
{
public:
	CUtlString m_sClassName; // 0x0	
	float m_flAmount; // 0x18	
	bool m_bRequired; // 0x1c	
	bool m_bBasechecked; // 0x1d	
	bool m_bValid; // 0x1e	
};

// Alignment: 18
// Size: 0x788
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x540	
	// MNetworkEnable
	float m_MinFalloff; // 0x54c	
	// MNetworkEnable
	float m_MaxFalloff; // 0x550	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x554	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x558	
	// MNetworkEnable
	float m_flMaxWeight; // 0x55c	
	// MNetworkEnable
	float m_flCurWeight; // 0x560	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x564	
	// MNetworkEnable
	bool m_bEnabled; // 0x764	
	// MNetworkEnable
	bool m_bMaster; // 0x765	
	// MNetworkEnable
	bool m_bClientSide; // 0x766	
	// MNetworkEnable
	bool m_bExclusive; // 0x767	
	bool m_bEnabledOnClient[1]; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
public:
	float m_flCurWeightOnClient[1]; // 0x76c	
	bool m_bFadingIn[1]; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0771[0x3]; // 0x771
public:
	float m_flFadeStartWeight[1]; // 0x774	
	float m_flFadeStartTime[1]; // 0x778	
	float m_flFadeDuration[1]; // 0x77c	
};

// Alignment: 29
// Size: 0x208
class C_EnvWindShared
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
	GameTime_t m_flVariationTime; // 0x70	
	GameTime_t m_flSwayTime; // 0x74	
	GameTime_t m_flSimTime; // 0x78	
	GameTime_t m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};

// Alignment: 3
// Size: 0x578
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x24]; // 0x544
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x568	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x56c	
};

// Alignment: 30
// Size: 0x2e0
class CProjectedTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc	
	// MNetworkEnable
	bool m_bState; // 0x10	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x14	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a	
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20	
	// MNetworkEnable
	Color m_LightColor; // 0x24	
	// MNetworkEnable
	float m_flIntensity; // 0x28	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30	
	// MNetworkEnable
	bool m_bVolumetric; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38	
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c	
	// MNetworkEnable
	float m_flAmbient; // 0x50	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x54	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x254	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x258	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x25c	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x260	
	// MNetworkEnable
	float m_flProjectionSize; // 0x264	
	// MNetworkEnable
	float m_flRotation; // 0x268	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x26c	
	
	// Static fields:
	static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Alignment: 4
// Size: 0x550
class C_BaseFire : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x540	
	// MNetworkEnable
	float m_flStartScale; // 0x544	
	// MNetworkEnable
	float m_flScaleTime; // 0x548	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x54c	
};

// Alignment: 2
// Size: 0x8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Alignment: 1
// Size: 0x10
class C_RopeKeyframe::CPhysicsDelegate
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	C_RopeKeyframe* m_pKeyframe; // 0x8	
};

// Alignment: 1
// Size: 0x18
struct C_SceneEntity__QueuedEvents_t
{
public:
	float starttime; // 0x0	
};

// Alignment: 0
// Size: 0x558
class C_TintController : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 13
// Size: 0x2e0
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIsOn; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
public:
	bool m_bMuzzleFlashEnabled; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	float m_flMuzzleFlashBrightness; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	Quaternion m_quatMuzzleFlashOrientation; // 0x30	
	Vector m_vecMuzzleFlashOrigin; // 0x40	
	float m_flFov; // 0x4c	
	float m_flFarZ; // 0x50	
	float m_flLinearAtten; // 0x54	
	bool m_bCastsShadows; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flCurrentPullBackDist; // 0x5c	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68	
	char m_textureName[64]; // 0x70	
};

// Alignment: 5
// Size: 0x14
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Alignment: 4
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18	
};

// Alignment: 15
// Size: 0xd0
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	uint16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Alignment: 0
// Size: 0x8
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 2
// Size: 0x548
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x540	
	CHandle< C_SkyCamera > m_hSkyCamera; // 0x544	
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

// Alignment: 13
// Size: 0x5b8
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x550	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x554	
	float m_flScaleRegister; // 0x558	
	float m_flScaleStart; // 0x55c	
	float m_flScaleEnd; // 0x560	
	GameTime_t m_flScaleTimeStart; // 0x564	
	GameTime_t m_flScaleTimeEnd; // 0x568	
	float m_flChildFlameSpread; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad0570[0x10]; // 0x570
public:
	float m_flClipPerc; // 0x580	
	bool m_bClipTested; // 0x584	
	bool m_bFadingOut; // 0x585	
private:
	[[maybe_unused]] uint8_t __pad0586[0x2]; // 0x586
public:
	TimedEvent m_tParticleSpawn; // 0x588	
	CFireOverlay* m_pFireOverlay; // 0x590	
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

// Alignment: 10
// Size: 0x98
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x58]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0x90	
};

// Alignment: 21
// Size: 0x78
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
// Size: 0x548
class C_EnvDetailController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x540	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x544	
};

// Alignment: 1
// Size: 0x748
class C_EnvWindClientside : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_EnvWindShared m_EnvWindShared; // 0x540	
};

// Alignment: 2
// Size: 0x8
struct C_EnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Alignment: 2
// Size: 0x8
struct C_EnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Alignment: 0
// Size: 0x540
class C_InfoLadderDismount : public C_BaseEntity
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
	C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38	
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

// Alignment: 0
// Size: 0x540
class C_GameRulesProxy : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
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
class C_MultiplayRules : public C_GameRules
{
public:
	// No members available
};

// Alignment: 14
// Size: 0x40
struct C_fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8	
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

// Alignment: 20
// Size: 0x210
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
	C_fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
	fogparams_t m_CurrentFog; // 0x140	
	CHandle< C_FogController > m_hOldFogController; // 0x1a8	
	bool m_bOverrideFogColor[5]; // 0x1ac	
	Color m_OverrideFogColor[5]; // 0x1b1	
	bool m_bOverrideFogStartEnd[5]; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	float m_fOverrideFogStart[5]; // 0x1cc	
	float m_fOverrideFogEnd[5]; // 0x1e0	
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x1f4	
	QAngle m_angDemoViewAngles; // 0x1f8	
};

// Alignment: 4
// Size: 0x5e0
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x540	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5d0	
	bool m_bUseAngles; // 0x5d4	
private:
	[[maybe_unused]] uint8_t __pad05d5[0x3]; // 0x5d5
public:
	C_SkyCamera* m_pNext; // 0x5d8	
};

// Alignment: 4
// Size: 0x70
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
	C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x1c]; // 0x4c
public:
	bool m_bDirty; // 0x68	
};

// Alignment: 0
// Size: 0x8
class C_SingleplayRules : public C_GameRules
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x560
class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x540	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x550	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x558	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x55c	
};

// Alignment: 0
// Size: 0x560
class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x560
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x560
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x560
class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x560
class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x8
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No members available
};

// Alignment: 30
// Size: 0x588
class C_TeamRoundTimer : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x544	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x548	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x54c	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x54d	
private:
	[[maybe_unused]] uint8_t __pad054e[0x2]; // 0x54e
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x550	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x554	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x558	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x560	
	// MNetworkEnable
	int32_t m_nState; // 0x564	
	// MNetworkEnable
	bool m_bStartPaused; // 0x568	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x569	
private:
	[[maybe_unused]] uint8_t __pad056a[0x2]; // 0x56a
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x56c	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x570	
	bool m_bFireFinished; // 0x571	
	bool m_bFire5MinRemain; // 0x572	
	bool m_bFire4MinRemain; // 0x573	
	bool m_bFire3MinRemain; // 0x574	
	bool m_bFire2MinRemain; // 0x575	
	bool m_bFire1MinRemain; // 0x576	
	bool m_bFire30SecRemain; // 0x577	
	bool m_bFire10SecRemain; // 0x578	
	bool m_bFire5SecRemain; // 0x579	
	bool m_bFire4SecRemain; // 0x57a	
	bool m_bFire3SecRemain; // 0x57b	
	bool m_bFire2SecRemain; // 0x57c	
	bool m_bFire1SecRemain; // 0x57d	
private:
	[[maybe_unused]] uint8_t __pad057e[0x2]; // 0x57e
public:
	int32_t m_nOldTimerLength; // 0x580	
	int32_t m_nOldTimerState; // 0x584	
};

// Alignment: 2
// Size: 0x20
class CComicBook
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyDescription "Cover image to use. Likely starts with file://{images}/comics/..."
	CPanoramaImageName m_CoverImage; // 0x8	
	// MPropertyDescription "Comic book xml file.  The xml that defines the layout and flow of the comic book."
	// MPropertyCustomFGDType
	CUtlString m_XmlFile; // 0x18	
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
	C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; // 0x8	
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

// Alignment: 6
// Size: 0x50
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x20	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOuter; // 0x24	
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

// Alignment: 27
// Size: 0x448
class C_EconItemView : public IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x58]; // 0x8
public:
	bool m_bInventoryImageRgbaRequested; // 0x60	
	bool m_bInventoryImageTriedCache; // 0x61	
private:
	[[maybe_unused]] uint8_t __pad0062[0x1e]; // 0x62
public:
	int32_t m_nInventoryImageRgbaWidth; // 0x80	
	int32_t m_nInventoryImageRgbaHeight; // 0x84	
	char m_szCurrentLoadCachedFileName[260]; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad018c[0x2c]; // 0x18c
public:
	bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x1]; // 0x1b9
public:
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; // 0x1ba	
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0x1bc	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	uint64_t m_iItemID; // 0x1c8	
	// MNetworkEnable
	uint32_t m_iItemIDHigh; // 0x1d0	
	// MNetworkEnable
	uint32_t m_iItemIDLow; // 0x1d4	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x1d8	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x8]; // 0x1e0
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x1e8	
	bool m_bIsStoreItem; // 0x1e9	
	bool m_bIsTradeItem; // 0x1ea	
private:
	[[maybe_unused]] uint8_t __pad01eb[0x1]; // 0x1eb
public:
	int32_t m_iEntityQuantity; // 0x1ec	
	int32_t m_iRarityOverride; // 0x1f0	
	int32_t m_iQualityOverride; // 0x1f4	
	uint8_t m_unClientFlags; // 0x1f8	
	uint8_t m_unOverrideStyle; // 0x1f9	
private:
	[[maybe_unused]] uint8_t __pad01fa[0x16]; // 0x1fa
public:
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x210	
	// MNetworkEnable
	CAttributeList m_NetworkedDynamicAttributes; // 0x270	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x2d0	
	char m_szCustomNameOverride[161]; // 0x371	
private:
	[[maybe_unused]] uint8_t __pad0412[0x2e]; // 0x412
public:
	bool m_bInitializedTags; // 0x440	
	
	// Static fields:
	static bool &Get_m_sbHasCleanedInventoryImageCacheDir(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EconItemView")->m_static_fields[0]->m_instance);};
};

// Alignment: 1
// Size: 0x4
struct C_EconEntity__AttachedModelData_t
{
public:
	int32_t m_iModelDisplayFlags; // 0x0	
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

// Alignment: 1
// Size: 0x548
class C_CSGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	C_CSGameRules* m_pGameRules; // 0x540	
};

// Alignment: 5
// Size: 0x118
class C_RetakeGameRules
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

// Alignment: 100
// Size: 0x1e78
class C_CSGameRules : public C_TeamplayRules
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x30	
	// MNetworkEnable
	bool m_bWarmupPeriod; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; // 0x34	
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; // 0x38	
	// MNetworkEnable
	int32_t m_nTotalPausedTicks; // 0x3c	
	// MNetworkEnable
	int32_t m_nPauseStartTick; // 0x40	
	// MNetworkEnable
	bool m_bServerPaused; // 0x44	
	// MNetworkEnable
	bool m_bGamePaused; // 0x45	
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; // 0x46	
	// MNetworkEnable
	bool m_bCTTimeOutActive; // 0x47	
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; // 0x48	
	// MNetworkEnable
	float m_flCTTimeOutRemaining; // 0x4c	
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; // 0x50	
	// MNetworkEnable
	int32_t m_nCTTimeOuts; // 0x54	
	// MNetworkEnable
	bool m_bTechnicalTimeOut; // 0x58	
	// MNetworkEnable
	bool m_bMatchWaitingForResume; // 0x59	
private:
	[[maybe_unused]] uint8_t __pad005a[0x2]; // 0x5a
public:
	// MNetworkEnable
	int32_t m_iRoundTime; // 0x5c	
	// MNetworkEnable
	float m_fMatchStartTime; // 0x60	
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; // 0x64	
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; // 0x68	
	// MNetworkEnable
	bool m_bGameRestart; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MNetworkEnable
	float m_flGameStartTime; // 0x70	
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; // 0x74	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; // 0x78	
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; // 0x7c	
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; // 0x80	
	// MNetworkEnable
	int32_t m_nOvertimePlaying; // 0x84	
	// MNetworkEnable
	int32_t m_iHostagesRemaining; // 0x88	
	// MNetworkEnable
	bool m_bAnyHostageReached; // 0x8c	
	// MNetworkEnable
	bool m_bMapHasBombTarget; // 0x8d	
	// MNetworkEnable
	bool m_bMapHasRescueZone; // 0x8e	
	// MNetworkEnable
	bool m_bMapHasBuyZone; // 0x8f	
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; // 0x94	
	// MNetworkEnable
	bool m_bIsValveDS; // 0x98	
	// MNetworkEnable
	bool m_bLogoMap; // 0x99	
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; // 0x9a	
private:
	[[maybe_unused]] uint8_t __pad009b[0x1]; // 0x9b
public:
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; // 0x9c	
	// MNetworkEnable
	int32_t m_MatchDevice; // 0xa0	
	// MNetworkEnable
	bool m_bHasMatchStarted; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a5[0x3]; // 0xa5
public:
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; // 0xa8	
	// MNetworkEnable
	char m_szTournamentEventName[512]; // 0xac	
	// MNetworkEnable
	char m_szTournamentEventStage[512]; // 0x2ac	
	// MNetworkEnable
	char m_szMatchStatTxt[512]; // 0x4ac	
	// MNetworkEnable
	char m_szTournamentPredictionsTxt[512]; // 0x6ac	
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; // 0x8ac	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; // 0x8b0	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; // 0x8b4	
	// MNetworkEnable
	bool m_bIsDroppingItems; // 0x8b8	
	// MNetworkEnable
	bool m_bIsQuestEligible; // 0x8b9	
private:
	[[maybe_unused]] uint8_t __pad08ba[0x2]; // 0x8ba
public:
	// MNetworkEnable
	int32_t m_nGuardianModeWaveNumber; // 0x8bc	
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialKillsRemaining; // 0x8c0	
	// MNetworkEnable
	int32_t m_nGuardianModeSpecialWeaponNeeded; // 0x8c4	
	int32_t m_nGuardianGrenadesToGiveBots; // 0x8c8	
	int32_t m_nNumHeaviesToSpawn; // 0x8cc	
	// MNetworkEnable
	uint32_t m_numGlobalGiftsGiven; // 0x8d0	
	// MNetworkEnable
	uint32_t m_numGlobalGifters; // 0x8d4	
	// MNetworkEnable
	uint32_t m_numGlobalGiftsPeriodSeconds; // 0x8d8	
	// MNetworkEnable
	uint32_t m_arrFeaturedGiftersAccounts[4]; // 0x8dc	
	// MNetworkEnable
	uint32_t m_arrFeaturedGiftersGifts[4]; // 0x8ec	
	// MNetworkEnable
	uint16_t m_arrProhibitedItemIndices[100]; // 0x8fc	
	// MNetworkEnable
	uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x9c4	
	// MNetworkEnable
	int32_t m_numBestOfMaps; // 0x9d4	
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; // 0x9d8	
	// MNetworkEnable
	bool m_bBombDropped; // 0x9dc	
	// MNetworkEnable
	bool m_bBombPlanted; // 0x9dd	
private:
	[[maybe_unused]] uint8_t __pad09de[0x2]; // 0x9de
public:
	// MNetworkEnable
	int32_t m_iRoundWinStatus; // 0x9e0	
	// MNetworkEnable
	int32_t m_eRoundWinReason; // 0x9e4	
	// MNetworkEnable
	bool m_bTCantBuy; // 0x9e8	
	// MNetworkEnable
	bool m_bCTCantBuy; // 0x9e9	
private:
	[[maybe_unused]] uint8_t __pad09ea[0x2]; // 0x9ea
public:
	// MNetworkEnable
	GameTime_t m_flGuardianBuyUntilTime; // 0x9ec	
	// MNetworkEnable
	int32_t m_iMatchStats_RoundResults[30]; // 0x9f0	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa68	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xae0	
	// MNetworkEnable
	float m_TeamRespawnWaveTimes[32]; // 0xb58	
	// MNetworkEnable
	GameTime_t m_flNextRespawnWave[32]; // 0xbd8	
	// MNetworkEnable
	int32_t m_nServerQuestID; // 0xc58	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xc5c	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xc68	
	// MNetworkEnable
	float m_MinimapVerticalSectionHeights[8]; // 0xc74	
	bool m_bDontIncrementCoopWave; // 0xc94	
	bool m_bSpawnedTerrorHuntHeavy; // 0xc95	
private:
	[[maybe_unused]] uint8_t __pad0c96[0x2]; // 0xc96
public:
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc98	
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xcc0	
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; // 0xce8	
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; // 0xcec	
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x1c]; // 0xcf4
public:
	bool m_bMarkClientStopRecordAtRoundEnd; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x57]; // 0xd11
public:
	// MNetworkEnable
	bool m_bMatchAbortedDueToPlayerBan; // 0xd68	
	bool m_bHasTriggeredRoundStartMusic; // 0xd69	
	bool m_bHasTriggeredCoopSpawnReset; // 0xd6a	
	bool m_bSwitchingTeamsAtRoundReset; // 0xd6b	
private:
	[[maybe_unused]] uint8_t __pad0d6c[0x1c]; // 0xd6c
public:
	// MNetworkEnable
	// MNetworkPolymorphic
	CCSGameModeRules* m_pGameModeRules; // 0xd88	
	// MNetworkEnable
	C_RetakeGameRules m_RetakeRules; // 0xd90	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x3]; // 0xea9
public:
	// MNetworkEnable
	int32_t m_nTTeamIntroVariant; // 0xeac	
	// MNetworkEnable
	int32_t m_nCTTeamIntroVariant; // 0xeb0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb5[0xfbb]; // 0xeb5
public:
	double m_flLastPerfSampleTime; // 0x1e70	
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

// Alignment: 3
// Size: 0x78
struct CSMatchStats_t : public CSPerRoundStats_t
{
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; // 0x68	
	// MNetworkEnable
	int32_t m_iEnemy4Ks; // 0x6c	
	// MNetworkEnable
	int32_t m_iEnemy3Ks; // 0x70	
};

// Alignment: 6
// Size: 0x9e0
class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x540	
	// MNetworkEnable
	int32_t m_nRandom; // 0x544	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x550	
	// MNetworkEnable
	uint64_t m_xuid; // 0x558	
	// MNetworkEnable
	C_EconItemView m_weaponItem; // 0x560	
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class CCSGO_WingmanIntroCharacterPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class C_CSMinimapBoundary : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x590
class C_PlayerPing : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x30]; // 0x540
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayer; // 0x570	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPingedEntity; // 0x574	
	// MNetworkEnable
	int32_t m_iType; // 0x578	
	// MNetworkEnable
	bool m_bUrgent; // 0x57c	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x57d	
};

// Alignment: 1
// Size: 0x48
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPlayerPing; // 0x40	
};

// Alignment: 10
// Size: 0x5d8
class C_CSPlayerResource : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x540	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x54c	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x558	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x588	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x594	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x5a0	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x5b0	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x5c0	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x5d0	
	bool m_foundGoalPositions; // 0x5d1	
};

// Alignment: 0
// Size: 0x40
class CPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 6
// Size: 0x228
class CCSPlayerBase_CameraServices : public CPlayer_CameraServices
{
public:
	// MNetworkEnable
	uint32_t m_iFOV; // 0x210	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x214	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x218	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x21c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; // 0x220	
	float m_flLastShotFOV; // 0x224	
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
	C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // 0x8	
};

// Alignment: 4
// Size: 0xf8
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:
	CHandle< C_BasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // 0x40	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x48	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xa0	
};

// Alignment: 1
// Size: 0x80
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
// Size: 0x90
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // 0x40	
};

// Alignment: 1
// Size: 0x230
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	float m_flDeathCamTilt; // 0x228	
};

// Alignment: 2
// Size: 0x48
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCarriedHostageProp; // 0x44	
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

// Alignment: 36
// Size: 0x4d8
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; // 0x210	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; // 0x214	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x220	
	// MNetworkEnable
	float m_flDuckAmount; // 0x224	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x228	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x22c	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x22d	
private:
	[[maybe_unused]] uint8_t __pad022e[0x2]; // 0x22e
public:
	float m_flDuckOffset; // 0x230	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x234	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x238	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x23c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0244[0xc]; // 0x244
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x250	
	bool m_duckUntilOnGround; // 0x258	
	bool m_bHasWalkMovedSinceLastJump; // 0x259	
	bool m_bInStuckTest; // 0x25a	
private:
	[[maybe_unused]] uint8_t __pad025b[0xd]; // 0x25b
public:
	float m_flStuckCheckTime[2][64]; // 0x268	
	int32_t m_nTraceCount; // 0x468	
	int32_t m_StuckLast; // 0x46c	
	bool m_bSpeedCropped; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0471[0x3]; // 0x471
public:
	int32_t m_nOldWaterLevel; // 0x474	
	float m_flWaterEntryTime; // 0x478	
	Vector m_vecForward; // 0x47c	
	Vector m_vecLeft; // 0x488	
	Vector m_vecUp; // 0x494	
	Vector m_vecPreviouslyPredictedOrigin; // 0x4a0	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4ac	
private:
	[[maybe_unused]] uint8_t __pad04ad[0x3]; // 0x4ad
public:
	float m_flJumpPressedTime; // 0x4b0	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4b4	
	// MNetworkEnable
	float m_flJumpVel; // 0x4b8	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4bc	
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4c0	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4c8	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4cc	
	// MNetworkEnable
	float m_flStamina; // 0x4d0	
	bool m_bUpdatePredictedOriginAfterDataUpdate; // 0x4d4	
};

// Alignment: 0
// Size: 0x40
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x50
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle< C_BaseViewModel > m_hViewModel[3]; // 0x40	
};

// Alignment: 3
// Size: 0x60
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_flWaterJumpTime; // 0x40	
	Vector m_vecWaterJumpVel; // 0x44	
	float m_flSwimSoundTime; // 0x50	
};

// Alignment: 3
// Size: 0xb0
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
};

// Alignment: 8
// Size: 0xb0
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	CEntityHandle m_hLastObserverTarget; // 0x58	
	Vector m_vecObserverInterpolateOffset; // 0x5c	
	Vector m_vecObserverInterpStartPos; // 0x68	
	float m_flObsInterp_PathLength; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	Quaternion m_qObsInterp_OrientationStart; // 0x80	
	Quaternion m_qObsInterp_OrientationTravelDir; // 0x90	
	ObserverInterpState_t m_obsInterpState; // 0xa0	
	bool m_bObserverInterpolationNeedsDeferredSetup; // 0xa4	
};

// Alignment: 0
// Size: 0x228
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

// Alignment: 4
// Size: 0x110
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40	
	// MNetworkEnable
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x108	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x10c	
};

// Alignment: 14
// Size: 0x70
class CDamageRecord
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_PlayerDamager; // 0x28	
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_PlayerRecipient; // 0x2c	
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
	C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48	
};

// Alignment: 5
// Size: 0x58
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	int32_t m_iAccount; // 0x40	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x44	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x48	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x4c	
	int32_t m_nPreviousAccount; // 0x50	
};

// Alignment: 8
// Size: 0x110
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
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTerroristLoadoutCacheChanged"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecTerroristLoadoutCache; // 0x70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCounterTerroristLoadoutCacheChanged"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecCounterTerroristLoadoutCache; // 0xc0	
};

// Alignment: 13
// Size: 0xb0
class C_IronSightController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIronSightAvailable; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flIronSightAmount; // 0x14	
	float m_flIronSightAmountGained; // 0x18	
	float m_flIronSightAmountBiased; // 0x1c	
	float m_flIronSightAmount_Interpolated; // 0x20	
	float m_flIronSightAmountGained_Interpolated; // 0x24	
	float m_flIronSightAmountBiased_Interpolated; // 0x28	
	float m_flInterpolationLastUpdated; // 0x2c	
	QAngle m_angDeltaAverage[8]; // 0x30	
	QAngle m_angViewLast; // 0x90	
	Vector2D m_vecDotCoords; // 0x9c	
	float m_flDotBlur; // 0xa4	
	float m_flSpeedRatio; // 0xa8	
};

// Alignment: 4
// Size: 0x20
struct CompositeMaterialMatchFilter_t
{
public:
	// MPropertyFriendlyName "Match Type"
	CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_strMatchFilter; // 0x8	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMatchValue; // 0x10	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x18	
};

// Alignment: 34
// Size: 0x270
struct CompositeMaterialInputLooseVariable_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttrStateCallback
	CUtlString m_strName; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Expose Externally"
	bool m_bExposeExternally; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Exposed Friendly Name"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyName; // 0x10	
	// MPropertyFriendlyName "Exposed Friendly Group"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyGroupName; // 0x18	
	// MPropertyFriendlyName "Exposed Fixed Range"
	// MPropertyAttrStateCallback
	bool m_bExposedVariableIsFixedRange; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Exposed SetVisible When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedVisibleWhenTrue; // 0x28	
	// MPropertyFriendlyName "Exposed SetHidden When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedHiddenWhenTrue; // 0x30	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Type"
	CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x38	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	bool m_bValueBoolean; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntX; // 0x40	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntY; // 0x44	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntZ; // 0x48	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntW; // 0x4c	
	// MPropertyFriendlyName "Specify Min/Max"
	// MPropertyAttrStateCallback
	bool m_bHasFloatBounds; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatX; // 0x54	
	// MPropertyFriendlyName "X Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Min; // 0x58	
	// MPropertyFriendlyName "X Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Max; // 0x5c	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatY; // 0x60	
	// MPropertyFriendlyName "Y Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Min; // 0x64	
	// MPropertyFriendlyName "Y Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Max; // 0x68	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatZ; // 0x6c	
	// MPropertyFriendlyName "Z Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Min; // 0x70	
	// MPropertyFriendlyName "Z Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Max; // 0x74	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatW; // 0x78	
	// MPropertyFriendlyName "W Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Min; // 0x7c	
	// MPropertyFriendlyName "W Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Max; // 0x80	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	Color m_cValueColor4; // 0x84	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strResourceMaterial; // 0x90	
	// MPropertyFriendlyName "Texture"
	// MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
	// MPropertyAttrStateCallback
	CUtlString m_strTextureContentAssetPath; // 0x170	
	// MPropertyHideField
	CResourceName m_strTextureRuntimeResourcePath; // 0x178	
	// MPropertyHideField
	CUtlString m_strTextureCompilationVtexTemplate; // 0x258	
	// MPropertyFriendlyName "Texture Type"
	// MPropertyAttrStateCallback
	CompositeMaterialInputTextureType_t m_nTextureType; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "String"
	// MPropertyAttrStateCallback
	CUtlString m_strString; // 0x268	
};

// Alignment: 5
// Size: 0x28
struct CompMatMutatorCondition_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Condition"
	CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0	
	// MPropertyFriendlyName "Container Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerName; // 0x8	
	// MPropertyFriendlyName "Variable Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarName; // 0x10	
	// MPropertyFriendlyName "Variable Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarValue; // 0x18	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x20	
};

// Alignment: 28
// Size: 0x368
struct CompMatPropertyMutator_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Mutator Command"
	// MPropertyAttrStateCallback
	CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4	
	// MPropertyFriendlyName "Container to Init With"
	// MPropertyAttrStateCallback
	CUtlString m_strInitWith_Container; // 0x8	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerSrc; // 0x10	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerProperty; // 0x18	
	// MPropertyFriendlyName "Target Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_TargetProperty; // 0x20	
	// MPropertyFriendlyName "Seed Input Var"
	// MPropertyAttrStateCallback
	CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28	
	// MPropertyFriendlyName "Input Vars"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // 0x30	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50	
	// MPropertyFriendlyName "Find Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58	
	// MPropertyFriendlyName "Replace Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68	
	// MPropertyFriendlyName "Target Texture Param"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_TargetParam; // 0x2d8	
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; // 0x2e0	
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; // 0x2e8	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Scratch Target"
	// MPropertyAttrStateCallback
	bool m_bIsScratchTarget; // 0x2ec	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; // 0x2ed	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; // 0x2ee	
private:
	[[maybe_unused]] uint8_t __pad02ef[0x1]; // 0x2ef
public:
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x2f0	
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x308	
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; // 0x320	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; // 0x328	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; // 0x330	
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; // 0x338	
	// MPropertyFriendlyName "Text Color"
	// MPropertyAttrStateCallback
	Color m_colDrawText_Color; // 0x340	
private:
	[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
public:
	// MPropertyFriendlyName "Font"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_Font; // 0x348	
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x350	
};

// Alignment: 8
// Size: 0x138
struct CompositeMaterialInputContainer_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Input Container Source"
	// MPropertyAttrStateCallback
	CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4	
	// MPropertyFriendlyName "Specific Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strSpecificContainerMaterial; // 0x8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrName; // 0xe8	
	// MPropertyFriendlyName "Alias"
	// MPropertyAttrStateCallback
	CUtlString m_strAlias; // 0xf0	
	// MPropertyFriendlyName "Variables"
	// MPropertyAttrStateCallback
	CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; // 0xf8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrNameForVar; // 0x110	
	// MPropertyFriendlyName "Expose Externally"
	// MPropertyAttrStateCallback
	bool m_bExposeExternally; // 0x118	
};

// Alignment: 4
// Size: 0x60
struct CompositeMaterialAssemblyProcedure_t
{
public:
	// MPropertyFriendlyName "Includes"
	// MPropertyAttributeEditor "AssetBrowse( vcompmat )"
	CUtlVector< CResourceName > m_vecCompMatIncludes; // 0x0	
	// MPropertyFriendlyName "Match Filters"
	CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // 0x18	
	// MPropertyFriendlyName "Composite Inputs"
	CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // 0x30	
	// MPropertyFriendlyName "Property Mutators"
	CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // 0x48	
};

// Alignment: 1
// Size: 0x50
struct GeneratedTextureHandle_t
{
public:
	// MPropertyFriendlyName "Generated Texture"
	// MPropertyAttributeEditor "CompositeMaterialTextureViewer"
	CUtlString m_strBitmapName; // 0x0	
};

// Alignment: 4
// Size: 0x60
struct CompositeMaterial_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyGroupName "Target Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_TargetKVs; // 0x8	
	// MPropertyGroupName "Pre-Generated Output Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_PreGenerationKVs; // 0x18	
	// MPropertyGroupName "Generated Composite Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_FinalKVs; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Generated Textures"
	CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // 0x40	
};

// Alignment: 8
// Size: 0x218
struct CompositeMaterialEditorPoint_t
{
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Target Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceName m_ModelName; // 0x0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation"
	int32_t m_nSequenceIndex; // 0xe0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation Cycle"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flCycle; // 0xe4	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Model Preview State"
	// MPropertyAttributeEditor "CompositeMaterialUserModelStateSetting"
	KeyValues3 m_KVModelStateChoices; // 0xe8	
	// MPropertyAutoRebuildOnChange
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Enable Child Model"
	bool m_bEnableChildModel; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Child Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	// MPropertyAttrStateCallback
	CResourceName m_ChildModelName; // 0x100	
	// MPropertyGroupName "Composite Material Assembly"
	// MPropertyFriendlyName "Composite Material Assembly Procedures"
	CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; // 0x1e0	
	// MPropertyFriendlyName "Generated Composite Materials"
	CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; // 0x1f8	
};

// Alignment: 3
// Size: 0x38
class CCompositeMaterialEditorDoc
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CompositeMaterialEditorPoint_t > m_Points; // 0x10	
	KeyValues3 m_KVthumbnail; // 0x28	
};

// Alignment: 43
// Size: 0x4c0
class CGlobalLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bSpotLight; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	Vector m_SpotLightOrigin; // 0x14	
	QAngle m_SpotLightAngles; // 0x20	
	Vector m_ShadowDirection; // 0x2c	
	Vector m_AmbientDirection; // 0x38	
	Vector m_SpecularDirection; // 0x44	
	Vector m_InspectorSpecularDirection; // 0x50	
	float m_flSpecularPower; // 0x5c	
	float m_flSpecularIndependence; // 0x60	
	Color m_SpecularColor; // 0x64	
	bool m_bStartDisabled; // 0x68	
	bool m_bEnabled; // 0x69	
	Color m_LightColor; // 0x6a	
	Color m_AmbientColor1; // 0x6e	
	Color m_AmbientColor2; // 0x72	
	Color m_AmbientColor3; // 0x76	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	float m_flSunDistance; // 0x7c	
	float m_flFOV; // 0x80	
	float m_flNearZ; // 0x84	
	float m_flFarZ; // 0x88	
	bool m_bEnableShadows; // 0x8c	
	bool m_bOldEnableShadows; // 0x8d	
	bool m_bBackgroundClearNotRequired; // 0x8e	
private:
	[[maybe_unused]] uint8_t __pad008f[0x1]; // 0x8f
public:
	float m_flCloudScale; // 0x90	
	float m_flCloud1Speed; // 0x94	
	float m_flCloud1Direction; // 0x98	
	float m_flCloud2Speed; // 0x9c	
	float m_flCloud2Direction; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0xc]; // 0xa4
public:
	float m_flAmbientScale1; // 0xb0	
	float m_flAmbientScale2; // 0xb4	
	float m_flGroundScale; // 0xb8	
	float m_flLightScale; // 0xbc	
	float m_flFoWDarkness; // 0xc0	
	bool m_bEnableSeparateSkyboxFog; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c5[0x3]; // 0xc5
public:
	Vector m_vFowColor; // 0xc8	
	Vector m_ViewOrigin; // 0xd4	
	QAngle m_ViewAngles; // 0xe0	
	float m_flViewFoV; // 0xec	
	Vector m_WorldPoints[8]; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad0150[0x358]; // 0x150
public:
	Vector2D m_vFogOffsetLayer0; // 0x4a8	
	Vector2D m_vFogOffsetLayer1; // 0x4b0	
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4b8	
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4bc	
};

// Alignment: 1
// Size: 0xa30
class C_GlobalLight : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x4c0]; // 0x540
public:
	uint16_t m_WindClothForceHandle; // 0xa00	
	
	// Static fields:
	static C_GlobalLight* &Get_sm_pGlobalLight(){return *reinterpret_cast<C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[0]->m_instance);};
	static CUtlStringToken &Get_sm_pSkyboxSlots(){return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[1]->m_instance);};
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights(){return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[2]->m_instance);};
};

// Alignment: 10
// Size: 0x590
class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x540	
	int32_t m_nPathIndex; // 0x548	
	Vector m_vInTangentLocal; // 0x54c	
	Vector m_vOutTangentLocal; // 0x558	
	float m_flFOV; // 0x564	
	float m_flSpeed; // 0x568	
	float m_flEaseIn; // 0x56c	
	float m_flEaseOut; // 0x570	
	Vector m_vInTangentWorld; // 0x574	
	Vector m_vOutTangentWorld; // 0x580	
};

// Alignment: 8
// Size: 0x5a0
class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:
	float m_flZFar; // 0x540	
	float m_flZNear; // 0x544	
	bool m_bLoop; // 0x548	
	bool m_bVerticalFOV; // 0x549	
	bool m_bConstantSpeed; // 0x54a	
private:
	[[maybe_unused]] uint8_t __pad054b[0x1]; // 0x54b
public:
	float m_flDuration; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad0550[0x40]; // 0x550
public:
	float m_flPathLength; // 0x590	
	float m_flPathDuration; // 0x594	
};

// Alignment: 0
// Size: 0x50
class CCSPlayer_GlowServices : public CPlayerPawnComponent
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x578
class C_VoteController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x10]; // 0x540
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteType"
	int32_t m_iActiveIssueIndex; // 0x550	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x554	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteOption"
	int32_t m_nVoteOptionCount[5]; // 0x558	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x56c	
	bool m_bVotesDirty; // 0x570	
	bool m_bTypeDirty; // 0x571	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x572	
};

// Alignment: 17
// Size: 0xe88
class C_MapVetoPickController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x10]; // 0x540
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x550	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x554	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x558	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x658	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x674	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x774	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x874	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x974	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa74	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb74	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc74	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd74	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe74	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe78	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe7c	
	int32_t m_nPostDataUpdateTick; // 0xe80	
	bool m_bDisabledHud; // 0xe84	
};

// Alignment: 0
// Size: 0x30
class CPlayerSprayDecalRenderHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No members available
};

// Alignment: 7
// Size: 0x5c0
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:
	int32_t m_nVariant; // 0x5a0	
	bool m_bDofEnabled; // 0x5a4	
private:
	[[maybe_unused]] uint8_t __pad05a5[0x3]; // 0x5a5
public:
	float m_flDofNearBlurry; // 0x5a8	
	float m_flDofNearCrisp; // 0x5ac	
	float m_flDofFarCrisp; // 0x5b0	
	float m_flDofFarBlurry; // 0x5b4	
	float m_flDofTiltToGround; // 0x5b8	
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x5c0
class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x9e0
class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x550
class C_CsmFovOverride : public C_BaseEntity
{
public:
	CUtlString m_cameraName; // 0x540	
	float m_flCsmFovOverrideValue; // 0x548	
};

// Alignment: 0
// Size: 0x540
class C_PointEntity : public C_BaseEntity
{
public:
	// No members available
};

// Alignment: 25
// Size: 0x1658
class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x1068]; // 0x540
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x15a8	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x15ac	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x15b0	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15b9[0x7]; // 0x15b9
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x15c0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x15c8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x15d0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x15d8	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x15e0	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x15ec	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x15f8	
	// MNetworkEnable
	bool m_bMoveable; // 0x1600	
private:
	[[maybe_unused]] uint8_t __pad1601[0x3]; // 0x1601
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1604	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x1608	
	// MNetworkEnable
	int32_t m_nPriority; // 0x160c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x1610	
private:
	[[maybe_unused]] uint8_t __pad1611[0x3]; // 0x1611
public:
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x1614	
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x1618	
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; // 0x1624	
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; // 0x1628	
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; // 0x162c	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; // 0x1630	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; // 0x1634	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; // 0x1638	
private:
	[[maybe_unused]] uint8_t __pad163c[0x15]; // 0x163c
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x1651	
};

// Alignment: 19
// Size: 0x638
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x88]; // 0x540
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5c8	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d1[0x3]; // 0x5d1
public:
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x5d4	
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x5d8	
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x5e4	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x5f0	
	// MNetworkEnable
	bool m_bMoveable; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05f9[0x3]; // 0x5f9
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x5fc	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x600	
	// MNetworkEnable
	int32_t m_nPriority; // 0x604	
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x608	
	// MNetworkEnable
	Vector m_vEdgeFadeDists; // 0x60c	
	// MNetworkEnable
	float m_flDiffuseScale; // 0x618	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x61c	
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x61d	
	// MNetworkEnable
	bool m_bDefaultSpecEnvMap; // 0x61e	
	// MNetworkEnable
	bool m_bIndoorCubeMap; // 0x61f	
	// MNetworkEnable
	bool m_bCopyDiffuseFromDefaultCubemap; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0621[0xf]; // 0x621
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x630	
};

// Alignment: 0
// Size: 0x638
class C_EnvCubemapBox : public C_EnvCubemap
{
public:
	// No members available
};

// Alignment: 18
// Size: 0x590
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x540	
	// MNetworkEnable
	float m_flStartDistance; // 0x544	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x548	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x550	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x554	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x558	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x55c	
	// MNetworkEnable
	float m_flLODBias; // 0x560	
	// MNetworkEnable
	bool m_bActive; // 0x564	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x565	
private:
	[[maybe_unused]] uint8_t __pad0566[0x2]; // 0x566
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x568	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x56c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x570	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x578	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x580	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x588	
	bool m_bFirstTime; // 0x589	
};

// Alignment: 16
// Size: 0x5d8
class C_GradientFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x54c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x3]; // 0x551
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x554	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x558	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x55c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x560	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x564	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x56c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x570	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x574	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x578	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x579	
	bool m_bGradientFogNeedsTextures; // 0x57a	
	
	// Static fields:
	static C_GradientFog* &Get_sm_pGradientFog(){return *reinterpret_cast<C_GradientFog**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GradientFog")->m_static_fields[0]->m_instance);};
};

// Alignment: 18
// Size: 0x1598
class C_EnvLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0xfe0]; // 0x540
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1520	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1528	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1530	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1538	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x1540	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x154c	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x1558	
	// MNetworkEnable
	bool m_bMoveable; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1561[0x3]; // 0x1561
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x1564	
	// MNetworkEnable
	int32_t m_nPriority; // 0x1568	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad156d[0x3]; // 0x156d
public:
	// MNetworkEnable
	int32_t m_nLightProbeSizeX; // 0x1570	
	// MNetworkEnable
	int32_t m_nLightProbeSizeY; // 0x1574	
	// MNetworkEnable
	int32_t m_nLightProbeSizeZ; // 0x1578	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasX; // 0x157c	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasY; // 0x1580	
	// MNetworkEnable
	int32_t m_nLightProbeAtlasZ; // 0x1584	
private:
	[[maybe_unused]] uint8_t __pad1588[0x9]; // 0x1588
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x1591	
};

// Alignment: 6
// Size: 0x570
class C_PlayerVisibility : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x544	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x54c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x550	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x551	
};

// Alignment: 8
// Size: 0x568
class C_TonemapController2 : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x540	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x544	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x548	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x54c	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x550	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x554	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x558	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x55c	
};

// Alignment: 28
// Size: 0x5c0
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x540	
	// MNetworkEnable
	float m_flAnisotropy; // 0x544	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x548	
	// MNetworkEnable
	float m_flDrawDistance; // 0x54c	
	// MNetworkEnable
	float m_flFadeInStart; // 0x550	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x554	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x558	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x55c	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x560	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x564	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x568	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x574	
	// MNetworkEnable
	bool m_bActive; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0581[0x3]; // 0x581
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x584	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x588	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x58c	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x590	
	// MNetworkEnable
	float m_flStartScattering; // 0x594	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x598	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x59c	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x5a0	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x5a4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5a8	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5a9	
	// MNetworkEnable
	bool m_bIsMaster; // 0x5aa	
private:
	[[maybe_unused]] uint8_t __pad05ab[0x5]; // 0x5ab
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5b0	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5b8	
	bool m_bFirstTime; // 0x5bc	
};

// Alignment: 7
// Size: 0x570
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x544	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x550	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	// MNetworkEnable
	float m_flStrength; // 0x560	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x564	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x568	
};

// Alignment: 3
// Size: 0x5b0
class C_FogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x540	
	bool m_bUseAngles; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x3]; // 0x5a9
public:
	int32_t m_iChangedVariables; // 0x5ac	
};

// Alignment: 0
// Size: 0x540
class CInfoTarget : public C_PointEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class CInfoParticleTarget : public C_PointEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x558
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x4]; // 0x540
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x544	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x548	
	// MNetworkEnable
	bool m_bEnabled; // 0x554	
};

// Alignment: 8
// Size: 0x588
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x540	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x568	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x570	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x578	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x579	
	bool m_bCreateAsChildSpawnGroup; // 0x57a	
private:
	[[maybe_unused]] uint8_t __pad057b[0x1]; // 0x57b
public:
	uint32_t m_hLayerSpawnGroup; // 0x57c	
	bool m_bWorldLayerActuallyVisible; // 0x580	
};

// Alignment: 25
// Size: 0x5a0
class C_PointCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x540	
	// MNetworkEnable
	float m_Resolution; // 0x544	
	// MNetworkEnable
	bool m_bFogEnable; // 0x548	
	// MNetworkEnable
	Color m_FogColor; // 0x549	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	// MNetworkEnable
	float m_flFogStart; // 0x550	
	// MNetworkEnable
	float m_flFogEnd; // 0x554	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x558	
	// MNetworkEnable
	bool m_bActive; // 0x55c	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x55d	
private:
	[[maybe_unused]] uint8_t __pad055e[0x2]; // 0x55e
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x560	
	// MNetworkEnable
	bool m_bNoSky; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	float m_fBrightness; // 0x568	
	// MNetworkEnable
	float m_flZFar; // 0x56c	
	// MNetworkEnable
	float m_flZNear; // 0x570	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x574	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x575	
private:
	[[maybe_unused]] uint8_t __pad0576[0x2]; // 0x576
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x578	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x57c	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x580	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x584	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x588	
	float m_TargetFOV; // 0x58c	
	float m_DegreesPerSecond; // 0x590	
	bool m_bIsOn; // 0x594	
private:
	[[maybe_unused]] uint8_t __pad0595[0x3]; // 0x595
public:
	C_PointCamera* m_pNext; // 0x598	
};

// Alignment: 1
// Size: 0x5a8
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x5a0	
};

// Alignment: 12
// Size: 0x5d0
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x540	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x548	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x550	
	float m_flTimeoutInterval; // 0x558	
	bool m_bAsynchronouslySpawnEntities; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x560	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x588	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x58c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x590	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5a8	
	HSCRIPT m_ScriptSpawnCallback; // 0x5c0	
	HSCRIPT m_ScriptCallbackScope; // 0x5c8	
};

// Alignment: 4
// Size: 0x568
class C_SoundAreaEntityBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x7]; // 0x541
public:
	bool m_bWasEnabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x7]; // 0x549
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x550	
	// MNetworkEnable
	Vector m_vPos; // 0x558	
};

// Alignment: 1
// Size: 0x570
class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x568	
};

// Alignment: 2
// Size: 0x580
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x568	
	// MNetworkEnable
	Vector m_vMax; // 0x574	
};

// Alignment: 4
// Size: 0x5f8
class C_Team : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x540	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x558	
	// MNetworkEnable
	int32_t m_iScore; // 0x570	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x574	
};

// Alignment: 15
// Size: 0x6c0
class CBasePlayerController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x8]; // 0x540
public:
	int32_t m_nFinalPredictedTick; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	C_CommandContext m_CommandContext; // 0x550	
	uint64_t m_nInButtonsWhichAreToggles; // 0x5d0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x5d8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x5dc	
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x5e0	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x5e4	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x5f0	
	bool m_bIsHLTV; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad0609[0x3]; // 0x609
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x60c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0690[0x8]; // 0x690
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x698	
	bool m_bIsLocalPlayerController; // 0x6a0	
private:
	[[maybe_unused]] uint8_t __pad06a1[0x3]; // 0x6a1
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6a4	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
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
// Size: 0x18e0
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x470	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x18b0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Alignment: 32
// Size: 0xcc0
class C_BaseModelEntity : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x4d0]; // 0x540
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0xa10	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a40[0x20]; // 0xa40
public:
	bool m_bInitModelEffects; // 0xa60	
	bool m_bIsStaticProp; // 0xa61	
private:
	[[maybe_unused]] uint8_t __pad0a62[0x2]; // 0xa62
public:
	int32_t m_nLastAddDecal; // 0xa64	
	int32_t m_nDecalsAdded; // 0xa68	
	int32_t m_iOldHealth; // 0xa6c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0xa70	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0xa71	
	bool m_bAllowFadeInView; // 0xa72	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0xa73	
private:
	[[maybe_unused]] uint8_t __pad0a77[0x1]; // 0xa77
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0ac8[0x18]; // 0xac8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0xae0	
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0xae4	
private:
	[[maybe_unused]] uint8_t __pad0ae5[0x3]; // 0xae5
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0xae8	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0xb98	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0xbf0	
	// MNetworkEnable
	float m_fadeMinDist; // 0xbf4	
	// MNetworkEnable
	float m_fadeMaxDist; // 0xbf8	
	// MNetworkEnable
	float m_flFadeScale; // 0xbfc	
	// MNetworkEnable
	float m_flShadowStrength; // 0xc00	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0xc04	
private:
	[[maybe_unused]] uint8_t __pad0c05[0x3]; // 0xc05
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0xc08	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0xc0c	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0xc18	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0xc24	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c2c[0x4]; // 0xc2c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc30	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c70[0x8]; // 0xc70
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0xc78	
	Color m_ClientOverrideTint; // 0xc80	
	bool m_bUseClientOverrideTint; // 0xc84	
};

// Alignment: 0
// Size: 0xcc0
class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc0
class C_ModelPointEntity : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 7
// Size: 0x598
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x540	
	CEntityIOOutput m_OnSpawn; // 0x568	
	bool m_bDisabled; // 0x590	
	bool m_bWaitForRefire; // 0x591	
	bool m_bTriggerOnce; // 0x592	
	bool m_bFastRetrigger; // 0x593	
	bool m_bPassthoughCaller; // 0x594	
};

// Alignment: 24
// Size: 0x1270
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0xcc0	
	// MNetworkEnable
	bool m_bActive; // 0xec0	
	// MNetworkEnable
	bool m_bFrozen; // 0xec1	
private:
	[[maybe_unused]] uint8_t __pad0ec2[0x2]; // 0xec2
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xec4	
	// MNetworkEnable
	int32_t m_nStopType; // 0xec8	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xecc	
private:
	[[maybe_unused]] uint8_t __pad0ecd[0x3]; // 0xecd
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xed0	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xed8	
	// MNetworkEnable
	float m_flPreSimTime; // 0xedc	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xee0	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xf10	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xf14	
	// MNetworkEnable
	bool m_bNoSave; // 0x1014	
	// MNetworkEnable
	bool m_bNoFreeze; // 0x1015	
	// MNetworkEnable
	bool m_bNoRamp; // 0x1016	
	bool m_bStartActive; // 0x1017	
	CUtlSymbolLarge m_iszEffectName; // 0x1018	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1020	
	int32_t m_nDataCP; // 0x1220	
	Vector m_vecDataCPValue; // 0x1224	
	int32_t m_nTintCP; // 0x1230	
	Color m_clrTint; // 0x1234	
private:
	[[maybe_unused]] uint8_t __pad1238[0x20]; // 0x1238
public:
	bool m_bOldActive; // 0x1258	
	bool m_bOldFrozen; // 0x1259	
};

// Alignment: 16
// Size: 0x648
class C_PathParticleRope : public C_BaseEntity
{
public:
	bool m_bStartActive; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	float m_flMaxSimulationTime; // 0x544	
	CUtlSymbolLarge m_iszEffectName; // 0x548	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x550	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x56c	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x570	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x574	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x580	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x588	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x5a0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5b8	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5d0	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5e8	
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x600	
};

// Alignment: 0
// Size: 0x648
class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope
{
public:
	// No members available
};

// Alignment: 7
// Size: 0xce8
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0xcc0	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0xcc1	
private:
	[[maybe_unused]] uint8_t __pad0cc2[0x2]; // 0xcc2
public:
	// MNetworkEnable
	float m_Radius; // 0xcc4	
	// MNetworkEnable
	int32_t m_Exponent; // 0xcc8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0xccc	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0xcd0	
	// MNetworkEnable
	float m_SpotRadius; // 0xcd4	
};

// Alignment: 9
// Size: 0x5d0
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x540	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x590	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x5b8	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5bc	
	// MNetworkEnable
	bool m_bIsActive; // 0x5c0	
	bool m_bWasActive; // 0x5c1	
private:
	[[maybe_unused]] uint8_t __pad05c2[0x2]; // 0x5c2
public:
	int32_t m_iCachedDesiredOverlay; // 0x5c4	
	int32_t m_iCurrentOverlay; // 0x5c8	
	GameTime_t m_flCurrentOverlayTime; // 0x5cc	
};

// Alignment: 3
// Size: 0xcd0
class C_FuncTrackTrain : public C_BaseModelEntity
{
public:
	int32_t m_nLongAxis; // 0xcc0	
	float m_flRadius; // 0xcc4	
	float m_flLineLength; // 0xcc8	
};

// Alignment: 7
// Size: 0xf8
class C_LightGlowOverlay : public CGlowOverlay
{
public:
	Vector m_vecOrigin; // 0xd0	
	Vector m_vecDirection; // 0xdc	
	int32_t m_nMinDist; // 0xe8	
	int32_t m_nMaxDist; // 0xec	
	int32_t m_nOuterMaxDist; // 0xf0	
	bool m_bOneSided; // 0xf4	
	bool m_bModulateByDot; // 0xf5	
};

// Alignment: 8
// Size: 0xdd8
class C_LightGlow : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0xcc0	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0xcc4	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0xcc8	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0xccc	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0xcd0	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0xcd4	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cdc[0x4]; // 0xcdc
public:
	C_LightGlowOverlay m_Glow; // 0xce0	
};

// Alignment: 1
// Size: 0x548
class C_RagdollManager : public C_BaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x540	
};

// Alignment: 2
// Size: 0xcd0
class C_SpotlightEnd : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0xcc0	
	// MNetworkEnable
	float m_Radius; // 0xcc4	
};

// Alignment: 25
// Size: 0x5b8
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x540	
	bool m_bDisabledOld; // 0x541	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x542	
private:
	[[maybe_unused]] uint8_t __pad0543[0x1]; // 0x543
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x544	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x548	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x54c	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x550	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x554	
	// MNetworkEnable
	float m_flEngageDistance; // 0x558	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x568	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x580	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x584	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x588	
	// MNetworkEnable
	float m_flSnapValue; // 0x58c	
	float m_flCurrentMomentum; // 0x590	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x594	
	float m_flRatchetOffset; // 0x598	
	// MNetworkEnable
	float m_flInputOffset; // 0x59c	
	bool m_bEngaged; // 0x5a0	
	bool m_bFirstUpdate; // 0x5a1	
private:
	[[maybe_unused]] uint8_t __pad05a2[0x2]; // 0x5a2
public:
	float m_flPreviousValue; // 0x5a4	
	GameTime_t m_flPreviousUpdateTickTime; // 0x5a8	
	Vector m_vecPreviousTestPoint; // 0x5ac	
};

// Alignment: 12
// Size: 0xf38
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	bool m_bForceRecreateNextUpdate; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0xf]; // 0xcc9
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xcd8	
	// MNetworkEnable
	char m_FontName[64]; // 0xed8	
	// MNetworkEnable
	bool m_bEnabled; // 0xf18	
	// MNetworkEnable
	bool m_bFullbright; // 0xf19	
private:
	[[maybe_unused]] uint8_t __pad0f1a[0x2]; // 0xf1a
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xf1c	
	// MNetworkEnable
	float m_flFontSize; // 0xf20	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf24	
	// MNetworkEnable
	Color m_Color; // 0xf28	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xf2c	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xf30	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xf34	
};

// Alignment: 2
// Size: 0x548
class C_HandleTest : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Handle; // 0x540	
	// MNetworkEnable
	bool m_bSendHandle; // 0x544	
};

// Alignment: 1
// Size: 0x748
class C_EnvWind : public C_BaseEntity
{
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; // 0x540	
};

// Alignment: 0
// Size: 0xcc0
class C_BaseToggle : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xcd0
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0xcc0	
	// MNetworkEnable
	bool m_usable; // 0xcc4	
private:
	[[maybe_unused]] uint8_t __pad0cc5[0x3]; // 0xcc5
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0xcc8	
};

// Alignment: 0
// Size: 0xcc0
class C_PrecipitationBlocker : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 13
// Size: 0xd08
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xcc8	
	// MNetworkEnable
	float m_flFadeInStart; // 0xccc	
	// MNetworkEnable
	float m_flFadeInLength; // 0xcd0	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0xcd4	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0xcd8	
	// MNetworkEnable
	float m_flFadeOutStart; // 0xcdc	
	// MNetworkEnable
	float m_flFadeOutLength; // 0xce0	
	GameTime_t m_flNextSparkTime; // 0xce4	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0xce8	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0xcec	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0xcf8	
	bool m_bCoreExplode; // 0xcfc	
	bool m_bLinkedToServerEnt; // 0xcfd	
};

// Alignment: 0
// Size: 0xfa8
class C_EnvProjectedTexture : public C_ModelPointEntity
{
public:
	// No members available
};

// Alignment: 9
// Size: 0xcf8
class C_EnvDecal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0xcc0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0xccc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0xcd0	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0xcd4	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0xcd8	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0xcd9	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0xcda	
private:
	[[maybe_unused]] uint8_t __pad0cdb[0x1]; // 0xcdb
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0xcdc	
};

// Alignment: 4
// Size: 0x110
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0	
	Vector m_vBaseColors[4]; // 0xd8	
	float m_flScale; // 0x108	
	int32_t m_nGUID; // 0x10c	
};

// Alignment: 0
// Size: 0xcc0
class C_FuncBrush : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 3
// Size: 0xcd8
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0x4]; // 0xcc4
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0xcc8	
	// MNetworkEnable
	bool m_bState; // 0xcd0	
};

// Alignment: 0
// Size: 0xcc0
class C_FuncRotating : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc0
class C_Breakable : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc0
class C_PhysBox : public C_Breakable
{
public:
	// No members available
};

// Alignment: 41
// Size: 0x10a8
class C_RopeKeyframe : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0xcc8	
	int32_t m_nLinksTouchingSomething; // 0xccc	
	bool m_bApplyWind; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
public:
	int32_t m_fPrevLockedPoints; // 0xcd4	
	int32_t m_iForcePointMoveCounter; // 0xcd8	
	bool m_bPrevEndPointPos[2]; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0cde[0x2]; // 0xcde
public:
	Vector m_vPrevEndPointPos[2]; // 0xce0	
	float m_flCurScroll; // 0xcf8	
	// MNetworkEnable
	float m_flScrollSpeed; // 0xcfc	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d02[0x6]; // 0xd02
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d10[0x270]; // 0xd10
public:
	Vector m_LightValues[10]; // 0xf80	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad0ff9[0x3]; // 0xff9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xffc	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0x1000	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x1004	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x1005	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x1006	
private:
	[[maybe_unused]] uint8_t __pad1007[0x1]; // 0x1007
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0x1008	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0x100a	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x100c	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x1010	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x1011	
private:
	[[maybe_unused]] uint8_t __pad1012[0x2]; // 0x1012
public:
	// MNetworkEnable
	float m_Width; // 0x1014	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1018	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1028	
	int32_t m_TextureHeight; // 0x1030	
	Vector m_vecImpulse; // 0x1034	
	Vector m_vecPreviousImpulse; // 0x1040	
	float m_flCurrentGustTimer; // 0x104c	
	float m_flCurrentGustLifetime; // 0x1050	
	float m_flTimeToNextGust; // 0x1054	
	Vector m_vWindDir; // 0x1058	
	Vector m_vColorMod; // 0x1064	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0x1070	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x1088	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x10a0	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad2: 4;
	}; // 8 bits
};

// Alignment: 12
// Size: 0x5a0
class C_SceneEntity : public C_PointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0540[0x8]; // 0x540
public:
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x548	
	// MNetworkEnable
	bool m_bPaused; // 0x549	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x54a	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x54b	
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x54c	
	// MNetworkEnable
	// MNetworkPriority "32"
	uint16_t m_nSceneStringIndex; // 0x550	
	bool m_bClientOnly; // 0x552	
private:
	[[maybe_unused]] uint8_t __pad0553[0x1]; // 0x553
public:
	CHandle< C_BaseFlex > m_hOwner; // 0x554	
	// MNetworkEnable
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList; // 0x558	
	bool m_bWasPlaying; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0xf]; // 0x571
public:
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x580	
	float m_flCurrentTime; // 0x598	
};

// Alignment: 1
// Size: 0xd8
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0	
};

// Alignment: 18
// Size: 0xd20
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xcc0	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0xcc4	
	float m_fdistNormalize; // 0xcc8	
	Vector m_vSunPos; // 0xccc	
	// MNetworkEnable
	Vector m_vDirection; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0xce8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0xcf0	
	// MNetworkEnable
	Color m_clrOverlay; // 0xcf8	
	// MNetworkEnable
	bool m_bOn; // 0xcfc	
	// MNetworkEnable
	bool m_bmaxColor; // 0xcfd	
private:
	[[maybe_unused]] uint8_t __pad0cfe[0x2]; // 0xcfe
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0xd00	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0xd04	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0xd08	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0xd0c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0xd10	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0xd14	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0xd18	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0xd1c	
};

// Alignment: 2
// Size: 0xcc8
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0xcc0	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0xcc1	
};

// Alignment: 0
// Size: 0xcc0
class C_TriggerVolume : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc8
class C_TriggerMultiple : public C_BaseTrigger
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc8
class C_TriggerLerpObject : public C_BaseTrigger
{
public:
	// No members available
};

// Alignment: 13
// Size: 0x30
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nReserved: 6; 		
		uint8_t __pad3: 8;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	GameTime_t m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Alignment: 24
// Size: 0xd80
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags
	float m_flFrameRate; // 0xcc0	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xcc4	
	GameTime_t m_flFireTime; // 0xcc8	
	float m_flDamage; // 0xccc	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
public:
	int32_t m_queryHandleHalo; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0cd8[0x20]; // 0xcd8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0xcf8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0xd00	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0xd08	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0xd0c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0xd10	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d42[0x2]; // 0xd42
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags
	float m_fWidth; // 0xd44	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags
	float m_fEndWidth; // 0xd48	
	// MNetworkEnable
	float m_fFadeLength; // 0xd4c	
	// MNetworkEnable
	float m_fHaloScale; // 0xd50	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_fAmplitude; // 0xd54	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_fStartFrame; // 0xd58	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0xd5c	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	// MNetworkPriority "32"
	float m_flFrame; // 0xd60	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0xd64	
	// MNetworkEnable
	bool m_bTurnedOff; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x3]; // 0xd69
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecEndPos; // 0xd6c	
	CHandle< C_BaseEntity > m_hEndEntity; // 0xd78	
};

// Alignment: 9
// Size: 0xd18
class C_FuncLadder : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderDir; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0x4]; // 0xccc
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0xcd0	
	Vector m_vecLocalTop; // 0xce8	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionTop; // 0xcf4	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecPlayerMountPositionBottom; // 0xd00	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0xd0c	
	bool m_bDisabled; // 0xd10	
	// MNetworkEnable
	bool m_bFakeLadder; // 0xd11	
	bool m_bHasSlack; // 0xd12	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
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

// Alignment: 24
// Size: 0xdf0
class C_Sprite : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x18]; // 0xcc0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0xcd8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0xce0	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce5[0x3]; // 0xce5
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags
	float m_flSpriteFramerate; // 0xce8	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_flFrame; // 0xcec	
	GameTime_t m_flDieTime; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0xc]; // 0xcf4
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0xd00	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0xd04	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0xd08	
	// MNetworkEnable
	float m_flScaleDuration; // 0xd0c	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x3]; // 0xd11
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags
	float m_flGlowProxySize; // 0xd14	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd18	
	GameTime_t m_flLastTime; // 0xd1c	
	float m_flMaxFrame; // 0xd20	
	float m_flStartScale; // 0xd24	
	float m_flDestScale; // 0xd28	
	GameTime_t m_flScaleTimeStart; // 0xd2c	
	int32_t m_nStartBrightness; // 0xd30	
	int32_t m_nDestBrightness; // 0xd34	
	GameTime_t m_flBrightnessTimeStart; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d3c[0x4]; // 0xd3c
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d48[0xa0]; // 0xd48
public:
	int32_t m_nSpriteWidth; // 0xde8	
	int32_t m_nSpriteHeight; // 0xdec	
};

// Alignment: 0
// Size: 0xdf0
class C_SpriteOriented : public C_Sprite
{
public:
	// No members available
};

// Alignment: 4
// Size: 0xcf0
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	// MNetworkEnable
	bool m_bEnabled; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x7]; // 0xcc9
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0xcd0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0xcd8	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0xce0	
};

// Alignment: 2
// Size: 0xcf8
class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0xcf0	
	bool m_bStartEnabled; // 0xcf4	
};

// Alignment: 13
// Size: 0xec8
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x8]; // 0xcf0
public:
	bool m_bCheckCSSClasses; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cf9[0x187]; // 0xcf9
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	float m_flWidth; // 0xe84	
	// MNetworkEnable
	float m_flHeight; // 0xe88	
	// MNetworkEnable
	float m_flDPI; // 0xe8c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xe90	
	// MNetworkEnable
	float m_flDepthOffset; // 0xe94	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xe98	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xe9c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xea0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xea4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x7]; // 0xea9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xeb0	
};

// Alignment: 28
// Size: 0xf20
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x8]; // 0xcf0
public:
	bool m_bForceRecreateNextUpdate; // 0xcf8	
	bool m_bMoveViewToPlayerNextThink; // 0xcf9	
	bool m_bCheckCSSClasses; // 0xcfa	
private:
	[[maybe_unused]] uint8_t __pad0cfb[0x5]; // 0xcfb
public:
	CTransform m_anchorDeltaTransform; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d20[0x180]; // 0xd20
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xea0	
private:
	[[maybe_unused]] uint8_t __pad0ea8[0x20]; // 0xea8
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xec8	
	// MNetworkEnable
	bool m_bLit; // 0xec9	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xeca	
private:
	[[maybe_unused]] uint8_t __pad0ecb[0x1]; // 0xecb
public:
	// MNetworkEnable
	float m_flWidth; // 0xecc	
	// MNetworkEnable
	float m_flHeight; // 0xed0	
	// MNetworkEnable
	float m_flDPI; // 0xed4	
	// MNetworkEnable
	float m_flInteractDistance; // 0xed8	
	// MNetworkEnable
	float m_flDepthOffset; // 0xedc	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xee0	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xee4	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xee8	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xeec	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef1[0x7]; // 0xef1
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xef8	
	// MNetworkEnable
	bool m_bOpaque; // 0xf10	
	// MNetworkEnable
	bool m_bNoDepth; // 0xf11	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xf12	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xf13	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xf14	
	// MNetworkEnable
	bool m_bGrabbable; // 0xf15	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xf16	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xf17	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xf18	
};

// Alignment: 4
// Size: 0xf30
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xf20	
	bool m_bHide; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	float m_flSeenTargetTime; // 0xf24	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xf28	
};

// Alignment: 1
// Size: 0x1120
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xf20	
};

// Alignment: 9
// Size: 0x728
class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x544	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x550	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x558	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x560	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0598[0x160]; // 0x598
public:
	bool m_bCheckCSSClasses; // 0x6f8	
};

// Alignment: 3
// Size: 0x4a8
class C_AttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	C_EconItemView m_Item; // 0x50	
	int32_t m_iExternalItemProviderRegisteredToken; // 0x498	
private:
	[[maybe_unused]] uint8_t __pad049c[0x4]; // 0x49c
public:
	uint64_t m_ullRegisteredAsItemID; // 0x4a0	
};

// Alignment: 1
// Size: 0xcd0
class CBombTarget : public C_BaseTrigger
{
public:
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0xcc8	
};

// Alignment: 0
// Size: 0xcc8
class CHostageRescueZoneShim : public C_BaseTrigger
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcd0
class CHostageRescueZone : public CHostageRescueZoneShim
{
public:
	// No members available
};

// Alignment: 2
// Size: 0xcf0
class C_TriggerBuoyancy : public C_BaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xcc8	
	// MNetworkEnable
	float m_flFluidDensity; // 0xce8	
};

// Alignment: 1
// Size: 0xce0
class CFuncWater : public C_BaseModelEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xcc0	
};

// Alignment: 0
// Size: 0xcc0
class CWaterSplasher : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x540
class C_InfoInstructorHintHostageRescueZone : public C_PointEntity
{
public:
	// No members available
};

// Alignment: 57
// Size: 0x848
class CCSPlayerController : public CBasePlayerController
{
private:
	[[maybe_unused]] uint8_t __pad06c0[0x10]; // 0x6c0
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6d0	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6d8	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6e0	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x6e8	
	// MNetworkEnable
	uint32_t m_iPing; // 0x6f0	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x6f4	
private:
	[[maybe_unused]] uint8_t __pad06f5[0x3]; // 0x6f5
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x6f8	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x704	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x708	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x70c	
private:
	[[maybe_unused]] uint8_t __pad070d[0x3]; // 0x70d
public:
	GameTime_t m_flPreviousForceJoinTeamTime; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0714[0x4]; // 0x714
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x718	
	CUtlString m_sSanitizedPlayerName; // 0x720	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072c[0x4]; // 0x72c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x730	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x738	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x740	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x744	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x3]; // 0x749
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x74c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x750	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x754	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x758	
	// MNetworkEnable
	uint16_t m_unActiveQuestId; // 0x75c	
private:
	[[maybe_unused]] uint8_t __pad075e[0x2]; // 0x75e
public:
	// MNetworkEnable
	QuestProgress::Reason m_nQuestProgressReason; // 0x760	
	// MNetworkEnable
	uint32_t m_unPlayerTvControlFlags; // 0x764	
private:
	[[maybe_unused]] uint8_t __pad0768[0x68]; // 0x768
public:
	int32_t m_iDraftIndex; // 0x7d0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7d4	
	uint32_t m_uiAbandonRecordedReason; // 0x7d8	
	bool m_bEverFullyConnected; // 0x7dc	
	bool m_bAbandonAllowsSurrender; // 0x7dd	
	bool m_bAbandonOffersInstantSurrender; // 0x7de	
	bool m_bDisconnection1MinWarningPrinted; // 0x7df	
	bool m_bScoreReported; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e1[0x3]; // 0x7e1
public:
	// MNetworkEnable
	int32_t m_nDisconnectionTick; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e8[0x8]; // 0x7e8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7f0	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7f1	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7f2	
private:
	[[maybe_unused]] uint8_t __pad07f3[0x1]; // 0x7f3
public:
	int32_t m_nBotsControlledThisRound; // 0x7f4	
	// MNetworkEnable
	bool m_bCanControlObservedBot; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07f9[0x3]; // 0x7f9
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x7fc	
	// MNetworkEnable
	CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x800	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MNetworkEnable
	uint32_t m_iPawnHealth; // 0x808	
	// MNetworkEnable
	int32_t m_iPawnArmor; // 0x80c	
	// MNetworkEnable
	bool m_bPawnHasDefuser; // 0x810	
	// MNetworkEnable
	bool m_bPawnHasHelmet; // 0x811	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x812	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x814	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x818	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x81c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x820	
	// MNetworkEnable
	int32_t m_iScore; // 0x824	
	// MNetworkEnable
	C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x828	
	// MNetworkEnable
	int32_t m_iMVPs; // 0x840	
	bool m_bIsPlayerNameDirty; // 0x844	
};

// Alignment: 2
// Size: 0xcd8
class C_FootstepControl : public C_BaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0xcc8	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0xcd0	
	
	// Static fields:
	static CUtlVector< C_FootstepControl* > &Get_sm_footstepControllers(){return *reinterpret_cast<CUtlVector< C_FootstepControl* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FootstepControl")->m_static_fields[0]->m_instance);};
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

// Alignment: 16
// Size: 0xdd0
class C_PlayerSprayDecal : public C_ModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0xcc0	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0xcc4	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0xcc8	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0xccc	
	// MNetworkEnable
	Vector m_vecEndPos; // 0xcd0	
	// MNetworkEnable
	Vector m_vecStart; // 0xcdc	
	// MNetworkEnable
	Vector m_vecLeft; // 0xce8	
	// MNetworkEnable
	Vector m_vecNormal; // 0xcf4	
	// MNetworkEnable
	int32_t m_nPlayer; // 0xd00	
	// MNetworkEnable
	int32_t m_nEntity; // 0xd04	
	// MNetworkEnable
	int32_t m_nHitbox; // 0xd08	
	// MNetworkEnable
	float m_flCreationTime; // 0xd0c	
	// MNetworkEnable
	int32_t m_nTintID; // 0xd10	
	// MNetworkEnable
	uint8_t m_nVersion; // 0xd14	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0xd15	
private:
	[[maybe_unused]] uint8_t __pad0d95[0xb]; // 0xd95
public:
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xda0	
};

// Alignment: 8
// Size: 0xd08
class C_FuncConveyor : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x8]; // 0xcc0
public:
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0xcc8	
	// MNetworkEnable
	float m_flTargetSpeed; // 0xcd4	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0xcd8	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0xcdc	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // 0xce8	
	float m_flCurrentConveyorOffset; // 0xd00	
	float m_flCurrentConveyorSpeed; // 0xd04	
};

// Alignment: 2
// Size: 0x11a0
class CGrenadeTracer : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x20]; // 0xcc0
public:
	float m_flTracerDuration; // 0xce0	
	GrenadeType_t m_nType; // 0xce4	
	
	// Static fields:
	static int32_t &Get_s_nColorIdx(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->m_static_fields[0]->m_instance);};
};

// Alignment: 23
// Size: -0x7d60
class C_Inferno : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x40]; // 0xcc0
public:
	ParticleIndex_t m_nfxFireDamageEffect; // 0xd00	
	// MNetworkEnable
	int32_t m_fireXDelta[64]; // 0xd04	
	// MNetworkEnable
	int32_t m_fireYDelta[64]; // 0xe04	
	// MNetworkEnable
	int32_t m_fireZDelta[64]; // 0xf04	
	// MNetworkEnable
	int32_t m_fireParentXDelta[64]; // 0x1004	
	// MNetworkEnable
	int32_t m_fireParentYDelta[64]; // 0x1104	
	// MNetworkEnable
	int32_t m_fireParentZDelta[64]; // 0x1204	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0x1304	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0x1344	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1644	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x1648	
	// MNetworkEnable
	float m_nFireLifetime; // 0x164c	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1651[0x3]; // 0x1651
public:
	int32_t m_lastFireCount; // 0x1654	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x1658	
private:
	[[maybe_unused]] uint8_t __pad165c[0x6c04]; // 0x165c
public:
	int32_t m_drawableCount; // 0x8260	
	bool m_blosCheck; // 0x8264	
private:
	[[maybe_unused]] uint8_t __pad8265[0x3]; // 0x8265
public:
	int32_t m_nlosperiod; // 0x8268	
	float m_maxFireHalfWidth; // 0x826c	
	float m_maxFireHeight; // 0x8270	
	Vector m_minBounds; // 0x8274	
	Vector m_maxBounds; // 0x8280	
	float m_flLastGrassBurnThink; // 0x828c	
};

// Alignment: 0
// Size: -0x7d60
class C_FireCrackerBlast : public C_Inferno
{
public:
	// No members available
};

// Alignment: 51
// Size: 0xf08
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0xcc4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0xccc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0xcd4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0xcd8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0xcdc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0xce0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0xce4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0xcf0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cfc[0x4]; // 0xcfc
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0xd00	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0xd18	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0xd30	
	CEntityIOOutput m_StyleEvent[4]; // 0xd48	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xde8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0xdf0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0xdf4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0xdf8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0xdfc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0xe00	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0xe04	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0xe10	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0xe14	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0xe20	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0xe24	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0xe30	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0xe34	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0xe38	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0xe3c	
private:
	[[maybe_unused]] uint8_t __pad0e3d[0x3]; // 0xe3d
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0xe40	
	// MNetworkEnable
	float m_flBounceScale; // 0xe44	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0xe48	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0xe4c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0xe58	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0xe5c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0xe60	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0xe64	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0xe68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0xe6c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0xe70	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0xe74	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0xe78	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0xe7c	
private:
	[[maybe_unused]] uint8_t __pad0e7d[0x3]; // 0xe7d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0xe80	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0xe8c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0xe98	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0xea4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xeb0	
};

// Alignment: 1
// Size: 0xf10
class C_RectLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xf08	
};

// Alignment: 3
// Size: 0xf18
class C_OmniLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xf08	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xf0c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xf10	
};

// Alignment: 10
// Size: 0x8a8
class C_CSTeam : public C_Team
{
public:
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x5f8	
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x7f8	
	// MNetworkEnable
	bool m_bSurrendered; // 0x7fc	
private:
	[[maybe_unused]] uint8_t __pad07fd[0x3]; // 0x7fd
public:
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x800	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x804	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x808	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x80c	
private:
	[[maybe_unused]] uint8_t __pad088d[0x3]; // 0x88d
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x890	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x894	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x89c	
};

// Alignment: 0
// Size: 0x1270
class C_MapPreviewParticleSystem : public C_ParticleSystem
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x558
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	float m_flRange; // 0x544	
	int32_t m_nImportance; // 0x548	
	int32_t m_nLightChoice; // 0x54c	
	CHandle< C_BaseEntity > m_hLight; // 0x550	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
};

// Alignment: 2
// Size: 0x570
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x558	
	Vector m_vBoxMaxs; // 0x564	
};

// Alignment: 12
// Size: 0xd20
class C_EnvSky : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0xcc0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0xcd1	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0xcd5	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0xcdc	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0xce0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0xce4	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0xce8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0xcec	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0xcf0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0xcf4	
};

// Alignment: 0
// Size: 0x568
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:
	// No members available
};

// Alignment: 1
// Size: 0xcc8
class C_LightEntity : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0xcc0	
};

// Alignment: 0
// Size: 0xcc8
class C_LightSpotEntity : public C_LightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc8
class C_LightOrthoEntity : public C_LightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc8
class C_LightDirectionalEntity : public C_LightEntity
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xcc8
class C_LightEnvironmentEntity : public C_LightDirectionalEntity
{
public:
	// No members available
};

// Alignment: 16
// Size: 0xd18
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x10]; // 0xcc8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0xcd8	
	// MNetworkEnable
	float m_flFadeDuration; // 0xce0	
	// MNetworkEnable
	float m_flMinLogExposure; // 0xce4	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0xce8	
	// MNetworkEnable
	float m_flMinExposure; // 0xcec	
	// MNetworkEnable
	float m_flMaxExposure; // 0xcf0	
	// MNetworkEnable
	float m_flExposureCompensation; // 0xcf4	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0xcf8	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0xcfc	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0xd00	
	// MNetworkEnable
	bool m_bMaster; // 0xd04	
	// MNetworkEnable
	bool m_bExposureControl; // 0xd05	
private:
	[[maybe_unused]] uint8_t __pad0d06[0x2]; // 0xd06
public:
	// MNetworkEnable
	float m_flRate; // 0xd08	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0xd0c	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0xd10	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0xd14	
};

// Alignment: 5
// Size: 0x1288
class C_EnvParticleGlow : public C_ParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0x1270	
	// MNetworkEnable
	float m_flRadiusScale; // 0x1274	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0x1278	
	// MNetworkEnable
	Color m_ColorTint; // 0x127c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0x1280	
};

// Alignment: 8
// Size: 0xcf8
class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	float m_flFPS; // 0xcc4	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0xcc8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0xcd0	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0xcd8	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0xce4	
	// MNetworkEnable
	float m_flStartTime; // 0xcf0	
	// MNetworkEnable
	float m_flStartFrame; // 0xcf4	
};

// Alignment: 0
// Size: 0xcc0
class C_World : public C_BaseModelEntity
{
public:
	// No members available
};

// Alignment: 13
// Size: 0xe80
class CBaseAnimGraph : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0xcc0	
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0xcc1	
private:
	[[maybe_unused]] uint8_t __pad0cc2[0x1]; // 0xcc2
public:
	bool m_bSuppressAnimEventSounds; // 0xcc3	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0xc]; // 0xcc4
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
public:
	float m_flMaxSlopeDistance; // 0xcd4	
	Vector m_vLastSlopeCheckPos; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	// MNetworkEnable
	Vector m_vecForce; // 0xce8	
	// MNetworkEnable
	int32_t m_nForceBone; // 0xcf4	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0xcf8	
	bool m_bBuiltRagdoll; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x17]; // 0xd01
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0xd18	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d21[0xf]; // 0xd21
public:
	bool m_bHasAnimatedMaterialAttributes; // 0xd30	
};

// Alignment: 4
// Size: 0xec0
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	int32_t m_iShapeType; // 0xe84	
	bool m_bConformToCollisionBounds; // 0xe88	
private:
	[[maybe_unused]] uint8_t __pad0e89[0x3]; // 0xe89
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xe8c	
};

// Alignment: 30
// Size: 0xfd0
class C_BreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0ec0[0x8]; // 0xec0
public:
	CEntityIOOutput m_OnBreak; // 0xec8	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xef0	
	CEntityIOOutput m_OnTakeDamage; // 0xf18	
	float m_impactEnergyScale; // 0xf40	
	int32_t m_iMinHealthDmg; // 0xf44	
	float m_flPressureDelay; // 0xf48	
	CHandle< C_BaseEntity > m_hBreaker; // 0xf4c	
	PerformanceMode_t m_PerformanceMode; // 0xf50	
	float m_flDmgModBullet; // 0xf54	
	float m_flDmgModClub; // 0xf58	
	float m_flDmgModExplosive; // 0xf5c	
	float m_flDmgModFire; // 0xf60	
private:
	[[maybe_unused]] uint8_t __pad0f64[0x4]; // 0xf64
public:
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xf68	
	CUtlSymbolLarge m_iszBasePropData; // 0xf70	
	int32_t m_iInteractions; // 0xf78	
	GameTime_t m_flPreventDamageBeforeTime; // 0xf7c	
	bool m_bHasBreakPiecesOrCommands; // 0xf80	
private:
	[[maybe_unused]] uint8_t __pad0f81[0x3]; // 0xf81
public:
	float m_explodeDamage; // 0xf84	
	float m_explodeRadius; // 0xf88	
private:
	[[maybe_unused]] uint8_t __pad0f8c[0x4]; // 0xf8c
public:
	float m_explosionDelay; // 0xf90	
private:
	[[maybe_unused]] uint8_t __pad0f94[0x4]; // 0xf94
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xf98	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xfa0	
	CUtlSymbolLarge m_explosionCustomSound; // 0xfa8	
	CUtlSymbolLarge m_explosionModifier; // 0xfb0	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xfb8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xfbc	
	float m_flDefaultFadeScale; // 0xfc0	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xfc4	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xfc8	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xfcc	
};

// Alignment: 25
// Size: 0x10e8
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xfd0	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xfd1	
private:
	[[maybe_unused]] uint8_t __pad0fd2[0x6]; // 0xfd2
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xfd8	
	CEntityIOOutput m_pOutputAnimOver; // 0x1000	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1028	
	CEntityIOOutput m_OnAnimReachedStart; // 0x1050	
	CEntityIOOutput m_OnAnimReachedEnd; // 0x1078	
	CUtlSymbolLarge m_iszDefaultAnim; // 0x10a0	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x10a8	
	bool m_bAnimateOnServer; // 0x10ac	
	bool m_bRandomizeCycle; // 0x10ad	
	bool m_bStartDisabled; // 0x10ae	
	bool m_bScriptedMovement; // 0x10af	
	bool m_bFiredStartEndOutput; // 0x10b0	
	bool m_bForceNpcExclude; // 0x10b1	
	bool m_bCreateNonSolid; // 0x10b2	
	bool m_bIsOverrideProp; // 0x10b3	
	int32_t m_iInitialGlowState; // 0x10b4	
	int32_t m_nGlowRange; // 0x10b8	
	int32_t m_nGlowRangeMin; // 0x10bc	
	Color m_glowColor; // 0x10c0	
	int32_t m_nGlowTeam; // 0x10c4	
	int32_t m_iCachedFrameCount; // 0x10c8	
	Vector m_vecCachedRenderMins; // 0x10cc	
	Vector m_vecCachedRenderMaxs; // 0x10d8	
};

// Alignment: 0
// Size: 0x10e8
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x10e8
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x10e8
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp
{
public:
	// No members available
};

// Alignment: 9
// Size: 0xef0
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0xcc8	
	float m_LastEnterTime; // 0xccc	
	float m_LastExitWeight; // 0xcd0	
	float m_LastExitTime; // 0xcd4	
	// MNetworkEnable
	bool m_bEnabled; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	// MNetworkEnable
	float m_MaxWeight; // 0xcdc	
	// MNetworkEnable
	float m_FadeDuration; // 0xce0	
	// MNetworkEnable
	float m_Weight; // 0xce4	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0xce8	
};

// Alignment: 8
// Size: 0x1180
class C_FuncMonitor : public C_FuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0xcc0	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0xcc8	
	// MNetworkEnable
	bool m_bRenderShadows; // 0xccc	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0xccd	
private:
	[[maybe_unused]] uint8_t __pad0cce[0x2]; // 0xcce
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0xcd0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0xcd8	
	// MNetworkEnable
	bool m_bEnabled; // 0xcdc	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0xcdd	
};

// Alignment: 0
// Size: 0xcc0
class C_FuncMoveLinear : public C_BaseToggle
{
public:
	// No members available
};

// Alignment: 2
// Size: 0xeb0
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xe80	
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xe98	
};

// Alignment: 13
// Size: 0xed0
class C_PointCommentaryNode : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x8]; // 0xe80
public:
	// MNetworkEnable
	bool m_bActive; // 0xe88	
	bool m_bWasActive; // 0xe89	
private:
	[[maybe_unused]] uint8_t __pad0e8a[0x2]; // 0xe8a
public:
	GameTime_t m_flEndTime; // 0xe8c	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xe90	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xe94	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xe98	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xea0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xea8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xeb0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xeb4	
	// MNetworkEnable
	bool m_bListenedTo; // 0xeb8	
private:
	[[maybe_unused]] uint8_t __pad0eb9[0xf]; // 0xeb9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xec8	
	bool m_bRestartAfterRestore; // 0xecc	
};

// Alignment: 0
// Size: 0xe80
class C_WaterBullet : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 1
// Size: 0xcc8
class C_BaseDoor : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bIsUsable; // 0xcc0	
};

// Alignment: 19
// Size: 0x1018
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x10]; // 0xe80
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xe90	
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0xc]; // 0xeb4
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xec0	
private:
	[[maybe_unused]] uint8_t __pad0ec1[0x5f]; // 0xec1
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xf20	
	Vector m_CachedViewTarget; // 0xf24	
	uint32_t m_nNextSceneEventId; // 0xf30	
	int32_t m_iBlink; // 0xf34	
	float m_blinktime; // 0xf38	
	bool m_prevblinktoggle; // 0xf3c	
private:
	[[maybe_unused]] uint8_t __pad0f3d[0x3]; // 0xf3d
public:
	int32_t m_iJawOpen; // 0xf40	
	float m_flJawOpenAmount; // 0xf44	
	float m_flBlinkAmount; // 0xf48	
	AttachmentHandle_t m_iMouthAttachment; // 0xf4c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf4d	
	bool m_bResetFlexWeightsOnModelChange; // 0xf4e	
private:
	[[maybe_unused]] uint8_t __pad0f4f[0x19]; // 0xf4f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xf68	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xf6c	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xf9c	
private:
	[[maybe_unused]] uint8_t __pad0fa8[0x10]; // 0xfa8
public:
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xfb8	
};

// Alignment: 14
// Size: 0xf18
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xe80	
	bool m_bImportant; // 0xe81	
private:
	[[maybe_unused]] uint8_t __pad0e82[0x2]; // 0xe82
public:
	GameTime_t m_flEffectTime; // 0xe84	
	GameTime_t m_gibDespawnTime; // 0xe88	
	int32_t m_iCurrentFriction; // 0xe8c	
	int32_t m_iMinFriction; // 0xe90	
	int32_t m_iMaxFriction; // 0xe94	
	int32_t m_iFrictionAnimState; // 0xe98	
	bool m_bReleaseRagdoll; // 0xe9c	
	AttachmentHandle_t m_iEyeAttachment; // 0xe9d	
	bool m_bFadingOut; // 0xe9e	
private:
	[[maybe_unused]] uint8_t __pad0e9f[0x1]; // 0xe9f
public:
	float m_flScaleEnd[10]; // 0xea0	
	GameTime_t m_flScaleTimeStart[10]; // 0xec8	
	GameTime_t m_flScaleTimeEnd[10]; // 0xef0	
};

// Alignment: 8
// Size: 0xd18
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0xc]; // 0xccc
public:
	float m_flParticleInnerDist; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cdc[0x4]; // 0xcdc
public:
	char* m_pParticleDef; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x20]; // 0xce8
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd08	
	bool m_bActiveParticlePrecipEmitter[1]; // 0xd10	
	bool m_bParticlePrecipInitialized; // 0xd11	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd12	
private:
	[[maybe_unused]] uint8_t __pad0d13[0x1]; // 0xd13
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd14	
};

// Alignment: 2
// Size: 0xe00
class C_FireSprite : public C_Sprite
{
public:
	Vector m_vecMoveDir; // 0xdf0	
	bool m_bFadeFromAbove; // 0xdfc	
};

// Alignment: 0
// Size: 0xdf0
class C_FireFromAboveSprite : public C_Sprite
{
public:
	// No members available
};

// Alignment: 23
// Size: 0xf70
class C_Fish : public CBaseAnimGraph
{
public:
	Vector m_pos; // 0xe80	
	Vector m_vel; // 0xe8c	
	QAngle m_angles; // 0xe98	
	int32_t m_localLifeState; // 0xea4	
	float m_deathDepth; // 0xea8	
	float m_deathAngle; // 0xeac	
	float m_buoyancy; // 0xeb0	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0x4]; // 0xeb4
public:
	CountdownTimer m_wiggleTimer; // 0xeb8	
	float m_wigglePhase; // 0xed0	
	float m_wiggleRate; // 0xed4	
	Vector m_actualPos; // 0xed8	
	QAngle m_actualAngles; // 0xee4	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_poolOrigin; // 0xef0	
	// MNetworkEnable
	float m_waterLevel; // 0xefc	
	bool m_gotUpdate; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f01[0x3]; // 0xf01
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xf04	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xf08	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xf0c	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xf10	
	float m_errorHistory[20]; // 0xf14	
	int32_t m_errorHistoryIndex; // 0xf64	
	int32_t m_errorHistoryCount; // 0xf68	
	float m_averageError; // 0xf6c	
};

// Alignment: 1
// Size: 0xfd8
class C_PhysicsProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bAwake; // 0xfd0	
};

// Alignment: 7
// Size: 0x1128
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad10e8[0x10]; // 0x10e8
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0x10f8	
	bool m_modelChanged; // 0x10fc	
	// MNetworkEnable
	bool m_bLocked; // 0x10fd	
private:
	[[maybe_unused]] uint8_t __pad10fe[0x2]; // 0x10fe
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0x1100	
	// MNetworkEnable
	QAngle m_closedAngles; // 0x110c	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0x1118	
	Vector m_vWhereToSetLightingOrigin; // 0x111c	
};

// Alignment: 15
// Size: 0x1028
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0xfd0	
	GameTime_t m_fDeathTime; // 0xfd4	
	float m_impactEnergyScale; // 0xfd8	
	float m_inertiaScale; // 0xfdc	
	float m_flDmgModBullet; // 0xfe0	
	float m_flDmgModClub; // 0xfe4	
	float m_flDmgModExplosive; // 0xfe8	
	float m_flDmgModFire; // 0xfec	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xff0	
	CUtlSymbolLarge m_iszBasePropData; // 0xff8	
	int32_t m_iInteractions; // 0x1000	
	bool m_bHasBreakPiecesOrCommands; // 0x1004	
private:
	[[maybe_unused]] uint8_t __pad1005[0x3]; // 0x1005
public:
	Vector m_vecDamagePosition; // 0x1008	
	Vector m_vecDamageDirection; // 0x1014	
	int32_t m_nDamageType; // 0x1020	
};

// Alignment: 8
// Size: 0xef8
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x8]; // 0xe80
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xe88	
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xea0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags
	float m_flBlendWeight; // 0xeb8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xebc	
	AttachmentHandle_t m_iEyeAttachment; // 0xec0	
private:
	[[maybe_unused]] uint8_t __pad0ec1[0x3]; // 0xec1
public:
	float m_flBlendWeightCurrent; // 0xec4	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xec8	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xee0	
};

// Alignment: 25
// Size: 0xf40
class C_LocalTempEntity : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x18]; // 0xe80
public:
	int32_t flags; // 0xe98	
	GameTime_t die; // 0xe9c	
	float m_flFrameMax; // 0xea0	
	float x; // 0xea4	
	float y; // 0xea8	
	float fadeSpeed; // 0xeac	
	float bounceFactor; // 0xeb0	
	int32_t hitSound; // 0xeb4	
	int32_t priority; // 0xeb8	
	Vector tentOffset; // 0xebc	
	QAngle m_vecTempEntAngVelocity; // 0xec8	
	int32_t tempent_renderamt; // 0xed4	
	Vector m_vecNormal; // 0xed8	
	float m_flSpriteScale; // 0xee4	
	int32_t m_nFlickerFrame; // 0xee8	
	float m_flFrameRate; // 0xeec	
	float m_flFrame; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0x4]; // 0xef4
public:
	char* m_pszImpactEffect; // 0xef8	
	char* m_pszParticleEffect; // 0xf00	
	bool m_bParticleCollision; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0x3]; // 0xf09
public:
	int32_t m_iLastCollisionFrame; // 0xf0c	
	Vector m_vLastCollisionOrigin; // 0xf10	
	Vector m_vecTempEntVelocity; // 0xf1c	
	Vector m_vecPrevAbsOrigin; // 0xf28	
	Vector m_vecTempEntAcceleration; // 0xf34	
};

// Alignment: 1
// Size: 0x1040
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad0fd8[0x8]; // 0xfd8
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xfe0	
};

// Alignment: 20
// Size: 0x1560
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad1018[0x10]; // 0x1018
public:
	float m_flFlexDelayTime; // 0x1028	
private:
	[[maybe_unused]] uint8_t __pad102c[0x4]; // 0x102c
public:
	float32* m_flFlexDelayedWeight; // 0x1030	
	bool m_bAttributesInitialized; // 0x1038	
private:
	[[maybe_unused]] uint8_t __pad1039[0x7]; // 0x1039
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1040	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x14e8	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x14ec	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0x14f0	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0x14f4	
	// MNetworkEnable
	float m_flFallbackWear; // 0x14f8	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0x14fc	
	bool m_bClientside; // 0x1500	
	bool m_bParticleSystemsCreated; // 0x1501	
private:
	[[maybe_unused]] uint8_t __pad1502[0x6]; // 0x1502
public:
	CUtlVector< int32 > m_vecAttachedParticles; // 0x1508	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1520	
	int32_t m_iOldTeam; // 0x1524	
	bool m_bAttachmentDirty; // 0x1528	
private:
	[[maybe_unused]] uint8_t __pad1529[0x3]; // 0x1529
public:
	int32_t m_nUnloadedModelIndex; // 0x152c	
	int32_t m_iNumOwnerValidationRetries; // 0x1530	
private:
	[[maybe_unused]] uint8_t __pad1534[0xc]; // 0x1534
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1544[0x4]; // 0x1544
public:
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1548	
};

// Alignment: 2
// Size: 0x1568
class C_EconWearable : public C_EconEntity
{
public:
	int32_t m_nForceSkin; // 0x1560	
	bool m_bAlwaysAllow; // 0x1564	
};

// Alignment: 12
// Size: 0x1068
class C_BaseGrenade : public C_BaseFlex
{
public:
	bool m_bHasWarnedAI; // 0x1018	
	bool m_bIsSmokeGrenade; // 0x1019	
	// MNetworkEnable
	bool m_bIsLive; // 0x101a	
private:
	[[maybe_unused]] uint8_t __pad101b[0x1]; // 0x101b
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	float m_DmgRadius; // 0x101c	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x1020	
	float m_flWarnAITime; // 0x1024	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags
	float m_flDamage; // 0x1028	
private:
	[[maybe_unused]] uint8_t __pad102c[0x4]; // 0x102c
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x1030	
	CUtlString m_ExplosionSound; // 0x1038	
private:
	[[maybe_unused]] uint8_t __pad1040[0x4]; // 0x1040
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hThrower; // 0x1044	
private:
	[[maybe_unused]] uint8_t __pad1048[0x14]; // 0x1048
public:
	GameTime_t m_flNextAttack; // 0x105c	
	CHandle< C_CSPlayerPawn > m_hOriginalThrower; // 0x1060	
};

// Alignment: 0
// Size: 0xfd8
class C_PhysicsPropMultiplayer : public C_PhysicsProp
{
public:
	// No members available
};

// Alignment: 1
// Size: 0xe88
class C_ViewmodelWeapon : public CBaseAnimGraph
{
public:
	char* m_worldModel; // 0xe80	
};

// Alignment: 17
// Size: 0xee8
class C_BaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x8]; // 0xe80
public:
	Vector m_vecLastFacing; // 0xe88	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0xe94	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0xe98	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0xe9c	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hWeapon; // 0xea0	
private:
	[[maybe_unused]] uint8_t __pad0ea4[0x4]; // 0xea4
public:
	CUtlSymbolLarge m_sVMName; // 0xea8	
	CUtlSymbolLarge m_sAnimationPrefix; // 0xeb0	
	CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0xeb8	
	AttachmentHandle_t m_iCameraAttachment; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
public:
	QAngle m_vecLastCameraAngles; // 0xec0	
	float m_previousElapsedDuration; // 0xecc	
	float m_previousCycle; // 0xed0	
	int32_t m_nOldAnimationParity; // 0xed4	
	HSequence m_hOldLayerSequence; // 0xed8	
	int32_t m_oldLayer; // 0xedc	
	float m_oldLayerStartTime; // 0xee0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xee4	
};

// Alignment: 0
// Size: 0xe80
class C_ViewmodelAttachmentModel : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 2
// Size: 0xf10
class C_PredictedViewModel : public C_BaseViewModel
{
public:
	QAngle m_LagAnglesHistory; // 0xee8	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0xc]; // 0xef4
public:
	Vector m_vPredictedOffset; // 0xf00	
};

// Alignment: 0
// Size: 0xe80
class C_WorldModelStattrak : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe80
class C_WorldModelNametag : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 15
// Size: 0x10f0
class C_BaseCSGrenadeProjectile : public C_BaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x1068	
	// MNetworkEnable
	int32_t m_nBounces; // 0x1074	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x1078	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0x1080	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0x1084	
	GameTime_t m_flSpawnTime; // 0x1090	
	Vector vecLastTrailLinePos; // 0x1094	
	GameTime_t flNextTrailLineTime; // 0x10a0	
	bool m_bExplodeEffectBegan; // 0x10a4	
	bool m_bCanCreateGrenadeTrail; // 0x10a5	
private:
	[[maybe_unused]] uint8_t __pad10a6[0x2]; // 0x10a6
public:
	ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x10a8	
private:
	[[maybe_unused]] uint8_t __pad10ac[0x4]; // 0x10ac
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0x10b0	
	CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0x10b8	
	CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0x10d0	
	float m_flTrajectoryTrailEffectCreationTime; // 0x10e8	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};

// Alignment: 0
// Size: 0x1110
class C_SensorGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1068
class CBreachChargeProjectile : public C_BaseGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1068
class CBumpMineProjectile : public C_BaseGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1068
class CTripWireFireProjectile : public C_BaseGrenade
{
public:
	// No members available
};

// Alignment: 5
// Size: 0x10e0
class C_CSGO_PreviewModel : public C_BaseFlex
{
public:
	CUtlString m_animgraph; // 0x1018	
	CUtlString m_animgraphCharacterModeString; // 0x1020	
	CUtlString m_defaultAnim; // 0x1028	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1030	
	float m_flInitialModelScale; // 0x1034	
};

// Alignment: 0
// Size: 0x10e0
class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel
{
public:
	// No members available
};

// Alignment: 6
// Size: 0xed0
class C_BulletHitModel : public CBaseAnimGraph
{
public:
	matrix3x4_t m_matLocal; // 0xe80	
	int32_t m_iBoneIndex; // 0xeb0	
	CHandle< C_BaseEntity > m_hPlayerParent; // 0xeb4	
	bool m_bIsHit; // 0xeb8	
private:
	[[maybe_unused]] uint8_t __pad0eb9[0x3]; // 0xeb9
public:
	float m_flTimeCreated; // 0xebc	
	Vector m_vecStartPos; // 0xec0	
};

// Alignment: 6
// Size: 0xeb8
class C_PickUpModelSlerper : public CBaseAnimGraph
{
public:
	CHandle< C_BaseEntity > m_hPlayerParent; // 0xe80	
	CHandle< C_BaseEntity > m_hItem; // 0xe84	
	float m_flTimePickedUp; // 0xe88	
	QAngle m_angOriginal; // 0xe8c	
	Vector m_vecPosOriginal; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0ea4[0x4]; // 0xea4
public:
	QAngle m_angRandom; // 0xea8	
};

// Alignment: 0
// Size: 0xe80
class C_WorldModelGloves : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 0
// Size: 0xe88
class C_HostageCarriableProp : public CBaseAnimGraph
{
public:
	// No members available
};

// Alignment: 1
// Size: 0xe90
class C_Multimeter : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0e80[0x8]; // 0xe80
public:
	CHandle< C_PlantedC4 > m_hTargetC4; // 0xe88	
};

// Alignment: 26
// Size: 0xf00
class C_PlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	int32_t m_nBombSite; // 0xe84	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0xe88	
private:
	[[maybe_unused]] uint8_t __pad0e8c[0x4]; // 0xe8c
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xe90	
	GameTime_t m_flNextGlow; // 0xea8	
	GameTime_t m_flNextBeep; // 0xeac	
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0xeb0	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xeb4	
	// MNetworkEnable
	bool m_bHasExploded; // 0xeb5	
private:
	[[maybe_unused]] uint8_t __pad0eb6[0x2]; // 0xeb6
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xeb8	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
public:
	float m_bTenSecWarning; // 0xec0	
	float m_bTriggerWarning; // 0xec4	
	float m_bExplodeWarning; // 0xec8	
	bool m_bC4Activated; // 0xecc	
private:
	[[maybe_unused]] uint8_t __pad0ecd[0x3]; // 0xecd
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xed0	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xed4	
	// MNetworkEnable
	bool m_bBombDefused; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDefuserChanged"
	CHandle< C_CSPlayerPawn > m_hBombDefuser; // 0xedc	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xee0	
	CHandle< C_Multimeter > m_hDefuserMultimeter; // 0xee4	
	GameTime_t m_flNextRadarFlashTime; // 0xee8	
	bool m_bRadarFlash; // 0xeec	
private:
	[[maybe_unused]] uint8_t __pad0eed[0x3]; // 0xeed
public:
	CHandle< C_CSPlayerPawn > m_pBombDefuser; // 0xef0	
	GameTime_t m_fLastDefuseTime; // 0xef4	
	CBasePlayerController* m_pPredictionOwner; // 0xef8	
};

// Alignment: 2
// Size: 0x1668
class C_Item : public C_EconEntity
{
public:
	// MNetworkEnable
	bool m_bShouldGlow; // 0x1560	
	char m_pReticleHintTextName[256]; // 0x1561	
};

// Alignment: 8
// Size: 0x15b8
class C_Chicken : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad10e8[0x8]; // 0x10e8
public:
	CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0x10f0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; // 0x10f4	
private:
	[[maybe_unused]] uint8_t __pad10f5[0x3]; // 0x10f5
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawnBase > m_leader; // 0x10f8	
private:
	[[maybe_unused]] uint8_t __pad10fc[0x4]; // 0x10fc
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1100	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x15a8	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x15ac	
	bool m_bAttributesInitialized; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15b1[0x3]; // 0x15b1
public:
	ParticleIndex_t m_hWaterWakeParticles; // 0x15b4	
};

// Alignment: 7
// Size: 0x1598
class C_BasePlayerWeapon : public C_EconEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0x1560	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0x1564	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0x1568	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0x156c	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0x1570	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x1574	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0x1578	
};

// Alignment: 7
// Size: 0xf30
class C_RagdollPropAttached : public C_RagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xef8	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xefc	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointBoneSpace; // 0xf00	
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_attachmentPointRagdollSpace; // 0xf0c	
	Vector m_vecOffset; // 0xf18	
	float m_parentTime; // 0xf24	
	bool m_bHasParent; // 0xf28	
};

// Alignment: 8
// Size: 0x10a8
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0x1018	
	int32_t m_bloodColor; // 0x1030	
	AttachmentHandle_t m_leftFootAttachment; // 0x1034	
	AttachmentHandle_t m_rightFootAttachment; // 0x1035	
private:
	[[maybe_unused]] uint8_t __pad1036[0x2]; // 0x1036
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x1038	
	float m_flWaterWorldZ; // 0x103c	
	float m_flWaterNextTraceTime; // 0x1040	
	// MNetworkEnable
	float m_flFieldOfView; // 0x1044	
};

// Alignment: 26
// Size: 0x1238
class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0x10a8	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0x10b0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0x10b8	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0x10c0	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0x10c8	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0x10d0	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0x10d8	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0x10e0	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0x10e8	
private:
	[[maybe_unused]] uint8_t __pad10f0[0x8]; // 0x10f0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0x10f8	
	uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0x1148	
	QAngle v_angle; // 0x114c	
	QAngle v_anglePrevious; // 0x1158	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0x1164	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	sky3dparams_t m_skybox3d; // 0x1168	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0x11f8	
	Vector m_vecPredictionError; // 0x11fc	
	GameTime_t m_flPredictionErrorTime; // 0x1208	
	float m_flFOVSensitivityAdjust; // 0x120c	
	float m_flMouseSensitivity; // 0x1210	
	Vector m_vOldOrigin; // 0x1214	
	float m_flOldSimulationTime; // 0x1220	
	int32_t m_nLastExecutedCommandNumber; // 0x1224	
	int32_t m_nLastExecutedCommandTick; // 0x1228	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; // 0x122c	
	bool m_bIsSwappingToPredictableController; // 0x1230	
};

// Alignment: 6
// Size: 0xf70
class C_CSGOViewModel : public C_PredictedViewModel
{
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x3]; // 0xf11
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0xf14	
	uint32_t m_nOldWeaponParity; // 0xf18	
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xf1c	
	bool m_bNeedToQueueHighResComposite; // 0xf20	
private:
	[[maybe_unused]] uint8_t __pad0f21[0x43]; // 0xf21
public:
	QAngle m_vLoweredWeaponOffset; // 0xf64	
};

// Alignment: 60
// Size: 0x18e0
class C_CSWeaponBase : public C_BasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad1598[0x38]; // 0x1598
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0x15d0	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0x15d4	
	int32_t m_nFireSequenceStartTimeAck; // 0x15d8	
	// MNetworkEnable
	bool m_bPlayerFireEventIsPrimary; // 0x15dc	
private:
	[[maybe_unused]] uint8_t __pad15dd[0x3]; // 0x15dd
public:
	HSequence m_seqIdle; // 0x15e0	
	HSequence m_seqFirePrimary; // 0x15e4	
	HSequence m_seqFireSecondary; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15ec[0x14]; // 0x15ec
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0x1600	
	float m_flCrosshairDistance; // 0x1604	
	int32_t m_iAmmoLastCheck; // 0x1608	
	int32_t m_iAlpha; // 0x160c	
	int32_t m_iScopeTextureID; // 0x1610	
	int32_t m_iCrosshairTextureID; // 0x1614	
	float m_flGunAccuracyPosition; // 0x1618	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x161c	
	bool m_bReloadsWithClips; // 0x1620	
private:
	[[maybe_unused]] uint8_t __pad1621[0x3]; // 0x1621
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0x1624	
	bool m_bFireOnEmpty; // 0x1628	
private:
	[[maybe_unused]] uint8_t __pad1629[0x7]; // 0x1629
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x1630	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0x1658	
	float m_flTurningInaccuracyDelta; // 0x165c	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0x1660	
	float m_flTurningInaccuracy; // 0x166c	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0x1670	
	GameTime_t m_flLastAccuracyUpdateTime; // 0x1674	
	float m_fAccuracySmoothedForZoom; // 0x1678	
	GameTime_t m_fScopeZoomEndTime; // 0x167c	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0x1680	
	// MNetworkEnable
	float m_flRecoilIndex; // 0x1684	
	// MNetworkEnable
	bool m_bBurstMode; // 0x1688	
private:
	[[maybe_unused]] uint8_t __pad1689[0x3]; // 0x1689
public:
	// MNetworkEnable
	GameTime_t m_flPostponeFireReadyTime; // 0x168c	
	// MNetworkEnable
	bool m_bInReload; // 0x1690	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0x1691	
private:
	[[maybe_unused]] uint8_t __pad1692[0x2]; // 0x1692
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0x1694	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0x1698	
	// MNetworkEnable
	bool m_bSilencerOn; // 0x1699	
private:
	[[maybe_unused]] uint8_t __pad169a[0x2]; // 0x169a
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0x169c	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0x16a0	
	float m_flNextAttackRenderTimeOffset; // 0x16a4	
private:
	[[maybe_unused]] uint8_t __pad16a8[0x78]; // 0x16a8
public:
	bool m_bVisualsDataSet; // 0x1720	
	bool m_bOldFirstPersonSpectatedState; // 0x1721	
private:
	[[maybe_unused]] uint8_t __pad1722[0x2]; // 0x1722
public:
	CHandle< C_BaseEntity > m_hOurPing; // 0x1724	
	CEntityIndex m_nOurPingIndex; // 0x1728	
	Vector m_vecOurPingPos; // 0x172c	
	bool m_bGlowForPing; // 0x1738	
	bool m_bUIWeapon; // 0x1739	
private:
	[[maybe_unused]] uint8_t __pad173a[0xe]; // 0x173a
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPrevOwner; // 0x1748	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0x174c	
private:
	[[maybe_unused]] uint8_t __pad1750[0x1c]; // 0x1750
public:
	bool m_donated; // 0x176c	
private:
	[[maybe_unused]] uint8_t __pad176d[0x3]; // 0x176d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0x1770	
	bool m_bWasOwnedByCT; // 0x1774	
	bool m_bWasOwnedByTerrorist; // 0x1775	
private:
	[[maybe_unused]] uint8_t __pad1776[0x2]; // 0x1776
public:
	float m_gunHeat; // 0x1778	
	uint32_t m_smokeAttachments; // 0x177c	
	GameTime_t m_lastSmokeTime; // 0x1780	
	float m_flLastClientFireBulletTime; // 0x1784	
private:
	[[maybe_unused]] uint8_t __pad1788[0x58]; // 0x1788
public:
	C_IronSightController m_IronSightController; // 0x17e0	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0x1890	
private:
	[[maybe_unused]] uint8_t __pad1894[0xc]; // 0x1894
public:
	GameTime_t m_flLastLOSTraceFailureTime; // 0x18a0	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0x18a4	
};

// Alignment: 6
// Size: 0x1900
class C_CSWeaponBaseGun : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0x18e0	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0x18e4	
	int32_t m_iSilencerBodygroup; // 0x18e8	
private:
	[[maybe_unused]] uint8_t __pad18ec[0xc]; // 0x18ec
public:
	int32_t m_silencedModelIndex; // 0x18f8	
	bool m_inPrecache; // 0x18fc	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0x18fd	
};

// Alignment: 11
// Size: 0x1940
class C_C4 : public C_CSWeaponBase
{
public:
	char m_szScreenText[32]; // 0x18e0	
	ParticleIndex_t m_bombdroppedlightParticleIndex; // 0x1900	
	// MNetworkEnable
	bool m_bStartedArming; // 0x1904	
private:
	[[maybe_unused]] uint8_t __pad1905[0x3]; // 0x1905
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0x1908	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0x190c	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0x190d	
private:
	[[maybe_unused]] uint8_t __pad190e[0x2]; // 0x190e
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1910	
	int32_t m_nSpotRules; // 0x1928	
	bool m_bPlayedArmingBeeps[7]; // 0x192c	
	bool m_bBombPlanted; // 0x1933	
	bool m_bDroppedFromDeath; // 0x1934	
};

// Alignment: 0
// Size: 0x1900
class C_DEagle : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponElite : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class C_WeaponNOVA : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class C_WeaponSawedoff : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x1910
class C_WeaponTaser : public C_CSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0x1900	
};

// Alignment: 0
// Size: 0x18e0
class C_WeaponXM1014 : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class C_Knife : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 1
// Size: 0x18f0
class C_Melee : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	GameTime_t m_flThrowAt; // 0x18e0	
};

// Alignment: 1
// Size: 0x1910
class C_WeaponShield : public C_CSWeaponBaseGun
{
public:
	// MNetworkEnable
	float m_flDisplayHealth; // 0x1900	
};

// Alignment: 1
// Size: 0x1118
class C_MolotovProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0x10f0	
};

// Alignment: 1
// Size: 0x1118
class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad10f0[0x20]; // 0x10f0
public:
	GameTime_t m_flTimeParticleEffectSpawn; // 0x1110	
};

// Alignment: 8
// Size: 0x1290
class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad10f0[0x8]; // 0x10f0
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0x10f8	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0x10fc	
private:
	[[maybe_unused]] uint8_t __pad10fd[0x3]; // 0x10fd
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0x1100	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0x1104	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0x1110	
private:
	[[maybe_unused]] uint8_t __pad111c[0x4]; // 0x111c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	CUtlVector< uint8 > m_VoxelFrameData; // 0x1120	
	bool m_bSmokeVolumeDataReceived; // 0x1138	
	bool m_bSmokeEffectSpawned; // 0x1139	
};

// Alignment: 10
// Size: 0x1930
class C_BaseCSGrenade : public C_CSWeaponBase
{
public:
	bool m_bClientPredictDelete; // 0x18e0	
private:
	[[maybe_unused]] uint8_t __pad18e1[0x27]; // 0x18e1
public:
	// MNetworkEnable
	bool m_bRedraw; // 0x1908	
	// MNetworkEnable
	bool m_bIsHeldByPlayer; // 0x1909	
	// MNetworkEnable
	bool m_bPinPulled; // 0x190a	
	// MNetworkEnable
	bool m_bJumpThrow; // 0x190b	
	// MNetworkEnable
	EGrenadeThrowState m_eThrowStatus; // 0x190c	
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0x1910	
	// MNetworkEnable
	float m_flThrowStrength; // 0x1914	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0x1918	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0x191c	
};

// Alignment: 2
// Size: 0x1900
class C_WeaponBaseItem : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0x18e0	
	// MNetworkEnable
	bool m_bRedraw; // 0x18f8	
};

// Alignment: 2
// Size: 0x1670
class C_ItemDogtags : public C_Item
{
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_OwningPlayer; // 0x1668	
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_KillingPlayer; // 0x166c	
};

// Alignment: 0
// Size: 0x1900
class C_Item_Healthshot : public C_WeaponBaseItem
{
public:
	// No members available
};

// Alignment: 2
// Size: 0x18f0
class C_Fists : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0x18e0	
private:
	[[maybe_unused]] uint8_t __pad18e1[0x3]; // 0x18e1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0x18e4	
};

// Alignment: 0
// Size: 0x1930
class C_SensorGrenade : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class CBreachCharge : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class CBumpMine : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x18e0
class CTablet : public C_CSWeaponBase
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1930
class CTripWireFire : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class CWeaponZoneRepulsor : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 141
// Size: 0x16a0
class C_CSPlayerPawnBase : public C_BasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad1238[0x18]; // 0x1238
public:
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0x1250	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0x1258	
	float m_fRenderingClipPlane[4]; // 0x1260	
	int32_t m_nLastClipPlaneSetupFrame; // 0x1270	
	Vector m_vecLastClipCameraPos; // 0x1274	
	Vector m_vecLastClipCameraForward; // 0x1280	
	bool m_bClipHitStaticWorld; // 0x128c	
	bool m_bCachedPlaneIsValid; // 0x128d	
private:
	[[maybe_unused]] uint8_t __pad128e[0x2]; // 0x128e
public:
	C_CSWeaponBase* m_pClippingWeapon; // 0x1290	
	CSPlayerState m_previousPlayerState; // 0x1298	
	float m_flLastCollisionCeiling; // 0x129c	
	float m_flLastCollisionCeilingChangeTime; // 0x12a0	
private:
	[[maybe_unused]] uint8_t __pad12a4[0x1c]; // 0x12a4
public:
	GameTime_t m_grenadeParameterStashTime; // 0x12c0	
	bool m_bGrenadeParametersStashed; // 0x12c4	
private:
	[[maybe_unused]] uint8_t __pad12c5[0x3]; // 0x12c5
public:
	QAngle m_angStashedShootAngles; // 0x12c8	
	Vector m_vecStashedGrenadeThrowPosition; // 0x12d4	
	Vector m_vecStashedVelocity; // 0x12e0	
	QAngle m_angShootAngleHistory[2]; // 0x12ec	
	Vector m_vecThrowPositionHistory[2]; // 0x1304	
	Vector m_vecVelocityHistory[2]; // 0x131c	
private:
	[[maybe_unused]] uint8_t __pad1334[0x4]; // 0x1334
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1344[0xc]; // 0x1344
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x1350	
private:
	[[maybe_unused]] uint8_t __pad1354[0xc]; // 0x1354
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x1360	
private:
	[[maybe_unused]] uint8_t __pad1364[0xc]; // 0x1364
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x1370	
private:
	[[maybe_unused]] uint8_t __pad137c[0xc]; // 0x137c
public:
	// MNetworkEnable
	bool m_bIsScoped; // 0x1388	
	// MNetworkEnable
	bool m_bIsWalking; // 0x1389	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x138a	
private:
	[[maybe_unused]] uint8_t __pad138b[0x1]; // 0x138b
public:
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0x138c	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x1390	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x1391	
private:
	[[maybe_unused]] uint8_t __pad1392[0x2]; // 0x1392
public:
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1394	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x1398	
private:
	[[maybe_unused]] uint8_t __pad1399[0x3]; // 0x1399
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0x139c	
	GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x13a0	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0x13a4	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0x13a5	
private:
	[[maybe_unused]] uint8_t __pad13a6[0x2]; // 0x13a6
public:
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x13a8	
	// MNetworkEnable
	float m_fMolotovUseTime; // 0x13ac	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0x13b0	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x13b4	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x13b8	
private:
	[[maybe_unused]] uint8_t __pad13b9[0x3]; // 0x13b9
public:
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; // 0x13bc	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x13c0	
private:
	[[maybe_unused]] uint8_t __pad13c1[0x3]; // 0x13c1
public:
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; // 0x13c4	
	// MNetworkEnable
	GameTime_t m_flDetectedByEnemySensorTime; // 0x13c8	
	float m_flNextGuardianTooFarWarning; // 0x13cc	
	bool m_bSuppressGuardianTooFarWarningAudio; // 0x13d0	
	// MNetworkEnable
	bool m_bKilledByTaser; // 0x13d1	
private:
	[[maybe_unused]] uint8_t __pad13d2[0x2]; // 0x13d2
public:
	// MNetworkEnable
	int32_t m_iMoveState; // 0x13d4	
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; // 0x13d8	
private:
	[[maybe_unused]] uint8_t __pad13d9[0x3]; // 0x13d9
public:
	// MNetworkEnable
	float m_flLowerBodyYawTarget; // 0x13dc	
	// MNetworkEnable
	bool m_bStrafing; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13e1[0x3]; // 0x13e1
public:
	GameTime_t m_flLastSpawnTimeIndex; // 0x13e4	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x13e8	
	// MNetworkEnable
	int32_t m_iAddonBits; // 0x13ec	
	// MNetworkEnable
	int32_t m_iPrimaryAddon; // 0x13f0	
	// MNetworkEnable
	int32_t m_iSecondaryAddon; // 0x13f4	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x13f8	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x13fc	
	// MNetworkEnable
	int32_t m_iDirection; // 0x1400	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x1404	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNightVisionChanged"
	bool m_bNightVisionOn; // 0x1408	
	// MNetworkEnable
	bool m_bHasNightVision; // 0x1409	
private:
	[[maybe_unused]] uint8_t __pad140a[0x2]; // 0x140a
public:
	// MNetworkEnable
	float m_flVelocityModifier; // 0x140c	
	// MNetworkEnable
	float m_flHitHeading; // 0x1410	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x1414	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x1418	
	Vector m_vecIntroStartEyePosition; // 0x141c	
	Vector m_vecIntroStartPlayerForward; // 0x1428	
	GameTime_t m_flClientDeathTime; // 0x1434	
	float m_flNightVisionAlpha; // 0x1438	
	bool m_bScreenTearFrameCaptured; // 0x143c	
private:
	[[maybe_unused]] uint8_t __pad143d[0x3]; // 0x143d
public:
	float m_flFlashBangTime; // 0x1440	
	float m_flFlashScreenshotAlpha; // 0x1444	
	float m_flFlashOverlayAlpha; // 0x1448	
	bool m_bFlashBuildUp; // 0x144c	
	bool m_bFlashDspHasBeenCleared; // 0x144d	
	bool m_bFlashScreenshotHasBeenGrabbed; // 0x144e	
private:
	[[maybe_unused]] uint8_t __pad144f[0x1]; // 0x144f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; // 0x1450	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; // 0x1454	
	Vector m_lastStandingPos; // 0x1458	
	Vector m_vecLastMuzzleFlashPos; // 0x1464	
	QAngle m_angLastMuzzleFlashAngle; // 0x1470	
	CHandle< C_BaseEntity > m_hMuzzleFlashShape; // 0x147c	
	int32_t m_iHealthBarRenderMaskIndex; // 0x1480	
	float m_flHealthFadeValue; // 0x1484	
	float m_flHealthFadeAlpha; // 0x1488	
	int32_t m_nMyCollisionGroup; // 0x148c	
	float m_ignoreLadderJumpTime; // 0x1490	
private:
	[[maybe_unused]] uint8_t __pad1494[0x4]; // 0x1494
public:
	CountdownTimer m_ladderSurpressionTimer; // 0x1498	
	Vector m_lastLadderNormal; // 0x14b0	
	Vector m_lastLadderPos; // 0x14bc	
private:
	[[maybe_unused]] uint8_t __pad14c8[0x8]; // 0x14c8
public:
	float m_flDeathCCWeight; // 0x14d0	
	bool m_bOldIsScoped; // 0x14d4	
private:
	[[maybe_unused]] uint8_t __pad14d5[0x3]; // 0x14d5
public:
	float m_flPrevRoundEndTime; // 0x14d8	
	float m_flPrevMatchEndTime; // 0x14dc	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x14e0	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x14e2	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x14e4	
private:
	[[maybe_unused]] uint8_t __pad14e6[0x2]; // 0x14e6
public:
	Vector m_vecThirdPersonViewPositionOverride; // 0x14e8	
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0x14f4	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14fc[0x4]; // 0x14fc
public:
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad150c[0xc]; // 0x150c
public:
	float m_fNextThinkPushAway; // 0x1518	
	bool m_bShouldAutobuyDMWeapons; // 0x151c	
	bool m_bShouldAutobuyNow; // 0x151d	
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; // 0x151e	
	// MNetworkEnable
	bool m_bHud_RadarHidden; // 0x151f	
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1520	
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; // 0x1524	
	// MNetworkEnable
	int32_t m_nDeathCamMusic; // 0x1528	
	CEntityIndex m_iIDEntIndex; // 0x152c	
	CountdownTimer m_delayTargetIDTimer; // 0x1530	
	CEntityIndex m_iTargetedWeaponEntIndex; // 0x1548	
	CEntityIndex m_iOldIDEntIndex; // 0x154c	
	CountdownTimer m_holdTargetIDTimer; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1568[0x4]; // 0x1568
public:
	float m_flCurrentMusicStartTime; // 0x156c	
	float m_flMusicRoundStartTime; // 0x1570	
	bool m_bDeferStartMusicOnWarmup; // 0x1574	
private:
	[[maybe_unused]] uint8_t __pad1575[0x3]; // 0x1575
public:
	// MNetworkEnable
	int32_t m_cycleLatch; // 0x1578	
	float m_serverIntendedCycle; // 0x157c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1594[0x8]; // 0x1594
public:
	// MNetworkEnable
	bool m_bHideTargetID; // 0x159c	
private:
	[[maybe_unused]] uint8_t __pad159d[0x3]; // 0x159d
public:
	float m_nextTaserShakeTime; // 0x15a0	
	float m_firstTaserShakeTime; // 0x15a4	
	float m_flLastSmokeOverlayAlpha; // 0x15a8	
	Vector m_vLastSmokeOverlayColor; // 0x15ac	
	ParticleIndex_t m_nPlayerSmokedFx; // 0x15b8	
	float m_flNextMagDropTime; // 0x15bc	
	int32_t m_nLastMagDropAttachmentIndex; // 0x15c0	
private:
	[[maybe_unused]] uint8_t __pad15c4[0x4]; // 0x15c4
public:
	CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x15c8	
	CUtlVector< C_PickUpModelSlerper* > m_vecPickupModelSlerpers; // 0x15e0	
	Vector m_vecLastAliveLocalVelocity; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad1604[0x1c]; // 0x1604
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1620	
	// MNetworkEnable
	int32_t m_nSurvivalTeamNumber; // 0x1638	
	bool m_bGuardianShouldSprayCustomXMark; // 0x163c	
	bool m_bHasDeathInfo; // 0x163d	
private:
	[[maybe_unused]] uint8_t __pad163e[0x2]; // 0x163e
public:
	float m_flDeathInfoTime; // 0x1640	
	Vector m_vecDeathInfoOrigin; // 0x1644	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1651[0x3]; // 0x1651
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0x1654	
};

// Alignment: 1
// Size: 0x16a8
class C_CSObserverPawn : public C_CSPlayerPawnBase
{
public:
	CEntityHandle m_hDetectParentChange; // 0x16a0	
};

// Alignment: 49
// Size: 0x22a0
class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x16a0	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x16a8	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x16b0	
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; // 0x16b8	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x16c0	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x16c8	
	GameTime_t m_flLastFiredWeaponTime; // 0x16cc	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x16d0	
private:
	[[maybe_unused]] uint8_t __pad16d1[0x3]; // 0x16d1
public:
	float m_flLandseconds; // 0x16d4	
	float m_flOldFallVelocity; // 0x16d8	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x16dc	
	bool m_bPrevDefuser; // 0x16ee	
	bool m_bPrevHelmet; // 0x16ef	
	int32_t m_nPrevArmorVal; // 0x16f0	
	int32_t m_nPrevGrenadeAmmoCount; // 0x16f4	
	uint32_t m_unPreviousWeaponHash; // 0x16f8	
	uint32_t m_unWeaponHash; // 0x16fc	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x1700	
	bool m_bPreviouslyInBuyZone; // 0x1701	
private:
	[[maybe_unused]] uint8_t __pad1702[0x2]; // 0x1702
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x1704	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x1710	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x171c	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x1720	
private:
	[[maybe_unused]] uint8_t __pad1724[0x4]; // 0x1724
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x1728	
private:
	[[maybe_unused]] uint8_t __pad1740[0x8]; // 0x1740
public:
	bool m_bInLanding; // 0x1748	
private:
	[[maybe_unused]] uint8_t __pad1749[0x3]; // 0x1749
public:
	float m_flLandingTime; // 0x174c	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x1750	
	// MNetworkEnable
	bool m_bInBombZone; // 0x1751	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x1752	
private:
	[[maybe_unused]] uint8_t __pad1753[0x1]; // 0x1753
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1754	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1758	
private:
	[[maybe_unused]] uint8_t __pad175c[0x114]; // 0x175c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; // 0x1870	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; // 0x1874	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1878	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1879	
private:
	[[maybe_unused]] uint8_t __pad187a[0x2]; // 0x187a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x187c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1880	
private:
	[[maybe_unused]] uint8_t __pad1884[0x1c]; // 0x1884
public:
	bool m_bNeedToReApplyGloves; // 0x18a0	
private:
	[[maybe_unused]] uint8_t __pad18a1[0x7]; // 0x18a1
public:
	// MNetworkEnable
	C_EconItemView m_EconGloves; // 0x18a8	
	bool m_bMustSyncRagdollState; // 0x1cf0	
private:
	[[maybe_unused]] uint8_t __pad1cf1[0x3]; // 0x1cf1
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1cf4	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1cf8	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1d04	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1d10	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1d50	
private:
	[[maybe_unused]] uint8_t __pad1d51[0x51f]; // 0x1d51
public:
	bool m_bLastHeadBoneTransformIsValid; // 0x2270	
private:
	[[maybe_unused]] uint8_t __pad2271[0x3]; // 0x2271
public:
	GameTime_t m_lastLandTime; // 0x2274	
private:
	[[maybe_unused]] uint8_t __pad2278[0x18]; // 0x2278
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x2290	
	bool m_bSkipOneHeadConstraintUpdate; // 0x229c	
};

// Alignment: 23
// Size: 0x1178
class C_Hostage : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x10a8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_leader; // 0x10c0	
private:
	[[maybe_unused]] uint8_t __pad10c4[0x4]; // 0x10c4
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0x10c8	
	// MNetworkEnable
	Vector m_vel; // 0x10e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; // 0x10ec	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; // 0x10ed	
private:
	[[maybe_unused]] uint8_t __pad10ee[0x2]; // 0x10ee
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHostageStateChanged"
	int32_t m_nHostageState; // 0x10f0	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x10f4	
private:
	[[maybe_unused]] uint8_t __pad10f5[0x3]; // 0x10f5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrabberChanged"
	CHandle< C_CSPlayerPawn > m_hHostageGrabber; // 0x10f8	
	GameTime_t m_fLastGrabTime; // 0x10fc	
	Vector m_vecGrabbedPos; // 0x1100	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x110c	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x1110	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x1114	
	GameTime_t m_flDeadOrRescuedTime; // 0x1118	
private:
	[[maybe_unused]] uint8_t __pad111c[0x4]; // 0x111c
public:
	CountdownTimer m_blinkTimer; // 0x1120	
	Vector m_lookAt; // 0x1138	
private:
	[[maybe_unused]] uint8_t __pad1144[0x4]; // 0x1144
public:
	CountdownTimer m_lookAroundTimer; // 0x1148	
	bool m_isInit; // 0x1160	
	AttachmentHandle_t m_eyeAttachment; // 0x1161	
	AttachmentHandle_t m_chestAttachment; // 0x1162	
private:
	[[maybe_unused]] uint8_t __pad1163[0x5]; // 0x1163
public:
	CBasePlayerController* m_pPredictionOwner; // 0x1168	
	GameTime_t m_fNewestAlphaThinkTime; // 0x1170	
};

// Alignment: 0
// Size: 0x10a8
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_AK47 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponAug : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponAWP : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponBizon : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponFamas : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponFiveSeven : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponG3SG1 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponGalilAR : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponGlock : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponHKP2000 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponM4A1 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponMAC10 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponMag7 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponMP7 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponMP9 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponNegev : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponP250 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponP90 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponSCAR20 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponSG556 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponSSG08 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponTec9 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponUMP45 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1900
class C_WeaponM249 : public C_CSWeaponBaseGun
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1950
class C_MolotovGrenade : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1950
class C_IncendiaryGrenade : public C_MolotovGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1930
class C_DecoyGrenade : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1930
class C_Flashbang : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1930
class C_HEGrenade : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x1930
class C_SmokeGrenade : public C_BaseCSGrenade
{
public:
	// No members available
};

// Alignment: 3
// Size: 0x2338
class C_CSGO_PreviewPlayer : public C_CSPlayerPawn
{
public:
	CUtlString m_animgraph; // 0x22a0	
	CUtlString m_animgraphCharacterModeString; // 0x22a8	
	float m_flInitialModelScale; // 0x22b0	
};

// Alignment: 0
// Size: 0x2338
class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer
{
public:
	// No members available
};

// Alignment: 0
// Size: 0x2338
class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer
{
public:
	// No members available
};

