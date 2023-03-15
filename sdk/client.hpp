#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: client.dll
// Class Count: 269
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 0
// Size: 2104
class CDCGRuleEntity_EquippedItem : public CDCGCompositeStateRuleEntity, CDCGCardAttachEntity, CDCGAttachEntity, CDCGEntity, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2104
class CDCGRuleEntity_IsCloned : public CDCGCompositeStateRuleEntity, CDCGCardAttachEntity, CDCGAttachEntity, CDCGEntity, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 2104
class CDCGRuleEntity_HiddenStatMod : public CDCGCompositeStateRuleEntity, CDCGCardAttachEntity, CDCGAttachEntity, CDCGEntity, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1936
class CDCGGenericPerformerEntity : public CDCGEntity, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nOwnerID; // 0x750
	int32_t m_nLaneID; // 0x754
};

// Aligment: 2
// Size: 968
class CDCGLocatorInfo : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nLaneID; // 0x3c0
	bool m_bLocalPlayer; // 0x3c4
};

// Aligment: 0
// Size: 968
class C_PortraitWorldCallbackHandler : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 3
// Size: 3272
class CDCG_PortraitWorldUnit : public CDCGCardViewInspect, CDCGCardView, CDCGEntity, C_BaseAnimating, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	bool m_bDeferredPortrait; // 0xc94
	CUtlString m_cameraName; // 0xc98
	float m_flCardSizeRatio; // 0xcac
};

// Aligment: 1
// Size: 968
class C_DCGGameRulesProxy : public C_GameRulesProxy, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	C_SingleplayRules* m_pGameRules; // 0x3c0
};

// Aligment: 11
// Size: 1576
class CDCGWorldParticleSystem : public C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	int32_t m_nType; // 0x5e8
	int32_t m_iClientEffectIndex; // 0x5ec
	CUtlSymbolLarge m_szEffectName; // 0x5f0
	CUtlSymbolLarge m_szTargetName; // 0x5f8
	CUtlSymbolLarge m_szControlPoint; // 0x600
	HSequence m_hOverrideSequence; // 0x608
	CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // 0x610
	Vector m_vModelScale; // 0x618
	bool m_bDayTime; // 0x624
	bool m_bNightTime; // 0x625
	bool m_bShowInFow; // 0x626
};

// Aligment: 43
// Size: 1168
class CGlobalLightBase
{
public:
	bool m_bSpotLight; // 0x10
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
	float m_flSunDistance; // 0x7c
	float m_flFOV; // 0x80
	float m_flNearZ; // 0x84
	float m_flFarZ; // 0x88
	bool m_bEnableShadows; // 0x8c
	bool m_bOldEnableShadows; // 0x8d
	bool m_bBackgroundClearNotRequired; // 0x8e
	float m_flCloudScale; // 0x90
	float m_flCloud1Speed; // 0x94
	float m_flCloud1Direction; // 0x98
	float m_flCloud2Speed; // 0x9c
	float m_flCloud2Direction; // 0xa0
	float m_flAmbientScale1; // 0xa4
	float m_flAmbientScale2; // 0xa8
	float m_flGroundScale; // 0xac
	float m_flLightScale; // 0xb0
	float m_flFoWDarkness; // 0xb4
	bool m_bEnableSeparateSkyboxFog; // 0xb8
	Vector m_vFowColor; // 0xbc
	Vector m_ViewOrigin; // 0xc8
	QAngle m_ViewAngles; // 0xd4
	float m_flViewFoV; // 0xe0
	Vector[8] m_WorldPoints; // 0xe4
	Vector2D m_vFogOffsetLayer0; // 0x478
	Vector2D m_vFogOffsetLayer1; // 0x480
	CHandle< C_BaseEntity > m_hEnvWind; // 0x488
	CHandle< C_BaseEntity > m_hEnvSky; // 0x48c
};

// Aligment: 1
// Size: 2168
class C_GlobalLight : public C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
	uint16_t m_WindClothForceHandle; // 0x850
public:
	static C_GlobalLight*[5] &Get_sm_pGlobalLight() { return *reinterpret_cast<C_GlobalLight*[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[0]->m_instance); }
	static CUtlStringToken[5] &Get_sm_pSkyboxSlots() { return *reinterpret_cast<CUtlStringToken[5]*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[1]->m_instance); }
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights() { return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fiels[2]->m_instance); }
};

// Aligment: 0
// Size: 1920
class C_EnvDeferredLightClientOnly : public C_EnvDeferredLight, C_ModelPointEntity, C_BaseModelEntity, C_BaseEntity, C_GameEntity, CEntityInstance, IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

