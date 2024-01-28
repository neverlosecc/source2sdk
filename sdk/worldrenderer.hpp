#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: worldrenderer.dll
// Classes count: 27
// Enums count: 1
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: worldrenderer.dll (project 'worldrenderer')
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
struct EntityKeyValueData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x8	
	CUtlBinaryBlock m_keyValuesData; // 0x20	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
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
	int16_t m_nOverlayRenderOrder; // 0x68	
	int16_t m_nLODOverride; // 0x6a	
	int32_t m_nCubeMapPrecomputedHandshake; // 0x6c	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x78	
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x80	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x70
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0	
	int32_t m_nElementSizeInBytes; // 0x4	
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8	
	CUtlVector< uint8 > m_pData; // 0x20	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct AggregateLODSetup_t
{
public:
	Vector m_vLODOrigin; // 0x0	
	float m_fMaxObjectScale; // 0xc	
	CUtlVectorFixedGrowable< float32 > m_fSwitchDistances; // 0x10	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x78
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ClutterTile_t
{
public:
	uint32_t m_nFirstInstance; // 0x0	
	uint32_t m_nLastInstance; // 0x4	
	AABB_t m_BoundsWs; // 0x8	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x140
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x20	
	BakedLightingInfo_t m_worldLightingInfo; // 0x38	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x68	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VoxelVisBlockOffset_t
{
public:
	uint32_t m_nOffset; // 0x0	
	uint32_t m_nElementCount; // 0x4	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
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

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
struct VMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmap"
struct InfoForResourceTypeVMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: worldrenderer.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: worldrenderer.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
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
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: worldrenderer.dll (project 'entity2')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
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

// Registered binary: worldrenderer.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
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

