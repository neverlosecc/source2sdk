#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: resourcesystem.dll
// Class Count: 89
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 4
// Size: 6
enum class LightType_t : uint32_t
{
	MATERIAL_LIGHT_DISABLE = 0x0,
	MATERIAL_LIGHT_POINT = 0x1,
	MATERIAL_LIGHT_DIRECTIONAL = 0x2,
	MATERIAL_LIGHT_SPOT = 0x3,
	MATERIAL_LIGHT_ORTHO = 0x4,
	MATERIAL_LIGHT_ENVIRONMENT_PROBE = 0x5,
};

// Aligment: 4
// Size: 1
enum class LightSourceShape_t : uint32_t
{
	LIGHT_SOURCE_SHAPE_SPHERE = 0x0,
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSnapshot
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeAnimationResourceData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeAnimationGroupResourceData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeSequenceGroupResourceData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVBitmapFontRuntimeData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIMaterial2
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeMorphSetData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCRenderMesh
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCModel
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeProcessingGraph_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeProcessingGraphInstance_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCTextureBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVSound_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVMixListResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPhysAggregateData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCEntityLump
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCLightTree
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypePRTMatrixData_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVirtualVolumeTexture
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCWorldNode
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorld_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVoxelVisibility
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorldLighting_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorldEnvironmentMaps_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPostProcessingResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaStyle
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaLayout
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIAnimationGraph
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
// <no members described>
};

// Aligment: 95
// Size: 536
struct PhysFeModelDesc_t
{
public:
	CResourceArray< uint32 > m_CtrlHash; // 0x0
	CResourceArray< CResourceString > m_CtrlName; // 0x8
	uint32_t m_nStaticNodeFlags; // 0x10
	uint32_t m_nDynamicNodeFlags; // 0x14
	float m_flLocalForce; // 0x18
	float m_flLocalRotation; // 0x1c
	uint16_t m_nNodeCount; // 0x20
	uint16_t m_nStaticNodes; // 0x22
	uint16_t m_nRotLockStaticNodes; // 0x24
	uint16_t m_nSimdTriCount1; // 0x26
	uint16_t m_nSimdTriCount2; // 0x28
	uint16_t m_nSimdQuadCount1; // 0x2a
	uint16_t m_nSimdQuadCount2; // 0x2c
	uint16_t m_nQuadCount1; // 0x2e
	uint16_t m_nQuadCount2; // 0x30
	uint16_t m_nCollisionSphereInclusiveCount; // 0x32
	uint16_t m_nTreeDepth; // 0x34
	uint16_t m_nFitMatrixCount1; // 0x36
	uint16_t m_nFitMatrixCount2; // 0x38
	uint16_t m_nSimdFitMatrixCount1; // 0x3a
	uint16_t m_nSimdFitMatrixCount2; // 0x3c
	uint16_t m_nRopeCount; // 0x3e
	CResourceArray< uint16 > m_Ropes; // 0x40
	CResourceArray< FeNodeBase_t > m_NodeBases; // 0x48
	CResourceArray< FeSimdNodeBase_t > m_SimdNodeBases; // 0x50
	CResourceArray< FeQuad_t > m_Quads; // 0x58
	CResourceArray< FeSimdQuad_t > m_SimdQuads; // 0x60
	CResourceArray< FeSimdTri_t > m_SimdTris; // 0x68
	CResourceArray< FeSimdRodConstraint_t > m_SimdRods; // 0x70
	CResourceArray< CTransform > m_InitPose; // 0x78
	CResourceArray< FeRodConstraint_t > m_Rods; // 0x80
	CResourceArray< FeAxialEdgeBend_t > m_AxialEdges; // 0x88
	CResourceArray< float32 > m_NodeInvMasses; // 0x90
	CResourceArray< FeCtrlOffset_t > m_CtrlOffsets; // 0x98
	CResourceArray< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0xa0
	CResourceArray< FeFollowNode_t > m_FollowNodes; // 0xa8
	CResourceArray< FeCollisionSphere_t > m_CollisionSpheres; // 0xb0
	CResourceArray< FeCollisionPlane_t > m_CollisionPlanes; // 0xb8
	CResourceArray< FeNodeIntegrator_t > m_NodeIntegrator; // 0xc0
	CResourceArray< FeSpringIntegrator_t > m_SpringIntegrator; // 0xc8
	CResourceArray< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0xd0
	CResourceArray< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0xd8
	CResourceArray< float32 > m_LegacyStretchForce; // 0xe0
	CResourceArray< float32 > m_NodeCollisionRadii; // 0xe8
	CResourceArray< float32 > m_LocalRotation; // 0xf0
	CResourceArray< float32 > m_LocalForce; // 0xf8
	CResourceArray< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x100
	CResourceArray< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x108
	CResourceArray< FeSphereRigid_t > m_SphereRigids; // 0x110
	CResourceArray< uint16 > m_WorldCollisionNodes; // 0x118
	CResourceArray< uint16 > m_TreeParents; // 0x120
	CResourceArray< uint16 > m_TreeCollisionMasks; // 0x128
	CResourceArray< FeTreeChildren_t > m_TreeChildren; // 0x130
	CResourceArray< uint16 > m_FreeNodes; // 0x138
	CResourceArray< FeFitMatrix_t > m_FitMatrices; // 0x140
	CResourceArray< FeSimdFitMatrices_t > m_SimdFitMatrices; // 0x148
	CResourceArray< FeFitWeight_t > m_FitWeights; // 0x150
	CResourceArray< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x158
	CResourceArray< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x160
	CResourceArray< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x168
	CResourceArray< FeKelagerBend2_t > m_KelagerBends; // 0x170
	CResourceArray< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x178
	CResourceArray< CFeIndexedJiggleBone > m_JiggleBones; // 0x180
	CResourceArray< uint16 > m_SourceElems; // 0x188
	CResourceArray< uint32 > m_GoalDampedSpringIntegrators; // 0x190
	CResourceArray< FeTri_t > m_Tris; // 0x198
	uint16_t m_nTriCount1; // 0x1a0
	uint16_t m_nTriCount2; // 0x1a2
	uint8_t m_nReservedUint8; // 0x1a4
	uint8_t m_nExtraPressureIterations; // 0x1a5
	uint8_t m_nExtraGoalIterations; // 0x1a6
	uint8_t m_nExtraIterations; // 0x1a7
	CResourceArray< FeBoxRigid_t > m_BoxRigids; // 0x1a8
	CResourceArray< uint8 > m_DynNodeVertexSet; // 0x1b0
	CResourceArray< uint32 > m_VertexSetNames; // 0x1b8
	CResourceArray< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x1c0
	uint32[3] m_nReserved; // 0x1c8
	float m_flInternalPressure; // 0x1d4
	float m_flWindage; // 0x1d8
	float m_flWindDrag; // 0x1dc
	float m_flDefaultSurfaceStretch; // 0x1e0
	float m_flDefaultThreadStretch; // 0x1e4
	float m_flDefaultGravityScale; // 0x1e8
	float m_flDefaultVelAirDrag; // 0x1ec
	float m_flDefaultExpAirDrag; // 0x1f0
	float m_flDefaultVelQuadAirDrag; // 0x1f4
	float m_flDefaultExpQuadAirDrag; // 0x1f8
	float m_flDefaultVelRodAirDrag; // 0x1fc
	float m_flDefaultExpRodAirDrag; // 0x200
	float m_flRodVelocitySmoothRate; // 0x204
	float m_flQuadVelocitySmoothRate; // 0x208
	float m_flAddWorldCollisionRadius; // 0x20c
	float m_flDefaultVolumetricSolveAmount; // 0x210
	uint16_t m_nRodVelocitySmoothIterations; // 0x214
	uint16_t m_nQuadVelocitySmoothIterations; // 0x216
};

// Aligment: 34
// Size: 152
class CFeJiggleBone
{
public:
	uint32_t m_nFlags; // 0x0
	float m_flLength; // 0x4
	float m_flTipMass; // 0x8
	float m_flYawStiffness; // 0xc
	float m_flYawDamping; // 0x10
	float m_flPitchStiffness; // 0x14
	float m_flPitchDamping; // 0x18
	float m_flAlongStiffness; // 0x1c
	float m_flAlongDamping; // 0x20
	float m_flAngleLimit; // 0x24
	float m_flMinYaw; // 0x28
	float m_flMaxYaw; // 0x2c
	float m_flYawFriction; // 0x30
	float m_flYawBounce; // 0x34
	float m_flMinPitch; // 0x38
	float m_flMaxPitch; // 0x3c
	float m_flPitchFriction; // 0x40
	float m_flPitchBounce; // 0x44
	float m_flBaseMass; // 0x48
	float m_flBaseStiffness; // 0x4c
	float m_flBaseDamping; // 0x50
	float m_flBaseMinLeft; // 0x54
	float m_flBaseMaxLeft; // 0x58
	float m_flBaseLeftFriction; // 0x5c
	float m_flBaseMinUp; // 0x60
	float m_flBaseMaxUp; // 0x64
	float m_flBaseUpFriction; // 0x68
	float m_flBaseMinForward; // 0x6c
	float m_flBaseMaxForward; // 0x70
	float m_flBaseForwardFriction; // 0x74
	float m_flRadius0; // 0x78
	float m_flRadius1; // 0x7c
	Vector m_vPoint0; // 0x80
	Vector m_vPoint1; // 0x8c
};

// Aligment: 4
// Size: 208
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0
	CTransform m_transform; // 0x10
	uint32_t m_nJiggleParent; // 0x30
	CFeJiggleBone m_jiggleBone; // 0x34
};

// Aligment: 3
// Size: 160
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0
	uint32_t m_nJiggleParent; // 0x4
	CFeJiggleBone m_jiggleBone; // 0x8
};

// Aligment: 33
// Size: 228
struct LightDesc_t
{
public:
	LightType_t m_Type; // 0x0
	Vector m_Color; // 0x4
	Vector m_BounceColor; // 0x10
	float m_Range; // 0x1c
	float m_Falloff; // 0x20
	float m_Attenuation0; // 0x24
	float m_Attenuation1; // 0x28
	float m_Attenuation2; // 0x2c
	float m_Theta; // 0x30
	float m_Phi; // 0x34
	CUtlStringToken m_lightCookie; // 0x38
	bool m_bCastShadows; // 0x3c
	int32_t m_nShadowWidth; // 0x40
	int32_t m_nShadowHeight; // 0x44
	int32_t m_nShadowCascadeCount; // 0x48
	float32[4] m_flShadowCascadeDistance; // 0x4c
	int32[4] m_nShadowCascadeResolution; // 0x5c
	int32_t m_nBakeLightIndex; // 0x6c
	float m_flBakeLightIndexScale; // 0x70
	bool m_bRenderDiffuse; // 0x74
	bool m_bRenderSpecular; // 0x75
	int32_t m_nPriority; // 0x78
	LightSourceShape_t m_Shape; // 0x7c
	float m_flLightSourceDim0; // 0x80
	float m_flLightSourceDim1; // 0x84
	float m_flLightSourceSize0; // 0x88
	float m_flLightSourceSize1; // 0x8c
	float m_flPrecomputedMaxRange; // 0x90
	float m_flFogContributionStength; // 0x94
	float m_flNearClipPlane; // 0x98
	Vector m_vecUp; // 0xb4
	int32_t m_nFogLightingMode; // 0xdc
	bool m_bUsesIndexedBakedLighting; // 0xe0
};

// Aligment: 2
// Size: 24
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
};

// Aligment: 2
// Size: 32
class FourVectors2D
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
};

// Aligment: 3
// Size: 16
struct FeEdgeDesc_t
{
public:
	uint16[2] nEdge; // 0x0
	uint16[2][2] nSide; // 0x4
	uint16[2] nVirtElem; // 0xc
};

// Aligment: 12
// Size: 72
struct OldFeEdge_t
{
public:
	float32[3] m_flK; // 0x0
	float invA; // 0xc
	float t; // 0x10
	float flThetaRelaxed; // 0x14
	float flThetaFactor; // 0x18
	float c01; // 0x1c
	float c02; // 0x20
	float c03; // 0x24
	float c04; // 0x28
	float flAxialModelDist; // 0x2c
	float32[4] flAxialModelWeights; // 0x30
	uint16[4] m_nNode; // 0x40
};

// Aligment: 2
// Size: 4
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nWeight; // 0x2
};

// Aligment: 4
// Size: 24
struct FeKelagerBend2_t
{
public:
	float32[3] flWeight; // 0x0
	float flHeight0; // 0xc
	uint16[3] nNode; // 0x10
	uint16_t nReserved; // 0x16
};

// Aligment: 5
// Size: 28
struct FeTri_t
{
public:
	uint16[3] nNode; // 0x0
	float w1; // 0x8
	float w2; // 0xc
	float v1x; // 0x10
	Vector2D v2; // 0x14
};

// Aligment: 5
// Size: 128
struct FeSimdTri_t
{
public:
	uint32[4][3] nNode; // 0x0
	fltx4 w1; // 0x30
	fltx4 w2; // 0x40
	fltx4 v1x; // 0x50
	FourVectors2D v2; // 0x60
};

// Aligment: 3
// Size: 76
struct FeQuad_t
{
public:
	uint16[4] nNode; // 0x0
	float flSlack; // 0x8
	Vector4D[4] vShape; // 0xc
};

// Aligment: 7
// Size: 32
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0
	uint16[3] nDummy; // 0x2
	uint16_t nNodeX0; // 0x8
	uint16_t nNodeX1; // 0xa
	uint16_t nNodeY0; // 0xc
	uint16_t nNodeY1; // 0xe
	Quaternion qAdjust; // 0x10
};

// Aligment: 3
// Size: 16
struct FeNodeReverseOffset_t
{
public:
	uint16_t nBoneCtrl; // 0x0
	uint16_t nTargetNode; // 0x2
	Vector vOffset; // 0x4
};

// Aligment: 4
// Size: 304
struct FeSimdQuad_t
{
public:
	uint16[4][4] nNode; // 0x0
	fltx4 f4Slack; // 0x20
	FourVectors[4] vShape; // 0x30
	fltx4[4] f4Weights; // 0xf0
};

// Aligment: 5
// Size: 40
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0
	float tv; // 0x4
	float flDist; // 0x8
	float32[4] flWeight; // 0xc
	uint16[6] nNode; // 0x1c
};

// Aligment: 3
// Size: 20
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0
	float flDistMax; // 0x4
	uint16[6] nNode; // 0x8
};

// Aligment: 5
// Size: 20
struct FeRodConstraint_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flMinDist; // 0x8
	float flWeight0; // 0xc
	float flRelaxationFactor; // 0x10
};

// Aligment: 5
// Size: 80
struct FeSimdRodConstraint_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 f4MaxDist; // 0x10
	fltx4 f4MinDist; // 0x20
	fltx4 f4Weight0; // 0x30
	fltx4 f4RelaxationFactor; // 0x40
};

// Aligment: 3
// Size: 12
struct FeAnimStrayRadius_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flRelaxationFactor; // 0x8
};

// Aligment: 3
// Size: 48
struct FeSimdAnimStrayRadius_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flMaxDist; // 0x10
	fltx4 flRelaxationFactor; // 0x20
};

// Aligment: 7
// Size: 112
struct FeSimdNodeBase_t
{
public:
	uint16[4] nNode; // 0x0
	uint16[4] nNodeX0; // 0x8
	uint16[4] nNodeX1; // 0x10
	uint16[4] nNodeY0; // 0x18
	uint16[4] nNodeY1; // 0x20
	uint16[4] nDummy; // 0x28
	FourQuaternions qAdjust; // 0x30
};

// Aligment: 4
// Size: 16
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0
	float flAnimationForceAttraction; // 0x4
	float flAnimationVertexAttraction; // 0x8
	float flGravity; // 0xc
};

// Aligment: 5
// Size: 20
struct FeSpringIntegrator_t
{
public:
	uint16[2] nNode; // 0x0
	float flSpringRestLength; // 0x4
	float flSpringConstant; // 0x8
	float flSpringDamping; // 0xc
	float flNodeWeight0; // 0x10
};

// Aligment: 5
// Size: 80
struct FeSimdSpringIntegrator_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flSpringRestLength; // 0x10
	fltx4 flSpringConstant; // 0x20
	fltx4 flSpringDamping; // 0x30
	fltx4 flNodeWeight0; // 0x40
};

// Aligment: 3
// Size: 16
struct FeCtrlOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
	Vector vOffset; // 0x4
};

// Aligment: 2
// Size: 8
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0
	float flAlpha; // 0x4
};

// Aligment: 4
// Size: 20
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
	Vector vOffset; // 0x4
	float flAlpha; // 0x10
};

// Aligment: 2
// Size: 4
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
};

// Aligment: 3
// Size: 8
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0
	uint16_t nChildNode; // 0x2
	float flWeight; // 0x4
};

// Aligment: 5
// Size: 24
struct FeCollisionSphere_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	float m_flRFactor; // 0x4
	Vector m_vOrigin; // 0x8
	float flStickiness; // 0x14
};

// Aligment: 4
// Size: 24
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	RnPlane_t m_Plane; // 0x4
	float flStickiness; // 0x14
};

// Aligment: 4
// Size: 12
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0
	float flGroundFriction; // 0x4
	uint16_t nListBegin; // 0x8
	uint16_t nListEnd; // 0xa
};

// Aligment: 1
// Size: 4
struct FeTreeChildren_t
{
public:
	uint16[2] nChild; // 0x0
};

// Aligment: 5
// Size: 40
struct FeTaperedCapsuleRigid_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nCollisionMask; // 0x2
	Vector[2] vCenter; // 0x4
	float32[2] flRadius; // 0x1c
	float flStickiness; // 0x24
};

// Aligment: 5
// Size: 24
struct FeSphereRigid_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nCollisionMask; // 0x2
	Vector vCenter; // 0x4
	float flRadius; // 0x10
	float flStickiness; // 0x14
};

// Aligment: 5
// Size: 20
struct FeTaperedCapsuleStretch_t
{
public:
	uint16[2] nNode; // 0x0
	uint16_t nCollisionMask; // 0x4
	// MPropertySuppressField
	uint16_t nDummy; // 0x6
	float32[2] flRadius; // 0x8
	float flStickiness; // 0x10
};

// Aligment: 6
// Size: 80
struct FeBoxRigid_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nCollisionMask; // 0x2
	Vector vSize; // 0x4
	float flStickiness; // 0x10
	float32[3] flReserved; // 0x14
	matrix3x4a_t tmFrame; // 0x20
};

// Aligment: 4
// Size: 24
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0
	float m_flXY; // 0xc
	float m_flXZ; // 0x10
	float m_flYZ; // 0x14
};

// Aligment: 4
// Size: 96
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0
	fltx4 m_flXY; // 0x30
	fltx4 m_flXZ; // 0x40
	fltx4 m_flYZ; // 0x50
};

// Aligment: 3
// Size: 8
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0
	uint16_t nNode; // 0x4
	uint16_t nDummy; // 0x6
};

// Aligment: 3
// Size: 12
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0
	float flWeight; // 0x4
	uint32_t nMatrixNode; // 0x8
};

// Aligment: 6
// Size: 64
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0
	Vector vCenter; // 0x20
	uint16_t nEnd; // 0x2c
	uint16_t nNode; // 0x2e
	uint16_t nCtrl; // 0x30
	uint16_t nBeginDynamic; // 0x32
};

// Aligment: 6
// Size: 192
struct FeSimdFitMatrices_t
{
public:
	FourVectors vCenter; // 0x0
	uint16[4] nEnd; // 0x30
	uint16[4] nCtrl; // 0x38
	FourCovMatrices3 AqqInv; // 0x40
	fltx4 flStretchMin; // 0xa0
	fltx4 flStretchMax; // 0xb0
};

// Aligment: 6
// Size: 14
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleStretchIndex; // 0x0
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x2
	uint16_t m_nSphereRigidIndex; // 0x4
	uint16_t m_nBoxRigidIndex; // 0x6
	uint16[2] m_nCollisionSphereIndex; // 0x8
	uint16_t m_nCollisionPlaneIndex; // 0xc
};

// Aligment: 1
// Size: 24
struct FeBuildTaperedCapsuleStretch_t : public FeTaperedCapsuleStretch_t
{
public:
	int32_t m_nPriority; // 0x14
};

// Aligment: 1
// Size: 44
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x28
};

// Aligment: 1
// Size: 96
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x50
};

// Aligment: 1
// Size: 28
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x18
};

// Aligment: 4
// Size: 64
class FourQuaternions
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
	fltx4 z; // 0x20
	fltx4 w; // 0x30
};

