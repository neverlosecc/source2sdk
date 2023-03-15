#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: engine2.dll
// Class Count: 127
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 4
// Size: 40
struct EngineLoopState_t
{
public:
	int32_t m_nPlatWindowWidth; // 0x18
	int32_t m_nPlatWindowHeight; // 0x1c
	int32_t m_nRenderWidth; // 0x20
	int32_t m_nRenderHeight; // 0x24
};

// Aligment: 0
// Size: 1
struct EventModInitialized_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0
};

// Aligment: 1
// Size: 4
struct EventProfileStorageAvailable_t
{
public:
	int32_t m_nSplitScreenSlot; // 0x0
};

// Aligment: 0
// Size: 1
struct EventSplitScreenStateChanged_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 96
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	int32_t m_nClientOutputFrames; // 0x28
	double m_flRealTime; // 0x30
	double m_flRenderTime; // 0x38
	double m_flRenderFrameTime; // 0x40
	double m_flRenderFrameTimeUnbounded; // 0x48
	double m_flRenderFrameTimeUnscaled; // 0x50
	double m_flTickRemainder; // 0x58
};

// Aligment: 2
// Size: 48
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
};

// Aligment: 3
// Size: 48
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 4
// Size: 64
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	double m_flRenderFrameTime; // 0x30
	double m_flRenderFrameTimeUnbounded; // 0x38
};

// Aligment: 1
// Size: 1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0
};

// Aligment: 3
// Size: 48
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRenderTime; // 0x28
	float m_flRealTime; // 0x2c
};

// Aligment: 4
// Size: 56
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	float m_flRenderFrameTime; // 0x30
	float m_flRenderFrameTimeUnbounded; // 0x34
};

// Aligment: 3
// Size: 48
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 3
// Size: 48
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	bool m_bFirstTick; // 0x28
	bool m_bLastTick; // 0x29
};

// Aligment: 3
// Size: 64
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nTotalTicksThisFrame; // 0x34
	int32_t m_nTotalTicks; // 0x38
};

// Aligment: 3
// Size: 64
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nTotalTicksThisFrame; // 0x34
	int32_t m_nTotalTicks; // 0x38
};

// Aligment: 0
// Size: 64
struct EventServerAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct EventClientSendInput_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0
};

// Aligment: 0
// Size: 1
struct EventClientProcessNetworking_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 1
// Size: 8
struct EventPreDataUpdate_t
{
public:
	int32_t m_nEntityIndex; // 0x0
};

// Aligment: 1
// Size: 4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0
};

// Aligment: 0
// Size: 8
class IRecipientFilter
{
public:
// <no members described>
};

// Aligment: 5
// Size: 40
struct VPhysics2ShapeDef_t
{
public:
	CResourceArray< RnSphereDesc_t > m_spheres; // 0x0
	CResourceArray< RnCapsuleDesc_t > m_capsules; // 0x8
	CResourceArray< RnHullDesc_t > m_hulls; // 0x10
	CResourceArray< RnMeshDesc_t > m_meshes; // 0x18
	CResourceArray< uint16 > m_CollisionAttributeIndices; // 0x20
};

// Aligment: 11
// Size: 88
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0
	float m_flMass; // 0x4
	VPhysics2ShapeDef_t m_rnShape; // 0x8
	CResourceArray< uint8 > m_nSurfacepropertyIndices; // 0x30
	uint16_t m_nCollisionAttributeIndex; // 0x38
	uint16_t m_nReserved; // 0x3a
	float m_flInertiaScale; // 0x3c
	float m_flLinearDamping; // 0x40
	float m_flAngularDamping; // 0x44
	bool m_bOverrideMassCenter; // 0x48
	Vector m_vMassCenterOverride; // 0x4c
};

// Aligment: 8
// Size: 56
struct VPhysXCollisionAttributes_t
{
public:
	uint32_t m_CollisionGroup; // 0x0
	CResourceArray< uint32 > m_InteractAs; // 0x4
	CResourceArray< uint32 > m_InteractWith; // 0xc
	CResourceArray< uint32 > m_InteractExclude; // 0x14
	CResourceString m_CollisionGroupString; // 0x1c
	CResourceArray< CResourceString > m_InteractAsStrings; // 0x20
	CResourceArray< CResourceString > m_InteractWithStrings; // 0x28
	CResourceArray< CResourceString > m_InteractExcludeStrings; // 0x30
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
// Size: 48
struct PhysSoftbodyDesc_t
{
public:
	CResourceArray< uint32 > m_ParticleBoneHash; // 0x0
	CResourceArray< RnSoftbodyParticle_t > m_Particles; // 0x8
	CResourceArray< RnSoftbodySpring_t > m_Springs; // 0x10
	CResourceArray< RnSoftbodyCapsule_t > m_Capsules; // 0x18
	CResourceArray< CTransform > m_InitPose; // 0x20
	CResourceArray< CResourceString > m_ParticleBoneName; // 0x28
};

// Aligment: 16
// Size: 108
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0
	uint16_t m_nRefCounter; // 0x2
	CResourceArray< uint32 > m_bonesHash; // 0x4
	CResourceArray< CResourceString > m_boneNames; // 0xc
	CResourceArray< uint16 > m_indexNames; // 0x14
	CResourceArray< uint16 > m_indexHash; // 0x1c
	CResourceArray< matrix3x4a_t > m_bindPose; // 0x24
	CResourceArray< VPhysXBodyPart_t > m_parts; // 0x2c
	CResourceArray< VPhysXConstraint2_t > m_constraints2; // 0x34
	CResourceArray< VPhysXJoint_t > m_joints; // 0x3c
	CResourcePointer< PhysFeModelDesc_t > m_pFeModel; // 0x44
	CResourceArray< uint16 > m_boneParents; // 0x48
	CResourceArray< uint32 > m_surfacePropertyHashes; // 0x50
	CResourceArray< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x58
	CResourceArray< CResourceString > m_debugPartNames; // 0x60
	CResourceString m_embeddedKeyvalues; // 0x68
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

// Aligment: 6
// Size: 24
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
// Size: 152
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

// Aligment: 4
// Size: 32
struct SkeletonBoneBbox_t
{
public:
	Vector m_vecCenter; // 0x0
	float m_pad0; // 0xc
	Vector m_vecSize; // 0x10
	float m_pad1; // 0x1c
};

// Aligment: 11
// Size: 72
struct RenderSkeletonData_t
{
public:
	uint16_t m_nBoneCount; // 0x0
	uint16_t m_nBoneWeightCount; // 0x2
	CResourceArray< uint32 > m_bonesHash; // 0x4
	CResourceArray< uint16 > m_indexNames; // 0xc
	CResourceArray< uint16 > m_indexHash; // 0x14
	CResourceArray< matrix3x4a_t > m_invBindPose; // 0x1c
	CResourceArray< SkeletonBoneBbox_t > m_bboxes; // 0x24
	CResourceArray< float32 > m_spheres; // 0x2c
	uint32_t m_nFlags; // 0x34
	CResourceArray< CResourceString > m_boneNames; // 0x38
	CResourceArray< uint16 > m_boneParents; // 0x40
};

// Aligment: 2
// Size: 16
struct RenderBufferBinding_t
{
public:
	uint64_t m_hBuffer; // 0x0
	uint32_t m_nBindOffsetBytes; // 0x8
};

// Aligment: 15
// Size: 88
struct MaterialDrawDescriptor_t
{
public:
	int32_t m_nBaseVertex; // 0x0
	int32_t m_nVertexCount; // 0x4
	int32_t m_nStartIndex; // 0x8
	int32_t m_nIndexCount; // 0xc
	int32_t m_nStartInstance; // 0x10
	int32_t m_nInstanceCount; // 0x14
	float m_flUvDensity; // 0x18
	uint8_t m_nPrimitiveType; // 0x1c
	uint8_t m_bAlphaBlendedMaterial; // 0x1d
	uint8_t m_nFlags; // 0x1e
	uint8_t m_padding; // 0x1f
	uint32[5] m_hInputLayoutHandle; // 0x20
	CResourceArray< RenderBufferBinding_t > m_vertexBuffers; // 0x34
	RenderBufferBinding_t m_indexBuffer; // 0x40
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_pMaterial; // 0x50
};

// Aligment: 4
// Size: 24
struct OnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0
	int32_t m_nElementSizeInBytes; // 0x4
	CResourceArray< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8
	CResourceArray< uint8 > m_pData; // 0x10
};

// Aligment: 5
// Size: 52
struct SceneObjectData_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
	MeshTranslucencyType_t m_translucencyType; // 0x18
	CResourceArray< MaterialDrawDescriptor_t > m_drawCalls; // 0x1c
	Vector4D m_vTintColor; // 0x24
};

// Aligment: 7
// Size: 116
struct AttachmentData_t
{
public:
	CResourceString m_name; // 0x0
	CResourceString[3] m_influenceNames; // 0x4
	Vector[3] m_vInfluenceOffsets; // 0x10
	Quaternion[3] m_vInfluenceRotations; // 0x34
	float32[3] m_influenceWeights; // 0x64
	uint8[3] m_nFlags; // 0x70
	uint8_t m_nInfluences; // 0x73
};

// Aligment: 10
// Size: 56
struct HitBox_t
{
public:
	CResourceString m_name; // 0x0
	CResourceString m_sSurfaceProperty; // 0x4
	int32_t m_nGroupId; // 0x8
	CResourceString m_sBoneName; // 0xc
	uint32_t m_nBoneNameHash; // 0x10
	uint8[4] m_cRenderColor; // 0x14
	uint16_t m_nHitBoxIndex; // 0x18
	Vector m_vMinBounds; // 0x1c
	Vector m_vMaxBounds; // 0x28
	bool m_bVisible; // 0x34
};

// Aligment: 3
// Size: 16
struct HitBoxSet_t
{
public:
	CResourceString m_name; // 0x0
	CResourceString m_SourceFilename; // 0x4
	CResourceArray< HitBox_t > m_hitboxes; // 0x8
};

// Aligment: 5
// Size: 40
struct ConstraintTarget_t
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vOffset; // 0x8
	Quaternion m_qOffset; // 0x14
	bool m_bIsAttachment; // 0x24
};

// Aligment: 4
// Size: 36
struct ConstraintSlave_t
{
public:
	uint32_t m_nBoneHash; // 0x0
	float m_flWeight; // 0x4
	Vector m_vBasePosition; // 0x8
	Quaternion m_qBaseOrientation; // 0x14
};

// Aligment: 11
// Size: 96
struct BaseConstraint_t
{
public:
	CResourceString m_name; // 0x0
	int32_t m_nConstraintType; // 0x4
	Vector m_vUpVector; // 0x8
	Quaternion m_qAimOffset; // 0x14
	uint32_t m_nTargetUpBoneHash; // 0x24
	uint32_t m_nUpType; // 0x28
	bool m_bInverse; // 0x2c
	Quaternion m_qParentBindRotation; // 0x30
	Quaternion m_qChildBindRotation; // 0x40
	CResourceArray< ConstraintSlave_t > m_slaves; // 0x50
	CResourceArray< ConstraintTarget_t > m_targets; // 0x58
};

// Aligment: 8
// Size: 64
struct PermRenderMeshData_t
{
public:
	CResourceArray< SceneObjectData_t > m_sceneObjects; // 0x0
	CResourceExtReference< CWeakHandle< InfoForResourceTypeMorphSetData_t > > m_pMorphSet; // 0x8
	CResourcePointer< RenderSkeletonData_t > m_skeleton; // 0x10
	CResourceArray< AttachmentData_t > m_attachments; // 0x14
	CResourceArray< HitBoxSet_t > m_hitboxsets; // 0x1c
	CResourceArray< BaseConstraint_t > m_boneConstraints; // 0x24
	CResourceArray< OnDiskBufferData_t > m_vertexBuffers; // 0x2c
	CResourceArray< OnDiskBufferData_t > m_indexBuffers; // 0x34
};

// Aligment: 2
// Size: 12
struct MaterialGroup_t
{
public:
	CResourceString m_name; // 0x0
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > > m_materials; // 0x4
};

// Aligment: 6
// Size: 48
struct ModelSkeletonData_t
{
public:
	CResourceArray< CResourceString > m_boneName; // 0x0
	CResourceArray< int16 > m_nParent; // 0x8
	CResourceArray< float32 > m_boneSphere; // 0x10
	CResourceArray< uint32 > m_nFlag; // 0x18
	CResourceArray< Vector > m_bonePosParent; // 0x20
	CResourceArray< Quaternion > m_boneRotParent; // 0x28
};

// Aligment: 10
// Size: 80
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
	CResourceString m_sSurfaceProperty; // 0x48
	CResourceString m_keyValueText; // 0x4c
};

// Aligment: 4
// Size: 48
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0
	CResourceString m_Name; // 0x20
	int32_t m_nParent; // 0x24
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCModel > > m_refModel; // 0x28
};

// Aligment: 5
// Size: 20
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
	CResourceString m_flexController; // 0x4
	uint32_t m_flexControllerToken; // 0x8
	float m_flMin; // 0xc
	float m_flMax; // 0x10
};

// Aligment: 3
// Size: 16
struct ModelBoneFlexDriver_t
{
public:
	CResourceString m_boneName; // 0x0
	uint32_t m_boneNameToken; // 0x4
	CResourceArray< ModelBoneFlexDriverControl_t > m_controls; // 0x8
};

// Aligment: 19
// Size: 264
struct PermModelData_t
{
public:
	CResourceString m_name; // 0x0
	PermModelInfo_t m_modelInfo; // 0x4
	CResourceArray< PermModelExtPart_t > m_ExtParts; // 0x54
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCRenderMesh > > > m_refMeshes; // 0x5c
	CResourceArray< uint64 > m_refMeshGroupMasks; // 0x64
	CResourceArray< uint64 > m_refPhysGroupMasks; // 0x6c
	CResourceArray< uint8 > m_refLODGroupMasks; // 0x74
	CResourceArray< float32 > m_lodGroupSwitchDistances; // 0x7c
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCPhysAggregateData > > > m_refPhysicsData; // 0x84
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeCPhysAggregateData > > > m_refPhysicsHitboxData; // 0x8c
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeAnimationGroupResourceData_t > > > m_refAnimGroups; // 0x94
	CResourceArray< CResourceExtReference< CWeakHandle< InfoForResourceTypeSequenceGroupResourceData_t > > > m_refSequenceGroups; // 0x9c
	CResourceArray< CResourceString > m_meshGroups; // 0xa4
	CResourceArray< MaterialGroup_t > m_materialGroups; // 0xac
	uint64_t m_nDefaultMeshGroupMask; // 0xb8
	ModelSkeletonData_t m_modelSkeleton; // 0xc0
	CResourceArray< int16 > m_remappingTable; // 0xf0
	CResourceArray< uint16 > m_remappingTableStarts; // 0xf8
	CResourceArray< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x100
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

// Aligment: 11
// Size: 200
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
	CRenderBufferBinding m_indexBuffer; // 0xa8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xc0
};

// Aligment: 4
// Size: 72
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x20
	Vector4D m_vTintColor; // 0x38
};

// Aligment: 7
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
// Size: 432
class CRenderMesh
{
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10
	CUtlVector< CBaseConstraint* > m_constraints; // 0x70
	CRenderSkeleton m_skeleton; // 0x88
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

// Aligment: 4
// Size: 152
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28
	CUtlString m_sAttachmentName; // 0x30
	CUtlVector< CUtlString > m_outputMorph; // 0x38
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50
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
struct FlexOp_t
{
public:
	int32_t m_OpCode; // 0x0
	int32_t m_Data; // 0x4
};

// Aligment: 2
// Size: 12
struct FlexRule_t
{
public:
	int32_t m_nFlex; // 0x0
	CResourceArray< FlexOp_t > m_FlexOps; // 0x4
};

// Aligment: 1
// Size: 4
struct FlexDesc_t
{
public:
	CResourceString m_szFacs; // 0x0
};

// Aligment: 5
// Size: 20
struct FlexController_t
{
public:
	CResourceString m_szName; // 0x0
	CResourceString m_szType; // 0x4
	int32_t localToGlobal; // 0x8
	float min; // 0xc
	float max; // 0x10
};

// Aligment: 4
// Size: 24
struct BundleData_t
{
public:
	float m_flULeftSrc; // 0x0
	float m_flVTopSrc; // 0x4
	CResourceArray< float32 > m_offsets; // 0x8
	CResourceArray< float32 > m_ranges; // 0x10
};

// Aligment: 5
// Size: 20
struct MorphRectData_t
{
public:
	int16_t m_nXLeftDst; // 0x0
	int16_t m_nYTopDst; // 0x2
	float m_flUWidthSrc; // 0x4
	float m_flVHeightSrc; // 0x8
	CResourceArray< BundleData_t > m_bundleDatas; // 0xc
};

// Aligment: 2
// Size: 12
struct MorphData_t
{
public:
	CResourceString m_name; // 0x0
	CResourceArray< MorphRectData_t > m_morphRectDatas; // 0x4
};

// Aligment: 11
// Size: 72
struct MorphSetData_t
{
public:
	int32_t m_nWidth; // 0x0
	int32_t m_nHeight; // 0x4
	MorphSetData_t::LookupType_t m_nLookupType; // 0x8
	MorphSetData_t::EncodingType_t m_nEncodingType; // 0xc
	CResourceArray< BundleType_t > m_bundleTypes; // 0x10
	CResourceArray< MorphData_t > m_morphDatas; // 0x18
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureAtlas; // 0x20
	CResourceExtReference< CWeakHandle< InfoForResourceTypeMorphSetData_t > > m_pMorphSetBase; // 0x28
	CResourceArray< FlexDesc_t > m_FlexDesc; // 0x30
	CResourceArray< FlexController_t > m_FlexControllers; // 0x38
	CResourceArray< FlexRule_t > m_FlexRules; // 0x40
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

// Aligment: 0
// Size: 8
class IHandleEntity
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CNetworkVarChainer
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x8
};

// Aligment: 0
// Size: 1
class CVariantDefaultAllocator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 16
struct EntOutput_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 120
struct EntComponentInfo_t
{
public:
	V_uuid_t m_id; // 0x0
	char* m_pName; // 0x10
	char* m_pCPPClassname; // 0x18
	char* m_pNetworkDataReferencedDescription; // 0x20
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x28
	int32_t m_nRuntimeIndex; // 0x30
	uint32_t m_nFlags; // 0x34
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70
};

// Aligment: 0
// Size: 8
class CEntityComponent
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EntInput_t
{
public:
// <no members described>
};

// Aligment: 4
// Size: 40
class CEntityComponentHelper
{
public:
	uint32_t m_flags; // 0x8
	EntComponentInfo_t* m_pInfo; // 0x10
	int32_t m_nPriority; // 0x18
	CEntityComponentHelper* m_pNext; // 0x20
};

// Aligment: 11
// Size: 120
class CEntityIdentity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14
	CUtlSymbolLarge m_name; // 0x18
	CUtlSymbolLarge m_designerName; // 0x20
	uint32_t m_flags; // 0x30
	uint32_t m_fDataObjectTypes; // 0x38
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x3c
	CEntityIdentity* m_pPrev; // 0x50
	CEntityIdentity* m_pNext; // 0x58
	CEntityIdentity* m_pPrevByClass; // 0x60
	CEntityIdentity* m_pNextByClass; // 0x68
	V_uuid_t* m_pId; // 0x70
};

// Aligment: 0
// Size: 8
class CEmptyEntityInstance
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
// Size: 40
class CEntityIOOutput
{
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18
};

// Aligment: 1
// Size: 56
class CScriptComponent : public CEntityComponent
{
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30
public:
	static EntComponentInfo_t &Get_s_EntComponentInfo() { return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("engine2.dll")->FindDeclaredClass("CScriptComponent")->m_static_fiels[1]->m_instance); }
};

