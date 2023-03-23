#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: worldrenderer.dll
// Classes count: 24
// Enums count: 2
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
	OBJECT_TYPE_NO_ZPREPASS = 0x1000,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
	OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
};

// Alignment: 4
// Size: 0x2
enum class voxel_vis_compression_t : uint32_t
{
	VOXVIS_COMPRESS_RAW = 0x0,
	VOXVIS_COMPRESS_RLE = 0x1,
};

struct CRenderBufferBinding;
struct BakedLightingInfo_t;
struct WorldBuilderParams_t;
struct voxel_vis_cluster_t;
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
	[[maybe_unused]] uint8_t __pad000c[0x4]; 	// 0xc
public:
	CUtlString m_targetName; // 0x10	
	CUtlString m_inputName; // 0x18	
	CUtlString m_overrideParam; // 0x20	
	float m_flDelay; // 0x28	
	int32_t m_nTimesToFire; // 0x2c	
};

// Alignment: 2
// Size: 0x30
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0	
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18	
};

// Alignment: 4
// Size: 0x40
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_hammerUniqueId; // 0x8	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10	
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28	
};

// Alignment: 16
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
	[[maybe_unused]] uint8_t __pad004c[0x4]; 	// 0x4c
public:
	CUtlString m_skin; // 0x50	
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58	
	Vector m_vLightingOrigin; // 0x5c	
	uint32_t m_nLightGroup; // 0x68	
	int16_t m_nOverlayRenderOrder; // 0x6c	
	int16_t m_nLODOverride; // 0x6e	
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74	
	int16_t m_nBoundsGroupIndex; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007a[0x6]; 	// 0x7a
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
// Size: 0x20
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
	[[maybe_unused]] uint8_t __pad000c[0x4]; 	// 0xc
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
	[[maybe_unused]] uint8_t __pad004c[0x4]; 	// 0x4c
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
	[[maybe_unused]] uint8_t __pad0011[0x7]; 	// 0x11
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
// Size: 0x3c
struct AggregateMeshInfo_t
{
public:
	Vector m_vWorldBounds[2]; // 0x0	
	uint32_t m_nVisClusterMemberOffset; // 0x18	
	uint8_t m_nVisClusterMemberCount; // 0x1c	
	uint8_t m_nLODGroupMask; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; 	// 0x1e
public:
	int32_t m_nCubeMapPrecomputedHandshake; // 0x20	
	ObjectTypeFlags_t m_objectFlags; // 0x24	
	Vector m_vLODOrigin; // 0x28	
	float m_fLODStartDrawDistance; // 0x34	
	float m_fLODEndDrawDistance; // 0x38	
};

// Alignment: 8
// Size: 0x60
struct AggregateSceneObject_t
{
public:
	Vector m_vWorldBounds[2]; // 0x0	
	ObjectTypeFlags_t m_allFlags; // 0x18	
	ObjectTypeFlags_t m_anyFlags; // 0x1c	
	int16_t m_nLayer; // 0x20	
	int16_t m_nBoundsGroupIndex; // 0x22	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; 	// 0x24
public:
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x28	
	CUtlVector< uint16 > m_visClusterMembership; // 0x40	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x58	
};

// Alignment: 13
// Size: 0x140
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0	
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18	
	CUtlVector< uint16 > m_visClusterMembership; // 0x30	
	CUtlVector< AABB_t > m_boundsGroups; // 0x48	
	CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x60	
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78	
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90	
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xa8	
	CUtlVector< CUtlString > m_layerNames; // 0xc0	
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xd8	
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xf0	
	CUtlString m_grassFileName; // 0x108	
	BakedLightingInfo_t m_nodeLightingInfo; // 0x110	
};

// Alignment: 21
// Size: 0x68
struct WorldBuilderParams_t
{
public:
	int32_t m_nSizeBytesPerVoxel; // 0x0	
	float m_flMinDrawVolumeSize; // 0x4	
	float m_flMinDistToCamera; // 0x8	
	float m_flMinAtlasDist; // 0xc	
	float m_flMinSimplifiedDist; // 0x10	
	float m_flHorzFOV; // 0x14	
	float m_flHalfScreenWidth; // 0x18	
	int32_t m_nAtlasTextureSizeX; // 0x1c	
	int32_t m_nAtlasTextureSizeY; // 0x20	
	int32_t m_nUniqueTextureSizeX; // 0x24	
	int32_t m_nUniqueTextureSizeY; // 0x28	
	int32_t m_nCompressedAtlasSize; // 0x2c	
	float m_flGutterSize; // 0x30	
	float m_flUVMapThreshold; // 0x34	
	Vector m_vWorldUnitsPerTile; // 0x38	
	int32_t m_nMaxTexScaleSlots; // 0x44	
	bool m_bWrapInAtlas; // 0x48	
	bool m_bBuildBakedLighting; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; 	// 0x4a
public:
	Vector2D m_vLightmapUvScale; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; 	// 0x54
public:
	uint64_t m_nCompileTimestamp; // 0x58	
	uint64_t m_nCompileFingerprint; // 0x60	
};

// Alignment: 8
// Size: 0x50
struct NodeData_t
{
public:
	int32_t m_Flags; // 0x0	
	int32_t m_nParent; // 0x4	
	Vector m_vOrigin; // 0x8	
	Vector m_vMinBounds; // 0x14	
	Vector m_vMaxBounds; // 0x20	
	float m_flMinimumDistance; // 0x2c	
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30	
	CUtlString m_worldNodePrefix; // 0x48	
};

// Alignment: 4
// Size: 0xc8
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x68	
	BakedLightingInfo_t m_worldLightingInfo; // 0x80	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0xb0	
};

// Alignment: 2
// Size: 0x8
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0	
	uint32_t m_nOffsetIntoBlock; // 0x4	
};

// Alignment: 2
// Size: 0x8
struct voxel_vis_mergelist_t
{
public:
	uint32_t m_nFirstCluster; // 0x0	
	uint32_t m_nClusterCount; // 0x4	
};

// Alignment: 14
// Size: 0xe0
class CVoxelVisibility
{
public:
	CUtlVector< uint32 > m_blockOffset; // 0x40	
	CUtlVector< voxel_vis_cluster_t > m_clusters; // 0x58	
	CUtlVector< uint16 > m_mergeClusters; // 0x70	
	CUtlVector< voxel_vis_mergelist_t > m_mergeLists; // 0x88	
	Vector m_vMinBounds; // 0xa0	
	Vector m_vMaxBounds; // 0xac	
	float m_flGridSize; // 0xb8	
	int32_t m_nNodeCount; // 0xbc	
	int32_t m_nRegionCount; // 0xc0	
	voxel_vis_cluster_t m_skyVisibilityCluster; // 0xc4	
	voxel_vis_cluster_t m_sunVisibilityCluster; // 0xcc	
	voxel_vis_compression_t m_nPVSCompression; // 0xd4	
	uint32_t m_nTreeSize; // 0xd8	
	uint32_t m_nPVSSizeCompressed; // 0xdc	
};

// Alignment: 0
// Size: 0x1
struct VMapResourceData_t
{
public:
	// no members available
};

// Alignment: 0
// Size: 0x1
struct InfoForResourceTypeVMapResourceData_t
{
public:
	// no members available
};

// Alignment: 11
// Size: 0x78
class CEntityIdentity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; 	// 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; 	// 0x34
public:
	uint32_t m_fDataObjectTypes; // 0x38	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003e[0x12]; 	// 0x3e
public:
	CEntityIdentity* m_pPrev; // 0x50	
	CEntityIdentity* m_pNext; // 0x58	
	CEntityIdentity* m_pPrevByClass; // 0x60	
	CEntityIdentity* m_pNextByClass; // 0x68	
	V_uuid_t* m_pId; // 0x70	
};

// Alignment: 4
// Size: 0x38
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; 	// 0x18
public:
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0xc]; 	// 0x24
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x30	
};

// Alignment: 1
// Size: 0x38
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

