#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: worldrenderer.dll
// Classes count: 27
// Enums count: 1
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x10
enum class ObjectTypeFlags_t : uint32_t
{
	OBJECT_TYPE_NONE = 0x0,
	OBJECT_TYPE_IMAGE_LOD = 0x1,
	OBJECT_TYPE_GEOMETRY_LOD = 0x2,
	OBJECT_TYPE_DECAL = 0x4,
	OBJECT_TYPE_MODEL = 0x8,
	OBJECT_TYPE_BLOCK_LIGHT = 0x10,
	OBJECT_TYPE_NO_SHADOWS = 0x20,
	OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
	OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
	OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
	OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
	OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
	OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
	OBJECT_TYPE_OVERLAY = 0x2000,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
	OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
};

struct CRenderBufferBinding;
struct AABB_t;
struct BakedLightingInfo_t;
struct WorldBuilderParams_t;
struct VoxelVisBlockOffset_t;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;

// Alignment: 7
// Size: 0x30
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0	
	uint32_t m_targetType; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_targetName; // 0x10	
	CUtlString m_inputName; // 0x18	
	CUtlString m_overrideParam; // 0x20	
	float m_flDelay; // 0x28	
	int32_t m_nTimesToFire; // 0x2c	
};

// Alignment: 2
// Size: 0x40
struct EntityKeyValueData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x8	
	CUtlBinaryBlock m_keyValuesData; // 0x20	
};

// Alignment: 4
// Size: 0x40
struct PermEntityLumpData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlString m_hammerUniqueId; // 0x10	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x18	
	CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // 0x30	
};

// Alignment: 15
// Size: 0x90
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0	
	Vector4D m_vTransform[3]; // 0x4	
	float m_flFadeStartDistance; // 0x34	
	float m_flFadeEndDistance; // 0x38	
	Vector4D m_vTintColor; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_skin; // 0x50	
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58	
	Vector m_vLightingOrigin; // 0x5c	
	uint32_t m_nLightGroup; // 0x68	
	int16_t m_nOverlayRenderOrder; // 0x6c	
	int16_t m_nLODOverride; // 0x6e	
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80	
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88	
};

// Alignment: 1
// Size: 0x4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0	
};

// Alignment: 4
// Size: 0x28
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

// Alignment: 3
// Size: 0x18
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10	
};

// Alignment: 10
// Size: 0x70
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0	
	float m_flWidth; // 0x30	
	float m_flHeight; // 0x34	
	float m_flDepth; // 0x38	
	Vector2D m_vUVStart; // 0x3c	
	Vector2D m_vUVEnd; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50	
	int32_t m_nRenderOrder; // 0x58	
	Vector4D m_vTintColor; // 0x5c	
	int32_t m_nSequenceOverride; // 0x6c	
};

// Alignment: 5
// Size: 0x30
struct BakedLightingInfo_t
{
public:
	uint32_t m_nLightmapVersionNumber; // 0x0	
	uint32_t m_nLightmapGameVersionNumber; // 0x4	
	Vector2D m_vLightmapUvScale; // 0x8	
	bool m_bHasLightmaps; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x7]; // 0x11
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18	
};

// Alignment: 4
// Size: 0x38
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0	
	int32_t m_nElementSizeInBytes; // 0x4	
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8	
	CUtlVector< uint8 > m_pData; // 0x20	
};

// Alignment: 9
// Size: 0x18
struct AggregateMeshInfo_t
{
public:
	uint32_t m_nVisClusterMemberOffset; // 0x0	
	uint8_t m_nVisClusterMemberCount; // 0x4	
	bool m_bHasTransform; // 0x5	
	int16_t m_nDrawCallIndex; // 0x6	
	int16_t m_nLODSetupIndex; // 0x8	
	uint8_t m_nLODGroupMask; // 0xa	
	Color m_vTintColor; // 0xb	
private:
	[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
public:
	ObjectTypeFlags_t m_objectFlags; // 0x10	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14	
};

// Alignment: 3
// Size: 0x38
struct AggregateLODSetup_t
{
public:
	Vector m_vLODOrigin; // 0x0	
	float m_fMaxObjectScale; // 0xc	
	CUtlVectorFixedGrowable< float32 > m_fSwitchDistances; // 0x10	
};

// Alignment: 8
// Size: 0x78
struct AggregateSceneObject_t
{
public:
	ObjectTypeFlags_t m_allFlags; // 0x0	
	ObjectTypeFlags_t m_anyFlags; // 0x4	
	int16_t m_nLayer; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
public:
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10	
	CUtlVector< AggregateLODSetup_t > m_lodSetups; // 0x28	
	CUtlVector< uint16 > m_visClusterMembership; // 0x40	
	CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x58	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x70	
};

// Alignment: 3
// Size: 0x20
struct ClutterTile_t
{
public:
	uint32_t m_nFirstInstance; // 0x0	
	uint32_t m_nLastInstance; // 0x4	
	AABB_t m_BoundsWs; // 0x8	
};

// Alignment: 8
// Size: 0xa0
struct ClutterSceneObject_t
{
public:
	AABB_t m_Bounds; // 0x0	
	ObjectTypeFlags_t m_flags; // 0x18	
	int16_t m_nLayer; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	CUtlVector< Vector > m_instancePositions; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	CUtlVector< float32 > m_instanceScales; // 0x50	
	CUtlVector< Color > m_instanceTintSrgb; // 0x68	
	CUtlVector< ClutterTile_t > m_tiles; // 0x80	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x98	
};

// Alignment: 13
// Size: 0x140
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0	
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18	
	CUtlVector< uint16 > m_visClusterMembership; // 0x30	
	CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x48	
	CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects; // 0x60	
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78	
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90	
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xa8	
	CUtlVector< CUtlString > m_layerNames; // 0xc0	
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xd8	
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xf0	
	CUtlString m_grassFileName; // 0x108	
	BakedLightingInfo_t m_nodeLightingInfo; // 0x110	
};

// Alignment: 5
// Size: 0x20
struct WorldBuilderParams_t
{
public:
	float m_flMinDrawVolumeSize; // 0x0	
	bool m_bBuildBakedLighting; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	Vector2D m_vLightmapUvScale; // 0x8	
	uint64_t m_nCompileTimestamp; // 0x10	
	uint64_t m_nCompileFingerprint; // 0x18	
};

// Alignment: 7
// Size: 0x50
struct NodeData_t
{
public:
	int32_t m_nParent; // 0x0	
	Vector m_vOrigin; // 0x4	
	Vector m_vMinBounds; // 0x10	
	Vector m_vMaxBounds; // 0x1c	
	float m_flMinimumDistance; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30	
	CUtlString m_worldNodePrefix; // 0x48	
};

// Alignment: 4
// Size: 0x80
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x20	
	BakedLightingInfo_t m_worldLightingInfo; // 0x38	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x68	
};

// Alignment: 2
// Size: 0x8
struct VoxelVisBlockOffset_t
{
public:
	uint32_t m_nOffset; // 0x0	
	uint32_t m_nElementCount; // 0x4	
};

// Alignment: 13
// Size: 0xa0
class CVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	uint32_t m_nBaseClusterCount; // 0x40	
	uint32_t m_nPVSBytesPerCluster; // 0x44	
	Vector m_vMinBounds; // 0x48	
	Vector m_vMaxBounds; // 0x54	
	float m_flGridSize; // 0x60	
	uint32_t m_nSkyVisibilityCluster; // 0x64	
	uint32_t m_nSunVisibilityCluster; // 0x68	
	VoxelVisBlockOffset_t m_NodeBlock; // 0x6c	
	VoxelVisBlockOffset_t m_RegionBlock; // 0x74	
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c	
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84	
	VoxelVisBlockOffset_t m_MasksBlock; // 0x8c	
	VoxelVisBlockOffset_t m_nVisBlocks; // 0x94	
};

// Alignment: 0
// Size: 0x1
struct VMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No members available
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

