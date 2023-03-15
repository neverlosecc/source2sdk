#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: worldrenderer.dll
// Class Count: 21
// Enum Count: 3
///////////////////////////////////////////

// Aligment: 4
// Size: 1
enum class EntityLumpFlags_t : uint32_t
{
	ENTITY_LUMP_NONE = 0x0,
};

// Aligment: 4
// Size: 12
enum class ObjectTypeFlags_t : uint32_t
{
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
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
};

// Aligment: 4
// Size: 2
enum class voxel_vis_compression_t : uint32_t
{
	VOXVIS_COMPRESS_RAW = 0x0,
	VOXVIS_COMPRESS_RLE = 0x1,
};

// Aligment: 7
// Size: 48
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0
	uint32_t m_targetType; // 0x8
	CUtlString m_targetName; // 0x10
	CUtlString m_inputName; // 0x18
	CUtlString m_overrideParam; // 0x20
	float m_flDelay; // 0x28
	int32_t m_nTimesToFire; // 0x2c
};

// Aligment: 2
// Size: 48
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18
};

// Aligment: 5
// Size: 72
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0
	EntityLumpFlags_t m_flags; // 0x8
	CUtlString m_manifestName; // 0x10
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x18
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x30
};

// Aligment: 17
// Size: 168
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0
	Vector4D[3] m_vTransform; // 0x4
	float m_flFadeStartDistance; // 0x34
	float m_flFadeEndDistance; // 0x38
	Vector4D m_vTintColor; // 0x3c
	CUtlString m_skin; // 0x50
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58
	Vector m_vLightingOrigin; // 0x5c
	uint32_t m_nLightGroup; // 0x68
	int16_t m_nOverlayRenderOrder; // 0x6c
	int16_t m_nLODOverride; // 0x6e
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74
	int16_t m_nBoundsGroupIndex; // 0x78
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCTextureBase > > m_externalTextures; // 0x90
};

// Aligment: 1
// Size: 4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0
};

// Aligment: 2
// Size: 56
struct BoneOverride_t : public BaseSceneObjectOverride_t
{
public:
	CUtlVector< uint32 > m_boneHashes; // 0x8
	CUtlVector< matrix3x4_t > m_boneTransforms; // 0x20
};

// Aligment: 4
// Size: 32
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
	CRenderBufferBinding m_extraBufferBinding; // 0x10
};

// Aligment: 3
// Size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10
};

// Aligment: 10
// Size: 112
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0
	float m_flWidth; // 0x30
	float m_flHeight; // 0x34
	float m_flDepth; // 0x38
	Vector2D m_vUVStart; // 0x3c
	Vector2D m_vUVEnd; // 0x44
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50
	int32_t m_nRenderOrder; // 0x58
	Vector4D m_vTintColor; // 0x5c
	int32_t m_nSequenceOverride; // 0x6c
};

// Aligment: 9
// Size: 80
struct BakedLightingInfo_t
{
public:
	CUtlVector< uint8 > m_PerVertexLightingDataPlainRGBM; // 0x0
	uint32_t m_nPerVertexLightingDataPlainRGBMWidth; // 0x18
	uint32_t m_nPerVertexLightingDataPlainRGBMHeight; // 0x1c
	uint32_t m_nPerVertexLightingDataPlainRGBMDepth; // 0x20
	uint32_t m_nLightmapVersionNumber; // 0x24
	uint32_t m_nLightmapGameVersionNumber; // 0x28
	Vector2D m_vLightmapUvScale; // 0x2c
	bool m_bHasLightmaps; // 0x34
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x38
};

// Aligment: 4
// Size: 56
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0
	int32_t m_nElementSizeInBytes; // 0x4
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8
	CUtlVector< uint8 > m_pData; // 0x20
};

// Aligment: 13
// Size: 352
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18
	CUtlVector< uint16 > m_visClusterMembership; // 0x30
	CUtlVector< AABB_t > m_boundsGroups; // 0x48
	CUtlVector< BoneOverride_t > m_boneOverrides; // 0x60
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xa8
	CUtlVector< CUtlString > m_layerNames; // 0xc0
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xd8
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xf0
	CUtlString m_grassFileName; // 0x108
	BakedLightingInfo_t m_nodeLightingInfo; // 0x110
};

// Aligment: 19
// Size: 84
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
	Vector2D m_vLightmapUvScale; // 0x4c
};

// Aligment: 8
// Size: 80
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

// Aligment: 4
// Size: 216
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0
	CUtlVector< NodeData_t > m_worldNodes; // 0x58
	BakedLightingInfo_t m_worldLightingInfo; // 0x70
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0xc0
};

// Aligment: 2
// Size: 8
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0
	uint32_t m_nOffsetIntoBlock; // 0x4
};

// Aligment: 11
// Size: 152
class CVoxelVisibility
{
public:
	CUtlVector< uint32 > m_blockOffset; // 0x30
	CUtlVector< voxel_vis_cluster_t > m_clusters; // 0x48
	Vector m_vMinBounds; // 0x60
	Vector m_vMaxBounds; // 0x6c
	float m_flGridSize; // 0x78
	int32_t m_nNodeCount; // 0x7c
	int32_t m_nRegionCount; // 0x80
	voxel_vis_cluster_t m_skyVisibilityCluster; // 0x84
	voxel_vis_compression_t m_nPVSCompression; // 0x8c
	uint32_t m_nTreeSize; // 0x90
	uint32_t m_nPVSSizeCompressed; // 0x94
};

// Aligment: 0
// Size: 1
struct VMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 4
// Size: 56
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// MNetworkEnable
	// MNetworkPriority "112"
	CEntityIdentity* m_pEntity; // 0x10
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x20
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x30
};

// Aligment: 1
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

