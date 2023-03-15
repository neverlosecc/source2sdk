#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: vphysics2.dll
// Class Count: 21
// Enum Count: 2
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
// Size: 148
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0
	float m_flMaxAngularRadius; // 0xc
	CResourceArray< Vector > m_Vertices; // 0x10
	CResourceArray< RnPlane_t > m_Planes; // 0x18
	CResourceArray< RnHalfEdge_t > m_Edges; // 0x20
	CResourceArray< RnFace_t > m_Faces; // 0x28
	Vector m_vOrthographicAreas; // 0x30
	matrix3x4_t m_MassProperties; // 0x3c
	float m_flVolume; // 0x6c
	float m_flMaxMotionRadius; // 0x70
	float m_flMinMotionThickness; // 0x74
	AABB_t m_Bounds; // 0x78
	uint32_t m_nFlags; // 0x90
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
// Size: 68
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0
	Vector m_vMax; // 0xc
	CResourceArray< RnNode_t > m_Nodes; // 0x18
	CResourceArray< Vector > m_Vertices; // 0x20
	CResourceArray< RnTriangle_t > m_Triangles; // 0x28
	CResourceArray< uint8 > m_Materials; // 0x30
	Vector m_vOrthographicAreas; // 0x38
};

// Aligment: 2
// Size: 8
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0
	uint32_t m_nSurfacePropertyIndex; // 0x4
};

// Aligment: 1
// Size: 24
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x8
};

// Aligment: 1
// Size: 36
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x8
};

// Aligment: 1
// Size: 156
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x8
};

// Aligment: 1
// Size: 76
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x8
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

