#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: vphysics2.dll
// Class Count: 157
// Enum Count: 20
///////////////////////////////////////////

// Aligment: 4
// Size: 4
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

// Aligment: 4
// Size: 5
enum class VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t
{
	VPhysXBodyPart_t::FLAG_STATIC = 0x1,
	VPhysXBodyPart_t::FLAG_KINEMATIC = 0x2,
	VPhysXBodyPart_t::FLAG_JOINT = 0x4,
	VPhysXBodyPart_t::FLAG_MASS = 0x8,
	VPhysXBodyPart_t::FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Aligment: 4
// Size: 4
enum class VPhysXConstraintParams_t::EnumFlags0_t : uint32_t
{
	VPhysXConstraintParams_t::FLAG0_SHIFT_INTERPENETRATE = 0x0,
	VPhysXConstraintParams_t::FLAG0_SHIFT_CONSTRAIN = 0x1,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class VPhysXJoint_t::Flags_t : uint32_t
{
	VPhysXJoint_t::JOINT_FLAGS_NONE = 0x0,
	VPhysXJoint_t::JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Aligment: 4
// Size: 3
enum class VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t
{
	VPhysXAggregateData_t::FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	VPhysXAggregateData_t::FLAG_LEVEL_COLLISION = 0x10,
	VPhysXAggregateData_t::FLAG_IGNORE_SCALE = 0x20,
};

// Aligment: 4
// Size: 1
enum class VPhysXDiskShapeHeader_t::VersinEnum_t : uint32_t
{
	VPhysXDiskShapeHeader_t::VERSION = 0x81,
};

// Aligment: 4
// Size: 3
enum class MeshTranslucencyType_t : uint32_t
{
	MESH_TRANSLUCENCY_FULLY_OPAQUE = 0x0,
	MESH_TRANSLUCENCY_PARTIALLY_ALPHA_BLENDED = 0x1,
	MESH_TRANSLUCENCY_FULLY_ALPHA_BLENDED = 0x2,
};

// Aligment: 4
// Size: 10
enum class MeshDrawPrimitiveFlags_t : uint32_t
{
	MESH_DRAW_FLAGS_NONE = 0x0,
	MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
	MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
	MESH_DRAW_FLAGS_IS_OCCLUDER = 0x4,
	MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
	MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
	MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
	MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
	MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
	MESH_DRAW_FLAGS_HAS_LIGHTING_BASIS = 0x100,
};

// Aligment: 4
// Size: 23
enum class ModelSkeletonData_t::BoneFlags_t : uint32_t
{
	ModelSkeletonData_t::FLAG_NO_BONE_FLAGS = 0x0,
	ModelSkeletonData_t::FLAG_BONEFLEXDRIVER = 0x4,
	ModelSkeletonData_t::FLAG_CLOTH = 0x8,
	ModelSkeletonData_t::FLAG_PHYSICS = 0x10,
	ModelSkeletonData_t::FLAG_ATTACHMENT = 0x20,
	ModelSkeletonData_t::FLAG_ANIMATION = 0x40,
	ModelSkeletonData_t::FLAG_MESH = 0x80,
	ModelSkeletonData_t::FLAG_HITBOX = 0x100,
	ModelSkeletonData_t::FLAG_RETARGET_SRC = 0x200,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_READ = 0x40000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_WRITE = 0x80000,
	ModelSkeletonData_t::FLAG_ALL_BONE_FLAGS = 0xfffff,
	ModelSkeletonData_t::BLEND_PREALIGNED = 0x100000,
	ModelSkeletonData_t::FLAG_RIGIDLENGTH = 0x200000,
	ModelSkeletonData_t::FLAG_PROCEDURAL = 0x400000,
};

// Aligment: 4
// Size: 15
enum class PermModelInfo_t::FlagEnum : uint32_t
{
	PermModelInfo_t::FLAG_TRANSLUCENT = 0x1,
	PermModelInfo_t::FLAG_TRANSLUCENT_TWO_PASS = 0x2,
	PermModelInfo_t::FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
	PermModelInfo_t::FLAG_SOURCE1_IMPORT = 0x8,
	PermModelInfo_t::FLAG_MODEL_PART_CHILD = 0x10,
	PermModelInfo_t::FLAG_NAV_GEN_NONE = 0x20,
	PermModelInfo_t::FLAG_NAV_GEN_HULL = 0x40,
	PermModelInfo_t::FLAG_NO_FORCED_FADE = 0x800,
	PermModelInfo_t::FLAG_HAS_SKINNED_MESHES = 0x400,
	PermModelInfo_t::FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
	PermModelInfo_t::FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
	PermModelInfo_t::FLAG_NO_ANIM_EVENTS = 0x100000,
	PermModelInfo_t::FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
	PermModelInfo_t::FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	PermModelInfo_t::FLAG_MODEL_DOC = 0x800000,
};

// Aligment: 4
// Size: 4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
};

// Aligment: 4
// Size: 5
enum class ModelConfigAttachmentType_t : uint32_t
{
	MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffffffffffff,
	MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
	MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
	MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
	MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
};

// Aligment: 4
// Size: 26
enum class FlexOpCode_t : uint32_t
{
	FLEX_OP_CONST = 0x1,
	FLEX_OP_FETCH1 = 0x2,
	FLEX_OP_FETCH2 = 0x3,
	FLEX_OP_ADD = 0x4,
	FLEX_OP_SUB = 0x5,
	FLEX_OP_MUL = 0x6,
	FLEX_OP_DIV = 0x7,
	FLEX_OP_NEG = 0x8,
	FLEX_OP_EXP = 0x9,
	FLEX_OP_OPEN = 0xa,
	FLEX_OP_CLOSE = 0xb,
	FLEX_OP_COMMA = 0xc,
	FLEX_OP_MAX = 0xd,
	FLEX_OP_MIN = 0xe,
	FLEX_OP_2WAY_0 = 0xf,
	FLEX_OP_2WAY_1 = 0x10,
	FLEX_OP_NWAY = 0x11,
	FLEX_OP_COMBO = 0x12,
	FLEX_OP_DOMINATE = 0x13,
	FLEX_OP_DME_LOWER_EYELID = 0x14,
	FLEX_OP_DME_UPPER_EYELID = 0x15,
	FLEX_OP_SQRT = 0x16,
	FLEX_OP_REMAPVALCLAMPED = 0x17,
	FLEX_OP_SIN = 0x18,
	FLEX_OP_COS = 0x19,
	FLEX_OP_ABS = 0x1a,
};

// Aligment: 4
// Size: 4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Aligment: 4
// Size: 4
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class MorphLookupType_t : uint32_t
{
	LOOKUP_TYPE_TEXCOORD = 0x0,
	LOOKUP_TYPE_VERTEX_ID = 0x1,
	LOOKUP_TYPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class MorphEncodingType_t : uint32_t
{
	ENCODING_TYPE_OBJECT_SPACE = 0x0,
	ENCODING_TYPE_TANGENT_SPACE = 0x1,
	ENCODING_TYPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
};

// Aligment: 4
// Size: 5
enum class AnimVRFinger_t : uint32_t
{
	AnimVrFinger_Thumb = 0x0,
	AnimVrFinger_Index = 0x1,
	AnimVrFinger_Middle = 0x2,
	AnimVrFinger_Ring = 0x3,
	AnimVrFinger_Pinky = 0x4,
};

// Aligment: 35
// Size: 156
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
// Size: 164
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0
	uint32_t m_nJiggleParent; // 0x4
	CFeJiggleBone m_jiggleBone; // 0x8
};

// Aligment: 98
// Size: 1408
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
	uint16_t m_nSimdTriCount1; // 0x46
	uint16_t m_nSimdTriCount2; // 0x48
	uint16_t m_nSimdQuadCount1; // 0x4a
	uint16_t m_nSimdQuadCount2; // 0x4c
	uint16_t m_nQuadCount1; // 0x4e
	uint16_t m_nQuadCount2; // 0x50
	uint16_t m_nCollisionSphereInclusiveCount; // 0x52
	uint16_t m_nTreeDepth; // 0x54
	uint16_t m_nFitMatrixCount1; // 0x56
	uint16_t m_nFitMatrixCount2; // 0x58
	uint16_t m_nSimdFitMatrixCount1; // 0x5a
	uint16_t m_nSimdFitMatrixCount2; // 0x5c
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x5e
	uint16_t m_nRopeCount; // 0x60
	CUtlVector< uint16 > m_Ropes; // 0x68
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x80
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x98
	CUtlVector< FeQuad_t > m_Quads; // 0xb0
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc8
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xe0
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf8
	CUtlVector< CTransform > m_InitPose; // 0x110
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x128
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x140
	CUtlVector< float32 > m_NodeInvMasses; // 0x158
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x170
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x188
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1a0
	CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1b8
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1d0
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1e8
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x200
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x218
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x230
	CUtlVector< float32 > m_LegacyStretchForce; // 0x248
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x260
	CUtlVector< float32 > m_DynNodeFriction; // 0x278
	CUtlVector< float32 > m_LocalRotation; // 0x290
	CUtlVector< float32 > m_LocalForce; // 0x2a8
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2c0
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2d8
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x2f0
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x308
	CUtlVector< uint16 > m_TreeParents; // 0x320
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x338
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x350
	CUtlVector< uint16 > m_FreeNodes; // 0x368
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x380
	CUtlVector< FeSimdFitMatrices_t > m_SimdFitMatrices; // 0x398
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3b0
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c8
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3e0
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f8
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x410
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x428
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x440
	CUtlVector< uint16 > m_SourceElems; // 0x458
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x470
	CUtlVector< FeTri_t > m_Tris; // 0x488
	uint16_t m_nTriCount1; // 0x4a0
	uint16_t m_nTriCount2; // 0x4a2
	uint8_t m_nReservedUint8; // 0x4a4
	uint8_t m_nExtraPressureIterations; // 0x4a5
	uint8_t m_nExtraGoalIterations; // 0x4a6
	uint8_t m_nExtraIterations; // 0x4a7
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a8
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4c0
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d8
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4f0
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x508
	CUtlVector< uint8 > m_MorphSetData; // 0x520
	float m_flInternalPressure; // 0x538
	float m_flWindage; // 0x53c
	float m_flWindDrag; // 0x540
	float m_flDefaultSurfaceStretch; // 0x544
	float m_flDefaultThreadStretch; // 0x548
	float m_flDefaultGravityScale; // 0x54c
	float m_flDefaultVelAirDrag; // 0x550
	float m_flDefaultExpAirDrag; // 0x554
	float m_flDefaultVelQuadAirDrag; // 0x558
	float m_flDefaultExpQuadAirDrag; // 0x55c
	float m_flDefaultVelRodAirDrag; // 0x560
	float m_flDefaultExpRodAirDrag; // 0x564
	float m_flRodVelocitySmoothRate; // 0x568
	float m_flQuadVelocitySmoothRate; // 0x56c
	float m_flAddWorldCollisionRadius; // 0x570
	float m_flDefaultVolumetricSolveAmount; // 0x574
	uint16_t m_nRodVelocitySmoothIterations; // 0x578
	uint16_t m_nQuadVelocitySmoothIterations; // 0x57a
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

// Aligment: 5
// Size: 12
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0
	uint16_t m_nSphereRigidIndex; // 0x2
	uint16_t m_nBoxRigidIndex; // 0x4
	uint16[2] m_nCollisionSphereIndex; // 0x6
	uint16_t m_nCollisionPlaneIndex; // 0xa
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

// Aligment: 1
// Size: 4
struct FeSourceEdge_t
{
public:
	uint16[2] nNode; // 0x0
};

// Aligment: 8
// Size: 144
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
	uint32_t m_nFlags; // 0x88
};

// Aligment: 7
// Size: 136
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
};

// Aligment: 1
// Size: 104
struct Dop26_t
{
public:
	float32[26] m_flSupport; // 0x0
};

// Aligment: 2
// Size: 16
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0
	float m_flRadius; // 0xc
};

// Aligment: 2
// Size: 28
struct RnCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
};

// Aligment: 2
// Size: 16
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0
	float m_flOffset; // 0xc
};

// Aligment: 4
// Size: 4
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0
	uint8_t m_nTwin; // 0x1
	uint8_t m_nOrigin; // 0x2
	uint8_t m_nFace; // 0x3
};

// Aligment: 1
// Size: 1
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0
};

// Aligment: 13
// Size: 216
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0
	float m_flMaxAngularRadius; // 0xc
	CUtlVector< Vector > m_Vertices; // 0x10
	CUtlVector< RnPlane_t > m_Planes; // 0x28
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x40
	CUtlVector< RnFace_t > m_Faces; // 0x58
	Vector m_vOrthographicAreas; // 0x70
	matrix3x4_t m_MassProperties; // 0x7c
	float m_flVolume; // 0xac
	float m_flMaxMotionRadius; // 0xb0
	float m_flMinMotionThickness; // 0xb4
	AABB_t m_Bounds; // 0xb8
	uint32_t m_nFlags; // 0xd0
};

// Aligment: 1
// Size: 12
struct RnTriangle_t
{
public:
	int32[3] m_nIndex; // 0x0
};

// Aligment: 4
// Size: 32
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0
	uint32_t m_nChildren; // 0xc
	Vector m_vMax; // 0x10
	uint32_t m_nTriangleOffset; // 0x1c
};

// Aligment: 7
// Size: 136
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0
	Vector m_vMax; // 0xc
	CUtlVector< RnNode_t > m_Nodes; // 0x18
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48
	CUtlVector< uint8 > m_Materials; // 0x60
	Vector m_vOrthographicAreas; // 0x78
};

// Aligment: 3
// Size: 16
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0
	uint32_t m_nSurfacePropertyIndex; // 0x4
	CUtlString m_UserFriendlyName; // 0x8
};

// Aligment: 1
// Size: 32
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x10
};

// Aligment: 1
// Size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x10
};

// Aligment: 1
// Size: 232
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10
};

// Aligment: 1
// Size: 152
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x10
};

// Aligment: 1
// Size: 4
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0
};

// Aligment: 2
// Size: 8
struct RnSoftbodySpring_t
{
public:
	uint16[2] m_nParticle; // 0x0
	float m_flLength; // 0x4
};

// Aligment: 3
// Size: 32
struct RnSoftbodyCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
	uint16[2] m_nParticle; // 0x1c
};

// Aligment: 8
// Size: 16
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

// Aligment: 2
// Size: 24
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0
	Vector m_vNormal; // 0xc
};

// Aligment: 1
// Size: 16
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0
};

// Aligment: 5
// Size: 120
struct VPhysics2ShapeDef_t
{
public:
	CUtlVector< RnSphereDesc_t > m_spheres; // 0x0
	CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18
	CUtlVector< RnHullDesc_t > m_hulls; // 0x30
	CUtlVector< RnMeshDesc_t > m_meshes; // 0x48
	CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60
};

// Aligment: 11
// Size: 184
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0
	float m_flMass; // 0x4
	VPhysics2ShapeDef_t m_rnShape; // 0x8
	CUtlVector< uint8 > m_nSurfacepropertyIndices; // 0x80
	uint16_t m_nCollisionAttributeIndex; // 0x98
	uint16_t m_nReserved; // 0x9a
	float m_flInertiaScale; // 0x9c
	float m_flLinearDamping; // 0xa0
	float m_flAngularDamping; // 0xa4
	bool m_bOverrideMassCenter; // 0xa8
	Vector m_vMassCenterOverride; // 0xac
};

// Aligment: 8
// Size: 160
struct VPhysXCollisionAttributes_t
{
public:
	uint32_t m_CollisionGroup; // 0x0
	CUtlVector< uint32 > m_InteractAs; // 0x8
	CUtlVector< uint32 > m_InteractWith; // 0x20
	CUtlVector< uint32 > m_InteractExclude; // 0x38
	CUtlString m_CollisionGroupString; // 0x50
	CUtlVector< CUtlString > m_InteractAsStrings; // 0x58
	CUtlVector< CUtlString > m_InteractWithStrings; // 0x70
	CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88
};

// Aligment: 2
// Size: 8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0
	float m_flMax; // 0x4
};

// Aligment: 46
// Size: 248
struct VPhysXConstraintParams_t
{
public:
	int8_t m_nType; // 0x0
	int8_t m_nTranslateMotion; // 0x1
	int8_t m_nRotateMotion; // 0x2
	int8_t m_nFlags; // 0x3
	Vector[2] m_anchor; // 0x4
	Quaternion[2] m_axes; // 0x1c
	float m_maxForce; // 0x3c
	float m_maxTorque; // 0x40
	float m_linearLimitValue; // 0x44
	float m_linearLimitRestitution; // 0x48
	float m_linearLimitSpring; // 0x4c
	float m_linearLimitDamping; // 0x50
	float m_twistLowLimitValue; // 0x54
	float m_twistLowLimitRestitution; // 0x58
	float m_twistLowLimitSpring; // 0x5c
	float m_twistLowLimitDamping; // 0x60
	float m_twistHighLimitValue; // 0x64
	float m_twistHighLimitRestitution; // 0x68
	float m_twistHighLimitSpring; // 0x6c
	float m_twistHighLimitDamping; // 0x70
	float m_swing1LimitValue; // 0x74
	float m_swing1LimitRestitution; // 0x78
	float m_swing1LimitSpring; // 0x7c
	float m_swing1LimitDamping; // 0x80
	float m_swing2LimitValue; // 0x84
	float m_swing2LimitRestitution; // 0x88
	float m_swing2LimitSpring; // 0x8c
	float m_swing2LimitDamping; // 0x90
	Vector m_goalPosition; // 0x94
	Quaternion m_goalOrientation; // 0xa0
	Vector m_goalAngularVelocity; // 0xb0
	float m_driveSpringX; // 0xbc
	float m_driveSpringY; // 0xc0
	float m_driveSpringZ; // 0xc4
	float m_driveDampingX; // 0xc8
	float m_driveDampingY; // 0xcc
	float m_driveDampingZ; // 0xd0
	float m_driveSpringTwist; // 0xd4
	float m_driveSpringSwing; // 0xd8
	float m_driveSpringSlerp; // 0xdc
	float m_driveDampingTwist; // 0xe0
	float m_driveDampingSwing; // 0xe4
	float m_driveDampingSlerp; // 0xe8
	int32_t m_solverIterationCount; // 0xec
	float m_projectionLinearTolerance; // 0xf0
	float m_projectionAngularTolerance; // 0xf4
};

// Aligment: 4
// Size: 256
struct VPhysXConstraint2_t
{
public:
	uint32_t m_nFlags; // 0x0
	uint16_t m_nParent; // 0x4
	uint16_t m_nChild; // 0x6
	VPhysXConstraintParams_t m_params; // 0x8
};

// Aligment: 23
// Size: 176
struct VPhysXJoint_t
{
public:
	uint16_t m_nType; // 0x0
	uint16_t m_nBody1; // 0x2
	uint16_t m_nBody2; // 0x4
	uint16_t m_nFlags; // 0x6
	CTransform m_Frame1; // 0x10
	CTransform m_Frame2; // 0x30
	bool m_bEnableCollision; // 0x50
	bool m_bEnableLinearLimit; // 0x51
	VPhysXRange_t m_LinearLimit; // 0x54
	bool m_bEnableLinearMotor; // 0x5c
	Vector m_vLinearTargetVelocity; // 0x60
	float m_flMaxForce; // 0x6c
	bool m_bEnableSwingLimit; // 0x70
	VPhysXRange_t m_SwingLimit; // 0x74
	bool m_bEnableTwistLimit; // 0x7c
	VPhysXRange_t m_TwistLimit; // 0x80
	bool m_bEnableAngularMotor; // 0x88
	Vector m_vAngularTargetVelocity; // 0x8c
	float m_flMaxTorque; // 0x98
	float m_flLinearFrequency; // 0x9c
	float m_flLinearDampingRatio; // 0xa0
	float m_flAngularFrequency; // 0xa4
	float m_flAngularDampingRatio; // 0xa8
};

// Aligment: 6
// Size: 144
struct PhysSoftbodyDesc_t
{
public:
	CUtlVector< uint32 > m_ParticleBoneHash; // 0x0
	CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18
	CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30
	CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48
	CUtlVector< CTransform > m_InitPose; // 0x60
	CUtlVector< CUtlString > m_ParticleBoneName; // 0x78
};

// Aligment: 16
// Size: 312
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0
	uint16_t m_nRefCounter; // 0x2
	CUtlVector< uint32 > m_bonesHash; // 0x8
	CUtlVector< CUtlString > m_boneNames; // 0x20
	CUtlVector< uint16 > m_indexNames; // 0x38
	CUtlVector< uint16 > m_indexHash; // 0x50
	CUtlVector< matrix3x4a_t > m_bindPose; // 0x68
	CUtlVector< VPhysXBodyPart_t > m_parts; // 0x80
	CUtlVector< VPhysXConstraint2_t > m_constraints2; // 0x98
	CUtlVector< VPhysXJoint_t > m_joints; // 0xb0
	PhysFeModelDesc_t* m_pFeModel; // 0xc8
	CUtlVector< uint16 > m_boneParents; // 0xd0
	CUtlVector< uint32 > m_surfacePropertyHashes; // 0xe8
	CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x100
	CUtlVector< CUtlString > m_debugPartNames; // 0x118
	CUtlString m_embeddedKeyvalues; // 0x130
};

// Aligment: 5
// Size: 20
class CPhysSurfacePropertiesPhysics
{
public:
	float m_friction; // 0x0
	float m_elasticity; // 0x4
	float m_density; // 0x8
	// MDefaultString
	float m_thickness; // 0xc
	float m_dampening; // 0x10
};

// Aligment: 7
// Size: 28
class CPhysSurfacePropertiesAudio
{
public:
	float m_reflectivity; // 0x0
	float m_hardnessFactor; // 0x4
	float m_roughnessFactor; // 0x8
	float m_roughThreshold; // 0xc
	float m_hardThreshold; // 0x10
	// MDefaultString
	float m_hardVelocityThreshold; // 0x14
	float m_flStaticImpactVolume; // 0x18
};

// Aligment: 8
// Size: 64
class CPhysSurfacePropertiesSoundNames
{
public:
	CUtlString m_impactSoft; // 0x0
	CUtlString m_impactHard; // 0x8
	CUtlString m_scrapeSmooth; // 0x10
	CUtlString m_scrapeRough; // 0x18
	CUtlString m_bulletImpact; // 0x20
	CUtlString m_rolling; // 0x28
	CUtlString m_break; // 0x30
	CUtlString m_strain; // 0x38
};

// Aligment: 8
// Size: 160
class CPhysSurfaceProperties
{
public:
	CUtlString m_name; // 0x0
	uint32_t m_nameHash; // 0x8
	uint32_t m_baseNameHash; // 0xc
	bool m_bHidden; // 0x18
	CUtlString m_description; // 0x20
	CPhysSurfacePropertiesPhysics m_physics; // 0x28
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x40
	CPhysSurfacePropertiesAudio m_audioParams; // 0x80
};

// Aligment: 1
// Size: 24
class CVPhysXSurfacePropertiesList
{
public:
	CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0
};

// Aligment: 2
// Size: 4
struct VPhysXDiskShapeHeader_t
{
public:
	uint8_t m_nType; // 0x0
	uint16_t m_nCollisionAttribute; // 0x2
};

// Aligment: 4
// Size: 28
struct VPhysXDiskMesh2_t : public VPhysXDiskShapeHeader_t
{
public:
	CResourceArray< uint8 > m_shape; // 0x4
	float m_flSkinWidth; // 0xc
	float m_flMaxVelocity; // 0x10
	uint32[2] m_nReserved2; // 0x14
};

// Aligment: 2
// Size: 20
struct VPhysXShapeCompoundHeader2_t : public VPhysXDiskShapeHeader_t
{
public:
	CResourceArray< CResourceArray< uint8 > > m_components; // 0x4
	CResourceArray< uint8 > m_types; // 0xc
};

// Aligment: 2
// Size: 32
struct VPhysXDiskCapsule_t : public VPhysXDiskShapeHeader_t
{
public:
	Vector[2] m_vEnds; // 0x4
	float m_flRadius; // 0x1c
};

// Aligment: 2
// Size: 32
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8
};

// Aligment: 6
// Size: 144
struct ModelSkeletonData_t
{
public:
	CUtlVector< CUtlString > m_boneName; // 0x0
	CUtlVector< int16 > m_nParent; // 0x18
	CUtlVector< float32 > m_boneSphere; // 0x30
	CUtlVector< uint32 > m_nFlag; // 0x48
	CUtlVector< Vector > m_bonePosParent; // 0x60
	CUtlVector< Quaternion > m_boneRotParent; // 0x78
};

// Aligment: 10
// Size: 88
struct PermModelInfo_t
{
public:
	uint32_t m_nFlags; // 0x0
	Vector m_vHullMin; // 0x4
	Vector m_vHullMax; // 0x10
	Vector m_vViewMin; // 0x1c
	Vector m_vViewMax; // 0x28
	float m_flMass; // 0x34
	Vector m_vEyePosition; // 0x38
	float m_flMaxEyeDeflection; // 0x44
	CUtlString m_sSurfaceProperty; // 0x48
	CUtlString m_keyValueText; // 0x50
};

// Aligment: 4
// Size: 64
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0
	CUtlString m_Name; // 0x20
	int32_t m_nParent; // 0x28
	CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30
};

// Aligment: 5
// Size: 32
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
	CUtlString m_flexController; // 0x8
	uint32_t m_flexControllerToken; // 0x10
	float m_flMin; // 0x14
	float m_flMax; // 0x18
};

// Aligment: 3
// Size: 40
struct ModelBoneFlexDriver_t
{
public:
	CUtlString m_boneName; // 0x0
	uint32_t m_boneNameToken; // 0x8
	CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10
};

// Aligment: 21
// Size: 640
struct PermModelData_t
{
public:
	CUtlString m_name; // 0x0
	PermModelInfo_t m_modelInfo; // 0x8
	CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60
	CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78
	CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90
	CUtlVector< uint64 > m_refPhysGroupMasks; // 0xa8
	CUtlVector< uint8 > m_refLODGroupMasks; // 0xc0
	CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xd8
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xf0
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120
	CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138
	CUtlVector< CUtlString > m_meshGroups; // 0x150
	CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168
	uint64_t m_nDefaultMeshGroupMask; // 0x180
	ModelSkeletonData_t m_modelSkeleton; // 0x188
	CUtlVector< int16 > m_remappingTable; // 0x218
	CUtlVector< uint16 > m_remappingTableStarts; // 0x230
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x248
	CModelConfigList* m_pModelConfigList; // 0x260
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x268
};

// Aligment: 2
// Size: 72
class CModelConfigElement
{
public:
	CUtlString m_ElementName; // 0x8
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10
};

// Aligment: 9
// Size: 208
class CModelConfigElement_AttachedModel : public CModelConfigElement
{
public:
	CUtlString m_InstanceName; // 0x48
	CUtlString m_EntityClass; // 0x50
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x58
	Vector m_vOffset; // 0x60
	QAngle m_aAngOffset; // 0x6c
	CUtlString m_AttachmentName; // 0x78
	ModelConfigAttachmentType_t m_AttachmentType; // 0x80
	bool m_bUserSpecifiedColor; // 0x84
	bool m_bUserSpecifiedMaterialGroup; // 0x85
};

// Aligment: 1
// Size: 96
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48
};

// Aligment: 2
// Size: 88
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
};

// Aligment: 2
// Size: 96
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48
	KeyValues3 m_Args; // 0x50
};

// Aligment: 3
// Size: 40
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8
	bool m_bTopLevel; // 0x20
};

// Aligment: 3
// Size: 32
class CModelConfigList
{
public:
	bool m_bHideMaterialGroupInTools; // 0x0
	bool m_bHideRenderColorInTools; // 0x1
	CUtlVector< CModelConfig* > m_Configs; // 0x8
};

// Aligment: 2
// Size: 16
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0
	uint32_t m_nBindOffsetBytes; // 0x8
};

// Aligment: 2
// Size: 24
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0
	Vector m_vecSize; // 0xc
};

// Aligment: 5
// Size: 96
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0
	CUtlString m_parentName; // 0x8
	matrix3x4_t m_invBindPose; // 0x10
	SkeletonBoneBounds_t m_bbox; // 0x40
	float m_flSphereRadius; // 0x58
};

// Aligment: 3
// Size: 80
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0
	CUtlVector< int32 > m_boneParents; // 0x30
	int32_t m_nBoneWeightCount; // 0x48
};

// Aligment: 3
// Size: 16
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0
	int8[3] m_ConeAxis; // 0xc
	int8_t m_ConeCutoff; // 0xf
};

// Aligment: 12
// Size: 208
class CMaterialDrawDescriptor
{
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x0
	int32_t m_nBaseVertex; // 0x4
	int32_t m_nVertexCount; // 0x8
	int32_t m_nStartIndex; // 0xc
	int32_t m_nIndexCount; // 0x10
	int32_t m_nStartInstance; // 0x14
	int32_t m_nInstanceCount; // 0x18
	float m_flUvDensity; // 0x1c
	// MDefaultString
	Vector m_vTintColor; // 0x24
	int8_t m_CullDataIndex; // 0x32
	CRenderBufferBinding m_indexBuffer; // 0xb0
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xc8
};

// Aligment: 5
// Size: 96
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x20
	CUtlVector< CDrawCullingData > m_drawCullData; // 0x38
	Vector4D m_vTintColor; // 0x50
};

// Aligment: 8
// Size: 136
class CAttachment
{
public:
	CUtlString m_name; // 0x0
	CUtlString[3] m_influenceNames; // 0x8
	Vector[3] m_vInfluenceOffsets; // 0x20
	Quaternion[3] m_vInfluenceRotations; // 0x44
	float32[3] m_influenceWeights; // 0x74
	bool[3] m_bInfluenceRootTransform; // 0x80
	uint8_t m_nInfluences; // 0x83
	bool m_bIgnoreRotation; // 0x84
};

// Aligment: 12
// Size: 120
class CHitBox
{
public:
	CUtlString m_name; // 0x30
	CUtlString m_sSurfaceProperty; // 0x38
	CUtlString m_sBoneName; // 0x40
	uint32_t m_nBoneNameHash; // 0x48
	int32_t m_nGroupId; // 0x4c
	Color m_cRenderColor; // 0x50
	uint16_t m_nHitBoxIndex; // 0x54
	Vector m_vMinBounds; // 0x58
	Vector m_vMaxBounds; // 0x64
	bool m_bTranslationOnly; // 0x71
	bool m_bVisible; // 0x72
	bool m_bSelected; // 0x73
};

// Aligment: 4
// Size: 48
class CHitBoxSet
{
public:
	CUtlString m_name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< CHitBox > m_HitBoxes; // 0x10
	CUtlString m_SourceFilename; // 0x28
};

// Aligment: 1
// Size: 24
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0
};

// Aligment: 3
// Size: 456
class CRenderMesh
{
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10
	CUtlVector< CBaseConstraint* > m_constraints; // 0x88
	CRenderSkeleton m_skeleton; // 0xa0
};

// Aligment: 6
// Size: 80
class CConstraintTarget
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vOffset; // 0x8
	Quaternion m_qOffset; // 0x14
	bool m_bIsAttachment; // 0x24
	CUtlString m_sName; // 0x28
};

// Aligment: 5
// Size: 88
class CConstraintSlave
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vBasePosition; // 0x8
	Quaternion m_qBaseOrientation; // 0x14
	CUtlString m_sName; // 0x28
};

// Aligment: 0
// Size: 40
class CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 112
class CBaseConstraint : public CBoneConstraintBase
{
public:
	CUtlString m_name; // 0x28
	Vector m_vUpVector; // 0x30
	CUtlVector< CConstraintSlave > m_slaves; // 0x40
	CUtlVector< CConstraintTarget > m_targets; // 0x58
};

// Aligment: 0
// Size: 112
class CPointConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 112
class COrientConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 136
class CAimConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	Quaternion m_qAimOffset; // 0x70
	uint32_t m_nUpType; // 0x80
};

// Aligment: 3
// Size: 152
class CTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	bool m_bInverse; // 0x70
	Quaternion m_qParentBindRotation; // 0x74
	Quaternion m_qChildBindRotation; // 0x84
};

// Aligment: 2
// Size: 160
class CTiltTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	int32_t m_nTargetAxis; // 0x70
	int32_t m_nSlaveAxis; // 0x74
};

// Aligment: 6
// Size: 176
class CMorphConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	bool m_bCacheAttempted; // 0x70
	bool m_bCacheOk; // 0x71
	CUtlString m_sTargetMorph; // 0x78
	int32_t m_nSlaveChannel; // 0x80
	float m_flMin; // 0x84
	float m_flMax; // 0x88
};

// Aligment: 0
// Size: 112
class CParentConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceMorph::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< float32 > m_outputWeightList; // 0x10
};

// Aligment: 5
// Size: 160
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28
	CUtlString m_sAttachmentName; // 0x30
	CUtlVector< CUtlString > m_outputMorph; // 0x38
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50
	bool m_bClamp; // 0x68
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceBone::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< CTransform > m_outputTransformList; // 0x10
};

// Aligment: 1
// Size: 152
class CBoneConstraintPoseSpaceBone : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70
};

// Aligment: 2
// Size: 8
class CFlexOp
{
public:
	FlexOpCode_t m_OpCode; // 0x0
	int32_t m_Data; // 0x4
};

// Aligment: 2
// Size: 32
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0
	CUtlVector< CFlexOp > m_FlexOps; // 0x8
};

// Aligment: 1
// Size: 8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0
};

// Aligment: 4
// Size: 24
class CFlexController
{
public:
	CUtlString m_szName; // 0x0
	CUtlString m_szType; // 0x8
	float min; // 0x10
	float max; // 0x14
};

// Aligment: 4
// Size: 56
class CMorphBundleData
{
public:
	float m_flULeftSrc; // 0x0
	float m_flVTopSrc; // 0x4
	CUtlVector< float32 > m_offsets; // 0x8
	CUtlVector< float32 > m_ranges; // 0x20
};

// Aligment: 5
// Size: 40
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0
	int16_t m_nYTopDst; // 0x2
	float m_flUWidthSrc; // 0x4
	float m_flVHeightSrc; // 0x8
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10
};

// Aligment: 2
// Size: 32
class CMorphData
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8
};

// Aligment: 10
// Size: 160
class CMorphSetData
{
public:
	int32_t m_nWidth; // 0x10
	int32_t m_nHeight; // 0x14
	MorphLookupType_t m_nLookupType; // 0x18
	MorphEncodingType_t m_nEncodingType; // 0x1c
	CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x20
	CUtlVector< CMorphData > m_morphDatas; // 0x38
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x50
	CUtlVector< CFlexDesc > m_FlexDesc; // 0x58
	CUtlVector< CFlexController > m_FlexControllers; // 0x70
	CUtlVector< CFlexRule > m_FlexRules; // 0x88
};

// Aligment: 9
// Size: 64
class CFootDefinition
{
public:
	CUtlString m_name; // 0x0
	CUtlString m_ankleBoneName; // 0x8
	CUtlString m_toeBoneName; // 0x10
	Vector m_vBallOffset; // 0x18
	Vector m_vHeelOffset; // 0x24
	float m_flFootLength; // 0x30
	float m_flBindPoseDirectionMS; // 0x34
	float m_flTraceHeight; // 0x38
	float m_flTraceRadius; // 0x3c
};

// Aligment: 2
// Size: 8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
};

// Aligment: 7
// Size: 56
class CFingerBone
{
public:
	CUtlString m_boneName; // 0x0
	Vector m_hingeAxis; // 0x8
	Vector m_vCapsulePos1; // 0x14
	Vector m_vCapsulePos2; // 0x20
	float m_flMinAngle; // 0x2c
	float m_flMaxAngle; // 0x30
	float m_flRadius; // 0x34
};

// Aligment: 10
// Size: 112
class CFingerChain
{
public:
	CUtlVector< CFingerSource > m_targets; // 0x0
	CUtlVector< CFingerBone > m_bones; // 0x18
	CUtlString m_name; // 0x30
	CUtlString m_tipParentBoneName; // 0x38
	Vector m_vTipOffset; // 0x40
	CUtlString m_metacarpalBoneName; // 0x50
	Vector m_vSplayHingeAxis; // 0x58
	float m_flSplayMinAngle; // 0x64
	float m_flSplayMaxAngle; // 0x68
	float m_flFingerScaleRatio; // 0x6c
};

// Aligment: 4
// Size: 48
class CWristBone
{
public:
	CUtlString m_name; // 0x0
	Vector m_vForwardLS; // 0x8
	Vector m_vUpLS; // 0x14
	Vector m_vOffset; // 0x20
};

// Aligment: 6
// Size: 80
class CVrSkeletalInputSettings
{
public:
	CUtlVector< CWristBone > m_wristBones; // 0x0
	CUtlVector< CFingerChain > m_fingers; // 0x18
	CUtlString m_name; // 0x30
	CUtlString m_outerKnuckle1; // 0x38
	CUtlString m_outerKnuckle2; // 0x40
	AnimVRHand_t m_eHand; // 0x48
};

// Aligment: 1
// Size: 4
class CCycleBase
{
public:
	float m_flCycle; // 0x0
};

// Aligment: 0
// Size: 4
class CAnimCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 4
class CFootCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 10
// Size: 64
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0
	Vector m_vMidpointPositionMS; // 0xc
	float m_flStanceDirectionMS; // 0x18
	Vector m_vToStrideStartPos; // 0x1c
	float m_flMaxExtent; // 0x28
	CAnimCycle m_stanceCycle; // 0x2c
	CFootCycle m_footLiftCycle; // 0x30
	CFootCycle m_footOffCycle; // 0x34
	CFootCycle m_footStrikeCycle; // 0x38
	CFootCycle m_footLandCycle; // 0x3c
};

// Aligment: 3
// Size: 20
class CFootTrajectory
{
public:
	Vector m_vOffset; // 0x0
	float m_flRotationOffset; // 0xc
	float m_flProgression; // 0x10
public:
	static CFootTrajectory &Get_Identity() { return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("vphysics2.dll")->FindDeclaredClass("CFootTrajectory")->m_static_fiels[0]->m_instance); }
};

// Aligment: 1
// Size: 24
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0
};

// Aligment: 2
// Size: 88
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0
	CFootTrajectories m_trajectories; // 0x40
};

// Aligment: 3
// Size: 40
class CFootMotion
{
public:
	CUtlVector< CFootStride > m_strides; // 0x0
	CUtlString m_name; // 0x18
	bool m_bAdditive; // 0x20
};

