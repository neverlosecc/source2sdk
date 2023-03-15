#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: worldrenderer.dll
// Class Count: 28
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 7
// Size: 28
struct EntityIOConnectionData_t
{
public:
	CResourceString m_outputName; // 0x0
	uint32_t m_targetType; // 0x4
	CResourceString m_targetName; // 0x8
	CResourceString m_inputName; // 0xc
	CResourceString m_overrideParam; // 0x10
	float m_flDelay; // 0x14
	int32_t m_nTimesToFire; // 0x18
};

// Aligment: 2
// Size: 16
struct EntityKeyValueData_t
{
public:
	CResourceArray< uint8 > m_keyValuesData; // 0x0
	CResourceArray< EntityIOConnectionData_t > m_connections; // 0x8
};

// Aligment: 5
// Size: 28
struct PermEntityLumpData_t
{
public:
	CResourceString m_name; // 0x0
	EntityLumpFlags_t m_flags; // 0x4
	CResourceString m_manifestName; // 0x8
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCEntityLump > > > m_childLumps; // 0xc
	CResourceArray< EntityKeyValueData_t > m_entityKeyValues; // 0x14
};

// Aligment: 3
// Size: 24
struct LightTreeResourceData_t
{
public:
	CResourceArray< uint8 > m_SerializedOctree; // 0x0
	CResourceArray< uint16 > m_IrradValues; // 0x8
	CResourceArray< uint16 > m_ImageVertices; // 0x10
};

// Aligment: 30
// Size: 224
struct PRTMatrixData_t
{
public:
	int32_t m_nTransmitters; // 0x0
	int32_t m_nReceivers; // 0x4
	int32_t m_nTextureWidth; // 0x8
	int32_t m_nTextureHeight; // 0xc
	int32_t m_nTextureDepth; // 0x10
	int64_t m_nPrimaryRelightDataOffset; // 0x18
	int64_t m_nPrimaryRelightDataSize; // 0x20
	int64_t m_nPrimaryRelightDataSizeUncompressed; // 0x28
	int64_t m_nSecondaryRelightDataOffset; // 0x30
	int64_t m_nSecondaryRelightDataSize; // 0x38
	int64_t m_nSecondaryRelightDataSizeUncompressed; // 0x40
	int64_t m_nPrimarySkyRelightDataOffset; // 0x48
	int64_t m_nPrimarySkyRelightDataSize; // 0x50
	int64_t m_nPrimarySkyRelightDataSizeUncompressed; // 0x58
	int64_t m_nSecondarySkyRelightDataOffset; // 0x60
	int64_t m_nSecondarySkyRelightDataSize; // 0x68
	int64_t m_nSecondarySkyRelightDataSizeUncompressed; // 0x70
	int64_t m_nTransmitterPositionsOffset; // 0x78
	int64_t m_nTransmitterPositionsSize; // 0x80
	int64_t m_nTransmitterPositionsSizeUncompressed; // 0x88
	int64_t m_nReceiverPositionsOffset; // 0x90
	int64_t m_nReceiverPositionsSize; // 0x98
	int64_t m_nReceiverPositionsSizeUncompressed; // 0xa0
	int64_t m_nTransmitterMaterialsOffset; // 0xa8
	int64_t m_nTransmitterMaterialsSize; // 0xb0
	int64_t m_nTransmitterMaterialsSizeUncompressed; // 0xb8
	int64_t m_nReceiverIndicesOffset; // 0xc0
	int64_t m_nReceiverIndicesSize; // 0xc8
	int64_t m_nReceiverIndicesSizeUncompressed; // 0xd0
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > > m_materials; // 0xd8
};

// Aligment: 15
// Size: 144
struct VirtualVolumeTexData_t
{
public:
	Vector m_vBoundsMin; // 0x0
	Vector m_vBoundsMax; // 0xc
	Vector4D m_vPlaneX; // 0x18
	Vector4D m_vPlaneY; // 0x28
	Vector4D m_vPlaneZ; // 0x38
	Vector m_vPlaneEndDistancesXYZ; // 0x48
	int32_t m_nVirtualResX; // 0x54
	int32_t m_nVirtualResY; // 0x58
	int32_t m_nVirtualResZ; // 0x5c
	CResourceArray< int32 > m_channelPageResX; // 0x60
	CResourceArray< int32 > m_channelPageResY; // 0x68
	CResourceArray< int32 > m_channelPageResZ; // 0x70
	CResourceArray< int32 > m_imageFormats; // 0x78
	CResourceArray< int64 > m_pageOffsets; // 0x80
	int64_t m_nPageDataTotalSize; // 0x88
};

// Aligment: 15
// Size: 152
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0
	Vector4D[4] m_vTransform; // 0x4
	float m_flFadeStartDistance; // 0x44
	float m_flFadeEndDistance; // 0x48
	Vector4D m_vTintColor; // 0x4c
	CResourceString m_skin; // 0x5c
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x60
	Vector m_vLightingOrigin; // 0x64
	uint32_t m_nLightGroup; // 0x70
	int32_t m_nOverlayRenderOrder; // 0x74
	int32_t m_nCubeMapPrecomputedHandshake; // 0x78
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x7c
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCModel > > m_renderableModel; // 0x80
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCRenderMesh > > m_renderable; // 0x88
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > > m_externalTextures; // 0x90
};

// Aligment: 1
// Size: 4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0
};

// Aligment: 2
// Size: 20
struct BoneOverride_t : public BaseSceneObjectOverride_t
{
public:
	CResourceArray< uint32 > m_boneHashes; // 0x4
	CResourceArray< matrix3x4_t > m_boneTransforms; // 0xc
};

// Aligment: 4
// Size: 32
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
	RenderBufferBinding_t m_extraBufferBinding; // 0x10
};

// Aligment: 3
// Size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_pMaterial; // 0x10
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
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_pMaterial; // 0x50
	int32_t m_nRenderOrder; // 0x58
	Vector4D m_vTintColor; // 0x5c
	int32_t m_nSequenceOverride; // 0x6c
};

// Aligment: 7
// Size: 20
struct PerInstanceBakedLightingParamsOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	bool m_bHasBakedLightingFromVertexStream; // 0xc
	bool m_bHasBakedLightingFromLightmap; // 0xd
	bool m_bHasBakedLightingBasisInVertex; // 0xe
	bool m_bHasPerInstanceBakedLightingData; // 0xf
	uint32_t m_nPerVertexLightingOffsetInVertices; // 0x10
};

// Aligment: 7
// Size: 36
struct BakedLightingInfo_t
{
public:
	CResourceArray< uint8 > m_PerVertexLightingDataPlainRGBM; // 0x0
	uint32_t m_nPerVertexLightingDataPlainRGBMWidth; // 0x8
	uint32_t m_nPerVertexLightingDataPlainRGBMHeight; // 0xc
	uint32_t m_nPerVertexLightingDataPlainRGBMDepth; // 0x10
	uint32_t m_nLightmapVersionNumber; // 0x14
	bool m_bHasLightmaps; // 0x18
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > > m_lightMaps; // 0x1c
};

// Aligment: 12
// Size: 120
struct WorldNode_t
{
public:
	CResourceArray< SceneObject_t > m_sceneObjects; // 0x0
	CResourceArray< InfoOverlayData_t > m_infoOverlays; // 0x8
	CResourceArray< BoneOverride_t > m_boneOverrides; // 0x10
	CResourceArray< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x18
	CResourceArray< MaterialOverride_t > m_materialOverrides; // 0x20
	CResourceArray< PerInstanceBakedLightingParamsOverride_t > m_lightmapInstanceDataOverrides; // 0x28
	CResourceArray< OnDiskBufferData_t > m_extraVertexStreams; // 0x30
	CResourceArray< CResourceString > m_layerNames; // 0x38
	CResourceArray< uint8 > m_sceneObjectLayerIndices; // 0x40
	CResourceArray< uint8 > m_overlayLayerIndices; // 0x48
	CResourceString m_grassFileName; // 0x50
	BakedLightingInfo_t m_nodeLightingInfo; // 0x54
};

// Aligment: 19
// Size: 76
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
	uint8[2] m_padding; // 0x4a
};

// Aligment: 8
// Size: 60
struct NodeData_t
{
public:
	int32_t m_Flags; // 0x0
	int32_t m_nParent; // 0x4
	Vector m_vOrigin; // 0x8
	Vector m_vMinBounds; // 0x14
	Vector m_vMaxBounds; // 0x20
	float m_flMinimumDistance; // 0x2c
	CResourceArray< int32 > m_ChildNodeIndices; // 0x30
	CResourceString m_worldNodePrefix; // 0x38
};

// Aligment: 4
// Size: 128
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0
	CResourceArray< NodeData_t > m_worldNodes; // 0x4c
	BakedLightingInfo_t m_worldLightingInfo; // 0x54
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCEntityLump > > > m_entityLumps; // 0x78
};

// Aligment: 2
// Size: 8
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0
	uint32_t m_nOffsetIntoBlock; // 0x4
};

// Aligment: 10
// Size: 144
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
	voxel_vis_compression_t m_nPVSCompression; // 0x84
	uint32_t m_nTreeSize; // 0x88
	uint32_t m_nPVSSizeCompressed; // 0x8c
};

// Aligment: 5
// Size: 88
struct WorldEnvironmentMap_t
{
public:
	matrix3x4_t m_matLocalToWorld; // 0x0
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_environmentMapTexture; // 0x30
	bool m_bSkyRelight; // 0x38
	float m_flInfluenceRadius; // 0x3c
	AABB_t m_BoxProjection; // 0x40
};

// Aligment: 1
// Size: 8
struct WorldEnvironmentMaps_t
{
public:
	CResourceArray< WorldEnvironmentMap_t > m_environmentMaps; // 0x0
};

// Aligment: 12
// Size: 392
struct IrradVolume_t
{
public:
	VMatrix m_transform; // 0x0
	float m_flFadeMinDist; // 0x40
	float m_flFadeMaxDist; // 0x44
	Vector m_vMinBounds; // 0x48
	Vector m_vMaxBounds; // 0x54
	IrradVolumeFlags_t m_nFlags; // 0x60
	uint32_t m_nSortKey; // 0x64
	uint32_t m_nPlanes; // 0x68
	Vector4D[16] m_planes; // 0x6c
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_texture; // 0x170
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCLightTree > > m_lightTree; // 0x178
	CResourceExtReference< CWeakHandle< InfoForResourceTypePRTMatrixData_t > > m_prtMatrix; // 0x180
};

// Aligment: 2
// Size: 12
struct WorldLighting_t
{
public:
	GlobalIlluminationMethod_t m_globalIlluminationMethod; // 0x0
	CResourceArray< IrradVolume_t > m_irradVolumes; // 0x4
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

