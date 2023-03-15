#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: particles.dll
// Class Count: 354
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 0
// Size: 320
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 7
// Size: 256
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe0
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0xe4
	// MPropertyFriendlyName "field to write"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0xe8
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0xec
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0xf0
	// MPropertyFriendlyName "reverse order"
	// MDefaultString
	bool m_bReverse; // 0xf1
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0xf4
};

// Aligment: 5
// Size: 544
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0xe0
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CPerParticleFloatInput m_flInput1; // 0xe8
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CPerParticleFloatInput m_flInput2; // 0x170
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1f8
	// MPropertyFriendlyName "scale initial value"
	// MDefaultString
	bool m_bScaleInitialValue; // 0x1fc
};

// Aligment: 3
// Size: 400
class C_OP_SetFloat : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x168
	// MPropertyFriendlyName "scale initial value"
	// MDefaultString
	bool m_bScaleInitialValue; // 0x16c
};

// Aligment: 17
// Size: 272
class C_OP_ClothMovement : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "gravity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_Gravity; // 0xe0
	// MPropertyFriendlyName "drag"
	// MDefaultString
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0xec
	// MPropertyFriendlyName "force triangulate"
	// MDefaultString
	bool m_bTriangulate; // 0xf0
	// MPropertyFriendlyName "constraints"
	// MDefaultString
	bool m_bConstraints; // 0xf1
	// MPropertyFriendlyName "add curvature"
	// MDefaultString
	float m_flAddCurvature; // 0xf4
	// MPropertyFriendlyName "add slack (not implemented)"
	// MDefaultString
	float m_flAddSlack; // 0xf8
	// MPropertyFriendlyName "add noise"
	// MDefaultString
	float m_flAddNoise; // 0xfc
	// MPropertyFriendlyName "max constraint passes"
	// MDefaultString
	int32_t m_nMaxConstraintPasses; // 0x100
	// MPropertyFriendlyName "lock the UL corner point in place"
	// MDefaultString
	bool m_bLockULCorner; // 0x104
	// MPropertyFriendlyName "lock the UR corner point in place"
	// MDefaultString
	bool m_bLockURCorner; // 0x105
	// MPropertyFriendlyName "lock the LL corner point in place"
	// MDefaultString
	bool m_bLockLLCorner; // 0x106
	// MPropertyFriendlyName "lock the LR corner point in place"
	// MDefaultString
	bool m_bLockLRCorner; // 0x107
	// MPropertyFriendlyName "lock upper row in place"
	// MDefaultString
	bool m_bLockURow; // 0x108
	// MPropertyFriendlyName "lock lower row in place"
	// MDefaultString
	bool m_bLockLRow; // 0x109
	// MPropertyFriendlyName "lock left column in place"
	// MDefaultString
	bool m_bLockLColumn; // 0x10a
	// MPropertyFriendlyName "lock right column in place"
	// MDefaultString
	bool m_bLockRColumn; // 0x10b
	// MPropertyFriendlyName "iterations"
	// MDefaultString
	int32_t m_nIterations; // 0x10c
};

// Aligment: 0
// Size: 224
class C_OP_CalculateNormalsForGrid : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 256
class C_OP_LockPoints : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	// MDefaultString
	int32_t m_nMinCol; // 0xe0
	// MPropertyFriendlyName "max column/particle index to affect"
	// MDefaultString
	int32_t m_nMaxCol; // 0xe4
	// MPropertyFriendlyName "min row/particle index to affect"
	// MDefaultString
	int32_t m_nMinRow; // 0xe8
	// MPropertyFriendlyName "max row/particle index to affect"
	// MDefaultString
	int32_t m_nMaxRow; // 0xec
	// MPropertyFriendlyName "control point to lock to"
	// MDefaultString
	int32_t m_nControlPoint; // 0xf0
	// MPropertyFriendlyName "amount of current position to preserve"
	// MDefaultString
	float m_flBlendValue; // 0xf4
};

// Aligment: 5
// Size: 256
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point 0"
	// MDefaultString
	int32_t m_nCP0; // 0xe0
	// MPropertyFriendlyName "control point 1"
	// MDefaultString
	int32_t m_nCP1; // 0xe4
	// MPropertyFriendlyName "min distance value"
	// MDefaultString
	float m_flMinInputValue; // 0xe8
	// MPropertyFriendlyName "max distance value"
	// MDefaultString
	float m_flMaxInputValue; // 0xec
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	// MDefaultString
	bool m_bInfiniteLine; // 0xf0
};

// Aligment: 3
// Size: 272
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x100
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	float m_flMinOutputValue; // 0x104
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	float m_flMaxOutputValue; // 0x108
};

// Aligment: 3
// Size: 288
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x100
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	Vector m_vMinOutputValue; // 0x104
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	Vector m_vMaxOutputValue; // 0x110
};

// Aligment: 11
// Size: 288
class C_OP_TeleportBeam : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Position Control Point"
	// MDefaultString
	int32_t m_nCPPosition; // 0xe0
	// MPropertyFriendlyName "Velocity Control Point"
	// MDefaultString
	int32_t m_nCPVelocity; // 0xe4
	// MPropertyFriendlyName "Misc Control Point"
	// MDefaultString
	int32_t m_nCPMisc; // 0xe8
	// MPropertyFriendlyName "Color Control Point"
	// MDefaultString
	int32_t m_nCPColor; // 0xec
	// MPropertyFriendlyName "Invalid Color Control Point"
	// MDefaultString
	int32_t m_nCPInvalidColor; // 0xf0
	// MPropertyFriendlyName "Extra Arc Data Point"
	// MDefaultString
	int32_t m_nCPExtraArcData; // 0xf4
	// MPropertyFriendlyName "Gravity"
	// MDefaultString
	Vector m_vGravity; // 0xf8
	// MPropertyFriendlyName "Arc Duration Maximum"
	// MDefaultString
	float m_flArcMaxDuration; // 0x104
	// MPropertyFriendlyName "Segment Break"
	// MDefaultString
	float m_flSegmentBreak; // 0x108
	// MPropertyFriendlyName "Arc Speed"
	// MDefaultString
	float m_flArcSpeed; // 0x10c
	// MPropertyFriendlyName "Alpha"
	// MDefaultString
	float m_flAlpha; // 0x110
};

// Aligment: 9
// Size: 256
class C_OP_CycleScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0xe0
	// MPropertyFriendlyName "Value at start of cycle"
	// MDefaultString
	float m_flStartValue; // 0xe4
	// MPropertyFriendlyName "Value at end of cycle"
	// MDefaultString
	float m_flEndValue; // 0xe8
	// MPropertyFriendlyName "Cycle time"
	// MDefaultString
	float m_flCycleTime; // 0xec
	// MPropertyFriendlyName "Do not repeat cycle"
	// MDefaultString
	bool m_bDoNotRepeatCycle; // 0xf0
	// MPropertyFriendlyName "Synchronize particles"
	// MDefaultString
	bool m_bSynchronizeParticles; // 0xf1
	// MPropertyFriendlyName "Scale Start/End Control Point"
	// MDefaultString
	int32_t m_nCPScale; // 0xf4
	// MPropertyFriendlyName "start scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0xf8
	// MPropertyFriendlyName "end scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0xfc
};

// Aligment: 11
// Size: 320
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start value"
	// MDefaultString
	Vector m_vStartValue; // 0xe0
	// MPropertyFriendlyName "input field 1"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0xec
	// MPropertyFriendlyName "input scale 1"
	// MDefaultString
	float m_flInputScale1; // 0xf0
	// MPropertyFriendlyName "input field 2"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0xf4
	// MPropertyFriendlyName "input scale 2"
	// MDefaultString
	float m_flInputScale2; // 0xf8
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0xfc
	// MPropertyFriendlyName "control point scale 1"
	// MDefaultString
	float m_flControlPointScale1; // 0x110
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x114
	// MPropertyFriendlyName "control point scale 2"
	// MDefaultString
	float m_flControlPointScale2; // 0x128
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x12c
	// MPropertyFriendlyName "final per component scale"
	// MDefaultString
	Vector m_vFinalOutputScale; // 0x130
};

// Aligment: 2
// Size: 240
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0xe0
	// MPropertyFriendlyName "Second Control point to set"
	// MDefaultString
	int32_t m_nSecondControlPoint; // 0xe4
};

// Aligment: 6
// Size: 256
class C_OP_UpdateLightSource : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color tint"
	// MDefaultString
	Color m_vColorTint; // 0xe0
	// MPropertyFriendlyName "amount to multiply light brightness by"
	// MDefaultString
	float m_flBrightnessScale; // 0xe4
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	// MDefaultString
	float m_flRadiusScale; // 0xe8
	// MPropertyFriendlyName "minimum radius for created lights"
	// MDefaultString
	float m_flMinimumLightingRadius; // 0xec
	// MPropertyFriendlyName "maximum radius for created lights"
	// MDefaultString
	float m_flMaximumLightingRadius; // 0xf0
	// MPropertyFriendlyName "amount of damping of changes"
	// MDefaultString
	float m_flPositionDampingConstant; // 0xf4
};

// Aligment: 0
// Size: 224
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 8
// Size: 256
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0xe0
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe4
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0xe8
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0xec
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0xf0
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf4
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf8
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	// MDefaultString
	bool m_bUseDeltaV; // 0xfc
};

// Aligment: 8
// Size: 784
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0xe0
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0xe4
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe8
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xec
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMin; // 0xf0
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMax; // 0x178
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x288
};

// Aligment: 5
// Size: 512
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0xe0
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe4
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xe8
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput1; // 0xf0
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput2; // 0x178
};

// Aligment: 6
// Size: 256
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0xe0
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe4
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0xe8
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0xec
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf0
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf4
};

// Aligment: 5
// Size: 256
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe0
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0xe4
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0xe8
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xec
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf0
};

// Aligment: 7
// Size: 256
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xe4
	// MPropertyFriendlyName "scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0xe8
	// MPropertyFriendlyName "input volume minimum"
	// MDefaultString
	float m_flInputMin; // 0xec
	// MPropertyFriendlyName "input volume maximum"
	// MDefaultString
	float m_flInputMax; // 0xf0
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf4
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf8
};

// Aligment: 3
// Size: 256
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0xe0
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	Vector m_vecRateMin; // 0xe4
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	Vector m_vecRateMax; // 0xf0
};

// Aligment: 5
// Size: 256
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0xe0
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nChildControlPoint; // 0xe4
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0xe8
	// MPropertyFriendlyName "first parent control point to set from"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0xec
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0xf0
};

// Aligment: 12
// Size: 304
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0xe0
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0xe1
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0xe2
	// MPropertyFriendlyName "first control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe4
	// MPropertyFriendlyName "second control point number"
	// MDefaultString
	int32_t m_nCP2; // 0xe8
	// MPropertyFriendlyName "third control point number"
	// MDefaultString
	int32_t m_nCP3; // 0xec
	// MPropertyFriendlyName "fourth control point number"
	// MDefaultString
	int32_t m_nCP4; // 0xf0
	// MPropertyFriendlyName "first control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0xf4
	// MPropertyFriendlyName "second control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x100
	// MPropertyFriendlyName "third control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x10c
	// MPropertyFriendlyName "fourth control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x118
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x124
};

// Aligment: 5
// Size: 256
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0xe0
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0xe1
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe4
	// MPropertyFriendlyName "control point location"
	// MDefaultString
	Vector m_vecCP1Pos; // 0xe8
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0xf4
};

// Aligment: 7
// Size: 272
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0xe0
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0xe1
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe4
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0xe8
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	// MDefaultString
	float m_flReRandomRate; // 0xec
	// MPropertyFriendlyName "control point min"
	// MDefaultString
	Vector m_vecCPMinPos; // 0xf0
	// MPropertyFriendlyName "control point max"
	// MDefaultString
	Vector m_vecCPMaxPos; // 0xfc
};

// Aligment: 7
// Size: 272
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0xe0
	// MPropertyFriendlyName "randomize"
	// MDefaultString
	bool m_bRandomize; // 0xe2
	// MPropertyFriendlyName "only set orientation once"
	// MDefaultString
	bool m_bSetOnce; // 0xe3
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0xe4
	// MPropertyFriendlyName "control point to offset orientation from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0xe8
	// MPropertyFriendlyName "pitch yaw roll"
	// MDefaultString
	QAngle m_vecRotation; // 0xec
	// MPropertyFriendlyName "pitch yaw roll max"
	// MDefaultString
	QAngle m_vecRotationB; // 0xf8
};

// Aligment: 2
// Size: 240
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0xe0
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nCPOutput; // 0xe4
};

// Aligment: 12
// Size: 400
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0xe0
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0xe4
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe8
	// MPropertyFriendlyName "output control point field"
	// MDefaultString
	int32_t m_nOutputCPField; // 0xec
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0xf0
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0xf4
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf8
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xfc
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x100
	// MPropertyFriendlyName "LOS Failure Scale"
	// MDefaultString
	float m_flLOSScale; // 0x104
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x108
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x109
};

// Aligment: 3
// Size: 256
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe0
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0xe4
	// MPropertyFriendlyName "use eye orientation"
	// MDefaultString
	bool m_bOrientToEyes; // 0xf0
};

// Aligment: 4
// Size: 256
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe0
	// MPropertyFriendlyName "hand"
	// MDefaultString
	int32_t m_nHand; // 0xe4
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0xe8
	// MPropertyFriendlyName "use hand orientation"
	// MDefaultString
	bool m_bOrientToHand; // 0xf4
};

// Aligment: 3
// Size: 256
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0xe0
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0xe4
	// MPropertyFriendlyName "use hmd orientation"
	// MDefaultString
	bool m_bOrientToHMD; // 0xf0
};

// Aligment: 3
// Size: 384
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe0
	// MPropertyFriendlyName "time-of-day parameter"
	// MDefaultString
	char[128] m_pszTimeOfDayParameter; // 0xe4
	// MPropertyFriendlyName "default value"
	// MDefaultString
	Vector m_vecDefaultValue; // 0x164
};

// Aligment: 2
// Size: 240
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number to set"
	// MDefaultString
	int32_t m_nCP1; // 0xe0
	// MPropertyFriendlyName "center offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0xe4
};

// Aligment: 5
// Size: 240
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	// MDefaultString
	float m_flDuration; // 0xe0
	// MPropertyFriendlyName "control point to scale duration"
	// MDefaultString
	int32_t m_nCP; // 0xe4
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0xe8
	// MPropertyFriendlyName "destroy all particles immediately"
	// MDefaultString
	bool m_bDestroyImmediately; // 0xec
	// MPropertyFriendlyName "play end cap effect"
	// MDefaultString
	bool m_bPlayEndCap; // 0xed
};

// Aligment: 4
// Size: 256
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxis; // 0xe0
	// MPropertyFriendlyName "rotation rate"
	// MDefaultString
	float m_flRotRate; // 0xec
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0xf0
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nLocalCP; // 0xf4
};

// Aligment: 8
// Size: 256
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nInputControlPoint; // 0xe0
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0xe4
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0xe8
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0xec
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0xf0
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0xf4
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf8
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xfc
};

// Aligment: 4
// Size: 256
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Target color control point number"
	// MDefaultString
	int32_t m_nColorCP; // 0xe0
	// MPropertyFriendlyName "Color Gem Enable control point number"
	// MDefaultString
	int32_t m_nColorGemEnableCP; // 0xe4
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe8
	// MPropertyFriendlyName "Default HSV Color"
	// MDefaultString
	Color m_DefaultHSVColor; // 0xec
};

// Aligment: 8
// Size: 400
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nCPOut; // 0xe0
	// MPropertyFriendlyName "control point to trace from"
	// MDefaultString
	int32_t m_nCPIn; // 0xe4
	// MPropertyFriendlyName "trace update rate"
	// MDefaultString
	float m_flUpdateRate; // 0xe8
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flTraceLength; // 0xec
	// MPropertyFriendlyName "offset end point amount"
	// MDefaultString
	float m_flOffset; // 0xf0
	// MPropertyFriendlyName "trace direction override"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0xf4
	// MPropertyFriendlyName "trace collision group"
	// MDefaultString
	char[128] m_CollisionGroupName; // 0x100
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	// MDefaultString
	bool m_bSetToEndpoint; // 0x180
};

// Aligment: 2
// Size: 240
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "CP to point towards"
	// MDefaultString
	int32_t m_nInputCP; // 0xe0
	// MPropertyFriendlyName "CP to set"
	// MDefaultString
	int32_t m_nOutputCP; // 0xe4
};

// Aligment: 3
// Size: 240
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0xe0
	// MPropertyFriendlyName "first child to enable"
	// MDefaultString
	int32_t m_nFirstChild; // 0xe4
	// MPropertyFriendlyName "# of children to enable"
	// MDefaultString
	int32_t m_nNumChildrenToEnable; // 0xe8
};

// Aligment: 2
// Size: 240
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "play when emission ends"
	// MDefaultString
	bool m_bFireOnEmissionEnd; // 0xe0
	// MPropertyFriendlyName "wait for children to finish"
	// MDefaultString
	bool m_bIncludeChildren; // 0xe1
};

// Aligment: 1
// Size: 240
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_ControlPoint; // 0xe0
};

// Aligment: 9
// Size: 288
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0xe4
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0xe8
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0xec
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0xf0
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0xf4
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0xf8
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x100
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x108
};

// Aligment: 3
// Size: 240
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source CP"
	// MDefaultString
	int32_t m_nSourceCP; // 0xe0
	// MPropertyFriendlyName "dest CP"
	// MDefaultString
	int32_t m_nDestCP; // 0xe4
	// MPropertyFriendlyName "dest control point component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0xe8
};

// Aligment: 4
// Size: 640
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0xe0
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0xe8
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterSize; // 0x170
	// MPropertyFriendlyName "Cluster Cooldown Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x1f8
};

// Aligment: 2
// Size: 304
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MParticleAdvancedField
	CParticleVisibilityInputs VisibilityInputs; // 0xe0
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MDefaultString
	// MPropertyGroupName "Rendering filter"
	bool m_bCannotBeRefracted; // 0x124
};

// Aligment: 1
// Size: 320
class C_OP_RenderPoints : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hMaterial; // 0x130
};

// Aligment: 47
// Size: 752
class CBaseRendererSource2 : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	float m_flAnimationRate; // 0x130
	// MPropertyFriendlyName "animation fit lifetime"
	// MDefaultString
	bool m_bFitCycleToLifetime; // 0x134
	// MPropertyFriendlyName "use animation rate as FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x135
	// MPropertyFriendlyName "light per vertex"
	// MDefaultString
	bool m_bPerVertexLighting; // 0x136
	// MPropertyFriendlyName "self illum amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flSelfIllumAmount; // 0x138
	// MPropertyFriendlyName "diffuse lighting amount"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	float m_flDiffuseAmount; // 0x13c
	// MPropertyFriendlyName "self illum per-particle"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x140
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToZero; // 0x144
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToOne; // 0x148
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bGammaCorrectVertexColors; // 0x14c
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bSaturateColorPreAlphaBlend; // 0x14d
	// MPropertyFriendlyName "dual sequence combine mode"
	// MDefaultString
	// MPropertyGroupName "Dual sequence controls"
	SequenceCombineMode_t m_nSequenceCombineMode; // 0x150
	// MPropertyFriendlyName "second sequence animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	// MPropertyGroupName "Dual sequence controls"
	float m_flAnimationRate2; // 0x154
	// MPropertyFriendlyName "RGB blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0RGBWeight; // 0x158
	// MPropertyFriendlyName "alpha blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0AlphaWeight; // 0x15c
	// MPropertyFriendlyName "RGB blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1RGBWeight; // 0x160
	// MPropertyFriendlyName "alpha blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1AlphaWeight; // 0x164
	// MPropertyFriendlyName "add self amount for combined additive and alpha blended"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flAddSelfAmount; // 0x168
	// MPropertyFriendlyName "use additive blending"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditive; // 0x16c
	// MPropertyFriendlyName "Additive alpha - write alpha during additive"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditiveAlpha; // 0x16d
	// MPropertyFriendlyName "Mod2x blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bMod2X; // 0x16e
	// MPropertyFriendlyName "'Lighten blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bLightenMode; // 0x16f
	// MPropertyFriendlyName "use max-luminance blending for sequence 0"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence0; // 0x170
	// MPropertyFriendlyName "use max-luminance blending for sequence 1"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence1; // 0x171
	// MPropertyFriendlyName "refract background"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	bool m_bRefract; // 0x172
	// MPropertyFriendlyName "refract amount"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	// MPropertyGroupName "Refraction"
	float m_flRefractAmount; // 0x174
	// MPropertyFriendlyName "refract blur radius"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	int32_t m_nRefractBlurRadius; // 0x178
	// MPropertyFriendlyName "refract blur type"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	BlurFilterType_t m_nRefractBlurType; // 0x17c
	// MPropertyFriendlyName "stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char[128] m_stencilTestID; // 0x180
	// MPropertyFriendlyName "stencil write ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char[128] m_stencilWriteID; // 0x200
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthPass; // 0x280
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthFail; // 0x281
	// MPropertyFriendlyName "reverse z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bReverseZBuffering; // 0x282
	// MPropertyFriendlyName "disable z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bDisableZBuffering; // 0x283
	// MPropertyFriendlyName "Depth feathering mode"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x284
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMinDist; // 0x288
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMaxDist; // 0x28c
	// MPropertyFriendlyName "overbright factor"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flOverbrightFactor; // 0x290
	// MPropertyFriendlyName "Apply fog of war to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByFOW; // 0x294
	// MPropertyFriendlyName "Apply fog to particle"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bFogParticles; // 0x295
	// MPropertyFriendlyName "Apply global light to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByGlobalLight; // 0x296
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MDefaultString
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hTexture; // 0x298
	// MPropertyFriendlyName "Apply motion vectors"
	// MDefaultString
	// MPropertyGroupName "Motion vectors"
	bool m_bMotionVectors; // 0x2a0
	// MPropertyFriendlyName "motion vectors texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MPropertyGroupName "Motion vectors"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hMotionVectorsTexture; // 0x2a8
	// MPropertyFriendlyName "blend sequence 0 animation frames"
	// MDefaultString
	bool m_bBlendFramesSeq0; // 0x2b0
	// MPropertyFriendlyName "right eye first seq offset"
	// MDefaultString
	int32_t m_nFirstSequenceOffsetForRightEye; // 0x2b4
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MDefaultString
	int32_t m_nHSVShiftControlPoint; // 0x2b8
};

// Aligment: 13
// Size: 816
class CBaseTrailRenderer : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "orientation type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nOrientationType; // 0x2f0
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	int32_t m_nOrientationControlPoint; // 0x2f4
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x2f8
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x2fc
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeSize; // 0x300
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeSize; // 0x304
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x308
	// MPropertyFriendlyName "Scale factor to apply to input radius"
	// MDefaultString
	float m_flRadiusScale; // 0x30c
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	bool m_bClampV; // 0x310
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	float m_flFinalTextureScaleU; // 0x314
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	float m_flFinalTextureScaleV; // 0x318
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	float m_flFinalTextureOffsetU; // 0x31c
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	float m_flFinalTextureOffsetV; // 0x320
};

// Aligment: 15
// Size: 896
class C_OP_RenderTrails : public CBaseTrailRenderer, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	bool m_bEnableFadingAndClamping; // 0x330
	// MPropertyFriendlyName "max length"
	// MDefaultString
	float m_flMaxLength; // 0x334
	// MPropertyFriendlyName "min length"
	// MDefaultString
	float m_flMinLength; // 0x338
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDT; // 0x33c
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MDefaultString
	float m_flConstrainRadiusToLengthRatio; // 0x340
	// MPropertyFriendlyName "amount to scale trail length by"
	// MDefaultString
	float m_flLengthScale; // 0x344
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	// MDefaultString
	float m_flRadiusTaper; // 0x348
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MDefaultString
	float m_flLengthFadeInTime; // 0x34c
	// MPropertyFriendlyName "trail end tint factor"
	// MDefaultString
	Vector4D m_vEndTrailTintFactor; // 0x350
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x360
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x364
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	// MDefaultString
	float m_flForwardShift; // 0x368
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	// MDefaultString
	bool m_bFlipUVBasedOnPitchYaw; // 0x36c
	// MPropertyFriendlyName "Anchor point source"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x370
	// MPropertyFriendlyName "Use particle system topology"
	// MDefaultString
	bool m_bUseTopology; // 0x374
};

// Aligment: 33
// Size: 880
class C_OP_RenderRopes : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	bool m_bEnableFadingAndClamping; // 0x2f0
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x2f4
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x2f8
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeSize; // 0x2fc
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeSize; // 0x300
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	// MDefaultString
	float m_flRadiusTaper; // 0x304
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MDefaultString
	int32_t m_nMinTesselation; // 0x308
	// MPropertyFriendlyName "maximum number of quads per render segment"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0x30c
	// MPropertyFriendlyName "tesselation resolution scale factor"
	// MDefaultString
	float m_flTessScale; // 0x310
	// MPropertyFriendlyName "texture V World Size"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVWorldSize; // 0x314
	// MPropertyFriendlyName "texture V Scroll Rate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVScrollRate; // 0x318
	// MPropertyFriendlyName "texture V Offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVOffset; // 0x31c
	// MPropertyFriendlyName "texture V Params CP"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nTextureVParamsCP; // 0x320
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleU; // 0x324
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleV; // 0x328
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetU; // 0x32c
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetV; // 0x330
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bClampV; // 0x334
	// MPropertyFriendlyName "scale CP start"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP1; // 0x338
	// MPropertyFriendlyName "scale CP end"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP2; // 0x33c
	// MPropertyFriendlyName "scale V world size by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVSizeByControlPointDistance; // 0x340
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVScrollByControlPointDistance; // 0x344
	// MPropertyFriendlyName "scale V offset by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVOffsetByControlPointDistance; // 0x348
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bUseScalarForTextureCoordinate; // 0x34d
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Texture Coordinates"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x350
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScalarAttributeTextureCoordScale; // 0x354
	// MPropertyFriendlyName "orientation_type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nOrientationType; // 0x358
	// MPropertyFriendlyName "draw as opaque"
	// MDefaultString
	bool m_bDrawAsOpaque; // 0x35c
	// MPropertyFriendlyName "generate normals for cylinder"
	// MDefaultString
	bool m_bGenerateNormals; // 0x35d
	// MPropertyFriendlyName "reverse point order"
	// MDefaultString
	bool m_bReverseOrder; // 0x35e
	// MPropertyFriendlyName "scale factor to apply to input radius"
	// MDefaultString
	float m_flRadiusScale; // 0x360
	// MPropertyFriendlyName "Closed loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x364
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x368
};

// Aligment: 1
// Size: 320
class C_OP_RenderGrid : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hMaterial; // 0x130
};

// Aligment: 7
// Size: 336
class C_OP_RenderCables : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hMaterial; // 0x130
	// MPropertyFriendlyName "approximate size in feet of the texture before repeat"
	// MDefaultString
	float m_flTextureSize; // 0x138
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MDefaultString
	int32_t m_nMinTesselation; // 0x13c
	// MPropertyFriendlyName "maximum number of quads per render segment"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0x140
	// MPropertyFriendlyName "tesselation resolution scale factor"
	// MDefaultString
	float m_flTessScale; // 0x144
	// MPropertyFriendlyName "texture scroll rate"
	// MDefaultString
	float m_flTextureScrollRate; // 0x148
	// MPropertyFriendlyName "normal texture scroll rate"
	// MDefaultString
	float m_flNormalMapScrollRate; // 0x14c
};

// Aligment: 8
// Size: 368
class C_OP_RenderAsModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "models"
	CUtlVector< ModelReference_t > m_ModelList; // 0x130
	// MPropertyFriendlyName "scale factor for radius"
	// MDefaultString
	float m_flModelScale; // 0x14c
	// MPropertyFriendlyName "scale model to match particle size"
	// MDefaultString
	bool m_bFitToModelSize; // 0x150
	// MPropertyFriendlyName "non-uniform scaling"
	// MDefaultString
	bool m_bNonUniformScaling; // 0x151
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x154
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x158
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x15c
	// MPropertyFriendlyName "model size cull bloat"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x160
};

// Aligment: 7
// Size: 352
class C_OP_RenderLights : public C_OP_RenderPoints, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	float m_flAnimationRate; // 0x140
	// MPropertyFriendlyName "animation fit lifetime"
	// MDefaultString
	bool m_bFitCycleToLifetime; // 0x144
	// MPropertyFriendlyName "use animation rate as FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x145
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	float m_flMinSize; // 0x148
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	float m_flMaxSize; // 0x14c
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	float m_flStartFadeSize; // 0x150
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	float m_flEndFadeSize; // 0x154
};

// Aligment: 5
// Size: 336
class C_OP_RenderBlobs : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "cube width"
	// MDefaultString
	float m_cubeWidth; // 0x130
	// MPropertyFriendlyName "cutoff radius"
	// MDefaultString
	float m_cutoffRadius; // 0x134
	// MPropertyFriendlyName "render radius"
	// MDefaultString
	float m_renderRadius; // 0x138
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x13c
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hMaterial; // 0x140
};

// Aligment: 2
// Size: 320
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	// MDefaultString
	float m_flRotateRateDegrees; // 0x130
	// MPropertyFriendlyName "forward angle"
	// MDefaultString
	float m_flForwardDegrees; // 0x134
};

// Aligment: 3
// Size: 16
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "particle field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0xc
};

// Aligment: 30
// Size: 1232
class C_OP_RenderModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "activity override"
	// MDefaultString
	char[256] m_ActivityName; // 0x130
	// MPropertyFriendlyName "model override economy loadout slot type"
	// MDefaultString
	char[256] m_EconSlotName; // 0x230
	// MPropertyFriendlyName "models"
	CUtlVector< ModelReference_t > m_ModelList; // 0x330
	// MPropertyFriendlyName "ignore normal"
	// MDefaultString
	bool m_bIgnoreNormal; // 0x34c
	// MPropertyFriendlyName "orient model z to normal"
	// MDefaultString
	bool m_bOrientZ; // 0x34d
	// MPropertyFriendlyName "scale animation rate"
	// MDefaultString
	bool m_bScaleAnimationRate; // 0x34e
	// MPropertyFriendlyName "reset animation frame on stop"
	// MDefaultString
	bool m_bResetAnimOnStop; // 0x34f
	// MPropertyFriendlyName "set animation frame manually"
	// MDefaultString
	bool m_bManualAnimFrame; // 0x350
	// MPropertyFriendlyName "animation rate scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x354
	// MPropertyFriendlyName "skin number"
	// MDefaultString
	int32_t m_nSkin; // 0x358
	// MPropertyFriendlyName "bodygroup field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x35c
	// MPropertyFriendlyName "submodel field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x360
	// MPropertyFriendlyName "animation sequence field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAnimationField; // 0x364
	// MPropertyFriendlyName "manual animation frame field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x368
	// MPropertyFriendlyName "model LOD"
	// MDefaultString
	int32_t m_nLOD; // 0x36c
	// MPropertyFriendlyName "material override"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x370
	// MPropertyFriendlyName "override translucent materials"
	// MDefaultString
	bool m_bOverrideTranslucentMaterials; // 0x378
	// MPropertyFriendlyName "skin override CP"
	// MDefaultString
	int32_t m_nSkinCP; // 0x37c
	// MPropertyFriendlyName "model override CP"
	// MDefaultString
	int32_t m_nModelCP; // 0x380
	// MPropertyFriendlyName "model scale CP"
	// MDefaultString
	int32_t m_nModelScaleCP; // 0x384
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	float m_flAnimationRate; // 0x388
	// MPropertyFriendlyName "animated"
	// MDefaultString
	bool m_bAnimated; // 0x38c
	// MPropertyFriendlyName "force looping animations"
	// MDefaultString
	bool m_bForceLoopingAnimation; // 0x38d
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	// MDefaultString
	bool m_bForceDrawInterlevedWithSiblings; // 0x38e
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	// MDefaultString
	bool m_bOriginalModel; // 0x38f
	// MPropertyFriendlyName "suppress tinting of the model"
	// MDefaultString
	bool m_bSuppressTint; // 0x390
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	// MDefaultString
	bool m_bUseRawMeshGroup; // 0x391
	// MPropertyFriendlyName "disable shadows"
	// MDefaultString
	bool m_bDisableShadows; // 0x392
	// MPropertyFriendlyName "render attribute"
	// MDefaultString
	char[260] m_szRenderAttribute; // 0x393
	// MPropertyFriendlyName "material variables"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x498
};

// Aligment: 9
// Size: 336
class C_OP_RenderProjected : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "project on characters"
	// MDefaultString
	bool m_bProjectCharacter; // 0x130
	// MPropertyFriendlyName "project on world"
	// MDefaultString
	bool m_bProjectWorld; // 0x131
	// MPropertyFriendlyName "project on water"
	// MDefaultString
	bool m_bProjectWater; // 0x132
	// MPropertyFriendlyName "flip horizontal"
	// MDefaultString
	bool m_bFlipHorizontal; // 0x133
	// MPropertyFriendlyName "enable projected depth controls"
	// MDefaultString
	bool m_bEnableProjectedDepthControls; // 0x134
	// MPropertyFriendlyName "min projection depth"
	// MDefaultString
	float m_flMinProjectionDepth; // 0x138
	// MPropertyFriendlyName "max projection depth"
	// MDefaultString
	float m_flMaxProjectionDepth; // 0x13c
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MDefaultString
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hProjectedMaterial; // 0x140
	// MPropertyFriendlyName "sheet animation time scale"
	// MDefaultString
	float m_flAnimationTimeScale; // 0x148
};

// Aligment: 13
// Size: 368
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MDefaultString
	bool m_bUseAlphaTestWindow; // 0x130
	// MPropertyFriendlyName "projected texture light"
	// MDefaultString
	bool m_bUseTexture; // 0x131
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x134
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	float m_flAlphaScale; // 0x138
	// MPropertyFriendlyName "spotlight distance"
	// MDefaultString
	float m_flLightDistance; // 0x13c
	// MPropertyFriendlyName "light start falloff"
	// MDefaultString
	float m_flStartFalloff; // 0x140
	// MPropertyFriendlyName "spotlight distance falloff"
	// MDefaultString
	float m_flDistanceFalloff; // 0x144
	// MPropertyFriendlyName "spotlight FoV"
	// MDefaultString
	float m_flSpotFoV; // 0x148
	// MPropertyFriendlyName "color scale"
	// MPropertyColorWithNoAlpha
	// MDefaultString
	Color m_ColorScale; // 0x14c
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x15c
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x160
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x164
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hTexture; // 0x168
};

// Aligment: 11
// Size: 368
class C_OP_RenderStandardLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "light type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nLightType; // 0x130
	// MPropertyFriendlyName "color scale"
	// MPropertyColorWithNoAlpha
	// MDefaultString
	Color m_Color; // 0x134
	// MPropertyFriendlyName "intensity"
	// MDefaultString
	float m_flIntensity; // 0x138
	// MPropertyFriendlyName "cast shadows"
	// MDefaultString
	bool m_bCastShadows; // 0x13c
	// MPropertyFriendlyName "inner cone angle"
	// MDefaultString
	float m_flTheta; // 0x140
	// MPropertyFriendlyName "outer cone angle"
	// MDefaultString
	float m_flPhi; // 0x144
	// MPropertyFriendlyName "light radius multiplier"
	// MDefaultString
	float m_flRadiusMultiplier; // 0x148
	// MPropertyFriendlyName "falloff linearity"
	// MDefaultString
	float m_flFalloffLinearity; // 0x14c
	// MPropertyFriendlyName "render diffuse"
	// MDefaultString
	bool m_bRenderDiffuse; // 0x150
	// MPropertyFriendlyName "render specular"
	// MDefaultString
	bool m_bRenderSpecular; // 0x151
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x158
};

// Aligment: 0
// Size: 304
class C_OP_RenderClothForce : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 304
class C_OP_Callback : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 9
// Size: 352
class C_OP_RenderScreenShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x130
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x134
	// MPropertyFriendlyName "frequence scale"
	// MDefaultString
	float m_flFrequencyScale; // 0x138
	// MPropertyFriendlyName "amplitude scale"
	// MDefaultString
	float m_flAmplitudeScale; // 0x13c
	// MPropertyFriendlyName "radius field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x140
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x144
	// MPropertyFriendlyName "frequency field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x148
	// MPropertyFriendlyName "amplitude field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x14c
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	// MDefaultString
	int32_t m_nFilterCP; // 0x150
};

// Aligment: 4
// Size: 320
class C_OP_RenderTonemapController : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	// MDefaultString
	float m_flTonemapLevel; // 0x130
	// MPropertyFriendlyName "tonemap weight scale"
	// MDefaultString
	float m_flTonemapWeight; // 0x134
	// MPropertyFriendlyName "tonemap level"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x138
	// MPropertyFriendlyName "tonemap weight"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x13c
};

// Aligment: 11
// Size: 608
class C_OP_RenderSound : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x130
	// MPropertyFriendlyName "decibel level scale"
	// MDefaultString
	float m_flSndLvlScale; // 0x134
	// MPropertyFriendlyName "pitch scale"
	// MDefaultString
	float m_flPitchScale; // 0x138
	// MPropertyFriendlyName "volume scale"
	// MDefaultString
	float m_flVolumeScale; // 0x13c
	// MPropertyFriendlyName "decibel level field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x140
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x144
	// MPropertyFriendlyName "pitch field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x148
	// MPropertyFriendlyName "volume field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x14c
	// MPropertyFriendlyName "sound channel"
	// MDefaultString
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x150
	// MPropertyFriendlyName "sound control point number"
	// MDefaultString
	int32_t m_nCPReference; // 0x154
	// MPropertyFriendlyName "sound"
	// MDefaultString
	// MPropertyAttributeEditor "SoundPicker()"
	char[256] m_pszSoundName; // 0x158
};

// Aligment: 7
// Size: 368
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureColorWarp; // 0x130
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureDetail2; // 0x138
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureDiffuseWarp; // 0x140
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureFresnelColorWarp; // 0x148
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureFresnelWarp; // 0x150
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureSpecularWarp; // 0x158
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pTextureEnvMap; // 0x160
};

// Aligment: 3
// Size: 320
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flattening strength"
	// MDefaultString
	float m_flFlattenStrength; // 0x130
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x134
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x138
};

// Aligment: 10
// Size: 352
class C_OP_RenderTreeShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "peak strength"
	// MDefaultString
	float m_flPeakStrength; // 0x130
	// MPropertyFriendlyName "peak strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x134
	// MPropertyFriendlyName "radius"
	// MDefaultString
	float m_flRadius; // 0x138
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x13c
	// MPropertyFriendlyName "shake duration after end"
	// MDefaultString
	float m_flShakeDuration; // 0x140
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	// MDefaultString
	float m_flTransitionTime; // 0x144
	// MPropertyFriendlyName "Twist amount (-1..1)"
	// MDefaultString
	float m_flTwistAmount; // 0x148
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	// MDefaultString
	float m_flRadialAmount; // 0x14c
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	// MDefaultString
	float m_flControlPointOrientationAmount; // 0x150
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	// MDefaultString
	int32_t m_nControlPointForLinearDirection; // 0x154
};

// Aligment: 2
// Size: 320
class C_OP_RenderText : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	Color m_OutlineColor; // 0x130
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x138
};

// Aligment: 35
// Size: 896
class C_OP_RenderSprites : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence id override"
	// MDefaultString
	int32_t m_nSequenceOverride; // 0x2f0
	// MPropertyFriendlyName "orientation type"
	// MPropertyAttributeChoiceEnumName
	// MDefaultString
	int32_t m_nOrientationType; // 0x2f4
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	int32_t m_nOrientationControlPoint; // 0x2f8
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x2fc
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x300
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flAlphaAdjustWithSizeAdjust; // 0x304
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeSize; // 0x308
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeSize; // 0x30c
	// MPropertyFriendlyName "start dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeDot; // 0x310
	// MPropertyFriendlyName "end dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeDot; // 0x314
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x318
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureScaleU; // 0x31c
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureScaleV; // 0x320
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureOffsetU; // 0x324
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureOffsetV; // 0x328
	// MPropertyFriendlyName "X offset of center point"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flCenterXOffset; // 0x32c
	// MPropertyFriendlyName "Y offset of center point"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flCenterYOffset; // 0x330
	// MPropertyFriendlyName "intraframe zoom amount for sequence 0"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flZoomAmount0; // 0x334
	// MPropertyFriendlyName "intraframe zoom amount for sequence 1"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flZoomAmount1; // 0x338
	// MPropertyFriendlyName "distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	bool m_bDistanceAlpha; // 0x33c
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	bool m_bSoftEdges; // 0x33d
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	float m_flEdgeSoftnessStart; // 0x340
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	float m_flEdgeSoftnessEnd; // 0x344
	// MPropertyFriendlyName "enable particle outlining"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	bool m_bOutline; // 0x348
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	Color m_OutlineColor; // 0x349
	// MPropertyFriendlyName "outline alpha"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Outlining"
	int32_t m_nOutlineAlpha; // 0x350
	// MPropertyFriendlyName "outline start 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineStart0; // 0x354
	// MPropertyFriendlyName "outline start 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineStart1; // 0x358
	// MPropertyFriendlyName "outline end 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineEnd0; // 0x35c
	// MPropertyFriendlyName "outline end 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineEnd1; // 0x360
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MDefaultString
	bool m_bUseYawWithNormalAligned; // 0x364
	// MPropertyFriendlyName "Normal Mapping"
	// MDefaultString
	bool m_bNormalMap; // 0x365
	// MPropertyFriendlyName "Bump Strength"
	// MDefaultString
	float m_flBumpStrength; // 0x368
	// MPropertyFriendlyName "Radius Scale"
	// MDefaultString
	float m_flRadiusScale; // 0x36c
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_hNormalTexture; // 0x370
};

// Aligment: 1
// Size: 912
class C_OP_RenderFogSprites : public C_OP_RenderSprites, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "material"
	CResourceExtReference< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_hMaterial; // 0x380
};

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
};

// Aligment: 16
// Size: 96
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0
	uint32_t m_nModSpecificData; // 0x8
	// MDefaultString
	PetGroundType_t m_groundType; // 0xc
	CUtlString m_sequenceName; // 0x10
	int32_t m_nFireParticleOnSequenceFrame; // 0x18
	CUtlString m_hitboxSetName; // 0x20
	CUtlString m_materialGroupName; // 0x28
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30
	// MDefaultString
	CUtlString m_stencilWriteName; // 0x48
	// MDefaultString
	float m_flPlaybackSpeed; // 0x50
	// MDefaultString
	float m_flParticleSimulationRate; // 0x54
	bool m_bShouldDrawHitboxes; // 0x58
	bool m_bShouldDrawAttachments; // 0x59
	bool m_bShouldDrawAttachmentNames; // 0x5a
	bool m_bShouldDrawControlPointAxes; // 0x5b
	bool m_bAnimationNonLooping; // 0x5c
};

// Aligment: 6
// Size: 48
struct ParticleControlPointDriver_t
{
public:
	int32_t m_iControlPoint; // 0x0
	ParticleAttachment_t m_iAttachType; // 0x4
	CUtlString m_attachmentName; // 0x8
	Vector m_vecOffset; // 0x10
	QAngle m_angOffset; // 0x1c
	CUtlString m_entityName; // 0x28
};

// Aligment: 3
// Size: 128
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8
	ParticlePreviewState_t m_previewState; // 0x20
};

// Aligment: 0
// Size: 16
class IParticleCollection
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IControlPointEditorData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 18
// Size: 68
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "visibility camera depth bias"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCameraBias; // 0x0
	// MPropertyFriendlyName "visibility input minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMin; // 0x4
	// MPropertyFriendlyName "visibility input maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMax; // 0x8
	// MPropertyFriendlyName "visibility alpha scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMin; // 0xc
	// MPropertyFriendlyName "visibility alpha scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMax; // 0x10
	// MPropertyFriendlyName "visibility radius scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMin; // 0x14
	// MPropertyFriendlyName "visibility radius scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMax; // 0x18
	// MPropertyFriendlyName "visibility radius FOV scale base"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleFOVBase; // 0x1c
	// MPropertyFriendlyName "visibility proxy radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flProxyRadius; // 0x20
	// MPropertyFriendlyName "visibility input distance minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMin; // 0x24
	// MPropertyFriendlyName "visibility input distance maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMax; // 0x28
	// MPropertyFriendlyName "visibility input dot minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMin; // 0x2c
	// MPropertyFriendlyName "visibility input dot maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMax; // 0x30
	// MPropertyFriendlyName "Visibility input dot use CP angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCPAngles; // 0x34
	// MPropertyFriendlyName "Visibility input dot use Camera angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCameraAngles; // 0x35
	// MPropertyFriendlyName "visibility unsupported hardware fallback value"
	// MDefaultString
	// MParticleAdvancedField
	float m_flNoPixelVisibilityFallback; // 0x38
	// MPropertyFriendlyName "visibility proxy input control point number"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCPin; // 0x3c
	// MPropertyFriendlyName "visibility vr camera right eye"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40
};

// Aligment: 8
// Size: 64
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	// MDefaultString
	int32_t m_nStartControlPointNumber; // 0x0
	// MPropertyFriendlyName "end control point number"
	// MDefaultString
	int32_t m_nEndControlPointNumber; // 0x4
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	// MDefaultString
	int32_t m_nBulgeControl; // 0x8
	// MPropertyFriendlyName "random bulge"
	// MDefaultString
	float m_flBulge; // 0xc
	// MPropertyFriendlyName "mid point position"
	// MDefaultString
	float m_flMidPoint; // 0x10
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20
	// MPropertyFriendlyName "Offset from control point for path end"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c
};

// Aligment: 4
// Size: 16
struct ParticleChildrenInfo_t
{
public:
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0
	// MPropertyFriendlyName "delay"
	// MDefaultString
	float m_flDelay; // 0x8
	// MPropertyFriendlyName "end cap effect"
	// MDefaultString
	bool m_bEndCap; // 0xe
	// MPropertyFriendlyName "disable child"
	// MDefaultString
	bool m_bDisableChild; // 0xf
};

// Aligment: 3
// Size: 20
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_controlPointNameString; // 0x0
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffsetFromControlPoint; // 0x4
	// MPropertyFriendlyName "Use local space offset"
	// MDefaultString
	bool m_bOffsetInLocalSpace; // 0x10
};

// Aligment: 2
// Size: 16
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0
	// MPropertyFriendlyName "Relative probability"
	// MDefaultString
	float m_flRelativeProbabilityOfSpawn; // 0x8
};

// Aligment: 1
// Size: 4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
};

// Aligment: 3
// Size: 20
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x0
	// MPropertyFriendlyName "Use local coordinates for offset"
	// MDefaultString
	bool m_bLocalCoords; // 0x4
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffset; // 0x8
};

// Aligment: 1
// Size: 24
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	// MDefaultString
	float m_flTimeDuration; // 0x14
};

// Aligment: 57
// Size: 832
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MDefaultString
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8
	// MPropertyFriendlyName "pre emission operators"
	CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10
	// MPropertyFriendlyName "emitters"
	CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28
	// MPropertyFriendlyName "initializers"
	CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40
	// MPropertyFriendlyName "operators"
	CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58
	// MPropertyFriendlyName "forces"
	CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70
	// MPropertyFriendlyName "constraints"
	CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88
	// MPropertyFriendlyName "renderers"
	CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xa0
	// MPropertySuppressField
	CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xb8
	// MPropertySuppressField
	// MDefaultString
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178
	// MPropertyFriendlyName "initial particles"
	// MDefaultString
	int32_t m_nInitialParticles; // 0x17c
	// MPropertyFriendlyName "max particles"
	// MDefaultString
	int32_t m_nMaxParticles; // 0x180
	// MPropertyFriendlyName "bounding box min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1c0
	// MPropertyFriendlyName "bounding box max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x1cc
	// MPropertyFriendlyName "snapshot control point"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x1d8
	// MPropertyFriendlyName "snapshot"
	// MPropertyAttributeEditor "AssetBrowse( vsnap )"
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x1e0
	// MPropertyFriendlyName "target layer ID for rendering"
	// MDefaultString
	CUtlSymbolLarge m_pszTargetLayerID; // 0x1e8
	// MPropertyFriendlyName "Topology"
	// MDefaultString
	ParticleTopology_t m_nTopology; // 0x1f0
	// MPropertyFriendlyName "reference replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x210
	// MPropertyFriendlyName "cull replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x218
	// MPropertyFriendlyName "cull radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullRadius; // 0x220
	// MPropertyFriendlyName "cull cost"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullFillCost; // 0x224
	// MPropertyFriendlyName "cull control point"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCullControlPoint; // 0x228
	// MPropertyFriendlyName "fallback replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x238
	// MPropertyFriendlyName "fallback max count"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nFallbackMaxCount; // 0x240
	// MPropertyFriendlyName "low violence definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x248
	// MPropertyFriendlyName "color"
	// MDefaultString
	Color m_ConstantColor; // 0x250
	// MPropertyFriendlyName "normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x254
	// MPropertyFriendlyName "radius"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x260
	// MPropertyFriendlyName "rotation"
	// MDefaultString
	float m_flConstantRotation; // 0x264
	// MPropertyFriendlyName "rotation speed"
	// MDefaultString
	float m_flConstantRotationSpeed; // 0x268
	// MPropertyFriendlyName "lifetime"
	// MDefaultString
	float m_flConstantLifespan; // 0x26c
	// MPropertyFriendlyName "sequence number"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x270
	// MPropertyFriendlyName "sequence number 1"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x274
	// MPropertyFriendlyName "group id"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nGroupID; // 0x278
	// MPropertyFriendlyName "maximum time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumTimeStep; // 0x27c
	// MPropertyFriendlyName "maximum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumSimTime; // 0x280
	// MPropertyFriendlyName "minimum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumSimTime; // 0x284
	// MPropertyFriendlyName "minimum simulation time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumTimeStep; // 0x288
	// MPropertyFriendlyName "minimum rendered frames"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinimumFrames; // 0x28c
	// MPropertyFriendlyName "minimum CPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinCPULevel; // 0x290
	// MPropertyFriendlyName "minimum GPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinGPULevel; // 0x294
	// MPropertyFriendlyName "view model effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bViewModelEffect; // 0x298
	// MPropertyFriendlyName "screen space effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bScreenSpaceEffect; // 0x299
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x2b0
	// MPropertyFriendlyName "time to sleep when not drawn"
	// MDefaultString
	float m_flNoDrawTimeToGoToSleep; // 0x2c8
	// MPropertyFriendlyName "maximum draw distance"
	// MDefaultString
	float m_flMaxDrawDistance; // 0x2cc
	// MPropertyFriendlyName "start fade distance"
	// MDefaultString
	float m_flStartFadeDistance; // 0x2d0
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nSkipRenderControlPoint; // 0x2d4
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAllowRenderControlPoint; // 0x2d8
	// MPropertyFriendlyName "minimum free particles to aggregate"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAggregationMinAvailableParticles; // 0x2dc
	// MPropertyFriendlyName "aggregation radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAggregateRadius; // 0x2e0
	// MPropertyFriendlyName "freeze simulation after time"
	// MDefaultString
	// MParticleAdvancedField
	float m_flStopSimulationAfterTime; // 0x2e4
	// MPropertyFriendlyName "sort particles"
	// MDefaultString
	bool m_bShouldSort; // 0x324
	// MPropertyFriendlyName "batch particle systems"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldBatch; // 0x325
	// MPropertyFriendlyName "depth sort bias"
	// MDefaultString
	float m_flDepthSortBias; // 0x328
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x32d
};

// Aligment: 0
// Size: 64
class CPiecewiseCurveSchemaWrapper
{
public:
// <no members described>
};

// Aligment: 18
// Size: 136
class CParticleFloatInput
{
public:
	// MDefaultString
	ParticleFloatType_t m_nType; // 0x0
	// MDefaultString
	ParticleFloatMapType_t m_nMapType; // 0x4
	// MDefaultString
	float m_flLiteralValue; // 0x8
	// MDefaultString
	int32_t m_nControlPoint; // 0xc
	// MDefaultString
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x10
	// MDefaultString
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14
	// MDefaultString
	int32_t m_nVectorComponent; // 0x18
	// MDefaultString
	float m_flRandomMin; // 0x1c
	// MDefaultString
	float m_flRandomMax; // 0x20
	// MDefaultString
	ParticleFloatRandomMode_t m_nRandomMode; // 0x24
	// MDefaultString
	float m_flMultFactor; // 0x2c
	// MDefaultString
	float m_flInput0; // 0x30
	// MDefaultString
	float m_flInput1; // 0x34
	// MDefaultString
	float m_flOutput0; // 0x38
	// MDefaultString
	float m_flOutput1; // 0x3c
	// MDefaultString
	ParticleFloatBiasType_t m_nBiasType; // 0x40
	// MDefaultString
	float m_flBiasParameter; // 0x44
	CPiecewiseCurveSchemaWrapper m_Curve; // 0x48
};

// Aligment: 0
// Size: 136
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 136
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleEffect
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CParticleProperty
{
public:
// <no members described>
};

// Aligment: 24
// Size: 168
class CNewParticleEffect : public IParticleEffect
{
public:
	CNewParticleEffect* m_pNext; // 0x10
	CNewParticleEffect* m_pPrev; // 0x18
	IParticleCollection* m_pParticles; // 0x20
	char* m_pDebugName; // 0x28
	bitfield:1 m_bDontRemove; // 0x0
	bitfield:1 m_bRemove; // 0x0
	bitfield:1 m_bNeedsBBoxUpdate; // 0x0
	bitfield:1 m_bIsFirstFrame; // 0x0
	bitfield:1 m_bAutoUpdateBBox; // 0x0
	bitfield:1 m_bAllocated; // 0x0
	bitfield:1 m_bSimulate; // 0x0
	bitfield:1 m_bShouldPerformCullCheck; // 0x0
	bitfield:1 m_bForceNoDraw; // 0x0
	bitfield:1 m_bDisableAggregation; // 0x0
	bitfield:1 m_bShouldSimulateDuringGamePaused; // 0x0
	bitfield:1 m_bShouldCheckFoW; // 0x0
	Vector m_vSortOrigin; // 0x34
	PARTICLE_EHANDLE__* m_hOwner; // 0x40
	CParticleProperty* m_pOwningParticleProperty; // 0x48
	Vector m_LastMin; // 0x60
	Vector m_LastMax; // 0x6c
	CSplitScreenSlot m_nSplitScreenUser; // 0x78
	Vector m_vecAggregationCenter; // 0x7c
	int32_t m_RefCount; // 0xa0
};

