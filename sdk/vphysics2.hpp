#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: vphysics2.dll
// Classes count: 87
// Enums count: 2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 4
// Size: 0x4
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Alignment: 4
// Size: 0x3
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

struct constraint_axislimit_t;
struct constraint_breakableparams_t;
struct CFeJiggleBone;
struct FourVectors2D;
struct FourQuaternions;
struct RnPlane_t;
struct AABB_t;
struct CRegionSVM;
struct RnSphere_t;
struct RnCapsule_t;
struct RnHull_t;
struct RnMesh_t;

// Alignment: 5
// Size: 0x18
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0	
	float forceLimit; // 0x4	
	float torqueLimit; // 0x8	
	float bodyMassScale[2]; // 0xc	
	bool isActive; // 0x14	
};

// Alignment: 4
// Size: 0x10
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0	
	float flMaxRotation; // 0x4	
	float flMotorTargetAngSpeed; // 0x8	
	float flMotorMaxTorque; // 0xc	
};

// Alignment: 4
// Size: 0x40
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0	
	Vector worldAxisDirection; // 0xc	
	constraint_axislimit_t hingeAxis; // 0x18	
	constraint_breakableparams_t constraint; // 0x28	
};

// Alignment: 0
// Size: 0x8
class IPhysicsPlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No members available
};

// Alignment: 35
// Size: 0x9c
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
	uint16_t m_nCollisionMask; // 0x98	
};

// Alignment: 4
// Size: 0xd0
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0	
	CTransform m_transform; // 0x10	
	uint32_t m_nJiggleParent; // 0x30	
	CFeJiggleBone m_jiggleBone; // 0x34	
};

// Alignment: 3
// Size: 0xa4
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0	
	uint32_t m_nJiggleParent; // 0x4	
	CFeJiggleBone m_jiggleBone; // 0x8	
};

// Alignment: 98
// Size: 0x5e8
struct PhysFeModelDesc_t
{
public:
	CUtlVector< uint32 > m_CtrlHash; // 0x0	
	CUtlVector< CUtlString > m_CtrlName; // 0x18	
	uint32_t m_nStaticNodeFlags; // 0x30	
	uint32_t m_nDynamicNodeFlags; // 0x34	
	float m_flLocalForce; // 0x38	
	float m_flLocalRotation; // 0x3c	
	uint16_t m_nNodeCount; // 0x40	
	uint16_t m_nStaticNodes; // 0x42	
	uint16_t m_nRotLockStaticNodes; // 0x44	
	uint16_t m_nFirstPositionDrivenNode; // 0x46	
	uint16_t m_nSimdTriCount1; // 0x48	
	uint16_t m_nSimdTriCount2; // 0x4a	
	uint16_t m_nSimdQuadCount1; // 0x4c	
	uint16_t m_nSimdQuadCount2; // 0x4e	
	uint16_t m_nQuadCount1; // 0x50	
	uint16_t m_nQuadCount2; // 0x52	
	uint16_t m_nTreeDepth; // 0x54	
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56	
	uint16_t m_nRopeCount; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005a[0x6]; // 0x5a
public:
	CUtlVector< uint16 > m_Ropes; // 0x60	
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78	
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90	
	CUtlVector< FeQuad_t > m_Quads; // 0xa8	
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc0	
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xd8	
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf0	
	CUtlVector< CTransform > m_InitPose; // 0x108	
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x120	
	CUtlVector< FeTwistConstraint_t > m_Twists; // 0x138	
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x150	
	CUtlVector< float32 > m_NodeInvMasses; // 0x168	
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x180	
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x198	
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1b0	
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1c8	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1e0	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x1f8	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x210	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x228	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x240	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x258	
	CUtlVector< float32 > m_DynNodeFriction; // 0x270	
	CUtlVector< float32 > m_LocalRotation; // 0x288	
	CUtlVector< float32 > m_LocalForce; // 0x2a0	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2b8	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2d0	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x2e8	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x300	
	CUtlVector< uint16 > m_TreeParents; // 0x318	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x330	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x348	
	CUtlVector< uint16 > m_FreeNodes; // 0x360	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x378	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x390	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3a8	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3c0	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3d8	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x3f0	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x408	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x420	
	CUtlVector< uint16 > m_SourceElems; // 0x438	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x450	
	CUtlVector< FeTri_t > m_Tris; // 0x468	
	uint16_t m_nTriCount1; // 0x480	
	uint16_t m_nTriCount2; // 0x482	
	uint8_t m_nReservedUint8; // 0x484	
	uint8_t m_nExtraPressureIterations; // 0x485	
	uint8_t m_nExtraGoalIterations; // 0x486	
	uint8_t m_nExtraIterations; // 0x487	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x488	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4a0	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4b8	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4d0	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x4e8	
	CUtlVector< uint8 > m_MorphSetData; // 0x500	
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x518	
	CUtlVector< uint8 > m_VertexMapValues; // 0x530	
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x548	
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x560	
	CUtlVector< uint16 > m_LockToGoal; // 0x578	
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x590	
	float m_flInternalPressure; // 0x5a8	
	float m_flDefaultTimeDilation; // 0x5ac	
	float m_flWindage; // 0x5b0	
	float m_flWindDrag; // 0x5b4	
	float m_flDefaultSurfaceStretch; // 0x5b8	
	float m_flDefaultThreadStretch; // 0x5bc	
	float m_flDefaultGravityScale; // 0x5c0	
	float m_flDefaultVelAirDrag; // 0x5c4	
	float m_flDefaultExpAirDrag; // 0x5c8	
	float m_flDefaultVelQuadAirDrag; // 0x5cc	
	float m_flDefaultExpQuadAirDrag; // 0x5d0	
	float m_flRodVelocitySmoothRate; // 0x5d4	
	float m_flQuadVelocitySmoothRate; // 0x5d8	
	float m_flAddWorldCollisionRadius; // 0x5dc	
	float m_flDefaultVolumetricSolveAmount; // 0x5e0	
	uint16_t m_nRodVelocitySmoothIterations; // 0x5e4	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x5e6	
};

// Alignment: 2
// Size: 0x20
class FourVectors2D
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
};

// Alignment: 3
// Size: 0x10
struct FeEdgeDesc_t
{
public:
	uint16_t nEdge[2]; // 0x0	
	uint16_t nSide[2][2]; // 0x4	
	uint16_t nVirtElem[2]; // 0xc	
};

// Alignment: 12
// Size: 0x48
struct OldFeEdge_t
{
public:
	float m_flK[3]; // 0x0	
	float invA; // 0xc	
	float t; // 0x10	
	float flThetaRelaxed; // 0x14	
	float flThetaFactor; // 0x18	
	float c01; // 0x1c	
	float c02; // 0x20	
	float c03; // 0x24	
	float c04; // 0x28	
	float flAxialModelDist; // 0x2c	
	float flAxialModelWeights[4]; // 0x30	
	uint16_t m_nNode[4]; // 0x40	
};

// Alignment: 2
// Size: 0x4
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nWeight; // 0x2	
};

// Alignment: 4
// Size: 0x18
struct FeKelagerBend2_t
{
public:
	float flWeight[3]; // 0x0	
	float flHeight0; // 0xc	
	uint16_t nNode[3]; // 0x10	
	uint16_t nReserved; // 0x16	
};

// Alignment: 4
// Size: 0x1c
struct FeStiffHingeBuild_t
{
public:
	float flMaxAngle; // 0x0	
	float flStrength; // 0x4	
	float flMotionBias[3]; // 0x8	
	uint16_t nNode[3]; // 0x14	
};

// Alignment: 5
// Size: 0x1c
struct FeTri_t
{
public:
	uint16_t nNode[3]; // 0x0	
	float w1; // 0x8	
	float w2; // 0xc	
	float v1x; // 0x10	
	Vector2D v2; // 0x14	
};

// Alignment: 5
// Size: 0x80
struct FeSimdTri_t
{
public:
	uint32_t nNode[3][4]; // 0x0	
	fltx4 w1; // 0x30	
	fltx4 w2; // 0x40	
	fltx4 v1x; // 0x50	
	FourVectors2D v2; // 0x60	
};

// Alignment: 3
// Size: 0x4c
struct FeQuad_t
{
public:
	uint16_t nNode[4]; // 0x0	
	float flSlack; // 0x8	
	Vector4D vShape[4]; // 0xc	
};

// Alignment: 7
// Size: 0x20
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nDummy[3]; // 0x2	
	uint16_t nNodeX0; // 0x8	
	uint16_t nNodeX1; // 0xa	
	uint16_t nNodeY0; // 0xc	
	uint16_t nNodeY1; // 0xe	
	QuaternionStorage qAdjust; // 0x10	
};

// Alignment: 4
// Size: 0x8
struct FeNodeWindBase_t
{
public:
	uint16_t nNodeX0; // 0x0	
	uint16_t nNodeX1; // 0x2	
	uint16_t nNodeY0; // 0x4	
	uint16_t nNodeY1; // 0x6	
};

// Alignment: 3
// Size: 0x10
struct FeNodeReverseOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nBoneCtrl; // 0xc	
	uint16_t nTargetNode; // 0xe	
};

// Alignment: 4
// Size: 0x130
struct FeSimdQuad_t
{
public:
	uint16_t nNode[4][4]; // 0x0	
	fltx4 f4Slack; // 0x20	
	FourVectors vShape[4]; // 0x30	
	fltx4 f4Weights[4]; // 0xf0	
};

// Alignment: 5
// Size: 0x28
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0	
	float tv; // 0x4	
	float flDist; // 0x8	
	float flWeight[4]; // 0xc	
	uint16_t nNode[6]; // 0x1c	
};

// Alignment: 3
// Size: 0x14
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0	
	float flDistMax; // 0x4	
	uint16_t nNode[6]; // 0x8	
};

// Alignment: 5
// Size: 0x14
struct FeRodConstraint_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flMinDist; // 0x8	
	float flWeight0; // 0xc	
	float flRelaxationFactor; // 0x10	
};

// Alignment: 4
// Size: 0xc
struct FeTwistConstraint_t
{
public:
	uint16_t nNodeOrient; // 0x0	
	uint16_t nNodeEnd; // 0x2	
	float flTwistRelax; // 0x4	
	float flSwingRelax; // 0x8	
};

// Alignment: 5
// Size: 0x50
struct FeSimdRodConstraint_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 f4MaxDist; // 0x10	
	fltx4 f4MinDist; // 0x20	
	fltx4 f4Weight0; // 0x30	
	fltx4 f4RelaxationFactor; // 0x40	
};

// Alignment: 3
// Size: 0xc
struct FeAnimStrayRadius_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flRelaxationFactor; // 0x8	
};

// Alignment: 3
// Size: 0x30
struct FeSimdAnimStrayRadius_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flMaxDist; // 0x10	
	fltx4 flRelaxationFactor; // 0x20	
};

// Alignment: 7
// Size: 0x70
struct FeSimdNodeBase_t
{
public:
	uint16_t nNode[4]; // 0x0	
	uint16_t nNodeX0[4]; // 0x8	
	uint16_t nNodeX1[4]; // 0x10	
	uint16_t nNodeY0[4]; // 0x18	
	uint16_t nNodeY1[4]; // 0x20	
	uint16_t nDummy[4]; // 0x28	
	FourQuaternions qAdjust; // 0x30	
};

// Alignment: 4
// Size: 0x10
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0	
	float flAnimationForceAttraction; // 0x4	
	float flAnimationVertexAttraction; // 0x8	
	float flGravity; // 0xc	
};

// Alignment: 5
// Size: 0x14
struct FeSpringIntegrator_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flSpringRestLength; // 0x4	
	float flSpringConstant; // 0x8	
	float flSpringDamping; // 0xc	
	float flNodeWeight0; // 0x10	
};

// Alignment: 5
// Size: 0x50
struct FeSimdSpringIntegrator_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flSpringRestLength; // 0x10	
	fltx4 flSpringConstant; // 0x20	
	fltx4 flSpringDamping; // 0x30	
	fltx4 flNodeWeight0; // 0x40	
};

// Alignment: 3
// Size: 0x10
struct FeCtrlOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nCtrlParent; // 0xc	
	uint16_t nCtrlChild; // 0xe	
};

// Alignment: 2
// Size: 0x8
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0	
	float flAlpha; // 0x4	
};

// Alignment: 4
// Size: 0x14
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
	Vector vOffset; // 0x4	
	float flAlpha; // 0x10	
};

// Alignment: 2
// Size: 0x4
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
};

// Alignment: 3
// Size: 0x8
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0	
	uint16_t nChildNode; // 0x2	
	float flWeight; // 0x4	
};

// Alignment: 2
// Size: 0x10
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0	
	float m_flOffset; // 0xc	
};

// Alignment: 4
// Size: 0xc
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0	
	float flGroundFriction; // 0x4	
	uint16_t nListBegin; // 0x8	
	uint16_t nListEnd; // 0xa	
};

// Alignment: 1
// Size: 0x4
struct FeTreeChildren_t
{
public:
	uint16_t nChild[2]; // 0x0	
};

// Alignment: 5
// Size: 0x30
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4 vSphere[2]; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	uint16_t nVertexMapIndex; // 0x24	
	uint16_t nFlags; // 0x26	
};

// Alignment: 5
// Size: 0x20
struct FeSphereRigid_t
{
public:
	fltx4 vSphere; // 0x0	
	uint16_t nNode; // 0x10	
	uint16_t nCollisionMask; // 0x12	
	uint16_t nVertexMapIndex; // 0x14	
	uint16_t nFlags; // 0x16	
};

// Alignment: 4
// Size: 0x10
struct FeTaperedCapsuleStretch_t
{
public:
	uint16_t nNode[2]; // 0x0	
	uint16_t nCollisionMask; // 0x4	
	// MPropertySuppressField
	uint16_t nDummy; // 0x6	
	float flRadius[2]; // 0x8	
};

// Alignment: 6
// Size: 0x40
struct FeBoxRigid_t
{
public:
	CTransform tmFrame2; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	Vector vSize; // 0x24	
	uint16_t nVertexMapIndex; // 0x30	
	uint16_t nFlags; // 0x32	
};

// Alignment: 4
// Size: 0x18
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0	
	float m_flXY; // 0xc	
	float m_flXZ; // 0x10	
	float m_flYZ; // 0x14	
};

// Alignment: 4
// Size: 0x60
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0	
	fltx4 m_flXY; // 0x30	
	fltx4 m_flXZ; // 0x40	
	fltx4 m_flYZ; // 0x50	
};

// Alignment: 3
// Size: 0x8
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0	
	uint16_t nNode; // 0x4	
	uint16_t nDummy; // 0x6	
};

// Alignment: 3
// Size: 0xc
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0	
	float flWeight; // 0x4	
	uint32_t nMatrixNode; // 0x8	
};

// Alignment: 5
// Size: 0x40
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0	
	Vector vCenter; // 0x20	
	uint16_t nEnd; // 0x2c	
	uint16_t nNode; // 0x2e	
	uint16_t nBeginDynamic; // 0x30	
};

// Alignment: 4
// Size: 0x8
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0	
	uint16_t m_nSphereRigidIndex; // 0x2	
	uint16_t m_nBoxRigidIndex; // 0x4	
	uint16_t m_nCollisionPlaneIndex; // 0x6	
};

// Alignment: 2
// Size: 0x40
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x30	
	uint32_t m_nVertexMapHash; // 0x34	
};

// Alignment: 2
// Size: 0x50
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x40	
	uint32_t m_nVertexMapHash; // 0x44	
};

// Alignment: 2
// Size: 0x30
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20	
	uint32_t m_nVertexMapHash; // 0x24	
};

// Alignment: 1
// Size: 0x4
struct FeSourceEdge_t
{
public:
	uint16_t nNode[2]; // 0x0	
};

// Alignment: 4
// Size: 0x20
struct FeEffectDesc_t
{
public:
	CUtlString sName; // 0x0	
	uint32_t nNameHash; // 0x8	
	int32_t nType; // 0xc	
	KeyValues3 m_Params; // 0x10	
};

// Alignment: 6
// Size: 0x30
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0	
	uint32_t m_nNameHash; // 0x8	
	Color m_Color; // 0xc	
	float m_flVolumetricSolveStrength; // 0x10	
	int32_t m_nScaleSourceNode; // 0x14	
	CUtlVector< float32 > m_Weights; // 0x18	
};

// Alignment: 1
// Size: 0x18
class CFeVertexMapBuildArray
{
public:
	CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0	
};

// Alignment: 2
// Size: 0x10
struct FeProxyVertexMap_t
{
public:
	CUtlString m_Name; // 0x0	
	float m_flWeight; // 0x8	
};

// Alignment: 12
// Size: 0x38
struct FeVertexMapDesc_t
{
public:
	CUtlString sName; // 0x0	
	uint32_t nNameHash; // 0x8	
	uint32_t nColor; // 0xc	
	uint32_t nFlags; // 0x10	
	uint16_t nVertexBase; // 0x14	
	uint16_t nVertexCount; // 0x16	
	uint32_t nMapOffset; // 0x18	
	uint32_t nNodeListOffset; // 0x1c	
	Vector vCenterOfMass; // 0x20	
	float flVolumetricSolveStrength; // 0x2c	
	int16_t nScaleSourceNode; // 0x30	
	uint16_t nNodeListCount; // 0x32	
};

// Alignment: 8
// Size: 0x90
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
	uint32_t m_nFlags; // 0x88	
};

// Alignment: 7
// Size: 0x88
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
};

// Alignment: 1
// Size: 0x68
struct Dop26_t
{
public:
	float m_flSupport[26]; // 0x0	
};

// Alignment: 2
// Size: 0x10
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0	
	float m_flRadius; // 0xc	
};

// Alignment: 2
// Size: 0x1c
struct RnCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
};

// Alignment: 4
// Size: 0x18
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	RnPlane_t m_Plane; // 0x4	
	float flStrength; // 0x14	
};

// Alignment: 4
// Size: 0x4
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0	
	uint8_t m_nTwin; // 0x1	
	uint8_t m_nOrigin; // 0x2	
	uint8_t m_nFace; // 0x3	
};

// Alignment: 1
// Size: 0x1
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0	
};

// Alignment: 2
// Size: 0x30
class CRegionSVM
{
public:
	CUtlVector< RnPlane_t > m_Planes; // 0x0	
	CUtlVector< uint32 > m_Nodes; // 0x18	
};

// Alignment: 12
// Size: 0xd8
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0	
	float m_flMaxAngularRadius; // 0xc	
	AABB_t m_Bounds; // 0x10	
	Vector m_vOrthographicAreas; // 0x28	
	matrix3x4_t m_MassProperties; // 0x34	
	float m_flVolume; // 0x64	
	CUtlVector< Vector > m_Vertices; // 0x68	
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x80	
	CUtlVector< RnFace_t > m_Faces; // 0x98	
	CUtlVector< RnPlane_t > m_Planes; // 0xb0	
	uint32_t m_nFlags; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CRegionSVM* m_pRegionSVM; // 0xd0	
};

// Alignment: 1
// Size: 0xc
struct RnTriangle_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Alignment: 1
// Size: 0xc
struct RnWing_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Alignment: 4
// Size: 0x20
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0	
	uint32_t m_nChildren; // 0xc	
	Vector m_vMax; // 0x10	
	uint32_t m_nTriangleOffset; // 0x1c	
};

// Alignment: 10
// Size: 0xa8
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0	
	Vector m_vMax; // 0xc	
	CUtlVector< RnNode_t > m_Nodes; // 0x18	
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30	
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48	
	CUtlVector< RnWing_t > m_Wings; // 0x60	
	CUtlVector< uint8 > m_Materials; // 0x78	
	Vector m_vOrthographicAreas; // 0x90	
	uint32_t m_nFlags; // 0x9c	
	uint32_t m_nDebugFlags; // 0xa0	
};

// Alignment: 3
// Size: 0x10
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0	
	uint32_t m_nSurfacePropertyIndex; // 0x4	
	CUtlString m_UserFriendlyName; // 0x8	
};

// Alignment: 1
// Size: 0x20
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x10	
};

// Alignment: 1
// Size: 0x30
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x10	
};

// Alignment: 1
// Size: 0xe8
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10	
};

// Alignment: 1
// Size: 0xb8
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x10	
};

// Alignment: 1
// Size: 0x4
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0	
};

// Alignment: 2
// Size: 0x8
struct RnSoftbodySpring_t
{
public:
	uint16_t m_nParticle[2]; // 0x0	
	float m_flLength; // 0x4	
};

// Alignment: 3
// Size: 0x20
struct RnSoftbodyCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
	uint16_t m_nParticle[2]; // 0x1c	
};

// Alignment: 8
// Size: 0x10
struct RnBlendVertex_t
{
public:
	uint16_t m_nWeight0; // 0x0	
	uint16_t m_nIndex0; // 0x2	
	uint16_t m_nWeight1; // 0x4	
	uint16_t m_nIndex1; // 0x6	
	uint16_t m_nWeight2; // 0x8	
	uint16_t m_nIndex2; // 0xa	
	uint16_t m_nFlags; // 0xc	
	uint16_t m_nTargetIndex; // 0xe	
};

// Alignment: 6
// Size: 0x30
struct CastSphereSATParams_t
{
public:
	Vector m_vRayStart; // 0x0	
	Vector m_vRayDelta; // 0xc	
	float m_flRadius; // 0x18	
	float m_flMaxFraction; // 0x1c	
	float m_flScale; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	RnHull_t* m_pHull; // 0x28	
};

// Alignment: 35
// Size: 0xd0
struct RnBodyDesc_t
{
public:
	CUtlString m_sDebugName; // 0x0	
	Vector m_vPosition; // 0x8	
	QuaternionStorage m_qOrientation; // 0x14	
	Vector m_vLinearVelocity; // 0x24	
	Vector m_vAngularVelocity; // 0x30	
	Vector m_vLocalMassCenter; // 0x3c	
	Vector m_LocalInertiaInv[3]; // 0x48	
	float m_flMassInv; // 0x6c	
	float m_flGameMass; // 0x70	
	float m_flInertiaScaleInv; // 0x74	
	float m_flLinearDamping; // 0x78	
	float m_flAngularDamping; // 0x7c	
	float m_flLinearDrag; // 0x80	
	float m_flAngularDrag; // 0x84	
	float m_flLinearBuoyancyDrag; // 0x88	
	float m_flAngularBuoyancyDrag; // 0x8c	
	Vector m_vLastAwakeForceAccum; // 0x90	
	Vector m_vLastAwakeTorqueAccum; // 0x9c	
	float m_flBuoyancyFactor; // 0xa8	
	float m_flGravityScale; // 0xac	
	float m_flTimeScale; // 0xb0	
	int32_t m_nBodyType; // 0xb4	
	uint32_t m_nGameIndex; // 0xb8	
	uint32_t m_nGameFlags; // 0xbc	
	int8_t m_nMinVelocityIterations; // 0xc0	
	int8_t m_nMinPositionIterations; // 0xc1	
	int8_t m_nMassPriority; // 0xc2	
	bool m_bEnabled; // 0xc3	
	bool m_bSleeping; // 0xc4	
	bool m_bIsContinuousEnabled; // 0xc5	
	bool m_bDragEnabled; // 0xc6	
	bool m_bBuoyancyDragEnabled; // 0xc7	
	bool m_bGravityDisabled; // 0xc8	
	bool m_bSpeculativeEnabled; // 0xc9	
	bool m_bHasShadowController; // 0xca	
};

// Alignment: 2
// Size: 0x18
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0	
	Vector m_vNormal; // 0xc	
};

// Alignment: 1
// Size: 0x10
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0	
};

// Alignment: 1
// Size: 0xd8
struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t
{
public:
	uint64_t m_nOldPointer; // 0xd0	
};

