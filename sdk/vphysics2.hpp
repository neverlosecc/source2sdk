#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: vphysics2.dll
// Classes count: 88
// Enums count: 2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Registered binary: vphysics2.dll (project 'physicslib')
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
struct RnCapsule_t;
struct RnHull_t;
struct RnMesh_t;

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0	
	float forceLimit; // 0x4	
	float torqueLimit; // 0x8	
	float bodyMassScale[2]; // 0xc	
	bool isActive; // 0x14	
};

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0	
	float flMaxRotation; // 0x4	
	float flMotorTargetAngSpeed; // 0x8	
	float flMotorMaxTorque; // 0xc	
};

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x40
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0	
	Vector worldAxisDirection; // 0xc	
	// -> flMinRotation - 0x18
	// -> flMaxRotation - 0x1c
	// -> flMotorTargetAngSpeed - 0x20
	// -> flMotorMaxTorque - 0x24
	constraint_axislimit_t hingeAxis; // 0x18	
	// -> strength - 0x28
	// -> forceLimit - 0x2c
	// -> torqueLimit - 0x30
	// -> bodyMassScale[2] - 0x34
	// -> isActive - 0x3c
	constraint_breakableparams_t constraint; // 0x28	
};

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IPhysicsPlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x9c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0xd0
// 
// MGetKV3ClassDefaults
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0	
	CTransform m_transform; // 0x10	
	uint32_t m_nJiggleParent; // 0x30	
	CFeJiggleBone m_jiggleBone; // 0x34	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xa4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0	
	uint32_t m_nJiggleParent; // 0x4	
	CFeJiggleBone m_jiggleBone; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x618
// 
// MGetKV3ClassDefaults
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
	CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim; // 0x108	
	CUtlVector< CTransform > m_InitPose; // 0x120	
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x138	
	CUtlVector< FeTwistConstraint_t > m_Twists; // 0x150	
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x168	
	CUtlVector< float32 > m_NodeInvMasses; // 0x180	
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x198	
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x1b0	
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1c8	
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1e0	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1f8	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x210	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x228	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x240	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x258	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x270	
	CUtlVector< float32 > m_DynNodeFriction; // 0x288	
	CUtlVector< float32 > m_LocalRotation; // 0x2a0	
	CUtlVector< float32 > m_LocalForce; // 0x2b8	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2d0	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2e8	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x300	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x318	
	CUtlVector< uint16 > m_TreeParents; // 0x330	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x348	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x360	
	CUtlVector< uint16 > m_FreeNodes; // 0x378	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x390	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3a8	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c0	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3d8	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f0	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x408	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x420	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x438	
	CUtlVector< uint16 > m_SourceElems; // 0x450	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x468	
	CUtlVector< FeTri_t > m_Tris; // 0x480	
	uint16_t m_nTriCount1; // 0x498	
	uint16_t m_nTriCount2; // 0x49a	
	uint8_t m_nReservedUint8; // 0x49c	
	uint8_t m_nExtraPressureIterations; // 0x49d	
	uint8_t m_nExtraGoalIterations; // 0x49e	
	uint8_t m_nExtraIterations; // 0x49f	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a0	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4b8	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d0	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4e8	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x500	
	CUtlVector< uint8 > m_MorphSetData; // 0x518	
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x530	
	CUtlVector< uint8 > m_VertexMapValues; // 0x548	
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x560	
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x578	
	CUtlVector< uint16 > m_LockToGoal; // 0x590	
	CUtlVector< int16 > m_SkelParents; // 0x5a8	
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5c0	
	float m_flInternalPressure; // 0x5d8	
	float m_flDefaultTimeDilation; // 0x5dc	
	float m_flWindage; // 0x5e0	
	float m_flWindDrag; // 0x5e4	
	float m_flDefaultSurfaceStretch; // 0x5e8	
	float m_flDefaultThreadStretch; // 0x5ec	
	float m_flDefaultGravityScale; // 0x5f0	
	float m_flDefaultVelAirDrag; // 0x5f4	
	float m_flDefaultExpAirDrag; // 0x5f8	
	float m_flDefaultVelQuadAirDrag; // 0x5fc	
	float m_flDefaultExpQuadAirDrag; // 0x600	
	float m_flRodVelocitySmoothRate; // 0x604	
	float m_flQuadVelocitySmoothRate; // 0x608	
	float m_flAddWorldCollisionRadius; // 0x60c	
	float m_flDefaultVolumetricSolveAmount; // 0x610	
	uint16_t m_nRodVelocitySmoothIterations; // 0x614	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x616	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class FourVectors2D
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeEdgeDesc_t
{
public:
	uint16_t nEdge[2]; // 0x0	
	uint16_t nSide[2][2]; // 0x4	
	uint16_t nVirtElem[2]; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x48
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nWeight; // 0x2	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeKelagerBend2_t
{
public:
	float flWeight[3]; // 0x0	
	float flHeight0; // 0xc	
	uint16_t nNode[3]; // 0x10	
	uint16_t nReserved; // 0x16	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeStiffHingeBuild_t
{
public:
	float flMaxAngle; // 0x0	
	float flStrength; // 0x4	
	float flMotionBias[3]; // 0x8	
	uint16_t nNode[3]; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeTri_t
{
public:
	uint16_t nNode[3]; // 0x0	
	float w1; // 0x8	
	float w2; // 0xc	
	float v1x; // 0x10	
	Vector2D v2; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x80
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdTri_t
{
public:
	uint32_t nNode[3][4]; // 0x0	
	fltx4 w1; // 0x30	
	fltx4 w2; // 0x40	
	fltx4 v1x; // 0x50	
	// -> x - 0x60
	// -> y - 0x70
	FourVectors2D v2; // 0x60	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeQuad_t
{
public:
	uint16_t nNode[4]; // 0x0	
	float flSlack; // 0x8	
	Vector4D vShape[4]; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeNodeWindBase_t
{
public:
	uint16_t nNodeX0; // 0x0	
	uint16_t nNodeX1; // 0x2	
	uint16_t nNodeY0; // 0x4	
	uint16_t nNodeY1; // 0x6	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeNodeReverseOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nBoneCtrl; // 0xc	
	uint16_t nTargetNode; // 0xe	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x130
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdQuad_t
{
public:
	uint16_t nNode[4][4]; // 0x0	
	fltx4 f4Slack; // 0x20	
	FourVectors vShape[4]; // 0x30	
	fltx4 f4Weights[4]; // 0xf0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0	
	float tv; // 0x4	
	float flDist; // 0x8	
	float flWeight[4]; // 0xc	
	uint16_t nNode[6]; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0	
	float flDistMax; // 0x4	
	uint16_t nNode[6]; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeRodConstraint_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flMinDist; // 0x8	
	float flWeight0; // 0xc	
	float flRelaxationFactor; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeTwistConstraint_t
{
public:
	uint16_t nNodeOrient; // 0x0	
	uint16_t nNodeEnd; // 0x2	
	float flTwistRelax; // 0x4	
	float flSwingRelax; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdRodConstraint_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 f4MaxDist; // 0x10	
	fltx4 f4MinDist; // 0x20	
	fltx4 f4Weight0; // 0x30	
	fltx4 f4RelaxationFactor; // 0x40	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdRodConstraintAnim_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 f4Weight0; // 0x10	
	fltx4 f4RelaxationFactor; // 0x20	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeAnimStrayRadius_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flRelaxationFactor; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdAnimStrayRadius_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flMaxDist; // 0x10	
	fltx4 flRelaxationFactor; // 0x20	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x70
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0	
	float flAnimationForceAttraction; // 0x4	
	float flAnimationVertexAttraction; // 0x8	
	float flGravity; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSpringIntegrator_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flSpringRestLength; // 0x4	
	float flSpringConstant; // 0x8	
	float flSpringDamping; // 0xc	
	float flNodeWeight0; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdSpringIntegrator_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flSpringRestLength; // 0x10	
	fltx4 flSpringConstant; // 0x20	
	fltx4 flSpringDamping; // 0x30	
	fltx4 flNodeWeight0; // 0x40	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeCtrlOffset_t
{
public:
	Vector vOffset; // 0x0	
	uint16_t nCtrlParent; // 0xc	
	uint16_t nCtrlChild; // 0xe	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0	
	float flAlpha; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
	Vector vOffset; // 0x4	
	float flAlpha; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0	
	uint16_t nChildNode; // 0x2	
	float flWeight; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0	
	float m_flOffset; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0	
	float flGroundFriction; // 0x4	
	uint16_t nListBegin; // 0x8	
	uint16_t nListEnd; // 0xa	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeTreeChildren_t
{
public:
	uint16_t nChild[2]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4 vSphere[2]; // 0x0	
	uint16_t nNode; // 0x20	
	uint16_t nCollisionMask; // 0x22	
	uint16_t nVertexMapIndex; // 0x24	
	uint16_t nFlags; // 0x26	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSphereRigid_t
{
public:
	fltx4 vSphere; // 0x0	
	uint16_t nNode; // 0x10	
	uint16_t nCollisionMask; // 0x12	
	uint16_t nVertexMapIndex; // 0x14	
	uint16_t nFlags; // 0x16	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeTaperedCapsuleStretch_t
{
public:
	uint16_t nNode[2]; // 0x0	
	uint16_t nCollisionMask; // 0x4	
	// MPropertySuppressField
	uint16_t nDummy; // 0x6	
	float flRadius[2]; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0	
	float m_flXY; // 0xc	
	float m_flXZ; // 0x10	
	float m_flYZ; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x60
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0	
	fltx4 m_flXY; // 0x30	
	fltx4 m_flXZ; // 0x40	
	fltx4 m_flYZ; // 0x50	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0	
	uint16_t nNode; // 0x4	
	uint16_t nDummy; // 0x6	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0	
	float flWeight; // 0x4	
	uint32_t nMatrixNode; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0	
	Vector vCenter; // 0x20	
	uint16_t nEnd; // 0x2c	
	uint16_t nNode; // 0x2e	
	uint16_t nBeginDynamic; // 0x30	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0	
	uint16_t m_nSphereRigidIndex; // 0x2	
	uint16_t m_nBoxRigidIndex; // 0x4	
	uint16_t m_nCollisionPlaneIndex; // 0x6	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x30	
	uint32_t m_nVertexMapHash; // 0x34	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x40	
	uint32_t m_nVertexMapHash; // 0x44	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20	
	uint32_t m_nVertexMapHash; // 0x24	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSourceEdge_t
{
public:
	uint16_t nNode[2]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct FeEffectDesc_t
{
public:
	CUtlString sName; // 0x0	
	uint32_t nNameHash; // 0x8	
	int32_t nType; // 0xc	
	KeyValues3 m_Params; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CFeVertexMapBuildArray
{
public:
	CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct FeProxyVertexMap_t
{
public:
	CUtlString m_Name; // 0x0	
	float m_flWeight; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x90
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x68
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct Dop26_t
{
public:
	float m_flSupport[26]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	// -> m_vNormal - 0x4
	// -> m_flOffset - 0x10
	RnPlane_t m_Plane; // 0x4	
	float flStrength; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnVertex_t
{
public:
	uint8_t m_nEdge; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 1
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0	
	uint8_t m_nTwin; // 0x1	
	uint8_t m_nOrigin; // 0x2	
	uint8_t m_nFace; // 0x3	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CRegionSVM
{
public:
	CUtlVector< RnPlane_t > m_Planes; // 0x0	
	CUtlVector< uint32 > m_Nodes; // 0x18	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xf8
// 
// MGetKV3ClassDefaults
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0	
	float m_flMaxAngularRadius; // 0xc	
	AABB_t m_Bounds; // 0x10	
	Vector m_vOrthographicAreas; // 0x28	
	matrix3x4_t m_MassProperties; // 0x34	
	float m_flVolume; // 0x64	
	float m_flSurfaceArea; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	CUtlVector< RnVertex_t > m_Vertices; // 0x70	
	CUtlVector< Vector > m_VertexPositions; // 0x88	
	CUtlVector< RnHalfEdge_t > m_Edges; // 0xa0	
	CUtlVector< RnFace_t > m_Faces; // 0xb8	
	CUtlVector< RnPlane_t > m_FacePlanes; // 0xd0	
	uint32_t m_nFlags; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
public:
	CRegionSVM* m_pRegionSVM; // 0xf0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnTriangle_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnWing_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0	
	uint32_t m_nChildren; // 0xc	
	Vector m_vMax; // 0x10	
	uint32_t m_nTriangleOffset; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xa8
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0	
	uint32_t m_nSurfacePropertyIndex; // 0x4	
	CUtlString m_UserFriendlyName; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	SphereBase_t< float32 > m_Sphere; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vCenter[2] - 0x10
	// -> m_flRadius - 0x28
	RnCapsule_t m_Capsule; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x108
// 
// MGetKV3ClassDefaults
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xb8
// 
// MGetKV3ClassDefaults
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vMin - 0x10
	// -> m_vMax - 0x1c
	// -> m_Nodes - 0x28
	// -> m_Vertices - 0x40
	// -> m_Triangles - 0x58
	// -> m_Wings - 0x70
	// -> m_Materials - 0x88
	// -> m_vOrthographicAreas - 0xa0
	// -> m_nFlags - 0xac
	// -> m_nDebugFlags - 0xb0
	RnMesh_t m_Mesh; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnSoftbodySpring_t
{
public:
	uint16_t m_nParticle[2]; // 0x0	
	float m_flLength; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x20
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct RnSoftbodyCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
	uint16_t m_nParticle[2]; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xd0
// 
// MGetKV3ClassDefaults
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

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0	
	Vector m_vNormal; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0	
};

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0xd8
// 
// MGetKV3ClassDefaults
struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t
{
public:
	uint64_t m_nOldPointer; // 0xd0	
};

